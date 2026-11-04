using Photon.Pun;
using UnityEngine;
using Utility;

namespace Characters
{
    internal class BasicTitanMovementSync : BaseMovementSync
    {
        protected BasicTitan _titan;

        protected override void Awake()
        {
            base.Awake();
            _titan = GetComponent<BasicTitan>();
        }

        protected override void SendCustomStream(PhotonStream stream)
        {
            if (_titan.AI)
            {
                stream.SendNext(_titan.TargetViewId);
                stream.SendNext(_titan.LookAtTarget);
            }
            else if (_titan.LateUpdateHeadRotation.HasValue)
            {
                Quaternion rotation = _titan.LateUpdateHeadRotation.Value;
                stream.SendNext(QuaternionCompression.CompressQuaternion(ref rotation));
            }
            else
                stream.SendNext(null);
        }

        protected override void ReceiveCustomStream(PhotonStream stream)
        {
            if (_titan.AI)
            {
                _titan.TargetViewId = (int)stream.ReceiveNext();
                _titan.LookAtTarget = (bool)stream.ReceiveNext();
                return;
            }
            int? compressed = (int?)stream.ReceiveNext();
            if (compressed.HasValue)
            {
                Quaternion rotation = Quaternion.identity;
                QuaternionCompression.DecompressQuaternion(ref rotation, compressed.Value);
                _titan.LateUpdateHeadRotationRecv = rotation;
            }
            else
                _titan.LateUpdateHeadRotationRecv = null;
        }
    }
}
