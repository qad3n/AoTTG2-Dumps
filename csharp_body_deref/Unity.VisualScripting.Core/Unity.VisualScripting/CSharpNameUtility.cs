// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.CSharpNameUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200019F")]
public static class CSharpNameUtility
{
	[Token(Token = "0x40008DE")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<Type, string> primitives;

	[Token(Token = "0x40008DF")]
	[FieldOffset(Offset = "0x8")]
	public static readonly Dictionary<string, string> operators;

	[Token(Token = "0x40008E0")]
	[FieldOffset(Offset = "0x10")]
	private static readonly HashSet<char> illegalTypeFileNameCharacters;

	[Token(Token = "0x6001006")]
	[Address(RVA = "0x2E2C590", Offset = "0x2E2AB90", VA = "0x182E2C590")]
	public static string CSharpName(this MemberInfo member, ActionDirection direction)
	{
		return null;
	}

	[Token(Token = "0x6001007")]
	[Address(RVA = "0x2E2BF90", Offset = "0x2E2A590", VA = "0x182E2BF90")]
	public static string CSharpName(this Type type, bool includeGenericParameters = true)
	{
		return null;
	}

	[Token(Token = "0x6001008")]
	[Address(RVA = "0x2E2BF30", Offset = "0x2E2A530", VA = "0x182E2BF30")]
	public static string CSharpFullName(this Type type, bool includeGenericParameters = true)
	{
		return null;
	}

	[Token(Token = "0x6001009")]
	[Address(RVA = "0x2E2C900", Offset = "0x2E2AF00", VA = "0x182E2C900")]
	public static string CSharpUniqueName(this Type type, bool includeGenericParameters = true)
	{
		return null;
	}

	[Token(Token = "0x600100A")]
	[Address(RVA = "0x2E2BDD0", Offset = "0x2E2A3D0", VA = "0x182E2BDD0")]
	public static string CSharpFileName(this Type type, bool includeNamespace, bool includeGenericParameters = false)
	{
		return null;
	}

	[Token(Token = "0x600100B")]
	[Address(RVA = "0x2E2BFF0", Offset = "0x2E2A5F0", VA = "0x182E2BFF0")]
	private static string CSharpName(this Type type, TypeQualifier qualifier, bool includeGenericParameters = true)
	{
		return null;
	}
}
