using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x200027F")]
public sealed class EncoderReplacementFallbackBuffer : EncoderFallbackBuffer
{
	[Token(Token = "0x4000B5C")]
	[FieldOffset(Offset = "0x30")]
	private string _strDefault;

	[Token(Token = "0x4000B5D")]
	[FieldOffset(Offset = "0x38")]
	private int _fallbackCount;

	[Token(Token = "0x4000B5E")]
	[FieldOffset(Offset = "0x3C")]
	private int _fallbackIndex;

	[Token(Token = "0x17000231")]
	public override int Remaining
	{
		[Token(Token = "0x60015CA")]
		[Address(RVA = "0x4E1A9A0", Offset = "0x4E1A9A0", VA = "0x4E1A9A0", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60015C5")]
	[Address(RVA = "0x4E1A530", Offset = "0x4E1A530", VA = "0x4E1A530")]
	public EncoderReplacementFallbackBuffer(EncoderReplacementFallback fallback)
	{
	}

	[Token(Token = "0x60015C6")]
	[Address(RVA = "0x4E1A640", Offset = "0x4E1A640", VA = "0x4E1A640", Slot = "4")]
	public override bool Fallback(char charUnknown, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60015C7")]
	[Address(RVA = "0x4E1A750", Offset = "0x4E1A750", VA = "0x4E1A750", Slot = "5")]
	public override bool Fallback(char charUnknownHigh, char charUnknownLow, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60015C8")]
	[Address(RVA = "0x4E1A930", Offset = "0x4E1A930", VA = "0x4E1A930", Slot = "6")]
	public override char GetNextChar()
	{
		return default(char);
	}

	[Token(Token = "0x60015C9")]
	[Address(RVA = "0x4E1A970", Offset = "0x4E1A970", VA = "0x4E1A970", Slot = "7")]
	public override bool MovePrevious()
	{
		return default(bool);
	}

	[Token(Token = "0x60015CB")]
	[Address(RVA = "0x4E1A9B0", Offset = "0x4E1A9B0", VA = "0x4E1A9B0", Slot = "9")]
	public override void Reset()
	{
	}
}
