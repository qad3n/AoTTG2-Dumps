// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.UTF7Encoding
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x20002B8")]
public class UTF7Encoding : Encoding
{
	[Serializable]
	[Token(Token = "0x20002B9")]
	private sealed class Decoder : System.Text.DecoderNLS
	{
		[Token(Token = "0x4000BC4")]
		[FieldOffset(Offset = "0x30")]
		internal int bits;

		[Token(Token = "0x4000BC5")]
		[FieldOffset(Offset = "0x34")]
		internal int bitCount;

		[Token(Token = "0x4000BC6")]
		[FieldOffset(Offset = "0x38")]
		internal bool firstByte;

		[Token(Token = "0x1700023B")]
		internal override bool HasState
		{
			[Token(Token = "0x60016D8")]
			[Address(RVA = "0x1977170", Offset = "0x1975770", VA = "0x181977170", Slot = "14")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016D6")]
		[Address(RVA = "0x19769B0", Offset = "0x1974FB0", VA = "0x1819769B0")]
		public Decoder(UTF7Encoding encoding)
		{
		}

		[Token(Token = "0x60016D7")]
		[Address(RVA = "0x1977140", Offset = "0x1975740", VA = "0x181977140", Slot = "4")]
		public override void Reset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x20002BA")]
	private sealed class Encoder : System.Text.EncoderNLS
	{
		[Token(Token = "0x4000BC7")]
		[FieldOffset(Offset = "0x38")]
		internal int bits;

		[Token(Token = "0x4000BC8")]
		[FieldOffset(Offset = "0x3C")]
		internal int bitCount;

		[Token(Token = "0x1700023C")]
		internal override bool HasState
		{
			[Token(Token = "0x60016DB")]
			[Address(RVA = "0x1979E40", Offset = "0x1978440", VA = "0x181979E40", Slot = "11")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016D9")]
		[Address(RVA = "0x1978950", Offset = "0x1976F50", VA = "0x181978950")]
		public Encoder(UTF7Encoding encoding)
		{
		}

		[Token(Token = "0x60016DA")]
		[Address(RVA = "0x1979C20", Offset = "0x1978220", VA = "0x181979C20", Slot = "4")]
		public override void Reset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x20002BB")]
	private sealed class DecoderUTF7Fallback : DecoderFallback
	{
		[Token(Token = "0x1700023D")]
		public override int MaxCharCount
		{
			[Token(Token = "0x60016DE")]
			[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x60016DC")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public DecoderUTF7Fallback()
		{
		}

		[Token(Token = "0x60016DD")]
		[Address(RVA = "0x1977090", Offset = "0x1975690", VA = "0x181977090", Slot = "4")]
		public override DecoderFallbackBuffer CreateFallbackBuffer()
		{
			return null;
		}

		[Token(Token = "0x60016DF")]
		[Address(RVA = "0x19770E0", Offset = "0x19756E0", VA = "0x1819770E0", Slot = "0")]
		public override bool Equals(object value)
		{
			return default(bool);
		}

		[Token(Token = "0x60016E0")]
		[Address(RVA = "0x1977130", Offset = "0x1975730", VA = "0x181977130", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}
	}

	[Token(Token = "0x20002BC")]
	private sealed class DecoderUTF7FallbackBuffer : DecoderFallbackBuffer
	{
		[Token(Token = "0x4000BC9")]
		[FieldOffset(Offset = "0x20")]
		private char cFallback;

		[Token(Token = "0x4000BCA")]
		[FieldOffset(Offset = "0x24")]
		private int iCount;

		[Token(Token = "0x4000BCB")]
		[FieldOffset(Offset = "0x28")]
		private int iSize;

		[Token(Token = "0x1700023E")]
		public override int Remaining
		{
			[Token(Token = "0x60016E4")]
			[Address(RVA = "0x1977080", Offset = "0x1975680", VA = "0x181977080", Slot = "6")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x60016E1")]
		[Address(RVA = "0x1977070", Offset = "0x1975670", VA = "0x181977070")]
		public DecoderUTF7FallbackBuffer(DecoderUTF7Fallback fallback)
		{
		}

		[Token(Token = "0x60016E2")]
		[Address(RVA = "0x1976F70", Offset = "0x1975570", VA = "0x181976F70", Slot = "4")]
		public override bool Fallback(byte[] bytesUnknown, int index)
		{
			return default(bool);
		}

		[Token(Token = "0x60016E3")]
		[Address(RVA = "0x1976FC0", Offset = "0x19755C0", VA = "0x181976FC0", Slot = "5")]
		public override char GetNextChar()
		{
			return default(char);
		}

		[Token(Token = "0x60016E5")]
		[Address(RVA = "0x1977060", Offset = "0x1975660", VA = "0x181977060", Slot = "7")]
		public override void Reset()
		{
		}

		[Token(Token = "0x60016E6")]
		[Address(RVA = "0x1976FE0", Offset = "0x19755E0", VA = "0x181976FE0", Slot = "9")]
		internal unsafe override int InternalFallback(byte[] bytes, byte* pBytes)
		{
			return default(int);
		}
	}

	[Token(Token = "0x4000BBF")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly UTF7Encoding s_default;

	[Token(Token = "0x4000BC0")]
	[FieldOffset(Offset = "0x38")]
	private byte[] _base64Bytes;

	[Token(Token = "0x4000BC1")]
	[FieldOffset(Offset = "0x40")]
	private sbyte[] _base64Values;

	[Token(Token = "0x4000BC2")]
	[FieldOffset(Offset = "0x48")]
	private bool[] _directEncode;

	[Token(Token = "0x4000BC3")]
	[FieldOffset(Offset = "0x50")]
	private bool _allowOptionals;

	[Token(Token = "0x60016BC")]
	[Address(RVA = "0x1986C30", Offset = "0x1985230", VA = "0x181986C30")]
	public UTF7Encoding()
	{
	}

	[Token(Token = "0x60016BD")]
	[Address(RVA = "0x1986C60", Offset = "0x1985260", VA = "0x181986C60")]
	public UTF7Encoding(bool allowOptionals)
	{
	}

	[Token(Token = "0x60016BE")]
	[Address(RVA = "0x1986890", Offset = "0x1984E90", VA = "0x181986890")]
	private void MakeTables()
	{
	}

	[Token(Token = "0x60016BF")]
	[Address(RVA = "0x1986B00", Offset = "0x1985100", VA = "0x181986B00", Slot = "5")]
	internal override void SetDefaultFallbacks()
	{
	}

	[Token(Token = "0x60016C0")]
	[Address(RVA = "0x1984BF0", Offset = "0x19831F0", VA = "0x181984BF0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60016C1")]
	[Address(RVA = "0x19864E0", Offset = "0x1984AE0", VA = "0x1819864E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60016C2")]
	[Address(RVA = "0x1984E80", Offset = "0x1983480", VA = "0x181984E80", Slot = "12")]
	public override int GetByteCount(char[] chars, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016C3")]
	[Address(RVA = "0x1984DE0", Offset = "0x19833E0", VA = "0x181984DE0", Slot = "11")]
	public override int GetByteCount(string s)
	{
		return default(int);
	}

	[Token(Token = "0x60016C4")]
	[Address(RVA = "0x1984CC0", Offset = "0x19832C0", VA = "0x181984CC0", Slot = "13")]
	[CLSCompliant(false)]
	public unsafe override int GetByteCount(char* chars, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016C5")]
	[Address(RVA = "0x19852F0", Offset = "0x19838F0", VA = "0x1819852F0", Slot = "19")]
	public override int GetBytes(string s, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60016C6")]
	[Address(RVA = "0x1985030", Offset = "0x1983630", VA = "0x181985030", Slot = "17")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60016C7")]
	[Address(RVA = "0x1985940", Offset = "0x1983F40", VA = "0x181985940", Slot = "21")]
	[CLSCompliant(false)]
	public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x60016C8")]
	[Address(RVA = "0x1985B60", Offset = "0x1984160", VA = "0x181985B60", Slot = "22")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016C9")]
	[Address(RVA = "0x1985A70", Offset = "0x1984070", VA = "0x181985A70", Slot = "23")]
	[CLSCompliant(false)]
	public unsafe override int GetCharCount(byte* bytes, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016CA")]
	[Address(RVA = "0x1985FB0", Offset = "0x19845B0", VA = "0x181985FB0", Slot = "26")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60016CB")]
	[Address(RVA = "0x1986270", Offset = "0x1984870", VA = "0x181986270", Slot = "27")]
	[CLSCompliant(false)]
	public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x60016CC")]
	[Address(RVA = "0x19866E0", Offset = "0x1984CE0", VA = "0x1819866E0", Slot = "35")]
	public override string GetString(byte[] bytes, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x60016CD")]
	[Address(RVA = "0x1984DB0", Offset = "0x19833B0", VA = "0x181984DB0", Slot = "14")]
	internal unsafe override int GetByteCount(char* chars, int count, System.Text.EncoderNLS baseEncoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016CE")]
	[Address(RVA = "0x19855C0", Offset = "0x1983BC0", VA = "0x1819855C0", Slot = "20")]
	internal unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, System.Text.EncoderNLS baseEncoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016CF")]
	[Address(RVA = "0x1985D10", Offset = "0x1984310", VA = "0x181985D10", Slot = "24")]
	internal unsafe override int GetCharCount(byte* bytes, int count, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016D0")]
	[Address(RVA = "0x1985D40", Offset = "0x1984340", VA = "0x181985D40", Slot = "28")]
	internal unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016D1")]
	[Address(RVA = "0x19863A0", Offset = "0x19849A0", VA = "0x1819863A0", Slot = "30")]
	public override System.Text.Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x60016D2")]
	[Address(RVA = "0x1986440", Offset = "0x1984A40", VA = "0x181986440", Slot = "31")]
	public override System.Text.Encoder GetEncoder()
	{
		return null;
	}

	[Token(Token = "0x60016D3")]
	[Address(RVA = "0x1986560", Offset = "0x1984B60", VA = "0x181986560", Slot = "32")]
	public override int GetMaxByteCount(int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x60016D4")]
	[Address(RVA = "0x1986650", Offset = "0x1984C50", VA = "0x181986650", Slot = "33")]
	public override int GetMaxCharCount(int byteCount)
	{
		return default(int);
	}
}
