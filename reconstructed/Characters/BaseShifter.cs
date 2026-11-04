using Photon.Pun;
using Settings;
using UnityEngine;
using Utility;

namespace Characters
{
    internal partial class BaseShifter : BaseTitan
    {
        [PunRPC]
        public void MarkTransformingRPC(PhotonMessageInfo info)
        {
            if (info.Sender != Cache.PhotonView.Owner)
                return;
            TransformingToHuman = true;
        }

        [PunRPC]
        public override void GetHitRPC(int viewId, string name, int damage, string type, string collider)
        {
            if (Dead)
                return;
            if (type == "CannonBall" || type == "Rock")
            {
                base.GetHitRPC(viewId, name, damage, type, collider);
                return;
            }
            InGameTitanSettings settings = SettingsManager.InGameCurrent.Titan;
            if (settings.TitanArmorEnabled.Value && damage < settings.TitanArmor.Value)
                damage = 0;
            if (IsMeleeHitType(type))
            {
                Stun(GetMeleeStunTime(type), IsComboStunType(type));
                BaseCharacter killer = Util.FindCharacterByViewId(viewId);
                if (killer != null && EnableAI)
                {
                    Vector3 direction = killer.Cache.Transform.position - Cache.Transform.position;
                    direction.y = 0f;
                    Cache.Transform.forward = direction.normalized;
                }
                GetMeleeHit(viewId, name, damage, type, collider);
            }
            else if (BaseTitanCache.EyesHurtbox != null && collider == BaseTitanCache.EyesHurtbox.name)
                Blind();
            else if (BaseTitanCache.LegLHurtbox != null && (collider == BaseTitanCache.LegLHurtbox.name || collider == BaseTitanCache.LegRHurtbox.name))
                Cripple();
            else if (collider == BaseTitanCache.NapeHurtbox.name)
                base.GetHitRPC(viewId, name, damage, type, collider);
        }

        [PunRPC]
        public void LoadSkinRPC(string url, PhotonMessageInfo info)
        {
            if (info.Sender != Cache.PhotonView.Owner)
                return;
            if (_customSkinLoader == null)
                return;
            BaseCustomSkinSettings<ShifterCustomSkinSet> settings = SettingsManager.CustomSkinSettings.Shifter;
            if (settings.SkinsEnabled.Value && (!settings.SkinsLocal.Value || Cache.PhotonView.IsMine))
                StartCoroutine(_customSkinLoader.LoadSkinsFromRPC(new object[] { url }));
        }
    }
}
