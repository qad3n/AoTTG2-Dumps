// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.ValueUtf8Converter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3B14740", Offset = "0x3B14740", VA = "0x3B14740")]
	public ValueUtf8Converter(Span<byte> initialBuffer)
	{
	}

	[Token(Token = "0x60016D3")]
	[Address(RVA = "0x3B14750", Offset = "0x3B14750", VA = "0x3B14750")]
	public Span<byte> ConvertAndTerminateString(ReadOnlySpan<char> value)
	{
		return default(Span<byte>);
	}

	[Token(Token = "0x60016D4")]
	[Address(RVA = "0x3B14A60", Offset = "0x3B14A60", VA = "0x3B14A60")]
	public void Dispose()
	{
	}
}
