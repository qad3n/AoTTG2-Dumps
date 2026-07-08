using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x2000272")]
internal class DecoderNLS : Decoder
{
	[Token(Token = "0x4000B37")]
	[FieldOffset(Offset = "0x20")]
	private Encoding _encoding;

	[Token(Token = "0x4000B38")]
	[FieldOffset(Offset = "0x28")]
	private bool _mustFlush;

	[Token(Token = "0x4000B39")]
	[FieldOffset(Offset = "0x29")]
	internal bool _throwOnOverflow;

	[Token(Token = "0x4000B3A")]
	[FieldOffset(Offset = "0x2C")]
	internal int _bytesUsed;

	[Token(Token = "0x1700021B")]
	public bool MustFlush
	{
		[Token(Token = "0x6001565")]
		[Address(RVA = "0x506D7B0", Offset = "0x506D7B0", VA = "0x506D7B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700021C")]
	internal virtual bool HasState
	{
		[Token(Token = "0x6001566")]
		[Address(RVA = "0x506D7C0", Offset = "0x506D7C0", VA = "0x506D7C0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600155B")]
	[Address(RVA = "0x506B080", Offset = "0x506B080", VA = "0x506B080")]
	internal DecoderNLS(Encoding encoding)
	{
	}

	[Token(Token = "0x600155C")]
	[Address(RVA = "0x506CC70", Offset = "0x506CC70", VA = "0x506CC70", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x600155D")]
	[Address(RVA = "0x506CC90", Offset = "0x506CC90", VA = "0x506CC90", Slot = "5")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600155E")]
	[Address(RVA = "0x506CCB0", Offset = "0x506CCB0", VA = "0x506CCB0", Slot = "6")]
	public override int GetCharCount(byte[] bytes, int index, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x600155F")]
	[Address(RVA = "0x506CE70", Offset = "0x506CE70", VA = "0x506CE70", Slot = "7")]
	public unsafe override int GetCharCount(byte* bytes, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x6001560")]
	[Address(RVA = "0x506CF60", Offset = "0x506CF60", VA = "0x506CF60", Slot = "8")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001561")]
	[Address(RVA = "0x506CF80", Offset = "0x506CF80", VA = "0x506CF80", Slot = "9")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x6001562")]
	[Address(RVA = "0x506D230", Offset = "0x506D230", VA = "0x506D230", Slot = "10")]
	public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x6001563")]
	[Address(RVA = "0x506D340", Offset = "0x506D340", VA = "0x506D340", Slot = "12")]
	public override void Convert(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, int charCount, bool flush, out int bytesUsed, out int charsUsed, out bool completed)
	{
	}

	[Token(Token = "0x6001564")]
	[Address(RVA = "0x506D600", Offset = "0x506D600", VA = "0x506D600", Slot = "13")]
	public unsafe override void Convert(byte* bytes, int byteCount, char* chars, int charCount, bool flush, out int bytesUsed, out int charsUsed, out bool completed)
	{
	}

	[Token(Token = "0x6001567")]
	[Address(RVA = "0x506D7D0", Offset = "0x506D7D0", VA = "0x506D7D0")]
	internal void ClearMustFlush()
	{
	}
}
