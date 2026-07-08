using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x200027C")]
public abstract class EncoderFallbackBuffer
{
	[Token(Token = "0x4000B4E")]
	[FieldOffset(Offset = "0x10")]
	internal unsafe char* charStart;

	[Token(Token = "0x4000B4F")]
	[FieldOffset(Offset = "0x18")]
	internal unsafe char* charEnd;

	[Token(Token = "0x4000B50")]
	[FieldOffset(Offset = "0x20")]
	internal System.Text.EncoderNLS encoder;

	[Token(Token = "0x4000B51")]
	[FieldOffset(Offset = "0x28")]
	internal bool setEncoder;

	[Token(Token = "0x4000B52")]
	[FieldOffset(Offset = "0x29")]
	internal bool bUsedEncoder;

	[Token(Token = "0x4000B53")]
	[FieldOffset(Offset = "0x2A")]
	internal bool bFallingBack;

	[Token(Token = "0x4000B54")]
	[FieldOffset(Offset = "0x2C")]
	internal int iRecursionCount;

	[Token(Token = "0x4000B55")]
	private const int iMaxRecursion = 250;

	[Token(Token = "0x1700022B")]
	public abstract int Remaining
	{
		[Token(Token = "0x60015A8")]
		get;
	}

	[Token(Token = "0x60015A4")]
	public abstract bool Fallback(char charUnknown, int index);

	[Token(Token = "0x60015A5")]
	public abstract bool Fallback(char charUnknownHigh, char charUnknownLow, int index);

	[Token(Token = "0x60015A6")]
	public abstract char GetNextChar();

	[Token(Token = "0x60015A7")]
	public abstract bool MovePrevious();

	[Token(Token = "0x60015A9")]
	[Address(RVA = "0x4E19320", Offset = "0x4E19320", VA = "0x4E19320", Slot = "9")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x60015AA")]
	[Address(RVA = "0x4E19350", Offset = "0x4E19350", VA = "0x4E19350")]
	internal void InternalReset()
	{
	}

	[Token(Token = "0x60015AB")]
	[Address(RVA = "0x4E19380", Offset = "0x4E19380", VA = "0x4E19380")]
	internal unsafe void InternalInitialize(char* charStart, char* charEnd, System.Text.EncoderNLS encoder, bool setEncoder)
	{
	}

	[Token(Token = "0x60015AC")]
	[Address(RVA = "0x4E193C0", Offset = "0x4E193C0", VA = "0x4E193C0")]
	internal char InternalGetNextChar()
	{
		return default(char);
	}

	[Token(Token = "0x60015AD")]
	[Address(RVA = "0x4E193F0", Offset = "0x4E193F0", VA = "0x4E193F0", Slot = "10")]
	internal unsafe virtual bool InternalFallback(char ch, ref char* chars)
	{
		return default(bool);
	}

	[Token(Token = "0x60015AE")]
	[Address(RVA = "0x4E19550", Offset = "0x4E19550", VA = "0x4E19550")]
	internal void ThrowLastCharRecursive(int charRecursive)
	{
	}

	[Token(Token = "0x60015AF")]
	[Address(RVA = "0x4E18880", Offset = "0x4E18880", VA = "0x4E18880")]
	protected EncoderFallbackBuffer()
	{
	}
}
