using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200024F")]
[AttributeUsage(AttributeTargets.All)]
public sealed class DesignOnlyAttribute : Attribute
{
	[Token(Token = "0x4000CD1")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DesignOnlyAttribute Yes;

	[Token(Token = "0x4000CD2")]
	[FieldOffset(Offset = "0x8")]
	public static readonly DesignOnlyAttribute No;

	[Token(Token = "0x4000CD3")]
	[FieldOffset(Offset = "0x10")]
	public static readonly DesignOnlyAttribute Default;

	[Token(Token = "0x1700033A")]
	public bool IsDesignOnly
	{
		[Token(Token = "0x6000E7A")]
		[Address(RVA = "0x455C930", Offset = "0x455C930", VA = "0x455C930")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000E79")]
	[Address(RVA = "0x455C910", Offset = "0x455C910", VA = "0x455C910")]
	public DesignOnlyAttribute(bool isDesignOnly)
	{
	}

	[Token(Token = "0x6000E7B")]
	[Address(RVA = "0x455C940", Offset = "0x455C940", VA = "0x455C940", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E7C")]
	[Address(RVA = "0x455CA00", Offset = "0x455CA00", VA = "0x455CA00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000E7D")]
	[Address(RVA = "0x455CA30", Offset = "0x455CA30", VA = "0x455CA30", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
