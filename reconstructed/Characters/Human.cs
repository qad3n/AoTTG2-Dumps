using System;
using System.Collections.Generic;
using GameManagers;
using PatreonEffects;
using Photon.Pun;
using Settings;
using UnityEngine;
using Utility;

namespace Characters
{
    internal partial class Human : BaseCharacter
    {
        private const float ShortShareRange = 10f;
        private const float LongShareRange = 25f;
        private const int DefaultAcceleration = 100;
        private const int DefaultSpeed = 75;
        private const int DefaultGas = 75;
        private const int DefaultAmmunition = 70;
        private const int NoCarrySender = -1;
        private const float HookDistanceExponent = 0.1f;
        private const float HookLiftScale = 0.2f;
        private const float MaxHookLift = 10f;
        private const float DashFadeTime = 0.05f;
        private const float DashStartTime = 0.1f;
        private const float TrailStopEmitTime = 0.1f;

        [PunRPC]
        public void ShareSuppliesRPC(int recipientId, int transferId, float gas, int ammo, int weapon, float range, PhotonMessageInfo info)
        {
            if (Cache.PhotonView.Owner != info.Sender)
                return;
            PhotonView view = PhotonView.Find(recipientId);
            Human recipient = view == null ? null : view.GetComponent<Human>();
            float sharedGas = 0f;
            int sharedAmmo = 0;
            if (!Dead && recipient != null && recipient.IsMine() && !recipient.AI && !recipient.Dead && recipient.FinishSetup && recipient != this
                && TeamInfo.SameTeam(this, recipient) && float.IsFinite(gas) && gas >= 0f && ammo >= 0 && (range == ShortShareRange || range == LongShareRange)
                && (Cache.Transform.position - recipient.Cache.Transform.position).sqrMagnitude < range * range)
            {
                sharedGas = Math.Min(gas, Math.Max(0f, recipient.Stats.MaxGas - recipient.Stats.CurrentGas));
                recipient.Stats.CurrentGas += sharedGas;
                if ((int)recipient.Setup.Weapon == weapon)
                    sharedAmmo = AddSupplyAmmo(recipient.Weapon, ammo, 0);
                recipient.RefreshSupplyWeapon();
            }
            Cache.PhotonView.RPC("ConfirmSharedSuppliesRPC", info.Sender, new object[] { transferId, sharedGas, sharedAmmo });
        }

        [PunRPC]
        public void ConfirmSharedSuppliesRPC(int transferId, float gas, int ammo, PhotonMessageInfo info)
        {
            SupplyTransfer transfer = _supplyTransfer;
            if (!IsMine() || transfer == null || transfer.Id != transferId || transfer.Recipient != info.Sender || !float.IsFinite(gas)
                || gas < 0f || gas > transfer.Gas || ammo < 0 || ammo > transfer.Ammo)
                return;
            _supplyTransfer = null;
            if (Dead || !FinishSetup)
                return;
            Stats.CurrentGas += Math.Min(transfer.Gas - gas, Math.Max(0f, Stats.MaxGas - Stats.CurrentGas));
            if (Weapon == transfer.Weapon)
                AddSupplyAmmo(Weapon, transfer.Ammo - ammo, transfer.RemovedRounds);
            RefreshSupplyWeapon();
        }

        [PunRPC]
        public void BlowAwayRPC(Vector3 force, PhotonMessageInfo info)
        {
            if (info.photonView.IsMine)
                Cache.Rigidbody.AddForce(force, ForceMode.Impulse);
        }

        [PunRPC]
        public override void MarkDeadRPC(PhotonMessageInfo info)
        {
            if (info.Sender != Cache.PhotonView.Owner)
                return;
            Dead = true;
            if (Setup != null)
                Setup.DeleteDie();
            GetComponent<CapsuleCollider>().enabled = false;
            if (IsMine())
            {
                FalseAttack();
                SetCarrierTriggerCollider(false);
            }
        }

        [PunRPC]
        public virtual void UngrabRPC(PhotonMessageInfo info)
        {
            if (Grabber == null || info.Sender != Grabber.Cache.PhotonView.Owner)
                return;
            Ungrab(false, true, false);
        }

