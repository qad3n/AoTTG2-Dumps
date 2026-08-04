// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.BrotliDecoder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Buffers;
using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;

namespace System.IO.Compression;

[Token(Token = "0x200000A")]
public struct BrotliDecoder : IDisposable
{
	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x0")]
	private SafeBrotliDecoderHandle _state;

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x8")]
	private bool _disposed;

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x4663FA0", Offset = "0x4663FA0", VA = "0x4663FA0")]
	internal void InitializeDecoder()
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x4664080", Offset = "0x4664080", VA = "0x4664080")]
	internal void EnsureInitialized()
	{
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x4664170", Offset = "0x4664170", VA = "0x4664170", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x4664100", Offset = "0x4664100", VA = "0x4664100")]
	private void EnsureNotDisposed()
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x4660930", Offset = "0x4660930", VA = "0x4660930")]
	public OperationStatus Decompress(ReadOnlySpan<byte> source, Span<byte> destination, out int bytesConsumed, out int bytesWritten)
	{
		return default(OperationStatus);
	}
}
