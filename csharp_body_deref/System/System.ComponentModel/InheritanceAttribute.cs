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

[Token(Token = "0x2000152")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Event)]
public sealed class InheritanceAttribute : Attribute
{
	[Token(Token = "0x40005B1")]
	[FieldOffset(Offset = "0x0")]
	public static readonly InheritanceAttribute Inherited;

	[Token(Token = "0x40005B2")]
	[FieldOffset(Offset = "0x8")]
	public static readonly InheritanceAttribute InheritedReadOnly;

	[Token(Token = "0x40005B3")]
	[FieldOffset(Offset = "0x10")]
	public static readonly InheritanceAttribute NotInherited;

	[Token(Token = "0x40005B4")]
	[FieldOffset(Offset = "0x18")]
	public static readonly InheritanceAttribute Default;

	[Token(Token = "0x170001C5")]
	public InheritanceLevel InheritanceLevel
	{
		[Token(Token = "0x6000866")]
		[Address(RVA = "0x6230360", Offset = "0x622F360", VA = "0x6230360")]
		[CompilerGenerated]
		get
		{
			return default(InheritanceLevel);
		}
	}

	[Token(Token = "0x6000864")]
	[Address(RVA = "0x62302D0", Offset = "0x622F2D0", VA = "0x62302D0")]
	public InheritanceAttribute()
	{
	}

	[Token(Token = "0x6000865")]
	[Address(RVA = "0x6230340", Offset = "0x622F340", VA = "0x6230340")]
	public InheritanceAttribute(InheritanceLevel inheritanceLevel)
	{
	}

	[Token(Token = "0x6000867")]
	[Address(RVA = "0x6230370", Offset = "0x622F370", VA = "0x6230370", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000868")]
	[Address(RVA = "0x62303E0", Offset = "0x622F3E0", VA = "0x62303E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000869")]
	[Address(RVA = "0x62303F0", Offset = "0x622F3F0", VA = "0x62303F0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x600086A")]
	[Address(RVA = "0x6230460", Offset = "0x622F460", VA = "0x6230460", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
