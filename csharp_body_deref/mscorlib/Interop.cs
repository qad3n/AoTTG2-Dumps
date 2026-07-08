using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;

[Token(Token = "0x2000002")]
internal static class Interop
{
	[Token(Token = "0x2000003")]
	internal enum Error
	{
		[Token(Token = "0x4000002")]
		SUCCESS = 0,
		[Token(Token = "0x4000003")]
		E2BIG = 65537,
		[Token(Token = "0x4000004")]
		EACCES = 65538,
		[Token(Token = "0x4000005")]
		EADDRINUSE = 65539,
		[Token(Token = "0x4000006")]
		EADDRNOTAVAIL = 65540,
		[Token(Token = "0x4000007")]
		EAFNOSUPPORT = 65541,
		[Token(Token = "0x4000008")]
		EAGAIN = 65542,
		[Token(Token = "0x4000009")]
		EALREADY = 65543,
		[Token(Token = "0x400000A")]
		EBADF = 65544,
		[Token(Token = "0x400000B")]
		EBADMSG = 65545,
		[Token(Token = "0x400000C")]
		EBUSY = 65546,
		[Token(Token = "0x400000D")]
		ECANCELED = 65547,
		[Token(Token = "0x400000E")]
		ECHILD = 65548,
		[Token(Token = "0x400000F")]
		ECONNABORTED = 65549,
		[Token(Token = "0x4000010")]
		ECONNREFUSED = 65550,
		[Token(Token = "0x4000011")]
		ECONNRESET = 65551,
		[Token(Token = "0x4000012")]
		EDEADLK = 65552,
		[Token(Token = "0x4000013")]
		EDESTADDRREQ = 65553,
		[Token(Token = "0x4000014")]
		EDOM = 65554,
		[Token(Token = "0x4000015")]
		EDQUOT = 65555,
		[Token(Token = "0x4000016")]
		EEXIST = 65556,
		[Token(Token = "0x4000017")]
		EFAULT = 65557,
		[Token(Token = "0x4000018")]
		EFBIG = 65558,
		[Token(Token = "0x4000019")]
		EHOSTUNREACH = 65559,
		[Token(Token = "0x400001A")]
		EIDRM = 65560,
		[Token(Token = "0x400001B")]
		EILSEQ = 65561,
		[Token(Token = "0x400001C")]
		EINPROGRESS = 65562,
		[Token(Token = "0x400001D")]
		EINTR = 65563,
		[Token(Token = "0x400001E")]
		EINVAL = 65564,
		[Token(Token = "0x400001F")]
		EIO = 65565,
		[Token(Token = "0x4000020")]
		EISCONN = 65566,
		[Token(Token = "0x4000021")]
		EISDIR = 65567,
		[Token(Token = "0x4000022")]
		ELOOP = 65568,
		[Token(Token = "0x4000023")]
		EMFILE = 65569,
		[Token(Token = "0x4000024")]
		EMLINK = 65570,
		[Token(Token = "0x4000025")]
		EMSGSIZE = 65571,
		[Token(Token = "0x4000026")]
		EMULTIHOP = 65572,
		[Token(Token = "0x4000027")]
		ENAMETOOLONG = 65573,
		[Token(Token = "0x4000028")]
		ENETDOWN = 65574,
		[Token(Token = "0x4000029")]
		ENETRESET = 65575,
		[Token(Token = "0x400002A")]
		ENETUNREACH = 65576,
		[Token(Token = "0x400002B")]
		ENFILE = 65577,
		[Token(Token = "0x400002C")]
		ENOBUFS = 65578,
		[Token(Token = "0x400002D")]
		ENODEV = 65580,
		[Token(Token = "0x400002E")]
		ENOENT = 65581,
		[Token(Token = "0x400002F")]
		ENOEXEC = 65582,
		[Token(Token = "0x4000030")]
		ENOLCK = 65583,
		[Token(Token = "0x4000031")]
		ENOLINK = 65584,
		[Token(Token = "0x4000032")]
		ENOMEM = 65585,
		[Token(Token = "0x4000033")]
		ENOMSG = 65586,
		[Token(Token = "0x4000034")]
		ENOPROTOOPT = 65587,
		[Token(Token = "0x4000035")]
		ENOSPC = 65588,
		[Token(Token = "0x4000036")]
		ENOSYS = 65591,
		[Token(Token = "0x4000037")]
		ENOTCONN = 65592,
		[Token(Token = "0x4000038")]
		ENOTDIR = 65593,
		[Token(Token = "0x4000039")]
		ENOTEMPTY = 65594,
		[Token(Token = "0x400003A")]
		ENOTSOCK = 65596,
		[Token(Token = "0x400003B")]
		ENOTSUP = 65597,
		[Token(Token = "0x400003C")]
		ENOTTY = 65598,
		[Token(Token = "0x400003D")]
		ENXIO = 65599,
		[Token(Token = "0x400003E")]
		EOVERFLOW = 65600,
		[Token(Token = "0x400003F")]
		EPERM = 65602,
		[Token(Token = "0x4000040")]
		EPIPE = 65603,
		[Token(Token = "0x4000041")]
		EPROTO = 65604,
		[Token(Token = "0x4000042")]
		EPROTONOSUPPORT = 65605,
		[Token(Token = "0x4000043")]
		EPROTOTYPE = 65606,
		[Token(Token = "0x4000044")]
		ERANGE = 65607,
		[Token(Token = "0x4000045")]
		EROFS = 65608,
		[Token(Token = "0x4000046")]
		ESPIPE = 65609,
		[Token(Token = "0x4000047")]
		ESRCH = 65610,
		[Token(Token = "0x4000048")]
		ESTALE = 65611,
		[Token(Token = "0x4000049")]
		ETIMEDOUT = 65613,
		[Token(Token = "0x400004A")]
		ETXTBSY = 65614,
		[Token(Token = "0x400004B")]
		EXDEV = 65615,
		[Token(Token = "0x400004C")]
		ESOCKTNOSUPPORT = 65630,
		[Token(Token = "0x400004D")]
		EPFNOSUPPORT = 65632,
		[Token(Token = "0x400004E")]
		ESHUTDOWN = 65644,
		[Token(Token = "0x400004F")]
		EHOSTDOWN = 65648,
		[Token(Token = "0x4000050")]
		ENODATA = 65649,
		[Token(Token = "0x4000051")]
		EOPNOTSUPP = 65597,
		[Token(Token = "0x4000052")]
		EWOULDBLOCK = 65542
	}

