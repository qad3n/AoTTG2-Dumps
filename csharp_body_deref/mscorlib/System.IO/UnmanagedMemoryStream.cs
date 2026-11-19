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

[Token(Token = "0x200065B")]
public class UnmanagedMemoryStream : Stream
{
	[Token(Token = "0x400199A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private SafeBuffer _buffer;

	[Token(Token = "0x400199B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private unsafe byte* _mem;

	[Token(Token = "0x400199C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private long _length;

	[Token(Token = "0x400199D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private long _capacity;

	[Token(Token = "0x400199E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private long _position;

	[Token(Token = "0x400199F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private long _offset;

	[Token(Token = "0x40019A0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private FileAccess _access;

	[Token(Token = "0x40019A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	internal bool _isOpen;

	[Token(Token = "0x40019A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private Task<int> _lastReadTask;

	[Token(Token = "0x170007FD")]
	public override bool CanRead
	{
		[Token(Token = "0x6003198")]
		[Address(RVA = "0x5474280", Offset = "0x5473280", VA = "0x5474280", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007FE")]
	public override bool CanSeek
	{
		[Token(Token = "0x6003199")]
		[Address(RVA = "0x5474290", Offset = "0x5473290", VA = "0x5474290", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007FF")]
	public override bool CanWrite
	{
		[Token(Token = "0x600319A")]
		[Address(RVA = "0x54742A0", Offset = "0x54732A0", VA = "0x54742A0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000800")]
	public override long Length
	{
		[Token(Token = "0x60031A1")]
		[Address(RVA = "0x5474580", Offset = "0x5473580", VA = "0x5474580", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000801")]
	public override long Position
	{
		[Token(Token = "0x60031A2")]
		[Address(RVA = "0x54745C0", Offset = "0x54735C0", VA = "0x54745C0", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60031A3")]
		[Address(RVA = "0x5474610", Offset = "0x5473610", VA = "0x5474610", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x17000802")]
	[CLSCompliant(false)]
	public unsafe byte* PositionPointer
	{
		[Token(Token = "0x60031A4")]
		[Address(RVA = "0x54746B0", Offset = "0x54736B0", VA = "0x54746B0")]
		get
		{
			//IL_0002: Expected I, but got O
			return (byte*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x6003194")]
	[Address(RVA = "0x5473F60", Offset = "0x5472F60", VA = "0x5473F60")]
	protected UnmanagedMemoryStream()
	{
	}

	[Token(Token = "0x6003195")]
	[Address(RVA = "0x5473FC0", Offset = "0x5472FC0", VA = "0x5473FC0")]
	[CLSCompliant(false)]
	public unsafe UnmanagedMemoryStream(byte* pointer, long length)
	{
	}

	[Token(Token = "0x6003196")]
	[Address(RVA = "0x5474200", Offset = "0x5473200", VA = "0x5474200")]
	[CLSCompliant(false)]
	public unsafe UnmanagedMemoryStream(byte* pointer, long length, long capacity, FileAccess access)
	{
	}

	[Token(Token = "0x6003197")]
	[Address(RVA = "0x5474030", Offset = "0x5473030", VA = "0x5474030")]
	[CLSCompliant(false)]
	protected unsafe void Initialize(byte* pointer, long length, long capacity, FileAccess access)
	{
	}

	[Token(Token = "0x600319B")]
	[Address(RVA = "0x54742C0", Offset = "0x54732C0", VA = "0x54742C0", Slot = "20")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600319C")]
	[Address(RVA = "0x54742E0", Offset = "0x54732E0", VA = "0x54742E0")]
	private void EnsureNotClosed()
	{
	}

	[Token(Token = "0x600319D")]
	[Address(RVA = "0x5474310", Offset = "0x5473310", VA = "0x5474310")]
	private void EnsureReadable()
	{
	}

	[Token(Token = "0x600319E")]
	[Address(RVA = "0x5474350", Offset = "0x5473350", VA = "0x5474350")]
	private void EnsureWriteable()
	{
	}

	[Token(Token = "0x600319F")]
	[Address(RVA = "0x5474390", Offset = "0x5473390", VA = "0x5474390", Slot = "21")]
	public override void Flush()
	{
	}

	[Token(Token = "0x60031A0")]
	[Address(RVA = "0x54743C0", Offset = "0x54733C0", VA = "0x54743C0", Slot = "22")]
	public override Task FlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60031A5")]
	[Address(RVA = "0x5474770", Offset = "0x5473770", VA = "0x5474770", Slot = "33")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60031A6")]
	[Address(RVA = "0x5474B50", Offset = "0x5473B50", VA = "0x5474B50", Slot = "34")]
	public override int Read(Span<byte> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x60031A7")]
	[Address(RVA = "0x54748F0", Offset = "0x54738F0", VA = "0x54748F0")]
	internal int ReadCore(Span<byte> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x60031A8")]
	[Address(RVA = "0x5474EF0", Offset = "0x5473EF0", VA = "0x5474EF0", Slot = "25")]
	public override Task<int> ReadAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60031A9")]
	[Address(RVA = "0x5475210", Offset = "0x5474210", VA = "0x5475210", Slot = "26")]
	public override ValueTask<int> ReadAsync(Memory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask<int>);
	}

	[Token(Token = "0x60031AA")]
	[Address(RVA = "0x54755A0", Offset = "0x54745A0", VA = "0x54755A0", Slot = "35")]
	public override int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x60031AB")]
	[Address(RVA = "0x5475760", Offset = "0x5474760", VA = "0x5475760", Slot = "31")]
	public override long Seek(long offset, SeekOrigin loc)
	{
		return default(long);
	}

	[Token(Token = "0x60031AC")]
	[Address(RVA = "0x5475870", Offset = "0x5474870", VA = "0x5475870", Slot = "32")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x60031AD")]
	[Address(RVA = "0x5475A20", Offset = "0x5474A20", VA = "0x5475A20", Slot = "36")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x60031AE")]
	[Address(RVA = "0x5475EF0", Offset = "0x5474EF0", VA = "0x5475EF0", Slot = "37")]
	public override void Write(ReadOnlySpan<byte> buffer)
	{
	}

	[Token(Token = "0x60031AF")]
	[Address(RVA = "0x5475BB0", Offset = "0x5474BB0", VA = "0x5475BB0")]
	internal void WriteCore(ReadOnlySpan<byte> buffer)
	{
	}

	[Token(Token = "0x60031B0")]
	[Address(RVA = "0x54761E0", Offset = "0x54751E0", VA = "0x54761E0", Slot = "29")]
	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60031B1")]
	[Address(RVA = "0x54764C0", Offset = "0x54754C0", VA = "0x54764C0", Slot = "30")]
	public override ValueTask WriteAsync(ReadOnlyMemory<byte> buffer, [Optional] CancellationToken cancellationToken)
	{
		return default(ValueTask);
	}

	[Token(Token = "0x60031B2")]
	[Address(RVA = "0x5476760", Offset = "0x5475760", VA = "0x5476760", Slot = "38")]
	public override void WriteByte(byte value)
	{
	}
}
