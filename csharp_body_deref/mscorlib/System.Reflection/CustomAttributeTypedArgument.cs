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
		[Address(RVA = "0x4EF41C0", Offset = "0x4EF41C0", VA = "0x4EF41C0")]
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
		[Address(RVA = "0x4EF41D0", Offset = "0x4EF41D0", VA = "0x4EF41D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002596")]
	[Address(RVA = "0x4EF40B0", Offset = "0x4EF40B0", VA = "0x4EF40B0")]
	public CustomAttributeTypedArgument(object value)
	{
	}

	[Token(Token = "0x6002597")]
	[Address(RVA = "0x4EEC130", Offset = "0x4EEC130", VA = "0x4EEC130")]
	public CustomAttributeTypedArgument(Type argumentType, object value)
	{
	}

	[Token(Token = "0x600259A")]
	[Address(RVA = "0x4EF41E0", Offset = "0x4EF41E0", VA = "0x4EF41E0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600259B")]
	[Address(RVA = "0x4EF4230", Offset = "0x4EF4230", VA = "0x4EF4230", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600259C")]
	[Address(RVA = "0x4EF4280", Offset = "0x4EF4280", VA = "0x4EF4280")]
	public static bool operator ==(CustomAttributeTypedArgument left, CustomAttributeTypedArgument right)
	{
		return default(bool);
	}

	[Token(Token = "0x600259D")]
	[Address(RVA = "0x4EF4320", Offset = "0x4EF4320", VA = "0x4EF4320")]
	public static bool operator !=(CustomAttributeTypedArgument left, CustomAttributeTypedArgument right)
	{
		return default(bool);
	}

	[Token(Token = "0x600259E")]
	[Address(RVA = "0x4EF43C0", Offset = "0x4EF43C0", VA = "0x4EF43C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600259F")]
	[Address(RVA = "0x4EF3410", Offset = "0x4EF3410", VA = "0x4EF3410")]
	internal string ToString(bool typed)
	{
		return null;
	}

	[Token(Token = "0x60025A0")]
	[Address(RVA = "0x4EF4140", Offset = "0x4EF4140", VA = "0x4EF4140")]
	private static object CanonicalizeValue(object value)
	{
		return null;
	}
}
