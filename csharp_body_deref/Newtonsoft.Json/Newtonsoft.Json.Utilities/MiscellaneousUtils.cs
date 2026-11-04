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
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("DEBUG")]
	public static void Assert([DoesNotReturnIf(false)] bool condition, [Optional] string? message)
	{
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x1C2AF80", Offset = "0x1C29580", VA = "0x181C2AF80")]
	public static bool ValueEquals(object? objA, object? objB)
	{
		return default(bool);
	}

	[Token(Token = "0x6000689")]
	[Address(RVA = "0x1C2AB70", Offset = "0x1C29170", VA = "0x181C2AB70")]
	public static ArgumentOutOfRangeException CreateArgumentOutOfRangeException(string paramName, object actualValue, string message)
	{
		return null;
	}

	[Token(Token = "0x600068A")]
	[Address(RVA = "0x1C2AEF0", Offset = "0x1C294F0", VA = "0x181C2AEF0")]
	public static string ToString(object? value)
	{
		return null;
	}

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x1C2AAD0", Offset = "0x1C290D0", VA = "0x181C2AAD0")]
	public static int ByteArrayCompare(byte[] a1, byte[] a2)
	{
		return default(int);
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x1C2AD00", Offset = "0x1C29300", VA = "0x181C2AD00")]
	public static string GetPrefix(string qualifiedName)
	{
		return null;
	}

	[Token(Token = "0x600068D")]
	[Address(RVA = "0x1C2AC40", Offset = "0x1C29240", VA = "0x181C2AC40")]
	public static string GetLocalName(string qualifiedName)
	{
		return null;
	}

	[Token(Token = "0x600068E")]
	[Address(RVA = "0x1C2ADC0", Offset = "0x1C293C0", VA = "0x181C2ADC0")]
	public static void GetQualifiedNameParts(string qualifiedName, out string? prefix, out string localName)
	{
	}

	[Token(Token = "0x600068F")]
	[Address(RVA = "0x1C2AE60", Offset = "0x1C29460", VA = "0x181C2AE60")]
	internal static RegexOptions GetRegexOptions(string optionsText)
	{
		return default(RegexOptions);
	}
}
