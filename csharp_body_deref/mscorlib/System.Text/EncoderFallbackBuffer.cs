// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.EncoderFallbackBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x2000284")]
public abstract class EncoderFallbackBuffer
{
	[Token(Token = "0x4000AF5")]
	[FieldOffset(Offset = "0x10")]
	internal unsafe char* charStart;

	[Token(Token = "0x4000AF6")]
	[FieldOffset(Offset = "0x18")]
	internal unsafe char* charEnd;

	[Token(Token = "0x4000AF7")]
	[FieldOffset(Offset = "0x20")]
	internal System.Text.EncoderNLS encoder;

	[Token(Token = "0x4000AF8")]
	[FieldOffset(Offset = "0x28")]
	internal bool setEncoder;

	[Token(Token = "0x4000AF9")]
	[FieldOffset(Offset = "0x29")]
	internal bool bUsedEncoder;

	[Token(Token = "0x4000AFA")]
	[FieldOffset(Offset = "0x2A")]
	internal bool bFallingBack;

	[Token(Token = "0x4000AFB")]
	[FieldOffset(Offset = "0x2C")]
	internal int iRecursionCount;

	[Token(Token = "0x1700022C")]
	public abstract int Remaining
	{
		[Token(Token = "0x60015EB")]
		get;
	}

	[Token(Token = "0x60015E7")]
	public abstract bool Fallback(char charUnknown, int index);

	[Token(Token = "0x60015E8")]
	public abstract bool Fallback(char charUnknownHigh, char charUnknownLow, int index);

	[Token(Token = "0x60015E9")]
	public abstract char GetNextChar();

	[Token(Token = "0x60015EA")]
	public abstract bool MovePrevious();

	[Token(Token = "0x60015EC")]
	[Address(RVA = "0x5309B40", Offset = "0x5308B40", VA = "0x5309B40", Slot = "9")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x60015ED")]
	[Address(RVA = "0x5309B70", Offset = "0x5308B70", VA = "0x5309B70")]
	internal void InternalReset()
	{
	}

	[Token(Token = "0x60015EE")]
	[Address(RVA = "0x5309BA0", Offset = "0x5308BA0", VA = "0x5309BA0")]
	internal unsafe void InternalInitialize(char* charStart, char* charEnd, System.Text.EncoderNLS encoder, bool setEncoder)
	{
	}

	[Token(Token = "0x60015EF")]
	[Address(RVA = "0x5309BE0", Offset = "0x5308BE0", VA = "0x5309BE0")]
	internal char InternalGetNextChar()
	{
		return default(char);
	}

	[Token(Token = "0x60015F0")]
	[Address(RVA = "0x5309C10", Offset = "0x5308C10", VA = "0x5309C10", Slot = "10")]
	internal unsafe virtual bool InternalFallback(char ch, ref char* chars)
	{
		return default(bool);
	}

	[Token(Token = "0x60015F1")]
	[Address(RVA = "0x5309E00", Offset = "0x5308E00", VA = "0x5309E00")]
	internal void ThrowLastCharRecursive(int charRecursive)
	{
	}

	[Token(Token = "0x60015F2")]
	[Address(RVA = "0x5309470", Offset = "0x5308470", VA = "0x5309470")]
	protected EncoderFallbackBuffer()
	{
	}
}
