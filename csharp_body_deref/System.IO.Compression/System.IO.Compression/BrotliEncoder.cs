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
	[Address(RVA = "0x4326A30", Offset = "0x4326A30", VA = "0x4326A30")]
	internal void InitializeEncoder()
	{
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4326BE0", Offset = "0x4326BE0", VA = "0x4326BE0")]
	internal void EnsureInitialized()
	{
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x4326C60", Offset = "0x4326C60", VA = "0x4326C60", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x4326B70", Offset = "0x4326B70", VA = "0x4326B70")]
	private void EnsureNotDisposed()
	{
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x4323C70", Offset = "0x4323C70", VA = "0x4323C70")]
	internal void SetQuality(int quality)
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x4326730", Offset = "0x4326730", VA = "0x4326730")]
	internal OperationStatus Flush(Memory<byte> destination, out int bytesWritten)
	{
		return default(OperationStatus);
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x4324780", Offset = "0x4324780", VA = "0x4324780")]
	public OperationStatus Flush(Span<byte> destination, out int bytesWritten)
	{
		return default(OperationStatus);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x4325D90", Offset = "0x4325D90", VA = "0x4325D90")]
	internal OperationStatus Compress(ReadOnlyMemory<byte> source, Memory<byte> destination, out int bytesConsumed, out int bytesWritten, bool isFinalBlock)
	{
		return default(OperationStatus);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x4323F40", Offset = "0x4323F40", VA = "0x4323F40")]
	public OperationStatus Compress(ReadOnlySpan<byte> source, Span<byte> destination, out int bytesConsumed, out int bytesWritten, bool isFinalBlock)
	{
		return default(OperationStatus);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x4326C80", Offset = "0x4326C80", VA = "0x4326C80")]
	internal OperationStatus Compress(ReadOnlySpan<byte> source, Span<byte> destination, out int bytesConsumed, out int bytesWritten, BrotliEncoderOperation operation)
	{
		return default(OperationStatus);
	}
}
