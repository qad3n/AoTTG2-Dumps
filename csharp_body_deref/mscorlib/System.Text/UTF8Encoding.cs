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
[Token(Token = "0x20002BD")]
public class UTF8Encoding : Encoding
{
	[Token(Token = "0x20002BE")]
	internal sealed class UTF8EncodingSealed : UTF8Encoding
	{
		[Token(Token = "0x17000240")]
		public override ReadOnlySpan<byte> Preamble
		{
			[Token(Token = "0x600170A")]
			[Address(RVA = "0x199D150", Offset = "0x199B750", VA = "0x18199D150", Slot = "7")]
			get
			{
				return default(ReadOnlySpan<byte>);
			}
		}

		[Token(Token = "0x6001709")]
		[Address(RVA = "0x199D0F0", Offset = "0x199B6F0", VA = "0x18199D0F0")]
		public UTF8EncodingSealed(bool encoderShouldEmitUTF8Identifier)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x20002BF")]
	private sealed class UTF8Encoder : System.Text.EncoderNLS
	{
		[Token(Token = "0x4000BD0")]
		[FieldOffset(Offset = "0x38")]
		internal int surrogateChar;

		[Token(Token = "0x17000241")]
		internal override bool HasState
		{
			[Token(Token = "0x600170D")]
			[Address(RVA = "0x199D0E0", Offset = "0x199B6E0", VA = "0x18199D0E0", Slot = "11")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600170B")]
		[Address(RVA = "0x199D0D0", Offset = "0x199B6D0", VA = "0x18199D0D0")]
		public UTF8Encoder(UTF8Encoding encoding)
		{
		}

		[Token(Token = "0x600170C")]
		[Address(RVA = "0x199D0A0", Offset = "0x199B6A0", VA = "0x18199D0A0", Slot = "4")]
		public override void Reset()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x20002C0")]
	private sealed class UTF8Decoder : System.Text.DecoderNLS
	{
		[Token(Token = "0x4000BD1")]
		[FieldOffset(Offset = "0x30")]
		internal int bits;

		[Token(Token = "0x17000242")]
		internal override bool HasState
		{
			[Token(Token = "0x6001710")]
			[Address(RVA = "0x199D090", Offset = "0x199B690", VA = "0x18199D090", Slot = "14")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600170E")]
		[Address(RVA = "0x199D080", Offset = "0x199B680", VA = "0x18199D080")]
		public UTF8Decoder(UTF8Encoding encoding)
		{
		}

		[Token(Token = "0x600170F")]
		[Address(RVA = "0x199D050", Offset = "0x199B650", VA = "0x18199D050", Slot = "4")]
		public override void Reset()
		{
		}
	}

	[Token(Token = "0x4000BCC")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly UTF8EncodingSealed s_default;

	[Token(Token = "0x4000BCD")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly byte[] s_preamble;

	[Token(Token = "0x4000BCE")]
	[FieldOffset(Offset = "0x38")]
	internal readonly bool _emitUTF8Identifier;

	[Token(Token = "0x4000BCF")]
	[FieldOffset(Offset = "0x39")]
	private bool _isThrowException;

	[Token(Token = "0x1700023F")]
	public override ReadOnlySpan<byte> Preamble
	{
		[Token(Token = "0x6001705")]
		[Address(RVA = "0x198A5D0", Offset = "0x1988BD0", VA = "0x18198A5D0", Slot = "7")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x60016E7")]
	[Address(RVA = "0x198A570", Offset = "0x1988B70", VA = "0x18198A570")]
	public UTF8Encoding()
	{
	}

	[Token(Token = "0x60016E8")]
	[Address(RVA = "0x198A5A0", Offset = "0x1988BA0", VA = "0x18198A5A0")]
	public UTF8Encoding(bool encoderShouldEmitUTF8Identifier)
	{
	}

	[Token(Token = "0x60016E9")]
	[Address(RVA = "0x198A510", Offset = "0x1988B10", VA = "0x18198A510")]
	public UTF8Encoding(bool encoderShouldEmitUTF8Identifier, bool throwOnInvalidBytes)
	{
	}

	[Token(Token = "0x60016EA")]
	[Address(RVA = "0x198A350", Offset = "0x1988950", VA = "0x18198A350", Slot = "5")]
	internal override void SetDefaultFallbacks()
	{
	}

	[Token(Token = "0x60016EB")]
	[Address(RVA = "0x19875B0", Offset = "0x1985BB0", VA = "0x1819875B0", Slot = "12")]
	public override int GetByteCount(char[] chars, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016EC")]
	[Address(RVA = "0x1986E40", Offset = "0x1985440", VA = "0x181986E40", Slot = "11")]
	public override int GetByteCount(string chars)
	{
		return default(int);
	}

	[Token(Token = "0x60016ED")]
	[Address(RVA = "0x1987760", Offset = "0x1985D60", VA = "0x181987760", Slot = "13")]
	[CLSCompliant(false)]
	public unsafe override int GetByteCount(char* chars, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016EE")]
	[Address(RVA = "0x1988440", Offset = "0x1986A40", VA = "0x181988440", Slot = "19")]
	public override int GetBytes(string s, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60016EF")]
	[Address(RVA = "0x1988710", Offset = "0x1986D10", VA = "0x181988710", Slot = "17")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60016F0")]
	[Address(RVA = "0x1988310", Offset = "0x1986910", VA = "0x181988310", Slot = "21")]
	[CLSCompliant(false)]
	public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x60016F1")]
	[Address(RVA = "0x1988FC0", Offset = "0x19875C0", VA = "0x181988FC0", Slot = "22")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016F2")]
	[Address(RVA = "0x1988ED0", Offset = "0x19874D0", VA = "0x181988ED0", Slot = "23")]
	[CLSCompliant(false)]
	public unsafe override int GetCharCount(byte* bytes, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016F3")]
	[Address(RVA = "0x1989170", Offset = "0x1987770", VA = "0x181989170", Slot = "26")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60016F4")]
	[Address(RVA = "0x1989C00", Offset = "0x1988200", VA = "0x181989C00", Slot = "27")]
	[CLSCompliant(false)]
	public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x60016F5")]
	[Address(RVA = "0x198A170", Offset = "0x1988770", VA = "0x18198A170", Slot = "35")]
	public override string GetString(byte[] bytes, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x60016F6")]
	[Address(RVA = "0x1986EE0", Offset = "0x19854E0", VA = "0x181986EE0", Slot = "14")]
	internal unsafe override int GetByteCount(char* chars, int count, System.Text.EncoderNLS baseEncoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016F7")]
	[Address(RVA = "0x198A340", Offset = "0x1988940", VA = "0x18198A340")]
	private unsafe static int PtrDiff(char* a, char* b)
	{
		return default(int);
	}

	[Token(Token = "0x60016F8")]
	[Address(RVA = "0x198A330", Offset = "0x1988930", VA = "0x18198A330")]
	private unsafe static int PtrDiff(byte* a, byte* b)
	{
		return default(int);
	}

	[Token(Token = "0x60016F9")]
	[Address(RVA = "0x198A320", Offset = "0x1988920", VA = "0x18198A320")]
	private static bool InRange(int ch, int start, int end)
	{
		return default(bool);
	}

	[Token(Token = "0x60016FA")]
	[Address(RVA = "0x1987AC0", Offset = "0x19860C0", VA = "0x181987AC0", Slot = "20")]
	internal unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, System.Text.EncoderNLS baseEncoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016FB")]
	[Address(RVA = "0x19889D0", Offset = "0x1986FD0", VA = "0x1819889D0", Slot = "24")]
	internal unsafe override int GetCharCount(byte* bytes, int count, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016FC")]
	[Address(RVA = "0x1989430", Offset = "0x1987A30", VA = "0x181989430", Slot = "28")]
	internal unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016FD")]
	[Address(RVA = "0x1986DC0", Offset = "0x19853C0", VA = "0x181986DC0")]
	private unsafe bool FallbackInvalidByteSequence(ref byte* pSrc, int ch, DecoderFallbackBuffer fallback, ref char* pTarget)
	{
		return default(bool);
	}

	[Token(Token = "0x60016FE")]
	[Address(RVA = "0x1986D70", Offset = "0x1985370", VA = "0x181986D70")]
	private unsafe int FallbackInvalidByteSequence(byte* pSrc, int ch, DecoderFallbackBuffer fallback)
	{
		return default(int);
	}

	[Token(Token = "0x60016FF")]
	[Address(RVA = "0x1987850", Offset = "0x1985E50", VA = "0x181987850")]
	private unsafe byte[] GetBytesUnknown(ref byte* pSrc, int ch)
	{
		return null;
	}

	[Token(Token = "0x6001700")]
	[Address(RVA = "0x1989D30", Offset = "0x1988330", VA = "0x181989D30", Slot = "30")]
	public override Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x6001701")]
	[Address(RVA = "0x1989D90", Offset = "0x1988390", VA = "0x181989D90", Slot = "31")]
	public override Encoder GetEncoder()
	{
		return null;
	}

	[Token(Token = "0x6001702")]
	[Address(RVA = "0x1989E60", Offset = "0x1988460", VA = "0x181989E60", Slot = "32")]
	public override int GetMaxByteCount(int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001703")]
	[Address(RVA = "0x1989FA0", Offset = "0x19885A0", VA = "0x181989FA0", Slot = "33")]
	public override int GetMaxCharCount(int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001704")]
	[Address(RVA = "0x198A0E0", Offset = "0x19886E0", VA = "0x18198A0E0", Slot = "6")]
	public override byte[] GetPreamble()
	{
		return null;
	}

	[Token(Token = "0x6001706")]
	[Address(RVA = "0x1986CA0", Offset = "0x19852A0", VA = "0x181986CA0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001707")]
	[Address(RVA = "0x1989DF0", Offset = "0x19883F0", VA = "0x181989DF0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
