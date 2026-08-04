// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DesignOnlyAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4881A30", Offset = "0x4881A30", VA = "0x4881A30")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000E79")]
	[Address(RVA = "0x4881A10", Offset = "0x4881A10", VA = "0x4881A10")]
	public DesignOnlyAttribute(bool isDesignOnly)
	{
	}

	[Token(Token = "0x6000E7B")]
	[Address(RVA = "0x4881A40", Offset = "0x4881A40", VA = "0x4881A40", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E7C")]
	[Address(RVA = "0x4881B00", Offset = "0x4881B00", VA = "0x4881B00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000E7D")]
	[Address(RVA = "0x4881B30", Offset = "0x4881B30", VA = "0x4881B30", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
