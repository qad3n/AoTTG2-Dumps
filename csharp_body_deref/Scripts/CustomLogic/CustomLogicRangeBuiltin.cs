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

[Token(Token = "0x2000470")]
[CompilerGenerated]
internal class CustomLogicRangeBuiltin : CustomLogicListBuiltin
{
	[Token(Token = "0x2000471")]
	public new static class Factory
	{
		[Token(Token = "0x6001C08")]
		[Address(RVA = "0x58B96B0", Offset = "0x58B86B0", VA = "0x58B96B0")]
		public static CustomLogicRangeBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000472")]
	public new static class Bindings
	{
		[Token(Token = "0x400160C")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001C09")]
		[Address(RVA = "0x58B9910", Offset = "0x58B8910", VA = "0x58B9910")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}
	}

	[Token(Token = "0x17000307")]
	public override string ClassName
	{
		[Token(Token = "0x6001C04")]
		[Address(RVA = "0x58B9650", Offset = "0x58B8650", VA = "0x58B9650", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000308")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001C05")]
		[Address(RVA = "0x58B9680", Offset = "0x58B8680", VA = "0x58B9680", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000309")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001C06")]
		[Address(RVA = "0x58B9690", Offset = "0x58B8690", VA = "0x58B9690", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700030A")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001C07")]
		[Address(RVA = "0x58B96A0", Offset = "0x58B86A0", VA = "0x58B96A0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001C01")]
	[Address(RVA = "0x58B9480", Offset = "0x58B8480", VA = "0x58B9480")]
	public CustomLogicRangeBuiltin(int end)
	{
	}

	[Token(Token = "0x6001C02")]
	[Address(RVA = "0x58B9640", Offset = "0x58B8640", VA = "0x58B9640")]
	public CustomLogicRangeBuiltin(int start, int end)
	{
	}

	[Token(Token = "0x6001C03")]
	[Address(RVA = "0x58B9490", Offset = "0x58B8490", VA = "0x58B9490")]
	public CustomLogicRangeBuiltin(int start, int end, int step)
	{
	}
}
