// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.SignatureTypeExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x2000503")]
internal static class SignatureTypeExtensions
{
	[Token(Token = "0x6002597")]
	[Address(RVA = "0x53DDE40", Offset = "0x53DCE40", VA = "0x53DDE40")]
	public static bool MatchesParameterTypeExactly(this Type pattern, ParameterInfo parameter)
	{
		return default(bool);
	}

	[Token(Token = "0x6002598")]
	[Address(RVA = "0x53DDEF0", Offset = "0x53DCEF0", VA = "0x53DDEF0")]
	internal static bool MatchesExactly(this System.Reflection.SignatureType pattern, Type actual)
	{
		return default(bool);
	}

	[Token(Token = "0x6002599")]
	[Address(RVA = "0x53DE2B0", Offset = "0x53DD2B0", VA = "0x53DE2B0")]
	internal static Type TryResolveAgainstGenericMethod(this System.Reflection.SignatureType signatureType, MethodInfo genericMethod)
	{
		return null;
	}

	[Token(Token = "0x600259A")]
	[Address(RVA = "0x53DE2E0", Offset = "0x53DD2E0", VA = "0x53DE2E0")]
	private static Type TryResolve(this System.Reflection.SignatureType signatureType, Type[] genericMethodParameters)
	{
		return null;
	}

	[Token(Token = "0x600259B")]
	[Address(RVA = "0x53DE730", Offset = "0x53DD730", VA = "0x53DE730")]
	private static Type TryMakeArrayType(this Type type)
	{
		return null;
	}

	[Token(Token = "0x600259C")]
	[Address(RVA = "0x53DE7C0", Offset = "0x53DD7C0", VA = "0x53DE7C0")]
	private static Type TryMakeArrayType(this Type type, int rank)
	{
		return null;
	}

	[Token(Token = "0x600259D")]
	[Address(RVA = "0x53DE850", Offset = "0x53DD850", VA = "0x53DE850")]
	private static Type TryMakeByRefType(this Type type)
	{
		return null;
	}

	[Token(Token = "0x600259E")]
	[Address(RVA = "0x53DE8E0", Offset = "0x53DD8E0", VA = "0x53DE8E0")]
	private static Type TryMakePointerType(this Type type)
	{
		return null;
	}

	[Token(Token = "0x600259F")]
	[Address(RVA = "0x53DE970", Offset = "0x53DD970", VA = "0x53DE970")]
	private static Type TryMakeGenericType(this Type type, Type[] instantiation)
	{
		return null;
	}
}
