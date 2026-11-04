// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.FileSystem
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;

namespace System.IO;

[Token(Token = "0x200065F")]
internal static class FileSystem
{
	[Token(Token = "0x2000660")]
	private class UnitySafeFindHandle : Microsoft.Win32.SafeHandles.SafeFindHandle
	{
		[Token(Token = "0x4001992")]
		[FieldOffset(Offset = "0x20")]
		private readonly IntPtr m_Handle;

		[Token(Token = "0x170007DE")]
		public IntPtr Handle
		{
			[Token(Token = "0x60030B2")]
			[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
			get
			{
				return default(IntPtr);
			}
		}

		[Token(Token = "0x170007DF")]
		public override bool IsInvalid
		{
			[Token(Token = "0x60030B3")]
			[Address(RVA = "0x13B7EF0", Offset = "0x13B64F0", VA = "0x1813B7EF0", Slot = "5")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60030B1")]
		[Address(RVA = "0x1AE2A40", Offset = "0x1AE1040", VA = "0x181AE2A40")]
		public UnitySafeFindHandle(IntPtr handle)
		{
		}

		[Token(Token = "0x60030B4")]
		[Address(RVA = "0x1AE2A20", Offset = "0x1AE1020", VA = "0x181AE2A20", Slot = "6")]
		protected override void Dispose(bool disposing)
		{
		}
	}

	[Token(Token = "0x600308C")]
	[Address(RVA = "0x1ACE530", Offset = "0x1ACCB30", VA = "0x181ACE530")]
	public static void CopyFile(string sourceFullPath, string destFullPath, bool overwrite)
	{
	}

	[Token(Token = "0x600308D")]
	[Address(RVA = "0x1AD00C0", Offset = "0x1ACE6C0", VA = "0x181AD00C0")]
	public static void ReplaceFile(string sourceFullPath, string destFullPath, string destBackupFullPath, bool ignoreMetadataErrors)
	{
	}

	[Token(Token = "0x600308E")]
	[Address(RVA = "0x1ACE790", Offset = "0x1ACCD90", VA = "0x181ACE790")]
	public static void CreateDirectory(string fullPath)
	{
	}

	[Token(Token = "0x600308F")]
	[Address(RVA = "0x1ACECC0", Offset = "0x1ACD2C0", VA = "0x181ACECC0")]
	public static void DeleteFile(string fullPath)
	{
	}

	[Token(Token = "0x6003090")]
	[Address(RVA = "0x1ACED50", Offset = "0x1ACD350", VA = "0x181ACED50")]
	public static bool DirectoryExists(string fullPath)
	{
		return default(bool);
	}

	[Token(Token = "0x6003091")]
	[Address(RVA = "0x1ACEDA0", Offset = "0x1ACD3A0", VA = "0x181ACEDA0")]
	private static bool DirectoryExists(string path, out int lastError)
	{
		return default(bool);
	}

	[Token(Token = "0x6003092")]
	[Address(RVA = "0x1ACEE40", Offset = "0x1ACD440", VA = "0x181ACEE40")]
	internal static int FillAttributeInfo(string path, ref global::Interop.Kernel32.WIN32_FILE_ATTRIBUTE_DATA data, bool returnErrorOnNotFound)
	{
		return default(int);
	}

	[Token(Token = "0x6003093")]
	[Address(RVA = "0x1ACEDF0", Offset = "0x1ACD3F0", VA = "0x181ACEDF0")]
	public static bool FileExists(string fullPath)
	{
		return default(bool);
	}

	[Token(Token = "0x6003094")]
	[Address(RVA = "0x1ACF2A0", Offset = "0x1ACD8A0", VA = "0x181ACF2A0")]
	public static FileAttributes GetAttributes(string fullPath)
	{
		return default(FileAttributes);
	}

	[Token(Token = "0x6003095")]
	[Address(RVA = "0x1ACF310", Offset = "0x1ACD910", VA = "0x181ACF310")]
	public static DateTimeOffset GetCreationTime(string fullPath)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6003096")]
	[Address(RVA = "0x1ACF4F0", Offset = "0x1ACDAF0", VA = "0x181ACF4F0")]
	public static DateTimeOffset GetLastWriteTime(string fullPath)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6003097")]
	[Address(RVA = "0x1ACF5A0", Offset = "0x1ACDBA0", VA = "0x181ACF5A0")]
	public static void MoveFile(string sourceFullPath, string destFullPath)
	{
	}

	[Token(Token = "0x6003098")]
	[Address(RVA = "0x1ACFF80", Offset = "0x1ACE580", VA = "0x181ACFF80")]
	public static void RemoveDirectory(string fullPath, bool recursive)
	{
	}

	[Token(Token = "0x6003099")]
	[Address(RVA = "0x1ACF3A0", Offset = "0x1ACD9A0", VA = "0x181ACF3A0")]
	private static void GetFindData(string fullPath, ref global::Interop.Kernel32.WIN32_FIND_DATA findData)
	{
	}

	[Token(Token = "0x600309A")]
	[Address(RVA = "0x1ACF580", Offset = "0x1ACDB80", VA = "0x181ACF580")]
	private static bool IsNameSurrogateReparsePoint(ref global::Interop.Kernel32.WIN32_FIND_DATA data)
	{
		return default(bool);
	}

	[Token(Token = "0x600309B")]
	[Address(RVA = "0x1ACF780", Offset = "0x1ACDD80", VA = "0x181ACF780")]
	private static void RemoveDirectoryRecursive(string fullPath, ref global::Interop.Kernel32.WIN32_FIND_DATA findData, bool topLevel)
	{
	}

	[Token(Token = "0x600309C")]
	[Address(RVA = "0x1ACF660", Offset = "0x1ACDC60", VA = "0x181ACF660")]
	private static void RemoveDirectoryInternal(string fullPath, bool topLevel, bool allowDirectoryNotEmpty = false)
	{
	}

	[Token(Token = "0x600309D")]
	[Address(RVA = "0x1AD01C0", Offset = "0x1ACE7C0", VA = "0x181AD01C0")]
	private static bool UnityCreateDirectory(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600309E")]
	[Address(RVA = "0x1AD0890", Offset = "0x1ACEE90", VA = "0x181AD0890")]
	private static bool UnityRemoveDirectory(string fullPath)
	{
		return default(bool);
	}

	[Token(Token = "0x600309F")]
	[Address(RVA = "0x1AD06A0", Offset = "0x1ACECA0", VA = "0x181AD06A0")]
	private static bool UnityGetFileAttributesEx(string path, ref global::Interop.Kernel32.WIN32_FILE_ATTRIBUTE_DATA data)
	{
		return default(bool);
	}

	[Token(Token = "0x60030A0")]
	[Address(RVA = "0x1AD0250", Offset = "0x1ACE850", VA = "0x181AD0250")]
	internal static IntPtr UnityCreateFile_IntPtr(string lpFileName, int dwDesiredAccess, FileShare dwShareMode, FileMode dwCreationDisposition, int dwFlagsAndAttributes)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60030A1")]
	[Address(RVA = "0x1AD0150", Offset = "0x1ACE750", VA = "0x181AD0150")]
	private static int UnityCopyFile(string sourceFullPath, string destFullPath, bool failIfExists)
	{
		return default(int);
	}

	[Token(Token = "0x60030A2")]
	[Address(RVA = "0x1AD0310", Offset = "0x1ACE910", VA = "0x181AD0310")]
	private static bool UnityDeleteFile(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x60030A3")]
	[Address(RVA = "0x1AD0800", Offset = "0x1ACEE00", VA = "0x181AD0800")]
	private static bool UnityMoveFile(string sourceFullPath, string destFullPath)
	{
		return default(bool);
	}

	[Token(Token = "0x60030A4")]
	[Address(RVA = "0x1AD03F0", Offset = "0x1ACE9F0", VA = "0x181AD03F0")]
	private static Microsoft.Win32.SafeHandles.SafeFindHandle UnityFindFirstFile(string path, ref global::Interop.Kernel32.WIN32_FIND_DATA findData)
	{
		return null;
	}

	[Token(Token = "0x60030A5")]
	[Address(RVA = "0x1AD05A0", Offset = "0x1ACEBA0", VA = "0x181AD05A0")]
	private static bool UnityFindNextFile(Microsoft.Win32.SafeHandles.SafeFindHandle handle, ref global::Interop.Kernel32.WIN32_FIND_DATA findData)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60030A6")]
	[Address(RVA = "0x1ACE4C0", Offset = "0x1ACCAC0", VA = "0x181ACE4C0")]
	private static extern bool BrokeredCreateDirectory(string path);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60030A7")]
	[Address(RVA = "0x1ACE4C0", Offset = "0x1ACCAC0", VA = "0x181ACE4C0")]
	private static extern bool BrokeredRemoveDirectory(string path);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60030A8")]
	[Address(RVA = "0x1ACE4F0", Offset = "0x1ACCAF0", VA = "0x181ACE4F0")]
	private static extern bool BrokeredGetFileAttributes(string path, ref global::Interop.Kernel32.WIN32_FILE_ATTRIBUTE_DATA data);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60030A9")]
	[Address(RVA = "0x1ACE510", Offset = "0x1ACCB10", VA = "0x181ACE510")]
	private static extern IntPtr BrokeredOpenFile(string lpFileName, int dwDesiredAccess, int dwShareMode, int dwCreationDisposition, int dwFlagsAndAttributes);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60030AA")]
	[Address(RVA = "0x1ACE4B0", Offset = "0x1ACCAB0", VA = "0x181ACE4B0")]
	private static extern void BrokeredCopyFile(string sourcePath, string destPath, bool overwrite, ref int error);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60030AB")]
	[Address(RVA = "0x1ACE500", Offset = "0x1ACCB00", VA = "0x181ACE500")]
	private static extern bool BrokeredMoveFile(string sourceFullPath, string destFullPath);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60030AC")]
	[Address(RVA = "0x1ACE4C0", Offset = "0x1ACCAC0", VA = "0x181ACE4C0")]
	private static extern bool BrokeredDeleteFile(string path);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60030AD")]
	[Address(RVA = "0x1ACE4D0", Offset = "0x1ACCAD0", VA = "0x181ACE4D0")]
	private static extern IntPtr BrokeredFindFirstFile(string searchPath, ref string resultFilePath, ref uint attributes);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60030AE")]
	[Address(RVA = "0x1ACE4E0", Offset = "0x1ACCAE0", VA = "0x181ACE4E0")]
	private static extern bool BrokeredFindNextFile(IntPtr handle, ref string resultFilePath, ref uint attributes);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60030AF")]
	[Address(RVA = "0x1ACE520", Offset = "0x1ACCB20", VA = "0x181ACE520")]
	private static extern int BrokeredSafeFindHandleDispose(IntPtr handle);

	[Token(Token = "0x60030B0")]
	[Address(RVA = "0x1AD0050", Offset = "0x1ACE650", VA = "0x181AD0050")]
	private static string RemoveExtendedPathPrefix(string path)
	{
		return null;
	}
}
