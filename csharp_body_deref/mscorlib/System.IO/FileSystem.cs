using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000560")]
internal static class FileSystem
{
	[Token(Token = "0x6002971")]
	[Address(RVA = "0x4F1C720", Offset = "0x4F1C720", VA = "0x4F1C720")]
	private static bool CopyDanglingSymlink(string sourceFullPath, string destFullPath)
	{
		return default(bool);
	}

	[Token(Token = "0x6002972")]
	[Address(RVA = "0x4F1BA50", Offset = "0x4F1BA50", VA = "0x4F1BA50")]
	public static void CopyFile(string sourceFullPath, string destFullPath, bool overwrite)
	{
	}

	[Token(Token = "0x6002973")]
	[Address(RVA = "0x4F19B30", Offset = "0x4F19B30", VA = "0x4F19B30")]
	public static void DeleteFile(string fullPath)
	{
	}

	[Token(Token = "0x6002974")]
	[Address(RVA = "0x4F172D0", Offset = "0x4F172D0", VA = "0x4F172D0")]
	public static void CreateDirectory(string fullPath)
	{
	}

	[Token(Token = "0x6002975")]
	[Address(RVA = "0x4F187C0", Offset = "0x4F187C0", VA = "0x4F187C0")]
	public static void RemoveDirectory(string fullPath, bool recursive)
	{
	}

	[Token(Token = "0x6002976")]
	[Address(RVA = "0x4F1C9A0", Offset = "0x4F1C9A0", VA = "0x4F1C9A0")]
	private static void RemoveDirectoryInternal(DirectoryInfo directory, bool recursive, bool throwOnTopLevelDirectoryNotFound)
	{
	}

	[Token(Token = "0x6002977")]
	[Address(RVA = "0x4F17D30", Offset = "0x4F17D30", VA = "0x4F17D30")]
	public static bool DirectoryExists(ReadOnlySpan<char> fullPath)
	{
		return default(bool);
	}

	[Token(Token = "0x6002978")]
	[Address(RVA = "0x4F1C990", Offset = "0x4F1C990", VA = "0x4F1C990")]
	private static bool DirectoryExists(ReadOnlySpan<char> fullPath, out global::Interop.ErrorInfo errorInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6002979")]
	[Address(RVA = "0x4F19CC0", Offset = "0x4F19CC0", VA = "0x4F19CC0")]
	public static bool FileExists(ReadOnlySpan<char> fullPath)
	{
		return default(bool);
	}

	[Token(Token = "0x600297A")]
	[Address(RVA = "0x4F1C890", Offset = "0x4F1C890", VA = "0x4F1C890")]
	private static bool FileExists(ReadOnlySpan<char> fullPath, int fileType, out global::Interop.ErrorInfo errorInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x600297B")]
	[Address(RVA = "0x4F1D140", Offset = "0x4F1D140", VA = "0x4F1D140")]
	private static bool ShouldIgnoreDirectory(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600297C")]
	[Address(RVA = "0x4F1A1A0", Offset = "0x4F1A1A0", VA = "0x4F1A1A0")]
	public static FileAttributes GetAttributes(string fullPath)
	{
		return default(FileAttributes);
	}

	[Token(Token = "0x600297D")]
	[Address(RVA = "0x4F19F00", Offset = "0x4F19F00", VA = "0x4F19F00")]
	public static DateTimeOffset GetCreationTime(string fullPath)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600297E")]
	[Address(RVA = "0x4F1A040", Offset = "0x4F1A040", VA = "0x4F1A040")]
	public static DateTimeOffset GetLastWriteTime(string fullPath)
	{
		return default(DateTimeOffset);
	}
}
