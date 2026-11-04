using Effects;
using Photon.Pun;
using Settings;
using UnityEngine;

namespace Characters
{
    internal partial class WallColossalShifter : BaseShifter
    {
        private const float SeverBloodScale = 100f;

        [PunRPC]
        public void SetLeftHandHealthRPC(int currentHealth, int maxHealth, PhotonMessageInfo info)
        {
            if (info.Sender == photonView.Owner)
            {
                CurrentLeftHandHealth = currentHealth;
                MaxLeftHandHealth = maxHealth;
            }
        }

        [PunRPC]
        public void SetRightHandHealthRPC(int currentHealth, int maxHealth, PhotonMessageInfo info)
        {
            if (info.Sender == photonView.Owner)
            {
                CurrentRightHandHealth = currentHealth;
                MaxRightHandHealth = maxHealth;
            }
        }

        [PunRPC]
        public void SetLeftHandStateRPC(byte state, PhotonMessageInfo info)
        {
            if (info.Sender != photonView.Owner)
                return;
            _leftHandState = (ColossalHandState)state;
            ApplyHandState(_leftHandState, ColossalCache.HandLHitbox, ColossalCache.LeftHandSteam);
        }

        [PunRPC]
        public void SetRightHandStateRPC(byte state, PhotonMessageInfo info)
        {
            if (info.Sender != photonView.Owner)
                return;
            _rightHandState = (ColossalHandState)state;
            ApplyHandState(_rightHandState, ColossalCache.HandRHitbox, ColossalCache.RightHandSteam);
        }

        private void ApplyHandState(ColossalHandState state, BaseHitbox hitbox, ParticleSystem steam)
        {
            switch (state)
            {
                case ColossalHandState.Healthy:
                case ColossalHandState.Damaged:
                    ToggleParticles(steam, false);
                    break;
                case ColossalHandState.Severed:
                    EffectSpawner.Spawn(EffectPrefabs.Blood1, hitbox.transform.position, Quaternion.Euler(-90f, 0f, 0f), Size * SeverBloodScale, true);
                    ToggleParticles(steam, EffectsEnabled);
                    break;
                case ColossalHandState.Recovering:
                    ToggleParticles(steam, EffectsEnabled);
                    break;
            }
        }

        [PunRPC]
        public void SetSteamStateRPC(byte state, PhotonMessageInfo info)
        {
            if (info.Sender == photonView.Owner)
                ApplySteamState((ColossalSteamState)state);
        }

        [PunRPC]
        public void SetStunStateRPC(byte state, PhotonMessageInfo info)
        {
            if (info.Sender == photonView.Owner)
                ApplyStunState((ColossalStunState)state);
        }

        [PunRPC]
        public void SetHandSeverTimesRPC(float leftTime, float rightTime, PhotonMessageInfo info)
        {
            if (info.Sender == photonView.Owner)
            {
                LeftHandSeverTimeLeft = leftTime;
                RightHandSeverTimeLeft = rightTime;
            }
        }

        [PunRPC]
        public void SetStunRecoveryTimesRPC(float stunTime, float recoveryTime, PhotonMessageInfo info)
        {
            if (info.Sender == photonView.Owner)
            {
                StunTimeLeft = stunTime;
                RecoveryTimeLeft = recoveryTime;
            }
        }

        [PunRPC]
        public override void GetHitRPC(int viewId, string name, int damage, string type, string collider)
        {
            if (Dead)
                return;
            InGameTitanSettings settings = SettingsManager.InGameCurrent.Titan;
            if (settings.TitanArmorEnabled.Value && damage < settings.TitanArmor.Value)
                damage = 0;
            if (collider == ColossalCache.NapeHurtbox.name)
            {
                base.GetHitRPC(viewId, name, damage, type, collider);
                return;
            }
            if (collider == ColossalCache.HandLHurtbox.name)
            {
                if (CanDamageLeftHand && IsHandDamageable(_leftHandState))
                    SetCurrentLeftHandHealth(CurrentLeftHandHealth - damage);
            }
            else if (collider == ColossalCache.HandRHurtbox.name && CanDamageRightHand && IsHandDamageable(_rightHandState))
                SetCurrentRightHandHealth(CurrentRightHandHealth - damage);
        }

        private static bool IsHandDamageable(ColossalHandState state)
        {
            return state == ColossalHandState.Healthy || state == ColossalHandState.Damaged;
        }
    }
}
