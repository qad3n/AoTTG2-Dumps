using System.Collections;
using Map;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine;
using Utility;

namespace CustomLogic
{
    internal class CustomLogicPhotonSync : MonoBehaviourPunCallbacks, IPunObservable, IOnPhotonViewOwnerChange, IPhotonViewCallback, IPunInstantiateMagicCallback
    {
        protected bool _syncTransforms = true;
        protected bool _syncVelocity = true;
        private Rigidbody _rigidbody;
        public int ObjectId;
        public PhotonView PhotonView;
        protected Vector3 _correctPosition = Vector3.zero;
        protected Quaternion _correctRotation = Quaternion.identity;
        protected Vector3 _correctVelocity = Vector3.zero;
        protected bool _inited;
        protected object[] _streamObjs;
        protected bool _synced;
        protected bool _persistsOwnership;
        protected SpawnIntent _spawnIntent;

        public bool SyncTransforms
        {
            get => _syncTransforms;
            set
            {
                if (PhotonView.IsMine)
                    _syncTransforms = value;
            }
        }

        public bool SyncVelocity
        {
            get => _syncVelocity;
            set
            {
                if (PhotonView.IsMine)
                    _syncVelocity = value;
            }
        }

        protected Rigidbody Rigidbody
        {
            get
            {
                if (_rigidbody == null && MapObject != null && MapObject.GameObject != null)
                    _rigidbody = MapObject.GameObject.GetComponent<Rigidbody>();
                return _rigidbody;
            }
        }

        public MapObject MapObject { get; protected set; }
        public CustomLogicMapObjectBuiltin CustomLogicMapObjectBuiltin { get; protected set; }
        public CustomLogicNetworkViewBuiltin NetworkView { get; protected set; }
        public float SmoothingDelay => 5f;

        protected virtual void Awake()
        {
            PhotonView = photonView;
        }

        public new virtual void OnEnable()
        {
            PhotonView.AddCallbackTarget(this);
            PhotonNetwork.AddCallbackTarget(this);
        }

        public new virtual void OnDisable()
        {
            PhotonView.RemoveCallbackTarget(this);
            PhotonNetwork.RemoveCallbackTarget(this);
        }

        public void OnPhotonInstantiate(PhotonMessageInfo info)
        {
            object[] data = info.photonView.InstantiationData;
            _spawnIntent = (SpawnIntent)data[0];
            if (_spawnIntent != SpawnIntent.PreplacedBind)
                return;
            ObjectId = (int)data[1];
            _syncVelocity = (bool)data[2];
        }

        public void Init(int mapObjectId, bool rigidbody)
        {
            MapObject = MapLoader.IdToMapObject[mapObjectId];
            PhotonView.RPC("InitRPC", RpcTarget.AllBuffered, new object[] { mapObjectId, rigidbody });
        }

        public void Init(int mapObjectId)
        {
            MapObject = MapLoader.IdToMapObject[mapObjectId];
            bool rigidbody = MapObject.GameObject.GetComponent<Rigidbody>() != null;
            PhotonView.RPC("InitRPC", RpcTarget.AllBuffered, new object[] { mapObjectId, rigidbody });
        }

        public void InitDynamic(bool persistsOwnership, string csvScript)
        {
            PhotonView.RPC("InitDynamicRPC", RpcTarget.OthersBuffered, new object[] { persistsOwnership, csvScript });
            CreateAndSetupObject(persistsOwnership, csvScript);
        }

        [PunRPC]
        public void InitRPC(int mapObjectId, bool syncVelocity, PhotonMessageInfo info)
        {
            if (info.Sender != PhotonView.Owner)
                return;
            _syncVelocity = syncVelocity;
            StartCoroutine(WaitAndFinishInit(mapObjectId));
        }

        [PunRPC]
        public void InitDynamicRPC(bool persistsOwnership, string csvScript, PhotonMessageInfo info)
        {
            if (info.Sender == PhotonView.Owner)
                StartCoroutine(WaitAndFinishDynamicInit(persistsOwnership, csvScript));
        }

