using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200028B")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Interface)]
public sealed class DesignTimeVisibleAttribute : Attribute
{
	[Token(Token = "0x4000D5F")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DesignTimeVisibleAttribute Yes;

	[Token(Token = "0x4000D60")]
	[FieldOffset(Offset = "0x8")]
	public static readonly DesignTimeVisibleAttribute No;

	[Token(Token = "0x4000D61")]
	[FieldOffset(Offset = "0x10")]
	public static readonly DesignTimeVisibleAttribute Default;

	[Token(Token = "0x1700038B")]
	public bool Visible
	{
		[Token(Token = "0x6000FFE")]
		[Address(RVA = "0x456C7C0", Offset = "0x456C7C0", VA = "0x456C7C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000FFC")]
	[Address(RVA = "0x456C790", Offset = "0x456C790", VA = "0x456C790")]
	public DesignTimeVisibleAttribute(bool visible)
	{
	}

	[Token(Token = "0x6000FFD")]
	[Address(RVA = "0x456C7B0", Offset = "0x456C7B0", VA = "0x456C7B0")]
	public DesignTimeVisibleAttribute()
	{
	}

	[Token(Token = "0x6000FFF")]
	[Address(RVA = "0x456C7D0", Offset = "0x456C7D0", VA = "0x456C7D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001000")]
	[Address(RVA = "0x456C860", Offset = "0x456C860", VA = "0x456C860", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001001")]
	[Address(RVA = "0x456C8F0", Offset = "0x456C8F0", VA = "0x456C8F0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
