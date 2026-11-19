// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.MergablePropertyAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200012A")]
[AttributeUsage(AttributeTargets.All)]
public sealed class MergablePropertyAttribute : Attribute
{
	[Token(Token = "0x400055A")]
	[FieldOffset(Offset = "0x0")]
	public static readonly MergablePropertyAttribute Yes;

	[Token(Token = "0x400055B")]
	[FieldOffset(Offset = "0x8")]
	public static readonly MergablePropertyAttribute No;

	[Token(Token = "0x400055C")]
	[FieldOffset(Offset = "0x10")]
	public static readonly MergablePropertyAttribute Default;

	[Token(Token = "0x1700018A")]
	public bool AllowMerge
	{
		[Token(Token = "0x600074B")]
		[Address(RVA = "0x6223940", Offset = "0x6222940", VA = "0x6223940")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600074A")]
	[Address(RVA = "0x6223920", Offset = "0x6222920", VA = "0x6223920")]
	public MergablePropertyAttribute(bool allowMerge)
	{
	}

	[Token(Token = "0x600074C")]
	[Address(RVA = "0x6223950", Offset = "0x6222950", VA = "0x6223950", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600074D")]
	[Address(RVA = "0x6223A10", Offset = "0x6222A10", VA = "0x6223A10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600074E")]
	[Address(RVA = "0x6223A20", Offset = "0x6222A20", VA = "0x6223A20", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
