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
[Token(Token = "0x20002C1")]
public class UnicodeEncoding : Encoding
{
	[Serializable]
	[Token(Token = "0x20002C2")]
	private sealed class Decoder : System.Text.DecoderNLS
	{
		[Token(Token = "0x4000BDA")]
		[FieldOffset(Offset = "0x30")]
		internal int lastByte;

		[Token(Token = "0x4000BDB")]
		[FieldOffset(Offset = "0x34")]
		internal char lastChar;

		[Token(Token = "0x17000244")]
		internal override bool HasState
		{
			[Token(Token = "0x600172F")]
			[Address(RVA = "0x198C890", Offset = "0x198AE90", VA = "0x18198C890", Slot = "14")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600172D")]
		[Address(RVA = "0x198C880", Offset = "0x198AE80", VA = "0x18198C880")]
		public Decoder(UnicodeEncoding encoding)
		{
		}

		[Token(Token = "0x600172E")]
		[Address(RVA = "0x198C850", Offset = "0x198AE50", VA = "0x18198C850", Slot = "4")]
		public override void Reset()
		{
		}
	}

	[Token(Token = "0x4000BD2")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly UnicodeEncoding s_bigEndianDefault;

	[Token(Token = "0x4000BD3")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly UnicodeEncoding s_littleEndianDefault;

	[Token(Token = "0x4000BD4")]
	[FieldOffset(Offset = "0x10")]
	private static readonly byte[] s_bigEndianPreamble;

	[Token(Token = "0x4000BD5")]
	[FieldOffset(Offset = "0x18")]
	private static readonly byte[] s_littleEndianPreamble;

	[Token(Token = "0x4000BD6")]
	[FieldOffset(Offset = "0x38")]
	internal bool isThrowException;

	[Token(Token = "0x4000BD7")]
	[FieldOffset(Offset = "0x39")]
	internal bool bigEndian;

	[Token(Token = "0x4000BD8")]
	[FieldOffset(Offset = "0x3A")]
	internal bool byteOrderMark;

	[Token(Token = "0x4000BD9")]
	[FieldOffset(Offset = "0x20")]
	private static readonly ulong highLowPatternMask;

	[Token(Token = "0x17000243")]
	public override ReadOnlySpan<byte> Preamble
	{
		[Token(Token = "0x6001727")]
		[Address(RVA = "0x19A1100", Offset = "0x199F700", VA = "0x1819A1100", Slot = "7")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x6001711")]
	[Address(RVA = "0x19A10D0", Offset = "0x199F6D0", VA = "0x1819A10D0")]
	public UnicodeEncoding()
	{
	}

	[Token(Token = "0x6001712")]
	[Address(RVA = "0x19A1080", Offset = "0x199F680", VA = "0x1819A1080")]
	public UnicodeEncoding(bool bigEndian, bool byteOrderMark)
	{
	}

	[Token(Token = "0x6001713")]
	[Address(RVA = "0x19A1020", Offset = "0x199F620", VA = "0x1819A1020")]
	public UnicodeEncoding(bool bigEndian, bool byteOrderMark, bool throwOnInvalidBytes)
	{
	}

	[Token(Token = "0x6001714")]
	[Address(RVA = "0x19A0D70", Offset = "0x199F370", VA = "0x1819A0D70", Slot = "5")]
	internal override void SetDefaultFallbacks()
	{
	}

	[Token(Token = "0x6001715")]
	[Address(RVA = "0x199D310", Offset = "0x199B910", VA = "0x18199D310", Slot = "12")]
	public override int GetByteCount(char[] chars, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001716")]
	[Address(RVA = "0x199DC20", Offset = "0x199C220", VA = "0x18199DC20", Slot = "11")]
	public override int GetByteCount(string s)
	{
		return default(int);
	}

	[Token(Token = "0x6001717")]
	[Address(RVA = "0x199DCC0", Offset = "0x199C2C0", VA = "0x18199DCC0", Slot = "13")]
	[CLSCompliant(false)]
	public unsafe override int GetByteCount(char* chars, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001718")]
	[Address(RVA = "0x199DDB0", Offset = "0x199C3B0", VA = "0x18199DDB0", Slot = "19")]
	public override int GetBytes(string s, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001719")]
	[Address(RVA = "0x199E9B0", Offset = "0x199CFB0", VA = "0x18199E9B0", Slot = "17")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600171A")]
	[Address(RVA = "0x199EC70", Offset = "0x199D270", VA = "0x18199EC70", Slot = "21")]
	[CLSCompliant(false)]
	public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x600171B")]
	[Address(RVA = "0x199F6B0", Offset = "0x199DCB0", VA = "0x18199F6B0", Slot = "22")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600171C")]
	[Address(RVA = "0x199F5C0", Offset = "0x199DBC0", VA = "0x18199F5C0", Slot = "23")]
	[CLSCompliant(false)]
	public unsafe override int GetCharCount(byte* bytes, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600171D")]
	[Address(RVA = "0x19A0460", Offset = "0x199EA60", VA = "0x1819A0460", Slot = "26")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600171E")]
	[Address(RVA = "0x19A0330", Offset = "0x199E930", VA = "0x1819A0330", Slot = "27")]
	[CLSCompliant(false)]
	public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x600171F")]
	[Address(RVA = "0x19A0BC0", Offset = "0x199F1C0", VA = "0x1819A0BC0", Slot = "35")]
	public override string GetString(byte[] bytes, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x6001720")]
	[Address(RVA = "0x199D4C0", Offset = "0x199BAC0", VA = "0x18199D4C0", Slot = "14")]
	internal unsafe override int GetByteCount(char* chars, int count, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001721")]
	[Address(RVA = "0x199E080", Offset = "0x199C680", VA = "0x18199E080", Slot = "20")]
	internal unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, System.Text.EncoderNLS encoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001722")]
	[Address(RVA = "0x199EDA0", Offset = "0x199D3A0", VA = "0x18199EDA0", Slot = "24")]
	internal unsafe override int GetCharCount(byte* bytes, int count, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001723")]
	[Address(RVA = "0x199F860", Offset = "0x199DE60", VA = "0x18199F860", Slot = "28")]
	internal unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, System.Text.DecoderNLS baseDecoder)
	{
		return default(int);
	}

	[Token(Token = "0x6001724")]
	[Address(RVA = "0x19A0780", Offset = "0x199ED80", VA = "0x1819A0780", Slot = "31")]
	public override Encoder GetEncoder()
	{
		return null;
	}

	[Token(Token = "0x6001725")]
	[Address(RVA = "0x19A0720", Offset = "0x199ED20", VA = "0x1819A0720", Slot = "30")]
	public override System.Text.Decoder GetDecoder()
	{
		return null;
	}

	[Token(Token = "0x6001726")]
	[Address(RVA = "0x19A0B10", Offset = "0x199F110", VA = "0x1819A0B10", Slot = "6")]
	public override byte[] GetPreamble()
	{
		return null;
	}

	[Token(Token = "0x6001728")]
	[Address(RVA = "0x19A0880", Offset = "0x199EE80", VA = "0x1819A0880", Slot = "32")]
	public override int GetMaxByteCount(int charCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001729")]
	[Address(RVA = "0x19A09C0", Offset = "0x199EFC0", VA = "0x1819A09C0", Slot = "33")]
	public override int GetMaxCharCount(int byteCount)
	{
		return default(int);
	}

	[Token(Token = "0x600172A")]
	[Address(RVA = "0x199D200", Offset = "0x199B800", VA = "0x18199D200", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600172B")]
	[Address(RVA = "0x19A07E0", Offset = "0x199EDE0", VA = "0x1819A07E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
