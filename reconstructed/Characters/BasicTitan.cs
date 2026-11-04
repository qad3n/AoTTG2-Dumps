using Controllers;
using Photon.Pun;
using Settings;
using Spawnables;
using UnityEngine;
using Utility;

namespace Characters
{
    internal partial class BasicTitan : BaseTitan
    {
        private const int CapsuleAxisZ = 2;
        private const float CrawlerRadiusScale = 0.5f;
        private const float HaircutSizeScale = 0.25f;
        private const float LaughMaxAngle = 80f;
        private const float DistractTime = 10f;
        private const float HeadFallDuration = 3f;

        [PunRPC]
        public void SetCrawlerRPC(bool crawler, PhotonMessageInfo info)
        {
            if (info.Sender != Cache.PhotonView.Owner)
                return;
            IsCrawler = crawler;
            Animation.LegacyCrossFadeTiming = !crawler;
            CapsuleCollider capsule = (CapsuleCollider)BasicCache.Movebox;
            if (!crawler)
            {
                _originalCapsuleValue = capsule.radius;
                return;
            }
            capsule.direction = CapsuleAxisZ;
            capsule.radius *= CrawlerRadiusScale;
            capsule.center = new Vector3(0f, capsule.radius, 0f);
            _originalCapsuleValue = capsule.height;
            CapsuleCollider nape = (CapsuleCollider)BasicCache.NapeHurtbox;
            nape.radius *= 1f;
        }

        [PunRPC]
        public void SetWardedRPC(bool warded, WardedWeakSpot wardedWeakSpot, PhotonMessageInfo info)
        {
            if (info.Sender != Cache.PhotonView.Owner)
                return;
            isWarded = warded;
            CurrentWardedWeakSpot = wardedWeakSpot;
            LastWardedWeakSpot = wardedWeakSpot;
            StopWardedWeakSpotEffects();
            hardenedNape.SetActive(warded);
            ParticleSystem effect;
            switch (wardedWeakSpot)
            {
                case WardedWeakSpot.ArmL:
                    effect = BasicCache.WardedWeakSpotForearmL;
                    break;
                case WardedWeakSpot.ArmR:
                    effect = BasicCache.WardedWeakSpotForearmR;
                    break;
                case WardedWeakSpot.LegL:
                    effect = BasicCache.WardedWeakSpotLegL;
                    break;
                case WardedWeakSpot.LegR:
                    effect = BasicCache.WardedWeakSpotLegR;
                    break;
                default:
                    return;
            }
            effect.Play(true);
        }

        [PunRPC]
        private void DisableWardedEffectsRPC(PhotonMessageInfo info)
        {
            if (info.Sender != Cache.PhotonView.Owner)
                return;
            CurrentWardedWeakSpot = WardedWeakSpot.None;
            StopWardedWeakSpotEffects();
            hardenedNape.SetActive(false);
        }

        private void StopWardedWeakSpotEffects()
        {
            BasicCache.WardedWeakSpotForearmL.Stop(true);
            BasicCache.WardedWeakSpotForearmR.Stop(true);
            BasicCache.WardedWeakSpotLegL.Stop(true);
            BasicCache.WardedWeakSpotLegR.Stop(true);
        }

        [PunRPC]
        public void ClearRockRPC(PhotonMessageInfo info)
        {
            if (info.Sender != Cache.PhotonView.Owner)
                return;
            foreach (Rock1Spawnable rock in BasicCache.HandRHitbox.GetComponentsInChildren<Rock1Spawnable>())
                Destroy(rock.gameObject);
        }

        [PunRPC]
        public void SetupRPC(string json, PhotonMessageInfo info)
        {
            if (info.Sender != Cache.PhotonView.Owner)
                return;
            TitanCustomSet set = new TitanCustomSet();
            set.DeserializeFromJsonString(json);
            Setup.Load(set);
            if (_hairCut)
                BasicCache.HairSocket.gameObject.SetActive(false);
        }

