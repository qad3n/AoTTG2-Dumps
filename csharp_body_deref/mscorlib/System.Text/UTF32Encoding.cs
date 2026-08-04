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
[Token(Token = "0x2000286")]
public sealed class UTF32Encoding : Encoding
{
	[Serializable]
	[Token(Token = "0x2000287")]
	private sealed class UTF32Decoder : System.Text.DecoderNLS
	{
		[Token(Token = "0x4000B7D")]
		[FieldOffset(Offset = "0x30")]
		internal int iChar;

		[Token(Token = "0x4000B7E")]
		[FieldOffset(Offset = "0x34")]
		internal int readByteCount;

		[Token(Token = "0x17000238")]
		internal override bool HasState
		{
			[Token(Token = "0x600164F")]
			[Address(RVA = "0x3B095F0", Offset = "0x3B095F0", VA = "0x3B095F0", Slot = "14")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600164D")]
		[Address(RVA = "0x3B08E10", Offset = "0x3B08E10", VA = "0x3B08E10")]
		public UTF32Decoder(UTF32Encoding encoding)
		{
		}

		[Token(Token = "0x600164E")]
		[Address(RVA = "0x3B095C0", Offset = "0x3B095C0", VA = "0x3B095C0", Slot = "4")]
		public override void Reset()
		{
		}
	}

	[Token(Token = "0x4000B76")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly UTF32Encoding s_default;

	[Token(Token = "0x4000B77")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly UTF32Encoding s_bigEndianDefault;

	[Token(Token = "0x4000B78")]
	[FieldOffset(Offset = "0x10")]
	private static readonly byte[] s_bigEndianPreamble;

	[Token(Token = "0x4000B79")]
	[FieldOffset(Offset = "0x18")]
	private static readonly byte[] s_littleEndianPreamble;

	[Token(Token = "0x4000B7A")]
	[FieldOffset(Offset = "0x38")]
	private bool _emitUTF32ByteOrderMark;

	[Token(Token = "0x4000B7B")]
	[FieldOffset(Offset = "0x39")]
	private bool _isThrowException;

	[Token(Token = "0x4000B7C")]
	[FieldOffset(Offset = "0x3A")]
	private bool _bigEndian;

	[Token(Token = "0x17000237")]
	public override ReadOnlySpan<byte> Preamble
	{
		[Token(Token = "0x6001649")]
		[Address(RVA = "0x3B091A0", Offset = "0x3B091A0", VA = "0x3B091A0", Slot = "7")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x600162E")]
	[Address(RVA = "0x3B06AB0", Offset = "0x3B06AB0", VA = "0x3B06AB0")]
	public UTF32Encoding()
	{
	}

	[Token(Token = "0x600162F")]
	[Address(RVA = "0x3B06B30", Offset = "0x3B06B30", VA = "0x3B06B30")]
	public UTF32Encoding(bool bigEndian, bool byteOrderMark)
	{
	}

	[Token(Token = "0x6001630")]
	[Address(RVA = "0x3B06AD0", Offset = "0x3B06AD0", VA = "0x3B06AD0")]
	public UTF32Encoding(bool bigEndian, bool byteOrderMark, bool throwOnInvalidCharacters)
	{
	}

	[Token(Token = "0x6001631")]
	[Address(RVA = "0x3B06B60", Offset = "0x3B06B60", VA = "0x3B06B60", Slot = "5")]
	internal override void SetDefaultFallbacks()
	{
	}

	[Token(Token = "0x6001632")]
	[Address(RVA = "0x3B06CD0", Offset = "0x3B06CD0", VA = "0x3B06CD0", Slot = "12")]
	public override int GetByteCount(char[] chars, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001633")]
	[Address(RVA = "0x3B06E10", Offset = "0x3B06E10", VA = "0x3B06E10", Slot = "11")]
	public override int GetByteCount(string s)
	{
		return default(int);
	}

	[Token(Token = "0x6001634")]
	[Address(RVA = "0x3B06EA0", Offset = "0x3B06EA0", VA = "0x3B06EA0", Slot = "13")]
	[CLSCompliant(false)]
	public unsafe override int GetByteCount(char* chars, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001635")]
	[Address(RVA = "0x3B06F70", Offset = "0x3B06F70", VA = "0x3B06F70", Slot = "19")]
	public override int GetBytes(string s, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001636")]
	[Address(RVA = "0x3B071E0", Offset = "0x3B071E0", VA = "0x3B071E0", Slot = "17")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001637")]
	[Address(RVA = "0x3B07460", Offset = "0x3B07460", VA = "0x3B07460", Slot = "21")]
	[CLSCompliant(false)]
	public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001638")]
	[Address(RVA = "0x3B07550", Offset = "0x3B07550", VA = "0x3B07550", Slot = "22")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001639")]
	[Address(RVA = "0x3B07690", Offset = "0x3B07690", VA = "0x3B07690", Slot = "23")]
	[CLSCompliant(false)]
	public unsafe override int GetCharCount(byte* bytes, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600163A")]
	[Address(RVA = "0x3B07760", Offset = "0x3B07760", VA = "0x3B07760", Slot = "26")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600163B")]
	[Address(RVA = "0x3B079D0", Offset = "0x3B079D0", VA = "0x3B079D0", Slot = "27")]
	[CLSCompliant(false)]
	public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x600163C")]
	[Address(RVA = "0x3B07AC0", Offset = "0x3B07AC0", VA = "0x3B07AC0", Slot = "36")]
	public override string GetString(byte[] bytes, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x600163D")]
	[Address(RVA = "0x3B07C10", Offset = "0x3B07C10", VA = "0x3B07C10", Slot = "14")]
	internal unsafe override int GetByteCount(char* chars, int count, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x600163E")]
	[Address(RVA = "0x3B08080", Offset = "0x3B08080", VA = "0x3B08080", Slot = "20")]
	internal unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x600163F")]
	[Address(RVA = "0x3B084F0", Offset = "0x3B084F0", VA = "0x3B084F0", Slot = "24")]
	internal unsafe override int GetCharCount(byte* bytes, int count, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001640")]
	[Address(RVA = "0x3B088B0", Offset = "0x3B088B0", VA = "0x3B088B0", Slot = "28")]
	internal unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001641")]
	[Address(RVA = "0x3B084E0", Offset = "0x3B084E0", VA = "0x3B084E0")]
	private uint GetSurrogate(char cHigh, char cLow)
	{
		return default(uint);
	}

	[Token(Token = "0x6001642")]
	[Address(RVA = "0x3B08DA0", Offset = "0x3B08DA0", VA = "0x3B08DA0")]
	private char GetHighSurrogate(uint iChar)
	{
		return default(char);
	}

	[Token(Token = "0x6001643")]
	[Address(RVA = "0x3B08DB0", Offset = "0x3B08DB0", VA = "0x3B08DB0")]
	private char GetLowSurrogate(uint iChar)
	{
		return default(char);
	}

	[Token(Token = "0x6001644")]
	[Address(RVA = "0x3B08DC0", Offset = "0x3B08DC0", VA = "0x3B08DC0", Slot = "31")]
	public override Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x6001645")]
	[Address(RVA = "0x3B08E20", Offset = "0x3B08E20", VA = "0x3B08E20", Slot = "32")]
	public override Encoder GetEncoder()
	{
		return null;
	}

	[Token(Token = "0x6001646")]
	[Address(RVA = "0x3B08EB0", Offset = "0x3B08EB0", VA = "0x3B08EB0", Slot = "33")]
	public override int GetMaxByteCount(int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001647")]
	[Address(RVA = "0x3B08FB0", Offset = "0x3B08FB0", VA = "0x3B08FB0", Slot = "34")]
	public override int GetMaxCharCount(int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001648")]
	[Address(RVA = "0x3B09070", Offset = "0x3B09070", VA = "0x3B09070", Slot = "6")]
	public override byte[] GetPreamble()
	{
		return null;
	}

	[Token(Token = "0x600164A")]
	[Address(RVA = "0x3B09340", Offset = "0x3B09340", VA = "0x3B09340", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600164B")]
	[Address(RVA = "0x3B093F0", Offset = "0x3B093F0", VA = "0x3B093F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