        [PunRPC]
        public void MountRPC(int mapObjectID, string transformName, Vector3 positionOffset, Vector3 rotationOffset, bool canMountedAttack, PhotonMessageInfo info)
        {
            if (info.Sender != Cache.PhotonView.Owner)
                return;
            CanMountedAttack = canMountedAttack;
            MountedMapObject = null;
            MountState = HumanMountState.MapObject;
            MountedTransform = null;
            if (_inGameManager.IsFinishedLoading())
                FinishMount(mapObjectID, transformName, positionOffset, rotationOffset);
            else
                StartCoroutine(WaitAndMount(mapObjectID, transformName, positionOffset, rotationOffset));
        }

        [PunRPC]
        public void UnmountRPC(PhotonMessageInfo info)
        {
            if (info.Sender != Cache.PhotonView.Owner)
                return;
            MountState = HumanMountState.None;
            CanMountedAttack = false;
            MountedTransform = null;
            MountedMapObject = null;
        }

        [PunRPC]
        public void CarryRPC(int initiatorViewId, PhotonMessageInfo info)
        {
            PhotonView initiatorView = PhotonView.Find(initiatorViewId);
            if (initiatorView == null || initiatorView.Owner != info.Sender)
                return;
            Human initiator = initiatorView.GetComponent<Human>();
            if (initiator == null)
                return;
            _lastCarryRPCSender = initiatorViewId;
            if (Cache.PhotonView.IsMine && IsCarryableBy(initiator))
                Cache.PhotonView.RPC("ConfirmCarryRPC", RpcTarget.All, new object[] { initiatorViewId, Cache.PhotonView.ViewID });
        }

        [PunRPC]
        public void ConfirmCarryRPC(int initiatorViewId, int targetViewId, PhotonMessageInfo info)
        {
            PhotonView targetView = PhotonView.Find(targetViewId);
            if (targetView == null || targetView != Cache.PhotonView)
                return;
            if (targetView.Owner != info.Sender || _lastCarryRPCSender != initiatorViewId)
                return;
            PhotonView initiatorView = PhotonView.Find(initiatorViewId);
            if (initiatorView == null)
                return;
            Human initiator = initiatorView.GetComponent<Human>();
            if (initiator == null)
                return;
            Carrier = initiator;
            Carrier.BackHuman = this;
            CarryState = HumanCarryState.Carry;
            _lastCarryRPCSender = NoCarrySender;
            if (Cache.PhotonView.IsMine)
                Carry(Carrier, Carrier.Cache.Transform);
        }

        [PunRPC]
        public virtual void UncarryRPC(PhotonMessageInfo info)
        {
            CarryState = HumanCarryState.None;
            if (Cache.PhotonView.IsMine)
                Uncarry();
            if (Carrier != null)
                Carrier.BackHuman = null;
            Carrier = null;
        }

        [PunRPC]
        protected void SetSheathedRPC(bool sheathed, PhotonMessageInfo info)
        {
            if (info.Sender != null && info.Sender != Cache.PhotonView.Owner)
                return;
            Sheathed = sheathed;
        }

        [PunRPC]
        public override void GetHitRPC(int viewId, string name, int damage, string type, string collider)
        {
            if (Dead || IsInvincible)
                return;
            if (type == "TitanEat")
            {
                base.GetHitRPC(viewId, name, damage, type, collider);
                if (!Dead)
                    Ungrab(false, true, false);
            }
            else if (type.StartsWith("Grab"))
            {
                if (_state != HumanState.Grab)
                    Grab((BaseTitan)Util.FindCharacterByViewId(viewId), type);
            }
            else if (type == "Hook")
                base.GetHitRPC(viewId, Util.FindCharacterByViewId(viewId).RichTextName + "'s Hook", damage, type, collider);
            else
                base.GetHitRPC(viewId, name, damage, type, collider);
        }

        [PunRPC]
        public override void GetDamagedRPC(string name, int damage)
        {
            if (!Dead && !IsInvincible)
                base.GetDamagedRPC(name, damage);
        }

