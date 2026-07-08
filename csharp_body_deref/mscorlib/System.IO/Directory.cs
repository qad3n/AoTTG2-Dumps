using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200055A")]
public static class Directory
{
	[Token(Token = "0x600291E")]
	[Address(RVA = "0x4F171A0", Offset = "0x4F171A0", VA = "0x4F171A0")]
	public static DirectoryInfo CreateDirectory(string path)
	{
		return null;
	}

	[Token(Token = "0x600291F")]
	[Address(RVA = "0x4F17B90", Offset = "0x4F17B90", VA = "0x4F17B90")]
	public static bool Exists(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x6002920")]
	[Address(RVA = "0x4F17D50", Offset = "0x4F17D50", VA = "0x4F17D50")]
	public static string[] GetFiles(string path, string searchPattern)
	{
		return null;
	}

	[Token(Token = "0x6002921")]
	[Address(RVA = "0x4F17ED0", Offset = "0x4F17ED0", VA = "0x4F17ED0")]
	public static string[] GetFiles(string path, string searchPattern, SearchOption searchOption)
	{
		return null;
	}

	[Token(Token = "0x6002922")]
	[Address(RVA = "0x4F17E70", Offset = "0x4F17E70", VA = "0x4F17E70")]
	public static string[] GetFiles(string path, string searchPattern, EnumerationOptions enumerationOptions)
	{
		return null;
	}

	[Token(Token = "0x6002923")]
	[Address(RVA = "0x4F18270", Offset = "0x4F18270", VA = "0x4F18270")]
	public static string[] GetDirectories(string path)
	{
		return null;
	}

	[Token(Token = "0x6002924")]
	[Address(RVA = "0x4F18390", Offset = "0x4F18390", VA = "0x4F18390")]
	public static string[] GetDirectories(string path, string searchPattern, EnumerationOptions enumerationOptions)
	{
		return null;
	}

	[Token(Token = "0x6002925")]
	[Address(RVA = "0x4F183F0", Offset = "0x4F183F0", VA = "0x4F183F0")]
	public static string[] GetFileSystemEntries(string path, string searchPattern)
	{
		return null;
	}

	[Token(Token = "0x6002926")]
	[Address(RVA = "0x4F18510", Offset = "0x4F18510", VA = "0x4F18510")]
	public static string[] GetFileSystemEntries(string path, string searchPattern, EnumerationOptions enumerationOptions)
	{
		return null;
	}

	[Token(Token = "0x6002927")]
	[Address(RVA = "0x4F180B0", Offset = "0x4F180B0", VA = "0x4F180B0")]
	internal static IEnumerable<string> InternalEnumeratePaths(string path, string searchPattern, System.IO.SearchTarget searchTarget, EnumerationOptions options)
	{
		return null;
	}

	[Token(Token = "0x6002928")]
	[Address(RVA = "0x4F18570", Offset = "0x4F18570", VA = "0x4F18570")]
	public static IEnumerable<string> EnumerateFileSystemEntries(string path)
	{
		return null;
	}

	[Token(Token = "0x6002929")]
	[Address(RVA = "0x4F18650", Offset = "0x4F18650", VA = "0x4F18650")]
	public static IEnumerable<string> EnumerateFileSystemEntries(string path, string searchPattern, EnumerationOptions enumerationOptions)
	{
		return null;
	}

	[Token(Token = "0x600292A")]
	[Address(RVA = "0x4F18660", Offset = "0x4F18660", VA = "0x4F18660")]
	internal static string InternalGetDirectoryRoot(string path)
	{
		return null;
	}

	[Token(Token = "0x600292B")]
	[Address(RVA = "0x4F18750", Offset = "0x4F18750", VA = "0x4F18750")]
	public static string GetCurrentDirectory()
	{
		return null;
	}

	[Token(Token = "0x600292C")]
	[Address(RVA = "0x4F18760", Offset = "0x4F18760", VA = "0x4F18760")]
	public static void Delete(string path, bool recursive)
	{
	}

	[Token(Token = "0x600292D")]
	[Address(RVA = "0x4F188D0", Offset = "0x4F188D0", VA = "0x4F188D0")]
	internal static string InsecureGetCurrentDirectory()
	{
		return null;
	}
}
