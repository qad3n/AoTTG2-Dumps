using Photon.Pun;

namespace Projectiles
{
    internal partial class BladeThrowProjectile : BaseProjectile
    {
        [PunRPC]
        public override void DisableRPC(PhotonMessageInfo info)
        {
            if (Disabled)
                return;
            if (info.Sender != photonView.Owner)
                return;
            base.DisableRPC(info);
        }
    }
}
