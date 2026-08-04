// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.UnicodeEncoding
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
			[Address(RVA = "0x3B139D0", Offset = "0x3B139D0", VA = "0x3B139D0", Slot = "14")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016C1")]
		[Address(RVA = "0x3B13190", Offset = "0x3B13190", VA = "0x3B13190")]
		public Decoder(UnicodeEncoding encoding)
		{
		}

		[Token(Token = "0x60016C2")]
		[Address(RVA = "0x3B139A0", Offset = "0x3B139A0", VA = "0x3B139A0", Slot = "4")]
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
		[Address(RVA = "0x3B132D0", Offset = "0x3B132D0", VA = "0x3B132D0", Slot = "7")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x60016A5")]
	[Address(RVA = "0x3B0F6A0", Offset = "0x3B0F6A0", VA = "0x3B0F6A0")]
	public UnicodeEncoding()
	{
	}

	[Token(Token = "0x60016A6")]
	[Address(RVA = "0x3B0F6E0", Offset = "0x3B0F6E0", VA = "0x3B0F6E0")]
	public UnicodeEncoding(bool bigEndian, bool byteOrderMark)
	{
	}

	[Token(Token = "0x60016A7")]
	[Address(RVA = "0x3B0F710", Offset = "0x3B0F710", VA = "0x3B0F710")]
	public UnicodeEncoding(bool bigEndian, bool byteOrderMark, bool throwOnInvalidBytes)
	{
	}

	[Token(Token = "0x60016A8")]
	[Address(RVA = "0x3B0F7F0", Offset = "0x3B0F7F0", VA = "0x3B0F7F0", Slot = "5")]
	internal override void SetDefaultFallbacks()
	{
	}

	[Token(Token = "0x60016A9")]
	[Address(RVA = "0x3B0F8E0", Offset = "0x3B0F8E0", VA = "0x3B0F8E0", Slot = "12")]
	public override int GetByteCount(char[] chars, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016AA")]
	[Address(RVA = "0x3B0FA20", Offset = "0x3B0FA20", VA = "0x3B0FA20", Slot = "11")]
	public override int GetByteCount(string s)
	{
		return default(int);
	}

	[Token(Token = "0x60016AB")]
	[Address(RVA = "0x3B0FAB0", Offset = "0x3B0FAB0", VA = "0x3B0FAB0", Slot = "13")]
	[CLSCompliant(false)]
	public unsafe override int GetByteCount(char* chars, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016AC")]
	[Address(RVA = "0x3B0FB80", Offset = "0x3B0FB80", VA = "0x3B0FB80", Slot = "19")]
	public override int GetBytes(string s, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60016AD")]
	[Address(RVA = "0x3B0FDF0", Offset = "0x3B0FDF0", VA = "0x3B0FDF0", Slot = "17")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60016AE")]
	[Address(RVA = "0x3B10070", Offset = "0x3B10070", VA = "0x3B10070", Slot = "21")]
	[CLSCompliant(false)]
	public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x60016AF")]
	[Address(RVA = "0x3B10160", Offset = "0x3B10160", VA = "0x3B10160", Slot = "22")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016B0")]
	[Address(RVA = "0x3B102A0", Offset = "0x3B102A0", VA = "0x3B102A0", Slot = "23")]
	[CLSCompliant(false)]
	public unsafe override int GetCharCount(byte* bytes, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016B1")]
	[Address(RVA = "0x3B10370", Offset = "0x3B10370", VA = "0x3B10370", Slot = "26")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60016B2")]
	[Address(RVA = "0x3B105E0", Offset = "0x3B105E0", VA = "0x3B105E0", Slot = "27")]
	[CLSCompliant(false)]
	public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x60016B3")]
	[Address(RVA = "0x3B106D0", Offset = "0x3B106D0", VA = "0x3B106D0", Slot = "36")]
	public override string GetString(byte[] bytes, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x60016B4")]
	[Address(RVA = "0x3B10820", Offset = "0x3B10820", VA = "0x3B10820", Slot = "14")]
	internal unsafe override int GetByteCount(char* chars, int count, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016B5")]
	[Address(RVA = "0x3B11090", Offset = "0x3B11090", VA = "0x3B11090", Slot = "20")]
	internal unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016B6")]
	[Address(RVA = "0x3B11950", Offset = "0x3B11950", VA = "0x3B11950", Slot = "24")]
	internal unsafe override int GetCharCount(byte* bytes, int count, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016B7")]
	[Address(RVA = "0x3B12340", Offset = "0x3B12340", VA = "0x3B12340", Slot = "28")]
	internal unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016B8")]
	[Address(RVA = "0x3B130E0", Offset = "0x3B130E0", VA = "0x3B130E0", Slot = "32")]
	public override Encoder GetEncoder()
	{
		return null;
	}

	[Token(Token = "0x60016B9")]
	[Address(RVA = "0x3B13130", Offset = "0x3B13130", VA = "0x3B13130", Slot = "31")]
	public override System.Text.Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x60016BA")]
	[Address(RVA = "0x3B131A0", Offset = "0x3B131A0", VA = "0x3B131A0", Slot = "6")]
	public override byte[] GetPreamble()
	{
		return null;
	}

	[Token(Token = "0x60016BC")]
	[Address(RVA = "0x3B13470", Offset = "0x3B13470", VA = "0x3B13470", Slot = "33")]
	public override int GetMaxByteCount(int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x60016BD")]
	[Address(RVA = "0x3B13570", Offset = "0x3B13570", VA = "0x3B13570", Slot = "34")]
	public override int GetMaxCharCount(int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x60016BE")]
	[Address(RVA = "0x3B13670", Offset = "0x3B13670", VA = "0x3B13670", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60016BF")]
	[Address(RVA = "0x3B13780", Offset = "0x3B13780", VA = "0x3B13780", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
