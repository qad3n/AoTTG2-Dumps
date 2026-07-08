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
	[Address(RVA = "0x4326840", Offset = "0x4326840", VA = "0x4326840")]
	internal void InitializeDecoder()
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x4326920", Offset = "0x4326920", VA = "0x4326920")]
	internal void EnsureInitialized()
	{
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x4326A10", Offset = "0x4326A10", VA = "0x4326A10", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x43269A0", Offset = "0x43269A0", VA = "0x43269A0")]
	private void EnsureNotDisposed()
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x43231D0", Offset = "0x43231D0", VA = "0x43231D0")]
	public OperationStatus Decompress(ReadOnlySpan<byte> source, Span<byte> destination, out int bytesConsumed, out int bytesWritten)
	{
		return default(OperationStatus);
	}
}
