// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicRangeBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicRangeBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicRangeBuiltin.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000411")]
[CompilerGenerated]
internal class CustomLogicRangeBuiltin : CustomLogicListBuiltin
{
	[Token(Token = "0x2000412")]
	public new static class Factory
	{
		[Token(Token = "0x6001991")]
		[Address(RVA = "0x1ED8CE0", Offset = "0x1ED72E0", VA = "0x181ED8CE0")]
		public static CustomLogicRangeBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000413")]
	public new static class Bindings
	{
		[Token(Token = "0x400146C")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001992")]
		[Address(RVA = "0x1EBF900", Offset = "0x1EBDF00", VA = "0x181EBF900")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}
	}

	[Token(Token = "0x170002C6")]
	public override string ClassName
	{
		[Token(Token = "0x600198D")]
		[Address(RVA = "0x1ED3140", Offset = "0x1ED1740", VA = "0x181ED3140", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C7")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600198E")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002C8")]
	public override bool IsStatic
	{
		[Token(Token = "0x600198F")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002C9")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001990")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600198A")]
	[Address(RVA = "0x1ED2F60", Offset = "0x1ED1560", VA = "0x181ED2F60")]
	public CustomLogicRangeBuiltin(int end)
	{
	}

	[Token(Token = "0x600198B")]
	[Address(RVA = "0x1ED2F40", Offset = "0x1ED1540", VA = "0x181ED2F40")]
	public CustomLogicRangeBuiltin(int start, int end)
	{
	}

	[Token(Token = "0x600198C")]
	[Address(RVA = "0x1ED2F90", Offset = "0x1ED1590", VA = "0x181ED2F90")]
	public CustomLogicRangeBuiltin(int start, int end, int step)
	{
	}
}
