using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000558")]
public class UnmanagedMemoryStream : Stream
{
	[Token(Token = "0x4001656")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private SafeBuffer _buffer;

	[Token(Token = "0x4001657")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private unsafe byte* _mem;

	[Token(Token = "0x4001658")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private long _length;

	[Token(Token = "0x4001659")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private long _capacity;

	[Token(Token = "0x400165A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private long _position;

	[Token(Token = "0x400165B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private long _offset;

	[Token(Token = "0x400165C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private FileAccess _access;

	[Token(Token = "0x400165D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	internal bool _isOpen;

	[Token(Token = "0x400165E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private Task<int> _lastReadTask;

	[Token(Token = "0x170005EA")]
	public override bool CanRead
	{
		[Token(Token = "0x6002900")]
		[Address(RVA = "0x4F153B0", Offset = "0x4F153B0", VA = "0x4F153B0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170005EB")]
	public override bool CanSeek
	{
		[Token(Token = "0x6002901")]
		[Address(RVA = "0x4F153C0", Offset = "0x4F153C0", VA = "0x4F153C0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170005EC")]
	public override bool CanWrite
	{
		[Token(Token = "0x6002902")]
		[Address(RVA = "0x4F153D0", Offset = "0x4F153D0", VA = "0x4F153D0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170005ED")]
	public override long Length
	{
		[Token(Token = "0x6002909")]
		[Address(RVA = "0x4F15690", Offset = "0x4F15690", VA = "0x4F15690", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170005EE")]
	public override long Position
	{
		[Token(Token = "0x600290A")]
		[Address(RVA = "0x4F156D0", Offset = "0x4F156D0", VA = "0x4F156D0", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600290B")]
		[Address(RVA = "0x4F15720", Offset = "0x4F15720", VA = "0x4F15720", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x170005EF")]
	[CLSCompliant(false)]
	public unsafe byte* PositionPointer
	{
		[Token(Token = "0x600290C")]
		[Address(RVA = "0x4F157C0", Offset = "0x4F157C0", VA = "0x4F157C0")]
		get
		{
			//IL_0002: Expected I, but got O
			return (byte*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x60028FC")]
	[Address(RVA = "0x4F08A70", Offset = "0x4F08A70", VA = "0x4F08A70")]
	protected UnmanagedMemoryStream()
	{
	}

	[Token(Token = "0x60028FD")]
	[Address(RVA = "0x4F152C0", Offset = "0x4F152C0", VA = "0x4F152C0")]
	[CLSCompliant(false)]
	public unsafe UnmanagedMemoryStream(byte* pointer, long length)
	{
	}

	[Token(Token = "0x60028FE")]
	[Address(RVA = "0x4F15330", Offset = "0x4F15330", VA = "0x4F15330")]
	[CLSCompliant(false)]
	public unsafe UnmanagedMemoryStream(byte* pointer, long length, long capacity, FileAccess access)
	{
	}

	[Token(Token = "0x60028FF")]
	[Address(RVA = "0x4F08AC0", Offset = "0x4F08AC0", VA = "0x4F08AC0")]
	[CLSCompliant(false)]
	protected unsafe void Initialize(byte* pointer, long length, long capacity, FileAccess access)
	{
	}

	[Token(Token = "0x6002903")]
	[Address(RVA = "0x4F09350", Offset = "0x4F09350", VA = "0x4F09350", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002904")]
	[Address(RVA = "0x4F153F0", Offset = "0x4F153F0", VA = "0x4F153F0")]
	private void EnsureNotClosed()
	{
	}

	[Token(Token = "0x6002905")]
	[Address(RVA = "0x4F15420", Offset = "0x4F15420", VA = "0x4F15420")]
	private void EnsureReadable()
	{
	}

	[Token(Token = "0x6002906")]
	[Address(RVA = "0x4F15460", Offset = "0x4F15460", VA = "0x4F15460")]
	private void EnsureWriteable()
	{
	}

	[Token(Token = "0x6002907")]
	[Address(RVA = "0x4F154A0", Offset = "0x4F154A0", VA = "0x4F154A0", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6002908")]
	[Address(RVA = "0x4F154D0", Offset = "0x4F154D0", VA = "0x4F154D0", Slot = "21")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600290D")]
	[Address(RVA = "0x4F15880", Offset = "0x4F15880", VA = "0x4F15880", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600290E")]
	[Address(RVA = "0x4F15A00", Offset = "0x4F15A00", VA = "0x4F15A00", Slot = "33")]
	public override int Read(Span<byte> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x600290F")]
	[Address(RVA = "0x4F08CA0", Offset = "0x4F08CA0", VA = "0x4F08CA0")]
	internal int ReadCore(Span<byte> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x6002910")]
	[Address(RVA = "0x4F15AA0", Offset = "0x4F15AA0", VA = "0x4F15AA0", Slot = "24")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6002911")]
	[Address(RVA = "0x4F15DF0", Offset = "0x4F15DF0", VA = "0x4F15DF0", Slot = "25")]
	public override ValueTask<int> ReadAsync(Memory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x6002912")]
	[Address(RVA = "0x4F16190", Offset = "0x4F16190", VA = "0x4F16190", Slot = "34")]
	public override int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x6002913")]
	[Address(RVA = "0x4F16350", Offset = "0x4F16350", VA = "0x4F16350", Slot = "30")]
	public override long Seek(long offset, SeekOrigin loc)
	{
		return default(long);
	}

	[Token(Token = "0x6002914")]
	[Address(RVA = "0x4F16470", Offset = "0x4F16470", VA = "0x4F16470", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x6002915")]
	[Address(RVA = "0x4F16630", Offset = "0x4F16630", VA = "0x4F16630", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x6002916")]
	[Address(RVA = "0x4F167C0", Offset = "0x4F167C0", VA = "0x4F167C0", Slot = "36")]
	public override void Write(ReadOnlySpan<byte> buffer)
	{
	}

	[Token(Token = "0x6002917")]
	[Address(RVA = "0x4F08F30", Offset = "0x4F08F30", VA = "0x4F08F30")]
	internal void WriteCore(ReadOnlySpan<byte> buffer)
	{
	}

	[Token(Token = "0x6002918")]
	[Address(RVA = "0x4F16860", Offset = "0x4F16860", VA = "0x4F16860", Slot = "28")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6002919")]
	[Address(RVA = "0x4F16B50", Offset = "0x4F16B50", VA = "0x4F16B50", Slot = "29")]
	public override ValueTask WriteAsync(ReadOnlyMemory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x600291A")]
	[Address(RVA = "0x4F16E90", Offset = "0x4F16E90", VA = "0x4F16E90", Slot = "37")]
	public override void WriteByte(byte value)
	{
	}
}
