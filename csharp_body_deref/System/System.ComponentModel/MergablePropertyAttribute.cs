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

[Token(Token = "0x200025E")]
[AttributeUsage(AttributeTargets.All)]
public sealed class MergablePropertyAttribute : Attribute
{
	[Token(Token = "0x4000CF2")]
	[FieldOffset(Offset = "0x0")]
	public static readonly MergablePropertyAttribute Yes;

	[Token(Token = "0x4000CF3")]
	[FieldOffset(Offset = "0x8")]
	public static readonly MergablePropertyAttribute No;

	[Token(Token = "0x4000CF4")]
	[FieldOffset(Offset = "0x10")]
	public static readonly MergablePropertyAttribute Default;

	[Token(Token = "0x1700034A")]
	public bool AllowMerge
	{
		[Token(Token = "0x6000EC3")]
		[Address(RVA = "0x4882E50", Offset = "0x4882E50", VA = "0x4882E50")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000EC2")]
	[Address(RVA = "0x4882E30", Offset = "0x4882E30", VA = "0x4882E30")]
	public MergablePropertyAttribute(bool allowMerge)
	{
	}

	[Token(Token = "0x6000EC4")]
	[Address(RVA = "0x4882E60", Offset = "0x4882E60", VA = "0x4882E60", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EC5")]
	[Address(RVA = "0x4882F20", Offset = "0x4882F20", VA = "0x4882F20", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000EC6")]
	[Address(RVA = "0x4882F30", Offset = "0x4882F30", VA = "0x4882F30", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
