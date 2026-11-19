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

[Token(Token = "0x20005A6")]
[CompilerGenerated]
internal class CustomLogicCommandsBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20005A7")]
	public static class Factory
	{
		[Token(Token = "0x60033CE")]
		[Address(RVA = "0x59C9100", Offset = "0x59C8100", VA = "0x59C9100")]
		public static CustomLogicCommandsBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20005A8")]
	public static class Bindings
	{
		[Token(Token = "0x40018A6")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60033CF")]
		[Address(RVA = "0x59C9220", Offset = "0x59C8220", VA = "0x59C9220")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60033D0")]
		[Address(RVA = "0x59C9360", Offset = "0x59C8360", VA = "0x59C9360")]
		public static CLMethodBinding<CustomLogicCommandsBuiltin> __CreateMethodBinding__RegisterCommand()
		{
			return null;
		}

		[Token(Token = "0x60033D1")]
		[Address(RVA = "0x59C94A0", Offset = "0x59C84A0", VA = "0x59C94A0")]
		public static CLMethodBinding<CustomLogicCommandsBuiltin> __CreateMethodBinding__ParseCommands()
		{
			return null;
		}
	}

	[Token(Token = "0x17000975")]
	public override string ClassName
	{
		[Token(Token = "0x60033CA")]
		[Address(RVA = "0x59C90A0", Offset = "0x59C80A0", VA = "0x59C90A0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000976")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60033CB")]
		[Address(RVA = "0x59C90D0", Offset = "0x59C80D0", VA = "0x59C90D0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000977")]
	public override bool IsStatic
	{
		[Token(Token = "0x60033CC")]
		[Address(RVA = "0x59C90E0", Offset = "0x59C80E0", VA = "0x59C90E0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000978")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60033CD")]
		[Address(RVA = "0x59C90F0", Offset = "0x59C80F0", VA = "0x59C90F0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60033C6")]
	[Address(RVA = "0x59C8E60", Offset = "0x59C7E60", VA = "0x59C8E60")]
	public CustomLogicCommandsBuiltin()
	{
	}

	[Token(Token = "0x60033C7")]
	[Address(RVA = "0x59C8ED0", Offset = "0x59C7ED0", VA = "0x59C8ED0")]
	public static bool RegisterCommand(string command, UserMethod method, string description = "", string autofill = "None")
	{
		return default(bool);
	}

	[Token(Token = "0x60033C8")]
	[Address(RVA = "0x59C8FC0", Offset = "0x59C7FC0", VA = "0x59C8FC0")]
	public static CustomLogicListBuiltin ParseCommands(string text)
	{
		return null;
	}

	[Token(Token = "0x60033C9")]
	[Address(RVA = "0x59C9040", Offset = "0x59C8040", VA = "0x59C9040")]
	public static void ClearCommands()
	{
	}
}