	[Token(Token = "0x2000004")]
	internal struct ErrorInfo
	{
		[Token(Token = "0x4000053")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Error _error;

		[Token(Token = "0x4000054")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		private int _rawErrno;

		[Token(Token = "0x17000001")]
		internal Error Error
		{
			[Token(Token = "0x6000009")]
			[Address(RVA = "0x4DE6920", Offset = "0x4DE6920", VA = "0x4DE6920")]
			get
			{
				return default(Error);
			}
		}

		[Token(Token = "0x17000002")]
		internal int RawErrno
		{
			[Token(Token = "0x600000A")]
			[Address(RVA = "0x4DE6720", Offset = "0x4DE6720", VA = "0x4DE6720")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000007")]
		[Address(RVA = "0x4DE68B0", Offset = "0x4DE68B0", VA = "0x4DE68B0")]
		internal ErrorInfo(int errno)
		{
		}

		[Token(Token = "0x6000008")]
		[Address(RVA = "0x4DE6910", Offset = "0x4DE6910", VA = "0x4DE6910")]
		internal ErrorInfo(Error error)
		{
		}

		[Token(Token = "0x600000B")]
		[Address(RVA = "0x4DE6790", Offset = "0x4DE6790", VA = "0x4DE6790")]
		internal string GetErrorMessage()
		{
			return null;
		}

		[Token(Token = "0x600000C")]
		[Address(RVA = "0x4DE6A00", Offset = "0x4DE6A00", VA = "0x4DE6A00", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[Token(Token = "0x2000005")]
	internal static class Sys
	{
		[Token(Token = "0x2000006")]
		internal enum NodeType
		{
			[Token(Token = "0x4000057")]
			DT_UNKNOWN = 0,
			[Token(Token = "0x4000058")]
			DT_FIFO = 1,
			[Token(Token = "0x4000059")]
			DT_CHR = 2,
			[Token(Token = "0x400005A")]
			DT_DIR = 4,
			[Token(Token = "0x400005B")]
			DT_BLK = 6,
			[Token(Token = "0x400005C")]
			DT_REG = 8,
			[Token(Token = "0x400005D")]
			DT_LNK = 10,
			[Token(Token = "0x400005E")]
			DT_SOCK = 12,
			[Token(Token = "0x400005F")]
			DT_WHT = 14
		}

		[Token(Token = "0x2000007")]
		internal struct DirectoryEntry
		{
			[Token(Token = "0x4000060")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			internal unsafe byte* Name;

			[Token(Token = "0x4000061")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			internal int NameLength;

			[Token(Token = "0x4000062")]
			[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
			internal NodeType InodeType;

			[Token(Token = "0x6000029")]
			[Address(RVA = "0x4DE7430", Offset = "0x4DE7430", VA = "0x4DE7430")]
			internal ReadOnlySpan<char> GetName(Span<char> buffer)
			{
				return default(ReadOnlySpan<char>);
			}
		}

		[Token(Token = "0x2000008")]
		internal struct FileStatus
		{
			[Token(Token = "0x4000063")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			internal FileStatusFlags Flags;

			[Token(Token = "0x4000064")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
			internal int Mode;

			[Token(Token = "0x4000065")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			internal uint Uid;

			[Token(Token = "0x4000066")]
			[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
			internal uint Gid;

			[Token(Token = "0x4000067")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			internal long Size;

			[Token(Token = "0x4000068")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
			internal long ATime;

			[Token(Token = "0x4000069")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
			internal long ATimeNsec;

			[Token(Token = "0x400006A")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
			internal long MTime;

			[Token(Token = "0x400006B")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
			internal long MTimeNsec;

			[Token(Token = "0x400006C")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
			internal long CTime;

			[Token(Token = "0x400006D")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
			internal long CTimeNsec;

			[Token(Token = "0x400006E")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
			internal long BirthTime;

			[Token(Token = "0x400006F")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
			internal long BirthTimeNsec;

			[Token(Token = "0x4000070")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
			internal long Dev;

			[Token(Token = "0x4000071")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
			internal long Ino;

			[Token(Token = "0x4000072")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
			internal uint UserFlags;
		}

		[Token(Token = "0x2000009")]
		[Flags]
		internal enum FileStatusFlags
		{
			[Token(Token = "0x4000074")]
			None = 0,
			[Token(Token = "0x4000075")]
			HasBirthTime = 1
		}

		[Token(Token = "0x200000A")]
		[Flags]
		internal enum Permissions
		{
			[Token(Token = "0x4000077")]
			Mask = 0x1FF,
			[Token(Token = "0x4000078")]
			S_IRWXU = 0x1C0,
			[Token(Token = "0x4000079")]
			S_IRUSR = 0x100,
			[Token(Token = "0x400007A")]
			S_IWUSR = 0x80,
			[Token(Token = "0x400007B")]
			S_IXUSR = 0x40,
			[Token(Token = "0x400007C")]
			S_IRWXG = 0x38,
			[Token(Token = "0x400007D")]
			S_IRGRP = 0x20,
			[Token(Token = "0x400007E")]
			S_IWGRP = 0x10,
			[Token(Token = "0x400007F")]
			S_IXGRP = 8,
			[Token(Token = "0x4000080")]
			S_IRWXO = 7,
			[Token(Token = "0x4000081")]
			S_IROTH = 4,
			[Token(Token = "0x4000082")]
			S_IWOTH = 2,
			[Token(Token = "0x4000083")]
			S_IXOTH = 1
		}

		[Token(Token = "0x4000055")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal static readonly bool CanSetHiddenFlag;

		[Token(Token = "0x600000D")]
		[Address(RVA = "0x4DE6500", Offset = "0x4DE6500", VA = "0x4DE6500")]
		internal static ErrorInfo GetLastErrorInfo()
		{
			return default(ErrorInfo);
		}

		[Token(Token = "0x600000E")]
		[Address(RVA = "0x4DE6940", Offset = "0x4DE6940", VA = "0x4DE6940")]
		internal static string StrError(int platformErrno)
		{
			return null;
		}

		[PreserveSig]
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x4DE6900", Offset = "0x4DE6900", VA = "0x4DE6900")]
		internal static extern Error ConvertErrorPlatformToPal(int platformErrno);

		[PreserveSig]
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x4DE6930", Offset = "0x4DE6930", VA = "0x4DE6930")]
		internal static extern int ConvertErrorPalToPlatform(Error error);

		[PreserveSig]
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x4DE6B00", Offset = "0x4DE6B00", VA = "0x4DE6B00")]
		private unsafe static extern byte* StrErrorR(int platformErrno, byte* buffer, int bufferSize);

		[PreserveSig]
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x4DE68A0", Offset = "0x4DE68A0", VA = "0x4DE68A0")]
		internal unsafe static extern void GetNonCryptographicallySecureRandomBytes(byte* buffer, int length);

		[PreserveSig]
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x4DE6B10", Offset = "0x4DE6B10", VA = "0x4DE6B10")]
		internal static extern IntPtr OpenDir(string path);

		[PreserveSig]
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x4DE6B40", Offset = "0x4DE6B40", VA = "0x4DE6B40")]
		internal static extern int GetReadDirRBufferSize();

		[PreserveSig]
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x4DE6B50", Offset = "0x4DE6B50", VA = "0x4DE6B50")]
		internal unsafe static extern int ReadDirR(IntPtr dir, byte* buffer, int bufferSize, out DirectoryEntry outputEntry);

		[PreserveSig]
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x4DE6B60", Offset = "0x4DE6B60", VA = "0x4DE6B60")]
		internal static extern int CloseDir(IntPtr dir);

		[PreserveSig]
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x4DE6B80", Offset = "0x4DE6B80", VA = "0x4DE6B80")]
		private static extern int ReadLink(string path, byte[] buffer, int bufferSize);

		[Token(Token = "0x6000018")]
		[Address(RVA = "0x4DE6BD0", Offset = "0x4DE6BD0", VA = "0x4DE6BD0")]
		public static string ReadLink(string path)
		{
			return null;
		}

		[PreserveSig]
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x4DE6EE0", Offset = "0x4DE6EE0", VA = "0x4DE6EE0")]
		internal static extern int Stat(string path, out FileStatus output);

		[PreserveSig]
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x4DE6F10", Offset = "0x4DE6F10", VA = "0x4DE6F10")]
		internal static extern int LStat(string path, out FileStatus output);

		[PreserveSig]
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x4DE6F40", Offset = "0x4DE6F40", VA = "0x4DE6F40")]
		internal static extern int Symlink(string target, string linkPath);

		[PreserveSig]
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x4DE6F90", Offset = "0x4DE6F90", VA = "0x4DE6F90")]
		internal static extern int CopyFile(SafeFileHandle source, SafeFileHandle destination);

		[PreserveSig]
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x4DE7040", Offset = "0x4DE7040", VA = "0x4DE7040")]
		internal static extern uint GetEGid();

		[PreserveSig]
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x4DE7050", Offset = "0x4DE7050", VA = "0x4DE7050")]
		internal static extern uint GetEUid();

		[PreserveSig]
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x4DE7060", Offset = "0x4DE7060", VA = "0x4DE7060")]
		private static extern int LChflagsCanSetHiddenFlag();

		[PreserveSig]
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x4DE7070", Offset = "0x4DE7070", VA = "0x4DE7070")]
		internal static extern int MkDir(string path, int mode);

		[PreserveSig]
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x4DE70A0", Offset = "0x4DE70A0", VA = "0x4DE70A0")]
		internal static extern int RmDir(string path);

		[PreserveSig]
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x4DE70D0", Offset = "0x4DE70D0", VA = "0x4DE70D0")]
		internal static extern int Stat(ref byte path, out FileStatus output);

		[Token(Token = "0x6000023")]
		[Address(RVA = "0x4DE70F0", Offset = "0x4DE70F0", VA = "0x4DE70F0")]
		internal static int Stat(ReadOnlySpan<char> path, out FileStatus output)
		{
			return default(int);
		}

		[PreserveSig]
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x4DE7240", Offset = "0x4DE7240", VA = "0x4DE7240")]
		internal static extern int LStat(ref byte path, out FileStatus output);

		[Token(Token = "0x6000025")]
		[Address(RVA = "0x4DE7260", Offset = "0x4DE7260", VA = "0x4DE7260")]
		internal static int LStat(ReadOnlySpan<char> path, out FileStatus output)
		{
			return default(int);
		}

		[PreserveSig]
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x4DE73B0", Offset = "0x4DE73B0", VA = "0x4DE73B0")]
		internal static extern int Unlink(string pathname);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x4DE73E0", Offset = "0x4DE73E0", VA = "0x4DE73E0")]
		internal unsafe static extern int DoubleToString(double value, byte* format, byte* buffer, int bufferLength);
	}

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x4DE5D50", Offset = "0x4DE5D50", VA = "0x4DE5D50")]
	private static void ThrowExceptionForIoErrno(ErrorInfo errorInfo, string path, bool isDirectory, Func<ErrorInfo, ErrorInfo> errorRewriter)
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4DE6490", Offset = "0x4DE6490", VA = "0x4DE6490")]
	internal static long CheckIo(long result, [Optional] string path, [Optional][DefaultParameterValue(false)] bool isDirectory, [Optional] Func<ErrorInfo, ErrorInfo> errorRewriter)
	{
		return default(long);
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4DE6590", Offset = "0x4DE6590", VA = "0x4DE6590")]
	internal static int CheckIo(int result, [Optional] string path, [Optional][DefaultParameterValue(false)] bool isDirectory, [Optional] Func<ErrorInfo, ErrorInfo> errorRewriter)
	{
		return default(int);
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x4DE5DA0", Offset = "0x4DE5DA0", VA = "0x4DE5DA0")]
	internal static Exception GetExceptionForIoErrno(ErrorInfo errorInfo, [Optional] string path, bool isDirectory = false)
	{
		return null;
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4DE6660", Offset = "0x4DE6660", VA = "0x4DE6660")]
	internal static Exception GetIOException(ErrorInfo errorInfo)
	{
		return null;
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4DE6850", Offset = "0x4DE6850", VA = "0x4DE6850")]
	internal unsafe static void GetRandomBytes(byte* buffer, int length)
	{
	}
}
