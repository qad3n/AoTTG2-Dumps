using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Map;
using Photon.Pun;

namespace CustomLogic;

[Token(Token = "0x20002DE")]
[CompilerGenerated]
internal class CustomLogicNetworkViewBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20002DF")]
	public static class Factory
	{
		[Token(Token = "0x600171E")]
		[Address(RVA = "0x3D212A0", Offset = "0x3D212A0", VA = "0x3D212A0")]
		public static CustomLogicNetworkViewBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20002E0")]
	public static class Bindings
	{
		[Token(Token = "0x4000EAF")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600171F")]
		[Address(RVA = "0x3D213D0", Offset = "0x3D213D0", VA = "0x3D213D0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6001720")]
		[Address(RVA = "0x3D217C0", Offset = "0x3D217C0", VA = "0x3D217C0")]
		public static CLPropertyBinding<CustomLogicNetworkViewBuiltin> __CreatePropertyBinding__SyncTransforms()
		{
			return null;
		}

		[Token(Token = "0x6001721")]
		[Address(RVA = "0x3D218A0", Offset = "0x3D218A0", VA = "0x3D218A0")]
		public static CLPropertyBinding<CustomLogicNetworkViewBuiltin> __CreatePropertyBinding__Owner()
		{
			return null;
		}

		[Token(Token = "0x6001722")]
		[Address(RVA = "0x3D21940", Offset = "0x3D21940", VA = "0x3D21940")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__Transfer()
		{
			return null;
		}

		[Token(Token = "0x6001723")]
		[Address(RVA = "0x3D21A90", Offset = "0x3D21A90", VA = "0x3D21A90")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__SendMessage()
		{
			return null;
		}

		[Token(Token = "0x6001724")]
		[Address(RVA = "0x3D21BE0", Offset = "0x3D21BE0", VA = "0x3D21BE0")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__SendMessageAll()
		{
			return null;
		}

		[Token(Token = "0x6001725")]
		[Address(RVA = "0x3D21D30", Offset = "0x3D21D30", VA = "0x3D21D30")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__SendMessageOthers()
		{
			return null;
		}

		[Token(Token = "0x6001726")]
		[Address(RVA = "0x3D21E80", Offset = "0x3D21E80", VA = "0x3D21E80")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__SendStream()
		{
			return null;
		}

		[Token(Token = "0x6001727")]
		[Address(RVA = "0x3D21FD0", Offset = "0x3D21FD0", VA = "0x3D21FD0")]
		public static CLMethodBinding<CustomLogicNetworkViewBuiltin> __CreateMethodBinding__ReceiveStream()
		{
			return null;
		}
	}

	[Token(Token = "0x4000EA8")]
	[FieldOffset(Offset = "0x30")]
	public readonly MapObject MapObject;

	[Token(Token = "0x4000EA9")]
	[FieldOffset(Offset = "0x38")]
	public CustomLogicPhotonSync Sync;

	[Token(Token = "0x4000EAA")]
	[FieldOffset(Offset = "0x40")]
	public int OwnerId;

	[Token(Token = "0x4000EAB")]
	[FieldOffset(Offset = "0x48")]
	private List<object> _streamObjects;

	[Token(Token = "0x4000EAC")]
	[FieldOffset(Offset = "0x50")]
	private readonly List<CustomLogicComponentInstance> _classInstances;

	[Token(Token = "0x4000EAD")]
	[FieldOffset(Offset = "0x58")]
	private readonly List<CustomLogicClassInstance> _addonInstances;

	[Token(Token = "0x4000EAE")]
	[FieldOffset(Offset = "0x60")]
	private bool _isTransformSynced;

	[Token(Token = "0x170002FD")]
	public bool SyncTransforms
	{
		[Token(Token = "0x6001706")]
		[Address(RVA = "0x3D1F090", Offset = "0x3D1F090", VA = "0x3D1F090")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001707")]
		[Address(RVA = "0x3D1F0A0", Offset = "0x3D1F0A0", VA = "0x3D1F0A0")]
		set
		{
		}
	}

	[Token(Token = "0x170002FE")]
	public CustomLogicPlayerBuiltin Owner
	{
		[Token(Token = "0x6001708")]
		[Address(RVA = "0x3D1F120", Offset = "0x3D1F120", VA = "0x3D1F120")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FF")]
	public override string ClassName
	{
		[Token(Token = "0x600171A")]
		[Address(RVA = "0x3D21240", Offset = "0x3D21240", VA = "0x3D21240", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000300")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600171B")]
		[Address(RVA = "0x3D21270", Offset = "0x3D21270", VA = "0x3D21270", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000301")]
	public override bool IsStatic
	{
		[Token(Token = "0x600171C")]
		[Address(RVA = "0x3D21280", Offset = "0x3D21280", VA = "0x3D21280", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000302")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600171D")]
		[Address(RVA = "0x3D21290", Offset = "0x3D21290", VA = "0x3D21290", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001705")]
	[Address(RVA = "0x3D1EF80", Offset = "0x3D1EF80", VA = "0x3D1EF80")]
	public CustomLogicNetworkViewBuiltin(MapObject obj)
	{
	}

	[Token(Token = "0x6001709")]
	[Address(RVA = "0x3D1F280", Offset = "0x3D1F280", VA = "0x3D1F280")]
	public void OnSecond()
	{
	}

	[Token(Token = "0x600170A")]
	[Address(RVA = "0x3D1F2E0", Offset = "0x3D1F2E0", VA = "0x3D1F2E0")]
	public void RegisterComponentInstance(CustomLogicComponentInstance instance)
	{
	}

	[Token(Token = "0x600170B")]
	[Address(RVA = "0x3D1F380", Offset = "0x3D1F380", VA = "0x3D1F380")]
	public void RegisterAddonInstance(CustomLogicClassInstance instance)
	{
	}

	[Token(Token = "0x600170C")]
	[Address(RVA = "0x3D1F450", Offset = "0x3D1F450", VA = "0x3D1F450")]
	public void OnNetworkTransfer(CustomLogicPlayerBuiltin oldOwner, CustomLogicPlayerBuiltin newOwner)
	{
	}

	[Token(Token = "0x600170D")]
	[Address(RVA = "0x3D1F810", Offset = "0x3D1F810", VA = "0x3D1F810")]
	public void SetSyncDynamic(CustomLogicPhotonSync sync)
	{
	}

	[Token(Token = "0x600170E")]
	[Address(RVA = "0x3D1F8F0", Offset = "0x3D1F8F0", VA = "0x3D1F8F0")]
	public void SetSync(CustomLogicPhotonSync sync)
	{
	}

	[Token(Token = "0x600170F")]
	[Address(RVA = "0x3D1FEB0", Offset = "0x3D1FEB0", VA = "0x3D1FEB0")]
	public void SendNetworkStream(PhotonStream stream)
	{
	}

	[Token(Token = "0x6001710")]
	[Address(RVA = "0x3D200B0", Offset = "0x3D200B0", VA = "0x3D200B0")]
	public void OnNetworkStream(object[] objs)
	{
	}

	[Token(Token = "0x6001711")]
	[Address(RVA = "0x3D202B0", Offset = "0x3D202B0", VA = "0x3D202B0")]
	public void OnNetworkMessage(CustomLogicPlayerBuiltin player, string message, double sentServerTime)
	{
	}

	[Token(Token = "0x6001712")]
	[Address(RVA = "0x3D20E60", Offset = "0x3D20E60", VA = "0x3D20E60")]
	public void Transfer(CustomLogicPlayerBuiltin player)
	{
	}

	[Token(Token = "0x6001713")]
	[Address(RVA = "0x3D20EB0", Offset = "0x3D20EB0", VA = "0x3D20EB0")]
	public void SendMessage(CustomLogicPlayerBuiltin target, string msg)
	{
	}

	[Token(Token = "0x6001714")]
	[Address(RVA = "0x3D20ED0", Offset = "0x3D20ED0", VA = "0x3D20ED0")]
	public void SendMessageAll(string msg)
	{
	}

	[Token(Token = "0x6001715")]
	[Address(RVA = "0x3D20EF0", Offset = "0x3D20EF0", VA = "0x3D20EF0")]
	public void SendMessageOthers(string msg)
	{
	}

	[Token(Token = "0x6001716")]
	[Address(RVA = "0x3D20F10", Offset = "0x3D20F10", VA = "0x3D20F10")]
	public void SendStream(object obj)
	{
	}

	[Token(Token = "0x6001717")]
	[Address(RVA = "0x3D210A0", Offset = "0x3D210A0", VA = "0x3D210A0")]
	public object ReceiveStream()
	{
		return null;
	}

	[Token(Token = "0x6001718")]
	[Address(RVA = "0x3D20FB0", Offset = "0x3D20FB0", VA = "0x3D20FB0")]
	private static object SerializeStreamObj(object obj)
	{
		return null;
	}

	[Token(Token = "0x6001719")]
	[Address(RVA = "0x3D21120", Offset = "0x3D21120", VA = "0x3D21120")]
	private static object DeserializeStreamObj(object obj)
	{
		return null;
	}
}
