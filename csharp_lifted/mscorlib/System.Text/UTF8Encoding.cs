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
[Token(Token = "0x2000295")]
public class UTF8Encoding : Encoding
{
	[Token(Token = "0x2000296")]
	internal sealed class UTF8EncodingSealed : UTF8Encoding
	{
		[Token(Token = "0x1700023F")]
		public override ReadOnlySpan<byte> Preamble
		{
			[Token(Token = "0x60016E2")]
			[Address(RVA = "0x5319DA0", Offset = "0x5318DA0", VA = "0x5319DA0", Slot = "7")]
			get
			{
				return default(ReadOnlySpan<byte>);
			}
		}

		[Token(Token = "0x60016E1")]
		[Address(RVA = "0x5319D40", Offset = "0x5318D40", VA = "0x5319D40")]
		public UTF8EncodingSealed(bool encoderShouldEmitUTF8Identifier)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000297")]
	private sealed class UTF8Encoder : System.Text.EncoderNLS
	{
		[Token(Token = "0x4000B2E")]
		[FieldOffset(Offset = "0x38")]
		internal int surrogateChar;

		[Token(Token = "0x17000240")]
		internal override bool HasState
		{
			[Token(Token = "0x60016E5")]
			[Address(RVA = "0x5319EE0", Offset = "0x5318EE0", VA = "0x5319EE0", Slot = "11")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016E3")]
		[Address(RVA = "0x5319640", Offset = "0x5318640", VA = "0x5319640")]
		public UTF8Encoder(UTF8Encoding encoding)
		{
		}

		[Token(Token = "0x60016E4")]
		[Address(RVA = "0x5319EB0", Offset = "0x5318EB0", VA = "0x5319EB0", Slot = "4")]
		public override void Reset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000298")]
	private sealed class UTF8Decoder : System.Text.DecoderNLS
	{
		[Token(Token = "0x4000B2F")]
		[FieldOffset(Offset = "0x30")]
		internal int bits;

		[Token(Token = "0x17000241")]
		internal override bool HasState
		{
			[Token(Token = "0x60016E8")]
			[Address(RVA = "0x5319F20", Offset = "0x5318F20", VA = "0x5319F20", Slot = "14")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60016E6")]
		[Address(RVA = "0x53195A0", Offset = "0x53185A0", VA = "0x53195A0")]
		public UTF8Decoder(UTF8Encoding encoding)
		{
		}

		[Token(Token = "0x60016E7")]
		[Address(RVA = "0x5319EF0", Offset = "0x5318EF0", VA = "0x5319EF0", Slot = "4")]
		public override void Reset()
		{
		}
	}

	[Token(Token = "0x4000B2A")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly UTF8EncodingSealed s_default;

	[Token(Token = "0x4000B2B")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly byte[] s_preamble;

	[Token(Token = "0x4000B2C")]
	[FieldOffset(Offset = "0x38")]
	internal readonly bool _emitUTF8Identifier;

	[Token(Token = "0x4000B2D")]
	[FieldOffset(Offset = "0x39")]
	private bool _isThrowException;

	[Token(Token = "0x1700023E")]
	public override ReadOnlySpan<byte> Preamble
	{
		[Token(Token = "0x60016DD")]
		[Address(RVA = "0x5319990", Offset = "0x5318990", VA = "0x5319990", Slot = "7")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x60016BF")]
	[Address(RVA = "0x53161A0", Offset = "0x53151A0", VA = "0x53161A0")]
	public UTF8Encoding()
	{
	}

	[Token(Token = "0x60016C0")]
	[Address(RVA = "0x53161C0", Offset = "0x53151C0", VA = "0x53161C0")]
	public UTF8Encoding(bool encoderShouldEmitUTF8Identifier)
	{
	}

	[Token(Token = "0x60016C1")]
	[Address(RVA = "0x53161F0", Offset = "0x53151F0", VA = "0x53161F0")]
	public UTF8Encoding(bool encoderShouldEmitUTF8Identifier, bool throwOnInvalidBytes)
	{
	}

	[Token(Token = "0x60016C2")]
	[Address(RVA = "0x5316240", Offset = "0x5315240", VA = "0x5316240", Slot = "5")]
	internal override void SetDefaultFallbacks()
	{
	}

	[Token(Token = "0x60016C3")]
	[Address(RVA = "0x53163B0", Offset = "0x53153B0", VA = "0x53163B0", Slot = "12")]
	public override int GetByteCount(char[] chars, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016C4")]
	[Address(RVA = "0x5316500", Offset = "0x5315500", VA = "0x5316500", Slot = "11")]
	public override int GetByteCount(string chars)
	{
		return default(int);
	}

	[Token(Token = "0x60016C5")]
	[Address(RVA = "0x5316590", Offset = "0x5315590", VA = "0x5316590", Slot = "13")]
	[CLSCompliant(false)]
	public unsafe override int GetByteCount(char* chars, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016C6")]
	[Address(RVA = "0x5316660", Offset = "0x5315660", VA = "0x5316660", Slot = "19")]
	public override int GetBytes(string s, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60016C7")]
	[Address(RVA = "0x53168B0", Offset = "0x53158B0", VA = "0x53168B0", Slot = "17")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60016C8")]
	[Address(RVA = "0x5316B30", Offset = "0x5315B30", VA = "0x5316B30", Slot = "21")]
	[CLSCompliant(false)]
	public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x60016C9")]
	[Address(RVA = "0x5316C20", Offset = "0x5315C20", VA = "0x5316C20", Slot = "22")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016CA")]
	[Address(RVA = "0x5316D70", Offset = "0x5315D70", VA = "0x5316D70", Slot = "23")]
	[CLSCompliant(false)]
	public unsafe override int GetCharCount(byte* bytes, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016CB")]
	[Address(RVA = "0x5316E40", Offset = "0x5315E40", VA = "0x5316E40", Slot = "26")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60016CC")]
	[Address(RVA = "0x53170B0", Offset = "0x53160B0", VA = "0x53170B0", Slot = "27")]
	[CLSCompliant(false)]
	public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x60016CD")]
	[Address(RVA = "0x53171A0", Offset = "0x53161A0", VA = "0x53171A0", Slot = "36")]
	public override string GetString(byte[] bytes, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x60016CE")]
	[Address(RVA = "0x5317300", Offset = "0x5316300", VA = "0x5317300", Slot = "14")]
	internal unsafe override int GetByteCount(char* chars, int count, System.Text.EncoderNLS baseEncoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016CF")]
	[Address(RVA = "0x5317AE0", Offset = "0x5316AE0", VA = "0x5317AE0")]
	private unsafe static int PtrDiff(char* a, char* b)
	{
		return default(int);
	}

	[Token(Token = "0x60016D0")]
	[Address(RVA = "0x5317AF0", Offset = "0x5316AF0", VA = "0x5317AF0")]
	private unsafe static int PtrDiff(byte* a, byte* b)
	{
		return default(int);
	}

	[Token(Token = "0x60016D1")]
	[Address(RVA = "0x5317AD0", Offset = "0x5316AD0", VA = "0x5317AD0")]
	private static bool InRange(int ch, int start, int end)
	{
		return default(bool);
	}

	[Token(Token = "0x60016D2")]
	[Address(RVA = "0x5317B00", Offset = "0x5316B00", VA = "0x5317B00", Slot = "20")]
	internal unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, System.Text.EncoderNLS baseEncoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016D3")]
	[Address(RVA = "0x5318440", Offset = "0x5317440", VA = "0x5318440", Slot = "24")]
	internal unsafe override int GetCharCount(byte* bytes, int count, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016D4")]
	[Address(RVA = "0x5318A30", Offset = "0x5317A30", VA = "0x5318A30", Slot = "28")]
	internal unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016D5")]
	[Address(RVA = "0x53192A0", Offset = "0x53182A0", VA = "0x53192A0")]
	private unsafe bool FallbackInvalidByteSequence(ref byte* pSrc, int ch, DecoderFallbackBuffer fallback, ref char* pTarget)
	{
		return default(bool);
	}

	[Token(Token = "0x60016D6")]
	[Address(RVA = "0x53189E0", Offset = "0x53179E0", VA = "0x53189E0")]
	private unsafe int FallbackInvalidByteSequence(byte* pSrc, int ch, DecoderFallbackBuffer fallback)
	{
		return default(int);
	}

	[Token(Token = "0x60016D7")]
	[Address(RVA = "0x5319300", Offset = "0x5318300", VA = "0x5319300")]
	private unsafe byte[] GetBytesUnknown(ref byte* pSrc, int ch)
	{
		return null;
	}

	[Token(Token = "0x60016D8")]
	[Address(RVA = "0x5319550", Offset = "0x5318550", VA = "0x5319550", Slot = "31")]
	public override Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x60016D9")]
	[Address(RVA = "0x53195B0", Offset = "0x53185B0", VA = "0x53195B0", Slot = "32")]
	public override Encoder GetEncoder()
	{
		return null;
	}

	[Token(Token = "0x60016DA")]
	[Address(RVA = "0x53196A0", Offset = "0x53186A0", VA = "0x53196A0", Slot = "33")]
	public override int GetMaxByteCount(int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x60016DB")]
	[Address(RVA = "0x5319790", Offset = "0x5318790", VA = "0x5319790", Slot = "34")]
	public override int GetMaxCharCount(int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x60016DC")]
	[Address(RVA = "0x5319880", Offset = "0x5318880", VA = "0x5319880", Slot = "6")]
	public override byte[] GetPreamble()
	{
		return null;
	}

	[Token(Token = "0x60016DE")]
	[Address(RVA = "0x5319B10", Offset = "0x5318B10", VA = "0x5319B10", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60016DF")]
	[Address(RVA = "0x5319BD0", Offset = "0x5318BD0", VA = "0x5319BD0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
