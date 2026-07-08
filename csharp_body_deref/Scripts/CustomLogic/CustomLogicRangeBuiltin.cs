using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200028D")]
[CompilerGenerated]
internal class CustomLogicRangeBuiltin : CustomLogicListBuiltin
{
	[Token(Token = "0x200028E")]
	public new static class Factory
	{
		[Token(Token = "0x6000F65")]
		[Address(RVA = "0x3CC39A0", Offset = "0x3CC39A0", VA = "0x3CC39A0")]
		public static CustomLogicRangeBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x200028F")]
	public new static class Bindings
	{
		[Token(Token = "0x4000D66")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6000F66")]
		[Address(RVA = "0x3CC3BF0", Offset = "0x3CC3BF0", VA = "0x3CC3BF0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}
	}

	[Token(Token = "0x170001B8")]
	public override string ClassName
	{
		[Token(Token = "0x6000F61")]
		[Address(RVA = "0x3CC3940", Offset = "0x3CC3940", VA = "0x3CC3940", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B9")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6000F62")]
		[Address(RVA = "0x3CC3970", Offset = "0x3CC3970", VA = "0x3CC3970", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001BA")]
	public override bool IsStatic
	{
		[Token(Token = "0x6000F63")]
		[Address(RVA = "0x3CC3980", Offset = "0x3CC3980", VA = "0x3CC3980", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001BB")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6000F64")]
		[Address(RVA = "0x3CC3990", Offset = "0x3CC3990", VA = "0x3CC3990", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F5E")]
	[Address(RVA = "0x3CC3770", Offset = "0x3CC3770", VA = "0x3CC3770")]
	public CustomLogicRangeBuiltin(int end)
	{
	}

	[Token(Token = "0x6000F5F")]
	[Address(RVA = "0x3CC3930", Offset = "0x3CC3930", VA = "0x3CC3930")]
	public CustomLogicRangeBuiltin(int start, int end)
	{
	}

	[Token(Token = "0x6000F60")]
	[Address(RVA = "0x3CC3780", Offset = "0x3CC3780", VA = "0x3CC3780")]
	public CustomLogicRangeBuiltin(int start, int end, int step)
	{
	}
}
