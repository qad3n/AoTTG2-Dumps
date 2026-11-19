// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.DecoderNLS
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x200027A")]
internal class DecoderNLS : Decoder
{
	[Token(Token = "0x4000ADE")]
	[FieldOffset(Offset = "0x20")]
	private Encoding _encoding;

	[Token(Token = "0x4000ADF")]
	[FieldOffset(Offset = "0x28")]
	private bool _mustFlush;

	[Token(Token = "0x4000AE0")]
	[FieldOffset(Offset = "0x29")]
	internal bool _throwOnOverflow;

	[Token(Token = "0x4000AE1")]
	[FieldOffset(Offset = "0x2C")]
	internal int _bytesUsed;

	[Token(Token = "0x1700021C")]
	public bool MustFlush
	{
		[Token(Token = "0x60015A8")]
		[Address(RVA = "0x55540E0", Offset = "0x55530E0", VA = "0x55540E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700021D")]
	internal virtual bool HasState
	{
		[Token(Token = "0x60015A9")]
		[Address(RVA = "0x55540F0", Offset = "0x55530F0", VA = "0x55540F0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600159E")]
	[Address(RVA = "0x5551A30", Offset = "0x5550A30", VA = "0x5551A30")]
	internal DecoderNLS(Encoding encoding)
	{
	}

	[Token(Token = "0x600159F")]
	[Address(RVA = "0x55535E0", Offset = "0x55525E0", VA = "0x55535E0", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x60015A0")]
	[Address(RVA = "0x5553600", Offset = "0x5552600", VA = "0x5553600", Slot = "5")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60015A1")]
	[Address(RVA = "0x5553620", Offset = "0x5552620", VA = "0x5553620", Slot = "6")]
	public override int GetCharCount(byte[] bytes, int index, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x60015A2")]
	[Address(RVA = "0x55537E0", Offset = "0x55527E0", VA = "0x55537E0", Slot = "7")]
	public unsafe override int GetCharCount(byte* bytes, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x60015A3")]
	[Address(RVA = "0x55538D0", Offset = "0x55528D0", VA = "0x55538D0", Slot = "8")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60015A4")]
	[Address(RVA = "0x55538F0", Offset = "0x55528F0", VA = "0x55538F0", Slot = "9")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x60015A5")]
	[Address(RVA = "0x5553B80", Offset = "0x5552B80", VA = "0x5553B80", Slot = "10")]
	public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x60015A6")]
	[Address(RVA = "0x5553C90", Offset = "0x5552C90", VA = "0x5553C90", Slot = "12")]
	public override void Convert(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, int charCount, bool flush, out int bytesUsed, out int charsUsed, out bool completed)
	{
	}

	[Token(Token = "0x60015A7")]
	[Address(RVA = "0x5553F40", Offset = "0x5552F40", VA = "0x5553F40", Slot = "13")]
	public unsafe override void Convert(byte* bytes, int byteCount, char* chars, int charCount, bool flush, out int bytesUsed, out int charsUsed, out bool completed)
	{
	}

	[Token(Token = "0x60015AA")]
	[Address(RVA = "0x5554100", Offset = "0x5553100", VA = "0x5554100")]
	internal void ClearMustFlush()
	{
	}
}
