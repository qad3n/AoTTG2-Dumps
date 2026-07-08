using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x2000280")]
internal abstract class EncodingNLS : Encoding
{
	[Token(Token = "0x60015CC")]
	[Address(RVA = "0x4E1A9D0", Offset = "0x4E1A9D0", VA = "0x4E1A9D0")]
	protected EncodingNLS(int codePage)
	{
	}

	[Token(Token = "0x60015CD")]
	[Address(RVA = "0x4E1A9E0", Offset = "0x4E1A9E0", VA = "0x4E1A9E0", Slot = "12")]
	public override int GetByteCount(char[] chars, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60015CE")]
	[Address(RVA = "0x4E1AB20", Offset = "0x4E1AB20", VA = "0x4E1AB20", Slot = "11")]
	public override int GetByteCount(string s)
	{
		return default(int);
	}

	[Token(Token = "0x60015CF")]
	[Address(RVA = "0x4E1ABB0", Offset = "0x4E1ABB0", VA = "0x4E1ABB0", Slot = "13")]
	public unsafe override int GetByteCount(char* chars, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60015D0")]
	[Address(RVA = "0x4E1AC80", Offset = "0x4E1AC80", VA = "0x4E1AC80", Slot = "19")]
	public override int GetBytes(string s, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60015D1")]
	[Address(RVA = "0x4E1AEF0", Offset = "0x4E1AEF0", VA = "0x4E1AEF0", Slot = "17")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60015D2")]
	[Address(RVA = "0x4E1B170", Offset = "0x4E1B170", VA = "0x4E1B170", Slot = "21")]
	public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x60015D3")]
	[Address(RVA = "0x4E1B260", Offset = "0x4E1B260", VA = "0x4E1B260", Slot = "22")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60015D4")]
	[Address(RVA = "0x4E1B3A0", Offset = "0x4E1B3A0", VA = "0x4E1B3A0", Slot = "23")]
	public unsafe override int GetCharCount(byte* bytes, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60015D5")]
	[Address(RVA = "0x4E1B470", Offset = "0x4E1B470", VA = "0x4E1B470", Slot = "26")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60015D6")]
	[Address(RVA = "0x4E1B6E0", Offset = "0x4E1B6E0", VA = "0x4E1B6E0", Slot = "27")]
	public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x60015D7")]
	[Address(RVA = "0x4E1B7D0", Offset = "0x4E1B7D0", VA = "0x4E1B7D0", Slot = "36")]
	public override string GetString(byte[] bytes, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x60015D8")]
	[Address(RVA = "0x4E1B920", Offset = "0x4E1B920", VA = "0x4E1B920", Slot = "31")]
	public override Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x60015D9")]
	[Address(RVA = "0x4E1B970", Offset = "0x4E1B970", VA = "0x4E1B970", Slot = "32")]
	public override Encoder GetEncoder()
	{
		return null;
	}
}
