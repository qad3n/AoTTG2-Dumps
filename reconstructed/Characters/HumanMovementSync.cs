using Photon.Pun;
using UnityEngine;
using Utility;

namespace Characters
{
    internal class HumanMovementSync : BaseMovementSync
    {
        private const float CarryForwardOffset = -0.4f;
        private const float CarryUpOffset = 0.5f;

        protected Human _human;

        protected override void Awake()
        {
            base.Awake();
            _human = GetComponent<Human>();
        }

        protected override void SendCustomStream(PhotonStream stream)
        {
            if (_human.LateUpdateHeadRotation.HasValue)
            {
                Quaternion rotation = _human.LateUpdateHeadRotation.Value;
                stream.SendNext(QuaternionCompression.CompressQuaternion(ref rotation));
            }
            else
                stream.SendNext(null);
        }

        protected override void ReceiveCustomStream(PhotonStream stream)
        {
            int? compressed = (int?)stream.ReceiveNext();
            if (compressed.HasValue)
            {
                Quaternion rotation = Quaternion.identity;
                QuaternionCompression.DecompressQuaternion(ref rotation, compressed.Value);
                _human.LateUpdateHeadRotationRecv = rotation;
            }
            else
                _human.LateUpdateHeadRotationRecv = null;
        }

        protected override void Update()
        {
            if (Disabled || _photonView.IsMine)
                return;
            if (_human.MountState == HumanMountState.MapObject && !_human.CanMountedAttack && _human.MountedTransform != null)
            {
                _transform.position = _human.MountedTransform.TransformPoint(_human.MountedPositionOffset);
                _transform.rotation = Quaternion.Euler(_human.MountedTransform.rotation.eulerAngles + _human.MountedRotationOffset);
                return;
            }
            if (_human.CarryState == HumanCarryState.Carry && _human.Carrier != null)
            {
                Vector3 forward = _human.Carrier.Cache.Transform.forward;
                Vector3 up = _human.Carrier.Cache.Transform.up;
                _transform.position = _human.Carrier.Cache.Transform.position + forward * CarryForwardOffset + up * CarryUpOffset;
                _transform.rotation = _human.Carrier.Cache.Transform.rotation;
                return;
            }
            _transform.position = Vector3.Lerp(_transform.position, _correctPosition, Time.deltaTime * SmoothingDelay);
            _transform.rotation = Quaternion.Lerp(_transform.rotation, _correctRotation, Time.deltaTime * SmoothingDelay);
            if (_human.BackHuman != null)
                _human.CarryVelocity = _correctVelocity;
            if (_timeSinceLastMessage < MaxPredictionTime)
            {
                _correctPosition += _correctVelocity * Time.deltaTime;
                _timeSinceLastMessage += Time.deltaTime;
            }
        }
    }
}
