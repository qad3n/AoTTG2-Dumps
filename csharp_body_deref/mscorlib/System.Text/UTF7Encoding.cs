using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x2000288")]
public class UTF7Encoding : Encoding
{
	[Serializable]
	[Token(Token = "0x2000289")]
	private sealed class Decoder : System.Text.DecoderNLS
	{
		[Token(Token = "0x4000B84")]
		[FieldOffset(Offset = "0x30")]
		internal int bits;

		[Token(Token = "0x4000B85")]
		[FieldOffset(Offset = "0x34")]
		internal int bitCount;

		[Token(Token = "0x4000B86")]
		[FieldOffset(Offset = "0x38")]
		internal bool firstByte;

		[Token(Token = "0x17000239")]
		internal override bool HasState
		{
			[Token(Token = "0x600166C")]
			[Address(RVA = "0x4E25A70", Offset = "0x4E25A70", VA = "0x4E25A70", Slot = "14")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600166A")]
		[Address(RVA = "0x4E25790", Offset = "0x4E25790", VA = "0x4E25790")]
		public Decoder(UTF7Encoding encoding)
		{
		}

		[Token(Token = "0x600166B")]
		[Address(RVA = "0x4E25A40", Offset = "0x4E25A40", VA = "0x4E25A40", Slot = "4")]
		public override void Reset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200028A")]
	private sealed class Encoder : System.Text.EncoderNLS
	{
		[Token(Token = "0x4000B87")]
		[FieldOffset(Offset = "0x38")]
		internal int bits;

		[Token(Token = "0x4000B88")]
		[FieldOffset(Offset = "0x3C")]
		internal int bitCount;

		[Token(Token = "0x1700023A")]
		internal override bool HasState
		{
			[Token(Token = "0x600166F")]
			[Address(RVA = "0x4E25AB0", Offset = "0x4E25AB0", VA = "0x4E25AB0", Slot = "11")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600166D")]
		[Address(RVA = "0x4E25830", Offset = "0x4E25830", VA = "0x4E25830")]
		public Encoder(UTF7Encoding encoding)
		{
		}

		[Token(Token = "0x600166E")]
		[Address(RVA = "0x4E25A80", Offset = "0x4E25A80", VA = "0x4E25A80", Slot = "4")]
		public override void Reset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200028B")]
	private sealed class DecoderUTF7Fallback : DecoderFallback
	{
		[Token(Token = "0x1700023B")]
		public override int MaxCharCount
		{
			[Token(Token = "0x6001672")]
			[Address(RVA = "0x4E25B30", Offset = "0x4E25B30", VA = "0x4E25B30", Slot = "5")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6001670")]
		[Address(RVA = "0x4E23E80", Offset = "0x4E23E80", VA = "0x4E23E80")]
		public DecoderUTF7Fallback()
		{
		}

		[Token(Token = "0x6001671")]
		[Address(RVA = "0x4E25AD0", Offset = "0x4E25AD0", VA = "0x4E25AD0", Slot = "4")]
		public override DecoderFallbackBuffer CreateFallbackBuffer()
		{
			return null;
		}

		[Token(Token = "0x6001673")]
		[Address(RVA = "0x4E25B40", Offset = "0x4E25B40", VA = "0x4E25B40", Slot = "0")]
		public override bool Equals(object value)
		{
			return default(bool);
		}

		[Token(Token = "0x6001674")]
		[Address(RVA = "0x4E25B80", Offset = "0x4E25B80", VA = "0x4E25B80", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}
	}

	[Token(Token = "0x200028C")]
	private sealed class DecoderUTF7FallbackBuffer : DecoderFallbackBuffer
	{
		[Token(Token = "0x4000B89")]
		[FieldOffset(Offset = "0x20")]
		private char cFallback;

		[Token(Token = "0x4000B8A")]
		[FieldOffset(Offset = "0x24")]
		private int iCount;

		[Token(Token = "0x4000B8B")]
		[FieldOffset(Offset = "0x28")]
		private int iSize;

		[Token(Token = "0x1700023C")]
		public override int Remaining
		{
			[Token(Token = "0x6001678")]
			[Address(RVA = "0x4E25BF0", Offset = "0x4E25BF0", VA = "0x4E25BF0", Slot = "6")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6001675")]
		[Address(RVA = "0x4E25B20", Offset = "0x4E25B20", VA = "0x4E25B20")]
		public DecoderUTF7FallbackBuffer(DecoderUTF7Fallback fallback)
		{
		}

		[Token(Token = "0x6001676")]
		[Address(RVA = "0x4E25B90", Offset = "0x4E25B90", VA = "0x4E25B90", Slot = "4")]
		public override bool Fallback(byte[] bytesUnknown, int index)
		{
			return default(bool);
		}

		[Token(Token = "0x6001677")]
		[Address(RVA = "0x4E25BD0", Offset = "0x4E25BD0", VA = "0x4E25BD0", Slot = "5")]
		public override char GetNextChar()
		{
			return default(char);
		}

		[Token(Token = "0x6001679")]
		[Address(RVA = "0x4E25C00", Offset = "0x4E25C00", VA = "0x4E25C00", Slot = "7")]
		public override void Reset()
		{
		}

		[Token(Token = "0x600167A")]
		[Address(RVA = "0x4E25C10", Offset = "0x4E25C10", VA = "0x4E25C10", Slot = "9")]
		internal unsafe override int InternalFallback(byte[] bytes, byte* pBytes)
		{
			return default(int);
		}
	}

	[Token(Token = "0x4000B7F")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly UTF7Encoding s_default;

	[Token(Token = "0x4000B80")]
	[FieldOffset(Offset = "0x38")]
	private byte[] _base64Bytes;

	[Token(Token = "0x4000B81")]
	[FieldOffset(Offset = "0x40")]
	private sbyte[] _base64Values;

	[Token(Token = "0x4000B82")]
	[FieldOffset(Offset = "0x48")]
	private bool[] _directEncode;

	[Token(Token = "0x4000B83")]
	[FieldOffset(Offset = "0x50")]
	private bool _allowOptionals;

	[Token(Token = "0x6001650")]
	[Address(RVA = "0x4E23AE0", Offset = "0x4E23AE0", VA = "0x4E23AE0")]
	public UTF7Encoding()
	{
	}

	[Token(Token = "0x6001651")]
	[Address(RVA = "0x4E23B00", Offset = "0x4E23B00", VA = "0x4E23B00")]
	public UTF7Encoding(bool allowOptionals)
	{
	}

	[Token(Token = "0x6001652")]
	[Address(RVA = "0x4E23B30", Offset = "0x4E23B30", VA = "0x4E23B30")]
	private void MakeTables()
	{
	}

	[Token(Token = "0x6001653")]
	[Address(RVA = "0x4E23DD0", Offset = "0x4E23DD0", VA = "0x4E23DD0", Slot = "5")]
	internal override void SetDefaultFallbacks()
	{
	}

	[Token(Token = "0x6001654")]
	[Address(RVA = "0x4E23E90", Offset = "0x4E23E90", VA = "0x4E23E90", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001655")]
	[Address(RVA = "0x4E23F60", Offset = "0x4E23F60", VA = "0x4E23F60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001656")]
	[Address(RVA = "0x4E23FC0", Offset = "0x4E23FC0", VA = "0x4E23FC0", Slot = "12")]
	public override int GetByteCount(char[] chars, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001657")]
	[Address(RVA = "0x4E24100", Offset = "0x4E24100", VA = "0x4E24100", Slot = "11")]
	public override int GetByteCount(string s)
	{
		return default(int);
	}

	[Token(Token = "0x6001658")]
	[Address(RVA = "0x4E24190", Offset = "0x4E24190", VA = "0x4E24190", Slot = "13")]
	[CLSCompliant(false)]
	public unsafe override int GetByteCount(char* chars, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001659")]
	[Address(RVA = "0x4E24260", Offset = "0x4E24260", VA = "0x4E24260", Slot = "19")]
	public override int GetBytes(string s, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600165A")]
	[Address(RVA = "0x4E244D0", Offset = "0x4E244D0", VA = "0x4E244D0", Slot = "17")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600165B")]
	[Address(RVA = "0x4E24750", Offset = "0x4E24750", VA = "0x4E24750", Slot = "21")]
	[CLSCompliant(false)]
	public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x600165C")]
	[Address(RVA = "0x4E24840", Offset = "0x4E24840", VA = "0x4E24840", Slot = "22")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600165D")]
	[Address(RVA = "0x4E24980", Offset = "0x4E24980", VA = "0x4E24980", Slot = "23")]
	[CLSCompliant(false)]
	public unsafe override int GetCharCount(byte* bytes, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600165E")]
	[Address(RVA = "0x4E24A50", Offset = "0x4E24A50", VA = "0x4E24A50", Slot = "26")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600165F")]
	[Address(RVA = "0x4E24CC0", Offset = "0x4E24CC0", VA = "0x4E24CC0", Slot = "27")]
	[CLSCompliant(false)]
	public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001660")]
	[Address(RVA = "0x4E24DB0", Offset = "0x4E24DB0", VA = "0x4E24DB0", Slot = "36")]
	public override string GetString(byte[] bytes, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x6001661")]
	[Address(RVA = "0x4E24F00", Offset = "0x4E24F00", VA = "0x4E24F00", Slot = "14")]
	internal unsafe override int GetByteCount(char* chars, int count, System.Text.EncoderNLS baseEncoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001662")]
	[Address(RVA = "0x4E24F20", Offset = "0x4E24F20", VA = "0x4E24F20", Slot = "20")]
	internal unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, System.Text.EncoderNLS baseEncoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001663")]
	[Address(RVA = "0x4E25340", Offset = "0x4E25340", VA = "0x4E25340", Slot = "24")]
	internal unsafe override int GetCharCount(byte* bytes, int count, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001664")]
	[Address(RVA = "0x4E25360", Offset = "0x4E25360", VA = "0x4E25360", Slot = "28")]
	internal unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001665")]
	[Address(RVA = "0x4E25740", Offset = "0x4E25740", VA = "0x4E25740", Slot = "31")]
	public override System.Text.Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x6001666")]
	[Address(RVA = "0x4E257A0", Offset = "0x4E257A0", VA = "0x4E257A0", Slot = "32")]
	public override System.Text.Encoder GetEncoder()
	{
		return null;
	}

	[Token(Token = "0x6001667")]
	[Address(RVA = "0x4E25890", Offset = "0x4E25890", VA = "0x4E25890", Slot = "33")]
	public override int GetMaxByteCount(int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001668")]
	[Address(RVA = "0x4E25940", Offset = "0x4E25940", VA = "0x4E25940", Slot = "34")]
	public override int GetMaxCharCount(int byteCount)
	{
		return default(int);
	}
}
