// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DesignTimeVisibleAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x48918C0", Offset = "0x48918C0", VA = "0x48918C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000FFC")]
	[Address(RVA = "0x4891890", Offset = "0x4891890", VA = "0x4891890")]
	public DesignTimeVisibleAttribute(bool visible)
	{
	}

	[Token(Token = "0x6000FFD")]
	[Address(RVA = "0x48918B0", Offset = "0x48918B0", VA = "0x48918B0")]
	public DesignTimeVisibleAttribute()
	{
	}

	[Token(Token = "0x6000FFF")]
	[Address(RVA = "0x48918D0", Offset = "0x48918D0", VA = "0x48918D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001000")]
	[Address(RVA = "0x4891960", Offset = "0x4891960", VA = "0x4891960", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001001")]
	[Address(RVA = "0x48919F0", Offset = "0x48919F0", VA = "0x48919F0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
