// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.InheritanceAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4890280", Offset = "0x4890280", VA = "0x4890280")]
		[CompilerGenerated]
		get
		{
			return default(InheritanceLevel);
		}
	}

	[Token(Token = "0x6000FDC")]
	[Address(RVA = "0x48901F0", Offset = "0x48901F0", VA = "0x48901F0")]
	public InheritanceAttribute()
	{
	}

	[Token(Token = "0x6000FDD")]
	[Address(RVA = "0x4890260", Offset = "0x4890260", VA = "0x4890260")]
	public InheritanceAttribute(InheritanceLevel inheritanceLevel)
	{
	}

	[Token(Token = "0x6000FDF")]
	[Address(RVA = "0x4890290", Offset = "0x4890290", VA = "0x4890290", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FE0")]
	[Address(RVA = "0x4890300", Offset = "0x4890300", VA = "0x4890300", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000FE1")]
	[Address(RVA = "0x4890310", Offset = "0x4890310", VA = "0x4890310", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FE2")]
	[Address(RVA = "0x4890380", Offset = "0x4890380", VA = "0x4890380", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
