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

[Token(Token = "0x20006B2")]
internal static class FileSystemEnumerableFactory
{
	[Token(Token = "0x4001B1E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] s_unixEscapeChars;

	[Token(Token = "0x60033F8")]
	[Address(RVA = "0x1B049C0", Offset = "0x1B02FC0", VA = "0x181B049C0")]
	internal static void NormalizeInputs(ref string directory, ref string expression, EnumerationOptions options)
	{
	}

	[Token(Token = "0x60033F9")]
	[Address(RVA = "0x1B04700", Offset = "0x1B02D00", VA = "0x181B04700")]
	private static bool MatchesPattern(string expression, ReadOnlySpan<char> name, EnumerationOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x60033FA")]
	[Address(RVA = "0x1B052E0", Offset = "0x1B038E0", VA = "0x181B052E0")]
	internal static IEnumerable<string> UserFiles(string directory, string expression, EnumerationOptions options)
	{
		return null;
	}

	[Token(Token = "0x60033FB")]
	[Address(RVA = "0x1B04EE0", Offset = "0x1B034E0", VA = "0x181B04EE0")]
	internal static IEnumerable<string> UserDirectories(string directory, string expression, EnumerationOptions options)
	{
		return null;
	}

	[Token(Token = "0x60033FC")]
	[Address(RVA = "0x1B050E0", Offset = "0x1B036E0", VA = "0x181B050E0")]
	internal static IEnumerable<string> UserEntries(string directory, string expression, EnumerationOptions options)
	{
		return null;
	}

	[Token(Token = "0x60033FD")]
	[Address(RVA = "0x1B04300", Offset = "0x1B02900", VA = "0x181B04300")]
	internal static IEnumerable<FileInfo> FileInfos(string directory, string expression, EnumerationOptions options)
	{
		return null;
	}

	[Token(Token = "0x60033FE")]
	[Address(RVA = "0x1B04100", Offset = "0x1B02700", VA = "0x181B04100")]
	internal static IEnumerable<DirectoryInfo> DirectoryInfos(string directory, string expression, EnumerationOptions options)
	{
		return null;
	}

	[Token(Token = "0x60033FF")]
	[Address(RVA = "0x1B04500", Offset = "0x1B02B00", VA = "0x181B04500")]
	internal static IEnumerable<FileSystemInfo> FileSystemInfos(string directory, string expression, EnumerationOptions options)
	{
		return null;
	}
}
