// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.MonoIO
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200057A")]
internal static class MonoIO
{
	[Token(Token = "0x40016F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly IntPtr InvalidHandle;

	[Token(Token = "0x40016F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static bool dump_handles;

	[Token(Token = "0x17000628")]
	public static extern IntPtr ConsoleOutput
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6002AAB")]
		[Address(RVA = "0x3C32410", Offset = "0x3C32410", VA = "0x3C32410")]
		get;
	}

	[Token(Token = "0x17000629")]
	public static extern IntPtr ConsoleInput
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6002AAC")]
		[Address(RVA = "0x3C32420", Offset = "0x3C32420", VA = "0x3C32420")]
		get;
	}

	[Token(Token = "0x1700062A")]
	public static extern IntPtr ConsoleError
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6002AAD")]
		[Address(RVA = "0x3C32430", Offset = "0x3C32430", VA = "0x3C32430")]
		get;
	}

	[Token(Token = "0x1700062B")]
	public static extern char VolumeSeparatorChar
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6002AB0")]
		[Address(RVA = "0x3C32460", Offset = "0x3C32460", VA = "0x3C32460")]
		get;
	}

	[Token(Token = "0x1700062C")]
	public static extern char DirectorySeparatorChar
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6002AB1")]
		[Address(RVA = "0x3C32470", Offset = "0x3C32470", VA = "0x3C32470")]
		get;
	}

	[Token(Token = "0x1700062D")]
	public static extern char AltDirectorySeparatorChar
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6002AB2")]
		[Address(RVA = "0x3C32480", Offset = "0x3C32480", VA = "0x3C32480")]
		get;
	}

	[Token(Token = "0x1700062E")]
	public static extern char PathSeparator
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6002AB3")]
		[Address(RVA = "0x3C32490", Offset = "0x3C32490", VA = "0x3C32490")]
		get;
	}

	[Token(Token = "0x6002A97")]
	[Address(RVA = "0x3C32140", Offset = "0x3C32140", VA = "0x3C32140")]
	public static Exception GetException(System.IO.MonoIOError error)
	{
		return null;
	}

	[Token(Token = "0x6002A98")]
	[Address(RVA = "0x3C2E4D0", Offset = "0x3C2E4D0", VA = "0x3C2E4D0")]
	public static Exception GetException(string path, System.IO.MonoIOError error)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002A99")]
	[Address(RVA = "0x3C32250", Offset = "0x3C32250", VA = "0x3C32250")]
	public static extern string GetCurrentDirectory(out System.IO.MonoIOError error);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002A9A")]
	[Address(RVA = "0x3C32260", Offset = "0x3C32260", VA = "0x3C32260")]
	private static extern System.IO.MonoFileType GetFileType(IntPtr handle, out System.IO.MonoIOError error);

	[Token(Token = "0x6002A9B")]
	[Address(RVA = "0x3C2EBE0", Offset = "0x3C2EBE0", VA = "0x3C2EBE0")]
	public static System.IO.MonoFileType GetFileType(SafeHandle safeHandle, out System.IO.MonoIOError error)
	{
		return default(System.IO.MonoFileType);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002A9C")]
	[Address(RVA = "0x3C32270", Offset = "0x3C32270", VA = "0x3C32270")]
	private unsafe static extern IntPtr Open(char* filename, FileMode mode, FileAccess access, FileShare share, FileOptions options, out System.IO.MonoIOError error);

	[Token(Token = "0x6002A9D")]
	[Address(RVA = "0x3C2E3A0", Offset = "0x3C2E3A0", VA = "0x3C2E3A0")]
	public static IntPtr Open(string filename, FileMode mode, FileAccess access, FileShare share, FileOptions options, out System.IO.MonoIOError error)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002A9E")]
	[Address(RVA = "0x3C32280", Offset = "0x3C32280", VA = "0x3C32280")]
	private static extern bool Cancel_internal(IntPtr handle, out System.IO.MonoIOError error);

	[Token(Token = "0x6002A9F")]
	[Address(RVA = "0x3C32290", Offset = "0x3C32290", VA = "0x3C32290")]
	internal static bool Cancel(SafeHandle safeHandle, out System.IO.MonoIOError error)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002AA0")]
	[Address(RVA = "0x3C31DE0", Offset = "0x3C31DE0", VA = "0x3C31DE0")]
	public static extern bool Close(IntPtr handle, out System.IO.MonoIOError error);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002AA1")]
	[Address(RVA = "0x3C323C0", Offset = "0x3C323C0", VA = "0x3C323C0")]
	private static extern int Read(IntPtr handle, byte[] dest, int dest_offset, int count, out System.IO.MonoIOError error);

	[Token(Token = "0x6002AA2")]
	[Address(RVA = "0x3C31E90", Offset = "0x3C31E90", VA = "0x3C31E90")]
	public static int Read(SafeHandle safeHandle, byte[] dest, int dest_offset, int count, out System.IO.MonoIOError error)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002AA3")]
	[Address(RVA = "0x3C323D0", Offset = "0x3C323D0", VA = "0x3C323D0")]
	private static extern int Write(IntPtr handle, [In] byte[] src, int src_offset, int count, out System.IO.MonoIOError error);

	[Token(Token = "0x6002AA4")]
	[Address(RVA = "0x3C30B10", Offset = "0x3C30B10", VA = "0x3C30B10")]
	public static int Write(SafeHandle safeHandle, byte[] src, int src_offset, int count, out System.IO.MonoIOError error)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002AA5")]
	[Address(RVA = "0x3C323E0", Offset = "0x3C323E0", VA = "0x3C323E0")]
	private static extern long Seek(IntPtr handle, long offset, SeekOrigin origin, out System.IO.MonoIOError error);

	[Token(Token = "0x6002AA6")]
	[Address(RVA = "0x3C2F080", Offset = "0x3C2F080", VA = "0x3C2F080")]
	public static long Seek(SafeHandle safeHandle, long offset, SeekOrigin origin, out System.IO.MonoIOError error)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002AA7")]
	[Address(RVA = "0x3C323F0", Offset = "0x3C323F0", VA = "0x3C323F0")]
	private static extern long GetLength(IntPtr handle, out System.IO.MonoIOError error);

	[Token(Token = "0x6002AA8")]
	[Address(RVA = "0x3C2F370", Offset = "0x3C2F370", VA = "0x3C2F370")]
	public static long GetLength(SafeHandle safeHandle, out System.IO.MonoIOError error)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002AA9")]
	[Address(RVA = "0x3C32400", Offset = "0x3C32400", VA = "0x3C32400")]
	private static extern bool SetLength(IntPtr handle, long length, out System.IO.MonoIOError error);

	[Token(Token = "0x6002AAA")]
	[Address(RVA = "0x3C31810", Offset = "0x3C31810", VA = "0x3C31810")]
	public static bool SetLength(SafeHandle safeHandle, long length, out System.IO.MonoIOError error)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002AAE")]
	[Address(RVA = "0x3C32440", Offset = "0x3C32440", VA = "0x3C32440")]
	public static extern bool CreatePipe(out IntPtr read_handle, out IntPtr write_handle, out System.IO.MonoIOError error);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002AAF")]
	[Address(RVA = "0x3C32450", Offset = "0x3C32450", VA = "0x3C32450")]
	public static extern bool DuplicateHandle(IntPtr source_process_handle, IntPtr source_handle, IntPtr target_process_handle, out IntPtr target_handle, int access, int inherit, int options, out System.IO.MonoIOError error);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002AB4")]
	[Address(RVA = "0x3C32240", Offset = "0x3C32240", VA = "0x3C32240")]
	private static extern void DumpHandles();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002AB5")]
	[Address(RVA = "0x3C324A0", Offset = "0x3C324A0", VA = "0x3C324A0")]
	public static extern bool RemapPath(string path, out string newPath);
}
