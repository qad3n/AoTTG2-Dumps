// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.DecoderExceptionFallbackBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x200029E")]
public sealed class DecoderExceptionFallbackBuffer : DecoderFallbackBuffer
{
	[Token(Token = "0x17000218")]
	public override int Remaining
	{
		[Token(Token = "0x60015B2")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60015B0")]
	[Address(RVA = "0x1BADBE0", Offset = "0x1BAC1E0", VA = "0x181BADBE0", Slot = "4")]
	public override bool Fallback(byte[] bytesUnknown, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60015B1")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "5")]
	public override char GetNextChar()
	{
		return default(char);
	}

	[Token(Token = "0x60015B3")]
	[Address(RVA = "0x1BADBF0", Offset = "0x1BAC1F0", VA = "0x181BADBF0")]
	private void Throw(byte[] bytesUnknown, int index)
	{
	}

	[Token(Token = "0x60015B4")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public DecoderExceptionFallbackBuffer()
	{
	}
}
