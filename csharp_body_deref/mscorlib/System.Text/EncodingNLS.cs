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
[Token(Token = "0x20002B0")]
internal abstract class EncodingNLS : Encoding
{
	[Token(Token = "0x6001638")]
	[Address(RVA = "0x197B1F0", Offset = "0x19797F0", VA = "0x18197B1F0")]
	protected EncodingNLS(int codePage)
	{
	}

	[Token(Token = "0x6001639")]
	[Address(RVA = "0x197A000", Offset = "0x1978600", VA = "0x18197A000", Slot = "12")]
	public override int GetByteCount(char[] chars, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600163A")]
	[Address(RVA = "0x1979E70", Offset = "0x1978470", VA = "0x181979E70", Slot = "11")]
	public override int GetByteCount(string s)
	{
		return default(int);
	}

	[Token(Token = "0x600163B")]
	[Address(RVA = "0x1979F10", Offset = "0x1978510", VA = "0x181979F10", Slot = "13")]
	public unsafe override int GetByteCount(char* chars, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600163C")]
	[Address(RVA = "0x197A1B0", Offset = "0x19787B0", VA = "0x18197A1B0", Slot = "19")]
	public override int GetBytes(string s, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600163D")]
	[Address(RVA = "0x197A5B0", Offset = "0x1978BB0", VA = "0x18197A5B0", Slot = "17")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600163E")]
	[Address(RVA = "0x197A480", Offset = "0x1978A80", VA = "0x18197A480", Slot = "21")]
	public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x600163F")]
	[Address(RVA = "0x197A870", Offset = "0x1978E70", VA = "0x18197A870", Slot = "22")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001640")]
	[Address(RVA = "0x197AA20", Offset = "0x1979020", VA = "0x18197AA20", Slot = "23")]
	public unsafe override int GetCharCount(byte* bytes, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001641")]
	[Address(RVA = "0x197AC40", Offset = "0x1979240", VA = "0x18197AC40", Slot = "26")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001642")]
	[Address(RVA = "0x197AB10", Offset = "0x1979110", VA = "0x18197AB10", Slot = "27")]
	public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001643")]
	[Address(RVA = "0x197B040", Offset = "0x1979640", VA = "0x18197B040", Slot = "35")]
	public override string GetString(byte[] bytes, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x6001644")]
	[Address(RVA = "0x197AF00", Offset = "0x1979500", VA = "0x18197AF00", Slot = "30")]
	public override Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x6001645")]
	[Address(RVA = "0x197AFA0", Offset = "0x19795A0", VA = "0x18197AFA0", Slot = "31")]
	public override Encoder GetEncoder()
	{
		return null;
	}
}
