using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200031D")]
[AttributeUsage(AttributeTargets.All)]
public sealed class ParenthesizePropertyNameAttribute : Attribute
{
	[Token(Token = "0x4000EC7")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ParenthesizePropertyNameAttribute Default;

	[Token(Token = "0x4000EC8")]
	[FieldOffset(Offset = "0x10")]
	private bool needParenthesis;

	[Token(Token = "0x17000490")]
	public bool NeedParenthesis
	{
		[Token(Token = "0x60014F0")]
		[Address(RVA = "0x45B9980", Offset = "0x45B9980", VA = "0x45B9980")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60014EE")]
	[Address(RVA = "0x45B9940", Offset = "0x45B9940", VA = "0x45B9940")]
	public ParenthesizePropertyNameAttribute()
	{
	}

	[Token(Token = "0x60014EF")]
	[Address(RVA = "0x45B9960", Offset = "0x45B9960", VA = "0x45B9960")]
	public ParenthesizePropertyNameAttribute(bool needParenthesis)
	{
	}

	[Token(Token = "0x60014F1")]
	[Address(RVA = "0x45B9990", Offset = "0x45B9990", VA = "0x45B9990", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x60014F2")]
	[Address(RVA = "0x45B99F0", Offset = "0x45B99F0", VA = "0x45B99F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60014F3")]
	[Address(RVA = "0x45B9A00", Offset = "0x45B9A00", VA = "0x45B9A00", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
