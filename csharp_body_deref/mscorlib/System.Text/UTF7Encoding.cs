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
[Token(Token = "0x2000290")]
public class UTF7Encoding : Encoding
{
	[Serializable]
	[Token(Token = "0x2000291")]
	private sealed class Decoder : System.Text.DecoderNLS
	{
		[Token(Token = "0x4000B22")]
		[FieldOffset(Offset = "0x30")]
		internal int bits;

		[Token(Token = "0x4000B23")]
		[FieldOffset(Offset = "0x34")]
		internal int bitCount;

		[Token(Token = "0x4000B24")]
		[FieldOffset(Offset = "0x38")]
		internal bool firstByte;

		[Token(Token = "0x1700023A")]
		internal override bool HasState
		{
			[Token(Token = "0x60016B0")]
			[Address(RVA = "0x5315F90", Offset = "0x5314F90", VA = "0x5315F90", Slot = "14")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016AE")]
		[Address(RVA = "0x5315CC0", Offset = "0x5314CC0", VA = "0x5315CC0")]
		public Decoder(UTF7Encoding encoding)
		{
		}

		[Token(Token = "0x60016AF")]
		[Address(RVA = "0x5315F60", Offset = "0x5314F60", VA = "0x5315F60", Slot = "4")]
		public override void Reset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000292")]
	private sealed class Encoder : System.Text.EncoderNLS
	{
		[Token(Token = "0x4000B25")]
		[FieldOffset(Offset = "0x38")]
		internal int bits;

		[Token(Token = "0x4000B26")]
		[FieldOffset(Offset = "0x3C")]
		internal int bitCount;

		[Token(Token = "0x1700023B")]
		internal override bool HasState
		{
			[Token(Token = "0x60016B3")]
			[Address(RVA = "0x5315FD0", Offset = "0x5314FD0", VA = "0x5315FD0", Slot = "11")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016B1")]
		[Address(RVA = "0x5315D60", Offset = "0x5314D60", VA = "0x5315D60")]
		public Encoder(UTF7Encoding encoding)
		{
		}

		[Token(Token = "0x60016B2")]
		[Address(RVA = "0x5315FA0", Offset = "0x5314FA0", VA = "0x5315FA0", Slot = "4")]
		public override void Reset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000293")]
	private sealed class DecoderUTF7Fallback : DecoderFallback
	{
		[Token(Token = "0x1700023C")]
		public override int MaxCharCount
		{
			[Token(Token = "0x60016B6")]
			[Address(RVA = "0x5316050", Offset = "0x5315050", VA = "0x5316050", Slot = "5")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x60016B4")]
		[Address(RVA = "0x5314490", Offset = "0x5313490", VA = "0x5314490")]
		public DecoderUTF7Fallback()
		{
		}

		[Token(Token = "0x60016B5")]
		[Address(RVA = "0x5315FF0", Offset = "0x5314FF0", VA = "0x5315FF0", Slot = "4")]
		public override DecoderFallbackBuffer CreateFallbackBuffer()
		{
			return null;
		}

		[Token(Token = "0x60016B7")]
		[Address(RVA = "0x5316060", Offset = "0x5315060", VA = "0x5316060", Slot = "0")]
		public override bool Equals(object value)
		{
			return default(bool);
		}

		[Token(Token = "0x60016B8")]
		[Address(RVA = "0x53160A0", Offset = "0x53150A0", VA = "0x53160A0", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}
	}

	[Token(Token = "0x2000294")]
	private sealed class DecoderUTF7FallbackBuffer : DecoderFallbackBuffer
	{
		[Token(Token = "0x4000B27")]
		[FieldOffset(Offset = "0x20")]
		private char cFallback;

		[Token(Token = "0x4000B28")]
		[FieldOffset(Offset = "0x24")]
		private int iCount;

		[Token(Token = "0x4000B29")]
		[FieldOffset(Offset = "0x28")]
		private int iSize;

		[Token(Token = "0x1700023D")]
		public override int Remaining
		{
			[Token(Token = "0x60016BC")]
			[Address(RVA = "0x5316110", Offset = "0x5315110", VA = "0x5316110", Slot = "6")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x60016B9")]
		[Address(RVA = "0x5316040", Offset = "0x5315040", VA = "0x5316040")]
		public DecoderUTF7FallbackBuffer(DecoderUTF7Fallback fallback)
		{
		}

		[Token(Token = "0x60016BA")]
		[Address(RVA = "0x53160B0", Offset = "0x53150B0", VA = "0x53160B0", Slot = "4")]
		public override bool Fallback(byte[] bytesUnknown, int index)
		{
			return default(bool);
		}

		[Token(Token = "0x60016BB")]
		[Address(RVA = "0x53160F0", Offset = "0x53150F0", VA = "0x53160F0", Slot = "5")]
		public override char GetNextChar()
		{
			return default(char);
		}

		[Token(Token = "0x60016BD")]
		[Address(RVA = "0x5316120", Offset = "0x5315120", VA = "0x5316120", Slot = "7")]
		public override void Reset()
		{
		}

		[Token(Token = "0x60016BE")]
		[Address(RVA = "0x5316130", Offset = "0x5315130", VA = "0x5316130", Slot = "9")]
		internal unsafe override int InternalFallback(byte[] bytes, byte* pBytes)
		{
			return default(int);
		}
	}

	[Token(Token = "0x4000B1D")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly UTF7Encoding s_default;

	[Token(Token = "0x4000B1E")]
	[FieldOffset(Offset = "0x38")]
	private byte[] _base64Bytes;

	[Token(Token = "0x4000B1F")]
	[FieldOffset(Offset = "0x40")]
	private sbyte[] _base64Values;

	[Token(Token = "0x4000B20")]
	[FieldOffset(Offset = "0x48")]
	private bool[] _directEncode;

	[Token(Token = "0x4000B21")]
	[FieldOffset(Offset = "0x50")]
	private bool _allowOptionals;

	[Token(Token = "0x6001694")]
	[Address(RVA = "0x53140F0", Offset = "0x53130F0", VA = "0x53140F0")]
	public UTF7Encoding()
	{
	}

	[Token(Token = "0x6001695")]
	[Address(RVA = "0x5314110", Offset = "0x5313110", VA = "0x5314110")]
	public UTF7Encoding(bool allowOptionals)
	{
	}

	[Token(Token = "0x6001696")]
	[Address(RVA = "0x5314140", Offset = "0x5313140", VA = "0x5314140")]
	private void MakeTables()
	{
	}

	[Token(Token = "0x6001697")]
	[Address(RVA = "0x53143E0", Offset = "0x53133E0", VA = "0x53143E0", Slot = "5")]
	internal override void SetDefaultFallbacks()
	{
	}

	[Token(Token = "0x6001698")]
	[Address(RVA = "0x53144A0", Offset = "0x53134A0", VA = "0x53144A0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001699")]
	[Address(RVA = "0x5314560", Offset = "0x5313560", VA = "0x5314560", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600169A")]
	[Address(RVA = "0x53145C0", Offset = "0x53135C0", VA = "0x53145C0", Slot = "12")]
	public override int GetByteCount(char[] chars, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600169B")]
	[Address(RVA = "0x5314710", Offset = "0x5313710", VA = "0x5314710", Slot = "11")]
	public override int GetByteCount(string s)
	{
		return default(int);
	}

	[Token(Token = "0x600169C")]
	[Address(RVA = "0x53147A0", Offset = "0x53137A0", VA = "0x53147A0", Slot = "13")]
	[CLSCompliant(false)]
	public unsafe override int GetByteCount(char* chars, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600169D")]
	[Address(RVA = "0x5314870", Offset = "0x5313870", VA = "0x5314870", Slot = "19")]
	public override int GetBytes(string s, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600169E")]
	[Address(RVA = "0x5314AC0", Offset = "0x5313AC0", VA = "0x5314AC0", Slot = "17")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600169F")]
	[Address(RVA = "0x5314D40", Offset = "0x5313D40", VA = "0x5314D40", Slot = "21")]
	[CLSCompliant(false)]
	public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x60016A0")]
	[Address(RVA = "0x5314E30", Offset = "0x5313E30", VA = "0x5314E30", Slot = "22")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016A1")]
	[Address(RVA = "0x5314F80", Offset = "0x5313F80", VA = "0x5314F80", Slot = "23")]
	[CLSCompliant(false)]
	public unsafe override int GetCharCount(byte* bytes, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016A2")]
	[Address(RVA = "0x5315050", Offset = "0x5314050", VA = "0x5315050", Slot = "26")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60016A3")]
	[Address(RVA = "0x53152C0", Offset = "0x53142C0", VA = "0x53152C0", Slot = "27")]
	[CLSCompliant(false)]
	public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x60016A4")]
	[Address(RVA = "0x53153B0", Offset = "0x53143B0", VA = "0x53153B0", Slot = "36")]
	public override string GetString(byte[] bytes, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x60016A5")]
	[Address(RVA = "0x5315510", Offset = "0x5314510", VA = "0x5315510", Slot = "14")]
	internal unsafe override int GetByteCount(char* chars, int count, System.Text.EncoderNLS baseEncoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016A6")]
	[Address(RVA = "0x5315530", Offset = "0x5314530", VA = "0x5315530", Slot = "20")]
	internal unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, System.Text.EncoderNLS baseEncoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016A7")]
	[Address(RVA = "0x5315960", Offset = "0x5314960", VA = "0x5315960", Slot = "24")]
	internal unsafe override int GetCharCount(byte* bytes, int count, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016A8")]
	[Address(RVA = "0x5315980", Offset = "0x5314980", VA = "0x5315980", Slot = "28")]
	internal unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016A9")]
	[Address(RVA = "0x5315C70", Offset = "0x5314C70", VA = "0x5315C70", Slot = "31")]
	public override System.Text.Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x60016AA")]
	[Address(RVA = "0x5315CD0", Offset = "0x5314CD0", VA = "0x5315CD0", Slot = "32")]
	public override System.Text.Encoder GetEncoder()
	{
		return null;
	}

	[Token(Token = "0x60016AB")]
	[Address(RVA = "0x5315DC0", Offset = "0x5314DC0", VA = "0x5315DC0", Slot = "33")]
	public override int GetMaxByteCount(int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x60016AC")]
	[Address(RVA = "0x5315E70", Offset = "0x5314E70", VA = "0x5315E70", Slot = "34")]
	public override int GetMaxCharCount(int byteCount)
	{
		return default(int);
	}
}
