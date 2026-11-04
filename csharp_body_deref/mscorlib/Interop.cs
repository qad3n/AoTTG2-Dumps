// ==================== AoTTG2 cross-reference ====================
// Type: Interop
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.IO;
using System.Runtime.InteropServices;
using System.Text;
using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;

[Token(Token = "0x2000002")]
internal static class Interop
{
	[Token(Token = "0x2000003")]
	internal static class Kernel32
	{
		[StructLayout((LayoutKind)0, CharSet = CharSet.Unicode)]
		[Token(Token = "0x2000004")]
		internal struct WIN32_FIND_DATA
		{
			[Token(Token = "0x4000002")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			internal uint dwFileAttributes;

			[Token(Token = "0x4000003")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
			internal FILE_TIME ftCreationTime;

			[Token(Token = "0x4000004")]
			[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
			internal FILE_TIME ftLastAccessTime;

			[Token(Token = "0x4000005")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
			internal FILE_TIME ftLastWriteTime;

			[Token(Token = "0x4000006")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
			internal uint nFileSizeHigh;

			[Token(Token = "0x4000007")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
			internal uint nFileSizeLow;

			[Token(Token = "0x4000008")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
			internal uint dwReserved0;

			[Token(Token = "0x4000009")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
			internal uint dwReserved1;

			[Token(Token = "0x400000A")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
			private unsafe fixed char _cFileName[260];

			[Token(Token = "0x400000B")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x234")]
			private unsafe fixed char _cAlternateFileName[14];

			[Token(Token = "0x17000001")]
			internal ReadOnlySpan<char> cFileName
			{
				[Token(Token = "0x6000027")]
				[Address(RVA = "0x1956E30", Offset = "0x1955430", VA = "0x181956E30")]
				get
				{
					return default(ReadOnlySpan<char>);
				}
			}

			[Token(Token = "0x6000028")]
			[Address(RVA = "0x1956D80", Offset = "0x1955380", VA = "0x181956D80")]
			internal void SetFileName(string fileName)
			{
			}
		}

		[Token(Token = "0x2000007")]
		internal struct REG_TZI_FORMAT
		{
			[Token(Token = "0x400000E")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			internal int Bias;

			[Token(Token = "0x400000F")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
			internal int StandardBias;

			[Token(Token = "0x4000010")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			internal int DaylightBias;

			[Token(Token = "0x4000011")]
			[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
			internal SYSTEMTIME StandardDate;

			[Token(Token = "0x4000012")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
			internal SYSTEMTIME DaylightDate;

			[Token(Token = "0x6000029")]
			[Address(RVA = "0x194C390", Offset = "0x194A990", VA = "0x18194C390")]
			internal REG_TZI_FORMAT(in TIME_ZONE_INFORMATION tzi)
			{
			}
		}

		[Token(Token = "0x2000008")]
		internal struct SYSTEMTIME
		{
			[Token(Token = "0x4000013")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			internal ushort Year;

			[Token(Token = "0x4000014")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x2")]
			internal ushort Month;

			[Token(Token = "0x4000015")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
			internal ushort DayOfWeek;

			[Token(Token = "0x4000016")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x6")]
			internal ushort Day;

			[Token(Token = "0x4000017")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			internal ushort Hour;

			[Token(Token = "0x4000018")]
			[Il2CppDummyDll.FieldOffset(Offset = "0xA")]
			internal ushort Minute;

			[Token(Token = "0x4000019")]
			[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
			internal ushort Second;

			[Token(Token = "0x400001A")]
			[Il2CppDummyDll.FieldOffset(Offset = "0xE")]
			internal ushort Milliseconds;

			[Token(Token = "0x600002A")]
			[Address(RVA = "0x194CF90", Offset = "0x194B590", VA = "0x18194CF90")]
			internal bool Equals(in SYSTEMTIME other)
			{
				return default(bool);
			}
		}

		[StructLayout((LayoutKind)0, CharSet = CharSet.Unicode)]
		[Token(Token = "0x2000009")]
		internal struct TIME_DYNAMIC_ZONE_INFORMATION
		{
			[Token(Token = "0x400001B")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			internal int Bias;

			[Token(Token = "0x400001C")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
			internal unsafe fixed char StandardName[32];

			[Token(Token = "0x400001D")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
			internal SYSTEMTIME StandardDate;

			[Token(Token = "0x400001E")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
			internal int StandardBias;

			[Token(Token = "0x400001F")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
			internal unsafe fixed char DaylightName[32];

			[Token(Token = "0x4000020")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
			internal SYSTEMTIME DaylightDate;

			[Token(Token = "0x4000021")]
			[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
			internal int DaylightBias;

			[Token(Token = "0x4000022")]
			[Il2CppDummyDll.FieldOffset(Offset = "0xAC")]
			internal unsafe fixed char TimeZoneKeyName[128];

			[Token(Token = "0x4000023")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x1AC")]
			internal byte DynamicDaylightTimeDisabled;

			[Token(Token = "0x600002B")]
			[Address(RVA = "0x1956A70", Offset = "0x1955070", VA = "0x181956A70")]
			internal string GetTimeZoneKeyName()
			{
				return null;
			}
		}

		[StructLayout((LayoutKind)0, CharSet = CharSet.Unicode)]
		[Token(Token = "0x200000D")]
		internal struct TIME_ZONE_INFORMATION
		{
			[Token(Token = "0x4000027")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			internal int Bias;

			[Token(Token = "0x4000028")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
			internal unsafe fixed char StandardName[32];

			[Token(Token = "0x4000029")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
			internal SYSTEMTIME StandardDate;

			[Token(Token = "0x400002A")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
			internal int StandardBias;

			[Token(Token = "0x400002B")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
			internal unsafe fixed char DaylightName[32];

			[Token(Token = "0x400002C")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
			internal SYSTEMTIME DaylightDate;

			[Token(Token = "0x400002D")]
			[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
			internal int DaylightBias;

			[Token(Token = "0x600002C")]
			[Address(RVA = "0x1956AB0", Offset = "0x19550B0", VA = "0x181956AB0")]
			internal TIME_ZONE_INFORMATION(in TIME_DYNAMIC_ZONE_INFORMATION dtzi)
			{
			}

			[Token(Token = "0x600002D")]
			[Address(RVA = "0x1956AA0", Offset = "0x19550A0", VA = "0x181956AA0")]
			internal string GetStandardName()
			{
				return null;
			}

			[Token(Token = "0x600002E")]
			[Address(RVA = "0x1956A90", Offset = "0x1955090", VA = "0x181956A90")]
			internal string GetDaylightName()
			{
				return null;
			}
		}

		[Token(Token = "0x2000010")]
		internal struct COPYFILE2_EXTENDED_PARAMETERS
		{
			[Token(Token = "0x4000030")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			internal uint dwSize;

			[Token(Token = "0x4000031")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
			internal uint dwCopyFlags;

			[Token(Token = "0x4000032")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			internal IntPtr pfCancel;

			[Token(Token = "0x4000033")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			internal IntPtr pProgressRoutine;

			[Token(Token = "0x4000034")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
			internal IntPtr pvCallbackContext;
		}

		[Token(Token = "0x2000011")]
		internal enum FILE_INFO_BY_HANDLE_CLASS : uint
		{
			[Token(Token = "0x4000036")]
			FileBasicInfo,
			[Token(Token = "0x4000037")]
			FileStandardInfo,
			[Token(Token = "0x4000038")]
			FileNameInfo,
			[Token(Token = "0x4000039")]
			FileRenameInfo,
			[Token(Token = "0x400003A")]
			FileDispositionInfo,
			[Token(Token = "0x400003B")]
			FileAllocationInfo,
			[Token(Token = "0x400003C")]
			FileEndOfFileInfo,
			[Token(Token = "0x400003D")]
			FileStreamInfo,
			[Token(Token = "0x400003E")]
			FileCompressionInfo,
			[Token(Token = "0x400003F")]
			FileAttributeTagInfo,
			[Token(Token = "0x4000040")]
			FileIdBothDirectoryInfo,
			[Token(Token = "0x4000041")]
			FileIdBothDirectoryRestartInfo,
			[Token(Token = "0x4000042")]
			FileIoPriorityHintInfo,
			[Token(Token = "0x4000043")]
			FileRemoteProtocolInfo,
			[Token(Token = "0x4000044")]
			FileFullDirectoryInfo,
			[Token(Token = "0x4000045")]
			FileFullDirectoryRestartInfo
		}

		[Token(Token = "0x2000012")]
		internal struct FILE_TIME
		{
			[Token(Token = "0x4000046")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			internal uint dwLowDateTime;

			[Token(Token = "0x4000047")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
			internal uint dwHighDateTime;

			[Token(Token = "0x600002F")]
			[Address(RVA = "0x1945060", Offset = "0x1943660", VA = "0x181945060")]
			internal long ToTicks()
			{
				return default(long);
			}

			[Token(Token = "0x6000030")]
			[Address(RVA = "0x1944FE0", Offset = "0x19435E0", VA = "0x181944FE0")]
			internal DateTimeOffset ToDateTimeOffset()
			{
				return default(DateTimeOffset);
			}
		}

		[Token(Token = "0x2000013")]
		internal enum FINDEX_INFO_LEVELS : uint
		{
			[Token(Token = "0x4000049")]
			FindExInfoStandard,
			[Token(Token = "0x400004A")]
			FindExInfoBasic,
			[Token(Token = "0x400004B")]
			FindExInfoMaxInfoLevel
		}

		[Token(Token = "0x2000014")]
		internal enum FINDEX_SEARCH_OPS : uint
		{
			[Token(Token = "0x400004D")]
			FindExSearchNameMatch,
			[Token(Token = "0x400004E")]
			FindExSearchLimitToDirectories,
			[Token(Token = "0x400004F")]
			FindExSearchLimitToDevices,
			[Token(Token = "0x4000050")]
			FindExSearchMaxSearchOp
		}

		[Token(Token = "0x2000015")]
		internal enum GET_FILEEX_INFO_LEVELS : uint
		{
			[Token(Token = "0x4000052")]
			GetFileExInfoStandard,
			[Token(Token = "0x4000053")]
			GetFileExMaxInfoLevel
		}

		[Token(Token = "0x2000016")]
		internal struct SECURITY_ATTRIBUTES
		{
			[Token(Token = "0x4000054")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			internal uint nLength;

			[Token(Token = "0x4000055")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			internal IntPtr lpSecurityDescriptor;

			[Token(Token = "0x4000056")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			internal BOOL bInheritHandle;
		}

		[Token(Token = "0x2000017")]
		internal struct WIN32_FILE_ATTRIBUTE_DATA
		{
			[Token(Token = "0x4000057")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			internal int dwFileAttributes;

			[Token(Token = "0x4000058")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
			internal FILE_TIME ftCreationTime;

			[Token(Token = "0x4000059")]
			[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
			internal FILE_TIME ftLastAccessTime;

			[Token(Token = "0x400005A")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
			internal FILE_TIME ftLastWriteTime;

			[Token(Token = "0x400005B")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
			internal uint nFileSizeHigh;

			[Token(Token = "0x400005C")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
			internal uint nFileSizeLow;

			[Token(Token = "0x6000031")]
			[Address(RVA = "0x1956D50", Offset = "0x1955350", VA = "0x181956D50")]
			internal void PopulateFrom(ref WIN32_FIND_DATA findData)
			{
			}
		}

		[Token(Token = "0x4000001")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static bool useUWPFallback;

		[Token(Token = "0x6000002")]
		[Address(RVA = "0x19454B0", Offset = "0x1943AB0", VA = "0x1819454B0")]
		internal static int CopyFileUWP(string src, string dst, bool failIfExists)
		{
			return default(int);
		}

		[Token(Token = "0x6000003")]
		[Address(RVA = "0x19455F0", Offset = "0x1943BF0", VA = "0x1819455F0")]
		internal static int CopyFile(string src, string dst, bool failIfExists)
		{
			return default(int);
		}

		[PreserveSig]
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x1945E00", Offset = "0x1944400", VA = "0x181945E00")]
		internal static extern bool DeleteVolumeMountPointPrivate(string mountPoint);

		[Token(Token = "0x6000005")]
		[Address(RVA = "0x1945E90", Offset = "0x1944490", VA = "0x181945E90")]
		internal static bool DeleteVolumeMountPoint(string mountPoint)
		{
			return default(bool);
		}

		[PreserveSig]
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x1946380", Offset = "0x1944980", VA = "0x181946380")]
		internal static extern bool FreeLibrary(IntPtr hModule);

		[PreserveSig]
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x19469F0", Offset = "0x1944FF0", VA = "0x1819469F0")]
		internal static extern Microsoft.Win32.SafeHandles.SafeLibraryHandle LoadLibraryEx(string libFilename, IntPtr reserved, int flags);

		[PreserveSig]
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x19466E0", Offset = "0x1944CE0", VA = "0x1819466E0")]
		internal static extern bool GetFileMUIPath(uint flags, string filePath, [Out] StringBuilder language, ref int languageLength, [Out] StringBuilder fileMuiPath, ref int fileMuiPathLength, ref long enumerator);

		[PreserveSig]
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x1946410", Offset = "0x1944A10", VA = "0x181946410")]
		internal static extern uint GetDynamicTimeZoneInformation(out TIME_DYNAMIC_ZONE_INFORMATION pTimeZoneInformation);

		[PreserveSig]
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x1946960", Offset = "0x1944F60", VA = "0x181946960")]
		internal static extern uint GetTimeZoneInformation(out TIME_ZONE_INFORMATION lpTimeZoneInformation);

		[PreserveSig]
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x1945180", Offset = "0x1943780", VA = "0x181945180")]
		internal static extern bool CloseHandle(IntPtr handle);

		[PreserveSig]
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x1945210", Offset = "0x1943810", VA = "0x181945210")]
		internal static extern int CopyFile2(string pwszExistingFileName, string pwszNewFileName, ref COPYFILE2_EXTENDED_PARAMETERS pExtendedParameters);

		[PreserveSig]
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x19452C0", Offset = "0x19438C0", VA = "0x1819452C0")]
		private static extern bool CopyFileExPrivate(string src, string dst, IntPtr progressRoutine, IntPtr progressData, ref int cancel, int flags);

		[Token(Token = "0x600000E")]
		[Address(RVA = "0x1945390", Offset = "0x1943990", VA = "0x181945390")]
		internal static bool CopyFileEx(string src, string dst, IntPtr progressRoutine, IntPtr progressData, ref int cancel, int flags)
		{
			return default(bool);
		}

		[PreserveSig]
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x19457D0", Offset = "0x1943DD0", VA = "0x1819457D0")]
		private static extern bool CreateDirectoryPrivate(string path, ref SECURITY_ATTRIBUTES lpSecurityAttributes);

		[Token(Token = "0x6000010")]
		[Address(RVA = "0x1945870", Offset = "0x1943E70", VA = "0x181945870")]
		internal static bool CreateDirectory(string path, ref SECURITY_ATTRIBUTES lpSecurityAttributes)
		{
			return default(bool);
		}

		[PreserveSig]
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x1945950", Offset = "0x1943F50", VA = "0x181945950")]
		private unsafe static extern IntPtr CreateFilePrivate(string lpFileName, int dwDesiredAccess, FileShare dwShareMode, SECURITY_ATTRIBUTES* securityAttrs, FileMode dwCreationDisposition, int dwFlagsAndAttributes, IntPtr hTemplateFile);

		[Token(Token = "0x6000012")]
		[Address(RVA = "0x1945B20", Offset = "0x1944120", VA = "0x181945B20")]
		internal static SafeFileHandle CreateFile(string lpFileName, int dwDesiredAccess, FileShare dwShareMode, FileMode dwCreationDisposition, int dwFlagsAndAttributes)
		{
			return null;
		}

		[Token(Token = "0x6000013")]
		[Address(RVA = "0x1945A20", Offset = "0x1944020", VA = "0x181945A20")]
		internal static IntPtr CreateFile_IntPtr(string lpFileName, int dwDesiredAccess, FileShare dwShareMode, FileMode dwCreationDisposition, int dwFlagsAndAttributes)
		{
			return default(IntPtr);
		}

		[PreserveSig]
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x1945CA0", Offset = "0x19442A0", VA = "0x181945CA0")]
		private static extern bool DeleteFilePrivate(string path);

		[Token(Token = "0x6000015")]
		[Address(RVA = "0x1945D30", Offset = "0x1944330", VA = "0x181945D30")]
		internal static bool DeleteFile(string path)
		{
			return default(bool);
		}

		[PreserveSig]
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x1945FA0", Offset = "0x19445A0", VA = "0x181945FA0")]
		private static extern Microsoft.Win32.SafeHandles.SafeFindHandle FindFirstFileExPrivate(string lpFileName, FINDEX_INFO_LEVELS fInfoLevelId, ref WIN32_FIND_DATA lpFindFileData, FINDEX_SEARCH_OPS fSearchOp, IntPtr lpSearchFilter, int dwAdditionalFlags);

		[Token(Token = "0x6000017")]
		[Address(RVA = "0x19460A0", Offset = "0x19446A0", VA = "0x1819460A0")]
		internal static Microsoft.Win32.SafeHandles.SafeFindHandle FindFirstFile(string fileName, ref WIN32_FIND_DATA data)
		{
			return null;
		}

		[PreserveSig]
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x19461D0", Offset = "0x19447D0", VA = "0x1819461D0")]
		internal static extern bool FindNextFile(Microsoft.Win32.SafeHandles.SafeFindHandle hndFindFile, ref WIN32_FIND_DATA lpFindFileData);

		[PreserveSig]
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x19462B0", Offset = "0x19448B0", VA = "0x1819462B0")]
		private unsafe static extern int FormatMessage(int dwFlags, IntPtr lpSource, uint dwMessageId, int dwLanguageId, char* lpBuffer, int nSize, IntPtr[] arguments);

		[Token(Token = "0x600001A")]
		[Address(RVA = "0x1946950", Offset = "0x1944F50", VA = "0x181946950")]
		internal static string GetMessage(int errorCode)
		{
			return null;
		}

		[Token(Token = "0x600001B")]
		[Address(RVA = "0x1946800", Offset = "0x1944E00", VA = "0x181946800")]
		internal static string GetMessage(IntPtr moduleHandle, int errorCode)
		{
			return null;
		}

		[Token(Token = "0x600001C")]
		[Address(RVA = "0x19470C0", Offset = "0x19456C0", VA = "0x1819470C0")]
		private static bool TryGetErrorMessage(IntPtr moduleHandle, int errorCode, Span<char> buffer, out string errorMsg)
		{
			return default(bool);
		}

		[PreserveSig]
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x19464A0", Offset = "0x1944AA0", VA = "0x1819464A0")]
		private static extern bool GetFileAttributesExPrivate(string name, GET_FILEEX_INFO_LEVELS fileInfoLevel, ref WIN32_FILE_ATTRIBUTE_DATA lpFileInformation);

		[Token(Token = "0x600001E")]
		[Address(RVA = "0x1946550", Offset = "0x1944B50", VA = "0x181946550")]
		internal static bool GetFileAttributesEx(string name, GET_FILEEX_INFO_LEVELS fileInfoLevel, ref WIN32_FILE_ATTRIBUTE_DATA lpFileInformation)
		{
			return default(bool);
		}

		[PreserveSig]
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x1946640", Offset = "0x1944C40", VA = "0x181946640")]
		public static extern bool GetFileInformationByHandleEx(IntPtr hFile, FILE_INFO_BY_HANDLE_CLASS FileInformationClass, IntPtr lpFileInformation, uint dwBufferSize);

		[PreserveSig]
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x1946AE0", Offset = "0x19450E0", VA = "0x181946AE0")]
		private static extern bool MoveFileExPrivate(string src, string dst, uint flags);

		[Token(Token = "0x6000021")]
		[Address(RVA = "0x1946BA0", Offset = "0x19451A0", VA = "0x181946BA0")]
		internal static bool MoveFile(string src, string dst)
		{
			return default(bool);
		}

		[PreserveSig]
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x1946CA0", Offset = "0x19452A0", VA = "0x181946CA0")]
		private static extern bool RemoveDirectoryPrivate(string path);

		[Token(Token = "0x6000023")]
		[Address(RVA = "0x1946D30", Offset = "0x1945330", VA = "0x181946D30")]
		internal static bool RemoveDirectory(string path)
		{
			return default(bool);
		}

		[PreserveSig]
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x1946E00", Offset = "0x1945400", VA = "0x181946E00")]
		private static extern bool ReplaceFilePrivate(string replacedFileName, string replacementFileName, string backupFileName, int dwReplaceFlags, IntPtr lpExclude, IntPtr lpReserved);

		[Token(Token = "0x6000025")]
		[Address(RVA = "0x1946EE0", Offset = "0x19454E0", VA = "0x181946EE0")]
		internal static bool ReplaceFile(string replacedFileName, string replacementFileName, string backupFileName, int dwReplaceFlags, IntPtr lpExclude, IntPtr lpReserved)
		{
			return default(bool);
		}

		[PreserveSig]
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x1947020", Offset = "0x1945620", VA = "0x181947020")]
		internal static extern bool SetThreadErrorMode(uint dwNewMode, out uint lpOldMode);
	}

	[Token(Token = "0x2000018")]
	internal class BCrypt
	{
		[Token(Token = "0x2000019")]
		internal enum NTSTATUS : uint
		{
			[Token(Token = "0x400005E")]
			STATUS_SUCCESS = 0u,
			[Token(Token = "0x400005F")]
			STATUS_NOT_FOUND = 3221226021u,
			[Token(Token = "0x4000060")]
			STATUS_INVALID_PARAMETER = 3221225485u,
			[Token(Token = "0x4000061")]
			STATUS_NO_MEMORY = 3221225495u
		}

		[PreserveSig]
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x1941260", Offset = "0x193F860", VA = "0x181941260")]
		internal unsafe static extern NTSTATUS BCryptGenRandom(IntPtr hAlgorithm, byte* pbBuffer, int cbBuffer, int dwFlags);
	}

	[Token(Token = "0x200001A")]
	internal class User32
	{
		[PreserveSig]
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x1956C20", Offset = "0x1955220", VA = "0x181956C20")]
		internal static extern int LoadString(Microsoft.Win32.SafeHandles.SafeLibraryHandle handle, int id, [Out] StringBuilder buffer, int bufferLength);
	}

	[Token(Token = "0x200001B")]
	internal enum BOOL
	{
		[Token(Token = "0x4000063")]
		FALSE,
		[Token(Token = "0x4000064")]
		TRUE
	}

	[Token(Token = "0x200001C")]
	internal enum BOOLEAN : byte
	{
		[Token(Token = "0x4000066")]
		FALSE,
		[Token(Token = "0x4000067")]
		TRUE
	}

	[Token(Token = "0x200001D")]
	internal struct LongFileTime
	{
		[Token(Token = "0x4000068")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal long TicksSince1601;
	}

	[Token(Token = "0x200001E")]
	internal struct UNICODE_STRING
	{
		[Token(Token = "0x4000069")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal ushort Length;

		[Token(Token = "0x400006A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2")]
		internal ushort MaximumLength;

		[Token(Token = "0x400006B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal IntPtr Buffer;
	}

	[Token(Token = "0x200001F")]
	internal class NtDll
	{
		[StructLayout((LayoutKind)0, CharSet = CharSet.Unicode)]
		[Token(Token = "0x2000020")]
		public struct FILE_FULL_DIR_INFORMATION
		{
			[Token(Token = "0x400006C")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public uint NextEntryOffset;

			[Token(Token = "0x400006D")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
			public uint FileIndex;

			[Token(Token = "0x400006E")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			public LongFileTime CreationTime;

			[Token(Token = "0x400006F")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			public LongFileTime LastAccessTime;

			[Token(Token = "0x4000070")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
			public LongFileTime LastWriteTime;

			[Token(Token = "0x4000071")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
			public LongFileTime ChangeTime;

			[Token(Token = "0x4000072")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
			public long EndOfFile;

			[Token(Token = "0x4000073")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
			public long AllocationSize;

			[Token(Token = "0x4000074")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
			public FileAttributes FileAttributes;

			[Token(Token = "0x4000075")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
			public uint FileNameLength;

			[Token(Token = "0x4000076")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
			public uint EaSize;

			[Token(Token = "0x4000077")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
			private char _fileName;

			[Token(Token = "0x17000002")]
			public ReadOnlySpan<char> FileName
			{
				[Token(Token = "0x6000038")]
				[Address(RVA = "0x1944F70", Offset = "0x1943570", VA = "0x181944F70")]
				get
				{
					return default(ReadOnlySpan<char>);
				}
			}

			[Token(Token = "0x6000039")]
			[Address(RVA = "0x1944F50", Offset = "0x1943550", VA = "0x181944F50")]
			public unsafe static FILE_FULL_DIR_INFORMATION* GetNextInfo(FILE_FULL_DIR_INFORMATION* info)
			{
				//IL_0002: Expected I, but got O
				return (FILE_FULL_DIR_INFORMATION*)unchecked((nint)null);
			}
		}

		[Token(Token = "0x2000021")]
		public enum FILE_INFORMATION_CLASS : uint
		{
			[Token(Token = "0x4000079")]
			FileDirectoryInformation = 1u,
			[Token(Token = "0x400007A")]
			FileFullDirectoryInformation,
			[Token(Token = "0x400007B")]
			FileBothDirectoryInformation,
			[Token(Token = "0x400007C")]
			FileBasicInformation,
			[Token(Token = "0x400007D")]
			FileStandardInformation,
			[Token(Token = "0x400007E")]
			FileInternalInformation,
			[Token(Token = "0x400007F")]
			FileEaInformation,
			[Token(Token = "0x4000080")]
			FileAccessInformation,
			[Token(Token = "0x4000081")]
			FileNameInformation,
			[Token(Token = "0x4000082")]
			FileRenameInformation,
			[Token(Token = "0x4000083")]
			FileLinkInformation,
			[Token(Token = "0x4000084")]
			FileNamesInformation,
			[Token(Token = "0x4000085")]
			FileDispositionInformation,
			[Token(Token = "0x4000086")]
			FilePositionInformation,
			[Token(Token = "0x4000087")]
			FileFullEaInformation,
			[Token(Token = "0x4000088")]
			FileModeInformation,
			[Token(Token = "0x4000089")]
			FileAlignmentInformation,
			[Token(Token = "0x400008A")]
			FileAllInformation,
			[Token(Token = "0x400008B")]
			FileAllocationInformation,
			[Token(Token = "0x400008C")]
			FileEndOfFileInformation,
			[Token(Token = "0x400008D")]
			FileAlternateNameInformation,
			[Token(Token = "0x400008E")]
			FileStreamInformation,
			[Token(Token = "0x400008F")]
			FilePipeInformation,
			[Token(Token = "0x4000090")]
			FilePipeLocalInformation,
			[Token(Token = "0x4000091")]
			FilePipeRemoteInformation,
			[Token(Token = "0x4000092")]
			FileMailslotQueryInformation,
			[Token(Token = "0x4000093")]
			FileMailslotSetInformation,
			[Token(Token = "0x4000094")]
			FileCompressionInformation,
			[Token(Token = "0x4000095")]
			FileObjectIdInformation,
			[Token(Token = "0x4000096")]
			FileCompletionInformation,
			[Token(Token = "0x4000097")]
			FileMoveClusterInformation,
			[Token(Token = "0x4000098")]
			FileQuotaInformation,
			[Token(Token = "0x4000099")]
			FileReparsePointInformation,
			[Token(Token = "0x400009A")]
			FileNetworkOpenInformation,
			[Token(Token = "0x400009B")]
			FileAttributeTagInformation,
			[Token(Token = "0x400009C")]
			FileTrackingInformation,
			[Token(Token = "0x400009D")]
			FileIdBothDirectoryInformation,
			[Token(Token = "0x400009E")]
			FileIdFullDirectoryInformation,
			[Token(Token = "0x400009F")]
			FileValidDataLengthInformation,
			[Token(Token = "0x40000A0")]
			FileShortNameInformation,
			[Token(Token = "0x40000A1")]
			FileIoCompletionNotificationInformation,
			[Token(Token = "0x40000A2")]
			FileIoStatusBlockRangeInformation,
			[Token(Token = "0x40000A3")]
			FileIoPriorityHintInformation,
			[Token(Token = "0x40000A4")]
			FileSfioReserveInformation,
			[Token(Token = "0x40000A5")]
			FileSfioVolumeInformation,
			[Token(Token = "0x40000A6")]
			FileHardLinkInformation,
			[Token(Token = "0x40000A7")]
			FileProcessIdsUsingFileInformation,
			[Token(Token = "0x40000A8")]
			FileNormalizedNameInformation,
			[Token(Token = "0x40000A9")]
			FileNetworkPhysicalNameInformation,
			[Token(Token = "0x40000AA")]
			FileIdGlobalTxDirectoryInformation,
			[Token(Token = "0x40000AB")]
			FileIsRemoteDeviceInformation,
			[Token(Token = "0x40000AC")]
			FileUnusedInformation,
			[Token(Token = "0x40000AD")]
			FileNumaNodeInformation,
			[Token(Token = "0x40000AE")]
			FileStandardLinkInformation,
			[Token(Token = "0x40000AF")]
			FileRemoteProtocolInformation,
			[Token(Token = "0x40000B0")]
			FileRenameInformationBypassAccessCheck,
			[Token(Token = "0x40000B1")]
			FileLinkInformationBypassAccessCheck,
			[Token(Token = "0x40000B2")]
			FileVolumeNameInformation,
			[Token(Token = "0x40000B3")]
			FileIdInformation,
			[Token(Token = "0x40000B4")]
			FileIdExtdDirectoryInformation,
			[Token(Token = "0x40000B5")]
			FileReplaceCompletionInformation,
			[Token(Token = "0x40000B6")]
			FileHardLinkFullIdInformation,
			[Token(Token = "0x40000B7")]
			FileIdExtdBothDirectoryInformation,
			[Token(Token = "0x40000B8")]
			FileDispositionInformationEx,
			[Token(Token = "0x40000B9")]
			FileRenameInformationEx,
			[Token(Token = "0x40000BA")]
			FileRenameInformationExBypassAccessCheck,
			[Token(Token = "0x40000BB")]
			FileDesiredStorageClassInformation,
			[Token(Token = "0x40000BC")]
			FileStatInformation
		}

		[Token(Token = "0x2000022")]
		public struct IO_STATUS_BLOCK
		{
			[StructLayout((LayoutKind)2)]
			[Token(Token = "0x2000023")]
			public struct IO_STATUS
			{
				[Token(Token = "0x40000BF")]
				[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
				public uint Status;

				[Token(Token = "0x40000C0")]
				[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
				public IntPtr Pointer;
			}

			[Token(Token = "0x40000BD")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public IO_STATUS Status;

			[Token(Token = "0x40000BE")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			public IntPtr Information;
		}

		[Token(Token = "0x2000024")]
		public struct OBJECT_ATTRIBUTES
		{
			[Token(Token = "0x40000C1")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public uint Length;

			[Token(Token = "0x40000C2")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			public IntPtr RootDirectory;

			[Token(Token = "0x40000C3")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			public unsafe UNICODE_STRING* ObjectName;

			[Token(Token = "0x40000C4")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
			public ObjectAttributes Attributes;

			[Token(Token = "0x40000C5")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
			public unsafe void* SecurityDescriptor;

			[Token(Token = "0x40000C6")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
			public unsafe void* SecurityQualityOfService;

			[Token(Token = "0x600003A")]
			[Address(RVA = "0x194C360", Offset = "0x194A960", VA = "0x18194C360")]
			public unsafe OBJECT_ATTRIBUTES(UNICODE_STRING* objectName, ObjectAttributes attributes, IntPtr rootDirectory)
			{
			}
		}

		[Token(Token = "0x2000025")]
		[Flags]
		public enum ObjectAttributes : uint
		{
			[Token(Token = "0x40000C8")]
			OBJ_INHERIT = 2u,
			[Token(Token = "0x40000C9")]
			OBJ_PERMANENT = 0x10u,
			[Token(Token = "0x40000CA")]
			OBJ_EXCLUSIVE = 0x20u,
			[Token(Token = "0x40000CB")]
			OBJ_CASE_INSENSITIVE = 0x40u,
			[Token(Token = "0x40000CC")]
			OBJ_OPENIF = 0x80u,
			[Token(Token = "0x40000CD")]
			OBJ_OPENLINK = 0x100u
		}

		[Token(Token = "0x2000026")]
		public enum CreateDisposition : uint
		{
			[Token(Token = "0x40000CF")]
			FILE_SUPERSEDE,
			[Token(Token = "0x40000D0")]
			FILE_OPEN,
			[Token(Token = "0x40000D1")]
			FILE_CREATE,
			[Token(Token = "0x40000D2")]
			FILE_OPEN_IF,
			[Token(Token = "0x40000D3")]
			FILE_OVERWRITE,
			[Token(Token = "0x40000D4")]
			FILE_OVERWRITE_IF
		}

		[Token(Token = "0x2000027")]
		public enum CreateOptions : uint
		{
			[Token(Token = "0x40000D6")]
			FILE_DIRECTORY_FILE = 1u,
			[Token(Token = "0x40000D7")]
			FILE_WRITE_THROUGH = 2u,
			[Token(Token = "0x40000D8")]
			FILE_SEQUENTIAL_ONLY = 4u,
			[Token(Token = "0x40000D9")]
			FILE_NO_INTERMEDIATE_BUFFERING = 8u,
			[Token(Token = "0x40000DA")]
			FILE_SYNCHRONOUS_IO_ALERT = 0x10u,
			[Token(Token = "0x40000DB")]
			FILE_SYNCHRONOUS_IO_NONALERT = 0x20u,
			[Token(Token = "0x40000DC")]
			FILE_NON_DIRECTORY_FILE = 0x40u,
			[Token(Token = "0x40000DD")]
			FILE_CREATE_TREE_CONNECTION = 0x80u,
			[Token(Token = "0x40000DE")]
			FILE_COMPLETE_IF_OPLOCKED = 0x100u,
			[Token(Token = "0x40000DF")]
			FILE_NO_EA_KNOWLEDGE = 0x200u,
			[Token(Token = "0x40000E0")]
			FILE_RANDOM_ACCESS = 0x800u,
			[Token(Token = "0x40000E1")]
			FILE_DELETE_ON_CLOSE = 0x1000u,
			[Token(Token = "0x40000E2")]
			FILE_OPEN_BY_FILE_ID = 0x2000u,
			[Token(Token = "0x40000E3")]
			FILE_OPEN_FOR_BACKUP_INTENT = 0x4000u,
			[Token(Token = "0x40000E4")]
			FILE_NO_COMPRESSION = 0x8000u,
			[Token(Token = "0x40000E5")]
			FILE_OPEN_REQUIRING_OPLOCK = 0x10000u,
			[Token(Token = "0x40000E6")]
			FILE_DISALLOW_EXCLUSIVE = 0x20000u,
			[Token(Token = "0x40000E7")]
			FILE_SESSION_AWARE = 0x40000u,
			[Token(Token = "0x40000E8")]
			FILE_RESERVE_OPFILTER = 0x100000u,
			[Token(Token = "0x40000E9")]
			FILE_OPEN_REPARSE_POINT = 0x200000u,
			[Token(Token = "0x40000EA")]
			FILE_OPEN_NO_RECALL = 0x400000u
		}

		[Token(Token = "0x2000028")]
		[Flags]
		public enum DesiredAccess : uint
		{
			[Token(Token = "0x40000EC")]
			FILE_READ_DATA = 1u,
			[Token(Token = "0x40000ED")]
			FILE_LIST_DIRECTORY = FILE_READ_DATA,
			[Token(Token = "0x40000EE")]
			FILE_WRITE_DATA = 2u,
			[Token(Token = "0x40000EF")]
			FILE_ADD_FILE = FILE_WRITE_DATA,
			[Token(Token = "0x40000F0")]
			FILE_APPEND_DATA = 4u,
			[Token(Token = "0x40000F1")]
			FILE_ADD_SUBDIRECTORY = FILE_APPEND_DATA,
			[Token(Token = "0x40000F2")]
			FILE_CREATE_PIPE_INSTANCE = FILE_APPEND_DATA,
			[Token(Token = "0x40000F3")]
			FILE_READ_EA = 8u,
			[Token(Token = "0x40000F4")]
			FILE_WRITE_EA = 0x10u,
			[Token(Token = "0x40000F5")]
			FILE_EXECUTE = 0x20u,
			[Token(Token = "0x40000F6")]
			FILE_TRAVERSE = FILE_EXECUTE,
			[Token(Token = "0x40000F7")]
			FILE_DELETE_CHILD = 0x40u,
			[Token(Token = "0x40000F8")]
			FILE_READ_ATTRIBUTES = 0x80u,
			[Token(Token = "0x40000F9")]
			FILE_WRITE_ATTRIBUTES = 0x100u,
			[Token(Token = "0x40000FA")]
			FILE_ALL_ACCESS = 0xF01FFu,
			[Token(Token = "0x40000FB")]
			DELETE = 0x10000u,
			[Token(Token = "0x40000FC")]
			READ_CONTROL = 0x20000u,
			[Token(Token = "0x40000FD")]
			WRITE_DAC = 0x40000u,
			[Token(Token = "0x40000FE")]
			WRITE_OWNER = 0x80000u,
			[Token(Token = "0x40000FF")]
			SYNCHRONIZE = 0x100000u,
			[Token(Token = "0x4000100")]
			STANDARD_RIGHTS_READ = READ_CONTROL,
			[Token(Token = "0x4000101")]
			STANDARD_RIGHTS_WRITE = READ_CONTROL,
			[Token(Token = "0x4000102")]
			STANDARD_RIGHTS_EXECUTE = READ_CONTROL,
			[Token(Token = "0x4000103")]
			FILE_GENERIC_READ = 0x80000000u,
			[Token(Token = "0x4000104")]
			FILE_GENERIC_WRITE = 0x40000000u,
			[Token(Token = "0x4000105")]
			FILE_GENERIC_EXECUTE = 0x20000000u
		}

		[PreserveSig]
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x194C100", Offset = "0x194A700", VA = "0x18194C100")]
		private unsafe static extern int NtCreateFile(out IntPtr FileHandle, DesiredAccess DesiredAccess, ref OBJECT_ATTRIBUTES ObjectAttributes, out IO_STATUS_BLOCK IoStatusBlock, long* AllocationSize, FileAttributes FileAttributes, FileShare ShareAccess, CreateDisposition CreateDisposition, CreateOptions CreateOptions, void* EaBuffer, uint EaLength);

		[Token(Token = "0x6000035")]
		[Address(RVA = "0x194BE90", Offset = "0x194A490", VA = "0x18194BE90")]
		internal static (int, IntPtr) CreateFile(ReadOnlySpan<char> path, IntPtr rootDirectory, CreateDisposition createDisposition, DesiredAccess desiredAccess = DesiredAccess.SYNCHRONIZE | DesiredAccess.FILE_GENERIC_READ, FileShare shareAccess = FileShare.ReadWrite | FileShare.Delete, FileAttributes fileAttributes = (FileAttributes)0, CreateOptions createOptions = CreateOptions.FILE_SYNCHRONOUS_IO_NONALERT, ObjectAttributes objectAttributes = ObjectAttributes.OBJ_CASE_INSENSITIVE)
		{
			return default((int, IntPtr));
		}

		[PreserveSig]
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x194C1F0", Offset = "0x194A7F0", VA = "0x18194C1F0")]
		public unsafe static extern int NtQueryDirectoryFile(IntPtr FileHandle, IntPtr Event, IntPtr ApcRoutine, IntPtr ApcContext, out IO_STATUS_BLOCK IoStatusBlock, IntPtr FileInformation, uint Length, FILE_INFORMATION_CLASS FileInformationClass, BOOLEAN ReturnSingleEntry, UNICODE_STRING* FileName, BOOLEAN RestartScan);

		[PreserveSig]
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x194C2E0", Offset = "0x194A8E0", VA = "0x18194C2E0")]
		public static extern uint RtlNtStatusToDosError(int Status);
	}

	[Token(Token = "0x2000029")]
	internal class Advapi32
	{
		[PreserveSig]
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x1940260", Offset = "0x193E860", VA = "0x181940260")]
		internal static extern int RegCloseKey(IntPtr hKey);

		[PreserveSig]
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x19402E0", Offset = "0x193E8E0", VA = "0x1819402E0")]
		internal static extern int RegEnumKeyEx(SafeRegistryHandle hKey, int dwIndex, char[] lpName, ref int lpcbName, int[] lpReserved, [Out] StringBuilder lpClass, int[] lpcbClass, long[] lpftLastWriteTime);

		[PreserveSig]
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x1940480", Offset = "0x193EA80", VA = "0x181940480")]
		internal static extern int RegOpenKeyEx(SafeRegistryHandle hKey, string lpSubKey, int ulOptions, int samDesired, out SafeRegistryHandle hkResult);

		[PreserveSig]
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x19405E0", Offset = "0x193EBE0", VA = "0x1819405E0")]
		internal static extern int RegQueryInfoKey(SafeRegistryHandle hKey, [Out] StringBuilder lpClass, int[] lpcbClass, IntPtr lpReserved_MustBeZero, ref int lpcSubKeys, int[] lpcbMaxSubKeyLen, int[] lpcbMaxClassLen, ref int lpcValues, int[] lpcbMaxValueNameLen, int[] lpcbMaxValueLen, int[] lpcbSecurityDescriptor, int[] lpftLastWriteTime);

		[PreserveSig]
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x1940A00", Offset = "0x193F000", VA = "0x181940A00")]
		internal static extern int RegQueryValueEx(SafeRegistryHandle hKey, string lpValueName, int[] lpReserved, ref int lpType, [Out] byte[] lpData, ref int lpcbData);

		[PreserveSig]
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x19407E0", Offset = "0x193EDE0", VA = "0x1819407E0")]
		internal static extern int RegQueryValueEx(SafeRegistryHandle hKey, string lpValueName, int[] lpReserved, ref int lpType, ref int lpData, ref int lpcbData);

		[PreserveSig]
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x19408F0", Offset = "0x193EEF0", VA = "0x1819408F0")]
		internal static extern int RegQueryValueEx(SafeRegistryHandle hKey, string lpValueName, int[] lpReserved, ref int lpType, ref long lpData, ref int lpcbData);

		[PreserveSig]
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x1940BC0", Offset = "0x193F1C0", VA = "0x181940BC0")]
		internal static extern int RegQueryValueEx(SafeRegistryHandle hKey, string lpValueName, int[] lpReserved, ref int lpType, [Out] char[] lpData, ref int lpcbData);
	}

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x1945070", Offset = "0x1943670", VA = "0x181945070")]
	internal unsafe static void GetRandomBytes(byte* buffer, int length)
	{
	}
}
