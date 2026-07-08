using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x20003F8")]
[CompilerGenerated]
internal class CustomLogicLabelBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x20003F9")]
	public new static class Factory
	{
		[Token(Token = "0x600292C")]
		[Address(RVA = "0x3DE14F0", Offset = "0x3DE14F0", VA = "0x3DE14F0")]
		public static CustomLogicLabelBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20003FA")]
	public new static class Bindings
	{
		[Token(Token = "0x40010A1")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600292D")]
		[Address(RVA = "0x3DE1580", Offset = "0x3DE1580", VA = "0x3DE1580")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x600292E")]
		[Address(RVA = "0x3DE16C0", Offset = "0x3DE16C0", VA = "0x3DE16C0")]
		public static CLPropertyBinding<CustomLogicLabelBuiltin> __CreatePropertyBinding__Text()
		{
			return null;
		}

		[Token(Token = "0x600292F")]
		[Address(RVA = "0x3DE17A0", Offset = "0x3DE17A0", VA = "0x3DE17A0")]
		public static CLPropertyBinding<CustomLogicLabelBuiltin> __CreatePropertyBinding__EnableRichText()
		{
			return null;
		}
	}

	[Token(Token = "0x40010A0")]
	[FieldOffset(Offset = "0x60")]
	private readonly Label _label;

	[Token(Token = "0x17000856")]
	public string Text
	{
		[Token(Token = "0x6002924")]
		[Address(RVA = "0x3DE13F0", Offset = "0x3DE13F0", VA = "0x3DE13F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002925")]
		[Address(RVA = "0x3DE1420", Offset = "0x3DE1420", VA = "0x3DE1420")]
		set
		{
		}
	}

	[Token(Token = "0x17000857")]
	public bool EnableRichText
	{
		[Token(Token = "0x6002926")]
		[Address(RVA = "0x3DE1450", Offset = "0x3DE1450", VA = "0x3DE1450")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002927")]
		[Address(RVA = "0x3DE1470", Offset = "0x3DE1470", VA = "0x3DE1470")]
		set
		{
		}
	}

	[Token(Token = "0x17000858")]
	public override string ClassName
	{
		[Token(Token = "0x6002928")]
		[Address(RVA = "0x3DE1490", Offset = "0x3DE1490", VA = "0x3DE1490", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000859")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002929")]
		[Address(RVA = "0x3DE14C0", Offset = "0x3DE14C0", VA = "0x3DE14C0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700085A")]
	public override bool IsStatic
	{
		[Token(Token = "0x600292A")]
		[Address(RVA = "0x3DE14D0", Offset = "0x3DE14D0", VA = "0x3DE14D0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700085B")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600292B")]
		[Address(RVA = "0x3DE14E0", Offset = "0x3DE14E0", VA = "0x3DE14E0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002923")]
	[Address(RVA = "0x3DE13C0", Offset = "0x3DE13C0", VA = "0x3DE13C0")]
	public CustomLogicLabelBuiltin(Label label)
	{
	}
}
