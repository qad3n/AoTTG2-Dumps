using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x200027D")]
internal class EncoderNLS : Encoder
{
	[Token(Token = "0x4000B56")]
	[FieldOffset(Offset = "0x20")]
	internal char _charLeftOver;

	[Token(Token = "0x4000B57")]
	[FieldOffset(Offset = "0x28")]
	private Encoding _encoding;

	[Token(Token = "0x4000B58")]
	[FieldOffset(Offset = "0x30")]
	private bool _mustFlush;

	[Token(Token = "0x4000B59")]
	[FieldOffset(Offset = "0x31")]
	internal bool _throwOnOverflow;

	[Token(Token = "0x4000B5A")]
	[FieldOffset(Offset = "0x34")]
	internal int _charsUsed;

	[Token(Token = "0x1700022C")]
	public Encoding Encoding
	{
		[Token(Token = "0x60015B8")]
		[Address(RVA = "0x4E1A150", Offset = "0x4E1A150", VA = "0x4E1A150")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022D")]
	public bool MustFlush
	{
		[Token(Token = "0x60015B9")]
		[Address(RVA = "0x4E1A160", Offset = "0x4E1A160", VA = "0x4E1A160")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700022E")]
	internal virtual bool HasState
	{
		[Token(Token = "0x60015BA")]
		[Address(RVA = "0x4E1A170", Offset = "0x4E1A170", VA = "0x4E1A170", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60015B0")]
	[Address(RVA = "0x4E195E0", Offset = "0x4E195E0", VA = "0x4E195E0")]
	internal EncoderNLS(Encoding encoding)
	{
	}

	[Token(Token = "0x60015B1")]
	[Address(RVA = "0x4E19640", Offset = "0x4E19640", VA = "0x4E19640", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x60015B2")]
	[Address(RVA = "0x4E19670", Offset = "0x4E19670", VA = "0x4E19670", Slot = "5")]
	public override int GetByteCount(char[] chars, int index, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x60015B3")]
	[Address(RVA = "0x4E19830", Offset = "0x4E19830", VA = "0x4E19830", Slot = "6")]
	public unsafe override int GetByteCount(char* chars, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x60015B4")]
	[Address(RVA = "0x4E19920", Offset = "0x4E19920", VA = "0x4E19920", Slot = "7")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x60015B5")]
	[Address(RVA = "0x4E19BD0", Offset = "0x4E19BD0", VA = "0x4E19BD0", Slot = "8")]
	public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x60015B6")]
	[Address(RVA = "0x4E19CE0", Offset = "0x4E19CE0", VA = "0x4E19CE0", Slot = "9")]
	public override void Convert(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex, int byteCount, bool flush, out int charsUsed, out int bytesUsed, out bool completed)
	{
	}

	[Token(Token = "0x60015B7")]
	[Address(RVA = "0x4E19FA0", Offset = "0x4E19FA0", VA = "0x4E19FA0", Slot = "10")]
	public unsafe override void Convert(char* chars, int charCount, byte* bytes, int byteCount, bool flush, out int charsUsed, out int bytesUsed, out bool completed)
	{
	}

	[Token(Token = "0x60015BB")]
	[Address(RVA = "0x4E1A180", Offset = "0x4E1A180", VA = "0x4E1A180")]
	internal void ClearMustFlush()
	{
	}
}
