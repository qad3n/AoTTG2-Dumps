// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.CustomAttributeTypedArgument
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x200050C")]
public struct CustomAttributeTypedArgument
{
	[Token(Token = "0x1700053A")]
	public readonly Type ArgumentType
	{
		[Token(Token = "0x60025E8")]
		[Address(RVA = "0x53E0950", Offset = "0x53DF950", VA = "0x53E0950")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700053B")]
	public readonly object Value
	{
		[Token(Token = "0x60025E9")]
		[Address(RVA = "0x53E0960", Offset = "0x53DF960", VA = "0x53E0960")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60025E6")]
	[Address(RVA = "0x53E0840", Offset = "0x53DF840", VA = "0x53E0840")]
	public CustomAttributeTypedArgument(object value)
	{
	}

	[Token(Token = "0x60025E7")]
	[Address(RVA = "0x53D8E90", Offset = "0x53D7E90", VA = "0x53D8E90")]
	public CustomAttributeTypedArgument(Type argumentType, object value)
	{
	}

	[Token(Token = "0x60025EA")]
	[Address(RVA = "0x53E0970", Offset = "0x53DF970", VA = "0x53E0970", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60025EB")]
	[Address(RVA = "0x53E09C0", Offset = "0x53DF9C0", VA = "0x53E09C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60025EC")]
	[Address(RVA = "0x53E0A10", Offset = "0x53DFA10", VA = "0x53E0A10")]
	public static bool operator ==(CustomAttributeTypedArgument left, CustomAttributeTypedArgument right)
	{
		return default(bool);
	}

	[Token(Token = "0x60025ED")]
	[Address(RVA = "0x53E0AB0", Offset = "0x53DFAB0", VA = "0x53E0AB0")]
	public static bool operator !=(CustomAttributeTypedArgument left, CustomAttributeTypedArgument right)
	{
		return default(bool);
	}

	[Token(Token = "0x60025EE")]
	[Address(RVA = "0x53E0B50", Offset = "0x53DFB50", VA = "0x53E0B50", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60025EF")]
	[Address(RVA = "0x53DFFE0", Offset = "0x53DEFE0", VA = "0x53DFFE0")]
	internal string ToString(bool typed)
	{
		return null;
	}

	[Token(Token = "0x60025F0")]
	[Address(RVA = "0x53E08D0", Offset = "0x53DF8D0", VA = "0x53E08D0")]
	private static object CanonicalizeValue(object value)
	{
		return null;
	}
}
