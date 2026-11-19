// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.UTF32Encoding
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x200028E")]
public sealed class UTF32Encoding : Encoding
{
	[Serializable]
	[Token(Token = "0x200028F")]
	private sealed class UTF32Decoder : System.Text.DecoderNLS
	{
		[Token(Token = "0x4000B1B")]
		[FieldOffset(Offset = "0x30")]
		internal int iChar;

		[Token(Token = "0x4000B1C")]
		[FieldOffset(Offset = "0x34")]
		internal int readByteCount;

		[Token(Token = "0x17000239")]
		internal override bool HasState
		{
			[Token(Token = "0x6001693")]
			[Address(RVA = "0x53140E0", Offset = "0x53130E0", VA = "0x53140E0", Slot = "14")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001691")]
		[Address(RVA = "0x53138E0", Offset = "0x53128E0", VA = "0x53138E0")]
		public UTF32Decoder(UTF32Encoding encoding)
		{
		}

		[Token(Token = "0x6001692")]
		[Address(RVA = "0x53140B0", Offset = "0x53130B0", VA = "0x53140B0", Slot = "4")]
		public override void Reset()
		{
		}
	}

	[Token(Token = "0x4000B14")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly UTF32Encoding s_default;

	[Token(Token = "0x4000B15")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly UTF32Encoding s_bigEndianDefault;

	[Token(Token = "0x4000B16")]
	[FieldOffset(Offset = "0x10")]
	private static readonly byte[] s_bigEndianPreamble;

	[Token(Token = "0x4000B17")]
	[FieldOffset(Offset = "0x18")]
	private static readonly byte[] s_littleEndianPreamble;

	[Token(Token = "0x4000B18")]
	[FieldOffset(Offset = "0x38")]
	private bool _emitUTF32ByteOrderMark;

	[Token(Token = "0x4000B19")]
	[FieldOffset(Offset = "0x39")]
	private bool _isThrowException;

	[Token(Token = "0x4000B1A")]
	[FieldOffset(Offset = "0x3A")]
	private bool _bigEndian;

	[Token(Token = "0x17000238")]
	public override ReadOnlySpan<byte> Preamble
	{
		[Token(Token = "0x600168D")]
		[Address(RVA = "0x5313C80", Offset = "0x5312C80", VA = "0x5313C80", Slot = "7")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x6001672")]
	[Address(RVA = "0x5311750", Offset = "0x5310750", VA = "0x5311750")]
	public UTF32Encoding()
	{
	}

	[Token(Token = "0x6001673")]
	[Address(RVA = "0x53117D0", Offset = "0x53107D0", VA = "0x53117D0")]
	public UTF32Encoding(bool bigEndian, bool byteOrderMark)
	{
	}

	[Token(Token = "0x6001674")]
	[Address(RVA = "0x5311770", Offset = "0x5310770", VA = "0x5311770")]
	public UTF32Encoding(bool bigEndian, bool byteOrderMark, bool throwOnInvalidCharacters)
	{
	}

	[Token(Token = "0x6001675")]
	[Address(RVA = "0x5311800", Offset = "0x5310800", VA = "0x5311800", Slot = "5")]
	internal override void SetDefaultFallbacks()
	{
	}

	[Token(Token = "0x6001676")]
	[Address(RVA = "0x5311970", Offset = "0x5310970", VA = "0x5311970", Slot = "12")]
	public override int GetByteCount(char[] chars, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001677")]
	[Address(RVA = "0x5311AC0", Offset = "0x5310AC0", VA = "0x5311AC0", Slot = "11")]
	public override int GetByteCount(string s)
	{
		return default(int);
	}

	[Token(Token = "0x6001678")]
	[Address(RVA = "0x5311B50", Offset = "0x5310B50", VA = "0x5311B50", Slot = "13")]
	[CLSCompliant(false)]
	public unsafe override int GetByteCount(char* chars, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001679")]
	[Address(RVA = "0x5311C20", Offset = "0x5310C20", VA = "0x5311C20", Slot = "19")]
	public override int GetBytes(string s, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600167A")]
	[Address(RVA = "0x5311E70", Offset = "0x5310E70", VA = "0x5311E70", Slot = "17")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600167B")]
	[Address(RVA = "0x53120F0", Offset = "0x53110F0", VA = "0x53120F0", Slot = "21")]
	[CLSCompliant(false)]
	public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x600167C")]
	[Address(RVA = "0x53121E0", Offset = "0x53111E0", VA = "0x53121E0", Slot = "22")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600167D")]
	[Address(RVA = "0x5312330", Offset = "0x5311330", VA = "0x5312330", Slot = "23")]
	[CLSCompliant(false)]
	public unsafe override int GetCharCount(byte* bytes, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600167E")]
	[Address(RVA = "0x5312400", Offset = "0x5311400", VA = "0x5312400", Slot = "26")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600167F")]
	[Address(RVA = "0x5312670", Offset = "0x5311670", VA = "0x5312670", Slot = "27")]
	[CLSCompliant(false)]
	public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001680")]
	[Address(RVA = "0x5312760", Offset = "0x5311760", VA = "0x5312760", Slot = "36")]
	public override string GetString(byte[] bytes, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x6001681")]
	[Address(RVA = "0x53128C0", Offset = "0x53118C0", VA = "0x53128C0", Slot = "14")]
	internal unsafe override int GetByteCount(char* chars, int count, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001682")]
	[Address(RVA = "0x5312BE0", Offset = "0x5311BE0", VA = "0x5312BE0", Slot = "20")]
	internal unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001683")]
	[Address(RVA = "0x5313020", Offset = "0x5312020", VA = "0x5313020", Slot = "24")]
	internal unsafe override int GetCharCount(byte* bytes, int count, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001684")]
	[Address(RVA = "0x53133B0", Offset = "0x53123B0", VA = "0x53133B0", Slot = "28")]
	internal unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001685")]
	[Address(RVA = "0x5313010", Offset = "0x5312010", VA = "0x5313010")]
	private uint GetSurrogate(char cHigh, char cLow)
	{
		return default(uint);
	}

	[Token(Token = "0x6001686")]
	[Address(RVA = "0x5313870", Offset = "0x5312870", VA = "0x5313870")]
	private char GetHighSurrogate(uint iChar)
	{
		return default(char);
	}

	[Token(Token = "0x6001687")]
	[Address(RVA = "0x5313880", Offset = "0x5312880", VA = "0x5313880")]
	private char GetLowSurrogate(uint iChar)
	{
		return default(char);
	}

	[Token(Token = "0x6001688")]
	[Address(RVA = "0x5313890", Offset = "0x5312890", VA = "0x5313890", Slot = "31")]
	public override Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x6001689")]
	[Address(RVA = "0x53138F0", Offset = "0x53128F0", VA = "0x53138F0", Slot = "32")]
	public override Encoder GetEncoder()
	{
		return null;
	}

	[Token(Token = "0x600168A")]
	[Address(RVA = "0x5313980", Offset = "0x5312980", VA = "0x5313980", Slot = "33")]
	public override int GetMaxByteCount(int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x600168B")]
	[Address(RVA = "0x5313A80", Offset = "0x5312A80", VA = "0x5313A80", Slot = "34")]
	public override int GetMaxCharCount(int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x600168C")]
	[Address(RVA = "0x5313B40", Offset = "0x5312B40", VA = "0x5313B40", Slot = "6")]
	public override byte[] GetPreamble()
	{
		return null;
	}

	[Token(Token = "0x600168E")]
	[Address(RVA = "0x5313E30", Offset = "0x5312E30", VA = "0x5313E30", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600168F")]
	[Address(RVA = "0x5313EE0", Offset = "0x5312EE0", VA = "0x5313EE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