        [PunRPC]
        public void SetupRPC(string customSetJson, int humanWeapon, PhotonMessageInfo info)
        {
            if (info.Sender != Cache.PhotonView.Owner)
                return;
            HumanCustomSet set = new HumanCustomSet();
            set.DeserializeFromJsonString(customSetJson);
            if (!PatreonHelper.HasCharacterEffectAccess(info.Sender))
            {
                set.HairEffect.Value = CharacterEffectType.None.ToString();
                set.BladeEffect.Value = CharacterEffectType.None.ToString();
            }
            Setup.Load(set, (HumanWeapon)humanWeapon, false);
            Stats = HumanStats.Deserialize(Stats, Setup.CustomSet.Stats.Value);
            if (!SettingsManager.InGameCurrent.Misc.CustomPerks.Value)
                Stats.DisablePerks();
            if (!SettingsManager.InGameCurrent.Misc.CustomStats.Value)
            {
                Stats.Acceleration = DefaultAcceleration;
                Stats.Speed = DefaultSpeed;
                Stats.Gas = DefaultGas;
                Stats.Ammunition = DefaultAmmunition;
                Stats.ResetGas();
                Stats.UpdateStats();
            }
            if (!Setup.HasODM)
            {
                Stats.CurrentGas = 0f;
                Stats.MaxGas = 0f;
            }
            bool isGun = humanWeapon == (int)HumanWeapon.AHSS || humanWeapon == (int)HumanWeapon.APG;
            if (HookLeft != null)
                HookLeft.DestroyHooks();
            if (HookRight != null)
                HookRight.DestroyHooks();
            HookLeft = new HookUseable(this, true, isGun);
            HookRight = new HookUseable(this, false, isGun);
            bool male = Setup.CustomSet.Sex.Value == (int)HumanSex.Male;
            RunAnimation = HumanAnimations.Run;
            WalkAnimation = HumanAnimations.Walk;
            if (Setup.Weapon == HumanWeapon.AHSS || Setup.Weapon == HumanWeapon.APG)
                StandAnimation = male ? HumanAnimations.IdleAHSSM : HumanAnimations.IdleAHSSF;
            else if (Setup.Weapon == HumanWeapon.Thunderspear)
            {
                StandAnimation = male ? HumanAnimations.IdleTSM : HumanAnimations.IdleTSF;
                RunAnimation = HumanAnimations.RunTS;
            }
            else
                StandAnimation = male ? HumanAnimations.IdleM : HumanAnimations.IdleF;
            if (IsMine())
            {
                SetupWeapon(humanWeapon);
                SetupItems();
                SetSpecial(SettingsManager.InGameCharacterSettings.Special.Value);
            }
            FinishSetup = true;
            if (Sheathed)
                SetWeaponPartsActive(false);
            List<string> namesToIgnore = new List<string> { "char_eyes", "char_face", "char_glasses" };
            if (OutlineComponent != null)
                OutlineComponent.RefreshRenderers(namesToIgnore);
            CustomAnimationSpeed();
            StartCoroutine(WaitAndNotifyReloaded());
        }

        [PunRPC]
        public void SetHoodRPC(bool hoodUp, PhotonMessageInfo info)
        {
            if (info.Sender != Cache.PhotonView.Owner || !FinishSetup || Dead)
                return;
            Setup.SetHood(hoodUp);
        }

        [PunRPC]
        public void LoadSkinRPC(int horse, string url, PhotonMessageInfo info)
        {
            if (info.Sender != photonView.Owner || !FinishSetup)
                return;
            HumanCustomSkinSettings settings = SettingsManager.CustomSkinSettings.Human;
            if (settings.SkinsEnabled.Value && (!settings.SkinsLocal.Value || photonView.IsMine))
                StartCoroutine(_customSkinLoader.LoadSkinsFromRPC(new object[] { horse, url }));
            else
                _customSkinLoader.Finished = true;
        }

        [PunRPC]
        public void SetHookStateRPC(bool left, int hookId, int state, PhotonMessageInfo info)
        {
            if (info.Sender != photonView.Owner || !FinishSetup)
                return;
            HookUseable hook = left ? HookLeft : HookRight;
            hook.Hooks[hookId].OnSetHookState(state, info);
        }

        [PunRPC]
        public void SetHookingRPC(bool left, int hookId, Vector3 baseVelocity, Vector3 relativeVelocity, PhotonMessageInfo info)
        {
            if (info.Sender != photonView.Owner || !FinishSetup)
                return;
            HookUseable hook = left ? HookLeft : HookRight;
            hook.Hooks[hookId].OnSetHooking(baseVelocity, relativeVelocity, info);
        }

        [PunRPC]
        public void SetHookedRPC(bool left, int hookId, Vector3 position, int viewId, int objectId, PhotonMessageInfo info)
        {
            if (info.Sender != photonView.Owner || !FinishSetup)
                return;
            HookUseable hook = left ? HookLeft : HookRight;
            hook.Hooks[hookId].OnSetHooked(position, viewId, objectId, info);
        }

