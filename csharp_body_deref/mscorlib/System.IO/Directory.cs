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

[Token(Token = "0x2000684")]
public static class Directory
{
	[Token(Token = "0x60031FC")]
	[Address(RVA = "0x1AE7040", Offset = "0x1AE5640", VA = "0x181AE7040")]
	public static DirectoryInfo CreateDirectory(string path)
	{
		return null;
	}

	[Token(Token = "0x60031FD")]
	[Address(RVA = "0x1AE7270", Offset = "0x1AE5870", VA = "0x181AE7270")]
	public static bool Exists(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x60031FE")]
	[Address(RVA = "0x1AE75E0", Offset = "0x1AE5BE0", VA = "0x181AE75E0")]
	public static string[] GetFiles(string path, string searchPattern)
	{
		return null;
	}

	[Token(Token = "0x60031FF")]
	[Address(RVA = "0x1AE76C0", Offset = "0x1AE5CC0", VA = "0x181AE76C0")]
	public static string[] GetFiles(string path, string searchPattern, SearchOption searchOption)
	{
		return null;
	}

	[Token(Token = "0x6003200")]
	[Address(RVA = "0x1AE78A0", Offset = "0x1AE5EA0", VA = "0x181AE78A0")]
	public static string[] GetFiles(string path, string searchPattern, EnumerationOptions enumerationOptions)
	{
		return null;
	}

	[Token(Token = "0x6003201")]
	[Address(RVA = "0x1AE7330", Offset = "0x1AE5930", VA = "0x181AE7330")]
	public static string[] GetDirectories(string path)
	{
		return null;
	}

	[Token(Token = "0x6003202")]
	[Address(RVA = "0x1AE7420", Offset = "0x1AE5A20", VA = "0x181AE7420")]
	public static string[] GetDirectories(string path, string searchPattern, EnumerationOptions enumerationOptions)
	{
		return null;
	}

	[Token(Token = "0x6003203")]
	[Address(RVA = "0x1AE7490", Offset = "0x1AE5A90", VA = "0x181AE7490")]
	public static string[] GetFileSystemEntries(string path, string searchPattern)
	{
		return null;
	}

	[Token(Token = "0x6003204")]
	[Address(RVA = "0x1AE7570", Offset = "0x1AE5B70", VA = "0x181AE7570")]
	public static string[] GetFileSystemEntries(string path, string searchPattern, EnumerationOptions enumerationOptions)
	{
		return null;
	}

	[Token(Token = "0x6003205")]
	[Address(RVA = "0x1AE79A0", Offset = "0x1AE5FA0", VA = "0x181AE79A0")]
	internal static IEnumerable<string> InternalEnumeratePaths(string path, string searchPattern, System.IO.SearchTarget searchTarget, EnumerationOptions options)
	{
		return null;
	}

	[Token(Token = "0x6003206")]
	[Address(RVA = "0x1AE7BE0", Offset = "0x1AE61E0", VA = "0x181AE7BE0")]
	internal static string InternalGetDirectoryRoot(string path)
	{
		return null;
	}

	[Token(Token = "0x6003207")]
	[Address(RVA = "0x1AE7320", Offset = "0x1AE5920", VA = "0x181AE7320")]
	public static string GetCurrentDirectory()
	{
		return null;
	}

	[Token(Token = "0x6003208")]
	[Address(RVA = "0x1AE71D0", Offset = "0x1AE57D0", VA = "0x181AE71D0")]
	public static void Delete(string path, bool recursive)
	{
	}

	[Token(Token = "0x6003209")]
	[Address(RVA = "0x1AE7910", Offset = "0x1AE5F10", VA = "0x181AE7910")]
	internal static string InsecureGetCurrentDirectory()
	{
		return null;
	}
}
