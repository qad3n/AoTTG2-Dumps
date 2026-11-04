using Photon.Pun;

namespace Characters
{
    internal partial class Horse : BaseCharacter
    {
        [PunRPC]
        public override void GetHitRPC(int viewId, string name, int damage, string type, string collider)
        {
            if (viewId > 0 && _assignedHuman != null && viewId == _assignedHuman.photonView.ViewID)
                return;
            base.GetHitRPC(viewId, name, damage, type, collider);
        }
    }
}
