// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.EncoderFallbackBuffer
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x20002AC")]
public abstract class EncoderFallbackBuffer
{
	[Token(Token = "0x4000B97")]
	[FieldOffset(Offset = "0x10")]
	internal unsafe char* charStart;

	[Token(Token = "0x4000B98")]
	[FieldOffset(Offset = "0x18")]
	internal unsafe char* charEnd;

	[Token(Token = "0x4000B99")]
	[FieldOffset(Offset = "0x20")]
	internal System.Text.EncoderNLS encoder;

	[Token(Token = "0x4000B9A")]
	[FieldOffset(Offset = "0x28")]
	internal bool setEncoder;

	[Token(Token = "0x4000B9B")]
	[FieldOffset(Offset = "0x29")]
	internal bool bUsedEncoder;

	[Token(Token = "0x4000B9C")]
	[FieldOffset(Offset = "0x2A")]
	internal bool bFallingBack;

	[Token(Token = "0x4000B9D")]
	[FieldOffset(Offset = "0x2C")]
	internal int iRecursionCount;

	[Token(Token = "0x1700022D")]
	public abstract int Remaining
	{
		[Token(Token = "0x6001614")]
		get;
	}

	[Token(Token = "0x6001610")]
	public abstract bool Fallback(char charUnknown, int index);

	[Token(Token = "0x6001611")]
	public abstract bool Fallback(char charUnknownHigh, char charUnknownLow, int index);

	[Token(Token = "0x6001612")]
	public abstract char GetNextChar();

	[Token(Token = "0x6001613")]
	public abstract bool MovePrevious();

	[Token(Token = "0x6001615")]
	[Address(RVA = "0x1977780", Offset = "0x1975D80", VA = "0x181977780", Slot = "9")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6001616")]
	[Address(RVA = "0x1977760", Offset = "0x1975D60", VA = "0x181977760")]
	internal void InternalReset()
	{
	}

	[Token(Token = "0x6001617")]
	[Address(RVA = "0x1977720", Offset = "0x1975D20", VA = "0x181977720")]
	internal unsafe void InternalInitialize(char* charStart, char* charEnd, System.Text.EncoderNLS encoder, bool setEncoder)
	{
	}

	[Token(Token = "0x6001618")]
	[Address(RVA = "0x19776E0", Offset = "0x1975CE0", VA = "0x1819776E0")]
	internal char InternalGetNextChar()
	{
		return default(char);
	}

	[Token(Token = "0x6001619")]
	[Address(RVA = "0x1977550", Offset = "0x1975B50", VA = "0x181977550", Slot = "10")]
	internal unsafe virtual bool InternalFallback(char ch, ref char* chars)
	{
		return default(bool);
	}

	[Token(Token = "0x600161A")]
	[Address(RVA = "0x19777B0", Offset = "0x1975DB0", VA = "0x1819777B0")]
	internal void ThrowLastCharRecursive(int charRecursive)
	{
	}

	[Token(Token = "0x600161B")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected EncoderFallbackBuffer()
	{
	}
}
