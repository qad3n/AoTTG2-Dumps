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

[Token(Token = "0x2000191")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Event)]
public sealed class InheritanceAttribute : Attribute
{
	[Token(Token = "0x4000680")]
	[FieldOffset(Offset = "0x0")]
	public static readonly InheritanceAttribute Inherited;

	[Token(Token = "0x4000681")]
	[FieldOffset(Offset = "0x8")]
	public static readonly InheritanceAttribute InheritedReadOnly;

	[Token(Token = "0x4000682")]
	[FieldOffset(Offset = "0x10")]
	public static readonly InheritanceAttribute NotInherited;

	[Token(Token = "0x4000683")]
	[FieldOffset(Offset = "0x18")]
	public static readonly InheritanceAttribute Default;

	[Token(Token = "0x170001F4")]
	public InheritanceLevel InheritanceLevel
	{
		[Token(Token = "0x6000A26")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(InheritanceLevel);
		}
	}

	[Token(Token = "0x6000A24")]
	[Address(RVA = "0x289ED60", Offset = "0x289D360", VA = "0x18289ED60")]
	public InheritanceAttribute()
	{
	}

	[Token(Token = "0x6000A25")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	public InheritanceAttribute(InheritanceLevel inheritanceLevel)
	{
	}

	[Token(Token = "0x6000A27")]
	[Address(RVA = "0x289EA40", Offset = "0x289D040", VA = "0x18289EA40", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A28")]
	[Address(RVA = "0x28776A0", Offset = "0x2875CA0", VA = "0x1828776A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A29")]
	[Address(RVA = "0x289EAE0", Offset = "0x289D0E0", VA = "0x18289EAE0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A2A")]
	[Address(RVA = "0x289EB50", Offset = "0x289D150", VA = "0x18289EB50", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
