using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004FA")]
internal static class SignatureTypeExtensions
{
	[Token(Token = "0x6002547")]
	[Address(RVA = "0x4EF1170", Offset = "0x4EF1170", VA = "0x4EF1170")]
	public static bool MatchesParameterTypeExactly(this Type pattern, ParameterInfo parameter)
	{
		return default(bool);
	}

	[Token(Token = "0x6002548")]
	[Address(RVA = "0x4EF1210", Offset = "0x4EF1210", VA = "0x4EF1210")]
	internal static bool MatchesExactly(this System.Reflection.SignatureType pattern, Type actual)
	{
		return default(bool);
	}

	[Token(Token = "0x6002549")]
	[Address(RVA = "0x4EF15F0", Offset = "0x4EF15F0", VA = "0x4EF15F0")]
	internal static Type TryResolveAgainstGenericMethod(this System.Reflection.SignatureType signatureType, MethodInfo genericMethod)
	{
		return null;
	}

	[Token(Token = "0x600254A")]
	[Address(RVA = "0x4EF1620", Offset = "0x4EF1620", VA = "0x4EF1620")]
	private static Type TryResolve(this System.Reflection.SignatureType signatureType, Type[] genericMethodParameters)
	{
		return null;
	}

	[Token(Token = "0x600254B")]
	[Address(RVA = "0x4EF1A70", Offset = "0x4EF1A70", VA = "0x4EF1A70")]
	private static Type TryMakeArrayType(this Type type)
	{
		return null;
	}

	[Token(Token = "0x600254C")]
	[Address(RVA = "0x4EF1B10", Offset = "0x4EF1B10", VA = "0x4EF1B10")]
	private static Type TryMakeArrayType(this Type type, int rank)
	{
		return null;
	}

	[Token(Token = "0x600254D")]
	[Address(RVA = "0x4EF1BB0", Offset = "0x4EF1BB0", VA = "0x4EF1BB0")]
	private static Type TryMakeByRefType(this Type type)
	{
		return null;
	}

	[Token(Token = "0x600254E")]
	[Address(RVA = "0x4EF1C50", Offset = "0x4EF1C50", VA = "0x4EF1C50")]
	private static Type TryMakePointerType(this Type type)
	{
		return null;
	}

	[Token(Token = "0x600254F")]
	[Address(RVA = "0x4EF1CF0", Offset = "0x4EF1CF0", VA = "0x4EF1CF0")]
	private static Type TryMakeGenericType(this Type type, Type[] instantiation)
	{
		return null;
	}
}
