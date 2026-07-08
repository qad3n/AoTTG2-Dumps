using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x200026E")]
public sealed class DecoderExceptionFallbackBuffer : DecoderFallbackBuffer
{
	[Token(Token = "0x17000216")]
	public override int Remaining
	{
		[Token(Token = "0x6001546")]
		[Address(RVA = "0x506C600", Offset = "0x506C600", VA = "0x506C600", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001544")]
	[Address(RVA = "0x506C420", Offset = "0x506C420", VA = "0x506C420", Slot = "4")]
	public override bool Fallback(byte[] bytesUnknown, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6001545")]
	[Address(RVA = "0x506C5F0", Offset = "0x506C5F0", VA = "0x506C5F0", Slot = "5")]
	public override char GetNextChar()
	{
		return default(char);
	}

	[Token(Token = "0x6001547")]
	[Address(RVA = "0x506C430", Offset = "0x506C430", VA = "0x506C430")]
	private void Throw(byte[] bytesUnknown, int index)
	{
	}

	[Token(Token = "0x6001548")]
	[Address(RVA = "0x506C3B0", Offset = "0x506C3B0", VA = "0x506C3B0")]
	public DecoderExceptionFallbackBuffer()
	{
	}
}
