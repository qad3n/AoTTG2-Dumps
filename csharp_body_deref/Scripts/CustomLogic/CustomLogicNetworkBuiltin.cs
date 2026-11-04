// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicNetworkBuiltin
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicNetworkBuiltin.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000566")]
[CompilerGenerated]
internal class CustomLogicNetworkBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x2000567")]
	public static class Factory
	{
		[Token(Token = "0x6003338")]
		[Address(RVA = "0x203CD50", Offset = "0x203B350", VA = "0x18203CD50")]
		public static CustomLogicNetworkBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000568")]
	public static class Bindings
	{
		[Token(Token = "0x4001784")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003339")]
		[Address(RVA = "0x201A7B0", Offset = "0x2018DB0", VA = "0x18201A7B0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x600333A")]
		[Address(RVA = "0x202E8D0", Offset = "0x202CED0", VA = "0x18202E8D0")]
		public static CLPropertyBinding<CustomLogicNetworkBuiltin> __CreatePropertyBinding__IsMasterClient()
		{
			return null;
		}

		[Token(Token = "0x600333B")]
		[Address(RVA = "0x202E970", Offset = "0x202CF70", VA = "0x18202E970")]
		public static CLPropertyBinding<CustomLogicNetworkBuiltin> __CreatePropertyBinding__IsSingleplayer()
		{
			return null;
		}

		[Token(Token = "0x600333C")]
		[Address(RVA = "0x202EFB0", Offset = "0x202D5B0", VA = "0x18202EFB0")]
		public static CLPropertyBinding<CustomLogicNetworkBuiltin> __CreatePropertyBinding__Players()
		{
			return null;
		}

		[Token(Token = "0x600333D")]
		[Address(RVA = "0x202EB50", Offset = "0x202D150", VA = "0x18202EB50")]
		public static CLPropertyBinding<CustomLogicNetworkBuiltin> __CreatePropertyBinding__MasterClient()
		{
			return null;
		}

		[Token(Token = "0x600333E")]
		[Address(RVA = "0x202EBF0", Offset = "0x202D1F0", VA = "0x18202EBF0")]
		public static CLPropertyBinding<CustomLogicNetworkBuiltin> __CreatePropertyBinding__MyPlayer()
		{
			return null;
		}

		[Token(Token = "0x600333F")]
		[Address(RVA = "0x202EC90", Offset = "0x202D290", VA = "0x18202EC90")]
		public static CLPropertyBinding<CustomLogicNetworkBuiltin> __CreatePropertyBinding__NetworkTime()
		{
			return null;
		}

		[Token(Token = "0x6003340")]
		[Address(RVA = "0x202ED30", Offset = "0x202D330", VA = "0x18202ED30")]
		public static CLPropertyBinding<CustomLogicNetworkBuiltin> __CreatePropertyBinding__Ping()
		{
			return null;
		}

		[Token(Token = "0x6003341")]
		[Address(RVA = "0x202A5F0", Offset = "0x2028BF0", VA = "0x18202A5F0")]
		public static CLMethodBinding<CustomLogicNetworkBuiltin> __CreateMethodBinding__SendMessage()
		{
			return null;
		}

		[Token(Token = "0x6003342")]
		[Address(RVA = "0x202A3B0", Offset = "0x20289B0", VA = "0x18202A3B0")]
		public static CLMethodBinding<CustomLogicNetworkBuiltin> __CreateMethodBinding__SendMessageAll()
		{
			return null;
		}

		[Token(Token = "0x6003343")]
		[Address(RVA = "0x202A4D0", Offset = "0x2028AD0", VA = "0x18202A4D0")]
		public static CLMethodBinding<CustomLogicNetworkBuiltin> __CreateMethodBinding__SendMessageOthers()
		{
			return null;
		}

		[Token(Token = "0x6003344")]
		[Address(RVA = "0x2027570", Offset = "0x2025B70", VA = "0x182027570")]
		public static CLMethodBinding<CustomLogicNetworkBuiltin> __CreateMethodBinding__FindPlayer()
		{
			return null;
		}

		[Token(Token = "0x6003345")]
		[Address(RVA = "0x2028890", Offset = "0x2026E90", VA = "0x182028890")]
		public static CLMethodBinding<CustomLogicNetworkBuiltin> __CreateMethodBinding__GetTimestampDifference()
		{
			return null;
		}

		[Token(Token = "0x6003346")]
		[Address(RVA = "0x2028E30", Offset = "0x2027430", VA = "0x182028E30")]
		public static CLMethodBinding<CustomLogicNetworkBuiltin> __CreateMethodBinding__KickPlayer()
		{
			return null;
		}
	}

	[Token(Token = "0x1700096E")]
	public static bool IsMasterClient
	{
		[Token(Token = "0x6003327")]
		[Address(RVA = "0x2036F60", Offset = "0x2035560", VA = "0x182036F60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700096F")]
	public static bool IsSingleplayer
	{
		[Token(Token = "0x6003328")]
		[Address(RVA = "0x2036FA0", Offset = "0x20355A0", VA = "0x182036FA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000970")]
	public static CustomLogicListBuiltin Players
	{
		[Token(Token = "0x6003329")]
		[Address(RVA = "0x2025160", Offset = "0x2023760", VA = "0x182025160")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000971")]
	public static CustomLogicPlayerBuiltin MasterClient
	{
		[Token(Token = "0x600332A")]
		[Address(RVA = "0x2024F40", Offset = "0x2023540", VA = "0x182024F40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000972")]
	public static CustomLogicPlayerBuiltin MyPlayer
	{
		[Token(Token = "0x600332B")]
		[Address(RVA = "0x2024FC0", Offset = "0x20235C0", VA = "0x182024FC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000973")]
	public static double NetworkTime
	{
		[Token(Token = "0x600332C")]
		[Address(RVA = "0x2037030", Offset = "0x2035630", VA = "0x182037030")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x17000974")]
	public static int Ping
	{
		[Token(Token = "0x600332D")]
		[Address(RVA = "0x2037070", Offset = "0x2035670", VA = "0x182037070")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000975")]
	public override string ClassName
	{
		[Token(Token = "0x6003334")]
		[Address(RVA = "0x2036F30", Offset = "0x2035530", VA = "0x182036F30", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000976")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003335")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000977")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003336")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000978")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003337")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003326")]
	[Address(RVA = "0x2036EE0", Offset = "0x20354E0", VA = "0x182036EE0")]
	public CustomLogicNetworkBuiltin()
	{
	}

	[Token(Token = "0x600332E")]
	[Address(RVA = "0x2036DD0", Offset = "0x20353D0", VA = "0x182036DD0")]
	public static void SendMessage(CustomLogicPlayerBuiltin player, string message)
	{
	}

	[Token(Token = "0x600332F")]
	[Address(RVA = "0x2036BE0", Offset = "0x20351E0", VA = "0x182036BE0")]
	public static void SendMessageAll(string message)
	{
	}

	[Token(Token = "0x6003330")]
	[Address(RVA = "0x2036CD0", Offset = "0x20352D0", VA = "0x182036CD0")]
	public static void SendMessageOthers(string message)
	{
	}

	[Token(Token = "0x6003331")]
	[Address(RVA = "0x2036860", Offset = "0x2034E60", VA = "0x182036860")]
	public static CustomLogicPlayerBuiltin FindPlayer(int id)
	{
		return null;
	}

	[Token(Token = "0x6003332")]
	[Address(RVA = "0x20368F0", Offset = "0x2034EF0", VA = "0x1820368F0")]
	public static double GetTimestampDifference(double timestamp1, double timestamp2)
	{
		return default(double);
	}

	[Token(Token = "0x6003333")]
	[Address(RVA = "0x2036960", Offset = "0x2034F60", VA = "0x182036960")]
	public static void KickPlayer(object target, string reason = ".")
	{
	}
}
