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

[Token(Token = "0x200000B")]
public struct BrotliEncoder : IDisposable
{
	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x0")]
	internal SafeBrotliEncoderHandle _state;

	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x8")]
	private bool _disposed;

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x4664190", Offset = "0x4664190", VA = "0x4664190")]
	internal void InitializeEncoder()
	{
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4664340", Offset = "0x4664340", VA = "0x4664340")]
	internal void EnsureInitialized()
	{
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x46643C0", Offset = "0x46643C0", VA = "0x46643C0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x46642D0", Offset = "0x46642D0", VA = "0x46642D0")]
	private void EnsureNotDisposed()
	{
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x46613D0", Offset = "0x46613D0", VA = "0x46613D0")]
	internal void SetQuality(int quality)
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x4663E90", Offset = "0x4663E90", VA = "0x4663E90")]
	internal OperationStatus Flush(Memory<byte> destination, out int bytesWritten)
	{
		return default(OperationStatus);
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x4661EE0", Offset = "0x4661EE0", VA = "0x4661EE0")]
	public OperationStatus Flush(Span<byte> destination, out int bytesWritten)
	{
		return default(OperationStatus);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x46634F0", Offset = "0x46634F0", VA = "0x46634F0")]
	internal OperationStatus Compress(ReadOnlyMemory<byte> source, Memory<byte> destination, out int bytesConsumed, out int bytesWritten, bool isFinalBlock)
	{
		return default(OperationStatus);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x46616A0", Offset = "0x46616A0", VA = "0x46616A0")]
	public OperationStatus Compress(ReadOnlySpan<byte> source, Span<byte> destination, out int bytesConsumed, out int bytesWritten, bool isFinalBlock)
	{
		return default(OperationStatus);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x46643E0", Offset = "0x46643E0", VA = "0x46643E0")]
	internal OperationStatus Compress(ReadOnlySpan<byte> source, Span<byte> destination, out int bytesConsumed, out int bytesWritten, BrotliEncoderOperation operation)
	{
		return default(OperationStatus);
	}
}
