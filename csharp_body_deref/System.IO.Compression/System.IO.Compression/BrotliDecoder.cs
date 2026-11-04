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

[Token(Token = "0x200000D")]
public struct BrotliDecoder : IDisposable
{
	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0x0")]
	private SafeBrotliDecoderHandle _state;

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x8")]
	private bool _disposed;

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x25B5950", Offset = "0x25B3F50", VA = "0x1825B5950")]
	internal void InitializeDecoder()
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x25B58A0", Offset = "0x25B3EA0", VA = "0x1825B58A0")]
	internal void EnsureInitialized()
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x25B5880", Offset = "0x25B3E80", VA = "0x1825B5880", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x25B58D0", Offset = "0x25B3ED0", VA = "0x1825B58D0")]
	private void EnsureNotDisposed()
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x25B5520", Offset = "0x25B3B20", VA = "0x1825B5520")]
	public OperationStatus Decompress(ReadOnlySpan<byte> source, Span<byte> destination, out int bytesConsumed, out int bytesWritten)
	{
		return default(OperationStatus);
	}
}
