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

[Token(Token = "0x200066E")]
internal sealed class PinnedBufferMemoryStream : UnmanagedMemoryStream
{
	[Token(Token = "0x40019BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private byte[] _array;

	[Token(Token = "0x40019BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private GCHandle _pinningHandle;

	[Token(Token = "0x6003117")]
	[Address(RVA = "0x1AD9F90", Offset = "0x1AD8590", VA = "0x181AD9F90")]
	internal PinnedBufferMemoryStream(byte[] array)
	{
	}

	[Token(Token = "0x6003118")]
	[Address(RVA = "0x1AD9F50", Offset = "0x1AD8550", VA = "0x181AD9F50", Slot = "33")]
	public override int Read(Span<byte> buffer)
	{
		return default(int);
	}

	[Token(Token = "0x6003119")]
	[Address(RVA = "0x1AD9F70", Offset = "0x1AD8570", VA = "0x181AD9F70", Slot = "36")]
	public override void Write(ReadOnlySpan<byte> buffer)
	{
	}

	[Token(Token = "0x600311A")]
	[Address(RVA = "0x1AD9EE0", Offset = "0x1AD84E0", VA = "0x181AD9EE0", Slot = "1")]
	~PinnedBufferMemoryStream()
	{
	}

	[Token(Token = "0x600311B")]
	[Address(RVA = "0x1AD9EA0", Offset = "0x1AD84A0", VA = "0x181AD9EA0", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}
}
