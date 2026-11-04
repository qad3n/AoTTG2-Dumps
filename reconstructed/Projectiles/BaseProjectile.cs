using Characters;
using Photon.Pun;
using UnityEngine;

namespace Projectiles
{
    internal partial class BaseProjectile : BaseMovementSync
    {
        [PunRPC]
        public virtual void SetupRPC(int charViewId, object[] settings, PhotonMessageInfo info)
        {
            if (info.Sender != photonView.Owner)
                return;
            if (charViewId != -1)
            {
                _owner = PhotonView.Find(charViewId).GetComponent<BaseCharacter>();
                _team = _owner.Team;
            }
            SetupSettings(settings);
            RegisterObjects();
            RegisterColliders();
            if (_owner != null)
            {
                IgnoreCollisions(_owner);
                if (_owner is Human human && human.MountState == HumanMountState.Horse && human.Horse != null)
                    IgnoreCollisions(human.Horse);
            }
        }

        private void IgnoreCollisions(BaseCharacter character)
        {
            foreach (Collider c1 in character.Cache.Colliders)
            {
                foreach (Collider c2 in _colliders)
                    Physics.IgnoreCollision(c1, c2);
            }
        }

        [PunRPC]
        public virtual void DisableRPC(PhotonMessageInfo info)
        {
            if (Disabled)
                return;
            if (info.Sender != photonView.Owner)
                return;
            foreach (GameObject obj in _hideObjects)
                obj.SetActive(false);
            foreach (Collider c in _colliders)
                c.enabled = false;
            foreach (ParticleSystem system in _fadeTrails)
                SetDisabledTrailFade(system);
            GetComponent<Rigidbody>().linearVelocity = Vector3.zero;
            if (_force != null)
                _force.force = Vector3.zero;
            Disabled = true;
        }
    }
}
