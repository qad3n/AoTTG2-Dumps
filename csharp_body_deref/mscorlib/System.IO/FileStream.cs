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
		[Address(RVA = "0x4F496A0", Offset = "0x4F496A0", VA = "0x4F496A0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700061E")]
	public override bool CanWrite
	{
		[Token(Token = "0x6002A65")]
		[Address(RVA = "0x4F496B0", Offset = "0x4F496B0", VA = "0x4F496B0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700061F")]
	public override bool CanSeek
	{
		[Token(Token = "0x6002A66")]
		[Address(RVA = "0x4F496C0", Offset = "0x4F496C0", VA = "0x4F496C0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000620")]
	public virtual string Name
	{
		[Token(Token = "0x6002A67")]
		[Address(RVA = "0x4F496D0", Offset = "0x4F496D0", VA = "0x4F496D0", Slot = "38")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000621")]
	public override long Length
	{
		[Token(Token = "0x6002A68")]
		[Address(RVA = "0x4F496E0", Offset = "0x4F496E0", VA = "0x4F496E0", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000622")]
	public override long Position
	{
		[Token(Token = "0x6002A69")]
		[Address(RVA = "0x4F49980", Offset = "0x4F49980", VA = "0x4F49980", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6002A6A")]
		[Address(RVA = "0x4F49AF0", Offset = "0x4F49AF0", VA = "0x4F49AF0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000623")]
	public virtual SafeFileHandle SafeFileHandle
	{
		[Token(Token = "0x6002A6B")]
		[Address(RVA = "0x4F49B80", Offset = "0x4F49B80", VA = "0x4F49B80", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002A58")]
	[Address(RVA = "0x4F46DA0", Offset = "0x4F46DA0", VA = "0x4F46DA0")]
	[Obsolete("Use FileStream(SafeFileHandle handle, FileAccess access, int bufferSize) instead")]
	public FileStream(IntPtr handle, FileAccess access, bool ownsHandle, int bufferSize)
	{
	}

	[Token(Token = "0x6002A59")]
	[Address(RVA = "0x4F46DC0", Offset = "0x4F46DC0", VA = "0x4F46DC0")]
	internal FileStream(IntPtr handle, FileAccess access, bool ownsHandle, int bufferSize, bool isAsync, bool isConsoleWrapper)
	{
	}

	[Token(Token = "0x6002A5A")]
	[Address(RVA = "0x4F47250", Offset = "0x4F47250", VA = "0x4F47250")]
	public FileStream(string path, FileMode mode, FileAccess access)
	{
	}

	[Token(Token = "0x6002A5B")]
	[Address(RVA = "0x4F472C0", Offset = "0x4F472C0", VA = "0x4F472C0")]
	public FileStream(string path, FileMode mode, FileAccess access, FileShare share)
	{
	}

	[Token(Token = "0x6002A5C")]
	[Address(RVA = "0x4F47BD0", Offset = "0x4F47BD0", VA = "0x4F47BD0")]
	public FileStream(string path, FileMode mode, FileAccess access, FileShare share, int bufferSize)
	{
	}

	[Token(Token = "0x6002A5D")]
	[Address(RVA = "0x4F47BF0", Offset = "0x4F47BF0", VA = "0x4F47BF0")]
	public FileStream(string path, FileMode mode, FileAccess access, FileShare share, int bufferSize, bool useAsync)
	{
	}

	[Token(Token = "0x6002A5E")]
	[Address(RVA = "0x4F47C10", Offset = "0x4F47C10", VA = "0x4F47C10")]
	public FileStream(string path, FileMode mode, FileAccess access, FileShare share, int bufferSize, FileOptions options)
	{
	}

	[Token(Token = "0x6002A5F")]
	[Address(RVA = "0x4F47C30", Offset = "0x4F47C30", VA = "0x4F47C30")]
	public FileStream(SafeFileHandle handle, FileAccess access)
	{
	}

	[Token(Token = "0x6002A60")]
	[Address(RVA = "0x4F47CD0", Offset = "0x4F47CD0", VA = "0x4F47CD0")]
	public FileStream(SafeFileHandle handle, FileAccess access, int bufferSize, bool isAsync)
	{
	}

	[Token(Token = "0x6002A61")]
	[Address(RVA = "0x4F47290", Offset = "0x4F47290", VA = "0x4F47290")]
	internal FileStream(string path, FileMode mode, FileAccess access, FileShare share, int bufferSize, bool isAsync, bool anonymous)
	{
	}

	[Token(Token = "0x6002A62")]
	[Address(RVA = "0x4F472E0", Offset = "0x4F472E0", VA = "0x4F472E0")]
	internal FileStream(string path, FileMode mode, FileAccess access, FileShare share, int bufferSize, bool anonymous, FileOptions options)
	{
	}

	[Token(Token = "0x6002A63")]
	[Address(RVA = "0x4F46F40", Offset = "0x4F46F40", VA = "0x4F46F40")]
	private void Init(SafeFileHandle safeHandle, FileAccess access, bool ownsHandle, int bufferSize, bool isAsync, bool isConsoleWrapper)
	{
	}

	[Token(Token = "0x6002A6C")]
	[Address(RVA = "0x4F494F0", Offset = "0x4F494F0", VA = "0x4F494F0")]
	private void ExposeHandle()
	{
	}

	[Token(Token = "0x6002A6D")]
	[Address(RVA = "0x4F49D90", Offset = "0x4F49D90", VA = "0x4F49D90", Slot = "34")]
	public override int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x6002A6E")]
	[Address(RVA = "0x4F4A020", Offset = "0x4F4A020", VA = "0x4F4A020", Slot = "37")]
	public override void WriteByte(byte value)
	{
	}

	[Token(Token = "0x6002A6F")]
	[Address(RVA = "0x4F4A160", Offset = "0x4F4A160", VA = "0x4F4A160", Slot = "32")]
	public override int Read([In][Out] byte[] array, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6002A70")]
	[Address(RVA = "0x4F4A3C0", Offset = "0x4F4A3C0", VA = "0x4F4A3C0")]
	private int ReadInternal(byte[] dest, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6002A71")]
	[Address(RVA = "0x4F4A5D0", Offset = "0x4F4A5D0", VA = "0x4F4A5D0", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] array, int offset, int numBytes, AsyncCallback userCallback, object stateObject)
	{
		return null;
	}

	[Token(Token = "0x6002A72")]
	[Address(RVA = "0x4F4AA40", Offset = "0x4F4AA40", VA = "0x4F4AA40", Slot = "23")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6002A73")]
	[Address(RVA = "0x4F4ABE0", Offset = "0x4F4ABE0", VA = "0x4F4ABE0", Slot = "35")]
	public override void Write(byte[] array, int offset, int count)
	{
	}

	[Token(Token = "0x6002A74")]
	[Address(RVA = "0x4F4AE10", Offset = "0x4F4AE10", VA = "0x4F4AE10")]
	private void WriteInternal(byte[] src, int offset, int count)
	{
	}

	[Token(Token = "0x6002A75")]
	[Address(RVA = "0x4F4B190", Offset = "0x4F4B190", VA = "0x4F4B190", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] array, int offset, int numBytes, AsyncCallback userCallback, object stateObject)
	{
		return null;
	}

	[Token(Token = "0x6002A76")]
	[Address(RVA = "0x4F4B730", Offset = "0x4F4B730", VA = "0x4F4B730", Slot = "27")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6002A77")]
	[Address(RVA = "0x4F4B880", Offset = "0x4F4B880", VA = "0x4F4B880", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6002A78")]
	[Address(RVA = "0x4F4BAE0", Offset = "0x4F4BAE0", VA = "0x4F4BAE0", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x6002A79")]
	[Address(RVA = "0x4F4BE20", Offset = "0x4F4BE20", VA = "0x4F4BE20", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6002A7A")]
	[Address(RVA = "0x4F4BE90", Offset = "0x4F4BE90", VA = "0x4F4BE90", Slot = "1")]
	~FileStream()
	{
	}

	[Token(Token = "0x6002A7B")]
	[Address(RVA = "0x4F4BF20", Offset = "0x4F4BF20", VA = "0x4F4BF20", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002A7C")]
	[Address(RVA = "0x4F4C2D0", Offset = "0x4F4C2D0", VA = "0x4F4C2D0", Slot = "21")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6002A7D")]
	[Address(RVA = "0x4F4C350", Offset = "0x4F4C350", VA = "0x4F4C350", Slot = "24")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6002A7E")]
	[Address(RVA = "0x4F4C360", Offset = "0x4F4C360", VA = "0x4F4C360", Slot = "28")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6002A7F")]
	[Address(RVA = "0x4F4A530", Offset = "0x4F4A530", VA = "0x4F4A530")]
	private int ReadSegment(byte[] dest, int dest_offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6002A80")]
	[Address(RVA = "0x4F4B130", Offset = "0x4F4B130", VA = "0x4F4B130")]
	private int WriteSegment(byte[] src, int src_offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6002A81")]
	[Address(RVA = "0x4F49C10", Offset = "0x4F49C10", VA = "0x4F49C10")]
	private void FlushBuffer()
	{
	}

	[Token(Token = "0x6002A82")]
	[Address(RVA = "0x4F49840", Offset = "0x4F49840", VA = "0x4F49840")]
	private void FlushBufferIfDirty()
	{
	}

	[Token(Token = "0x6002A83")]
	[Address(RVA = "0x4F49FF0", Offset = "0x4F49FF0", VA = "0x4F49FF0")]
	private void RefillBuffer()
	{
	}

	[Token(Token = "0x6002A84")]
	[Address(RVA = "0x4F49EF0", Offset = "0x4F49EF0", VA = "0x4F49EF0")]
	private int ReadData(SafeHandle safeHandle, byte[] buf, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6002A85")]
	[Address(RVA = "0x4F49200", Offset = "0x4F49200", VA = "0x4F49200")]
	private void InitBuffer(int size, bool isZeroSize)
	{
	}

	[Token(Token = "0x6002A86")]
	[Address(RVA = "0x4F48910", Offset = "0x4F48910", VA = "0x4F48910")]
	private string GetSecureFileName(string filename)
	{
		return null;
	}

	[Token(Token = "0x6002A87")]
	[Address(RVA = "0x4F48750", Offset = "0x4F48750", VA = "0x4F48750")]
	private string GetSecureFileName(string filename, bool full)
	{
		return null;
	}
}
