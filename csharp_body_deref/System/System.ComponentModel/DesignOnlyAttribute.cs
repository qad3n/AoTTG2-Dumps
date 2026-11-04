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

[Token(Token = "0x200015A")]
[AttributeUsage(AttributeTargets.All)]
public sealed class DesignOnlyAttribute : Attribute
{
	[Token(Token = "0x4000608")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DesignOnlyAttribute Yes;

	[Token(Token = "0x4000609")]
	[FieldOffset(Offset = "0x8")]
	public static readonly DesignOnlyAttribute No;

	[Token(Token = "0x400060A")]
	[FieldOffset(Offset = "0x10")]
	public static readonly DesignOnlyAttribute Default;

	[Token(Token = "0x170001A9")]
	public bool IsDesignOnly
	{
		[Token(Token = "0x60008C2")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60008C1")]
	[Address(RVA = "0x1A291A0", Offset = "0x1A277A0", VA = "0x181A291A0")]
	public DesignOnlyAttribute(bool isDesignOnly)
	{
	}

	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x287CFC0", Offset = "0x287B5C0", VA = "0x18287CFC0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C4")]
	[Address(RVA = "0x287C060", Offset = "0x287A660", VA = "0x18287C060", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60008C5")]
	[Address(RVA = "0x287D0A0", Offset = "0x287B6A0", VA = "0x18287D0A0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
