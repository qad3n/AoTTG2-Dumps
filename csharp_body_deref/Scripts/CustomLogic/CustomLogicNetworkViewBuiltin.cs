// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicNetworkViewBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicNetworkViewBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicNetworkViewBuiltin.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Map;
using Photon.Pun;

namespace CustomLogic;

[Token(Token = "0x20004C6")]
[CompilerGenerated]
internal class CustomLogicNetworkViewBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20004C7")]
	public static class Factory
	{
		[Token(Token = "0x6002418")]
		[Address(RVA = "0x59365B0", Offset = "0x59355B0", VA = "0x59365B0")]
		public static CustomLogicNetworkViewBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20004C8")]
	public static class Bindings
	{
		[Token(Token = "0x4001765")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002419")]
		[Address(RVA = "0x59366E0", Offset = "0x59356E0", VA = "0x59366E0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x600241A")]
		[Address(RVA = "0x5936AD0", Offset = "0x5935AD0", VA = "0x5936AD0")]
		public static CLPropertyBinding<CustomLogicNetworkViewBuiltin> __CreatePropertyBinding__SyncTransforms()
		{
			return null;
		}

		[Token(Token = "0x600241B")]
		[Address(RVA = "0x5936BB0", Offset = "0x5935BB0", VA = "0x5936BB0")]
		public static CLPropertyBinding<CustomLogicNetworkViewBuiltin> __CreatePropertyBinding__Owner()
		{
			return null;
		}

		[Token(Token = "0x600241C")]
		[Address(RVA = "0x5936C50", Offset = "0x5935C50", VA = "0x5936C50")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__Transfer()
		{
			return null;
		}

		[Token(Token = "0x600241D")]
		[Address(RVA = "0x5936D90", Offset = "0x5935D90", VA = "0x5936D90")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__SendMessage()
		{
			return null;
		}

		[Token(Token = "0x600241E")]
		[Address(RVA = "0x5936ED0", Offset = "0x5935ED0", VA = "0x5936ED0")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__SendMessageAll()
		{
			return null;
		}

		[Token(Token = "0x600241F")]
		[Address(RVA = "0x5937010", Offset = "0x5936010", VA = "0x5937010")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__SendMessageOthers()
		{
			return null;
		}

		[Token(Token = "0x6002420")]
		[Address(RVA = "0x5937150", Offset = "0x5936150", VA = "0x5937150")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__SendStream()
		{
			return null;
		}

		[Token(Token = "0x6002421")]
		[Address(RVA = "0x5937290", Offset = "0x5936290", VA = "0x5937290")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__ReceiveStream()
		{
			return null;
		}
	}

	[Token(Token = "0x400175E")]
	[FieldOffset(Offset = "0x30")]
	public readonly MapObject MapObject;

	[Token(Token = "0x400175F")]
	[FieldOffset(Offset = "0x38")]
	public CustomLogicPhotonSync Sync;

	[Token(Token = "0x4001760")]
	[FieldOffset(Offset = "0x40")]
	public int OwnerId;

	[Token(Token = "0x4001761")]
	[FieldOffset(Offset = "0x48")]
	private List<object> _streamObjects;

	[Token(Token = "0x4001762")]
	[FieldOffset(Offset = "0x50")]
	private readonly List<CustomLogicComponentInstance> _classInstances;

	[Token(Token = "0x4001763")]
	[FieldOffset(Offset = "0x58")]
	private readonly List<CustomLogicClassInstance> _addonInstances;

	[Token(Token = "0x4001764")]
	[FieldOffset(Offset = "0x60")]
	private bool _isTransformSynced;

	[Token(Token = "0x1700045A")]
	public bool SyncTransforms
	{
		[Token(Token = "0x6002400")]
		[Address(RVA = "0x5934780", Offset = "0x5933780", VA = "0x5934780")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002401")]
		[Address(RVA = "0x5934790", Offset = "0x5933790", VA = "0x5934790")]
		set
		{
		}
	}

	[Token(Token = "0x1700045B")]
	public CustomLogicPlayerBuiltin Owner
	{
		[Token(Token = "0x6002402")]
		[Address(RVA = "0x5934810", Offset = "0x5933810", VA = "0x5934810")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700045C")]
	public override string ClassName
	{
		[Token(Token = "0x6002414")]
		[Address(RVA = "0x5936550", Offset = "0x5935550", VA = "0x5936550", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700045D")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002415")]
		[Address(RVA = "0x5936580", Offset = "0x5935580", VA = "0x5936580", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700045E")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002416")]
		[Address(RVA = "0x5936590", Offset = "0x5935590", VA = "0x5936590", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700045F")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002417")]
		[Address(RVA = "0x59365A0", Offset = "0x59355A0", VA = "0x59365A0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60023FF")]
	[Address(RVA = "0x5934670", Offset = "0x5933670", VA = "0x5934670")]
	public CustomLogicNetworkViewBuiltin(MapObject obj)
	{
	}

	[Token(Token = "0x6002403")]
	[Address(RVA = "0x5934970", Offset = "0x5933970", VA = "0x5934970")]
	public void OnSecond()
	{
	}

	[Token(Token = "0x6002404")]
	[Address(RVA = "0x59349D0", Offset = "0x59339D0", VA = "0x59349D0")]
	public void RegisterComponentInstance(CustomLogicComponentInstance instance)
	{
	}

	[Token(Token = "0x6002405")]
	[Address(RVA = "0x5934A70", Offset = "0x5933A70", VA = "0x5934A70")]
	public void RegisterAddonInstance(CustomLogicClassInstance instance)
	{
	}

	[Token(Token = "0x6002406")]
	[Address(RVA = "0x5934B40", Offset = "0x5933B40", VA = "0x5934B40")]
	public void OnNetworkTransfer(CustomLogicPlayerBuiltin oldOwner, CustomLogicPlayerBuiltin newOwner)
	{
	}

	[Token(Token = "0x6002407")]
	[Address(RVA = "0x5935050", Offset = "0x5934050", VA = "0x5935050")]
	public void SetSyncDynamic(CustomLogicPhotonSync sync)
	{
	}

	[Token(Token = "0x6002408")]
	[Address(RVA = "0x5935130", Offset = "0x5934130", VA = "0x5935130")]
	public void SetSync(CustomLogicPhotonSync sync)
	{
	}

	[Token(Token = "0x6002409")]
	[Address(RVA = "0x59356B0", Offset = "0x59346B0", VA = "0x59356B0")]
	public void SendNetworkStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x600240A")]
	[Address(RVA = "0x59358A0", Offset = "0x59348A0", VA = "0x59358A0")]
	public void OnNetworkStream(object[] objs)
	{
	}

	[Token(Token = "0x600240B")]
	[Address(RVA = "0x5935A90", Offset = "0x5934A90", VA = "0x5935A90")]
	public void OnNetworkMessage(CustomLogicPlayerBuiltin player, string message, double sentServerTime)
	{
	}

	[Token(Token = "0x600240C")]
	[Address(RVA = "0x5936160", Offset = "0x5935160", VA = "0x5936160")]
	public void Transfer(CustomLogicPlayerBuiltin player)
	{
	}

	[Token(Token = "0x600240D")]
	[Address(RVA = "0x59361B0", Offset = "0x59351B0", VA = "0x59361B0")]
	public void SendMessage(CustomLogicPlayerBuiltin target, string msg)
	{
	}

	[Token(Token = "0x600240E")]
	[Address(RVA = "0x59361D0", Offset = "0x59351D0", VA = "0x59361D0")]
	public void SendMessageAll(string msg)
	{
	}

	[Token(Token = "0x600240F")]
	[Address(RVA = "0x59361F0", Offset = "0x59351F0", VA = "0x59361F0")]
	public void SendMessageOthers(string msg)
	{
	}

	[Token(Token = "0x6002410")]
	[Address(RVA = "0x5936210", Offset = "0x5935210", VA = "0x5936210")]
	public void SendStream(object obj)
	{
	}

	[Token(Token = "0x6002411")]
	[Address(RVA = "0x59363B0", Offset = "0x59353B0", VA = "0x59363B0")]
	public object ReceiveStream()
	{
		return null;
	}

	[Token(Token = "0x6002412")]
	[Address(RVA = "0x59362B0", Offset = "0x59352B0", VA = "0x59362B0")]
	private static object SerializeStreamObj(object obj)
	{
		return null;
	}

	[Token(Token = "0x6002413")]
	[Address(RVA = "0x5936430", Offset = "0x5935430", VA = "0x5936430")]
	private static object DeserializeStreamObj(object obj)
	{
		return null;
	}
}
