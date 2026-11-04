// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.MonoIO
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x20006A2")]
internal static class MonoIO
{
	[Token(Token = "0x4001AD3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly IntPtr InvalidHandle;

	[Token(Token = "0x4001AD4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static bool dump_handles;

	[Token(Token = "0x1700083E")]
	public static extern IntPtr ConsoleOutput
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6003371")]
		[Address(RVA = "0x1AF0D80", Offset = "0x1AEF380", VA = "0x181AF0D80")]
		get;
	}

	[Token(Token = "0x1700083F")]
	public static extern IntPtr ConsoleInput
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6003372")]
		[Address(RVA = "0x1AF0D70", Offset = "0x1AEF370", VA = "0x181AF0D70")]
		get;
	}

	[Token(Token = "0x17000840")]
	public static extern IntPtr ConsoleError
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6003373")]
		[Address(RVA = "0x1AF0D60", Offset = "0x1AEF360", VA = "0x181AF0D60")]
		get;
	}

	[Token(Token = "0x17000841")]
	public static extern char VolumeSeparatorChar
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6003376")]
		[Address(RVA = "0x1AF0DB0", Offset = "0x1AEF3B0", VA = "0x181AF0DB0")]
		get;
	}

	[Token(Token = "0x17000842")]
	public static extern char DirectorySeparatorChar
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6003377")]
		[Address(RVA = "0x1AF0D90", Offset = "0x1AEF390", VA = "0x181AF0D90")]
		get;
	}

	[Token(Token = "0x17000843")]
	public static extern char AltDirectorySeparatorChar
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6003378")]
		[Address(RVA = "0x1AF0D50", Offset = "0x1AEF350", VA = "0x181AF0D50")]
		get;
	}

	[Token(Token = "0x17000844")]
	public static extern char PathSeparator
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6003379")]
		[Address(RVA = "0x1AF0DA0", Offset = "0x1AEF3A0", VA = "0x181AF0DA0")]
		get;
	}

	[Token(Token = "0x600335C")]
	[Address(RVA = "0x1AF03D0", Offset = "0x1AEE9D0", VA = "0x181AF03D0")]
	public static Exception GetException(System.IO.MonoIOError error)
	{
		return null;
	}

	[Token(Token = "0x600335D")]
	[Address(RVA = "0x1AEFCE0", Offset = "0x1AEE2E0", VA = "0x181AEFCE0")]
	public static Exception GetException(string path, System.IO.MonoIOError error)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600335E")]
	[Address(RVA = "0x1AEFCD0", Offset = "0x1AEE2D0", VA = "0x181AEFCD0")]
	public static extern string GetCurrentDirectory(out System.IO.MonoIOError error);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600335F")]
	[Address(RVA = "0x1AF05E0", Offset = "0x1AEEBE0", VA = "0x181AF05E0")]
	private static extern System.IO.MonoFileType GetFileType(IntPtr handle, out System.IO.MonoIOError error);

	[Token(Token = "0x6003360")]
	[Address(RVA = "0x1AF04D0", Offset = "0x1AEEAD0", VA = "0x181AF04D0")]
	public static System.IO.MonoFileType GetFileType(SafeHandle safeHandle, out System.IO.MonoIOError error)
	{
		return default(System.IO.MonoFileType);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6003361")]
	[Address(RVA = "0x1AEFCC0", Offset = "0x1AEE2C0", VA = "0x181AEFCC0")]
	public static extern bool FindCloseFile(IntPtr hnd);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6003362")]
	[Address(RVA = "0x1AF0710", Offset = "0x1AEED10", VA = "0x181AF0710")]
	private unsafe static extern IntPtr Open(char* filename, FileMode mode, FileAccess access, FileShare share, FileOptions options, out System.IO.MonoIOError error);

	[Token(Token = "0x6003363")]
	[Address(RVA = "0x1AF0720", Offset = "0x1AEED20", VA = "0x181AF0720")]
	public static IntPtr Open(string filename, FileMode mode, FileAccess access, FileShare share, FileOptions options, out System.IO.MonoIOError error)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6003364")]
	[Address(RVA = "0x1AEFB60", Offset = "0x1AEE160", VA = "0x181AEFB60")]
	private static extern bool Cancel_internal(IntPtr handle, out System.IO.MonoIOError error);

	[Token(Token = "0x6003365")]
	[Address(RVA = "0x1AEFB70", Offset = "0x1AEE170", VA = "0x181AEFB70")]
	internal static bool Cancel(SafeHandle safeHandle, out System.IO.MonoIOError error)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6003366")]
	[Address(RVA = "0x1AEFC90", Offset = "0x1AEE290", VA = "0x181AEFC90")]
	public static extern bool Close(IntPtr handle, out System.IO.MonoIOError error);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6003367")]
	[Address(RVA = "0x1AF08E0", Offset = "0x1AEEEE0", VA = "0x181AF08E0")]
	private static extern int Read(IntPtr handle, byte[] dest, int dest_offset, int count, out System.IO.MonoIOError error);

	[Token(Token = "0x6003368")]
	[Address(RVA = "0x1AF07A0", Offset = "0x1AEEDA0", VA = "0x181AF07A0")]
	public static int Read(SafeHandle safeHandle, byte[] dest, int dest_offset, int count, out System.IO.MonoIOError error)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6003369")]
	[Address(RVA = "0x1AF0CC0", Offset = "0x1AEF2C0", VA = "0x181AF0CC0")]
	private static extern int Write(IntPtr handle, [In] byte[] src, int src_offset, int count, out System.IO.MonoIOError error);

	[Token(Token = "0x600336A")]
	[Address(RVA = "0x1AF0B80", Offset = "0x1AEF180", VA = "0x181AF0B80")]
	public static int Write(SafeHandle safeHandle, byte[] src, int src_offset, int count, out System.IO.MonoIOError error)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600336B")]
	[Address(RVA = "0x1AF0A30", Offset = "0x1AEF030", VA = "0x181AF0A30")]
	private static extern long Seek(IntPtr handle, long offset, SeekOrigin origin, out System.IO.MonoIOError error);

	[Token(Token = "0x600336C")]
	[Address(RVA = "0x1AF0900", Offset = "0x1AEEF00", VA = "0x181AF0900")]
	public static long Seek(SafeHandle safeHandle, long offset, SeekOrigin origin, out System.IO.MonoIOError error)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600336D")]
	[Address(RVA = "0x1AF05F0", Offset = "0x1AEEBF0", VA = "0x181AF05F0")]
	private static extern long GetLength(IntPtr handle, out System.IO.MonoIOError error);

	[Token(Token = "0x600336E")]
	[Address(RVA = "0x1AF0600", Offset = "0x1AEEC00", VA = "0x181AF0600")]
	public static long GetLength(SafeHandle safeHandle, out System.IO.MonoIOError error)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600336F")]
	[Address(RVA = "0x1AF0A40", Offset = "0x1AEF040", VA = "0x181AF0A40")]
	private static extern bool SetLength(IntPtr handle, long length, out System.IO.MonoIOError error);

	[Token(Token = "0x6003370")]
	[Address(RVA = "0x1AF0A50", Offset = "0x1AEF050", VA = "0x181AF0A50")]
	public static bool SetLength(SafeHandle safeHandle, long length, out System.IO.MonoIOError error)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6003374")]
	[Address(RVA = "0x1AEFCA0", Offset = "0x1AEE2A0", VA = "0x181AEFCA0")]
	public static extern bool CreatePipe(out IntPtr read_handle, out IntPtr write_handle, out System.IO.MonoIOError error);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6003375")]
	[Address(RVA = "0x1AEFCB0", Offset = "0x1AEE2B0", VA = "0x181AEFCB0")]
	public static extern bool DuplicateHandle(IntPtr source_process_handle, IntPtr source_handle, IntPtr target_process_handle, out IntPtr target_handle, int access, int inherit, int options, out System.IO.MonoIOError error);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600337A")]
	[Address(RVA = "0x1A6DB30", Offset = "0x1A6C130", VA = "0x181A6DB30")]
	private static extern void DumpHandles();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600337B")]
	[Address(RVA = "0x1AF08F0", Offset = "0x1AEEEF0", VA = "0x181AF08F0")]
	public static extern bool RemapPath(string path, out string newPath);
}
