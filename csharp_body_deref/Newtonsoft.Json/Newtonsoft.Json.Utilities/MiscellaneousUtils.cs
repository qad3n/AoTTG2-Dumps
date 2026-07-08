using System;
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Runtime.InteropServices;
using System.Text.RegularExpressions;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000E0")]
internal static class MiscellaneousUtils
{
	[Token(Token = "0x6000687")]
	[Address(RVA = "0x3ACAA80", Offset = "0x3ACAA80", VA = "0x3ACAA80")]
	[Conditional("DEBUG")]
	public static void Assert([DoesNotReturnIf(false)] bool condition, [Optional] string? message)
	{
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x3ACAA90", Offset = "0x3ACAA90", VA = "0x3ACAA90")]
	public static bool ValueEquals(object? objA, object? objB)
	{
		return default(bool);
	}

	[Token(Token = "0x6000689")]
	[Address(RVA = "0x3ABCD20", Offset = "0x3ABCD20", VA = "0x3ABCD20")]
	public static ArgumentOutOfRangeException CreateArgumentOutOfRangeException(string paramName, object actualValue, string message)
	{
		return null;
	}

	[Token(Token = "0x600068A")]
	[Address(RVA = "0x3ACADC0", Offset = "0x3ACADC0", VA = "0x3ACADC0")]
	public static string ToString(object? value)
	{
		return null;
	}

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x3ACAE40", Offset = "0x3ACAE40", VA = "0x3ACAE40")]
	public static int ByteArrayCompare(byte[] a1, byte[] a2)
	{
		return default(int);
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x3ACAF00", Offset = "0x3ACAF00", VA = "0x3ACAF00")]
	public static string GetPrefix(string qualifiedName)
	{
		return null;
	}

	[Token(Token = "0x600068D")]
	[Address(RVA = "0x3ACAFC0", Offset = "0x3ACAFC0", VA = "0x3ACAFC0")]
	public static string GetLocalName(string qualifiedName)
	{
		return null;
	}

	[Token(Token = "0x600068E")]
	[Address(RVA = "0x3ACAF30", Offset = "0x3ACAF30", VA = "0x3ACAF30")]
	public static void GetQualifiedNameParts(string qualifiedName, out string? prefix, out string localName)
	{
	}

	[Token(Token = "0x600068F")]
	[Address(RVA = "0x3ACAFF0", Offset = "0x3ACAFF0", VA = "0x3ACAFF0")]
	internal static RegexOptions GetRegexOptions(string optionsText)
	{
		return default(RegexOptions);
	}
}
