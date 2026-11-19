// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Utilities.MiscellaneousUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x55B9430", Offset = "0x55B8430", VA = "0x55B9430")]
	[Conditional("DEBUG")]
	public static void Assert([DoesNotReturnIf(false)] bool condition, [Optional] string? message)
	{
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x55B9440", Offset = "0x55B8440", VA = "0x55B9440")]
	public static bool ValueEquals(object? objA, object? objB)
	{
		return default(bool);
	}

	[Token(Token = "0x6000689")]
	[Address(RVA = "0x55ABF00", Offset = "0x55AAF00", VA = "0x55ABF00")]
	public static ArgumentOutOfRangeException CreateArgumentOutOfRangeException(string paramName, object actualValue, string message)
	{
		return null;
	}

	[Token(Token = "0x600068A")]
	[Address(RVA = "0x55B9780", Offset = "0x55B8780", VA = "0x55B9780")]
	public static string ToString(object? value)
	{
		return null;
	}

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x55B9800", Offset = "0x55B8800", VA = "0x55B9800")]
	public static int ByteArrayCompare(byte[] a1, byte[] a2)
	{
		return default(int);
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x55B98B0", Offset = "0x55B88B0", VA = "0x55B98B0")]
	public static string GetPrefix(string qualifiedName)
	{
		return null;
	}

	[Token(Token = "0x600068D")]
	[Address(RVA = "0x55B9970", Offset = "0x55B8970", VA = "0x55B9970")]
	public static string GetLocalName(string qualifiedName)
	{
		return null;
	}

	[Token(Token = "0x600068E")]
	[Address(RVA = "0x55B98E0", Offset = "0x55B88E0", VA = "0x55B98E0")]
	public static void GetQualifiedNameParts(string qualifiedName, out string? prefix, out string localName)
	{
	}

	[Token(Token = "0x600068F")]
	[Address(RVA = "0x55B99A0", Offset = "0x55B89A0", VA = "0x55B99A0")]
	internal static RegexOptions GetRegexOptions(string optionsText)
	{
		return default(RegexOptions);
	}
}
