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
		[Address(RVA = "0x1D2EF30", Offset = "0x1D2D530", VA = "0x181D2EF30")]
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
		[Address(RVA = "0x1D4EF10", Offset = "0x1D4D510", VA = "0x181D4EF10")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000FD")]
		[Address(RVA = "0xD23EF0", Offset = "0xD224F0", VA = "0x180D23EF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public object[] InstantiationData
	{
		[Token(Token = "0x60000FE")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000FF")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000032")]
	[Obsolete("Renamed. Use IsRoomView instead")]
	public bool IsSceneView
	{
		[Token(Token = "0x6000100")]
		[Address(RVA = "0x1D4EF00", Offset = "0x1D4D500", VA = "0x181D4EF00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000033")]
	public bool IsRoomView
	{
		[Token(Token = "0x6000101")]
		[Address(RVA = "0x1D4EF00", Offset = "0x1D4D500", VA = "0x181D4EF00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000034")]
	public bool IsOwnerActive
	{
		[Token(Token = "0x6000102")]
		[Address(RVA = "0x1D4EEE0", Offset = "0x1D4D4E0", VA = "0x181D4EEE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000035")]
	public bool IsMine
	{
		[Token(Token = "0x6000103")]
		[Address(RVA = "0x12BF1A0", Offset = "0x12BD7A0", VA = "0x1812BF1A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000104")]
		[Address(RVA = "0x12BF400", Offset = "0x12BDA00", VA = "0x1812BF400")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000036")]
	public bool AmController
	{
		[Token(Token = "0x6000105")]
		[Address(RVA = "0x12BF1A0", Offset = "0x12BD7A0", VA = "0x1812BF1A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000037")]
	public Player Controller
	{
		[Token(Token = "0x6000106")]
		[Address(RVA = "0xB48770", Offset = "0xB46D70", VA = "0x180B48770")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000107")]
		[Address(RVA = "0xB48780", Offset = "0xB46D80", VA = "0x180B48780")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public int CreatorActorNr
	{
		[Token(Token = "0x6000108")]
		[Address(RVA = "0x58A600", Offset = "0x588C00", VA = "0x18058A600")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000109")]
		[Address(RVA = "0x58A990", Offset = "0x588F90", VA = "0x18058A990")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000039")]
	public bool AmOwner
	{
		[Token(Token = "0x600010A")]
		[Address(RVA = "0x1D2B370", Offset = "0x1D29970", VA = "0x181D2B370")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600010B")]
		[Address(RVA = "0x1D2B410", Offset = "0x1D29A10", VA = "0x181D2B410")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700003A")]
	public Player Owner
	{
		[Token(Token = "0x600010C")]
		[Address(RVA = "0x58A5D0", Offset = "0x588BD0", VA = "0x18058A5D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600010D")]
		[Address(RVA = "0x58A960", Offset = "0x588F60", VA = "0x18058A960")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700003B")]
	public int OwnerActorNr
	{
		[Token(Token = "0x600010E")]
		[Address(RVA = "0xA4D4B0", Offset = "0xA4BAB0", VA = "0x180A4D4B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600010F")]
		[Address(RVA = "0x1D4F230", Offset = "0x1D4D830", VA = "0x181D4F230")]
		set
		{
		}
	}

	[Token(Token = "0x1700003C")]
	public int ControllerActorNr
	{
		[Token(Token = "0x6000110")]
		[Address(RVA = "0xA4D580", Offset = "0xA4BB80", VA = "0x180A4D580")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000111")]
		[Address(RVA = "0x1D4EFA0", Offset = "0x1D4D5A0", VA = "0x181D4EFA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700003D")]
	public int ViewID
	{
		[Token(Token = "0x6000112")]
		[Address(RVA = "0xB5B910", Offset = "0xB59F10", VA = "0x180B5B910")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000113")]
		[Address(RVA = "0x1D4F490", Offset = "0x1D4DA90", VA = "0x181D4F490")]
		set
		{
		}
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x1D4CF10", Offset = "0x1D4B510", VA = "0x181D4CF10")]
	protected internal void Awake()
	{
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x19AB8E0", Offset = "0x19A9EE0", VA = "0x1819AB8E0")]
	internal void ResetPhotonView(bool resetOwner)
	{
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x1D4D9B0", Offset = "0x1D4BFB0", VA = "0x181D4D9B0")]
	internal void RebuildControllerCache(bool ownerHasChanged = false)
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x1D4D780", Offset = "0x1D4BD80", VA = "0x181D4D780")]
	public void OnPreNetDestroy(PhotonView rootView)
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x1D4D5D0", Offset = "0x1D4BBD0", VA = "0x181D4D5D0")]
	protected internal void OnDestroy()
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x1D4DB50", Offset = "0x1D4C150", VA = "0x181D4DB50")]
	public void RequestOwnership()
	{
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x1D4E910", Offset = "0x1D4CF10", VA = "0x181D4E910")]
	public void TransferOwnership(Player newOwner)
	{
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x1D4E550", Offset = "0x1D4CB50", VA = "0x181D4E550")]
	public void TransferOwnership(int newOwnerId)
	{
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x1D4D340", Offset = "0x1D4B940", VA = "0x181D4D340")]
	public void FindObservables(bool force = false)
	{
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x1D4E0C0", Offset = "0x1D4C6C0", VA = "0x181D4E0C0")]
	public void SerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x1D4D210", Offset = "0x1D4B810", VA = "0x181D4D210")]
	public void DeserializeView(PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x1D4D050", Offset = "0x1D4B650", VA = "0x181D4D050")]
	protected internal void DeserializeComponent(Component component, PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x1D4DF00", Offset = "0x1D4C500", VA = "0x181D4DF00")]
	protected internal void SerializeComponent(Component component, PhotonStream stream, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x1D4DA50", Offset = "0x1D4C050", VA = "0x181D4DA50")]
	public void RefreshRpcMonoBehaviourCache()
	{
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x1D4D940", Offset = "0x1D4BF40", VA = "0x181D4D940")]
	public void RPC(string methodName, RpcTarget target, params object[] parameters)
	{
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x1D4DE20", Offset = "0x1D4C420", VA = "0x181D4DE20")]
	public void RpcSecure(string methodName, RpcTarget target, bool encrypt, params object[] parameters)
	{
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x1D4D8D0", Offset = "0x1D4BED0", VA = "0x181D4D8D0")]
	public void RPC(string methodName, Player targetPlayer, params object[] parameters)
	{
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x1D4DE90", Offset = "0x1D4C490", VA = "0x181D4DE90")]
	public void RpcSecure(string methodName, Player targetPlayer, bool encrypt, params object[] parameters)
	{
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x1D4D4D0", Offset = "0x1D4BAD0", VA = "0x181D4D4D0")]
	public static PhotonView Get(Component component)
	{
		return null;
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x1D4D550", Offset = "0x1D4BB50", VA = "0x181D4D550")]
	public static PhotonView Get(GameObject gameObj)
	{
		return null;
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x1D4D480", Offset = "0x1D4BA80", VA = "0x181D4D480")]
	public static PhotonView Find(int viewID)
	{
		return null;
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x1D4CE60", Offset = "0x1D4B460", VA = "0x181D4CE60")]
	public void AddCallbackTarget(IPhotonViewCallback obj)
	{
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x1D4DAA0", Offset = "0x1D4C0A0", VA = "0x181D4DAA0")]
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
	[Address(RVA = "0x1D4EAE0", Offset = "0x1D4D0E0", VA = "0x181D4EAE0")]
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
	[Address(RVA = "0x1D4E210", Offset = "0x1D4C810", VA = "0x181D4E210", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x1D4EE50", Offset = "0x1D4D450", VA = "0x181D4EE50")]
	public PhotonView()
	{
	}
}
