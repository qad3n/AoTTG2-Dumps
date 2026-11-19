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
[Token(Token = "0x2000270")]
public class ASCIIEncoding : Encoding
{
	[Token(Token = "0x2000271")]
	internal sealed class ASCIIEncodingSealed : ASCIIEncoding
	{
		[Token(Token = "0x6001566")]
		[Address(RVA = "0x5551B90", Offset = "0x5550B90", VA = "0x5551B90")]
		public ASCIIEncodingSealed()
		{
		}
	}

	[Token(Token = "0x4000ACD")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly ASCIIEncodingSealed s_default;

	[Token(Token = "0x6001550")]
	[Address(RVA = "0x554F2B0", Offset = "0x554E2B0", VA = "0x554F2B0")]
	public ASCIIEncoding()
	{
	}

	[Token(Token = "0x6001551")]
	[Address(RVA = "0x554F2C0", Offset = "0x554E2C0", VA = "0x554F2C0", Slot = "5")]
	internal override void SetDefaultFallbacks()
	{
	}

	[Token(Token = "0x6001552")]
	[Address(RVA = "0x554F3C0", Offset = "0x554E3C0", VA = "0x554F3C0", Slot = "12")]
	public override int GetByteCount(char[] chars, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001553")]
	[Address(RVA = "0x554F510", Offset = "0x554E510", VA = "0x554F510", Slot = "11")]
	public override int GetByteCount(string chars)
	{
		return default(int);
	}

	[Token(Token = "0x6001554")]
	[Address(RVA = "0x554F5A0", Offset = "0x554E5A0", VA = "0x554F5A0", Slot = "13")]
	[CLSCompliant(false)]
	public unsafe override int GetByteCount(char* chars, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001555")]
	[Address(RVA = "0x554F670", Offset = "0x554E670", VA = "0x554F670", Slot = "19")]
	public override int GetBytes(string chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001556")]
	[Address(RVA = "0x554F8C0", Offset = "0x554E8C0", VA = "0x554F8C0", Slot = "17")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001557")]
	[Address(RVA = "0x554FB40", Offset = "0x554EB40", VA = "0x554FB40", Slot = "21")]
	[CLSCompliant(false)]
	public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001558")]
	[Address(RVA = "0x554FC30", Offset = "0x554EC30", VA = "0x554FC30", Slot = "22")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001559")]
	[Address(RVA = "0x554FD80", Offset = "0x554ED80", VA = "0x554FD80", Slot = "23")]
	[CLSCompliant(false)]
	public unsafe override int GetCharCount(byte* bytes, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600155A")]
	[Address(RVA = "0x554FE50", Offset = "0x554EE50", VA = "0x554FE50", Slot = "26")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600155B")]
	[Address(RVA = "0x55500C0", Offset = "0x554F0C0", VA = "0x55500C0", Slot = "27")]
	[CLSCompliant(false)]
	public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x600155C")]
	[Address(RVA = "0x55501B0", Offset = "0x554F1B0", VA = "0x55501B0", Slot = "36")]
	public override string GetString(byte[] bytes, int byteIndex, int byteCount)
	{
		return null;
	}

	[Token(Token = "0x600155D")]
	[Address(RVA = "0x5550310", Offset = "0x554F310", VA = "0x5550310", Slot = "14")]
	internal unsafe override int GetByteCount(char* chars, int charCount, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x600155E")]
	[Address(RVA = "0x5550870", Offset = "0x554F870", VA = "0x5550870", Slot = "20")]
	internal unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x600155F")]
	[Address(RVA = "0x5550F00", Offset = "0x554FF00", VA = "0x5550F00", Slot = "24")]
	internal unsafe override int GetCharCount(byte* bytes, int count, System.Text.DecoderNLS decoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001560")]
	[Address(RVA = "0x5551260", Offset = "0x5550260", VA = "0x5551260", Slot = "28")]
	internal unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, System.Text.DecoderNLS decoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001561")]
	[Address(RVA = "0x55517C0", Offset = "0x55507C0", VA = "0x55517C0", Slot = "33")]
	public override int GetMaxByteCount(int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001562")]
	[Address(RVA = "0x55518B0", Offset = "0x55508B0", VA = "0x55518B0", Slot = "34")]
	public override int GetMaxCharCount(int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001563")]
	[Address(RVA = "0x55519A0", Offset = "0x55509A0", VA = "0x55519A0", Slot = "31")]
	public override Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x6001564")]
	[Address(RVA = "0x5551A90", Offset = "0x5550A90", VA = "0x5551A90", Slot = "32")]
	public override Encoder GetEncoder()
	{
		return null;
	}
}
