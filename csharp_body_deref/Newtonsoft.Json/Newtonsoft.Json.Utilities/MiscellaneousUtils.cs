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
	[Address(RVA = "0x3DC03D0", Offset = "0x3DC03D0", VA = "0x3DC03D0")]
	[Conditional("DEBUG")]
	public static void Assert([DoesNotReturnIf(false)] bool condition, [Optional] string? message)
	{
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x3DC03E0", Offset = "0x3DC03E0", VA = "0x3DC03E0")]
	public static bool ValueEquals(object? objA, object? objB)
	{
		return default(bool);
	}

	[Token(Token = "0x6000689")]
	[Address(RVA = "0x3DB2670", Offset = "0x3DB2670", VA = "0x3DB2670")]
	public static ArgumentOutOfRangeException CreateArgumentOutOfRangeException(string paramName, object actualValue, string message)
	{
		return null;
	}

	[Token(Token = "0x600068A")]
	[Address(RVA = "0x3DC0710", Offset = "0x3DC0710", VA = "0x3DC0710")]
	public static string ToString(object? value)
	{
		return null;
	}

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x3DC0790", Offset = "0x3DC0790", VA = "0x3DC0790")]
	public static int ByteArrayCompare(byte[] a1, byte[] a2)
	{
		return default(int);
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x3DC0850", Offset = "0x3DC0850", VA = "0x3DC0850")]
	public static string GetPrefix(string qualifiedName)
	{
		return null;
	}

	[Token(Token = "0x600068D")]
	[Address(RVA = "0x3DC0910", Offset = "0x3DC0910", VA = "0x3DC0910")]
	public static string GetLocalName(string qualifiedName)
	{
		return null;
	}

	[Token(Token = "0x600068E")]
	[Address(RVA = "0x3DC0880", Offset = "0x3DC0880", VA = "0x3DC0880")]
	public static void GetQualifiedNameParts(string qualifiedName, out string? prefix, out string localName)
	{
	}

	[Token(Token = "0x600068F")]
	[Address(RVA = "0x3DC0940", Offset = "0x3DC0940", VA = "0x3DC0940")]
	internal static RegexOptions GetRegexOptions(string optionsText)
	{
		return default(RegexOptions);
	}
}
