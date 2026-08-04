// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ImmutableObjectAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200025A")]
[AttributeUsage(AttributeTargets.All)]
public sealed class ImmutableObjectAttribute : Attribute
{
	[Token(Token = "0x4000CE9")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ImmutableObjectAttribute Yes;

	[Token(Token = "0x4000CEA")]
	[FieldOffset(Offset = "0x8")]
	public static readonly ImmutableObjectAttribute No;

	[Token(Token = "0x4000CEB")]
	[FieldOffset(Offset = "0x10")]
	public static readonly ImmutableObjectAttribute Default;

	[Token(Token = "0x17000347")]
	public bool Immutable
	{
		[Token(Token = "0x6000EB0")]
		[Address(RVA = "0x48828A0", Offset = "0x48828A0", VA = "0x48828A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000EAF")]
	[Address(RVA = "0x4882880", Offset = "0x4882880", VA = "0x4882880")]
	public ImmutableObjectAttribute(bool immutable)
	{
	}

	[Token(Token = "0x6000EB1")]
	[Address(RVA = "0x48828B0", Offset = "0x48828B0", VA = "0x48828B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EB2")]
	[Address(RVA = "0x4882970", Offset = "0x4882970", VA = "0x4882970", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000EB3")]
	[Address(RVA = "0x4882980", Offset = "0x4882980", VA = "0x4882980", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
