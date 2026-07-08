using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x200026A")]
public abstract class Decoder
{
	[Token(Token = "0x4000B27")]
	[FieldOffset(Offset = "0x10")]
	internal DecoderFallback _fallback;

	[Token(Token = "0x4000B28")]
	[FieldOffset(Offset = "0x18")]
	internal DecoderFallbackBuffer _fallbackBuffer;

	[Token(Token = "0x1700020F")]
	public DecoderFallback Fallback
	{
		[Token(Token = "0x6001525")]
		[Address(RVA = "0x506B240", Offset = "0x506B240", VA = "0x506B240")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000210")]
	public DecoderFallbackBuffer FallbackBuffer
	{
		[Token(Token = "0x6001526")]
		[Address(RVA = "0x506A8C0", Offset = "0x506A8C0", VA = "0x506A8C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000211")]
	internal bool InternalHasFallbackBuffer
	{
		[Token(Token = "0x6001527")]
		[Address(RVA = "0x506B250", Offset = "0x506B250", VA = "0x506B250")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001524")]
	[Address(RVA = "0x506B230", Offset = "0x506B230", VA = "0x506B230")]
	protected Decoder()
	{
	}

	[Token(Token = "0x6001528")]
	[Address(RVA = "0x506B260", Offset = "0x506B260", VA = "0x506B260", Slot = "4")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6001529")]
	public abstract int GetCharCount(byte[] bytes, int index, int count);

	[Token(Token = "0x600152A")]
	[Address(RVA = "0x506B3C0", Offset = "0x506B3C0", VA = "0x506B3C0", Slot = "6")]
	public virtual int GetCharCount(byte[] bytes, int index, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x600152B")]
	[Address(RVA = "0x506B3E0", Offset = "0x506B3E0", VA = "0x506B3E0", Slot = "7")]
	[CLSCompliant(false)]
	public unsafe virtual int GetCharCount(byte* bytes, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x600152C")]
	public abstract int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex);

	[Token(Token = "0x600152D")]
	[Address(RVA = "0x506B540", Offset = "0x506B540", VA = "0x506B540", Slot = "9")]
	public virtual int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x600152E")]
	[Address(RVA = "0x506B560", Offset = "0x506B560", VA = "0x506B560", Slot = "10")]
	[CLSCompliant(false)]
	public unsafe virtual int GetChars(byte* bytes, int byteCount, char* chars, int charCount, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x600152F")]
	[Address(RVA = "0x506B770", Offset = "0x506B770", VA = "0x506B770", Slot = "11")]
	public virtual int GetChars(ReadOnlySpan<byte> bytes, Span<char> chars, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x6001530")]
	[Address(RVA = "0x506B850", Offset = "0x506B850", VA = "0x506B850", Slot = "12")]
	public virtual void Convert(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, int charCount, bool flush, out int bytesUsed, out int charsUsed, out bool completed)
	{
	}

	[Token(Token = "0x6001531")]
	[Address(RVA = "0x506BB50", Offset = "0x506BB50", VA = "0x506BB50", Slot = "13")]
	[CLSCompliant(false)]
	public unsafe virtual void Convert(byte* bytes, int byteCount, char* chars, int charCount, bool flush, out int bytesUsed, out int charsUsed, out bool completed)
	{
	}
}
