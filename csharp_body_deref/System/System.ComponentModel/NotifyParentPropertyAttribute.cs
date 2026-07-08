using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200031C")]
[AttributeUsage(AttributeTargets.Property)]
public sealed class NotifyParentPropertyAttribute : Attribute
{
	[Token(Token = "0x4000EC3")]
	[FieldOffset(Offset = "0x0")]
	public static readonly NotifyParentPropertyAttribute Yes;

	[Token(Token = "0x4000EC4")]
	[FieldOffset(Offset = "0x8")]
	public static readonly NotifyParentPropertyAttribute No;

	[Token(Token = "0x4000EC5")]
	[FieldOffset(Offset = "0x10")]
	public static readonly NotifyParentPropertyAttribute Default;

	[Token(Token = "0x4000EC6")]
	[FieldOffset(Offset = "0x10")]
	private bool notifyParent;

	[Token(Token = "0x1700048F")]
	public bool NotifyParent
	{
		[Token(Token = "0x60014E9")]
		[Address(RVA = "0x45B9780", Offset = "0x45B9780", VA = "0x45B9780")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60014E8")]
	[Address(RVA = "0x45B9760", Offset = "0x45B9760", VA = "0x45B9760")]
	public NotifyParentPropertyAttribute(bool notifyParent)
	{
	}

	[Token(Token = "0x60014EA")]
	[Address(RVA = "0x45B9790", Offset = "0x45B9790", VA = "0x45B9790", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60014EB")]
	[Address(RVA = "0x45B9800", Offset = "0x45B9800", VA = "0x45B9800", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60014EC")]
	[Address(RVA = "0x45B9810", Offset = "0x45B9810", VA = "0x45B9810", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
