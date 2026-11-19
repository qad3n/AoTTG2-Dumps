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

[Token(Token = "0x200067C")]
internal static class MonoIO
{
	[Token(Token = "0x4001A39")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly IntPtr InvalidHandle;

	[Token(Token = "0x4001A3A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static bool dump_handles;

	[Token(Token = "0x1700083E")]
	public static extern IntPtr ConsoleOutput
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600333E")]
		[Address(RVA = "0x548AC60", Offset = "0x5489C60", VA = "0x548AC60")]
		get;
	}

	[Token(Token = "0x1700083F")]
	public static extern IntPtr ConsoleInput
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600333F")]
		[Address(RVA = "0x548AC70", Offset = "0x5489C70", VA = "0x548AC70")]
		get;
	}

	[Token(Token = "0x17000840")]
	public static extern IntPtr ConsoleError
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6003340")]
		[Address(RVA = "0x548AC80", Offset = "0x5489C80", VA = "0x548AC80")]
		get;
	}

	[Token(Token = "0x17000841")]
	public static extern char VolumeSeparatorChar
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6003343")]
		[Address(RVA = "0x548ACB0", Offset = "0x5489CB0", VA = "0x548ACB0")]
		get;
	}

	[Token(Token = "0x17000842")]
	public static extern char DirectorySeparatorChar
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6003344")]
		[Address(RVA = "0x548ACC0", Offset = "0x5489CC0", VA = "0x548ACC0")]
		get;
	}

	[Token(Token = "0x17000843")]
	public static extern char AltDirectorySeparatorChar
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6003345")]
		[Address(RVA = "0x548ACD0", Offset = "0x5489CD0", VA = "0x548ACD0")]
		get;
	}

	[Token(Token = "0x17000844")]
	public static extern char PathSeparator
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6003346")]
		[Address(RVA = "0x548ACE0", Offset = "0x5489CE0", VA = "0x548ACE0")]
		get;
	}

	[Token(Token = "0x600332A")]
	[Address(RVA = "0x54779F0", Offset = "0x54769F0", VA = "0x54779F0")]
	public static Exception GetException(System.IO.MonoIOError error)
	{
		return null;
	}

	[Token(Token = "0x600332B")]
	[Address(RVA = "0x5486EB0", Offset = "0x5485EB0", VA = "0x5486EB0")]
	public static Exception GetException(string path, System.IO.MonoIOError error)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600332C")]
	[Address(RVA = "0x54779E0", Offset = "0x54769E0", VA = "0x54779E0")]
	public static extern string GetCurrentDirectory(out System.IO.MonoIOError error);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600332D")]
	[Address(RVA = "0x548AAC0", Offset = "0x5489AC0", VA = "0x548AAC0")]
	private static extern System.IO.MonoFileType GetFileType(IntPtr handle, out System.IO.MonoIOError error);

	[Token(Token = "0x600332E")]
	[Address(RVA = "0x54875C0", Offset = "0x54865C0", VA = "0x54875C0")]
	public static System.IO.MonoFileType GetFileType(SafeHandle safeHandle, out System.IO.MonoIOError error)
	{
		return default(System.IO.MonoFileType);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600332F")]
	[Address(RVA = "0x548AAD0", Offset = "0x5489AD0", VA = "0x548AAD0")]
	private unsafe static extern IntPtr Open(char* filename, FileMode mode, FileAccess access, FileShare share, FileOptions options, out System.IO.MonoIOError error);

	[Token(Token = "0x6003330")]
	[Address(RVA = "0x5486D50", Offset = "0x5485D50", VA = "0x5486D50")]
	public static IntPtr Open(string filename, FileMode mode, FileAccess access, FileShare share, FileOptions options, out System.IO.MonoIOError error)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6003331")]
	[Address(RVA = "0x548AAE0", Offset = "0x5489AE0", VA = "0x548AAE0")]
	private static extern bool Cancel_internal(IntPtr handle, out System.IO.MonoIOError error);

	[Token(Token = "0x6003332")]
	[Address(RVA = "0x548AAF0", Offset = "0x5489AF0", VA = "0x548AAF0")]
	internal static bool Cancel(SafeHandle safeHandle, out System.IO.MonoIOError error)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6003333")]
	[Address(RVA = "0x548A750", Offset = "0x5489750", VA = "0x548A750")]
	public static extern bool Close(IntPtr handle, out System.IO.MonoIOError error);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6003334")]
	[Address(RVA = "0x548AC10", Offset = "0x5489C10", VA = "0x548AC10")]
	private static extern int Read(IntPtr handle, byte[] dest, int dest_offset, int count, out System.IO.MonoIOError error);

	[Token(Token = "0x6003335")]
	[Address(RVA = "0x548A800", Offset = "0x5489800", VA = "0x548A800")]
	public static int Read(SafeHandle safeHandle, byte[] dest, int dest_offset, int count, out System.IO.MonoIOError error)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6003336")]
	[Address(RVA = "0x548AC20", Offset = "0x5489C20", VA = "0x548AC20")]
	private static extern int Write(IntPtr handle, [In] byte[] src, int src_offset, int count, out System.IO.MonoIOError error);

	[Token(Token = "0x6003337")]
	[Address(RVA = "0x5489480", Offset = "0x5488480", VA = "0x5489480")]
	public static int Write(SafeHandle safeHandle, byte[] src, int src_offset, int count, out System.IO.MonoIOError error)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6003338")]
	[Address(RVA = "0x548AC30", Offset = "0x5489C30", VA = "0x548AC30")]
	private static extern long Seek(IntPtr handle, long offset, SeekOrigin origin, out System.IO.MonoIOError error);

	[Token(Token = "0x6003339")]
	[Address(RVA = "0x5487A30", Offset = "0x5486A30", VA = "0x5487A30")]
	public static long Seek(SafeHandle safeHandle, long offset, SeekOrigin origin, out System.IO.MonoIOError error)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600333A")]
	[Address(RVA = "0x548AC40", Offset = "0x5489C40", VA = "0x548AC40")]
	private static extern long GetLength(IntPtr handle, out System.IO.MonoIOError error);

	[Token(Token = "0x600333B")]
	[Address(RVA = "0x5487D20", Offset = "0x5486D20", VA = "0x5487D20")]
	public static long GetLength(SafeHandle safeHandle, out System.IO.MonoIOError error)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600333C")]
	[Address(RVA = "0x548AC50", Offset = "0x5489C50", VA = "0x548AC50")]
	private static extern bool SetLength(IntPtr handle, long length, out System.IO.MonoIOError error);

	[Token(Token = "0x600333D")]
	[Address(RVA = "0x548A180", Offset = "0x5489180", VA = "0x548A180")]
	public static bool SetLength(SafeHandle safeHandle, long length, out System.IO.MonoIOError error)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6003341")]
	[Address(RVA = "0x548AC90", Offset = "0x5489C90", VA = "0x548AC90")]
	public static extern bool CreatePipe(out IntPtr read_handle, out IntPtr write_handle, out System.IO.MonoIOError error);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6003342")]
	[Address(RVA = "0x548ACA0", Offset = "0x5489CA0", VA = "0x548ACA0")]
	public static extern bool DuplicateHandle(IntPtr source_process_handle, IntPtr source_handle, IntPtr target_process_handle, out IntPtr target_handle, int access, int inherit, int options, out System.IO.MonoIOError error);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6003347")]
	[Address(RVA = "0x548AAB0", Offset = "0x5489AB0", VA = "0x548AAB0")]
	private static extern void DumpHandles();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6003348")]
	[Address(RVA = "0x548ACF0", Offset = "0x5489CF0", VA = "0x548ACF0")]
	public static extern bool RemapPath(string path, out string newPath);
}
