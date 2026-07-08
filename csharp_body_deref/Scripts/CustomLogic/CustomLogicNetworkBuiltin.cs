using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20003D3")]
[CompilerGenerated]
internal class CustomLogicNetworkBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20003D4")]
	public static class Factory
	{
		[Token(Token = "0x6002810")]
		[Address(RVA = "0x3DD12B0", Offset = "0x3DD12B0", VA = "0x3DD12B0")]
		public static CustomLogicNetworkBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20003D5")]
	public static class Bindings
	{
		[Token(Token = "0x400105D")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002811")]
		[Address(RVA = "0x3DD13D0", Offset = "0x3DD13D0", VA = "0x3DD13D0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6002812")]
		[Address(RVA = "0x3DD1960", Offset = "0x3DD1960", VA = "0x3DD1960")]
		public static CLPropertyBinding<CustomLogicNetworkBuiltin> __CreatePropertyBinding__IsMasterClient()
		{
			return null;
		}

		[Token(Token = "0x6002813")]
		[Address(RVA = "0x3DD1A00", Offset = "0x3DD1A00", VA = "0x3DD1A00")]
		public static CLPropertyBinding<CustomLogicNetworkBuiltin> __CreatePropertyBinding__Players()
		{
			return null;
		}

		[Token(Token = "0x6002814")]
		[Address(RVA = "0x3DD1AA0", Offset = "0x3DD1AA0", VA = "0x3DD1AA0")]
		public static CLPropertyBinding<CustomLogicNetworkBuiltin> __CreatePropertyBinding__MasterClient()
		{
			return null;
		}

		[Token(Token = "0x6002815")]
		[Address(RVA = "0x3DD1B40", Offset = "0x3DD1B40", VA = "0x3DD1B40")]
		public static CLPropertyBinding<CustomLogicNetworkBuiltin> __CreatePropertyBinding__MyPlayer()
		{
			return null;
		}

		[Token(Token = "0x6002816")]
		[Address(RVA = "0x3DD1BE0", Offset = "0x3DD1BE0", VA = "0x3DD1BE0")]
		public static CLPropertyBinding<CustomLogicNetworkBuiltin> __CreatePropertyBinding__NetworkTime()
		{
			return null;
		}

		[Token(Token = "0x6002817")]
		[Address(RVA = "0x3DD1C80", Offset = "0x3DD1C80", VA = "0x3DD1C80")]
		public static CLPropertyBinding<CustomLogicNetworkBuiltin> __CreatePropertyBinding__Ping()
		{
			return null;
		}

		[Token(Token = "0x6002818")]
		[Address(RVA = "0x3DD1D20", Offset = "0x3DD1D20", VA = "0x3DD1D20")]
		public static CLMethodBinding<CustomLogicNetworkBuiltin> __CreateMethodBinding__SendMessage()
		{
			return null;
		}

		[Token(Token = "0x6002819")]
		[Address(RVA = "0x3DD1E70", Offset = "0x3DD1E70", VA = "0x3DD1E70")]
		public static CLMethodBinding<CustomLogicNetworkBuiltin> __CreateMethodBinding__SendMessageAll()
		{
			return null;
		}

		[Token(Token = "0x600281A")]
		[Address(RVA = "0x3DD1FC0", Offset = "0x3DD1FC0", VA = "0x3DD1FC0")]
		public static CLMethodBinding<CustomLogicNetworkBuiltin> __CreateMethodBinding__SendMessageOthers()
		{
			return null;
		}

		[Token(Token = "0x600281B")]
		[Address(RVA = "0x3DD2110", Offset = "0x3DD2110", VA = "0x3DD2110")]
		public static CLMethodBinding<CustomLogicNetworkBuiltin> __CreateMethodBinding__FindPlayer()
		{
			return null;
		}

		[Token(Token = "0x600281C")]
		[Address(RVA = "0x3DD2260", Offset = "0x3DD2260", VA = "0x3DD2260")]
		public static CLMethodBinding<CustomLogicNetworkBuiltin> __CreateMethodBinding__GetTimestampDifference()
		{
			return null;
		}

		[Token(Token = "0x600281D")]
		[Address(RVA = "0x3DD23B0", Offset = "0x3DD23B0", VA = "0x3DD23B0")]
		public static CLMethodBinding<CustomLogicNetworkBuiltin> __CreateMethodBinding__KickPlayer()
		{
			return null;
		}
	}

	[Token(Token = "0x1700081E")]
	public static bool IsMasterClient
	{
		[Token(Token = "0x6002800")]
		[Address(RVA = "0x3DD0880", Offset = "0x3DD0880", VA = "0x3DD0880")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700081F")]
	public static CustomLogicListBuiltin Players
	{
		[Token(Token = "0x6002801")]
		[Address(RVA = "0x3DD08E0", Offset = "0x3DD08E0", VA = "0x3DD08E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000820")]
	public static CustomLogicPlayerBuiltin MasterClient
	{
		[Token(Token = "0x6002802")]
		[Address(RVA = "0x3DD0A70", Offset = "0x3DD0A70", VA = "0x3DD0A70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000821")]
	public static CustomLogicPlayerBuiltin MyPlayer
	{
		[Token(Token = "0x6002803")]
		[Address(RVA = "0x3DD0AF0", Offset = "0x3DD0AF0", VA = "0x3DD0AF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000822")]
	public static double NetworkTime
	{
		[Token(Token = "0x6002804")]
		[Address(RVA = "0x3DD0B70", Offset = "0x3DD0B70", VA = "0x3DD0B70")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x17000823")]
	public static int Ping
	{
		[Token(Token = "0x6002805")]
		[Address(RVA = "0x3DD0BD0", Offset = "0x3DD0BD0", VA = "0x3DD0BD0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000824")]
	public override string ClassName
	{
		[Token(Token = "0x600280C")]
		[Address(RVA = "0x3DD1250", Offset = "0x3DD1250", VA = "0x3DD1250", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000825")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600280D")]
		[Address(RVA = "0x3DD1280", Offset = "0x3DD1280", VA = "0x3DD1280", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000826")]
	public override bool IsStatic
	{
		[Token(Token = "0x600280E")]
		[Address(RVA = "0x3DD1290", Offset = "0x3DD1290", VA = "0x3DD1290", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000827")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600280F")]
		[Address(RVA = "0x3DD12A0", Offset = "0x3DD12A0", VA = "0x3DD12A0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60027FF")]
	[Address(RVA = "0x3DD0810", Offset = "0x3DD0810", VA = "0x3DD0810")]
	public CustomLogicNetworkBuiltin()
	{
	}

	[Token(Token = "0x6002806")]
	[Address(RVA = "0x3DD0C30", Offset = "0x3DD0C30", VA = "0x3DD0C30")]
	public static void SendMessage(CustomLogicPlayerBuiltin player, string message)
	{
	}

	[Token(Token = "0x6002807")]
	[Address(RVA = "0x3DD0D30", Offset = "0x3DD0D30", VA = "0x3DD0D30")]
	public static void SendMessageAll(string message)
	{
	}

	[Token(Token = "0x6002808")]
	[Address(RVA = "0x3DD0E10", Offset = "0x3DD0E10", VA = "0x3DD0E10")]
	public static void SendMessageOthers(string message)
	{
	}

	[Token(Token = "0x6002809")]
	[Address(RVA = "0x3DD0EF0", Offset = "0x3DD0EF0", VA = "0x3DD0EF0")]
	public static CustomLogicPlayerBuiltin FindPlayer(int id)
	{
		return null;
	}

	[Token(Token = "0x600280A")]
	[Address(RVA = "0x3DD0F80", Offset = "0x3DD0F80", VA = "0x3DD0F80")]
	public static double GetTimestampDifference(double timestamp1, double timestamp2)
	{
		return default(double);
	}

	[Token(Token = "0x600280B")]
	[Address(RVA = "0x3DD1020", Offset = "0x3DD1020", VA = "0x3DD1020")]
	public static void KickPlayer(object target, string reason = ".")
	{
	}
}
