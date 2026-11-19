// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicNetworkBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicNetworkBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicNetworkBuiltin.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20005C5")]
[CompilerGenerated]
internal class CustomLogicNetworkBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20005C6")]
	public static class Factory
	{
		[Token(Token = "0x60035C4")]
		[Address(RVA = "0x59ECAB0", Offset = "0x59EBAB0", VA = "0x59ECAB0")]
		public static CustomLogicNetworkBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20005C7")]
	public static class Bindings
	{
		[Token(Token = "0x4001924")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60035C5")]
		[Address(RVA = "0x59ECBD0", Offset = "0x59EBBD0", VA = "0x59ECBD0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60035C6")]
		[Address(RVA = "0x59ED190", Offset = "0x59EC190", VA = "0x59ED190")]
		public static CLPropertyBinding<CustomLogicNetworkBuiltin> __CreatePropertyBinding__IsMasterClient()
		{
			return null;
		}

		[Token(Token = "0x60035C7")]
		[Address(RVA = "0x59ED230", Offset = "0x59EC230", VA = "0x59ED230")]
		public static CLPropertyBinding<CustomLogicNetworkBuiltin> __CreatePropertyBinding__IsSingleplayer()
		{
			return null;
		}

		[Token(Token = "0x60035C8")]
		[Address(RVA = "0x59ED2D0", Offset = "0x59EC2D0", VA = "0x59ED2D0")]
		public static CLPropertyBinding<CustomLogicNetworkBuiltin> __CreatePropertyBinding__Players()
		{
			return null;
		}

		[Token(Token = "0x60035C9")]
		[Address(RVA = "0x59ED370", Offset = "0x59EC370", VA = "0x59ED370")]
		public static CLPropertyBinding<CustomLogicNetworkBuiltin> __CreatePropertyBinding__MasterClient()
		{
			return null;
		}

		[Token(Token = "0x60035CA")]
		[Address(RVA = "0x59ED410", Offset = "0x59EC410", VA = "0x59ED410")]
		public static CLPropertyBinding<CustomLogicNetworkBuiltin> __CreatePropertyBinding__MyPlayer()
		{
			return null;
		}

		[Token(Token = "0x60035CB")]
		[Address(RVA = "0x59ED4B0", Offset = "0x59EC4B0", VA = "0x59ED4B0")]
		public static CLPropertyBinding<CustomLogicNetworkBuiltin> __CreatePropertyBinding__NetworkTime()
		{
			return null;
		}

		[Token(Token = "0x60035CC")]
		[Address(RVA = "0x59ED550", Offset = "0x59EC550", VA = "0x59ED550")]
		public static CLPropertyBinding<CustomLogicNetworkBuiltin> __CreatePropertyBinding__Ping()
		{
			return null;
		}

		[Token(Token = "0x60035CD")]
		[Address(RVA = "0x59ED5F0", Offset = "0x59EC5F0", VA = "0x59ED5F0")]
		public static CLMethodBinding<CustomLogicNetworkBuiltin> __CreateMethodBinding__SendMessage()
		{
			return null;
		}

		[Token(Token = "0x60035CE")]
		[Address(RVA = "0x59ED730", Offset = "0x59EC730", VA = "0x59ED730")]
		public static CLMethodBinding<CustomLogicNetworkBuiltin> __CreateMethodBinding__SendMessageAll()
		{
			return null;
		}

		[Token(Token = "0x60035CF")]
		[Address(RVA = "0x59ED870", Offset = "0x59EC870", VA = "0x59ED870")]
		public static CLMethodBinding<CustomLogicNetworkBuiltin> __CreateMethodBinding__SendMessageOthers()
		{
			return null;
		}

		[Token(Token = "0x60035D0")]
		[Address(RVA = "0x59ED9B0", Offset = "0x59EC9B0", VA = "0x59ED9B0")]
		public static CLMethodBinding<CustomLogicNetworkBuiltin> __CreateMethodBinding__FindPlayer()
		{
			return null;
		}

		[Token(Token = "0x60035D1")]
		[Address(RVA = "0x59EDAF0", Offset = "0x59ECAF0", VA = "0x59EDAF0")]
		public static CLMethodBinding<CustomLogicNetworkBuiltin> __CreateMethodBinding__GetTimestampDifference()
		{
			return null;
		}

		[Token(Token = "0x60035D2")]
		[Address(RVA = "0x59EDC30", Offset = "0x59ECC30", VA = "0x59EDC30")]
		public static CLMethodBinding<CustomLogicNetworkBuiltin> __CreateMethodBinding__KickPlayer()
		{
			return null;
		}
	}

	[Token(Token = "0x170009B6")]
	public static bool IsMasterClient
	{
		[Token(Token = "0x60035B3")]
		[Address(RVA = "0x59EBFF0", Offset = "0x59EAFF0", VA = "0x59EBFF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009B7")]
	public static bool IsSingleplayer
	{
		[Token(Token = "0x60035B4")]
		[Address(RVA = "0x59EC050", Offset = "0x59EB050", VA = "0x59EC050")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009B8")]
	public static CustomLogicListBuiltin Players
	{
		[Token(Token = "0x60035B5")]
		[Address(RVA = "0x59EC100", Offset = "0x59EB100", VA = "0x59EC100")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009B9")]
	public static CustomLogicPlayerBuiltin MasterClient
	{
		[Token(Token = "0x60035B6")]
		[Address(RVA = "0x59EC270", Offset = "0x59EB270", VA = "0x59EC270")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009BA")]
	public static CustomLogicPlayerBuiltin MyPlayer
	{
		[Token(Token = "0x60035B7")]
		[Address(RVA = "0x59EC2F0", Offset = "0x59EB2F0", VA = "0x59EC2F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009BB")]
	public static double NetworkTime
	{
		[Token(Token = "0x60035B8")]
		[Address(RVA = "0x59EC370", Offset = "0x59EB370", VA = "0x59EC370")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x170009BC")]
	public static int Ping
	{
		[Token(Token = "0x60035B9")]
		[Address(RVA = "0x59EC3D0", Offset = "0x59EB3D0", VA = "0x59EC3D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170009BD")]
	public override string ClassName
	{
		[Token(Token = "0x60035C0")]
		[Address(RVA = "0x59ECA50", Offset = "0x59EBA50", VA = "0x59ECA50", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009BE")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60035C1")]
		[Address(RVA = "0x59ECA80", Offset = "0x59EBA80", VA = "0x59ECA80", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009BF")]
	public override bool IsStatic
	{
		[Token(Token = "0x60035C2")]
		[Address(RVA = "0x59ECA90", Offset = "0x59EBA90", VA = "0x59ECA90", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009C0")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60035C3")]
		[Address(RVA = "0x59ECAA0", Offset = "0x59EBAA0", VA = "0x59ECAA0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60035B2")]
	[Address(RVA = "0x59EBF80", Offset = "0x59EAF80", VA = "0x59EBF80")]
	public CustomLogicNetworkBuiltin()
	{
	}

	[Token(Token = "0x60035BA")]
	[Address(RVA = "0x59EC430", Offset = "0x59EB430", VA = "0x59EC430")]
	public static void SendMessage(CustomLogicPlayerBuiltin player, string message)
	{
	}

	[Token(Token = "0x60035BB")]
	[Address(RVA = "0x59EC530", Offset = "0x59EB530", VA = "0x59EC530")]
	public static void SendMessageAll(string message)
	{
	}

	[Token(Token = "0x60035BC")]
	[Address(RVA = "0x59EC610", Offset = "0x59EB610", VA = "0x59EC610")]
	public static void SendMessageOthers(string message)
	{
	}

	[Token(Token = "0x60035BD")]
	[Address(RVA = "0x59EC6F0", Offset = "0x59EB6F0", VA = "0x59EC6F0")]
	public static CustomLogicPlayerBuiltin FindPlayer(int id)
	{
		return null;
	}

	[Token(Token = "0x60035BE")]
	[Address(RVA = "0x59EC780", Offset = "0x59EB780", VA = "0x59EC780")]
	public static double GetTimestampDifference(double timestamp1, double timestamp2)
	{
		return default(double);
	}

	[Token(Token = "0x60035BF")]
	[Address(RVA = "0x59EC820", Offset = "0x59EB820", VA = "0x59EC820")]
	public static void KickPlayer(object target, string reason = ".")
	{
	}
}
