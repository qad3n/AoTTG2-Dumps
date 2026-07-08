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
		[Address(RVA = "0x4F4C8F0", Offset = "0x4F4C8F0", VA = "0x4F4C8F0")]
		get;
	}

	[Token(Token = "0x17000629")]
	public static extern IntPtr ConsoleInput
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6002AAC")]
		[Address(RVA = "0x4F4C900", Offset = "0x4F4C900", VA = "0x4F4C900")]
		get;
	}

	[Token(Token = "0x1700062A")]
	public static extern IntPtr ConsoleError
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6002AAD")]
		[Address(RVA = "0x4F4C910", Offset = "0x4F4C910", VA = "0x4F4C910")]
		get;
	}

	[Token(Token = "0x1700062B")]
	public static extern char VolumeSeparatorChar
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6002AB0")]
		[Address(RVA = "0x4F4C940", Offset = "0x4F4C940", VA = "0x4F4C940")]
		get;
	}

	[Token(Token = "0x1700062C")]
	public static extern char DirectorySeparatorChar
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6002AB1")]
		[Address(RVA = "0x4F4C950", Offset = "0x4F4C950", VA = "0x4F4C950")]
		get;
	}

	[Token(Token = "0x1700062D")]
	public static extern char AltDirectorySeparatorChar
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6002AB2")]
		[Address(RVA = "0x4F4C960", Offset = "0x4F4C960", VA = "0x4F4C960")]
		get;
	}

	[Token(Token = "0x1700062E")]
	public static extern char PathSeparator
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6002AB3")]
		[Address(RVA = "0x4F4C970", Offset = "0x4F4C970", VA = "0x4F4C970")]
		get;
	}

	[Token(Token = "0x6002A97")]
	[Address(RVA = "0x4F4C620", Offset = "0x4F4C620", VA = "0x4F4C620")]
	public static Exception GetException(System.IO.MonoIOError error)
	{
		return null;
	}

	[Token(Token = "0x6002A98")]
	[Address(RVA = "0x4F489B0", Offset = "0x4F489B0", VA = "0x4F489B0")]
	public static Exception GetException(string path, System.IO.MonoIOError error)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002A99")]
	[Address(RVA = "0x4F4C730", Offset = "0x4F4C730", VA = "0x4F4C730")]
	public static extern string GetCurrentDirectory(out System.IO.MonoIOError error);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002A9A")]
	[Address(RVA = "0x4F4C740", Offset = "0x4F4C740", VA = "0x4F4C740")]
	private static extern System.IO.MonoFileType GetFileType(IntPtr handle, out System.IO.MonoIOError error);

	[Token(Token = "0x6002A9B")]
	[Address(RVA = "0x4F490C0", Offset = "0x4F490C0", VA = "0x4F490C0")]
	public static System.IO.MonoFileType GetFileType(SafeHandle safeHandle, out System.IO.MonoIOError error)
	{
		return default(System.IO.MonoFileType);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002A9C")]
	[Address(RVA = "0x4F4C750", Offset = "0x4F4C750", VA = "0x4F4C750")]
	private unsafe static extern IntPtr Open(char* filename, FileMode mode, FileAccess access, FileShare share, FileOptions options, out System.IO.MonoIOError error);

	[Token(Token = "0x6002A9D")]
	[Address(RVA = "0x4F48880", Offset = "0x4F48880", VA = "0x4F48880")]
	public static IntPtr Open(string filename, FileMode mode, FileAccess access, FileShare share, FileOptions options, out System.IO.MonoIOError error)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002A9E")]
	[Address(RVA = "0x4F4C760", Offset = "0x4F4C760", VA = "0x4F4C760")]
	private static extern bool Cancel_internal(IntPtr handle, out System.IO.MonoIOError error);

	[Token(Token = "0x6002A9F")]
	[Address(RVA = "0x4F4C770", Offset = "0x4F4C770", VA = "0x4F4C770")]
	internal static bool Cancel(SafeHandle safeHandle, out System.IO.MonoIOError error)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002AA0")]
	[Address(RVA = "0x4F4C2C0", Offset = "0x4F4C2C0", VA = "0x4F4C2C0")]
	public static extern bool Close(IntPtr handle, out System.IO.MonoIOError error);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002AA1")]
	[Address(RVA = "0x4F4C8A0", Offset = "0x4F4C8A0", VA = "0x4F4C8A0")]
	private static extern int Read(IntPtr handle, byte[] dest, int dest_offset, int count, out System.IO.MonoIOError error);

	[Token(Token = "0x6002AA2")]
	[Address(RVA = "0x4F4C370", Offset = "0x4F4C370", VA = "0x4F4C370")]
	public static int Read(SafeHandle safeHandle, byte[] dest, int dest_offset, int count, out System.IO.MonoIOError error)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002AA3")]
	[Address(RVA = "0x4F4C8B0", Offset = "0x4F4C8B0", VA = "0x4F4C8B0")]
	private static extern int Write(IntPtr handle, [In] byte[] src, int src_offset, int count, out System.IO.MonoIOError error);

	[Token(Token = "0x6002AA4")]
	[Address(RVA = "0x4F4AFF0", Offset = "0x4F4AFF0", VA = "0x4F4AFF0")]
	public static int Write(SafeHandle safeHandle, byte[] src, int src_offset, int count, out System.IO.MonoIOError error)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002AA5")]
	[Address(RVA = "0x4F4C8C0", Offset = "0x4F4C8C0", VA = "0x4F4C8C0")]
	private static extern long Seek(IntPtr handle, long offset, SeekOrigin origin, out System.IO.MonoIOError error);

	[Token(Token = "0x6002AA6")]
	[Address(RVA = "0x4F49560", Offset = "0x4F49560", VA = "0x4F49560")]
	public static long Seek(SafeHandle safeHandle, long offset, SeekOrigin origin, out System.IO.MonoIOError error)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002AA7")]
	[Address(RVA = "0x4F4C8D0", Offset = "0x4F4C8D0", VA = "0x4F4C8D0")]
	private static extern long GetLength(IntPtr handle, out System.IO.MonoIOError error);

	[Token(Token = "0x6002AA8")]
	[Address(RVA = "0x4F49850", Offset = "0x4F49850", VA = "0x4F49850")]
	public static long GetLength(SafeHandle safeHandle, out System.IO.MonoIOError error)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002AA9")]
	[Address(RVA = "0x4F4C8E0", Offset = "0x4F4C8E0", VA = "0x4F4C8E0")]
	private static extern bool SetLength(IntPtr handle, long length, out System.IO.MonoIOError error);

	[Token(Token = "0x6002AAA")]
	[Address(RVA = "0x4F4BCF0", Offset = "0x4F4BCF0", VA = "0x4F4BCF0")]
	public static bool SetLength(SafeHandle safeHandle, long length, out System.IO.MonoIOError error)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002AAE")]
	[Address(RVA = "0x4F4C920", Offset = "0x4F4C920", VA = "0x4F4C920")]
	public static extern bool CreatePipe(out IntPtr read_handle, out IntPtr write_handle, out System.IO.MonoIOError error);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002AAF")]
	[Address(RVA = "0x4F4C930", Offset = "0x4F4C930", VA = "0x4F4C930")]
	public static extern bool DuplicateHandle(IntPtr source_process_handle, IntPtr source_handle, IntPtr target_process_handle, out IntPtr target_handle, int access, int inherit, int options, out System.IO.MonoIOError error);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002AB4")]
	[Address(RVA = "0x4F4C720", Offset = "0x4F4C720", VA = "0x4F4C720")]
	private static extern void DumpHandles();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002AB5")]
	[Address(RVA = "0x4F4C980", Offset = "0x4F4C980", VA = "0x4F4C980")]
	public static extern bool RemapPath(string path, out string newPath);
}
