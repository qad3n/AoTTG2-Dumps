using System;
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200019F")]
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

	[Token(Token = "0x6000FF9")]
	[Address(RVA = "0x4A38D40", Offset = "0x4A38D40", VA = "0x4A38D40")]
	public static string CSharpName(this MemberInfo member, ActionDirection direction)
	{
		return null;
	}

	[Token(Token = "0x6000FFA")]
	[Address(RVA = "0x4A390E0", Offset = "0x4A390E0", VA = "0x4A390E0")]
	public static string CSharpName(this Type type, bool includeGenericParameters = true)
	{
		return null;
	}

	[Token(Token = "0x6000FFB")]
	[Address(RVA = "0x4A396F0", Offset = "0x4A396F0", VA = "0x4A396F0")]
	public static string CSharpFullName(this Type type, bool includeGenericParameters = true)
	{
		return null;
	}

	[Token(Token = "0x6000FFC")]
	[Address(RVA = "0x4A39750", Offset = "0x4A39750", VA = "0x4A39750")]
	public static string CSharpUniqueName(this Type type, bool includeGenericParameters = true)
	{
		return null;
	}

	[Token(Token = "0x6000FFD")]
	[Address(RVA = "0x4A397B0", Offset = "0x4A397B0", VA = "0x4A397B0")]
	public static string CSharpFileName(this Type type, bool includeNamespace, bool includeGenericParameters = false)
	{
		return null;
	}

	[Token(Token = "0x6000FFE")]
	[Address(RVA = "0x4A39130", Offset = "0x4A39130", VA = "0x4A39130")]
	private static string CSharpName(this Type type, TypeQualifier qualifier, bool includeGenericParameters = true)
	{
		return null;
	}
}