        [PunRPC]
        public void ApplyHaircutRPC(int attackerViewId, PhotonMessageInfo info)
        {
            if (_hairCut)
                return;
            Human attacker = Util.FindCharacterByViewId(attackerViewId) as Human;
            if (attacker == null)
                return;
            if (attacker.Cache.PhotonView.Owner != info.Sender)
                return;
            _hairCut = true;
            if (EffectsEnabled && !_headDetached)
                HaircutEffect.Play(BasicCache.HairSocket, BasicCache.HeadCollider.bounds.size.magnitude * HaircutSizeScale);
            BasicCache.HairSocket.gameObject.SetActive(false);
        }

        [PunRPC]
        public void LoadSkinRPC(string url, PhotonMessageInfo info)
        {
            if (info.Sender != Cache.PhotonView.Owner)
                return;
            if (_customSkinLoader == null || string.IsNullOrEmpty(url))
                return;
            BaseCustomSkinSettings<TitanCustomSkinSet> settings = SettingsManager.CustomSkinSettings.Titan;
            if (settings.SkinsEnabled.Value && (!settings.SkinsLocal.Value || Cache.PhotonView.IsMine))
                StartCoroutine(_customSkinLoader.LoadSkinsFromRPC(new object[] { url }));
        }

        [PunRPC]
        public virtual void DisableArmRPC(bool left, PhotonMessageInfo info)
        {
            if (info.Sender == Cache.PhotonView.Owner)
                ApplyDisabledLimb(left, false);
        }

        [PunRPC]
        public void DisableHandRPC(bool left, PhotonMessageInfo info)
        {
            if (info.Sender == Cache.PhotonView.Owner)
                ApplyDisabledLimb(left, true);
        }

        [PunRPC]
        public virtual void LaughRPC(Vector3 source)
        {
            if (!AI || !Cache.PhotonView.IsMine)
                return;
            if (Vector3.Angle(Cache.Transform.forward, (source - Cache.Transform.position).normalized) < LaughMaxAngle)
                Emote("Laugh");
        }

        [PunRPC]
        public virtual void DistractRPC(int viewId)
        {
            if (!AI || !Cache.PhotonView.IsMine)
                return;
            BaseCharacter character = Util.FindCharacterByViewId(viewId);
            GetComponent<BaseTitanAIController>().SetEnemy(character, DistractTime);
        }

        [PunRPC]
        public override void MarkDeadRPC(PhotonMessageInfo info)
        {
            if (info.Sender != Cache.PhotonView.Owner || Dead)
                return;
            Dead = true;
            _deathVisualStartTime = Time.time - Mathf.Max(0f, (float)(PhotonNetwork.Time - info.SentServerTime));
            _deathFallSoundVolume = Cache.AudioSources[TitanSounds.DeathFall].volume;
            Animation.SetCullingType(true);
            if (EffectsEnabled && SettingsManager.GraphicsSettings.NapeBloodEnabled.Value)
                BasicCache.NapeBlood.Play(true);
        }

        [PunRPC]
        public override void GetHitRPC(int viewId, string name, int damage, string type, string collider)
        {
            ApplyHit(viewId, name, damage, type, collider);
            if (!Time.inFixedTimeStep)
                StartDeathAnimation();
        }

        [PunRPC]
        public void DetachHeadRPC(Vector3 launch, PhotonMessageInfo info)
        {
            if (info.Sender != Cache.PhotonView.Owner || _headDetached)
                return;
            _headDetached = true;
            BasicCache.NapeBlood.Stop(true, ParticleSystemStopBehavior.StopEmittingAndClear);
            SkinnedMeshRenderer head = Cache.Transform.Find("Head").GetComponent<SkinnedMeshRenderer>();
            bool decapitationBlood = false;
            if (EffectsEnabled)
            {
                decapitationBlood = SettingsManager.GraphicsSettings.NapeBloodEnabled.Value;
                ParticleSystem blood = decapitationBlood ? BasicCache.DecapitationBlood : null;
                float fallDelay = Mathf.Max(0f, _deathVisualStartTime + HeadFallDuration - Time.time);
                TitanLimbFallEffect.PlayHead(head, BasicCache.Head, launch + GetVelocity(), blood, fallDelay);
            }
            head.enabled = false;
            foreach (Renderer renderer in BasicCache.Head.GetComponentsInChildren<Renderer>())
                renderer.enabled = false;
            if (decapitationBlood)
                StartCoroutine(PlayDecapitationBlood());
        }
    }
}
