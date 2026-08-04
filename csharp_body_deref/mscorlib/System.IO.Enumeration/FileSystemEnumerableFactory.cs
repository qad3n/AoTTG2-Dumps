// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Enumeration.FileSystemEnumerableFactory
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.IO.Enumeration;

[Token(Token = "0x200058A")]
internal static class FileSystemEnumerableFactory
{
	[Token(Token = "0x400173E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] s_unixEscapeChars;

	[Token(Token = "0x6002B18")]
	[Address(RVA = "0x3C385C0", Offset = "0x3C385C0", VA = "0x3C385C0")]
	internal static void NormalizeInputs(ref string directory, ref string expression, EnumerationOptions options)
	{
	}

	[Token(Token = "0x6002B19")]
	[Address(RVA = "0x3C38EB0", Offset = "0x3C38EB0", VA = "0x3C38EB0")]
	private static bool MatchesPattern(string expression, ReadOnlySpan<char> name, EnumerationOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B1A")]
	[Address(RVA = "0x3C392C0", Offset = "0x3C392C0", VA = "0x3C392C0")]
	internal static IEnumerable<string> UserFiles(string directory, string expression, EnumerationOptions options)
	{
		return null;
	}

	[Token(Token = "0x6002B1B")]
	[Address(RVA = "0x3C394D0", Offset = "0x3C394D0", VA = "0x3C394D0")]
	internal static IEnumerable<string> UserDirectories(string directory, string expression, EnumerationOptions options)
	{
		return null;
	}

	[Token(Token = "0x6002B1C")]
	[Address(RVA = "0x3C396E0", Offset = "0x3C396E0", VA = "0x3C396E0")]
	internal static IEnumerable<string> UserEntries(string directory, string expression, EnumerationOptions options)
	{
		return null;
	}

	[Token(Token = "0x6002B1D")]
	[Address(RVA = "0x3C398F0", Offset = "0x3C398F0", VA = "0x3C398F0")]
	internal static IEnumerable<FileInfo> FileInfos(string directory, string expression, EnumerationOptions options)
	{
		return null;
	}

	[Token(Token = "0x6002B1E")]
	[Address(RVA = "0x3C39B00", Offset = "0x3C39B00", VA = "0x3C39B00")]
	internal static IEnumerable<DirectoryInfo> DirectoryInfos(string directory, string expression, EnumerationOptions options)
	{
		return null;
	}

	[Token(Token = "0x6002B1F")]
	[Address(RVA = "0x3C39D10", Offset = "0x3C39D10", VA = "0x3C39D10")]
	internal static IEnumerable<FileSystemInfo> FileSystemInfos(string directory, string expression, EnumerationOptions options)
	{
		return null;
	}
}
