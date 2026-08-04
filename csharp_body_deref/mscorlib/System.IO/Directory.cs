// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Directory
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200055A")]
public static class Directory
{
	[Token(Token = "0x600291E")]
	[Address(RVA = "0x3BFCCC0", Offset = "0x3BFCCC0", VA = "0x3BFCCC0")]
	public static DirectoryInfo CreateDirectory(string path)
	{
		return null;
	}

	[Token(Token = "0x600291F")]
	[Address(RVA = "0x3BFD6B0", Offset = "0x3BFD6B0", VA = "0x3BFD6B0")]
	public static bool Exists(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x6002920")]
	[Address(RVA = "0x3BFD870", Offset = "0x3BFD870", VA = "0x3BFD870")]
	public static string[] GetFiles(string path, string searchPattern)
	{
		return null;
	}

	[Token(Token = "0x6002921")]
	[Address(RVA = "0x3BFD9F0", Offset = "0x3BFD9F0", VA = "0x3BFD9F0")]
	public static string[] GetFiles(string path, string searchPattern, SearchOption searchOption)
	{
		return null;
	}

	[Token(Token = "0x6002922")]
	[Address(RVA = "0x3BFD990", Offset = "0x3BFD990", VA = "0x3BFD990")]
	public static string[] GetFiles(string path, string searchPattern, EnumerationOptions enumerationOptions)
	{
		return null;
	}

	[Token(Token = "0x6002923")]
	[Address(RVA = "0x3BFDD90", Offset = "0x3BFDD90", VA = "0x3BFDD90")]
	public static string[] GetDirectories(string path)
	{
		return null;
	}

	[Token(Token = "0x6002924")]
	[Address(RVA = "0x3BFDEB0", Offset = "0x3BFDEB0", VA = "0x3BFDEB0")]
	public static string[] GetDirectories(string path, string searchPattern, EnumerationOptions enumerationOptions)
	{
		return null;
	}

	[Token(Token = "0x6002925")]
	[Address(RVA = "0x3BFDF10", Offset = "0x3BFDF10", VA = "0x3BFDF10")]
	public static string[] GetFileSystemEntries(string path, string searchPattern)
	{
		return null;
	}

	[Token(Token = "0x6002926")]
	[Address(RVA = "0x3BFE030", Offset = "0x3BFE030", VA = "0x3BFE030")]
	public static string[] GetFileSystemEntries(string path, string searchPattern, EnumerationOptions enumerationOptions)
	{
		return null;
	}

	[Token(Token = "0x6002927")]
	[Address(RVA = "0x3BFDBD0", Offset = "0x3BFDBD0", VA = "0x3BFDBD0")]
	internal static IEnumerable<string> InternalEnumeratePaths(string path, string searchPattern, System.IO.SearchTarget searchTarget, EnumerationOptions options)
	{
		return null;
	}

	[Token(Token = "0x6002928")]
	[Address(RVA = "0x3BFE090", Offset = "0x3BFE090", VA = "0x3BFE090")]
	public static IEnumerable<string> EnumerateFileSystemEntries(string path)
	{
		return null;
	}

	[Token(Token = "0x6002929")]
	[Address(RVA = "0x3BFE170", Offset = "0x3BFE170", VA = "0x3BFE170")]
	public static IEnumerable<string> EnumerateFileSystemEntries(string path, string searchPattern, EnumerationOptions enumerationOptions)
	{
		return null;
	}

	[Token(Token = "0x600292A")]
	[Address(RVA = "0x3BFE180", Offset = "0x3BFE180", VA = "0x3BFE180")]
	internal static string InternalGetDirectoryRoot(string path)
	{
		return null;
	}

	[Token(Token = "0x600292B")]
	[Address(RVA = "0x3BFE270", Offset = "0x3BFE270", VA = "0x3BFE270")]
	public static string GetCurrentDirectory()
	{
		return null;
	}

	[Token(Token = "0x600292C")]
	[Address(RVA = "0x3BFE280", Offset = "0x3BFE280", VA = "0x3BFE280")]
	public static void Delete(string path, bool recursive)
	{
	}

	[Token(Token = "0x600292D")]
	[Address(RVA = "0x3BFE3F0", Offset = "0x3BFE3F0", VA = "0x3BFE3F0")]
	internal static string InsecureGetCurrentDirectory()
	{
		return null;
	}
}
