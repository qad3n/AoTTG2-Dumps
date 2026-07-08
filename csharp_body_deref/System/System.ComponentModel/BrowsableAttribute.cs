using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200024C")]
[AttributeUsage(AttributeTargets.All)]
public sealed class BrowsableAttribute : Attribute
{
	[Token(Token = "0x4000CCA")]
	[FieldOffset(Offset = "0x0")]
	public static readonly BrowsableAttribute Yes;

	[Token(Token = "0x4000CCB")]
	[FieldOffset(Offset = "0x8")]
	public static readonly BrowsableAttribute No;

	[Token(Token = "0x4000CCC")]
	[FieldOffset(Offset = "0x10")]
	public static readonly BrowsableAttribute Default;

	[Token(Token = "0x17000335")]
	public bool Browsable
	{
		[Token(Token = "0x6000E67")]
		[Address(RVA = "0x455BC60", Offset = "0x455BC60", VA = "0x455BC60")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000E66")]
	[Address(RVA = "0x455BC40", Offset = "0x455BC40", VA = "0x455BC40")]
	public BrowsableAttribute(bool browsable)
	{
	}

	[Token(Token = "0x6000E68")]
	[Address(RVA = "0x455BC70", Offset = "0x455BC70", VA = "0x455BC70", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E69")]
	[Address(RVA = "0x455BD30", Offset = "0x455BD30", VA = "0x455BD30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000E6A")]
	[Address(RVA = "0x455BD60", Offset = "0x455BD60", VA = "0x455BD60", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