        [PunRPC]
        public void SetSmokeRPC(bool active, PhotonMessageInfo info)
        {
            if (info.Sender != Cache.PhotonView.Owner || !FinishSetup)
                return;
            ToggleParticles(HumanCache.Smoke, active && _gasEffectEnabled);
        }

        [PunRPC]
        protected void ToggleSparksRPC(bool toggle, PhotonMessageInfo info)
        {
            if (info.Sender != Cache.PhotonView.Owner || !FinishSetup)
                return;
            ToggleParticles(HumanCache.Sparks, toggle && EffectsEnabled);
        }

        [PunRPC]
        public void SetThunderspearsRPC(bool hasLeft, bool hasRight, PhotonMessageInfo info)
        {
            if (info.Sender != photonView.Owner || !FinishSetup)
                return;
            if (Setup._part_blade_l != null)
                Setup._part_blade_l.SetActive(hasLeft && !Sheathed);
            if (Setup._part_blade_r != null)
                Setup._part_blade_r.SetActive(hasRight && !Sheathed);
        }

        private bool CanBeHookedBy(BaseCharacter human, PhotonMessageInfo info)
        {
            return IsMine() && human != null && !Dead && human.Cache.PhotonView.Owner == info.Sender && _state != HumanState.Grab
                && CarryState != HumanCarryState.Carry && MountState == HumanMountState.None && human != this;
        }

        [PunRPC]
        public void OnHookedByHuman(int viewId, PhotonMessageInfo info)
        {
            BaseCharacter human = Util.FindCharacterByViewId(viewId);
            if (!CanBeHookedBy(human, info))
                return;
            Vector3 direction = human.Cache.Transform.position - Cache.Transform.position;
            float loss = CharacterData.HumanWeaponInfo["Hook"]["InitialVelocityLoss"].AsFloat;
            Cache.Rigidbody.AddForce(-Cache.Rigidbody.linearVelocity * loss, ForceMode.VelocityChange);
            float num = Mathf.Pow(direction.magnitude, HookDistanceExponent);
            if (Grounded)
                Cache.Rigidbody.AddForce(Vector3.up * Mathf.Min(direction.magnitude * HookLiftScale, MaxHookLift), ForceMode.Impulse);
            Cache.Rigidbody.AddForce(direction * num * CharacterData.HumanWeaponInfo["Hook"]["InitialPullForce"].AsFloat, ForceMode.Impulse);
            CrossFade(HumanAnimations.Dash, DashFadeTime, DashStartTime / Animation.GetLength(HumanAnimations.Dash));
            State = HumanState.Stun;
            _stateTimeLeft = CharacterData.HumanWeaponInfo["Hook"]["StunTime"].AsFloat;
            FalseAttack();
            float facingDirection = Mathf.Atan2(direction.x, direction.z) * Mathf.Rad2Deg;
            Quaternion rotation = Quaternion.Euler(0f, facingDirection, 0f);
            Cache.Rigidbody.rotation = rotation;
            Cache.Transform.rotation = rotation;
            TargetAngle = facingDirection;
            _targetRotation = rotation;
        }

        [PunRPC]
        public void OnStillHookedByHuman(int viewId, PhotonMessageInfo info)
        {
            BaseCharacter human = Util.FindCharacterByViewId(viewId);
            if (!CanBeHookedBy(human, info))
                return;
            float loss = CharacterData.HumanWeaponInfo["Hook"]["ConstantVelocityLoss"].AsFloat;
            Cache.Rigidbody.AddForce(-Cache.Rigidbody.linearVelocity * loss, ForceMode.VelocityChange);
            float constantPullForce = CharacterData.HumanWeaponInfo["Hook"]["ConstantPullForce"].AsFloat;
            if (constantPullForce <= 0f)
                return;
            Vector3 direction = human.Cache.Transform.position - Cache.Transform.position;
            float num = Mathf.Pow(direction.magnitude, HookDistanceExponent);
            Cache.Rigidbody.AddForce(direction * num * constantPullForce, ForceMode.Impulse);
        }

        [PunRPC]
        public void SetTriggerColliderRPC(bool trigger, PhotonMessageInfo info)
        {
            if (info.Sender == Cache.PhotonView.Owner)
                GetComponent<CapsuleCollider>().isTrigger = trigger;
        }

        [PunRPC]
        public void ContinueAnimationRPC(PhotonMessageInfo info)
        {
            if (info.Sender != Cache.PhotonView.Owner)
                return;
            Animation.SetSpeedAll(1f);
            CustomAnimationSpeed();
            string animationName = GetCurrentAnimation();
            if (animationName != "")
                PlayAnimation(animationName);
        }

