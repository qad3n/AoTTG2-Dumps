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

[Token(Token = "0x2000533")]
public struct CustomAttributeTypedArgument
{
	[Token(Token = "0x1700053B")]
	public readonly Type ArgumentType
	{
		[Token(Token = "0x600261A")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700053C")]
	public readonly object Value
	{
		[Token(Token = "0x600261B")]
		[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002618")]
	[Address(RVA = "0x1A44320", Offset = "0x1A42920", VA = "0x181A44320")]
	public CustomAttributeTypedArgument(object value)
	{
	}

	[Token(Token = "0x6002619")]
	[Address(RVA = "0x1A43FF0", Offset = "0x1A425F0", VA = "0x181A43FF0")]
	public CustomAttributeTypedArgument(Type argumentType, object value)
	{
	}

	[Token(Token = "0x600261C")]
	[Address(RVA = "0x1A43890", Offset = "0x1A41E90", VA = "0x181A43890", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600261D")]
	[Address(RVA = "0x1A438F0", Offset = "0x1A41EF0", VA = "0x181A438F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600261E")]
	[Address(RVA = "0x1A44430", Offset = "0x1A42A30", VA = "0x181A44430")]
	public static bool operator ==(CustomAttributeTypedArgument left, CustomAttributeTypedArgument right)
	{
		return default(bool);
	}

	[Token(Token = "0x600261F")]
	[Address(RVA = "0x1A444C0", Offset = "0x1A42AC0", VA = "0x181A444C0")]
	public static bool operator !=(CustomAttributeTypedArgument left, CustomAttributeTypedArgument right)
	{
		return default(bool);
	}

	[Token(Token = "0x6002620")]
	[Address(RVA = "0x1A43FE0", Offset = "0x1A425E0", VA = "0x181A43FE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002621")]
	[Address(RVA = "0x1A43940", Offset = "0x1A41F40", VA = "0x181A43940")]
	internal string ToString(bool typed)
	{
		return null;
	}

	[Token(Token = "0x6002622")]
	[Address(RVA = "0x1A43800", Offset = "0x1A41E00", VA = "0x181A43800")]
	private static object CanonicalizeValue(object value)
	{
		return null;
	}
}
