// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.SignatureTypeExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004FA")]
internal static class SignatureTypeExtensions
{
	[Token(Token = "0x6002547")]
	[Address(RVA = "0x3BD6C90", Offset = "0x3BD6C90", VA = "0x3BD6C90")]
	public static bool MatchesParameterTypeExactly(this Type pattern, ParameterInfo parameter)
	{
		return default(bool);
	}

	[Token(Token = "0x6002548")]
	[Address(RVA = "0x3BD6D30", Offset = "0x3BD6D30", VA = "0x3BD6D30")]
	internal static bool MatchesExactly(this System.Reflection.SignatureType pattern, Type actual)
	{
		return default(bool);
	}

	[Token(Token = "0x6002549")]
	[Address(RVA = "0x3BD7110", Offset = "0x3BD7110", VA = "0x3BD7110")]
	internal static Type TryResolveAgainstGenericMethod(this System.Reflection.SignatureType signatureType, MethodInfo genericMethod)
	{
		return null;
	}

	[Token(Token = "0x600254A")]
	[Address(RVA = "0x3BD7140", Offset = "0x3BD7140", VA = "0x3BD7140")]
	private static Type TryResolve(this System.Reflection.SignatureType signatureType, Type[] genericMethodParameters)
	{
		return null;
	}

	[Token(Token = "0x600254B")]
	[Address(RVA = "0x3BD7590", Offset = "0x3BD7590", VA = "0x3BD7590")]
	private static Type TryMakeArrayType(this Type type)
	{
		return null;
	}

	[Token(Token = "0x600254C")]
	[Address(RVA = "0x3BD7630", Offset = "0x3BD7630", VA = "0x3BD7630")]
	private static Type TryMakeArrayType(this Type type, int rank)
	{
		return null;
	}

	[Token(Token = "0x600254D")]
	[Address(RVA = "0x3BD76D0", Offset = "0x3BD76D0", VA = "0x3BD76D0")]
	private static Type TryMakeByRefType(this Type type)
	{
		return null;
	}

	[Token(Token = "0x600254E")]
	[Address(RVA = "0x3BD7770", Offset = "0x3BD7770", VA = "0x3BD7770")]
	private static Type TryMakePointerType(this Type type)
	{
		return null;
	}

	[Token(Token = "0x600254F")]
	[Address(RVA = "0x3BD7810", Offset = "0x3BD7810", VA = "0x3BD7810")]
	private static Type TryMakeGenericType(this Type type, Type[] instantiation)
	{
		return null;
	}
}
