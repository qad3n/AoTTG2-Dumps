// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.ASCIIEncoding
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x2000298")]
public class ASCIIEncoding : Encoding
{
	[Token(Token = "0x2000299")]
	internal sealed class ASCIIEncodingSealed : ASCIIEncoding
	{
		[Token(Token = "0x600158F")]
		[Address(RVA = "0x1BAA590", Offset = "0x1BA8B90", VA = "0x181BAA590")]
		public ASCIIEncodingSealed()
		{
		}
	}

	[Token(Token = "0x4000B6F")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly ASCIIEncodingSealed s_default;

	[Token(Token = "0x6001579")]
	[Address(RVA = "0x1BAC8A0", Offset = "0x1BAAEA0", VA = "0x181BAC8A0")]
	public ASCIIEncoding()
	{
	}

	[Token(Token = "0x600157A")]
	[Address(RVA = "0x1BAC7B0", Offset = "0x1BAADB0", VA = "0x181BAC7B0", Slot = "5")]
	internal override void SetDefaultFallbacks()
	{
	}

	[Token(Token = "0x600157B")]
	[Address(RVA = "0x1BAA9F0", Offset = "0x1BA8FF0", VA = "0x181BAA9F0", Slot = "12")]
	public override int GetByteCount(char[] chars, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600157C")]
	[Address(RVA = "0x1BAABA0", Offset = "0x1BA91A0", VA = "0x181BAABA0", Slot = "11")]
	public override int GetByteCount(string chars)
	{
		return default(int);
	}

	[Token(Token = "0x600157D")]
	[Address(RVA = "0x1BAA5E0", Offset = "0x1BA8BE0", VA = "0x181BAA5E0", Slot = "13")]
	[CLSCompliant(false)]
	public unsafe override int GetByteCount(char* chars, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600157E")]
	[Address(RVA = "0x1BAB500", Offset = "0x1BA9B00", VA = "0x181BAB500", Slot = "19")]
	public override int GetBytes(string chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600157F")]
	[Address(RVA = "0x1BAB240", Offset = "0x1BA9840", VA = "0x181BAB240", Slot = "17")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001580")]
	[Address(RVA = "0x1BAB110", Offset = "0x1BA9710", VA = "0x181BAB110", Slot = "21")]
	[CLSCompliant(false)]
	public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001581")]
	[Address(RVA = "0x1BAB7D0", Offset = "0x1BA9DD0", VA = "0x181BAB7D0", Slot = "22")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001582")]
	[Address(RVA = "0x1BAB980", Offset = "0x1BA9F80", VA = "0x181BAB980", Slot = "23")]
	[CLSCompliant(false)]
	public unsafe override int GetCharCount(byte* bytes, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001583")]
	[Address(RVA = "0x1BAC000", Offset = "0x1BAA600", VA = "0x181BAC000", Slot = "26")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001584")]
	[Address(RVA = "0x1BABC00", Offset = "0x1BAA200", VA = "0x181BABC00", Slot = "27")]
	[CLSCompliant(false)]
	public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001585")]
	[Address(RVA = "0x1BAC600", Offset = "0x1BAAC00", VA = "0x181BAC600", Slot = "35")]
	public override string GetString(byte[] bytes, int byteIndex, int byteCount)
	{
		return null;
	}

	[Token(Token = "0x6001586")]
	[Address(RVA = "0x1BAA6D0", Offset = "0x1BA8CD0", VA = "0x181BAA6D0", Slot = "14")]
	internal unsafe override int GetByteCount(char* chars, int charCount, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001587")]
	[Address(RVA = "0x1BAAC40", Offset = "0x1BA9240", VA = "0x181BAAC40", Slot = "20")]
	internal unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001588")]
	[Address(RVA = "0x1BABA70", Offset = "0x1BAA070", VA = "0x181BABA70", Slot = "24")]
	internal unsafe override int GetCharCount(byte* bytes, int count, System.Text.DecoderNLS decoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001589")]
	[Address(RVA = "0x1BABD30", Offset = "0x1BAA330", VA = "0x181BABD30", Slot = "28")]
	internal unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, System.Text.DecoderNLS decoder)
	{
		return default(int);
	}

	[Token(Token = "0x600158A")]
	[Address(RVA = "0x1BAC380", Offset = "0x1BAA980", VA = "0x181BAC380", Slot = "32")]
	public override int GetMaxByteCount(int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x600158B")]
	[Address(RVA = "0x1BAC4C0", Offset = "0x1BAAAC0", VA = "0x181BAC4C0", Slot = "33")]
	public override int GetMaxCharCount(int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x600158C")]
	[Address(RVA = "0x1BAC2C0", Offset = "0x1BAA8C0", VA = "0x181BAC2C0", Slot = "30")]
	public override Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x600158D")]
	[Address(RVA = "0x1BAC320", Offset = "0x1BAA920", VA = "0x181BAC320", Slot = "31")]
	public override Encoder GetEncoder()
	{
		return null;
	}
}
