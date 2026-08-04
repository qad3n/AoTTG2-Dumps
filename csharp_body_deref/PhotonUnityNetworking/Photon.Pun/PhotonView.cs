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
		[Address(RVA = "0x3EFA5B0", Offset = "0x3EFA5B0", VA = "0x3EFA5B0")]
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
		[Address(RVA = "0x3EF2060", Offset = "0x3EF2060", VA = "0x3EF2060")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000FF")]
		[Address(RVA = "0x3EF8F20", Offset = "0x3EF8F20", VA = "0x3EF8F20")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public object[] InstantiationData
	{
		[Token(Token = "0x6000100")]
		[Address(RVA = "0x3EF8F30", Offset = "0x3EF8F30", VA = "0x3EF8F30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000101")]
		[Address(RVA = "0x3EF8F40", Offset = "0x3EF8F40", VA = "0x3EF8F40")]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000032")]
	[Obsolete("Renamed. Use IsRoomView instead")]
	public bool IsSceneView
	{
		[Token(Token = "0x6000102")]
		[Address(RVA = "0x3EF8F50", Offset = "0x3EF8F50", VA = "0x3EF8F50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000033")]
	public bool IsRoomView
	{
		[Token(Token = "0x6000103")]
		[Address(RVA = "0x3EDC2B0", Offset = "0x3EDC2B0", VA = "0x3EDC2B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000034")]
	public bool IsOwnerActive
	{
		[Token(Token = "0x6000104")]
		[Address(RVA = "0x3EF7E30", Offset = "0x3EF7E30", VA = "0x3EF7E30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000035")]
	public bool IsMine
	{
		[Token(Token = "0x6000105")]
		[Address(RVA = "0x3EF8F60", Offset = "0x3EF8F60", VA = "0x3EF8F60")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000106")]
		[Address(RVA = "0x3EF8F70", Offset = "0x3EF8F70", VA = "0x3EF8F70")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000036")]
	public bool AmController
	{
		[Token(Token = "0x6000107")]
		[Address(RVA = "0x3EF8F80", Offset = "0x3EF8F80", VA = "0x3EF8F80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000037")]
	public Player Controller
	{
		[Token(Token = "0x6000108")]
		[Address(RVA = "0x3EF8F90", Offset = "0x3EF8F90", VA = "0x3EF8F90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000109")]
		[Address(RVA = "0x3EF8FA0", Offset = "0x3EF8FA0", VA = "0x3EF8FA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public int CreatorActorNr
	{
		[Token(Token = "0x600010A")]
		[Address(RVA = "0x3EF8FB0", Offset = "0x3EF8FB0", VA = "0x3EF8FB0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600010B")]
		[Address(RVA = "0x3EF8FC0", Offset = "0x3EF8FC0", VA = "0x3EF8FC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000039")]
	public bool AmOwner
	{
		[Token(Token = "0x600010C")]
		[Address(RVA = "0x3EF8FD0", Offset = "0x3EF8FD0", VA = "0x3EF8FD0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600010D")]
		[Address(RVA = "0x3EF8FE0", Offset = "0x3EF8FE0", VA = "0x3EF8FE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700003A")]
	public Player Owner
	{
		[Token(Token = "0x600010E")]
		[Address(RVA = "0x3EF8FF0", Offset = "0x3EF8FF0", VA = "0x3EF8FF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600010F")]
		[Address(RVA = "0x3EF9000", Offset = "0x3EF9000", VA = "0x3EF9000")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700003B")]
	public int OwnerActorNr
	{
		[Token(Token = "0x6000110")]
		[Address(RVA = "0x3EF9010", Offset = "0x3EF9010", VA = "0x3EF9010")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000111")]
		[Address(RVA = "0x3EDC2C0", Offset = "0x3EDC2C0", VA = "0x3EDC2C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700003C")]
	public int ControllerActorNr
	{
		[Token(Token = "0x6000112")]
		[Address(RVA = "0x3EF93D0", Offset = "0x3EF93D0", VA = "0x3EF93D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000113")]
		[Address(RVA = "0x3EDC670", Offset = "0x3EDC670", VA = "0x3EDC670")]
		set
		{
		}
	}

	[Token(Token = "0x1700003D")]
	public int ViewID
	{
		[Token(Token = "0x6000114")]
		[Address(RVA = "0x3EF93E0", Offset = "0x3EF93E0", VA = "0x3EF93E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000115")]
		[Address(RVA = "0x3EE96B0", Offset = "0x3EE96B0", VA = "0x3EE96B0")]
		set
		{
		}
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x3EF93F0", Offset = "0x3EF93F0", VA = "0x3EF93F0")]
	protected internal void Awake()
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x3EEFFE0", Offset = "0x3EEFFE0", VA = "0x3EEFFE0")]
	internal void ResetPhotonView(bool resetOwner)
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x3EDD230", Offset = "0x3EDD230", VA = "0x3EDD230")]
	internal void RebuildControllerCache(bool ownerHasChanged = false)
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x3EF28F0", Offset = "0x3EF28F0", VA = "0x3EF28F0")]
	public void OnPreNetDestroy(PhotonView rootView)
	{
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x3EF9560", Offset = "0x3EF9560", VA = "0x3EF9560")]
	protected internal void OnDestroy()
	{
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x3EF96C0", Offset = "0x3EF96C0", VA = "0x3EF96C0")]
	public void RequestOwnership()
	{
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x3EF98C0", Offset = "0x3EF98C0", VA = "0x3EF98C0")]
	public void TransferOwnership(Player newOwner)
	{
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x3EF9AA0", Offset = "0x3EF9AA0", VA = "0x3EF9AA0")]
	public void TransferOwnership(int newOwnerId)
	{
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x3EF9420", Offset = "0x3EF9420", VA = "0x3EF9420")]
	public void FindObservables(bool force = false)
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x3EF45C0", Offset = "0x3EF45C0", VA = "0x3EF45C0")]
	public void SerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x3EF5800", Offset = "0x3EF5800", VA = "0x3EF5800")]
	public void DeserializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x3EF9F70", Offset = "0x3EF9F70", VA = "0x3EF9F70")]
	protected internal void DeserializeComponent(Component component, PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x3EF9DA0", Offset = "0x3EF9DA0", VA = "0x3EF9DA0")]
	protected internal void SerializeComponent(Component component, PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x3EF2110", Offset = "0x3EF2110", VA = "0x3EF2110")]
	public void RefreshRpcMonoBehaviourCache()
	{
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x3EFA140", Offset = "0x3EFA140", VA = "0x3EFA140")]
	public void RPC(string methodName, RpcTarget target, params object[] parameters)
	{
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x3EFA1B0", Offset = "0x3EFA1B0", VA = "0x3EFA1B0")]
	public void RpcSecure(string methodName, RpcTarget target, bool encrypt, params object[] parameters)
	{
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x3EFA220", Offset = "0x3EFA220", VA = "0x3EFA220")]
	public void RPC(string methodName, Player targetPlayer, params object[] parameters)
	{
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x3EFA290", Offset = "0x3EFA290", VA = "0x3EFA290")]
	public void RpcSecure(string methodName, Player targetPlayer, bool encrypt, params object[] parameters)
	{
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x3EFA300", Offset = "0x3EFA300", VA = "0x3EFA300")]
	public static PhotonView Get(Component component)
	{
		return null;
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x3EFA370", Offset = "0x3EFA370", VA = "0x3EFA370")]
	public static PhotonView Get(GameObject gameObj)
	{
		return null;
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x3EFA3E0", Offset = "0x3EFA3E0", VA = "0x3EFA3E0")]
	public static PhotonView Find(int viewID)
	{
		return null;
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x3EFA500", Offset = "0x3EFA500", VA = "0x3EFA500")]
	public void AddCallbackTarget(IPhotonViewCallback obj)
	{
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x3EFA5E0", Offset = "0x3EFA5E0", VA = "0x3EFA5E0")]
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
	[Address(RVA = "0x3EF9020", Offset = "0x3EF9020", VA = "0x3EF9020")]
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
	[Address(RVA = "0x3EFA690", Offset = "0x3EFA690", VA = "0x3EFA690", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x3EFAA90", Offset = "0x3EFAA90", VA = "0x3EFAA90")]
	public PhotonView()
	{
	}
}
