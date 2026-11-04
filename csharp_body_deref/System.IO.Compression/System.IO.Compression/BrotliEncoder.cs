// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.BrotliEncoder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Buffers;
using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;

namespace System.IO.Compression;

[Token(Token = "0x200000E")]
public struct BrotliEncoder : IDisposable
{
	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x0")]
	internal SafeBrotliEncoderHandle _state;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x8")]
	private bool _disposed;

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x25B60F0", Offset = "0x25B46F0", VA = "0x1825B60F0")]
	internal void InitializeEncoder()
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x25B5EC0", Offset = "0x25B44C0", VA = "0x1825B5EC0")]
	internal void EnsureInitialized()
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x25B5880", Offset = "0x25B3E80", VA = "0x1825B5880", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x25B5EF0", Offset = "0x25B44F0", VA = "0x1825B5EF0")]
	private void EnsureNotDisposed()
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x25B61E0", Offset = "0x25B47E0", VA = "0x1825B61E0")]
	internal void SetQuality(int quality)
	{
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x25B5F70", Offset = "0x25B4570", VA = "0x1825B5F70")]
	internal OperationStatus Flush(Memory<byte> destination, out int bytesWritten)
	{
		return default(OperationStatus);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x25B6050", Offset = "0x25B4650", VA = "0x1825B6050")]
	public OperationStatus Flush(Span<byte> destination, out int bytesWritten)
	{
		return default(OperationStatus);
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x25B5DA0", Offset = "0x25B43A0", VA = "0x1825B5DA0")]
	internal OperationStatus Compress(ReadOnlyMemory<byte> source, Memory<byte> destination, out int bytesConsumed, out int bytesWritten, bool isFinalBlock)
	{
		return default(OperationStatus);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x25B5E70", Offset = "0x25B4470", VA = "0x1825B5E70")]
	public OperationStatus Compress(ReadOnlySpan<byte> source, Span<byte> destination, out int bytesConsumed, out int bytesWritten, bool isFinalBlock)
	{
		return default(OperationStatus);
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x25B5A40", Offset = "0x25B4040", VA = "0x1825B5A40")]
	internal OperationStatus Compress(ReadOnlySpan<byte> source, Span<byte> destination, out int bytesConsumed, out int bytesWritten, BrotliEncoderOperation operation)
	{
		return default(OperationStatus);
	}
}
