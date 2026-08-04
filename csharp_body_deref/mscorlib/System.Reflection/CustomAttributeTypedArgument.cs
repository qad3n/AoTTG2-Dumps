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

[Token(Token = "0x2000503")]
public struct CustomAttributeTypedArgument
{
	[Token(Token = "0x17000538")]
	public readonly Type ArgumentType
	{
		[Token(Token = "0x6002598")]
		[Address(RVA = "0x3BD9CE0", Offset = "0x3BD9CE0", VA = "0x3BD9CE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000539")]
	public readonly object Value
	{
		[Token(Token = "0x6002599")]
		[Address(RVA = "0x3BD9CF0", Offset = "0x3BD9CF0", VA = "0x3BD9CF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002596")]
	[Address(RVA = "0x3BD9BD0", Offset = "0x3BD9BD0", VA = "0x3BD9BD0")]
	public CustomAttributeTypedArgument(object value)
	{
	}

	[Token(Token = "0x6002597")]
	[Address(RVA = "0x3BD1C50", Offset = "0x3BD1C50", VA = "0x3BD1C50")]
	public CustomAttributeTypedArgument(Type argumentType, object value)
	{
	}

	[Token(Token = "0x600259A")]
	[Address(RVA = "0x3BD9D00", Offset = "0x3BD9D00", VA = "0x3BD9D00", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600259B")]
	[Address(RVA = "0x3BD9D50", Offset = "0x3BD9D50", VA = "0x3BD9D50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600259C")]
	[Address(RVA = "0x3BD9DA0", Offset = "0x3BD9DA0", VA = "0x3BD9DA0")]
	public static bool operator ==(CustomAttributeTypedArgument left, CustomAttributeTypedArgument right)
	{
		return default(bool);
	}

	[Token(Token = "0x600259D")]
	[Address(RVA = "0x3BD9E40", Offset = "0x3BD9E40", VA = "0x3BD9E40")]
	public static bool operator !=(CustomAttributeTypedArgument left, CustomAttributeTypedArgument right)
	{
		return default(bool);
	}

	[Token(Token = "0x600259E")]
	[Address(RVA = "0x3BD9EE0", Offset = "0x3BD9EE0", VA = "0x3BD9EE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600259F")]
	[Address(RVA = "0x3BD8F30", Offset = "0x3BD8F30", VA = "0x3BD8F30")]
	internal string ToString(bool typed)
	{
		return null;
	}

	[Token(Token = "0x60025A0")]
	[Address(RVA = "0x3BD9C60", Offset = "0x3BD9C60", VA = "0x3BD9C60")]
	private static object CanonicalizeValue(object value)
	{
		return null;
	}
}
