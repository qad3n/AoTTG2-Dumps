// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.SignatureTypeExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x200052A")]
internal static class SignatureTypeExtensions
{
	[Token(Token = "0x60025C9")]
	[Address(RVA = "0x1A566F0", Offset = "0x1A54CF0", VA = "0x181A566F0")]
	public static bool MatchesParameterTypeExactly(this Type pattern, ParameterInfo parameter)
	{
		return default(bool);
	}

	[Token(Token = "0x60025CA")]
	[Address(RVA = "0x1A56330", Offset = "0x1A54930", VA = "0x181A56330")]
	internal static bool MatchesExactly(this System.Reflection.SignatureType pattern, Type actual)
	{
		return default(bool);
	}

	[Token(Token = "0x60025CB")]
	[Address(RVA = "0x1A568A0", Offset = "0x1A54EA0", VA = "0x181A568A0")]
	internal static Type TryResolveAgainstGenericMethod(this System.Reflection.SignatureType signatureType, MethodInfo genericMethod)
	{
		return null;
	}

	[Token(Token = "0x60025CC")]
	[Address(RVA = "0x1A568E0", Offset = "0x1A54EE0", VA = "0x181A568E0")]
	private static Type TryResolve(this System.Reflection.SignatureType signatureType, Type[] genericMethodParameters)
	{
		return null;
	}

	[Token(Token = "0x60025CD")]
	[Address(RVA = "0x1A567E0", Offset = "0x1A54DE0", VA = "0x181A567E0")]
	private static Type TryMakeArrayType(this Type type)
	{
		return null;
	}

	[Token(Token = "0x60025CE")]
	[Address(RVA = "0x1A567B0", Offset = "0x1A54DB0", VA = "0x181A567B0")]
	private static Type TryMakeArrayType(this Type type, int rank)
	{
		return null;
	}

	[Token(Token = "0x60025CF")]
	[Address(RVA = "0x1A56810", Offset = "0x1A54E10", VA = "0x181A56810")]
	private static Type TryMakeByRefType(this Type type)
	{
		return null;
	}

	[Token(Token = "0x60025D0")]
	[Address(RVA = "0x1A56870", Offset = "0x1A54E70", VA = "0x181A56870")]
	private static Type TryMakePointerType(this Type type)
	{
		return null;
	}

	[Token(Token = "0x60025D1")]
	[Address(RVA = "0x1A56840", Offset = "0x1A54E40", VA = "0x181A56840")]
	private static Type TryMakeGenericType(this Type type, Type[] instantiation)
	{
		return null;
	}
}