        [PunRPC]
        public void PauseAnimationRPC(PhotonMessageInfo info)
        {
            if (info.Sender != Cache.PhotonView.Owner)
                return;
            Animation.SetSpeedAll(0f);
        }

        [PunRPC]
        protected void ToggleBladesRPC(bool toggle, PhotonMessageInfo info)
        {
            if (info.Sender != null && info.Sender != Cache.PhotonView.Owner)
                return;
            if (!FinishSetup)
                return;
            SetWeaponPartsActive(toggle && !Sheathed);
        }

        [PunRPC]
        protected void ToggleBladeTrailsRPC(bool toggle, PhotonMessageInfo info)
        {
            if (info.Sender != null && info.Sender != Cache.PhotonView.Owner)
                return;
            if (Setup == null || Setup.LeftTrail == null || Setup.RightTrail == null)
                return;
            int trailMode = SettingsManager.GraphicsSettings.WeaponTrail.Value;
            bool canShowTrail = EffectsEnabled && (trailMode == (int)WeaponTrailMode.All || (trailMode == (int)WeaponTrailMode.Mine && IsMainCharacter()));
            if (toggle && canShowTrail)
            {
                Setup.LeftTrail.Emit = true;
                Setup.RightTrail.Emit = true;
                Setup.LeftTrail._emitTime = 0f;
                Setup.RightTrail._emitTime = 0f;
            }
            else
            {
                Setup.LeftTrail._emitTime = TrailStopEmitTime;
                Setup.RightTrail._emitTime = TrailStopEmitTime;
            }
            if (!canShowTrail)
            {
                if (Setup.LeftTrail.enabled || Setup.RightTrail.enabled)
                {
                    Setup.LeftTrail.StopImmediate();
                    Setup.RightTrail.StopImmediate();
                    Setup.LeftTrail.enabled = false;
                    Setup.RightTrail.enabled = false;
                }
            }
            else if (!Setup.LeftTrail.enabled || !Setup.RightTrail.enabled)
            {
                Setup.LeftTrail.enabled = true;
                Setup.RightTrail.enabled = true;
            }
        }

        [PunRPC]
        protected void ToggleBladeFireRPC(int state, PhotonMessageInfo info)
        {
            if (info.Sender != null && info.Sender != Cache.PhotonView.Owner)
                return;
            if (Setup == null || Setup.Weapon != HumanWeapon.Blade || Setup._part_blade_l == null || Setup._part_blade_r == null)
                return;
            foreach (string effect in Setup.TierEffects)
                SetBladeEffectActive(effect, false);
            if (state == 0 || !EffectsEnabled || !SettingsManager.GraphicsSettings.WeaponFireEffect.Value)
                return;
            int tier = state - 1;
            if (tier < 0 || tier >= Setup.TierEffects.Length)
                return;
            SetBladeEffectActive(Setup.TierEffects[tier], true);
        }

        private void SetBladeEffectActive(string effect, bool active)
        {
            Transform left = Setup._part_blade_l.transform.Find(effect);
            Transform right = Setup._part_blade_r.transform.Find(effect);
            if (left != null)
                left.gameObject.SetActive(active);
            if (right != null)
                right.gameObject.SetActive(active);
        }

        [PunRPC]
        protected void ToggleBuff1RPC(bool toggle, PhotonMessageInfo info)
        {
            if (info.Sender != null && info.Sender != Cache.PhotonView.Owner)
                return;
            if (FinishSetup && HumanCache.Buff1 != null)
                SetParticleSystemsActive(HumanCache.Buff1, toggle && EffectsEnabled);
        }

        [PunRPC]
        protected void ToggleBuff2RPC(bool toggle, PhotonMessageInfo info)
        {
            if (info.Sender != null && info.Sender != Cache.PhotonView.Owner)
                return;
            if (FinishSetup && HumanCache.Buff2 != null)
                SetParticleSystemsActive(HumanCache.Buff2, toggle && EffectsEnabled);
        }

        [PunRPC]
        protected void ToggleFire1RPC(bool toggle, PhotonMessageInfo info)
        {
            if (info.Sender != null && info.Sender != Cache.PhotonView.Owner)
                return;
            if (FinishSetup && HumanCache.Fire1 != null)
                SetParticleSystemsActive(HumanCache.Fire1, toggle && EffectsEnabled);
        }
    }
}
