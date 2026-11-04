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
[Token(Token = "0x20002B6")]
public sealed class UTF32Encoding : Encoding
{
	[Serializable]
	[Token(Token = "0x20002B7")]
	private sealed class UTF32Decoder : System.Text.DecoderNLS
	{
		[Token(Token = "0x4000BBD")]
		[FieldOffset(Offset = "0x30")]
		internal int iChar;

		[Token(Token = "0x4000BBE")]
		[FieldOffset(Offset = "0x34")]
		internal int readByteCount;

		[Token(Token = "0x1700023A")]
		internal override bool HasState
		{
			[Token(Token = "0x60016BB")]
			[Address(RVA = "0xBAD720", Offset = "0xBABD20", VA = "0x180BAD720", Slot = "14")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016B9")]
		[Address(RVA = "0x19769B0", Offset = "0x1974FB0", VA = "0x1819769B0")]
		public UTF32Decoder(UTF32Encoding encoding)
		{
		}

		[Token(Token = "0x60016BA")]
		[Address(RVA = "0x1981F20", Offset = "0x1980520", VA = "0x181981F20", Slot = "4")]
		public override void Reset()
		{
		}
	}

	[Token(Token = "0x4000BB6")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly UTF32Encoding s_default;

	[Token(Token = "0x4000BB7")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly UTF32Encoding s_bigEndianDefault;

	[Token(Token = "0x4000BB8")]
	[FieldOffset(Offset = "0x10")]
	private static readonly byte[] s_bigEndianPreamble;

	[Token(Token = "0x4000BB9")]
	[FieldOffset(Offset = "0x18")]
	private static readonly byte[] s_littleEndianPreamble;

	[Token(Token = "0x4000BBA")]
	[FieldOffset(Offset = "0x38")]
	private bool _emitUTF32ByteOrderMark;

	[Token(Token = "0x4000BBB")]
	[FieldOffset(Offset = "0x39")]
	private bool _isThrowException;

	[Token(Token = "0x4000BBC")]
	[FieldOffset(Offset = "0x3A")]
	private bool _bigEndian;

	[Token(Token = "0x17000239")]
	public override ReadOnlySpan<byte> Preamble
	{
		[Token(Token = "0x60016B5")]
		[Address(RVA = "0x1984AB0", Offset = "0x19830B0", VA = "0x181984AB0", Slot = "7")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x600169A")]
	[Address(RVA = "0x19849D0", Offset = "0x1982FD0", VA = "0x1819849D0")]
	public UTF32Encoding()
	{
	}

	[Token(Token = "0x600169B")]
	[Address(RVA = "0x1984A60", Offset = "0x1983060", VA = "0x181984A60")]
	public UTF32Encoding(bool bigEndian, bool byteOrderMark)
	{
	}

	[Token(Token = "0x600169C")]
	[Address(RVA = "0x1984A00", Offset = "0x1983000", VA = "0x181984A00")]
	public UTF32Encoding(bool bigEndian, bool byteOrderMark, bool throwOnInvalidCharacters)
	{
	}

	[Token(Token = "0x600169D")]
	[Address(RVA = "0x1984750", Offset = "0x1982D50", VA = "0x181984750", Slot = "5")]
	internal override void SetDefaultFallbacks()
	{
	}

	[Token(Token = "0x600169E")]
	[Address(RVA = "0x1982350", Offset = "0x1980950", VA = "0x181982350", Slot = "12")]
	public override int GetByteCount(char[] chars, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600169F")]
	[Address(RVA = "0x1982500", Offset = "0x1980B00", VA = "0x181982500", Slot = "11")]
	public override int GetByteCount(string s)
	{
		return default(int);
	}

	[Token(Token = "0x60016A0")]
	[Address(RVA = "0x19825A0", Offset = "0x1980BA0", VA = "0x1819825A0", Slot = "13")]
	[CLSCompliant(false)]
	public unsafe override int GetByteCount(char* chars, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016A1")]
	[Address(RVA = "0x1982A80", Offset = "0x1981080", VA = "0x181982A80", Slot = "19")]
	public override int GetBytes(string s, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60016A2")]
	[Address(RVA = "0x1982690", Offset = "0x1980C90", VA = "0x181982690", Slot = "17")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60016A3")]
	[Address(RVA = "0x1982950", Offset = "0x1980F50", VA = "0x181982950", Slot = "21")]
	[CLSCompliant(false)]
	public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x60016A4")]
	[Address(RVA = "0x1983690", Offset = "0x1981C90", VA = "0x181983690", Slot = "22")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016A5")]
	[Address(RVA = "0x19835A0", Offset = "0x1981BA0", VA = "0x1819835A0", Slot = "23")]
	[CLSCompliant(false)]
	public unsafe override int GetCharCount(byte* bytes, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016A6")]
	[Address(RVA = "0x1983970", Offset = "0x1981F70", VA = "0x181983970", Slot = "26")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60016A7")]
	[Address(RVA = "0x1983840", Offset = "0x1981E40", VA = "0x181983840", Slot = "27")]
	[CLSCompliant(false)]
	public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x60016A8")]
	[Address(RVA = "0x1984580", Offset = "0x1982B80", VA = "0x181984580", Slot = "35")]
	public override string GetString(byte[] bytes, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x60016A9")]
	[Address(RVA = "0x1982020", Offset = "0x1980620", VA = "0x181982020", Slot = "14")]
	internal unsafe override int GetByteCount(char* chars, int count, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016AA")]
	[Address(RVA = "0x1982D50", Offset = "0x1981350", VA = "0x181982D50", Slot = "20")]
	internal unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016AB")]
	[Address(RVA = "0x1983250", Offset = "0x1981850", VA = "0x181983250", Slot = "24")]
	internal unsafe override int GetCharCount(byte* bytes, int count, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016AC")]
	[Address(RVA = "0x1983C30", Offset = "0x1982230", VA = "0x181983C30", Slot = "28")]
	internal unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016AD")]
	[Address(RVA = "0x1984730", Offset = "0x1982D30", VA = "0x181984730")]
	private uint GetSurrogate(char cHigh, char cLow)
	{
		return default(uint);
	}

	[Token(Token = "0x60016AE")]
	[Address(RVA = "0x1984280", Offset = "0x1982880", VA = "0x181984280")]
	private char GetHighSurrogate(uint iChar)
	{
		return default(char);
	}

	[Token(Token = "0x60016AF")]
	[Address(RVA = "0x19842A0", Offset = "0x19828A0", VA = "0x1819842A0")]
	private char GetLowSurrogate(uint iChar)
	{
		return default(char);
	}

	[Token(Token = "0x60016B0")]
	[Address(RVA = "0x19840A0", Offset = "0x19826A0", VA = "0x1819840A0", Slot = "30")]
	public override Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x60016B1")]
	[Address(RVA = "0x1984140", Offset = "0x1982740", VA = "0x181984140", Slot = "31")]
	public override Encoder GetEncoder()
	{
		return null;
	}

	[Token(Token = "0x60016B2")]
	[Address(RVA = "0x19842C0", Offset = "0x19828C0", VA = "0x1819842C0", Slot = "32")]
	public override int GetMaxByteCount(int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x60016B3")]
	[Address(RVA = "0x1984400", Offset = "0x1982A00", VA = "0x181984400", Slot = "33")]
	public override int GetMaxCharCount(int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x60016B4")]
	[Address(RVA = "0x19844D0", Offset = "0x1982AD0", VA = "0x1819844D0", Slot = "6")]
	public override byte[] GetPreamble()
	{
		return null;
	}

	[Token(Token = "0x60016B6")]
	[Address(RVA = "0x1981F50", Offset = "0x1980550", VA = "0x181981F50", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60016B7")]
	[Address(RVA = "0x19841E0", Offset = "0x19827E0", VA = "0x1819841E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
