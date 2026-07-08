using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;
using UnityEngine.Serialization;

namespace Photon.Pun;

[Token(Token = "0x200001A")]
[AddComponentMenu("Photon Networking/Photon View")]
public class PhotonView : MonoBehaviour
{
	[Token(Token = "0x200001B")]
	public enum ObservableSearch
	{
		[Token(Token = "0x40000B6")]
		Manual,
		[Token(Token = "0x40000B7")]
		AutoFindActive,
		[Token(Token = "0x40000B8")]
		AutoFindAll
	}

	[Token(Token = "0x200001C")]
	private struct CallbackTargetChange
	{
		[Token(Token = "0x40000B9")]
		[FieldOffset(Offset = "0x0")]
		public IPhotonViewCallback obj;

		[Token(Token = "0x40000BA")]
		[FieldOffset(Offset = "0x8")]
		public Type type;

		[Token(Token = "0x40000BB")]
		[FieldOffset(Offset = "0x10")]
		public bool add;

		[Token(Token = "0x6000134")]
		[Address(RVA = "0x3C170B0", Offset = "0x3C170B0", VA = "0x3C170B0")]
		public CallbackTargetChange(IPhotonViewCallback obj, Type type, bool add)
		{
		}
	}

	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0x20")]
	[FormerlySerializedAs("group")]
	public byte Group;

	[Token(Token = "0x400009A")]
	[FieldOffset(Offset = "0x24")]
	[FormerlySerializedAs("prefixBackup")]
	public int prefixField;

	[Token(Token = "0x400009B")]
	[FieldOffset(Offset = "0x28")]
	internal object[] instantiationDataField;

	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0x30")]
	protected internal List<object> lastOnSerializeDataSent;

	[Token(Token = "0x400009D")]
	[FieldOffset(Offset = "0x38")]
	protected internal List<object> syncValues;

	[Token(Token = "0x400009E")]
	[FieldOffset(Offset = "0x40")]
	protected internal object[] lastOnSerializeDataReceived;

	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x48")]
	[FormerlySerializedAs("synchronization")]
	public ViewSynchronization Synchronization;

	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x4C")]
	protected internal bool mixedModeIsReliable;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x50")]
	[FormerlySerializedAs("ownershipTransfer")]
	public OwnershipOption OwnershipTransfer;

	[Token(Token = "0x40000A2")]
	[FieldOffset(Offset = "0x54")]
	public ObservableSearch observableSearch;

	[Token(Token = "0x40000A3")]
	[FieldOffset(Offset = "0x58")]
	public List<Component> ObservedComponents;

	[Token(Token = "0x40000A4")]
	[FieldOffset(Offset = "0x60")]
	internal MonoBehaviour[] RpcMonoBehaviours;

	[NonSerialized]
	[Token(Token = "0x40000AA")]
	[FieldOffset(Offset = "0x88")]
	private int ownerActorNr;

	[NonSerialized]
	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x8C")]
	private int controllerActorNr;

	[Token(Token = "0x40000AC")]
	[FieldOffset(Offset = "0x90")]
	[SerializeField]
	[FormerlySerializedAs("viewIdField")]
	[HideInInspector]
	public int sceneViewId;

	[NonSerialized]
	[Token(Token = "0x40000AD")]
	[FieldOffset(Offset = "0x94")]
	private int viewIdField;

	[Token(Token = "0x40000AE")]
	[FieldOffset(Offset = "0x98")]
	[FormerlySerializedAs("instantiationId")]
	public int InstantiationId;

	[Token(Token = "0x40000AF")]
	[FieldOffset(Offset = "0x9C")]
	[SerializeField]
	[HideInInspector]
	public bool isRuntimeInstantiated;

	[Token(Token = "0x40000B0")]
	[FieldOffset(Offset = "0x9D")]
	protected internal bool removedFromLocalViewList;

	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0xA0")]
	private Queue<CallbackTargetChange> CallbackChangeQueue;

	[Token(Token = "0x40000B2")]
	[FieldOffset(Offset = "0xA8")]
	private List<IOnPhotonViewPreNetDestroy> OnPreNetDestroyCallbacks;

	[Token(Token = "0x40000B3")]
	[FieldOffset(Offset = "0xB0")]
	private List<IOnPhotonViewOwnerChange> OnOwnerChangeCallbacks;

	[Token(Token = "0x40000B4")]
	[FieldOffset(Offset = "0xB8")]
	private List<IOnPhotonViewControllerChange> OnControllerChangeCallbacks;

