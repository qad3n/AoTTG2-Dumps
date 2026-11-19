// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.FileSystem
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000639")]
internal static class FileSystem
{
	[Token(Token = "0x6003069")]
	[Address(RVA = "0x5462540", Offset = "0x5461540", VA = "0x5462540")]
	private static bool CopyDanglingSymlink(string sourceFullPath, string destFullPath)
	{
		return default(bool);
	}

	[Token(Token = "0x600306A")]
	[Address(RVA = "0x54626B0", Offset = "0x54616B0", VA = "0x54626B0")]
	public static void CopyFile(string sourceFullPath, string destFullPath, bool overwrite)
	{
	}

	[Token(Token = "0x600306B")]
	[Address(RVA = "0x5462AA0", Offset = "0x5461AA0", VA = "0x5462AA0")]
	private static void LinkOrCopyFile(string sourceFullPath, string destFullPath)
	{
	}

	[Token(Token = "0x600306C")]
	[Address(RVA = "0x5462BE0", Offset = "0x5461BE0", VA = "0x5462BE0")]
	public static void ReplaceFile(string sourceFullPath, string destFullPath, string destBackupFullPath, bool ignoreMetadataErrors)
	{
	}

	[Token(Token = "0x600306D")]
	[Address(RVA = "0x5462D40", Offset = "0x5461D40", VA = "0x5462D40")]
	public static void MoveFile(string sourceFullPath, string destFullPath)
	{
	}

	[Token(Token = "0x600306E")]
	[Address(RVA = "0x5462E80", Offset = "0x5461E80", VA = "0x5462E80")]
	public static void DeleteFile(string fullPath)
	{
	}

	[Token(Token = "0x600306F")]
	[Address(RVA = "0x5463290", Offset = "0x5462290", VA = "0x5463290")]
	public static void CreateDirectory(string fullPath)
	{
	}

	[Token(Token = "0x6003070")]
	[Address(RVA = "0x5463BF0", Offset = "0x5462BF0", VA = "0x5463BF0")]
	public static void RemoveDirectory(string fullPath, bool recursive)
	{
	}

	[Token(Token = "0x6003071")]
	[Address(RVA = "0x5463CB0", Offset = "0x5462CB0", VA = "0x5463CB0")]
	private static void RemoveDirectoryInternal(DirectoryInfo directory, bool recursive, bool throwOnTopLevelDirectoryNotFound)
	{
	}

	[Token(Token = "0x6003072")]
	[Address(RVA = "0x5462A90", Offset = "0x5461A90", VA = "0x5462A90")]
	public static bool DirectoryExists(ReadOnlySpan<char> fullPath)
	{
		return default(bool);
	}

	[Token(Token = "0x6003073")]
	[Address(RVA = "0x5463BE0", Offset = "0x5462BE0", VA = "0x5463BE0")]
	private static bool DirectoryExists(ReadOnlySpan<char> fullPath, out global::Interop.ErrorInfo errorInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6003074")]
	[Address(RVA = "0x5463B80", Offset = "0x5462B80", VA = "0x5463B80")]
	public static bool FileExists(ReadOnlySpan<char> fullPath)
	{
		return default(bool);
	}

	[Token(Token = "0x6003075")]
	[Address(RVA = "0x5463190", Offset = "0x5462190", VA = "0x5463190")]
	private static bool FileExists(ReadOnlySpan<char> fullPath, int fileType, out global::Interop.ErrorInfo errorInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6003076")]
	[Address(RVA = "0x54643A0", Offset = "0x54633A0", VA = "0x54643A0")]
	private static bool ShouldIgnoreDirectory(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6003077")]
	[Address(RVA = "0x5464530", Offset = "0x5463530", VA = "0x5464530")]
	public static FileAttributes GetAttributes(string fullPath)
	{
		return default(FileAttributes);
	}

	[Token(Token = "0x6003078")]
	[Address(RVA = "0x54645B0", Offset = "0x54635B0", VA = "0x54645B0")]
	public static DateTimeOffset GetCreationTime(string fullPath)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6003079")]
	[Address(RVA = "0x5464650", Offset = "0x5463650", VA = "0x5464650")]
	public static DateTimeOffset GetLastWriteTime(string fullPath)
	{
		return default(DateTimeOffset);
	}
}
