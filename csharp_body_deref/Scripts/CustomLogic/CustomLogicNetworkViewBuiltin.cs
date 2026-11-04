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

[Token(Token = "0x2000467")]
[CompilerGenerated]
internal class CustomLogicNetworkViewBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x2000468")]
	public static class Factory
	{
		[Token(Token = "0x60021A1")]
		[Address(RVA = "0x1F7B7E0", Offset = "0x1F79DE0", VA = "0x181F7B7E0")]
		public static CustomLogicNetworkViewBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000469")]
	public static class Bindings
	{
		[Token(Token = "0x40015C5")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60021A2")]
		[Address(RVA = "0x1F59F70", Offset = "0x1F58570", VA = "0x181F59F70")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60021A3")]
		[Address(RVA = "0x1F6E130", Offset = "0x1F6C730", VA = "0x181F6E130")]
		public static CLPropertyBinding<CustomLogicNetworkViewBuiltin> __CreatePropertyBinding__SyncTransforms()
		{
			return null;
		}

		[Token(Token = "0x60021A4")]
		[Address(RVA = "0x1F6CD80", Offset = "0x1F6B380", VA = "0x181F6CD80")]
		public static CLPropertyBinding<CustomLogicNetworkViewBuiltin> __CreatePropertyBinding__Owner()
		{
			return null;
		}

		[Token(Token = "0x60021A5")]
		[Address(RVA = "0x1F6A9D0", Offset = "0x1F68FD0", VA = "0x181F6A9D0")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__Transfer()
		{
			return null;
		}

		[Token(Token = "0x60021A6")]
		[Address(RVA = "0x1F69E80", Offset = "0x1F68480", VA = "0x181F69E80")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__SendMessage()
		{
			return null;
		}

		[Token(Token = "0x60021A7")]
		[Address(RVA = "0x1F69C40", Offset = "0x1F68240", VA = "0x181F69C40")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__SendMessageAll()
		{
			return null;
		}

		[Token(Token = "0x60021A8")]
		[Address(RVA = "0x1F69D60", Offset = "0x1F68360", VA = "0x181F69D60")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__SendMessageOthers()
		{
			return null;
		}

		[Token(Token = "0x60021A9")]
		[Address(RVA = "0x1F69FA0", Offset = "0x1F685A0", VA = "0x181F69FA0")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__SendStream()
		{
			return null;
		}

		[Token(Token = "0x60021AA")]
		[Address(RVA = "0x1F698D0", Offset = "0x1F67ED0", VA = "0x181F698D0")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__ReceiveStream()
		{
			return null;
		}
	}

	[Token(Token = "0x40015BE")]
	[FieldOffset(Offset = "0x30")]
	public readonly MapObject MapObject;

	[Token(Token = "0x40015BF")]
	[FieldOffset(Offset = "0x38")]
	public CustomLogicPhotonSync Sync;

	[Token(Token = "0x40015C0")]
	[FieldOffset(Offset = "0x40")]
	public int OwnerId;

	[Token(Token = "0x40015C1")]
	[FieldOffset(Offset = "0x48")]
	private List<object> _streamObjects;

	[Token(Token = "0x40015C2")]
	[FieldOffset(Offset = "0x50")]
	private readonly List<CustomLogicComponentInstance> _classInstances;

	[Token(Token = "0x40015C3")]
	[FieldOffset(Offset = "0x58")]
	private readonly List<CustomLogicClassInstance> _addonInstances;

	[Token(Token = "0x40015C4")]
	[FieldOffset(Offset = "0x60")]
	private bool _isTransformSynced;

	[Token(Token = "0x17000419")]
	public bool SyncTransforms
	{
		[Token(Token = "0x6002189")]
		[Address(RVA = "0x198C740", Offset = "0x198AD40", VA = "0x18198C740")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600218A")]
		[Address(RVA = "0x1F77F40", Offset = "0x1F76540", VA = "0x181F77F40")]
		set
		{
		}
	}

	[Token(Token = "0x1700041A")]
	public CustomLogicPlayerBuiltin Owner
	{
		[Token(Token = "0x600218B")]
		[Address(RVA = "0x1F77E40", Offset = "0x1F76440", VA = "0x181F77E40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700041B")]
	public override string ClassName
	{
		[Token(Token = "0x600219D")]
		[Address(RVA = "0x1F77E10", Offset = "0x1F76410", VA = "0x181F77E10", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700041C")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600219E")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700041D")]
	public override bool IsStatic
	{
		[Token(Token = "0x600219F")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700041E")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60021A0")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002188")]
	[Address(RVA = "0x1F77D00", Offset = "0x1F76300", VA = "0x181F77D00")]
	public CustomLogicNetworkViewBuiltin(MapObject obj)
	{
	}

	[Token(Token = "0x600218C")]
	[Address(RVA = "0x1F76E90", Offset = "0x1F75490", VA = "0x181F76E90")]
	public void OnSecond()
	{
	}

	[Token(Token = "0x600218D")]
	[Address(RVA = "0x1F77170", Offset = "0x1F75770", VA = "0x181F77170")]
	public void RegisterComponentInstance(CustomLogicComponentInstance instance)
	{
	}

	[Token(Token = "0x600218E")]
	[Address(RVA = "0x1F77090", Offset = "0x1F75690", VA = "0x181F77090")]
	public void RegisterAddonInstance(CustomLogicClassInstance instance)
	{
	}

	[Token(Token = "0x600218F")]
	[Address(RVA = "0x1F76C40", Offset = "0x1F75240", VA = "0x181F76C40")]
	public void OnNetworkTransfer(CustomLogicPlayerBuiltin oldOwner, CustomLogicPlayerBuiltin newOwner)
	{
	}

	[Token(Token = "0x6002190")]
	[Address(RVA = "0x1F777C0", Offset = "0x1F75DC0", VA = "0x181F777C0")]
	public void SetSyncDynamic(CustomLogicPhotonSync sync)
	{
	}

	[Token(Token = "0x6002191")]
	[Address(RVA = "0x1F778A0", Offset = "0x1F75EA0", VA = "0x181F778A0")]
	public void SetSync(CustomLogicPhotonSync sync)
	{
	}

	[Token(Token = "0x6002192")]
	[Address(RVA = "0x1F77290", Offset = "0x1F75890", VA = "0x181F77290")]
	public void SendNetworkStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x6002193")]
	[Address(RVA = "0x1F76A60", Offset = "0x1F75060", VA = "0x181F76A60")]
	public void OnNetworkStream(object[] objs)
	{
	}

	[Token(Token = "0x6002194")]
	[Address(RVA = "0x1F76470", Offset = "0x1F74A70", VA = "0x181F76470")]
	public void OnNetworkMessage(CustomLogicPlayerBuiltin player, string message, double sentServerTime)
	{
	}

	[Token(Token = "0x6002195")]
	[Address(RVA = "0x1F77CB0", Offset = "0x1F762B0", VA = "0x181F77CB0")]
	public void Transfer(CustomLogicPlayerBuiltin player)
	{
	}

	[Token(Token = "0x6002196")]
	[Address(RVA = "0x1F77260", Offset = "0x1F75860", VA = "0x181F77260")]
	public void SendMessage(CustomLogicPlayerBuiltin target, string msg)
	{
	}

	[Token(Token = "0x6002197")]
	[Address(RVA = "0x1F77220", Offset = "0x1F75820", VA = "0x181F77220")]
	public void SendMessageAll(string msg)
	{
	}

	[Token(Token = "0x6002198")]
	[Address(RVA = "0x1F77240", Offset = "0x1F75840", VA = "0x181F77240")]
	public void SendMessageOthers(string msg)
	{
	}

	[Token(Token = "0x6002199")]
	[Address(RVA = "0x1F77460", Offset = "0x1F75A60", VA = "0x181F77460")]
	public void SendStream(object obj)
	{
	}

	[Token(Token = "0x600219A")]
	[Address(RVA = "0x1F76ED0", Offset = "0x1F754D0", VA = "0x181F76ED0")]
	public object ReceiveStream()
	{
		return null;
	}

	[Token(Token = "0x600219B")]
	[Address(RVA = "0x1F77660", Offset = "0x1F75C60", VA = "0x181F77660")]
	private static object SerializeStreamObj(object obj)
	{
		return null;
	}

	[Token(Token = "0x600219C")]
	[Address(RVA = "0x1F76300", Offset = "0x1F74900", VA = "0x181F76300")]
	private static object DeserializeStreamObj(object obj)
	{
		return null;
	}
}
