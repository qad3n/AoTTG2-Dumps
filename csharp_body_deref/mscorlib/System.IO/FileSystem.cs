// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.FileSystem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000560")]
internal static class FileSystem
{
	[Token(Token = "0x6002971")]
	[Address(RVA = "0x3C02240", Offset = "0x3C02240", VA = "0x3C02240")]
	private static bool CopyDanglingSymlink(string sourceFullPath, string destFullPath)
	{
		return default(bool);
	}

	[Token(Token = "0x6002972")]
	[Address(RVA = "0x3C01570", Offset = "0x3C01570", VA = "0x3C01570")]
	public static void CopyFile(string sourceFullPath, string destFullPath, bool overwrite)
	{
	}

	[Token(Token = "0x6002973")]
	[Address(RVA = "0x3BFF650", Offset = "0x3BFF650", VA = "0x3BFF650")]
	public static void DeleteFile(string fullPath)
	{
	}

	[Token(Token = "0x6002974")]
	[Address(RVA = "0x3BFCDF0", Offset = "0x3BFCDF0", VA = "0x3BFCDF0")]
	public static void CreateDirectory(string fullPath)
	{
	}

	[Token(Token = "0x6002975")]
	[Address(RVA = "0x3BFE2E0", Offset = "0x3BFE2E0", VA = "0x3BFE2E0")]
	public static void RemoveDirectory(string fullPath, bool recursive)
	{
	}

	[Token(Token = "0x6002976")]
	[Address(RVA = "0x3C024C0", Offset = "0x3C024C0", VA = "0x3C024C0")]
	private static void RemoveDirectoryInternal(DirectoryInfo directory, bool recursive, bool throwOnTopLevelDirectoryNotFound)
	{
	}

	[Token(Token = "0x6002977")]
	[Address(RVA = "0x3BFD850", Offset = "0x3BFD850", VA = "0x3BFD850")]
	public static bool DirectoryExists(ReadOnlySpan<char> fullPath)
	{
		return default(bool);
	}

	[Token(Token = "0x6002978")]
	[Address(RVA = "0x3C024B0", Offset = "0x3C024B0", VA = "0x3C024B0")]
	private static bool DirectoryExists(ReadOnlySpan<char> fullPath, out global::Interop.ErrorInfo errorInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6002979")]
	[Address(RVA = "0x3BFF7E0", Offset = "0x3BFF7E0", VA = "0x3BFF7E0")]
	public static bool FileExists(ReadOnlySpan<char> fullPath)
	{
		return default(bool);
	}

	[Token(Token = "0x600297A")]
	[Address(RVA = "0x3C023B0", Offset = "0x3C023B0", VA = "0x3C023B0")]
	private static bool FileExists(ReadOnlySpan<char> fullPath, int fileType, out global::Interop.ErrorInfo errorInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x600297B")]
	[Address(RVA = "0x3C02C60", Offset = "0x3C02C60", VA = "0x3C02C60")]
	private static bool ShouldIgnoreDirectory(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600297C")]
	[Address(RVA = "0x3BFFCC0", Offset = "0x3BFFCC0", VA = "0x3BFFCC0")]
	public static FileAttributes GetAttributes(string fullPath)
	{
		return default(FileAttributes);
	}

	[Token(Token = "0x600297D")]
	[Address(RVA = "0x3BFFA20", Offset = "0x3BFFA20", VA = "0x3BFFA20")]
	public static DateTimeOffset GetCreationTime(string fullPath)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600297E")]
	[Address(RVA = "0x3BFFB60", Offset = "0x3BFFB60", VA = "0x3BFFB60")]
	public static DateTimeOffset GetLastWriteTime(string fullPath)
	{
		return default(DateTimeOffset);
	}
}