        public void CreateAndSetupObject(bool persistsOwnership, string csvScript)
        {
            if (string.IsNullOrEmpty(csvScript))
                return;
            _persistsOwnership = persistsOwnership;
            ObjectId = MapLoader.ROOT_OBJECT_ID - photonView.ViewID - MapLoader.NETWORK_OFFSET;
            string script = string.Join("", csvScript.Split('\n'));
            MapScriptSceneObject sceneObject = new MapScriptSceneObject();
            sceneObject.Deserialize(script);
            sceneObject.Id = ObjectId;
            sceneObject.Parent = MapLoader.ROOT_OBJECT_ID;
            sceneObject.Networked = true;
            MapObject mapObject = MapLoader.LoadObject(sceneObject, false);
            mapObject.RuntimeCreated = true;
            MapLoader.SetParent(mapObject);
            NetworkView = new CustomLogicNetworkViewBuiltin(mapObject);
            CustomLogicMapObjectBuiltin = new CustomLogicMapObjectBuiltin(mapObject);
            MapObject = mapObject;
            if (CustomLogicManager.Evaluator.IdToMapObjectBuiltin.ContainsKey(ObjectId))
                Debug.LogWarning(string.Format("PhotonSync: MapObject for id {0} already exists, overwriting.", ObjectId));
            CustomLogicManager.Evaluator.IdToMapObjectBuiltin[ObjectId] = CustomLogicMapObjectBuiltin;
            if (CustomLogicManager.Evaluator.IdToNetworkView.ContainsKey(ObjectId))
                Debug.LogWarning(string.Format("PhotonSync: NetworkView for id {0} already exists, overwriting.", ObjectId));
            CustomLogicManager.Evaluator.IdToNetworkView[ObjectId] = NetworkView;
            NetworkView.SetSyncDynamic(this);
            CustomLogicManager.Evaluator.LoadRuntimeMapObjectComponents(mapObject, true);
            _correctPosition = MapObject.GameObject.transform.position;
            _correctRotation = MapObject.GameObject.transform.rotation;
            _inited = true;
        }

        public IEnumerator WaitAndFinishDynamicInit(bool persistsOwnership, string csvScript)
        {
            while (CustomLogicManager.Evaluator == null)
                yield return null;
            CreateAndSetupObject(persistsOwnership, csvScript);
        }

        public IEnumerator WaitAndFinishInit(int mapObjectId)
        {
            while (CustomLogicManager.Evaluator == null || !CustomLogicManager.Evaluator.IdToNetworkView.ContainsKey(mapObjectId))
                yield return null;
            FinishInit(mapObjectId);
        }

        private void FinishInit(int mapObjectId)
        {
            MapObject = MapLoader.IdToMapObject[mapObjectId];
            NetworkView = CustomLogicManager.Evaluator.IdToNetworkView[mapObjectId];
            NetworkView.SetSync(this);
            _correctPosition = MapObject.GameObject.transform.position;
            _correctRotation = MapObject.GameObject.transform.rotation;
            _inited = true;
        }

        [PunRPC]
        public void SendMessageRPC(string message, PhotonMessageInfo info)
        {
            if (NetworkView != null)
                NetworkView.OnNetworkMessage(new CustomLogicPlayerBuiltin(info.Sender), message, info.SentServerTime);
        }

        public void SendMessage(Player player, string message)
        {
            PhotonView.RPC("SendMessageRPC", player, new object[] { message });
        }

        public void SendMessageAll(string message)
        {
            PhotonView.RPC("SendMessageRPC", RpcTarget.All, new object[] { message });
        }

        public void SendMessageOthers(string message)
        {
            PhotonView.RPC("SendMessageRPC", RpcTarget.Others, new object[] { message });
        }

        public override void OnPlayerEnteredRoom(Player newPlayer)
        {
            if (_inited && _syncTransforms)
                PhotonView.RPC("SyncRPC", newPlayer, new object[] { GetPosition(), GetRotation() });
        }

        [PunRPC]
        public void SyncRPC(Vector3 position, Quaternion rotation, PhotonMessageInfo info)
        {
            if (info.Sender == PhotonView.Owner)
                StartCoroutine(WaitAndFinishSync(position, rotation));
        }

        public IEnumerator WaitAndFinishSync(Vector3 position, Quaternion rotation)
        {
            while (!_inited)
                yield return null;
            _correctPosition = position;
            _correctRotation = rotation;
        }

