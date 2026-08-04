// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.PinnedBufferMemoryStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3BEE460", Offset = "0x3BEE460", VA = "0x3BEE460")]
	internal PinnedBufferMemoryStream(byte[] array)
	{
	}

	[Token(Token = "0x6002843")]
	[Address(RVA = "0x3BEE7B0", Offset = "0x3BEE7B0", VA = "0x3BEE7B0", Slot = "33")]
	public override int Read(Span<byte> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x6002844")]
	[Address(RVA = "0x3BEEA40", Offset = "0x3BEEA40", VA = "0x3BEEA40", Slot = "36")]
	public override void Write(ReadOnlySpan<byte> buffer)
	{
	}

	[Token(Token = "0x6002845")]
	[Address(RVA = "0x3BEEDA0", Offset = "0x3BEEDA0", VA = "0x3BEEDA0", Slot = "1")]
	~PinnedBufferMemoryStream()
	{
	}

	[Token(Token = "0x6002846")]
	[Address(RVA = "0x3BEEE30", Offset = "0x3BEEE30", VA = "0x3BEEE30", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}
}
