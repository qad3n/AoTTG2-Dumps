// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.DecoderExceptionFallbackBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x2000276")]
public sealed class DecoderExceptionFallbackBuffer : DecoderFallbackBuffer
{
	[Token(Token = "0x17000217")]
	public override int Remaining
	{
		[Token(Token = "0x6001589")]
		[Address(RVA = "0x5552F80", Offset = "0x5551F80", VA = "0x5552F80", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001587")]
	[Address(RVA = "0x5552DA0", Offset = "0x5551DA0", VA = "0x5552DA0", Slot = "4")]
	public override bool Fallback(byte[] bytesUnknown, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6001588")]
	[Address(RVA = "0x5552F70", Offset = "0x5551F70", VA = "0x5552F70", Slot = "5")]
	public override char GetNextChar()
	{
		return default(char);
	}

	[Token(Token = "0x600158A")]
	[Address(RVA = "0x5552DB0", Offset = "0x5551DB0", VA = "0x5552DB0")]
	private void Throw(byte[] bytesUnknown, int index)
	{
	}

	[Token(Token = "0x600158B")]
	[Address(RVA = "0x5552D30", Offset = "0x5551D30", VA = "0x5552D30")]
	public DecoderExceptionFallbackBuffer()
	{
	}
}
