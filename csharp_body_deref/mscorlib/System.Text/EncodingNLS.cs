// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.EncodingNLS
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x2000288")]
internal abstract class EncodingNLS : Encoding
{
	[Token(Token = "0x600160F")]
	[Address(RVA = "0x530B300", Offset = "0x530A300", VA = "0x530B300")]
	protected EncodingNLS(int codePage)
	{
	}

	[Token(Token = "0x6001610")]
	[Address(RVA = "0x530B310", Offset = "0x530A310", VA = "0x530B310", Slot = "12")]
	public override int GetByteCount(char[] chars, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001611")]
	[Address(RVA = "0x530B460", Offset = "0x530A460", VA = "0x530B460", Slot = "11")]
	public override int GetByteCount(string s)
	{
		return default(int);
	}

	[Token(Token = "0x6001612")]
	[Address(RVA = "0x530B4F0", Offset = "0x530A4F0", VA = "0x530B4F0", Slot = "13")]
	public unsafe override int GetByteCount(char* chars, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001613")]
	[Address(RVA = "0x530B5C0", Offset = "0x530A5C0", VA = "0x530B5C0", Slot = "19")]
	public override int GetBytes(string s, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001614")]
	[Address(RVA = "0x530B810", Offset = "0x530A810", VA = "0x530B810", Slot = "17")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001615")]
	[Address(RVA = "0x530BA90", Offset = "0x530AA90", VA = "0x530BA90", Slot = "21")]
	public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001616")]
	[Address(RVA = "0x530BB80", Offset = "0x530AB80", VA = "0x530BB80", Slot = "22")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001617")]
	[Address(RVA = "0x530BCD0", Offset = "0x530ACD0", VA = "0x530BCD0", Slot = "23")]
	public unsafe override int GetCharCount(byte* bytes, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001618")]
	[Address(RVA = "0x530BDA0", Offset = "0x530ADA0", VA = "0x530BDA0", Slot = "26")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001619")]
	[Address(RVA = "0x530C010", Offset = "0x530B010", VA = "0x530C010", Slot = "27")]
	public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x600161A")]
	[Address(RVA = "0x530C100", Offset = "0x530B100", VA = "0x530C100", Slot = "36")]
	public override string GetString(byte[] bytes, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x600161B")]
	[Address(RVA = "0x530C260", Offset = "0x530B260", VA = "0x530C260", Slot = "31")]
	public override Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x600161C")]
	[Address(RVA = "0x530C2B0", Offset = "0x530B2B0", VA = "0x530C2B0", Slot = "32")]
	public override Encoder GetEncoder()
	{
		return null;
	}
}
