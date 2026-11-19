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
	[Address(RVA = "0x5F636C0", Offset = "0x5F626C0", VA = "0x5F636C0")]
	internal void InitializeEncoder()
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x5F63850", Offset = "0x5F62850", VA = "0x5F63850")]
	internal void EnsureInitialized()
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x5F638D0", Offset = "0x5F628D0", VA = "0x5F638D0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x5F637E0", Offset = "0x5F627E0", VA = "0x5F637E0")]
	private void EnsureNotDisposed()
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x5F60AB0", Offset = "0x5F5FAB0", VA = "0x5F60AB0")]
	internal void SetQuality(int quality)
	{
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x5F633D0", Offset = "0x5F623D0", VA = "0x5F633D0")]
	internal OperationStatus Flush(Memory<byte> destination, out int bytesWritten)
	{
		return default(OperationStatus);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x5F614E0", Offset = "0x5F604E0", VA = "0x5F614E0")]
	public OperationStatus Flush(Span<byte> destination, out int bytesWritten)
	{
		return default(OperationStatus);
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x5F62A80", Offset = "0x5F61A80", VA = "0x5F62A80")]
	internal OperationStatus Compress(ReadOnlyMemory<byte> source, Memory<byte> destination, out int bytesConsumed, out int bytesWritten, bool isFinalBlock)
	{
		return default(OperationStatus);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x5F60D80", Offset = "0x5F5FD80", VA = "0x5F60D80")]
	public OperationStatus Compress(ReadOnlySpan<byte> source, Span<byte> destination, out int bytesConsumed, out int bytesWritten, bool isFinalBlock)
	{
		return default(OperationStatus);
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x5F638F0", Offset = "0x5F628F0", VA = "0x5F638F0")]
	internal OperationStatus Compress(ReadOnlySpan<byte> source, Span<byte> destination, out int bytesConsumed, out int bytesWritten, BrotliEncoderOperation operation)
	{
		return default(OperationStatus);
	}
}
