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

[Token(Token = "0x200068C")]
internal static class FileSystemEnumerableFactory
{
	[Token(Token = "0x4001A7F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] s_unixEscapeChars;

	[Token(Token = "0x60033AB")]
	[Address(RVA = "0x5490A20", Offset = "0x548FA20", VA = "0x5490A20")]
	internal static void NormalizeInputs(ref string directory, ref string expression, EnumerationOptions options)
	{
	}

	[Token(Token = "0x60033AC")]
	[Address(RVA = "0x54912D0", Offset = "0x54902D0", VA = "0x54912D0")]
	private static bool MatchesPattern(string expression, ReadOnlySpan<char> name, EnumerationOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x60033AD")]
	[Address(RVA = "0x54916E0", Offset = "0x54906E0", VA = "0x54916E0")]
	internal static IEnumerable<string> UserFiles(string directory, string expression, EnumerationOptions options)
	{
		return null;
	}

	[Token(Token = "0x60033AE")]
	[Address(RVA = "0x54918F0", Offset = "0x54908F0", VA = "0x54918F0")]
	internal static IEnumerable<string> UserDirectories(string directory, string expression, EnumerationOptions options)
	{
		return null;
	}

	[Token(Token = "0x60033AF")]
	[Address(RVA = "0x5491B00", Offset = "0x5490B00", VA = "0x5491B00")]
	internal static IEnumerable<string> UserEntries(string directory, string expression, EnumerationOptions options)
	{
		return null;
	}

	[Token(Token = "0x60033B0")]
	[Address(RVA = "0x5491D10", Offset = "0x5490D10", VA = "0x5491D10")]
	internal static IEnumerable<FileInfo> FileInfos(string directory, string expression, EnumerationOptions options)
	{
		return null;
	}

	[Token(Token = "0x60033B1")]
	[Address(RVA = "0x5491F20", Offset = "0x5490F20", VA = "0x5491F20")]
	internal static IEnumerable<DirectoryInfo> DirectoryInfos(string directory, string expression, EnumerationOptions options)
	{
		return null;
	}

	[Token(Token = "0x60033B2")]
	[Address(RVA = "0x5492130", Offset = "0x5491130", VA = "0x5492130")]
	internal static IEnumerable<FileSystemInfo> FileSystemInfos(string directory, string expression, EnumerationOptions options)
	{
		return null;
	}
}
