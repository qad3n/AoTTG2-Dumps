using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x2000268")]
public class ASCIIEncoding : Encoding
{
	[Token(Token = "0x2000269")]
	internal sealed class ASCIIEncodingSealed : ASCIIEncoding
	{
		[Token(Token = "0x6001523")]
		[Address(RVA = "0x506B1E0", Offset = "0x506B1E0", VA = "0x506B1E0")]
		public ASCIIEncodingSealed()
		{
		}
	}

	[Token(Token = "0x4000B26")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly ASCIIEncodingSealed s_default;

	[Token(Token = "0x600150D")]
	[Address(RVA = "0x5068AB0", Offset = "0x5068AB0", VA = "0x5068AB0")]
	public ASCIIEncoding()
	{
	}

	[Token(Token = "0x600150E")]
	[Address(RVA = "0x5068AC0", Offset = "0x5068AC0", VA = "0x5068AC0", Slot = "5")]
	internal override void SetDefaultFallbacks()
	{
	}

	[Token(Token = "0x600150F")]
	[Address(RVA = "0x5068BC0", Offset = "0x5068BC0", VA = "0x5068BC0", Slot = "12")]
	public override int GetByteCount(char[] chars, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001510")]
	[Address(RVA = "0x5068D00", Offset = "0x5068D00", VA = "0x5068D00", Slot = "11")]
	public override int GetByteCount(string chars)
	{
		return default(int);
	}

	[Token(Token = "0x6001511")]
	[Address(RVA = "0x5068D90", Offset = "0x5068D90", VA = "0x5068D90", Slot = "13")]
	[CLSCompliant(false)]
	public unsafe override int GetByteCount(char* chars, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001512")]
	[Address(RVA = "0x5068E60", Offset = "0x5068E60", VA = "0x5068E60", Slot = "19")]
	public override int GetBytes(string chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001513")]
	[Address(RVA = "0x50690D0", Offset = "0x50690D0", VA = "0x50690D0", Slot = "17")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001514")]
	[Address(RVA = "0x5069350", Offset = "0x5069350", VA = "0x5069350", Slot = "21")]
	[CLSCompliant(false)]
	public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001515")]
	[Address(RVA = "0x5069440", Offset = "0x5069440", VA = "0x5069440", Slot = "22")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001516")]
	[Address(RVA = "0x5069580", Offset = "0x5069580", VA = "0x5069580", Slot = "23")]
	[CLSCompliant(false)]
	public unsafe override int GetCharCount(byte* bytes, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001517")]
	[Address(RVA = "0x5069650", Offset = "0x5069650", VA = "0x5069650", Slot = "26")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001518")]
	[Address(RVA = "0x50698C0", Offset = "0x50698C0", VA = "0x50698C0", Slot = "27")]
	[CLSCompliant(false)]
	public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001519")]
	[Address(RVA = "0x50699B0", Offset = "0x50699B0", VA = "0x50699B0", Slot = "36")]
	public override string GetString(byte[] bytes, int byteIndex, int byteCount)
	{
		return null;
	}

	[Token(Token = "0x600151A")]
	[Address(RVA = "0x5069B00", Offset = "0x5069B00", VA = "0x5069B00", Slot = "14")]
	internal unsafe override int GetByteCount(char* chars, int charCount, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x600151B")]
	[Address(RVA = "0x506A000", Offset = "0x506A000", VA = "0x506A000", Slot = "20")]
	internal unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x600151C")]
	[Address(RVA = "0x506A630", Offset = "0x506A630", VA = "0x506A630", Slot = "24")]
	internal unsafe override int GetCharCount(byte* bytes, int count, System.Text.DecoderNLS decoder)
	{
		return default(int);
	}

	[Token(Token = "0x600151D")]
	[Address(RVA = "0x506A940", Offset = "0x506A940", VA = "0x506A940", Slot = "28")]
	internal unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, System.Text.DecoderNLS decoder)
	{
		return default(int);
	}

	[Token(Token = "0x600151E")]
	[Address(RVA = "0x506AE10", Offset = "0x506AE10", VA = "0x506AE10", Slot = "33")]
	public override int GetMaxByteCount(int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x600151F")]
	[Address(RVA = "0x506AF00", Offset = "0x506AF00", VA = "0x506AF00", Slot = "34")]
	public override int GetMaxCharCount(int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001520")]
	[Address(RVA = "0x506AFF0", Offset = "0x506AFF0", VA = "0x506AFF0", Slot = "31")]
	public override Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x6001521")]
	[Address(RVA = "0x506B0E0", Offset = "0x506B0E0", VA = "0x506B0E0", Slot = "32")]
	public override Encoder GetEncoder()
	{
		return null;
	}
}
