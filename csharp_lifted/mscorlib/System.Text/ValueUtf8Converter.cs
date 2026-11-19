// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.ValueUtf8Converter
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x200029C")]
internal ref struct ValueUtf8Converter
{
	[Token(Token = "0x4000B3D")]
	[FieldOffset(Offset = "0x0")]
	private byte[] _arrayToReturnToPool;

	[Token(Token = "0x4000B3E")]
	[FieldOffset(Offset = "0x8")]
	private Span<byte> _bytes;

	[Token(Token = "0x6001716")]
	[Address(RVA = "0x531EA30", Offset = "0x531DA30", VA = "0x531EA30")]
	public ValueUtf8Converter(Span<byte> initialBuffer)
	{
	}

	[Token(Token = "0x6001717")]
	[Address(RVA = "0x531EA40", Offset = "0x531DA40", VA = "0x531EA40")]
	public Span<byte> ConvertAndTerminateString(ReadOnlySpan<char> value)
	{
		return default(Span<byte>);
	}

	[Token(Token = "0x6001718")]
	[Address(RVA = "0x531ED50", Offset = "0x531DD50", VA = "0x531ED50")]
	public void Dispose()
	{
	}
}
