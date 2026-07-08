using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x2000294")]
internal ref struct ValueUtf8Converter
{
	[Token(Token = "0x4000B9F")]
	[FieldOffset(Offset = "0x0")]
	private byte[] _arrayToReturnToPool;

	[Token(Token = "0x4000BA0")]
	[FieldOffset(Offset = "0x8")]
	private Span<byte> _bytes;

	[Token(Token = "0x60016D2")]
	[Address(RVA = "0x4E2EC20", Offset = "0x4E2EC20", VA = "0x4E2EC20")]
	public ValueUtf8Converter(Span<byte> initialBuffer)
	{
	}

	[Token(Token = "0x60016D3")]
	[Address(RVA = "0x4E2EC30", Offset = "0x4E2EC30", VA = "0x4E2EC30")]
	public Span<byte> ConvertAndTerminateString(ReadOnlySpan<char> value)
	{
		return default(Span<byte>);
	}

	[Token(Token = "0x60016D4")]
	[Address(RVA = "0x4E2EF40", Offset = "0x4E2EF40", VA = "0x4E2EF40")]
	public void Dispose()
	{
	}
}