        protected virtual void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
        {
            if (stream.IsWriting)
            {
                if (!_inited || MapObject == null)
                {
                    stream.SendNext(false);
                    return;
                }
                bool hasObject = MapObject.GameObject != null;
                stream.SendNext(hasObject);
                if (!hasObject)
                    return;
                if (_syncTransforms)
                {
                    stream.SendNext(GetPosition());
                    Quaternion rotation = GetRotation();
                    stream.SendNext(QuaternionCompression.CompressQuaternion(ref rotation));
                    if (_syncVelocity)
                        stream.SendNext(GetVelocity());
                }
                if (NetworkView == null)
                    stream.SendNext(new object[0]);
                else
                    NetworkView.SendNetworkStream(stream);
                return;
            }
            if (!(bool)stream.ReceiveNext())
                return;
            _syncTransforms = !(stream.PeekNext() is object[]);
            if (_syncTransforms)
            {
                _correctPosition = (Vector3)stream.ReceiveNext();
                QuaternionCompression.DecompressQuaternion(ref _correctRotation, (int)stream.ReceiveNext());
                _syncVelocity = !(stream.PeekNext() is object[]);
                if (_syncVelocity)
                    _correctVelocity = (Vector3)stream.ReceiveNext();
            }
            if (!_inited)
                return;
            _streamObjs = (object[])stream.ReceiveNext();
            if (NetworkView != null && _streamObjs != null && _streamObjs.Length > 0)
                NetworkView.OnNetworkStream(_streamObjs);
        }

        protected virtual void Update()
        {
            if (PhotonView.IsMine || !_inited || MapObject.GameObject == null || !_syncTransforms)
                return;
            Transform objectTransform = MapObject.GameObject.transform;
            objectTransform.position = Vector3.Lerp(objectTransform.position, _correctPosition, Time.deltaTime * SmoothingDelay);
            objectTransform.rotation = Quaternion.Lerp(objectTransform.rotation, _correctRotation, Time.deltaTime * SmoothingDelay);
            if (_syncVelocity && Rigidbody != null)
                Rigidbody.linearVelocity = _correctVelocity;
        }

        private Vector3 GetPosition()
        {
            if (MapObject.GameObject == null)
                return Vector3.zero;
            return MapObject.GameObject.transform.position;
        }

        private Quaternion GetRotation()
        {
            if (MapObject.GameObject == null)
                return Quaternion.identity;
            return MapObject.GameObject.transform.rotation;
        }

        private Vector3 GetVelocity()
        {
            if (MapObject != null && MapObject.GameObject != null)
            {
                Rigidbody rigidbody = MapObject.GameObject.GetComponent<Rigidbody>();
                if (rigidbody != null)
                    return rigidbody.linearVelocity;
            }
            return Vector3.zero;
        }

        void IPunObservable.OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
        {
            OnPhotonSerializeView(stream, info);
        }

        public void Transfer(CustomLogicPlayerBuiltin player)
        {
            if (PhotonView.IsMine && player.Player != PhotonNetwork.LocalPlayer)
                PhotonView.TransferOwnership(player.Player.ActorNumber);
        }

        void IOnPhotonViewOwnerChange.OnOwnerChange(Player newOwner, Player previousOwner)
        {
            CustomLogicPlayerBuiltin previous = previousOwner == null ? null : new CustomLogicPlayerBuiltin(previousOwner);
            CustomLogicPlayerBuiltin next = new CustomLogicPlayerBuiltin(newOwner);
            if (NetworkView != null)
                NetworkView.OnNetworkTransfer(previous, next);
        }

        public override void OnPlayerLeftRoom(Player otherPlayer)
        {
            if (PhotonView.Owner == otherPlayer && _persistsOwnership && PhotonNetwork.IsMasterClient)
                PhotonView.TransferOwnership(PhotonNetwork.MasterClient);
        }

        public void DestroyMe()
        {
            if (PhotonView.IsMine)
                PhotonNetwork.Destroy(gameObject);
        }

        public void OnDestroy()
        {
            if (CustomLogicManager.Evaluator != null)
                CustomLogicMapBuiltin.DestroyMapObjectBuiltin(CustomLogicMapObjectBuiltin, true);
        }
    }
}
