using Photon.Pun;
using UI;
using UnityEngine;
using Utility;

namespace Characters
{
    internal class BaseMovementSync : MonoBehaviourPun, IPunObservable
    {
        public bool Disabled;
        protected Vector3 _correctPosition = Vector3.zero;
        protected Quaternion _correctRotation = Quaternion.identity;
        public Vector3 _correctVelocity = Vector3.zero;
        public Quaternion _correctCamera = Quaternion.identity;
        protected bool _syncVelocity;
        protected bool _syncCamera;
        protected float MaxPredictionTime = 0.5f;
        protected Transform _transform;
        protected Rigidbody _rigidbody;
        protected PhotonView _photonView;
        protected BaseCharacter _character;
        protected float _timeSinceLastMessage;

        protected float SmoothingDelay => 10f;

        protected virtual void Awake()
        {
            _transform = transform;
            _photonView = photonView;
            _correctPosition = _transform.position;
            _correctRotation = transform.rotation;
            _rigidbody = GetComponent<Rigidbody>();
            _character = GetComponent<BaseCharacter>();
            if (_rigidbody != null)
            {
                _syncVelocity = true;
                _correctVelocity = _rigidbody.linearVelocity;
            }
        }

        protected virtual void SendCustomStream(PhotonStream stream)
        {
        }

        protected virtual void ReceiveCustomStream(PhotonStream stream)
        {
        }

        protected virtual void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
        {
            if (stream.IsWriting)
            {
                stream.SendNext(_transform.position);
                Quaternion rotation = _transform.rotation;
                stream.SendNext(QuaternionCompression.CompressQuaternion(ref rotation));
                if (_syncVelocity)
                    stream.SendNext(_rigidbody.linearVelocity);
                if (_character != null && !_character.AI)
                {
                    int? camera = null;
                    if (((InGameMenu)UIManager.CurrentMenu)._spectateCount > 0)
                    {
                        Quaternion cameraRotation = SceneLoader.CurrentCamera.Cache.Transform.rotation;
                        camera = QuaternionCompression.CompressQuaternion(ref cameraRotation);
                    }
                    stream.SendNext(camera);
                }
                SendCustomStream(stream);
            }
            else
            {
                _correctPosition = (Vector3)stream.ReceiveNext();
                QuaternionCompression.DecompressQuaternion(ref _correctRotation, (int)stream.ReceiveNext());
                if (_syncVelocity)
                    _correctVelocity = (Vector3)stream.ReceiveNext();
                if (_character != null && !_character.AI)
                {
                    int? camera = (int?)stream.ReceiveNext();
                    if (camera.HasValue)
                        QuaternionCompression.DecompressQuaternion(ref _correctCamera, camera.Value);
                }
                ReceiveCustomStream(stream);
                _timeSinceLastMessage = 0f;
            }
        }

        protected virtual void Update()
        {
            if (Disabled || _photonView.IsMine)
                return;
            _transform.position = Vector3.Lerp(_transform.position, _correctPosition, Time.deltaTime * SmoothingDelay);
            _transform.rotation = Quaternion.Lerp(_transform.rotation, _correctRotation, Time.deltaTime * SmoothingDelay);
            if (_syncVelocity && _timeSinceLastMessage < MaxPredictionTime)
            {
                _correctPosition += _correctVelocity * Time.deltaTime;
                _timeSinceLastMessage += Time.deltaTime;
            }
        }

        void IPunObservable.OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
        {
            OnPhotonSerializeView(stream, info);
        }
    }
}
