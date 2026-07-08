using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000545")]
internal sealed class PinnedBufferMemoryStream : UnmanagedMemoryStream
{
	[Token(Token = "0x40015DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private byte[] _array;

	[Token(Token = "0x40015DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private GCHandle _pinningHandle;

	[Token(Token = "0x6002842")]
	[Address(RVA = "0x4F08940", Offset = "0x4F08940", VA = "0x4F08940")]
	internal PinnedBufferMemoryStream(byte[] array)
	{
	}

	[Token(Token = "0x6002843")]
	[Address(RVA = "0x4F08C90", Offset = "0x4F08C90", VA = "0x4F08C90", Slot = "33")]
	public override int Read(Span<byte> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x6002844")]
	[Address(RVA = "0x4F08F20", Offset = "0x4F08F20", VA = "0x4F08F20", Slot = "36")]
	public override void Write(ReadOnlySpan<byte> buffer)
	{
	}

	[Token(Token = "0x6002845")]
	[Address(RVA = "0x4F09280", Offset = "0x4F09280", VA = "0x4F09280", Slot = "1")]
	~PinnedBufferMemoryStream()
	{
	}

	[Token(Token = "0x6002846")]
	[Address(RVA = "0x4F09310", Offset = "0x4F09310", VA = "0x4F09310", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}
}
