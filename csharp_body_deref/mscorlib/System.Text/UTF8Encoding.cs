// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.UTF8Encoding
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
			[Address(RVA = "0x3B0F4F0", Offset = "0x3B0F4F0", VA = "0x3B0F4F0", Slot = "7")]
			get
			{
				return default(ReadOnlySpan<byte>);
			}
		}

		[Token(Token = "0x600169D")]
		[Address(RVA = "0x3B0F4A0", Offset = "0x3B0F4A0", VA = "0x3B0F4A0")]
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
			[Address(RVA = "0x3B0F640", Offset = "0x3B0F640", VA = "0x3B0F640", Slot = "11")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600169F")]
		[Address(RVA = "0x3B0F600", Offset = "0x3B0F600", VA = "0x3B0F600")]
		public UTF8Encoder(UTF8Encoding encoding)
		{
		}

		[Token(Token = "0x60016A0")]
		[Address(RVA = "0x3B0F610", Offset = "0x3B0F610", VA = "0x3B0F610", Slot = "4")]
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
			[Address(RVA = "0x3B0F690", Offset = "0x3B0F690", VA = "0x3B0F690", Slot = "14")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016A2")]
		[Address(RVA = "0x3B0F650", Offset = "0x3B0F650", VA = "0x3B0F650")]
		public UTF8Decoder(UTF8Encoding encoding)
		{
		}

		[Token(Token = "0x60016A3")]
		[Address(RVA = "0x3B0F660", Offset = "0x3B0F660", VA = "0x3B0F660", Slot = "4")]
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
		[Address(RVA = "0x3B0F110", Offset = "0x3B0F110", VA = "0x3B0F110", Slot = "7")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x600167B")]
	[Address(RVA = "0x3B0B7A0", Offset = "0x3B0B7A0", VA = "0x3B0B7A0")]
	public UTF8Encoding()
	{
	}

	[Token(Token = "0x600167C")]
	[Address(RVA = "0x3B0B7C0", Offset = "0x3B0B7C0", VA = "0x3B0B7C0")]
	public UTF8Encoding(bool encoderShouldEmitUTF8Identifier)
	{
	}

	[Token(Token = "0x600167D")]
	[Address(RVA = "0x3B0B7F0", Offset = "0x3B0B7F0", VA = "0x3B0B7F0")]
	public UTF8Encoding(bool encoderShouldEmitUTF8Identifier, bool throwOnInvalidBytes)
	{
	}

	[Token(Token = "0x600167E")]
	[Address(RVA = "0x3B0B840", Offset = "0x3B0B840", VA = "0x3B0B840", Slot = "5")]
	internal override void SetDefaultFallbacks()
	{
	}

	[Token(Token = "0x600167F")]
	[Address(RVA = "0x3B0B9B0", Offset = "0x3B0B9B0", VA = "0x3B0B9B0", Slot = "12")]
	public override int GetByteCount(char[] chars, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001680")]
	[Address(RVA = "0x3B0BAF0", Offset = "0x3B0BAF0", VA = "0x3B0BAF0", Slot = "11")]
	public override int GetByteCount(string chars)
	{
		return default(int);
	}

	[Token(Token = "0x6001681")]
	[Address(RVA = "0x3B0BB80", Offset = "0x3B0BB80", VA = "0x3B0BB80", Slot = "13")]
	[CLSCompliant(false)]
	public unsafe override int GetByteCount(char* chars, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001682")]
	[Address(RVA = "0x3B0BC50", Offset = "0x3B0BC50", VA = "0x3B0BC50", Slot = "19")]
	public override int GetBytes(string s, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001683")]
	[Address(RVA = "0x3B0BEC0", Offset = "0x3B0BEC0", VA = "0x3B0BEC0", Slot = "17")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001684")]
	[Address(RVA = "0x3B0C140", Offset = "0x3B0C140", VA = "0x3B0C140", Slot = "21")]
	[CLSCompliant(false)]
	public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001685")]
	[Address(RVA = "0x3B0C230", Offset = "0x3B0C230", VA = "0x3B0C230", Slot = "22")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001686")]
	[Address(RVA = "0x3B0C370", Offset = "0x3B0C370", VA = "0x3B0C370", Slot = "23")]
	[CLSCompliant(false)]
	public unsafe override int GetCharCount(byte* bytes, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001687")]
	[Address(RVA = "0x3B0C440", Offset = "0x3B0C440", VA = "0x3B0C440", Slot = "26")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001688")]
	[Address(RVA = "0x3B0C6B0", Offset = "0x3B0C6B0", VA = "0x3B0C6B0", Slot = "27")]
	[CLSCompliant(false)]
	public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001689")]
	[Address(RVA = "0x3B0C7A0", Offset = "0x3B0C7A0", VA = "0x3B0C7A0", Slot = "36")]
	public override string GetString(byte[] bytes, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x600168A")]
	[Address(RVA = "0x3B0C8F0", Offset = "0x3B0C8F0", VA = "0x3B0C8F0", Slot = "14")]
	internal unsafe override int GetByteCount(char* chars, int count, System.Text.EncoderNLS baseEncoder)
	{
		return default(int);
	}

	[Token(Token = "0x600168B")]
	[Address(RVA = "0x3B0D160", Offset = "0x3B0D160", VA = "0x3B0D160")]
	private unsafe static int PtrDiff(char* a, char* b)
	{
		return default(int);
	}

	[Token(Token = "0x600168C")]
	[Address(RVA = "0x3B0D170", Offset = "0x3B0D170", VA = "0x3B0D170")]
	private unsafe static int PtrDiff(byte* a, byte* b)
	{
		return default(int);
	}

	[Token(Token = "0x600168D")]
	[Address(RVA = "0x3B0D150", Offset = "0x3B0D150", VA = "0x3B0D150")]
	private static bool InRange(int ch, int start, int end)
	{
		return default(bool);
	}

	[Token(Token = "0x600168E")]
	[Address(RVA = "0x3B0D180", Offset = "0x3B0D180", VA = "0x3B0D180", Slot = "20")]
	internal unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, System.Text.EncoderNLS baseEncoder)
	{
		return default(int);
	}

	[Token(Token = "0x600168F")]
	[Address(RVA = "0x3B0DB50", Offset = "0x3B0DB50", VA = "0x3B0DB50", Slot = "24")]
	internal unsafe override int GetCharCount(byte* bytes, int count, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001690")]
	[Address(RVA = "0x3B0E1A0", Offset = "0x3B0E1A0", VA = "0x3B0E1A0", Slot = "28")]
	internal unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001691")]
	[Address(RVA = "0x3B0EAB0", Offset = "0x3B0EAB0", VA = "0x3B0EAB0")]
	private unsafe bool FallbackInvalidByteSequence(ref byte* pSrc, int ch, DecoderFallbackBuffer fallback, ref char* pTarget)
	{
		return default(bool);
	}

	[Token(Token = "0x6001692")]
	[Address(RVA = "0x3B0E150", Offset = "0x3B0E150", VA = "0x3B0E150")]
	private unsafe int FallbackInvalidByteSequence(byte* pSrc, int ch, DecoderFallbackBuffer fallback)
	{
		return default(int);
	}

	[Token(Token = "0x6001693")]
	[Address(RVA = "0x3B0EB20", Offset = "0x3B0EB20", VA = "0x3B0EB20")]
	private unsafe byte[] GetBytesUnknown(ref byte* pSrc, int ch)
	{
		return null;
	}

	[Token(Token = "0x6001694")]
	[Address(RVA = "0x3B0ED70", Offset = "0x3B0ED70", VA = "0x3B0ED70", Slot = "31")]
	public override Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x6001695")]
	[Address(RVA = "0x3B0EDC0", Offset = "0x3B0EDC0", VA = "0x3B0EDC0", Slot = "32")]
	public override Encoder GetEncoder()
	{
		return null;
	}

	[Token(Token = "0x6001696")]
	[Address(RVA = "0x3B0EE10", Offset = "0x3B0EE10", VA = "0x3B0EE10", Slot = "33")]
	public override int GetMaxByteCount(int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001697")]
	[Address(RVA = "0x3B0EF10", Offset = "0x3B0EF10", VA = "0x3B0EF10", Slot = "34")]
	public override int GetMaxCharCount(int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001698")]
	[Address(RVA = "0x3B0F000", Offset = "0x3B0F000", VA = "0x3B0F000", Slot = "6")]
	public override byte[] GetPreamble()
	{
		return null;
	}

	[Token(Token = "0x600169A")]
	[Address(RVA = "0x3B0F290", Offset = "0x3B0F290", VA = "0x3B0F290", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600169B")]
	[Address(RVA = "0x3B0F360", Offset = "0x3B0F360", VA = "0x3B0F360", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
