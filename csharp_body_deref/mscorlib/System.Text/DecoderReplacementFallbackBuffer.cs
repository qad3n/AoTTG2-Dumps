using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x2000274")]
public sealed class DecoderReplacementFallbackBuffer : DecoderFallbackBuffer
{
	[Token(Token = "0x4000B3C")]
	[FieldOffset(Offset = "0x20")]
	private string _strDefault;

	[Token(Token = "0x4000B3D")]
	[FieldOffset(Offset = "0x28")]
	private int _fallbackCount;

	[Token(Token = "0x4000B3E")]
	[FieldOffset(Offset = "0x2C")]
	private int _fallbackIndex;

	[Token(Token = "0x1700021F")]
	public override int Remaining
	{
		[Token(Token = "0x6001574")]
		[Address(RVA = "0x506DCF0", Offset = "0x506DCF0", VA = "0x506DCF0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001571")]
	[Address(RVA = "0x506DB70", Offset = "0x506DB70", VA = "0x506DB70")]
	public DecoderReplacementFallbackBuffer(DecoderReplacementFallback fallback)
	{
	}

	[Token(Token = "0x6001572")]
	[Address(RVA = "0x506DC70", Offset = "0x506DC70", VA = "0x506DC70", Slot = "4")]
	public override bool Fallback(byte[] bytesUnknown, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6001573")]
	[Address(RVA = "0x506DCB0", Offset = "0x506DCB0", VA = "0x506DCB0", Slot = "5")]
	public override char GetNextChar()
	{
		return default(char);
	}

	[Token(Token = "0x6001575")]
	[Address(RVA = "0x506DD00", Offset = "0x506DD00", VA = "0x506DD00", Slot = "7")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001576")]
	[Address(RVA = "0x506DD20", Offset = "0x506DD20", VA = "0x506DD20", Slot = "9")]
	internal unsafe override int InternalFallback(byte[] bytes, byte* pBytes)
	{
		return default(int);
	}
}
