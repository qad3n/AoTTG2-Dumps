using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x2000279")]
public sealed class EncoderExceptionFallbackBuffer : EncoderFallbackBuffer
{
	[Token(Token = "0x17000227")]
	public override int Remaining
	{
		[Token(Token = "0x600159A")]
		[Address(RVA = "0x4E19120", Offset = "0x4E19120", VA = "0x4E19120", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001595")]
	[Address(RVA = "0x4E18BF0", Offset = "0x4E18BF0", VA = "0x4E18BF0")]
	public EncoderExceptionFallbackBuffer()
	{
	}

	[Token(Token = "0x6001596")]
	[Address(RVA = "0x4E18C60", Offset = "0x4E18C60", VA = "0x4E18C60", Slot = "4")]
	public override bool Fallback(char charUnknown, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6001597")]
	[Address(RVA = "0x4E18D30", Offset = "0x4E18D30", VA = "0x4E18D30", Slot = "5")]
	public override bool Fallback(char charUnknownHigh, char charUnknownLow, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6001598")]
	[Address(RVA = "0x4E19100", Offset = "0x4E19100", VA = "0x4E19100", Slot = "6")]
	public override char GetNextChar()
	{
		return default(char);
	}

	[Token(Token = "0x6001599")]
	[Address(RVA = "0x4E19110", Offset = "0x4E19110", VA = "0x4E19110", Slot = "7")]
	public override bool MovePrevious()
	{
		return default(bool);
	}
}
