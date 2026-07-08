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
	[Address(RVA = "0x4F52AA0", Offset = "0x4F52AA0", VA = "0x4F52AA0")]
	internal static void NormalizeInputs(ref string directory, ref string expression, EnumerationOptions options)
	{
	}

	[Token(Token = "0x6002B19")]
	[Address(RVA = "0x4F53390", Offset = "0x4F53390", VA = "0x4F53390")]
	private static bool MatchesPattern(string expression, ReadOnlySpan<char> name, EnumerationOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B1A")]
	[Address(RVA = "0x4F537A0", Offset = "0x4F537A0", VA = "0x4F537A0")]
	internal static IEnumerable<string> UserFiles(string directory, string expression, EnumerationOptions options)
	{
		return null;
	}

	[Token(Token = "0x6002B1B")]
	[Address(RVA = "0x4F539B0", Offset = "0x4F539B0", VA = "0x4F539B0")]
	internal static IEnumerable<string> UserDirectories(string directory, string expression, EnumerationOptions options)
	{
		return null;
	}

	[Token(Token = "0x6002B1C")]
	[Address(RVA = "0x4F53BC0", Offset = "0x4F53BC0", VA = "0x4F53BC0")]
	internal static IEnumerable<string> UserEntries(string directory, string expression, EnumerationOptions options)
	{
		return null;
	}

	[Token(Token = "0x6002B1D")]
	[Address(RVA = "0x4F53DD0", Offset = "0x4F53DD0", VA = "0x4F53DD0")]
	internal static IEnumerable<FileInfo> FileInfos(string directory, string expression, EnumerationOptions options)
	{
		return null;
	}

	[Token(Token = "0x6002B1E")]
	[Address(RVA = "0x4F53FE0", Offset = "0x4F53FE0", VA = "0x4F53FE0")]
	internal static IEnumerable<DirectoryInfo> DirectoryInfos(string directory, string expression, EnumerationOptions options)
	{
		return null;
	}

	[Token(Token = "0x6002B1F")]
	[Address(RVA = "0x4F541F0", Offset = "0x4F541F0", VA = "0x4F541F0")]
	internal static IEnumerable<FileSystemInfo> FileSystemInfos(string directory, string expression, EnumerationOptions options)
	{
		return null;
	}
}
