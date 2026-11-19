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

[Token(Token = "0x200011B")]
[AttributeUsage(AttributeTargets.All)]
public sealed class DesignOnlyAttribute : Attribute
{
	[Token(Token = "0x4000539")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DesignOnlyAttribute Yes;

	[Token(Token = "0x400053A")]
	[FieldOffset(Offset = "0x8")]
	public static readonly DesignOnlyAttribute No;

	[Token(Token = "0x400053B")]
	[FieldOffset(Offset = "0x10")]
	public static readonly DesignOnlyAttribute Default;

	[Token(Token = "0x1700017A")]
	public bool IsDesignOnly
	{
		[Token(Token = "0x6000702")]
		[Address(RVA = "0x6222560", Offset = "0x6221560", VA = "0x6222560")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000701")]
	[Address(RVA = "0x6222540", Offset = "0x6221540", VA = "0x6222540")]
	public DesignOnlyAttribute(bool isDesignOnly)
	{
	}

	[Token(Token = "0x6000703")]
	[Address(RVA = "0x6222570", Offset = "0x6221570", VA = "0x6222570", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000704")]
	[Address(RVA = "0x6222630", Offset = "0x6221630", VA = "0x6222630", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000705")]
	[Address(RVA = "0x6222660", Offset = "0x6221660", VA = "0x6222660", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
