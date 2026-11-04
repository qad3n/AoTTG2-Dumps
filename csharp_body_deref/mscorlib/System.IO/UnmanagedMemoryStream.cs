// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.UnmanagedMemoryStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000681")]
public class UnmanagedMemoryStream : Stream
{
	[Token(Token = "0x4001A37")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private SafeBuffer _buffer;

	[Token(Token = "0x4001A38")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private unsafe byte* _mem;

	[Token(Token = "0x4001A39")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private long _length;

	[Token(Token = "0x4001A3A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private long _capacity;

	[Token(Token = "0x4001A3B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private long _position;

	[Token(Token = "0x4001A3C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private long _offset;

	[Token(Token = "0x4001A3D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private FileAccess _access;

	[Token(Token = "0x4001A3E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	internal bool _isOpen;

	[Token(Token = "0x4001A3F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private Task<int> _lastReadTask;

	[Token(Token = "0x17000801")]
	public override bool CanRead
	{
		[Token(Token = "0x60031D9")]
		[Address(RVA = "0x1B020D0", Offset = "0x1B006D0", VA = "0x181B020D0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000802")]
	public override bool CanSeek
	{
		[Token(Token = "0x60031DA")]
		[Address(RVA = "0x1B020E0", Offset = "0x1B006E0", VA = "0x181B020E0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000803")]
	public override bool CanWrite
	{
		[Token(Token = "0x60031DB")]
		[Address(RVA = "0x1B020F0", Offset = "0x1B006F0", VA = "0x181B020F0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000804")]
	public override long Length
	{
		[Token(Token = "0x60031E2")]
		[Address(RVA = "0x1B02110", Offset = "0x1B00710", VA = "0x181B02110", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000805")]
	public override long Position
	{
		[Token(Token = "0x60031E3")]
		[Address(RVA = "0x1B02250", Offset = "0x1B00850", VA = "0x181B02250", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60031E4")]
		[Address(RVA = "0x1B022A0", Offset = "0x1B008A0", VA = "0x181B022A0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000806")]
	[CLSCompliant(false)]
	public unsafe byte* PositionPointer
	{
		[Token(Token = "0x60031E5")]
		[Address(RVA = "0x1B02160", Offset = "0x1B00760", VA = "0x181B02160")]
		get
		{
			//IL_0002: Expected I, but got O
			return (byte*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x60031D5")]
	[Address(RVA = "0x1B02070", Offset = "0x1B00670", VA = "0x181B02070")]
	protected UnmanagedMemoryStream()
	{
	}

	[Token(Token = "0x60031D6")]
	[Address(RVA = "0x1B01FE0", Offset = "0x1B005E0", VA = "0x181B01FE0")]
	[CLSCompliant(false)]
	public unsafe UnmanagedMemoryStream(byte* pointer, long length)
	{
	}

	[Token(Token = "0x60031D7")]
	[Address(RVA = "0x1B01F60", Offset = "0x1B00560", VA = "0x181B01F60")]
	[CLSCompliant(false)]
	public unsafe UnmanagedMemoryStream(byte* pointer, long length, long capacity, FileAccess access)
	{
	}

	[Token(Token = "0x60031D8")]
	[Address(RVA = "0x1AFFE30", Offset = "0x1AFE430", VA = "0x181AFFE30")]
	[CLSCompliant(false)]
	protected unsafe void Initialize(byte* pointer, long length, long capacity, FileAccess access)
	{
	}

	[Token(Token = "0x60031DC")]
	[Address(RVA = "0x1AFFC10", Offset = "0x1AFE210", VA = "0x181AFFC10", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60031DD")]
	[Address(RVA = "0x1AFFC20", Offset = "0x1AFE220", VA = "0x181AFFC20")]
	private void EnsureNotClosed()
	{
	}

	[Token(Token = "0x60031DE")]
	[Address(RVA = "0x1AFFC60", Offset = "0x1AFE260", VA = "0x181AFFC60")]
	private void EnsureReadable()
	{
	}

	[Token(Token = "0x60031DF")]
	[Address(RVA = "0x1AFFCB0", Offset = "0x1AFE2B0", VA = "0x181AFFCB0")]
	private void EnsureWriteable()
	{
	}

	[Token(Token = "0x60031E0")]
	[Address(RVA = "0x1AFFC20", Offset = "0x1AFE220", VA = "0x181AFFC20", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x60031E1")]
	[Address(RVA = "0x1AFFD00", Offset = "0x1AFE300", VA = "0x181AFFD00", Slot = "21")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60031E6")]
	[Address(RVA = "0x1B00B90", Offset = "0x1AFF190", VA = "0x181B00B90", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60031E7")]
	[Address(RVA = "0x1B00AF0", Offset = "0x1AFF0F0", VA = "0x181B00AF0", Slot = "33")]
	public override int Read(Span<byte> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x60031E8")]
	[Address(RVA = "0x1B00860", Offset = "0x1AFEE60", VA = "0x181B00860")]
	internal int ReadCore(Span<byte> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x60031E9")]
	[Address(RVA = "0x1B003C0", Offset = "0x1AFE9C0", VA = "0x181B003C0", Slot = "24")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60031EA")]
	[Address(RVA = "0x1B000C0", Offset = "0x1AFE6C0", VA = "0x181B000C0", Slot = "25")]
	public override ValueTask<int> ReadAsync(Memory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x60031EB")]
	[Address(RVA = "0x1B006C0", Offset = "0x1AFECC0", VA = "0x181B006C0", Slot = "34")]
	public override int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x60031EC")]
	[Address(RVA = "0x1B00D90", Offset = "0x1AFF390", VA = "0x181B00D90", Slot = "30")]
	public override long Seek(long offset, SeekOrigin loc)
	{
		return default(long);
	}

	[Token(Token = "0x60031ED")]
	[Address(RVA = "0x1B00F70", Offset = "0x1AFF570", VA = "0x181B00F70", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x60031EE")]
	[Address(RVA = "0x1B01C90", Offset = "0x1B00290", VA = "0x181B01C90", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x60031EF")]
	[Address(RVA = "0x1B01EC0", Offset = "0x1B004C0", VA = "0x181B01EC0", Slot = "36")]
	public override void Write(ReadOnlySpan<byte> buffer)
	{
	}

	[Token(Token = "0x60031F0")]
	[Address(RVA = "0x1B018E0", Offset = "0x1AFFEE0", VA = "0x181B018E0")]
	internal void WriteCore(ReadOnlySpan<byte> buffer)
	{
	}

	[Token(Token = "0x60031F1")]
	[Address(RVA = "0x1B01160", Offset = "0x1AFF760", VA = "0x181B01160", Slot = "28")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60031F2")]
	[Address(RVA = "0x1B013E0", Offset = "0x1AFF9E0", VA = "0x181B013E0", Slot = "29")]
	public override ValueTask WriteAsync(ReadOnlyMemory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x60031F3")]
	[Address(RVA = "0x1B01640", Offset = "0x1AFFC40", VA = "0x181B01640", Slot = "37")]
	public override void WriteByte(byte value)
	{
	}
}
