// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.FileStream
// Update status: CHANGED in this game update
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

[Token(Token = "0x200069D")]
[ComVisible(true)]
public class FileStream : Stream
{
	[Token(Token = "0x200069E")]
	private delegate int ReadDelegate(byte[] buffer, int offset, int count);

	[Token(Token = "0x200069F")]
	private delegate void WriteDelegate(byte[] buffer, int offset, int count);

	[Token(Token = "0x4001AB3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static byte[] buf_recycle;

	[Token(Token = "0x4001AB4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly object buf_recycle_lock;

	[Token(Token = "0x4001AB5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private byte[] buf;

	[Token(Token = "0x4001AB6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string name;

	[Token(Token = "0x4001AB7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private SafeFileHandle safeHandle;

	[Token(Token = "0x4001AB8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private bool isExposed;

	[Token(Token = "0x4001AB9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private long append_startpos;

	[Token(Token = "0x4001ABA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private FileAccess access;

	[Token(Token = "0x4001ABB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	private bool owner;

	[Token(Token = "0x4001ABC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x55")]
	private bool async;

	[Token(Token = "0x4001ABD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x56")]
	private bool canseek;

	[Token(Token = "0x4001ABE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x57")]
	private bool anonymous;

	[Token(Token = "0x4001ABF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private bool buf_dirty;

	[Token(Token = "0x4001AC0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	private int buf_size;

	[Token(Token = "0x4001AC1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private int buf_length;

	[Token(Token = "0x4001AC2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	private int buf_offset;

	[Token(Token = "0x4001AC3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private long buf_start;

	[Token(Token = "0x17000833")]
	public override bool CanRead
	{
		[Token(Token = "0x6003329")]
		[Address(RVA = "0x1AECCC0", Offset = "0x1AEB2C0", VA = "0x181AECCC0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000834")]
	public override bool CanWrite
	{
		[Token(Token = "0x600332A")]
		[Address(RVA = "0x1AECCF0", Offset = "0x1AEB2F0", VA = "0x181AECCF0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000835")]
	public override bool CanSeek
	{
		[Token(Token = "0x600332B")]
		[Address(RVA = "0x1AECCE0", Offset = "0x1AEB2E0", VA = "0x181AECCE0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000836")]
	public virtual string Name
	{
		[Token(Token = "0x600332C")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0", Slot = "38")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000837")]
	public override long Length
	{
		[Token(Token = "0x600332D")]
		[Address(RVA = "0x1AECD10", Offset = "0x1AEB310", VA = "0x181AECD10", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000838")]
	public override long Position
	{
		[Token(Token = "0x600332E")]
		[Address(RVA = "0x1AECEB0", Offset = "0x1AEB4B0", VA = "0x181AECEB0", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600332F")]
		[Address(RVA = "0x1AED0B0", Offset = "0x1AEB6B0", VA = "0x181AED0B0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000839")]
	public virtual SafeFileHandle SafeFileHandle
	{
		[Token(Token = "0x6003330")]
		[Address(RVA = "0x1AED070", Offset = "0x1AEB670", VA = "0x181AED070", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600331F")]
	[Address(RVA = "0x1AECB30", Offset = "0x1AEB130", VA = "0x181AECB30")]
	[Obsolete("Use FileStream(SafeFileHandle handle, FileAccess access, int bufferSize) instead")]
	public FileStream(IntPtr handle, FileAccess access, bool ownsHandle, int bufferSize)
	{
	}

	[Token(Token = "0x6003320")]
	[Address(RVA = "0x1AEBF10", Offset = "0x1AEA510", VA = "0x181AEBF10")]
	internal FileStream(IntPtr handle, FileAccess access, bool ownsHandle, int bufferSize, bool isAsync, bool isConsoleWrapper)
	{
	}

	[Token(Token = "0x6003321")]
	[Address(RVA = "0x1AEC0A0", Offset = "0x1AEA6A0", VA = "0x181AEC0A0")]
	public FileStream(string path, FileMode mode, FileAccess access)
	{
	}

	[Token(Token = "0x6003322")]
	[Address(RVA = "0x1AECA70", Offset = "0x1AEB070", VA = "0x181AECA70")]
	public FileStream(string path, FileMode mode, FileAccess access, FileShare share)
	{
	}

	[Token(Token = "0x6003323")]
	[Address(RVA = "0x1AEBED0", Offset = "0x1AEA4D0", VA = "0x181AEBED0")]
	public FileStream(string path, FileMode mode, FileAccess access, FileShare share, int bufferSize)
	{
	}

	[Token(Token = "0x6003324")]
	[Address(RVA = "0x1AECAA0", Offset = "0x1AEB0A0", VA = "0x181AECAA0")]
	public FileStream(string path, FileMode mode, FileAccess access, FileShare share, int bufferSize, bool useAsync)
	{
	}

	[Token(Token = "0x6003325")]
	[Address(RVA = "0x1AECAF0", Offset = "0x1AEB0F0", VA = "0x181AECAF0")]
	public FileStream(string path, FileMode mode, FileAccess access, FileShare share, int bufferSize, FileOptions options)
	{
	}

	[Token(Token = "0x6003326")]
	[Address(RVA = "0x1AECA20", Offset = "0x1AEB020", VA = "0x181AECA20")]
	internal FileStream(string path, FileMode mode, FileAccess access, FileShare share, int bufferSize, bool isAsync, bool anonymous)
	{
	}

	[Token(Token = "0x6003327")]
	[Address(RVA = "0x1AEC0E0", Offset = "0x1AEA6E0", VA = "0x181AEC0E0")]
	internal FileStream(string path, FileMode mode, FileAccess access, FileShare share, int bufferSize, bool anonymous, FileOptions options)
	{
	}

	[Token(Token = "0x6003328")]
	[Address(RVA = "0x1AEA3D0", Offset = "0x1AE89D0", VA = "0x181AEA3D0")]
	private void Init(SafeFileHandle safeHandle, FileAccess access, bool ownsHandle, int bufferSize, bool isAsync, bool isConsoleWrapper)
	{
	}

	[Token(Token = "0x6003331")]
	[Address(RVA = "0x1AE9A80", Offset = "0x1AE8080", VA = "0x181AE9A80")]
	private void ExposeHandle()
	{
	}

	[Token(Token = "0x6003332")]
	[Address(RVA = "0x1AEA800", Offset = "0x1AE8E00", VA = "0x181AEA800", Slot = "34")]
	public override int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x6003333")]
	[Address(RVA = "0x1AEB770", Offset = "0x1AE9D70", VA = "0x181AEB770", Slot = "37")]
	public override void WriteByte(byte value)
	{
	}

	[Token(Token = "0x6003334")]
	[Address(RVA = "0x1AEACA0", Offset = "0x1AE92A0", VA = "0x181AEACA0", Slot = "32")]
	public override int Read([In][Out] byte[] array, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6003335")]
	[Address(RVA = "0x1AEAAA0", Offset = "0x1AE90A0", VA = "0x181AEAAA0")]
	private int ReadInternal(byte[] dest, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6003336")]
	[Address(RVA = "0x1AE8A70", Offset = "0x1AE7070", VA = "0x181AE8A70", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] array, int offset, int numBytes, AsyncCallback userCallback, object stateObject)
	{
		return null;
	}

	[Token(Token = "0x6003337")]
	[Address(RVA = "0x1AE96A0", Offset = "0x1AE7CA0", VA = "0x181AE96A0", Slot = "23")]
	public override int EndRead(IAsyncResult asyncResult)
	{
		return default(int);
	}

	[Token(Token = "0x6003338")]
	[Address(RVA = "0x1AEBB90", Offset = "0x1AEA190", VA = "0x181AEBB90", Slot = "35")]
	public override void Write(byte[] array, int offset, int count)
	{
	}

	[Token(Token = "0x6003339")]
	[Address(RVA = "0x1AEB8E0", Offset = "0x1AE9EE0", VA = "0x181AEB8E0")]
	private void WriteInternal(byte[] src, int offset, int count)
	{
	}

	[Token(Token = "0x600333A")]
	[Address(RVA = "0x1AE8E70", Offset = "0x1AE7470", VA = "0x181AE8E70", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] array, int offset, int numBytes, AsyncCallback userCallback, object stateObject)
	{
		return null;
	}

	[Token(Token = "0x600333B")]
	[Address(RVA = "0x1AE98A0", Offset = "0x1AE7EA0", VA = "0x181AE98A0", Slot = "27")]
	public override void EndWrite(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x600333C")]
	[Address(RVA = "0x1AEB110", Offset = "0x1AE9710", VA = "0x181AEB110", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x600333D")]
	[Address(RVA = "0x1AEB410", Offset = "0x1AE9A10", VA = "0x181AEB410", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x600333E")]
	[Address(RVA = "0x1AE9F00", Offset = "0x1AE8500", VA = "0x181AE9F00", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600333F")]
	[Address(RVA = "0x1AD9EE0", Offset = "0x1AD84E0", VA = "0x181AD9EE0", Slot = "1")]
	~FileStream()
	{
	}

	[Token(Token = "0x6003340")]
	[Address(RVA = "0x1AE9380", Offset = "0x1AE7980", VA = "0x181AE9380", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6003341")]
	[Address(RVA = "0x1AE9AB0", Offset = "0x1AE80B0", VA = "0x181AE9AB0", Slot = "21")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6003342")]
	[Address(RVA = "0x1AEA720", Offset = "0x1AE8D20", VA = "0x181AEA720", Slot = "24")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6003343")]
	[Address(RVA = "0x1AEB6A0", Offset = "0x1AE9CA0", VA = "0x181AEB6A0", Slot = "28")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6003344")]
	[Address(RVA = "0x1AEAC00", Offset = "0x1AE9200", VA = "0x181AEAC00")]
	private int ReadSegment(byte[] dest, int dest_offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6003345")]
	[Address(RVA = "0x1AEBB20", Offset = "0x1AEA120", VA = "0x181AEBB20")]
	private int WriteSegment(byte[] src, int src_offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6003346")]
	[Address(RVA = "0x1AE9D10", Offset = "0x1AE8310", VA = "0x181AE9D10")]
	private void FlushBuffer()
	{
	}

	[Token(Token = "0x6003347")]
	[Address(RVA = "0x1AE9D00", Offset = "0x1AE8300", VA = "0x181AE9D00")]
	private void FlushBufferIfDirty()
	{
	}

	[Token(Token = "0x6003348")]
	[Address(RVA = "0x1AEB0D0", Offset = "0x1AE96D0", VA = "0x181AEB0D0")]
	private void RefillBuffer()
	{
	}

	[Token(Token = "0x6003349")]
	[Address(RVA = "0x1AEA970", Offset = "0x1AE8F70", VA = "0x181AEA970")]
	private int ReadData(SafeHandle safeHandle, byte[] buf, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600334A")]
	[Address(RVA = "0x1AEA120", Offset = "0x1AE8720", VA = "0x181AEA120")]
	private void InitBuffer(int size, bool isZeroSize)
	{
	}

	[Token(Token = "0x600334B")]
	[Address(RVA = "0x1AEA060", Offset = "0x1AE8660", VA = "0x181AEA060")]
	private string GetSecureFileName(string filename)
	{
		return null;
	}

	[Token(Token = "0x600334C")]
	[Address(RVA = "0x1AE9F80", Offset = "0x1AE8580", VA = "0x181AE9F80")]
	private string GetSecureFileName(string filename, bool full)
	{
		return null;
	}
}
