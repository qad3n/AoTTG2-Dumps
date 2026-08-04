// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.FileStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;

namespace System.IO;

[Token(Token = "0x2000575")]
[ComVisible(true)]
public class FileStream : Stream
{
	[Token(Token = "0x2000576")]
	private delegate int ReadDelegate(byte[] buffer, int offset, int count);

	[Token(Token = "0x2000577")]
	private delegate void WriteDelegate(byte[] buffer, int offset, int count);

	[Token(Token = "0x40016D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static byte[] buf_recycle;

	[Token(Token = "0x40016D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly object buf_recycle_lock;

	[Token(Token = "0x40016DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] buf;

	[Token(Token = "0x40016DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string name;

	[Token(Token = "0x40016DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private SafeFileHandle safeHandle;

	[Token(Token = "0x40016DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private bool isExposed;

	[Token(Token = "0x40016DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private long append_startpos;

	[Token(Token = "0x40016DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private FileAccess access;

	[Token(Token = "0x40016E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	private bool owner;

	[Token(Token = "0x40016E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x55")]
	private bool async;

	[Token(Token = "0x40016E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x56")]
	private bool canseek;

	[Token(Token = "0x40016E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x57")]
	private bool anonymous;

	[Token(Token = "0x40016E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private bool buf_dirty;

	[Token(Token = "0x40016E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	private int buf_size;

	[Token(Token = "0x40016E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private int buf_length;

	[Token(Token = "0x40016E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	private int buf_offset;

	[Token(Token = "0x40016E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private long buf_start;

	[Token(Token = "0x1700061D")]
	public override bool CanRead
	{
		[Token(Token = "0x6002A64")]
		[Address(RVA = "0x3C2F1C0", Offset = "0x3C2F1C0", VA = "0x3C2F1C0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700061E")]
	public override bool CanWrite
	{
		[Token(Token = "0x6002A65")]
		[Address(RVA = "0x3C2F1D0", Offset = "0x3C2F1D0", VA = "0x3C2F1D0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700061F")]
	public override bool CanSeek
	{
		[Token(Token = "0x6002A66")]
		[Address(RVA = "0x3C2F1E0", Offset = "0x3C2F1E0", VA = "0x3C2F1E0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000620")]
	public virtual string Name
	{
		[Token(Token = "0x6002A67")]
		[Address(RVA = "0x3C2F1F0", Offset = "0x3C2F1F0", VA = "0x3C2F1F0", Slot = "38")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000621")]
	public override long Length
	{
		[Token(Token = "0x6002A68")]
		[Address(RVA = "0x3C2F200", Offset = "0x3C2F200", VA = "0x3C2F200", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000622")]
	public override long Position
	{
		[Token(Token = "0x6002A69")]
		[Address(RVA = "0x3C2F4A0", Offset = "0x3C2F4A0", VA = "0x3C2F4A0", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6002A6A")]
		[Address(RVA = "0x3C2F610", Offset = "0x3C2F610", VA = "0x3C2F610", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000623")]
	public virtual SafeFileHandle SafeFileHandle
	{
		[Token(Token = "0x6002A6B")]
		[Address(RVA = "0x3C2F6A0", Offset = "0x3C2F6A0", VA = "0x3C2F6A0", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002A58")]
	[Address(RVA = "0x3C2C8C0", Offset = "0x3C2C8C0", VA = "0x3C2C8C0")]
	[Obsolete("Use FileStream(SafeFileHandle handle, FileAccess access, int bufferSize) instead")]
	public FileStream(IntPtr handle, FileAccess access, bool ownsHandle, int bufferSize)
	{
	}

	[Token(Token = "0x6002A59")]
	[Address(RVA = "0x3C2C8E0", Offset = "0x3C2C8E0", VA = "0x3C2C8E0")]
	internal FileStream(IntPtr handle, FileAccess access, bool ownsHandle, int bufferSize, bool isAsync, bool isConsoleWrapper)
	{
	}

	[Token(Token = "0x6002A5A")]
	[Address(RVA = "0x3C2CD70", Offset = "0x3C2CD70", VA = "0x3C2CD70")]
	public FileStream(string path, FileMode mode, FileAccess access)
	{
	}

	[Token(Token = "0x6002A5B")]
	[Address(RVA = "0x3C2CDE0", Offset = "0x3C2CDE0", VA = "0x3C2CDE0")]
	public FileStream(string path, FileMode mode, FileAccess access, FileShare share)
	{
	}

	[Token(Token = "0x6002A5C")]
	[Address(RVA = "0x3C2D6F0", Offset = "0x3C2D6F0", VA = "0x3C2D6F0")]
	public FileStream(string path, FileMode mode, FileAccess access, FileShare share, int bufferSize)
	{
	}

	[Token(Token = "0x6002A5D")]
	[Address(RVA = "0x3C2D710", Offset = "0x3C2D710", VA = "0x3C2D710")]
	public FileStream(string path, FileMode mode, FileAccess access, FileShare share, int bufferSize, bool useAsync)
	{
	}

	[Token(Token = "0x6002A5E")]
	[Address(RVA = "0x3C2D730", Offset = "0x3C2D730", VA = "0x3C2D730")]
	public FileStream(string path, FileMode mode, FileAccess access, FileShare share, int bufferSize, FileOptions options)
	{
	}

	[Token(Token = "0x6002A5F")]
	[Address(RVA = "0x3C2D750", Offset = "0x3C2D750", VA = "0x3C2D750")]
	public FileStream(SafeFileHandle handle, FileAccess access)
	{
	}

	[Token(Token = "0x6002A60")]
	[Address(RVA = "0x3C2D7F0", Offset = "0x3C2D7F0", VA = "0x3C2D7F0")]
	public FileStream(SafeFileHandle handle, FileAccess access, int bufferSize, bool isAsync)
	{
	}

	[Token(Token = "0x6002A61")]
	[Address(RVA = "0x3C2CDB0", Offset = "0x3C2CDB0", VA = "0x3C2CDB0")]
	internal FileStream(string path, FileMode mode, FileAccess access, FileShare share, int bufferSize, bool isAsync, bool anonymous)
	{
	}

	[Token(Token = "0x6002A62")]
	[Address(RVA = "0x3C2CE00", Offset = "0x3C2CE00", VA = "0x3C2CE00")]
	internal FileStream(string path, FileMode mode, FileAccess access, FileShare share, int bufferSize, bool anonymous, FileOptions options)
	{
	}

	[Token(Token = "0x6002A63")]
	[Address(RVA = "0x3C2CA60", Offset = "0x3C2CA60", VA = "0x3C2CA60")]
	private void Init(SafeFileHandle safeHandle, FileAccess access, bool ownsHandle, int bufferSize, bool isAsync, bool isConsoleWrapper)
	{
	}

	[Token(Token = "0x6002A6C")]
	[Address(RVA = "0x3C2F010", Offset = "0x3C2F010", VA = "0x3C2F010")]
	private void ExposeHandle()
	{
	}

	[Token(Token = "0x6002A6D")]
	[Address(RVA = "0x3C2F8B0", Offset = "0x3C2F8B0", VA = "0x3C2F8B0", Slot = "34")]
	public override int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x6002A6E")]
	[Address(RVA = "0x3C2FB40", Offset = "0x3C2FB40", VA = "0x3C2FB40", Slot = "37")]
	public override void WriteByte(byte value)
	{
	}

	[Token(Token = "0x6002A6F")]
	[Address(RVA = "0x3C2FC80", Offset = "0x3C2FC80", VA = "0x3C2FC80", Slot = "32")]
	public override int Read([In][Out] byte[] array, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6002A70")]
	[Address(RVA = "0x3C2FEE0", Offset = "0x3C2FEE0", VA = "0x3C2FEE0")]
	private int ReadInternal(byte[] dest, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6002A71")]
	[Address(RVA = "0x3C300F0", Offset = "0x3C300F0", VA = "0x3C300F0", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] array, int offset, int numBytes, AsyncCallback userCallback, object stateObject)
	{
		return null;
	}

	[Token(Token = "0x6002A72")]
	[Address(RVA = "0x3C30560", Offset = "0x3C30560", VA = "0x3C30560", Slot = "23")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6002A73")]
	[Address(RVA = "0x3C30700", Offset = "0x3C30700", VA = "0x3C30700", Slot = "35")]
	public override void Write(byte[] array, int offset, int count)
	{
	}

	[Token(Token = "0x6002A74")]
	[Address(RVA = "0x3C30930", Offset = "0x3C30930", VA = "0x3C30930")]
	private void WriteInternal(byte[] src, int offset, int count)
	{
	}

	[Token(Token = "0x6002A75")]
	[Address(RVA = "0x3C30CB0", Offset = "0x3C30CB0", VA = "0x3C30CB0", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] array, int offset, int numBytes, AsyncCallback userCallback, object stateObject)
	{
		return null;
	}

	[Token(Token = "0x6002A76")]
	[Address(RVA = "0x3C31250", Offset = "0x3C31250", VA = "0x3C31250", Slot = "27")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6002A77")]
	[Address(RVA = "0x3C313A0", Offset = "0x3C313A0", VA = "0x3C313A0", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6002A78")]
	[Address(RVA = "0x3C31600", Offset = "0x3C31600", VA = "0x3C31600", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x6002A79")]
	[Address(RVA = "0x3C31940", Offset = "0x3C31940", VA = "0x3C31940", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6002A7A")]
	[Address(RVA = "0x3C319B0", Offset = "0x3C319B0", VA = "0x3C319B0", Slot = "1")]
	~FileStream()
	{
	}

	[Token(Token = "0x6002A7B")]
	[Address(RVA = "0x3C31A40", Offset = "0x3C31A40", VA = "0x3C31A40", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002A7C")]
	[Address(RVA = "0x3C31DF0", Offset = "0x3C31DF0", VA = "0x3C31DF0", Slot = "21")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6002A7D")]
	[Address(RVA = "0x3C31E70", Offset = "0x3C31E70", VA = "0x3C31E70", Slot = "24")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6002A7E")]
	[Address(RVA = "0x3C31E80", Offset = "0x3C31E80", VA = "0x3C31E80", Slot = "28")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6002A7F")]
	[Address(RVA = "0x3C30050", Offset = "0x3C30050", VA = "0x3C30050")]
	private int ReadSegment(byte[] dest, int dest_offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6002A80")]
	[Address(RVA = "0x3C30C50", Offset = "0x3C30C50", VA = "0x3C30C50")]
	private int WriteSegment(byte[] src, int src_offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6002A81")]
	[Address(RVA = "0x3C2F730", Offset = "0x3C2F730", VA = "0x3C2F730")]
	private void FlushBuffer()
	{
	}

	[Token(Token = "0x6002A82")]
	[Address(RVA = "0x3C2F360", Offset = "0x3C2F360", VA = "0x3C2F360")]
	private void FlushBufferIfDirty()
	{
	}

	[Token(Token = "0x6002A83")]
	[Address(RVA = "0x3C2FB10", Offset = "0x3C2FB10", VA = "0x3C2FB10")]
	private void RefillBuffer()
	{
	}

	[Token(Token = "0x6002A84")]
	[Address(RVA = "0x3C2FA10", Offset = "0x3C2FA10", VA = "0x3C2FA10")]
	private int ReadData(SafeHandle safeHandle, byte[] buf, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6002A85")]
	[Address(RVA = "0x3C2ED20", Offset = "0x3C2ED20", VA = "0x3C2ED20")]
	private void InitBuffer(int size, bool isZeroSize)
	{
	}

	[Token(Token = "0x6002A86")]
	[Address(RVA = "0x3C2E430", Offset = "0x3C2E430", VA = "0x3C2E430")]
	private string GetSecureFileName(string filename)
	{
		return null;
	}

	[Token(Token = "0x6002A87")]
	[Address(RVA = "0x3C2E270", Offset = "0x3C2E270", VA = "0x3C2E270")]
	private string GetSecureFileName(string filename, bool full)
	{
		return null;
	}
}
