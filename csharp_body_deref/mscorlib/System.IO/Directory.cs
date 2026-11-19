// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Directory
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200065D")]
public static class Directory
{
	[Token(Token = "0x60031B6")]
	[Address(RVA = "0x5476A50", Offset = "0x5475A50", VA = "0x5476A50")]
	public static DirectoryInfo CreateDirectory(string path)
	{
		return null;
	}

	[Token(Token = "0x60031B7")]
	[Address(RVA = "0x5476D10", Offset = "0x5475D10", VA = "0x5476D10")]
	public static bool Exists(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x60031B8")]
	[Address(RVA = "0x5476EB0", Offset = "0x5475EB0", VA = "0x5476EB0")]
	public static string[] GetFiles(string path, string searchPattern)
	{
		return null;
	}

	[Token(Token = "0x60031B9")]
	[Address(RVA = "0x5477030", Offset = "0x5476030", VA = "0x5477030")]
	public static string[] GetFiles(string path, string searchPattern, SearchOption searchOption)
	{
		return null;
	}

	[Token(Token = "0x60031BA")]
	[Address(RVA = "0x5476FD0", Offset = "0x5475FD0", VA = "0x5476FD0")]
	public static string[] GetFiles(string path, string searchPattern, EnumerationOptions enumerationOptions)
	{
		return null;
	}

	[Token(Token = "0x60031BB")]
	[Address(RVA = "0x54773F0", Offset = "0x54763F0", VA = "0x54773F0")]
	public static string[] GetDirectories(string path)
	{
		return null;
	}

	[Token(Token = "0x60031BC")]
	[Address(RVA = "0x5477510", Offset = "0x5476510", VA = "0x5477510")]
	public static string[] GetDirectories(string path, string searchPattern, EnumerationOptions enumerationOptions)
	{
		return null;
	}

	[Token(Token = "0x60031BD")]
	[Address(RVA = "0x5477570", Offset = "0x5476570", VA = "0x5477570")]
	public static string[] GetFileSystemEntries(string path, string searchPattern)
	{
		return null;
	}

	[Token(Token = "0x60031BE")]
	[Address(RVA = "0x5477690", Offset = "0x5476690", VA = "0x5477690")]
	public static string[] GetFileSystemEntries(string path, string searchPattern, EnumerationOptions enumerationOptions)
	{
		return null;
	}

	[Token(Token = "0x60031BF")]
	[Address(RVA = "0x5477230", Offset = "0x5476230", VA = "0x5477230")]
	internal static IEnumerable<string> InternalEnumeratePaths(string path, string searchPattern, System.IO.SearchTarget searchTarget, EnumerationOptions options)
	{
		return null;
	}

	[Token(Token = "0x60031C0")]
	[Address(RVA = "0x54776F0", Offset = "0x54766F0", VA = "0x54776F0")]
	public static IEnumerable<string> EnumerateFileSystemEntries(string path)
	{
		return null;
	}

	[Token(Token = "0x60031C1")]
	[Address(RVA = "0x54777D0", Offset = "0x54767D0", VA = "0x54777D0")]
	public static IEnumerable<string> EnumerateFileSystemEntries(string path, string searchPattern, EnumerationOptions enumerationOptions)
	{
		return null;
	}

	[Token(Token = "0x60031C2")]
	[Address(RVA = "0x54777E0", Offset = "0x54767E0", VA = "0x54777E0")]
	internal static string InternalGetDirectoryRoot(string path)
	{
		return null;
	}

	[Token(Token = "0x60031C3")]
	[Address(RVA = "0x5477880", Offset = "0x5476880", VA = "0x5477880")]
	public static string GetCurrentDirectory()
	{
		return null;
	}

	[Token(Token = "0x60031C4")]
	[Address(RVA = "0x5477890", Offset = "0x5476890", VA = "0x5477890")]
	public static void Delete(string path, bool recursive)
	{
	}

	[Token(Token = "0x60031C5")]
	[Address(RVA = "0x5477950", Offset = "0x5476950", VA = "0x5477950")]
	internal static string InsecureGetCurrentDirectory()
	{
		return null;
	}
}
