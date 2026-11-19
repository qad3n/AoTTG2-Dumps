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

[Token(Token = "0x2000677")]
[ComVisible(true)]
public class FileStream : Stream
{
	[Token(Token = "0x2000678")]
	private delegate int ReadDelegate(byte[] buffer, int offset, int count);

	[Token(Token = "0x2000679")]
	private delegate void WriteDelegate(byte[] buffer, int offset, int count);

	[Token(Token = "0x4001A19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static byte[] buf_recycle;

	[Token(Token = "0x4001A1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly object buf_recycle_lock;

	[Token(Token = "0x4001A1B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] buf;

	[Token(Token = "0x4001A1C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string name;

	[Token(Token = "0x4001A1D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private SafeFileHandle safeHandle;

	[Token(Token = "0x4001A1E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private bool isExposed;

	[Token(Token = "0x4001A1F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private long append_startpos;

	[Token(Token = "0x4001A20")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private FileAccess access;

	[Token(Token = "0x4001A21")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	private bool owner;

	[Token(Token = "0x4001A22")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x55")]
	private bool async;

	[Token(Token = "0x4001A23")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x56")]
	private bool canseek;

	[Token(Token = "0x4001A24")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x57")]
	private bool anonymous;

	[Token(Token = "0x4001A25")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private bool buf_dirty;

	[Token(Token = "0x4001A26")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	private int buf_size;

	[Token(Token = "0x4001A27")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private int buf_length;

	[Token(Token = "0x4001A28")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	private int buf_offset;

	[Token(Token = "0x4001A29")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private long buf_start;

	[Token(Token = "0x17000833")]
	public override bool CanRead
	{
		[Token(Token = "0x60032F7")]
		[Address(RVA = "0x5487B70", Offset = "0x5486B70", VA = "0x5487B70", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000834")]
	public override bool CanWrite
	{
		[Token(Token = "0x60032F8")]
		[Address(RVA = "0x5487B80", Offset = "0x5486B80", VA = "0x5487B80", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000835")]
	public override bool CanSeek
	{
		[Token(Token = "0x60032F9")]
		[Address(RVA = "0x5487B90", Offset = "0x5486B90", VA = "0x5487B90", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000836")]
	public virtual string Name
	{
		[Token(Token = "0x60032FA")]
		[Address(RVA = "0x5487BA0", Offset = "0x5486BA0", VA = "0x5487BA0", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000837")]
	public override long Length
	{
		[Token(Token = "0x60032FB")]
		[Address(RVA = "0x5487BB0", Offset = "0x5486BB0", VA = "0x5487BB0", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000838")]
	public override long Position
	{
		[Token(Token = "0x60032FC")]
		[Address(RVA = "0x5487E50", Offset = "0x5486E50", VA = "0x5487E50", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60032FD")]
		[Address(RVA = "0x5487FC0", Offset = "0x5486FC0", VA = "0x5487FC0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000839")]
	public virtual SafeFileHandle SafeFileHandle
	{
		[Token(Token = "0x60032FE")]
		[Address(RVA = "0x5488050", Offset = "0x5487050", VA = "0x5488050", Slot = "40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60032ED")]
	[Address(RVA = "0x5485520", Offset = "0x5484520", VA = "0x5485520")]
	[Obsolete("Use FileStream(SafeFileHandle handle, FileAccess access, int bufferSize) instead")]
	public FileStream(IntPtr handle, FileAccess access, bool ownsHandle, int bufferSize)
	{
	}

	[Token(Token = "0x60032EE")]
	[Address(RVA = "0x5485540", Offset = "0x5484540", VA = "0x5485540")]
	internal FileStream(IntPtr handle, FileAccess access, bool ownsHandle, int bufferSize, bool isAsync, bool isConsoleWrapper)
	{
	}

	[Token(Token = "0x60032EF")]
	[Address(RVA = "0x54859D0", Offset = "0x54849D0", VA = "0x54859D0")]
	public FileStream(string path, FileMode mode, FileAccess access)
	{
	}

	[Token(Token = "0x60032F0")]
	[Address(RVA = "0x5479210", Offset = "0x5478210", VA = "0x5479210")]
	public FileStream(string path, FileMode mode, FileAccess access, FileShare share)
	{
	}

	[Token(Token = "0x60032F1")]
	[Address(RVA = "0x5478DD0", Offset = "0x5477DD0", VA = "0x5478DD0")]
	public FileStream(string path, FileMode mode, FileAccess access, FileShare share, int bufferSize)
	{
	}

	[Token(Token = "0x60032F2")]
	[Address(RVA = "0x54862C0", Offset = "0x54852C0", VA = "0x54862C0")]
	public FileStream(string path, FileMode mode, FileAccess access, FileShare share, int bufferSize, bool useAsync)
	{
	}

	[Token(Token = "0x60032F3")]
	[Address(RVA = "0x54862E0", Offset = "0x54852E0", VA = "0x54862E0")]
	public FileStream(string path, FileMode mode, FileAccess access, FileShare share, int bufferSize, FileOptions options)
	{
	}

	[Token(Token = "0x60032F4")]
	[Address(RVA = "0x5485A00", Offset = "0x5484A00", VA = "0x5485A00")]
	internal FileStream(string path, FileMode mode, FileAccess access, FileShare share, int bufferSize, bool isAsync, bool anonymous)
	{
	}

	[Token(Token = "0x60032F5")]
	[Address(RVA = "0x5485A30", Offset = "0x5484A30", VA = "0x5485A30")]
	internal FileStream(string path, FileMode mode, FileAccess access, FileShare share, int bufferSize, bool anonymous, FileOptions options)
	{
	}

	[Token(Token = "0x60032F6")]
	[Address(RVA = "0x54856C0", Offset = "0x54846C0", VA = "0x54856C0")]
	private void Init(SafeFileHandle safeHandle, FileAccess access, bool ownsHandle, int bufferSize, bool isAsync, bool isConsoleWrapper)
	{
	}

	[Token(Token = "0x60032FF")]
	[Address(RVA = "0x54879C0", Offset = "0x54869C0", VA = "0x54879C0")]
	private void ExposeHandle()
	{
	}

	[Token(Token = "0x6003300")]
	[Address(RVA = "0x5488240", Offset = "0x5487240", VA = "0x5488240", Slot = "35")]
	public override int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x6003301")]
	[Address(RVA = "0x54884D0", Offset = "0x54874D0", VA = "0x54884D0", Slot = "38")]
	public override void WriteByte(byte value)
	{
	}

	[Token(Token = "0x6003302")]
	[Address(RVA = "0x5488610", Offset = "0x5487610", VA = "0x5488610", Slot = "33")]
	public override int Read([In][Out] byte[] array, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6003303")]
	[Address(RVA = "0x5488870", Offset = "0x5487870", VA = "0x5488870")]
	private int ReadInternal(byte[] dest, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6003304")]
	[Address(RVA = "0x5488A80", Offset = "0x5487A80", VA = "0x5488A80", Slot = "23")]
	public override IAsyncResult BeginRead(byte[] array, int offset, int numBytes, AsyncCallback userCallback, object stateObject)
	{
		return null;
	}

	[Token(Token = "0x6003305")]
	[Address(RVA = "0x5488EE0", Offset = "0x5487EE0", VA = "0x5488EE0", Slot = "24")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6003306")]
	[Address(RVA = "0x5489070", Offset = "0x5488070", VA = "0x5489070", Slot = "36")]
	public override void Write(byte[] array, int offset, int count)
	{
	}

	[Token(Token = "0x6003307")]
	[Address(RVA = "0x54892A0", Offset = "0x54882A0", VA = "0x54892A0")]
	private void WriteInternal(byte[] src, int offset, int count)
	{
	}

	[Token(Token = "0x6003308")]
	[Address(RVA = "0x5489620", Offset = "0x5488620", VA = "0x5489620", Slot = "27")]
	public override IAsyncResult BeginWrite(byte[] array, int offset, int numBytes, AsyncCallback userCallback, object stateObject)
	{
		return null;
	}

	[Token(Token = "0x6003309")]
	[Address(RVA = "0x5489BC0", Offset = "0x5488BC0", VA = "0x5489BC0", Slot = "28")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x600330A")]
	[Address(RVA = "0x5489D10", Offset = "0x5488D10", VA = "0x5489D10", Slot = "31")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x600330B")]
	[Address(RVA = "0x5489F70", Offset = "0x5488F70", VA = "0x5489F70", Slot = "32")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x600330C")]
	[Address(RVA = "0x548A2B0", Offset = "0x54892B0", VA = "0x548A2B0", Slot = "21")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600330D")]
	[Address(RVA = "0x548A320", Offset = "0x5489320", VA = "0x548A320", Slot = "1")]
	~FileStream()
	{
	}

	[Token(Token = "0x600330E")]
	[Address(RVA = "0x548A3C0", Offset = "0x54893C0", VA = "0x548A3C0", Slot = "20")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600330F")]
	[Address(RVA = "0x548A760", Offset = "0x5489760", VA = "0x548A760", Slot = "22")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6003310")]
	[Address(RVA = "0x548A7E0", Offset = "0x54897E0", VA = "0x548A7E0", Slot = "25")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6003311")]
	[Address(RVA = "0x548A7F0", Offset = "0x54897F0", VA = "0x548A7F0", Slot = "29")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6003312")]
	[Address(RVA = "0x54889E0", Offset = "0x54879E0", VA = "0x54889E0")]
	private int ReadSegment(byte[] dest, int dest_offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6003313")]
	[Address(RVA = "0x54895C0", Offset = "0x54885C0", VA = "0x54895C0")]
	private int WriteSegment(byte[] src, int src_offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6003314")]
	[Address(RVA = "0x54880E0", Offset = "0x54870E0", VA = "0x54880E0")]
	private void FlushBuffer()
	{
	}

	[Token(Token = "0x6003315")]
	[Address(RVA = "0x5487D10", Offset = "0x5486D10", VA = "0x5487D10")]
	private void FlushBufferIfDirty()
	{
	}

	[Token(Token = "0x6003316")]
	[Address(RVA = "0x54884A0", Offset = "0x54874A0", VA = "0x54884A0")]
	private void RefillBuffer()
	{
	}

	[Token(Token = "0x6003317")]
	[Address(RVA = "0x54883A0", Offset = "0x54873A0", VA = "0x54883A0")]
	private int ReadData(SafeHandle safeHandle, byte[] buf, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6003318")]
	[Address(RVA = "0x54876E0", Offset = "0x54866E0", VA = "0x54876E0")]
	private void InitBuffer(int size, bool isZeroSize)
	{
	}

	[Token(Token = "0x6003319")]
	[Address(RVA = "0x5486DF0", Offset = "0x5485DF0", VA = "0x5486DF0")]
	private string GetSecureFileName(string filename)
	{
		return null;
	}

	[Token(Token = "0x600331A")]
	[Address(RVA = "0x5486C70", Offset = "0x5485C70", VA = "0x5486C70")]
	private string GetSecureFileName(string filename, bool full)
	{
		return null;
	}
}
