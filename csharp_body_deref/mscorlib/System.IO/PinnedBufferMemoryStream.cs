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

[Token(Token = "0x2000647")]
internal sealed class PinnedBufferMemoryStream : UnmanagedMemoryStream
{
	[Token(Token = "0x400191F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private byte[] _array;

	[Token(Token = "0x4001920")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private GCHandle _pinningHandle;

	[Token(Token = "0x60030D5")]
	[Address(RVA = "0x54689E0", Offset = "0x54679E0", VA = "0x54689E0")]
	internal PinnedBufferMemoryStream(byte[] array)
	{
	}

	[Token(Token = "0x60030D6")]
	[Address(RVA = "0x5468AA0", Offset = "0x5467AA0", VA = "0x5468AA0", Slot = "34")]
	public override int Read(Span<byte> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x60030D7")]
	[Address(RVA = "0x5468AB0", Offset = "0x5467AB0", VA = "0x5468AB0", Slot = "37")]
	public override void Write(ReadOnlySpan<byte> buffer)
	{
	}

	[Token(Token = "0x60030D8")]
	[Address(RVA = "0x5468AC0", Offset = "0x5467AC0", VA = "0x5468AC0", Slot = "1")]
	~PinnedBufferMemoryStream()
	{
	}

	[Token(Token = "0x60030D9")]
	[Address(RVA = "0x5468B60", Offset = "0x5467B60", VA = "0x5468B60", Slot = "20")]
	protected override void Dispose(bool disposing)
	{
	}
}
