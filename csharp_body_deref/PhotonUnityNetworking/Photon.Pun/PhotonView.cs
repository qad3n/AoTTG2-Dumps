// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.PhotonView
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/Code/PhotonView.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;
using UnityEngine.Serialization;

namespace Photon.Pun;

[Token(Token = "0x2000018")]
[AddComponentMenu("Photon Networking/Photon View")]
public class PhotonView : MonoBehaviour
{
	[Token(Token = "0x2000019")]
	public enum ObservableSearch
	{
		[Token(Token = "0x40000B1")]
		Manual,
		[Token(Token = "0x40000B2")]
		AutoFindActive,
		[Token(Token = "0x40000B3")]
		AutoFindAll
	}

	[Token(Token = "0x200001A")]
	private struct CallbackTargetChange
	{
		[Token(Token = "0x40000B4")]
		[FieldOffset(Offset = "0x0")]
		public IPhotonViewCallback obj;

		[Token(Token = "0x40000B5")]
		[FieldOffset(Offset = "0x8")]
		public Type type;

		[Token(Token = "0x40000B6")]
		[FieldOffset(Offset = "0x10")]
		public bool add;

		[Token(Token = "0x6000132")]
		[Address(RVA = "0x56E5BE0", Offset = "0x56E4BE0", VA = "0x56E5BE0")]
		public CallbackTargetChange(IPhotonViewCallback obj, Type type, bool add)
		{
		}
	}

	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0x20")]
	[FormerlySerializedAs("group")]
	public byte Group;

	[Token(Token = "0x4000095")]
	[FieldOffset(Offset = "0x24")]
	[FormerlySerializedAs("prefixBackup")]
	public int prefixField;

	[Token(Token = "0x4000096")]
	[FieldOffset(Offset = "0x28")]
	internal object[] instantiationDataField;

	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0x30")]
	protected internal List<object> lastOnSerializeDataSent;

	[Token(Token = "0x4000098")]
	[FieldOffset(Offset = "0x38")]
	protected internal List<object> syncValues;

	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0x40")]
	protected internal object[] lastOnSerializeDataReceived;

	[Token(Token = "0x400009A")]
	[FieldOffset(Offset = "0x48")]
	[FormerlySerializedAs("synchronization")]
	public ViewSynchronization Synchronization;

	[Token(Token = "0x400009B")]
	[FieldOffset(Offset = "0x4C")]
	protected internal bool mixedModeIsReliable;

	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0x50")]
	[FormerlySerializedAs("ownershipTransfer")]
	public OwnershipOption OwnershipTransfer;

	[Token(Token = "0x400009D")]
	[FieldOffset(Offset = "0x54")]
	public ObservableSearch observableSearch;

	[Token(Token = "0x400009E")]
	[FieldOffset(Offset = "0x58")]
	public List<Component> ObservedComponents;

	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x60")]
	internal MonoBehaviour[] RpcMonoBehaviours;

	[NonSerialized]
	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x88")]
	private int ownerActorNr;

	[NonSerialized]
	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x8C")]
	private int controllerActorNr;

	[Token(Token = "0x40000A7")]
	[FieldOffset(Offset = "0x90")]
	[SerializeField]
	[FormerlySerializedAs("viewIdField")]
	[HideInInspector]
	public int sceneViewId;

	[NonSerialized]
	[Token(Token = "0x40000A8")]
	[FieldOffset(Offset = "0x94")]
	private int viewIdField;

	[Token(Token = "0x40000A9")]
	[FieldOffset(Offset = "0x98")]
	[FormerlySerializedAs("instantiationId")]
	public int InstantiationId;

	[Token(Token = "0x40000AA")]
	[FieldOffset(Offset = "0x9C")]
	[SerializeField]
	[HideInInspector]
	public bool isRuntimeInstantiated;

	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x9D")]
	protected internal bool removedFromLocalViewList;

	[Token(Token = "0x40000AC")]
	[FieldOffset(Offset = "0xA0")]
	private Queue<CallbackTargetChange> CallbackChangeQueue;

	[Token(Token = "0x40000AD")]
	[FieldOffset(Offset = "0xA8")]
	private List<IOnPhotonViewPreNetDestroy> OnPreNetDestroyCallbacks;

	[Token(Token = "0x40000AE")]
	[FieldOffset(Offset = "0xB0")]
	private List<IOnPhotonViewOwnerChange> OnOwnerChangeCallbacks;

