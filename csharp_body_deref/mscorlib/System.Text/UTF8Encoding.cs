using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x200028D")]
public class UTF8Encoding : Encoding
{
	[Token(Token = "0x200028E")]
	internal sealed class UTF8EncodingSealed : UTF8Encoding
	{
		[Token(Token = "0x1700023E")]
		public override ReadOnlySpan<byte> Preamble
		{
			[Token(Token = "0x600169E")]
			[Address(RVA = "0x4E299D0", Offset = "0x4E299D0", VA = "0x4E299D0", Slot = "7")]
			get
			{
				return default(ReadOnlySpan<byte>);
			}
		}

		[Token(Token = "0x600169D")]
		[Address(RVA = "0x4E29980", Offset = "0x4E29980", VA = "0x4E29980")]
		public UTF8EncodingSealed(bool encoderShouldEmitUTF8Identifier)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200028F")]
	private sealed class UTF8Encoder : System.Text.EncoderNLS
	{
		[Token(Token = "0x4000B90")]
		[FieldOffset(Offset = "0x38")]
		internal int surrogateChar;

		[Token(Token = "0x1700023F")]
		internal override bool HasState
		{
			[Token(Token = "0x60016A1")]
			[Address(RVA = "0x4E29B20", Offset = "0x4E29B20", VA = "0x4E29B20", Slot = "11")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600169F")]
		[Address(RVA = "0x4E29AE0", Offset = "0x4E29AE0", VA = "0x4E29AE0")]
		public UTF8Encoder(UTF8Encoding encoding)
		{
		}

		[Token(Token = "0x60016A0")]
		[Address(RVA = "0x4E29AF0", Offset = "0x4E29AF0", VA = "0x4E29AF0", Slot = "4")]
		public override void Reset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000290")]
	private sealed class UTF8Decoder : System.Text.DecoderNLS
	{
		[Token(Token = "0x4000B91")]
		[FieldOffset(Offset = "0x30")]
		internal int bits;

		[Token(Token = "0x17000240")]
		internal override bool HasState
		{
			[Token(Token = "0x60016A4")]
			[Address(RVA = "0x4E29B70", Offset = "0x4E29B70", VA = "0x4E29B70", Slot = "14")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016A2")]
		[Address(RVA = "0x4E29B30", Offset = "0x4E29B30", VA = "0x4E29B30")]
		public UTF8Decoder(UTF8Encoding encoding)
		{
		}

		[Token(Token = "0x60016A3")]
		[Address(RVA = "0x4E29B40", Offset = "0x4E29B40", VA = "0x4E29B40", Slot = "4")]
		public override void Reset()
		{
		}
	}

	[Token(Token = "0x4000B8C")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly UTF8EncodingSealed s_default;

	[Token(Token = "0x4000B8D")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly byte[] s_preamble;

	[Token(Token = "0x4000B8E")]
	[FieldOffset(Offset = "0x38")]
	internal readonly bool _emitUTF8Identifier;

	[Token(Token = "0x4000B8F")]
	[FieldOffset(Offset = "0x39")]
	private bool _isThrowException;

	[Token(Token = "0x1700023D")]
	public override ReadOnlySpan<byte> Preamble
	{
		[Token(Token = "0x6001699")]
		[Address(RVA = "0x4E295F0", Offset = "0x4E295F0", VA = "0x4E295F0", Slot = "7")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x600167B")]
	[Address(RVA = "0x4E25C80", Offset = "0x4E25C80", VA = "0x4E25C80")]
	public UTF8Encoding()
	{
	}

	[Token(Token = "0x600167C")]
	[Address(RVA = "0x4E25CA0", Offset = "0x4E25CA0", VA = "0x4E25CA0")]
	public UTF8Encoding(bool encoderShouldEmitUTF8Identifier)
	{
	}

	[Token(Token = "0x600167D")]
	[Address(RVA = "0x4E25CD0", Offset = "0x4E25CD0", VA = "0x4E25CD0")]
	public UTF8Encoding(bool encoderShouldEmitUTF8Identifier, bool throwOnInvalidBytes)
	{
	}

	[Token(Token = "0x600167E")]
	[Address(RVA = "0x4E25D20", Offset = "0x4E25D20", VA = "0x4E25D20", Slot = "5")]
	internal override void SetDefaultFallbacks()
	{
	}

	[Token(Token = "0x600167F")]
	[Address(RVA = "0x4E25E90", Offset = "0x4E25E90", VA = "0x4E25E90", Slot = "12")]
	public override int GetByteCount(char[] chars, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001680")]
	[Address(RVA = "0x4E25FD0", Offset = "0x4E25FD0", VA = "0x4E25FD0", Slot = "11")]
	public override int GetByteCount(string chars)
	{
		return default(int);
	}

	[Token(Token = "0x6001681")]
	[Address(RVA = "0x4E26060", Offset = "0x4E26060", VA = "0x4E26060", Slot = "13")]
	[CLSCompliant(false)]
	public unsafe override int GetByteCount(char* chars, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001682")]
	[Address(RVA = "0x4E26130", Offset = "0x4E26130", VA = "0x4E26130", Slot = "19")]
	public override int GetBytes(string s, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001683")]
	[Address(RVA = "0x4E263A0", Offset = "0x4E263A0", VA = "0x4E263A0", Slot = "17")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001684")]
	[Address(RVA = "0x4E26620", Offset = "0x4E26620", VA = "0x4E26620", Slot = "21")]
	[CLSCompliant(false)]
	public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001685")]
	[Address(RVA = "0x4E26710", Offset = "0x4E26710", VA = "0x4E26710", Slot = "22")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001686")]
	[Address(RVA = "0x4E26850", Offset = "0x4E26850", VA = "0x4E26850", Slot = "23")]
	[CLSCompliant(false)]
	public unsafe override int GetCharCount(byte* bytes, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001687")]
	[Address(RVA = "0x4E26920", Offset = "0x4E26920", VA = "0x4E26920", Slot = "26")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001688")]
	[Address(RVA = "0x4E26B90", Offset = "0x4E26B90", VA = "0x4E26B90", Slot = "27")]
	[CLSCompliant(false)]
	public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001689")]
	[Address(RVA = "0x4E26C80", Offset = "0x4E26C80", VA = "0x4E26C80", Slot = "36")]
	public override string GetString(byte[] bytes, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x600168A")]
	[Address(RVA = "0x4E26DD0", Offset = "0x4E26DD0", VA = "0x4E26DD0", Slot = "14")]
	internal unsafe override int GetByteCount(char* chars, int count, System.Text.EncoderNLS baseEncoder)
	{
		return default(int);
	}

	[Token(Token = "0x600168B")]
	[Address(RVA = "0x4E27640", Offset = "0x4E27640", VA = "0x4E27640")]
	private unsafe static int PtrDiff(char* a, char* b)
	{
		return default(int);
	}

	[Token(Token = "0x600168C")]
	[Address(RVA = "0x4E27650", Offset = "0x4E27650", VA = "0x4E27650")]
	private unsafe static int PtrDiff(byte* a, byte* b)
	{
		return default(int);
	}

	[Token(Token = "0x600168D")]
	[Address(RVA = "0x4E27630", Offset = "0x4E27630", VA = "0x4E27630")]
	private static bool InRange(int ch, int start, int end)
	{
		return default(bool);
	}

	[Token(Token = "0x600168E")]
	[Address(RVA = "0x4E27660", Offset = "0x4E27660", VA = "0x4E27660", Slot = "20")]
	internal unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, System.Text.EncoderNLS baseEncoder)
	{
		return default(int);
	}

	[Token(Token = "0x600168F")]
	[Address(RVA = "0x4E28030", Offset = "0x4E28030", VA = "0x4E28030", Slot = "24")]
	internal unsafe override int GetCharCount(byte* bytes, int count, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001690")]
	[Address(RVA = "0x4E28680", Offset = "0x4E28680", VA = "0x4E28680", Slot = "28")]
	internal unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001691")]
	[Address(RVA = "0x4E28F90", Offset = "0x4E28F90", VA = "0x4E28F90")]
	private unsafe bool FallbackInvalidByteSequence(ref byte* pSrc, int ch, DecoderFallbackBuffer fallback, ref char* pTarget)
	{
		return default(bool);
	}

	[Token(Token = "0x6001692")]
	[Address(RVA = "0x4E28630", Offset = "0x4E28630", VA = "0x4E28630")]
	private unsafe int FallbackInvalidByteSequence(byte* pSrc, int ch, DecoderFallbackBuffer fallback)
	{
		return default(int);
	}

	[Token(Token = "0x6001693")]
	[Address(RVA = "0x4E29000", Offset = "0x4E29000", VA = "0x4E29000")]
	private unsafe byte[] GetBytesUnknown(ref byte* pSrc, int ch)
	{
		return null;
	}

	[Token(Token = "0x6001694")]
	[Address(RVA = "0x4E29250", Offset = "0x4E29250", VA = "0x4E29250", Slot = "31")]
	public override Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x6001695")]
	[Address(RVA = "0x4E292A0", Offset = "0x4E292A0", VA = "0x4E292A0", Slot = "32")]
	public override Encoder GetEncoder()
	{
		return null;
	}

	[Token(Token = "0x6001696")]
	[Address(RVA = "0x4E292F0", Offset = "0x4E292F0", VA = "0x4E292F0", Slot = "33")]
	public override int GetMaxByteCount(int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001697")]
	[Address(RVA = "0x4E293F0", Offset = "0x4E293F0", VA = "0x4E293F0", Slot = "34")]
	public override int GetMaxCharCount(int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001698")]
	[Address(RVA = "0x4E294E0", Offset = "0x4E294E0", VA = "0x4E294E0", Slot = "6")]
	public override byte[] GetPreamble()
	{
		return null;
	}

	[Token(Token = "0x600169A")]
	[Address(RVA = "0x4E29770", Offset = "0x4E29770", VA = "0x4E29770", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600169B")]
	[Address(RVA = "0x4E29840", Offset = "0x4E29840", VA = "0x4E29840", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
