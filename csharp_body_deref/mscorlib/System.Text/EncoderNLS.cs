// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.EncoderNLS
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x200027D")]
internal class EncoderNLS : Encoder
{
	[Token(Token = "0x4000B56")]
	[FieldOffset(Offset = "0x20")]
	internal char _charLeftOver;

	[Token(Token = "0x4000B57")]
	[FieldOffset(Offset = "0x28")]
	private Encoding _encoding;

	[Token(Token = "0x4000B58")]
	[FieldOffset(Offset = "0x30")]
	private bool _mustFlush;

	[Token(Token = "0x4000B59")]
	[FieldOffset(Offset = "0x31")]
	internal bool _throwOnOverflow;

	[Token(Token = "0x4000B5A")]
	[FieldOffset(Offset = "0x34")]
	internal int _charsUsed;

	[Token(Token = "0x1700022C")]
	public Encoding Encoding
	{
		[Token(Token = "0x60015B8")]
		[Address(RVA = "0x3AFFC70", Offset = "0x3AFFC70", VA = "0x3AFFC70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022D")]
	public bool MustFlush
	{
		[Token(Token = "0x60015B9")]
		[Address(RVA = "0x3AFFC80", Offset = "0x3AFFC80", VA = "0x3AFFC80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700022E")]
	internal virtual bool HasState
	{
		[Token(Token = "0x60015BA")]
		[Address(RVA = "0x3AFFC90", Offset = "0x3AFFC90", VA = "0x3AFFC90", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60015B0")]
	[Address(RVA = "0x3AFF100", Offset = "0x3AFF100", VA = "0x3AFF100")]
	internal EncoderNLS(Encoding encoding)
	{
	}

	[Token(Token = "0x60015B1")]
	[Address(RVA = "0x3AFF160", Offset = "0x3AFF160", VA = "0x3AFF160", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x60015B2")]
	[Address(RVA = "0x3AFF190", Offset = "0x3AFF190", VA = "0x3AFF190", Slot = "5")]
	public override int GetByteCount(char[] chars, int index, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x60015B3")]
	[Address(RVA = "0x3AFF350", Offset = "0x3AFF350", VA = "0x3AFF350", Slot = "6")]
	public unsafe override int GetByteCount(char* chars, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x60015B4")]
	[Address(RVA = "0x3AFF440", Offset = "0x3AFF440", VA = "0x3AFF440", Slot = "7")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x60015B5")]
	[Address(RVA = "0x3AFF6F0", Offset = "0x3AFF6F0", VA = "0x3AFF6F0", Slot = "8")]
	public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x60015B6")]
	[Address(RVA = "0x3AFF800", Offset = "0x3AFF800", VA = "0x3AFF800", Slot = "9")]
	public override void Convert(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex, int byteCount, bool flush, out int charsUsed, out int bytesUsed, out bool completed)
	{
	}

	[Token(Token = "0x60015B7")]
	[Address(RVA = "0x3AFFAC0", Offset = "0x3AFFAC0", VA = "0x3AFFAC0", Slot = "10")]
	public unsafe override void Convert(char* chars, int charCount, byte* bytes, int byteCount, bool flush, out int charsUsed, out int bytesUsed, out bool completed)
	{
	}

	[Token(Token = "0x60015BB")]
	[Address(RVA = "0x3AFFCA0", Offset = "0x3AFFCA0", VA = "0x3AFFCA0")]
	internal void ClearMustFlush()
	{
	}
}
