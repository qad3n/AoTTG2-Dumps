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
[Token(Token = "0x2000280")]
internal abstract class EncodingNLS : Encoding
{
	[Token(Token = "0x60015CC")]
	[Address(RVA = "0x3B004F0", Offset = "0x3B004F0", VA = "0x3B004F0")]
	protected EncodingNLS(int codePage)
	{
	}

	[Token(Token = "0x60015CD")]
	[Address(RVA = "0x3B00500", Offset = "0x3B00500", VA = "0x3B00500", Slot = "12")]
	public override int GetByteCount(char[] chars, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60015CE")]
	[Address(RVA = "0x3B00640", Offset = "0x3B00640", VA = "0x3B00640", Slot = "11")]
	public override int GetByteCount(string s)
	{
		return default(int);
	}

	[Token(Token = "0x60015CF")]
	[Address(RVA = "0x3B006D0", Offset = "0x3B006D0", VA = "0x3B006D0", Slot = "13")]
	public unsafe override int GetByteCount(char* chars, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60015D0")]
	[Address(RVA = "0x3B007A0", Offset = "0x3B007A0", VA = "0x3B007A0", Slot = "19")]
	public override int GetBytes(string s, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60015D1")]
	[Address(RVA = "0x3B00A10", Offset = "0x3B00A10", VA = "0x3B00A10", Slot = "17")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60015D2")]
	[Address(RVA = "0x3B00C90", Offset = "0x3B00C90", VA = "0x3B00C90", Slot = "21")]
	public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x60015D3")]
	[Address(RVA = "0x3B00D80", Offset = "0x3B00D80", VA = "0x3B00D80", Slot = "22")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60015D4")]
	[Address(RVA = "0x3B00EC0", Offset = "0x3B00EC0", VA = "0x3B00EC0", Slot = "23")]
	public unsafe override int GetCharCount(byte* bytes, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60015D5")]
	[Address(RVA = "0x3B00F90", Offset = "0x3B00F90", VA = "0x3B00F90", Slot = "26")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60015D6")]
	[Address(RVA = "0x3B01200", Offset = "0x3B01200", VA = "0x3B01200", Slot = "27")]
	public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x60015D7")]
	[Address(RVA = "0x3B012F0", Offset = "0x3B012F0", VA = "0x3B012F0", Slot = "36")]
	public override string GetString(byte[] bytes, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x60015D8")]
	[Address(RVA = "0x3B01440", Offset = "0x3B01440", VA = "0x3B01440", Slot = "31")]
	public override Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x60015D9")]
	[Address(RVA = "0x3B01490", Offset = "0x3B01490", VA = "0x3B01490", Slot = "32")]
	public override Encoder GetEncoder()
	{
		return null;
	}
}
