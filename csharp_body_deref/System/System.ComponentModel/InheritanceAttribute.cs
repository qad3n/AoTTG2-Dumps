using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000286")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Event)]
public sealed class InheritanceAttribute : Attribute
{
	[Token(Token = "0x4000D49")]
	[FieldOffset(Offset = "0x0")]
	public static readonly InheritanceAttribute Inherited;

	[Token(Token = "0x4000D4A")]
	[FieldOffset(Offset = "0x8")]
	public static readonly InheritanceAttribute InheritedReadOnly;

	[Token(Token = "0x4000D4B")]
	[FieldOffset(Offset = "0x10")]
	public static readonly InheritanceAttribute NotInherited;

	[Token(Token = "0x4000D4C")]
	[FieldOffset(Offset = "0x18")]
	public static readonly InheritanceAttribute Default;

	[Token(Token = "0x17000385")]
	public InheritanceLevel InheritanceLevel
	{
		[Token(Token = "0x6000FDE")]
		[Address(RVA = "0x456B180", Offset = "0x456B180", VA = "0x456B180")]
		[CompilerGenerated]
		get
		{
			return default(InheritanceLevel);
		}
	}

	[Token(Token = "0x6000FDC")]
	[Address(RVA = "0x456B0F0", Offset = "0x456B0F0", VA = "0x456B0F0")]
	public InheritanceAttribute()
	{
	}

	[Token(Token = "0x6000FDD")]
	[Address(RVA = "0x456B160", Offset = "0x456B160", VA = "0x456B160")]
	public InheritanceAttribute(InheritanceLevel inheritanceLevel)
	{
	}

	[Token(Token = "0x6000FDF")]
	[Address(RVA = "0x456B190", Offset = "0x456B190", VA = "0x456B190", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FE0")]
	[Address(RVA = "0x456B200", Offset = "0x456B200", VA = "0x456B200", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000FE1")]
	[Address(RVA = "0x456B210", Offset = "0x456B210", VA = "0x456B210", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FE2")]
	[Address(RVA = "0x456B280", Offset = "0x456B280", VA = "0x456B280", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
