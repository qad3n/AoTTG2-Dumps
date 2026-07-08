using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x2000291")]
public class UnicodeEncoding : Encoding
{
	[Serializable]
	[Token(Token = "0x2000292")]
	private sealed class Decoder : System.Text.DecoderNLS
	{
		[Token(Token = "0x4000B9A")]
		[FieldOffset(Offset = "0x30")]
		internal int lastByte;

		[Token(Token = "0x4000B9B")]
		[FieldOffset(Offset = "0x34")]
		internal char lastChar;

		[Token(Token = "0x17000242")]
		internal override bool HasState
		{
			[Token(Token = "0x60016C3")]
			[Address(RVA = "0x4E2DEB0", Offset = "0x4E2DEB0", VA = "0x4E2DEB0", Slot = "14")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016C1")]
		[Address(RVA = "0x4E2D670", Offset = "0x4E2D670", VA = "0x4E2D670")]
		public Decoder(UnicodeEncoding encoding)
		{
		}

		[Token(Token = "0x60016C2")]
		[Address(RVA = "0x4E2DE80", Offset = "0x4E2DE80", VA = "0x4E2DE80", Slot = "4")]
		public override void Reset()
		{
		}
	}

	[Token(Token = "0x4000B92")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly UnicodeEncoding s_bigEndianDefault;

	[Token(Token = "0x4000B93")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly UnicodeEncoding s_littleEndianDefault;

	[Token(Token = "0x4000B94")]
	[FieldOffset(Offset = "0x10")]
	private static readonly byte[] s_bigEndianPreamble;

	[Token(Token = "0x4000B95")]
	[FieldOffset(Offset = "0x18")]
	private static readonly byte[] s_littleEndianPreamble;

	[Token(Token = "0x4000B96")]
	[FieldOffset(Offset = "0x38")]
	internal bool isThrowException;

	[Token(Token = "0x4000B97")]
	[FieldOffset(Offset = "0x39")]
	internal bool bigEndian;

	[Token(Token = "0x4000B98")]
	[FieldOffset(Offset = "0x3A")]
	internal bool byteOrderMark;

	[Token(Token = "0x4000B99")]
	[FieldOffset(Offset = "0x20")]
	private static readonly ulong highLowPatternMask;

	[Token(Token = "0x17000241")]
	public override ReadOnlySpan<byte> Preamble
	{
		[Token(Token = "0x60016BB")]
		[Address(RVA = "0x4E2D7B0", Offset = "0x4E2D7B0", VA = "0x4E2D7B0", Slot = "7")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x60016A5")]
	[Address(RVA = "0x4E29B80", Offset = "0x4E29B80", VA = "0x4E29B80")]
	public UnicodeEncoding()
	{
	}

	[Token(Token = "0x60016A6")]
	[Address(RVA = "0x4E29BC0", Offset = "0x4E29BC0", VA = "0x4E29BC0")]
	public UnicodeEncoding(bool bigEndian, bool byteOrderMark)
	{
	}

	[Token(Token = "0x60016A7")]
	[Address(RVA = "0x4E29BF0", Offset = "0x4E29BF0", VA = "0x4E29BF0")]
	public UnicodeEncoding(bool bigEndian, bool byteOrderMark, bool throwOnInvalidBytes)
	{
	}

	[Token(Token = "0x60016A8")]
	[Address(RVA = "0x4E29CD0", Offset = "0x4E29CD0", VA = "0x4E29CD0", Slot = "5")]
	internal override void SetDefaultFallbacks()
	{
	}

	[Token(Token = "0x60016A9")]
	[Address(RVA = "0x4E29DC0", Offset = "0x4E29DC0", VA = "0x4E29DC0", Slot = "12")]
	public override int GetByteCount(char[] chars, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016AA")]
	[Address(RVA = "0x4E29F00", Offset = "0x4E29F00", VA = "0x4E29F00", Slot = "11")]
	public override int GetByteCount(string s)
	{
		return default(int);
	}

	[Token(Token = "0x60016AB")]
	[Address(RVA = "0x4E29F90", Offset = "0x4E29F90", VA = "0x4E29F90", Slot = "13")]
	[CLSCompliant(false)]
	public unsafe override int GetByteCount(char* chars, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016AC")]
	[Address(RVA = "0x4E2A060", Offset = "0x4E2A060", VA = "0x4E2A060", Slot = "19")]
	public override int GetBytes(string s, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60016AD")]
	[Address(RVA = "0x4E2A2D0", Offset = "0x4E2A2D0", VA = "0x4E2A2D0", Slot = "17")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60016AE")]
	[Address(RVA = "0x4E2A550", Offset = "0x4E2A550", VA = "0x4E2A550", Slot = "21")]
	[CLSCompliant(false)]
	public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x60016AF")]
	[Address(RVA = "0x4E2A640", Offset = "0x4E2A640", VA = "0x4E2A640", Slot = "22")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016B0")]
	[Address(RVA = "0x4E2A780", Offset = "0x4E2A780", VA = "0x4E2A780", Slot = "23")]
	[CLSCompliant(false)]
	public unsafe override int GetCharCount(byte* bytes, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016B1")]
	[Address(RVA = "0x4E2A850", Offset = "0x4E2A850", VA = "0x4E2A850", Slot = "26")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60016B2")]
	[Address(RVA = "0x4E2AAC0", Offset = "0x4E2AAC0", VA = "0x4E2AAC0", Slot = "27")]
	[CLSCompliant(false)]
	public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x60016B3")]
	[Address(RVA = "0x4E2ABB0", Offset = "0x4E2ABB0", VA = "0x4E2ABB0", Slot = "36")]
	public override string GetString(byte[] bytes, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x60016B4")]
	[Address(RVA = "0x4E2AD00", Offset = "0x4E2AD00", VA = "0x4E2AD00", Slot = "14")]
	internal unsafe override int GetByteCount(char* chars, int count, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016B5")]
	[Address(RVA = "0x4E2B570", Offset = "0x4E2B570", VA = "0x4E2B570", Slot = "20")]
	internal unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016B6")]
	[Address(RVA = "0x4E2BE30", Offset = "0x4E2BE30", VA = "0x4E2BE30", Slot = "24")]
	internal unsafe override int GetCharCount(byte* bytes, int count, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016B7")]
	[Address(RVA = "0x4E2C820", Offset = "0x4E2C820", VA = "0x4E2C820", Slot = "28")]
	internal unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016B8")]
	[Address(RVA = "0x4E2D5C0", Offset = "0x4E2D5C0", VA = "0x4E2D5C0", Slot = "32")]
	public override Encoder GetEncoder()
	{
		return null;
	}

	[Token(Token = "0x60016B9")]
	[Address(RVA = "0x4E2D610", Offset = "0x4E2D610", VA = "0x4E2D610", Slot = "31")]
	public override System.Text.Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x60016BA")]
	[Address(RVA = "0x4E2D680", Offset = "0x4E2D680", VA = "0x4E2D680", Slot = "6")]
	public override byte[] GetPreamble()
	{
		return null;
	}

	[Token(Token = "0x60016BC")]
	[Address(RVA = "0x4E2D950", Offset = "0x4E2D950", VA = "0x4E2D950", Slot = "33")]
	public override int GetMaxByteCount(int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x60016BD")]
	[Address(RVA = "0x4E2DA50", Offset = "0x4E2DA50", VA = "0x4E2DA50", Slot = "34")]
	public override int GetMaxCharCount(int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x60016BE")]
	[Address(RVA = "0x4E2DB50", Offset = "0x4E2DB50", VA = "0x4E2DB50", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60016BF")]
	[Address(RVA = "0x4E2DC60", Offset = "0x4E2DC60", VA = "0x4E2DC60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
