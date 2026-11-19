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
[Token(Token = "0x2000299")]
public class UnicodeEncoding : Encoding
{
	[Serializable]
	[Token(Token = "0x200029A")]
	private sealed class Decoder : System.Text.DecoderNLS
	{
		[Token(Token = "0x4000B38")]
		[FieldOffset(Offset = "0x30")]
		internal int lastByte;

		[Token(Token = "0x4000B39")]
		[FieldOffset(Offset = "0x34")]
		internal char lastChar;

		[Token(Token = "0x17000243")]
		internal override bool HasState
		{
			[Token(Token = "0x6001707")]
			[Address(RVA = "0x531DD20", Offset = "0x531CD20", VA = "0x531DD20", Slot = "14")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001705")]
		[Address(RVA = "0x531DCE0", Offset = "0x531CCE0", VA = "0x531DCE0")]
		public Decoder(UnicodeEncoding encoding)
		{
		}

		[Token(Token = "0x6001706")]
		[Address(RVA = "0x531DCF0", Offset = "0x531CCF0", VA = "0x531DCF0", Slot = "4")]
		public override void Reset()
		{
		}
	}

	[Token(Token = "0x4000B30")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly UnicodeEncoding s_bigEndianDefault;

	[Token(Token = "0x4000B31")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly UnicodeEncoding s_littleEndianDefault;

	[Token(Token = "0x4000B32")]
	[FieldOffset(Offset = "0x10")]
	private static readonly byte[] s_bigEndianPreamble;

	[Token(Token = "0x4000B33")]
	[FieldOffset(Offset = "0x18")]
	private static readonly byte[] s_littleEndianPreamble;

	[Token(Token = "0x4000B34")]
	[FieldOffset(Offset = "0x38")]
	internal bool isThrowException;

	[Token(Token = "0x4000B35")]
	[FieldOffset(Offset = "0x39")]
	internal bool bigEndian;

	[Token(Token = "0x4000B36")]
	[FieldOffset(Offset = "0x3A")]
	internal bool byteOrderMark;

	[Token(Token = "0x4000B37")]
	[FieldOffset(Offset = "0x20")]
	private static readonly ulong highLowPatternMask;

	[Token(Token = "0x17000242")]
	public override ReadOnlySpan<byte> Preamble
	{
		[Token(Token = "0x60016FF")]
		[Address(RVA = "0x531D650", Offset = "0x531C650", VA = "0x531D650", Slot = "7")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x60016E9")]
	[Address(RVA = "0x5319F30", Offset = "0x5318F30", VA = "0x5319F30")]
	public UnicodeEncoding()
	{
	}

	[Token(Token = "0x60016EA")]
	[Address(RVA = "0x5319F50", Offset = "0x5318F50", VA = "0x5319F50")]
	public UnicodeEncoding(bool bigEndian, bool byteOrderMark)
	{
	}

	[Token(Token = "0x60016EB")]
	[Address(RVA = "0x5319F80", Offset = "0x5318F80", VA = "0x5319F80")]
	public UnicodeEncoding(bool bigEndian, bool byteOrderMark, bool throwOnInvalidBytes)
	{
	}

	[Token(Token = "0x60016EC")]
	[Address(RVA = "0x5319FE0", Offset = "0x5318FE0", VA = "0x5319FE0", Slot = "5")]
	internal override void SetDefaultFallbacks()
	{
	}

	[Token(Token = "0x60016ED")]
	[Address(RVA = "0x531A150", Offset = "0x5319150", VA = "0x531A150", Slot = "12")]
	public override int GetByteCount(char[] chars, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016EE")]
	[Address(RVA = "0x531A2A0", Offset = "0x53192A0", VA = "0x531A2A0", Slot = "11")]
	public override int GetByteCount(string s)
	{
		return default(int);
	}

	[Token(Token = "0x60016EF")]
	[Address(RVA = "0x531A330", Offset = "0x5319330", VA = "0x531A330", Slot = "13")]
	[CLSCompliant(false)]
	public unsafe override int GetByteCount(char* chars, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016F0")]
	[Address(RVA = "0x531A400", Offset = "0x5319400", VA = "0x531A400", Slot = "19")]
	public override int GetBytes(string s, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60016F1")]
	[Address(RVA = "0x531A650", Offset = "0x5319650", VA = "0x531A650", Slot = "17")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60016F2")]
	[Address(RVA = "0x531A8D0", Offset = "0x53198D0", VA = "0x531A8D0", Slot = "21")]
	[CLSCompliant(false)]
	public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x60016F3")]
	[Address(RVA = "0x531A9C0", Offset = "0x53199C0", VA = "0x531A9C0", Slot = "22")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016F4")]
	[Address(RVA = "0x531AB10", Offset = "0x5319B10", VA = "0x531AB10", Slot = "23")]
	[CLSCompliant(false)]
	public unsafe override int GetCharCount(byte* bytes, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60016F5")]
	[Address(RVA = "0x531ABE0", Offset = "0x5319BE0", VA = "0x531ABE0", Slot = "26")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60016F6")]
	[Address(RVA = "0x531AE50", Offset = "0x5319E50", VA = "0x531AE50", Slot = "27")]
	[CLSCompliant(false)]
	public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x60016F7")]
	[Address(RVA = "0x531AF40", Offset = "0x5319F40", VA = "0x531AF40", Slot = "36")]
	public override string GetString(byte[] bytes, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x60016F8")]
	[Address(RVA = "0x531B0A0", Offset = "0x531A0A0", VA = "0x531B0A0", Slot = "14")]
	internal unsafe override int GetByteCount(char* chars, int count, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016F9")]
	[Address(RVA = "0x531B770", Offset = "0x531A770", VA = "0x531B770", Slot = "20")]
	internal unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016FA")]
	[Address(RVA = "0x531C040", Offset = "0x531B040", VA = "0x531C040", Slot = "24")]
	internal unsafe override int GetCharCount(byte* bytes, int count, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016FB")]
	[Address(RVA = "0x531C870", Offset = "0x531B870", VA = "0x531C870", Slot = "28")]
	internal unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x60016FC")]
	[Address(RVA = "0x531D430", Offset = "0x531C430", VA = "0x531D430", Slot = "32")]
	public override Encoder GetEncoder()
	{
		return null;
	}

	[Token(Token = "0x60016FD")]
	[Address(RVA = "0x531D4C0", Offset = "0x531C4C0", VA = "0x531D4C0", Slot = "31")]
	public override System.Text.Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x60016FE")]
	[Address(RVA = "0x531D510", Offset = "0x531C510", VA = "0x531D510", Slot = "6")]
	public override byte[] GetPreamble()
	{
		return null;
	}

	[Token(Token = "0x6001700")]
	[Address(RVA = "0x531D800", Offset = "0x531C800", VA = "0x531D800", Slot = "33")]
	public override int GetMaxByteCount(int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001701")]
	[Address(RVA = "0x531D8F0", Offset = "0x531C8F0", VA = "0x531D8F0", Slot = "34")]
	public override int GetMaxCharCount(int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001702")]
	[Address(RVA = "0x531D9F0", Offset = "0x531C9F0", VA = "0x531D9F0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001703")]
	[Address(RVA = "0x531DAF0", Offset = "0x531CAF0", VA = "0x531DAF0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
