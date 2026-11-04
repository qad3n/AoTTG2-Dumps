using ApplicationManagers;
using Cameras;
using Photon.Pun;
using UnityEngine;

namespace Characters
{
    internal abstract partial class BaseTitan : BaseCharacter
    {
        private const float MinSize = 0.1f;
        private const float MaxSize = 50f;
        private const float ConfusedDuration = 10f;
        private const float ConfusedAttackSpeedScale = 0.67f;

        [PunRPC]
        public virtual void GrabRPC(int viewId, bool left, PhotonMessageInfo info)
        {
            PhotonView view = PhotonView.Find(viewId);
            if (view?.Owner != info.Sender)
                return;
            Human human = view.GetComponent<Human>();
            if (this.IsMine())
                HoldHuman = human;
            human.Grabber = this;
            if (left)
                human.GrabHand = BaseTitanCache.GrabLSocket;
            else
                human.GrabHand = BaseTitanCache.GrabRSocket;
        }

        [PunRPC]
        public virtual void UngrabRPC(int viewId, PhotonMessageInfo info)
        {
            PhotonView view = PhotonView.Find(viewId);
            if (view?.Owner != info.Sender)
                return;
            Human human = view.GetComponent<Human>();
            if (this.IsMine())
                HoldHuman = null;
            human.Grabber = null;
            human.GrabHand = null;
        }

        [PunRPC]
        public virtual void DecreaseAttackSpeedRPC(PhotonMessageInfo info)
        {
            float confusedTime = ConfusedTime;
            ConfusedTime = ConfusedDuration;
            if (confusedTime <= 0f)
            {
                PreviousAttackSpeedMultiplier = AttackSpeedMultiplier;
                AttackSpeedMultiplier = AttackSpeedMultiplier * ConfusedAttackSpeedScale;
            }
        }

        [PunRPC]
        public void SetSizeRPC(float size, PhotonMessageInfo info)
        {
            if (info.Sender != Cache.PhotonView.Owner)
                return;
            size = Mathf.Clamp(size, MinSize, MaxSize);
            transform.localScale = new Vector3(size, size, size);
            Size = size;
            SetSizeParticles(size);
            SetSizeAnimations(size);
            ScaleSounds(size);
            InGameCamera camera = (InGameCamera)SceneLoader.CurrentCamera;
            if (camera._follow == this)
                camera.SetFollow(this);
        }
    }
}
