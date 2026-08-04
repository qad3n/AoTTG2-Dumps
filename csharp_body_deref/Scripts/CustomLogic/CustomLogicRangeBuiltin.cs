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

[Token(Token = "0x20002C6")]
[CompilerGenerated]
internal class CustomLogicRangeBuiltin : CustomLogicListBuiltin
{
	[Token(Token = "0x20002C7")]
	public new static class Factory
	{
		[Token(Token = "0x600110F")]
		[Address(RVA = "0x3FC9280", Offset = "0x3FC9280", VA = "0x3FC9280")]
		public static CustomLogicRangeBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20002C8")]
	public new static class Bindings
	{
		[Token(Token = "0x4000E4C")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001110")]
		[Address(RVA = "0x3FC94D0", Offset = "0x3FC94D0", VA = "0x3FC94D0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}
	}

	[Token(Token = "0x17000211")]
	public override string ClassName
	{
		[Token(Token = "0x600110B")]
		[Address(RVA = "0x3FC9220", Offset = "0x3FC9220", VA = "0x3FC9220", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000212")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600110C")]
		[Address(RVA = "0x3FC9250", Offset = "0x3FC9250", VA = "0x3FC9250", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000213")]
	public override bool IsStatic
	{
		[Token(Token = "0x600110D")]
		[Address(RVA = "0x3FC9260", Offset = "0x3FC9260", VA = "0x3FC9260", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000214")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600110E")]
		[Address(RVA = "0x3FC9270", Offset = "0x3FC9270", VA = "0x3FC9270", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001108")]
	[Address(RVA = "0x3FC9050", Offset = "0x3FC9050", VA = "0x3FC9050")]
	public CustomLogicRangeBuiltin(int end)
	{
	}

	[Token(Token = "0x6001109")]
	[Address(RVA = "0x3FC9210", Offset = "0x3FC9210", VA = "0x3FC9210")]
	public CustomLogicRangeBuiltin(int start, int end)
	{
	}

	[Token(Token = "0x600110A")]
	[Address(RVA = "0x3FC9060", Offset = "0x3FC9060", VA = "0x3FC9060")]
	public CustomLogicRangeBuiltin(int start, int end, int step)
	{
	}
}
