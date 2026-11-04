// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicCommandsBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicCommandsBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000547")]
[CompilerGenerated]
internal class CustomLogicCommandsBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x2000548")]
	public static class Factory
	{
		[Token(Token = "0x6003142")]
		[Address(RVA = "0x2016800", Offset = "0x2014E00", VA = "0x182016800")]
		public static CustomLogicCommandsBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000549")]
	public static class Bindings
	{
		[Token(Token = "0x4001706")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003143")]
		[Address(RVA = "0x1FFACC0", Offset = "0x1FF92C0", VA = "0x181FFACC0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6003144")]
		[Address(RVA = "0x1FFF610", Offset = "0x1FFDC10", VA = "0x181FFF610")]
		public static CLMethodBinding<CustomLogicCommandsBuiltin> __CreateMethodBinding__RegisterCommand()
		{
			return null;
		}

		[Token(Token = "0x6003145")]
		[Address(RVA = "0x1FFF4F0", Offset = "0x1FFDAF0", VA = "0x181FFF4F0")]
		public static CLMethodBinding<CustomLogicCommandsBuiltin> __CreateMethodBinding__ParseCommands()
		{
			return null;
		}
	}

	[Token(Token = "0x1700092D")]
	public override string ClassName
	{
		[Token(Token = "0x600313E")]
		[Address(RVA = "0x200C660", Offset = "0x200AC60", VA = "0x18200C660", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700092E")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600313F")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700092F")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003140")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000930")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003141")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600313A")]
	[Address(RVA = "0x200C610", Offset = "0x200AC10", VA = "0x18200C610")]
	public CustomLogicCommandsBuiltin()
	{
	}

	[Token(Token = "0x600313B")]
	[Address(RVA = "0x200C520", Offset = "0x200AB20", VA = "0x18200C520")]
	public static bool RegisterCommand(string command, UserMethod method, string description = "", string autofill = "None")
	{
		return default(bool);
	}

	[Token(Token = "0x600313C")]
	[Address(RVA = "0x200C490", Offset = "0x200AA90", VA = "0x18200C490")]
	public static CustomLogicListBuiltin ParseCommands(string text)
	{
		return null;
	}

	[Token(Token = "0x600313D")]
	[Address(RVA = "0x200C450", Offset = "0x200AA50", VA = "0x18200C450")]
	public static void ClearCommands()
	{
	}
}
