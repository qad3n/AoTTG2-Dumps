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

[Token(Token = "0x20001A1")]
public static class CSharpNameUtility
{
	[Token(Token = "0x40008E0")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<Type, string> primitives;

	[Token(Token = "0x40008E1")]
	[FieldOffset(Offset = "0x8")]
	public static readonly Dictionary<string, string> operators;

	[Token(Token = "0x40008E2")]
	[FieldOffset(Offset = "0x10")]
	private static readonly HashSet<char> illegalTypeFileNameCharacters;

	[Token(Token = "0x600100E")]
	[Address(RVA = "0x4D5E1A0", Offset = "0x4D5E1A0", VA = "0x4D5E1A0")]
	public static string CSharpName(this MemberInfo member, ActionDirection direction)
	{
		return null;
	}

	[Token(Token = "0x600100F")]
	[Address(RVA = "0x4D5E540", Offset = "0x4D5E540", VA = "0x4D5E540")]
	public static string CSharpName(this Type type, bool includeGenericParameters = true)
	{
		return null;
	}

	[Token(Token = "0x6001010")]
	[Address(RVA = "0x4D5EB50", Offset = "0x4D5EB50", VA = "0x4D5EB50")]
	public static string CSharpFullName(this Type type, bool includeGenericParameters = true)
	{
		return null;
	}

	[Token(Token = "0x6001011")]
	[Address(RVA = "0x4D5EBB0", Offset = "0x4D5EBB0", VA = "0x4D5EBB0")]
	public static string CSharpUniqueName(this Type type, bool includeGenericParameters = true)
	{
		return null;
	}

	[Token(Token = "0x6001012")]
	[Address(RVA = "0x4D5EC10", Offset = "0x4D5EC10", VA = "0x4D5EC10")]
	public static string CSharpFileName(this Type type, bool includeNamespace, bool includeGenericParameters = false)
	{
		return null;
	}

	[Token(Token = "0x6001013")]
	[Address(RVA = "0x4D5E590", Offset = "0x4D5E590", VA = "0x4D5E590")]
	private static string CSharpName(this Type type, TypeQualifier qualifier, bool includeGenericParameters = true)
	{
		return null;
	}
}