	[Token(Token = "0x17000030")]
	public int Prefix
	{
		[Token(Token = "0x60000FE")]
		[Address(RVA = "0x3C0EB60", Offset = "0x3C0EB60", VA = "0x3C0EB60")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000FF")]
		[Address(RVA = "0x3C15A20", Offset = "0x3C15A20", VA = "0x3C15A20")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public object[] InstantiationData
	{
		[Token(Token = "0x6000100")]
		[Address(RVA = "0x3C15A30", Offset = "0x3C15A30", VA = "0x3C15A30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000101")]
		[Address(RVA = "0x3C15A40", Offset = "0x3C15A40", VA = "0x3C15A40")]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000032")]
	[Obsolete("Renamed. Use IsRoomView instead")]
	public bool IsSceneView
	{
		[Token(Token = "0x6000102")]
		[Address(RVA = "0x3C15A50", Offset = "0x3C15A50", VA = "0x3C15A50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000033")]
	public bool IsRoomView
	{
		[Token(Token = "0x6000103")]
		[Address(RVA = "0x3BF8DB0", Offset = "0x3BF8DB0", VA = "0x3BF8DB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000034")]
	public bool IsOwnerActive
	{
		[Token(Token = "0x6000104")]
		[Address(RVA = "0x3C14930", Offset = "0x3C14930", VA = "0x3C14930")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000035")]
	public bool IsMine
	{
		[Token(Token = "0x6000105")]
		[Address(RVA = "0x3C15A60", Offset = "0x3C15A60", VA = "0x3C15A60")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000106")]
		[Address(RVA = "0x3C15A70", Offset = "0x3C15A70", VA = "0x3C15A70")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000036")]
	public bool AmController
	{
		[Token(Token = "0x6000107")]
		[Address(RVA = "0x3C15A80", Offset = "0x3C15A80", VA = "0x3C15A80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000037")]
	public Player Controller
	{
		[Token(Token = "0x6000108")]
		[Address(RVA = "0x3C15A90", Offset = "0x3C15A90", VA = "0x3C15A90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000109")]
		[Address(RVA = "0x3C15AA0", Offset = "0x3C15AA0", VA = "0x3C15AA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public int CreatorActorNr
	{
		[Token(Token = "0x600010A")]
		[Address(RVA = "0x3C15AB0", Offset = "0x3C15AB0", VA = "0x3C15AB0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600010B")]
		[Address(RVA = "0x3C15AC0", Offset = "0x3C15AC0", VA = "0x3C15AC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000039")]
	public bool AmOwner
	{
		[Token(Token = "0x600010C")]
		[Address(RVA = "0x3C15AD0", Offset = "0x3C15AD0", VA = "0x3C15AD0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600010D")]
		[Address(RVA = "0x3C15AE0", Offset = "0x3C15AE0", VA = "0x3C15AE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700003A")]
	public Player Owner
	{
		[Token(Token = "0x600010E")]
		[Address(RVA = "0x3C15AF0", Offset = "0x3C15AF0", VA = "0x3C15AF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600010F")]
		[Address(RVA = "0x3C15B00", Offset = "0x3C15B00", VA = "0x3C15B00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700003B")]
	public int OwnerActorNr
	{
		[Token(Token = "0x6000110")]
		[Address(RVA = "0x3C15B10", Offset = "0x3C15B10", VA = "0x3C15B10")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000111")]
		[Address(RVA = "0x3BF8DC0", Offset = "0x3BF8DC0", VA = "0x3BF8DC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700003C")]
	public int ControllerActorNr
	{
		[Token(Token = "0x6000112")]
		[Address(RVA = "0x3C15ED0", Offset = "0x3C15ED0", VA = "0x3C15ED0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000113")]
		[Address(RVA = "0x3BF9170", Offset = "0x3BF9170", VA = "0x3BF9170")]
		set
		{
		}
	}

	[Token(Token = "0x1700003D")]
	public int ViewID
	{
		[Token(Token = "0x6000114")]
		[Address(RVA = "0x3C15EE0", Offset = "0x3C15EE0", VA = "0x3C15EE0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000115")]
		[Address(RVA = "0x3C061B0", Offset = "0x3C061B0", VA = "0x3C061B0")]
		set
		{
		}
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x3C15EF0", Offset = "0x3C15EF0", VA = "0x3C15EF0")]
	protected internal void Awake()
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x3C0CAE0", Offset = "0x3C0CAE0", VA = "0x3C0CAE0")]
	internal void ResetPhotonView(bool resetOwner)
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x3BF9D30", Offset = "0x3BF9D30", VA = "0x3BF9D30")]
	internal void RebuildControllerCache(bool ownerHasChanged = false)
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x3C0F3F0", Offset = "0x3C0F3F0", VA = "0x3C0F3F0")]
	public void OnPreNetDestroy(PhotonView rootView)
	{
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x3C16060", Offset = "0x3C16060", VA = "0x3C16060")]
	protected internal void OnDestroy()
	{
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x3C161C0", Offset = "0x3C161C0", VA = "0x3C161C0")]
	public void RequestOwnership()
	{
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x3C163C0", Offset = "0x3C163C0", VA = "0x3C163C0")]
	public void TransferOwnership(Player newOwner)
	{
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x3C165A0", Offset = "0x3C165A0", VA = "0x3C165A0")]
	public void TransferOwnership(int newOwnerId)
	{
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x3C15F20", Offset = "0x3C15F20", VA = "0x3C15F20")]
	public void FindObservables(bool force = false)
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x3C110C0", Offset = "0x3C110C0", VA = "0x3C110C0")]
	public void SerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x3C12300", Offset = "0x3C12300", VA = "0x3C12300")]
	public void DeserializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x3C16A70", Offset = "0x3C16A70", VA = "0x3C16A70")]
	protected internal void DeserializeComponent(Component component, PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x3C168A0", Offset = "0x3C168A0", VA = "0x3C168A0")]
	protected internal void SerializeComponent(Component component, PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x3C0EC10", Offset = "0x3C0EC10", VA = "0x3C0EC10")]
	public void RefreshRpcMonoBehaviourCache()
	{
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x3C16C40", Offset = "0x3C16C40", VA = "0x3C16C40")]
	public void RPC(string methodName, RpcTarget target, params object[] parameters)
	{
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x3C16CB0", Offset = "0x3C16CB0", VA = "0x3C16CB0")]
	public void RpcSecure(string methodName, RpcTarget target, bool encrypt, params object[] parameters)
	{
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x3C16D20", Offset = "0x3C16D20", VA = "0x3C16D20")]
	public void RPC(string methodName, Player targetPlayer, params object[] parameters)
	{
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x3C16D90", Offset = "0x3C16D90", VA = "0x3C16D90")]
	public void RpcSecure(string methodName, Player targetPlayer, bool encrypt, params object[] parameters)
	{
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x3C16E00", Offset = "0x3C16E00", VA = "0x3C16E00")]
	public static PhotonView Get(Component component)
	{
		return null;
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x3C16E70", Offset = "0x3C16E70", VA = "0x3C16E70")]
	public static PhotonView Get(GameObject gameObj)
	{
		return null;
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x3C16EE0", Offset = "0x3C16EE0", VA = "0x3C16EE0")]
	public static PhotonView Find(int viewID)
	{
		return null;
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x3C17000", Offset = "0x3C17000", VA = "0x3C17000")]
	public void AddCallbackTarget(IPhotonViewCallback obj)
	{
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x3C170E0", Offset = "0x3C170E0", VA = "0x3C170E0")]
	public void RemoveCallbackTarget(IPhotonViewCallback obj)
	{
	}

	[Token(Token = "0x600012D")]
	public void AddCallback<T>(IPhotonViewCallback obj) where T : class, IPhotonViewCallback
	{
	}

	[Token(Token = "0x600012E")]
	public void RemoveCallback<T>(IPhotonViewCallback obj) where T : class, IPhotonViewCallback
	{
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x3C15B20", Offset = "0x3C15B20", VA = "0x3C15B20")]
	private void UpdateCallbackLists()
	{
	}

	[Token(Token = "0x6000130")]
	private void TryRegisterCallback<T>(IPhotonViewCallback obj, ref List<T> list, bool add) where T : class, IPhotonViewCallback
	{
	}

	[Token(Token = "0x6000131")]
	private void RegisterCallback<T>(T obj, ref List<T> list, bool add) where T : class, IPhotonViewCallback
	{
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x3C17190", Offset = "0x3C17190", VA = "0x3C17190", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x3C17590", Offset = "0x3C17590", VA = "0x3C17590")]
	public PhotonView()
	{
	}
}