	[Token(Token = "0x40000AF")]
	[FieldOffset(Offset = "0xB8")]
	private List<IOnPhotonViewControllerChange> OnControllerChangeCallbacks;

	[Token(Token = "0x17000030")]
	public int Prefix
	{
		[Token(Token = "0x60000FC")]
		[Address(RVA = "0x56DD810", Offset = "0x56DC810", VA = "0x56DD810")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000FD")]
		[Address(RVA = "0x56E4630", Offset = "0x56E3630", VA = "0x56E4630")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public object[] InstantiationData
	{
		[Token(Token = "0x60000FE")]
		[Address(RVA = "0x56E4640", Offset = "0x56E3640", VA = "0x56E4640")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000FF")]
		[Address(RVA = "0x56E4650", Offset = "0x56E3650", VA = "0x56E4650")]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000032")]
	[Obsolete("Renamed. Use IsRoomView instead")]
	public bool IsSceneView
	{
		[Token(Token = "0x6000100")]
		[Address(RVA = "0x56E4660", Offset = "0x56E3660", VA = "0x56E4660")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000033")]
	public bool IsRoomView
	{
		[Token(Token = "0x6000101")]
		[Address(RVA = "0x56C8310", Offset = "0x56C7310", VA = "0x56C8310")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000034")]
	public bool IsOwnerActive
	{
		[Token(Token = "0x6000102")]
		[Address(RVA = "0x56E3550", Offset = "0x56E2550", VA = "0x56E3550")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000035")]
	public bool IsMine
	{
		[Token(Token = "0x6000103")]
		[Address(RVA = "0x56E4670", Offset = "0x56E3670", VA = "0x56E4670")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000104")]
		[Address(RVA = "0x56E4680", Offset = "0x56E3680", VA = "0x56E4680")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000036")]
	public bool AmController
	{
		[Token(Token = "0x6000105")]
		[Address(RVA = "0x56E4690", Offset = "0x56E3690", VA = "0x56E4690")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000037")]
	public Player Controller
	{
		[Token(Token = "0x6000106")]
		[Address(RVA = "0x56E46A0", Offset = "0x56E36A0", VA = "0x56E46A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000107")]
		[Address(RVA = "0x56E46B0", Offset = "0x56E36B0", VA = "0x56E46B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public int CreatorActorNr
	{
		[Token(Token = "0x6000108")]
		[Address(RVA = "0x56E46C0", Offset = "0x56E36C0", VA = "0x56E46C0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000109")]
		[Address(RVA = "0x56E46D0", Offset = "0x56E36D0", VA = "0x56E46D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000039")]
	public bool AmOwner
	{
		[Token(Token = "0x600010A")]
		[Address(RVA = "0x56E46E0", Offset = "0x56E36E0", VA = "0x56E46E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600010B")]
		[Address(RVA = "0x56E46F0", Offset = "0x56E36F0", VA = "0x56E46F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700003A")]
	public Player Owner
	{
		[Token(Token = "0x600010C")]
		[Address(RVA = "0x56E4700", Offset = "0x56E3700", VA = "0x56E4700")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600010D")]
		[Address(RVA = "0x56E4710", Offset = "0x56E3710", VA = "0x56E4710")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700003B")]
	public int OwnerActorNr
	{
		[Token(Token = "0x600010E")]
		[Address(RVA = "0x56E4720", Offset = "0x56E3720", VA = "0x56E4720")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600010F")]
		[Address(RVA = "0x56C8320", Offset = "0x56C7320", VA = "0x56C8320")]
		set
		{
		}
	}

	[Token(Token = "0x1700003C")]
	public int ControllerActorNr
	{
		[Token(Token = "0x6000110")]
		[Address(RVA = "0x56E4AA0", Offset = "0x56E3AA0", VA = "0x56E4AA0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000111")]
		[Address(RVA = "0x56C86B0", Offset = "0x56C76B0", VA = "0x56C86B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700003D")]
	public int ViewID
	{
		[Token(Token = "0x6000112")]
		[Address(RVA = "0x56E4AB0", Offset = "0x56E3AB0", VA = "0x56E4AB0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000113")]
		[Address(RVA = "0x56D52F0", Offset = "0x56D42F0", VA = "0x56D52F0")]
		set
		{
		}
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x56E4AC0", Offset = "0x56E3AC0", VA = "0x56E4AC0")]
	protected internal void Awake()
	{
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x56DB7E0", Offset = "0x56DA7E0", VA = "0x56DB7E0")]
	internal void ResetPhotonView(bool resetOwner)
	{
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x56C9230", Offset = "0x56C8230", VA = "0x56C9230")]
	internal void RebuildControllerCache(bool ownerHasChanged = false)
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x56DE090", Offset = "0x56DD090", VA = "0x56DE090")]
	public void OnPreNetDestroy(PhotonView rootView)
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x56E4C40", Offset = "0x56E3C40", VA = "0x56E4C40")]
	protected internal void OnDestroy()
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x56E4D80", Offset = "0x56E3D80", VA = "0x56E4D80")]
	public void RequestOwnership()
	{
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x56E4F80", Offset = "0x56E3F80", VA = "0x56E4F80")]
	public void TransferOwnership(Player newOwner)
	{
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x56E5150", Offset = "0x56E4150", VA = "0x56E5150")]
	public void TransferOwnership(int newOwnerId)
	{
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x56E4AF0", Offset = "0x56E3AF0", VA = "0x56E4AF0")]
	public void FindObservables(bool force = false)
	{
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x56DFDA0", Offset = "0x56DEDA0", VA = "0x56DFDA0")]
	public void SerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x56E0FA0", Offset = "0x56DFFA0", VA = "0x56E0FA0")]
	public void DeserializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x56E55E0", Offset = "0x56E45E0", VA = "0x56E55E0")]
	protected internal void DeserializeComponent(Component component, PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x56E5450", Offset = "0x56E4450", VA = "0x56E5450")]
	protected internal void SerializeComponent(Component component, PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x56DD8C0", Offset = "0x56DC8C0", VA = "0x56DD8C0")]
	public void RefreshRpcMonoBehaviourCache()
	{
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x56E5770", Offset = "0x56E4770", VA = "0x56E5770")]
	public void RPC(string methodName, RpcTarget target, params object[] parameters)
	{
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x56E57E0", Offset = "0x56E47E0", VA = "0x56E57E0")]
	public void RpcSecure(string methodName, RpcTarget target, bool encrypt, params object[] parameters)
	{
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x56E5850", Offset = "0x56E4850", VA = "0x56E5850")]
	public void RPC(string methodName, Player targetPlayer, params object[] parameters)
	{
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x56E58C0", Offset = "0x56E48C0", VA = "0x56E58C0")]
	public void RpcSecure(string methodName, Player targetPlayer, bool encrypt, params object[] parameters)
	{
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x56E5930", Offset = "0x56E4930", VA = "0x56E5930")]
	public static PhotonView Get(Component component)
	{
		return null;
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x56E59A0", Offset = "0x56E49A0", VA = "0x56E59A0")]
	public static PhotonView Get(GameObject gameObj)
	{
		return null;
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x56E5A10", Offset = "0x56E4A10", VA = "0x56E5A10")]
	public static PhotonView Find(int viewID)
	{
		return null;
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x56E5B30", Offset = "0x56E4B30", VA = "0x56E5B30")]
	public void AddCallbackTarget(IPhotonViewCallback obj)
	{
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x56E5C10", Offset = "0x56E4C10", VA = "0x56E5C10")]
	public void RemoveCallbackTarget(IPhotonViewCallback obj)
	{
	}

	[Token(Token = "0x600012B")]
	public void AddCallback<T>(IPhotonViewCallback obj) where T : class, IPhotonViewCallback
	{
	}

	[Token(Token = "0x600012C")]
	public void RemoveCallback<T>(IPhotonViewCallback obj) where T : class, IPhotonViewCallback
	{
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x56E4730", Offset = "0x56E3730", VA = "0x56E4730")]
	private void UpdateCallbackLists()
	{
	}

	[Token(Token = "0x600012E")]
	private void TryRegisterCallback<T>(IPhotonViewCallback obj, ref List<T> list, bool add) where T : class, IPhotonViewCallback
	{
	}

	[Token(Token = "0x600012F")]
	private void RegisterCallback<T>(T obj, ref List<T> list, bool add) where T : class, IPhotonViewCallback
	{
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x56E5CC0", Offset = "0x56E4CC0", VA = "0x56E5CC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x56E60A0", Offset = "0x56E50A0", VA = "0x56E60A0")]
	public PhotonView()
	{
	}
}
