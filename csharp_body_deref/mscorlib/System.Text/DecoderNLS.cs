// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.DecoderNLS
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x20002A2")]
internal class DecoderNLS : Decoder
{
	[Token(Token = "0x4000B80")]
	[FieldOffset(Offset = "0x20")]
	private Encoding _encoding;

	[Token(Token = "0x4000B81")]
	[FieldOffset(Offset = "0x28")]
	private bool _mustFlush;

	[Token(Token = "0x4000B82")]
	[FieldOffset(Offset = "0x29")]
	internal bool _throwOnOverflow;

	[Token(Token = "0x4000B83")]
	[FieldOffset(Offset = "0x2C")]
	internal int _bytesUsed;

	[Token(Token = "0x1700021D")]
	public bool MustFlush
	{
		[Token(Token = "0x60015D1")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700021E")]
	internal virtual bool HasState
	{
		[Token(Token = "0x60015D2")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60015C7")]
	[Address(RVA = "0x19769B0", Offset = "0x1974FB0", VA = "0x1819769B0")]
	internal DecoderNLS(Encoding encoding)
	{
	}

	[Token(Token = "0x60015C8")]
	[Address(RVA = "0x1976990", Offset = "0x1974F90", VA = "0x181976990", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x60015C9")]
	[Address(RVA = "0x19761B0", Offset = "0x19747B0", VA = "0x1819761B0", Slot = "5")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60015CA")]
	[Address(RVA = "0x19762F0", Offset = "0x19748F0", VA = "0x1819762F0", Slot = "6")]
	public override int GetCharCount(byte[] bytes, int index, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x60015CB")]
	[Address(RVA = "0x19761E0", Offset = "0x19747E0", VA = "0x1819761E0", Slot = "7")]
	public unsafe override int GetCharCount(byte* bytes, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x60015CC")]
	[Address(RVA = "0x19764E0", Offset = "0x1974AE0", VA = "0x1819764E0", Slot = "8")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60015CD")]
	[Address(RVA = "0x1976680", Offset = "0x1974C80", VA = "0x181976680", Slot = "9")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x60015CE")]
	[Address(RVA = "0x1976520", Offset = "0x1974B20", VA = "0x181976520", Slot = "10")]
	public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x60015CF")]
	[Address(RVA = "0x1975DF0", Offset = "0x19743F0", VA = "0x181975DF0", Slot = "12")]
	public override void Convert(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, int charCount, bool flush, out int bytesUsed, out int charsUsed, out bool completed)
	{
	}

	[Token(Token = "0x60015D0")]
	[Address(RVA = "0x1975C10", Offset = "0x1974210", VA = "0x181975C10", Slot = "13")]
	public unsafe override void Convert(byte* bytes, int byteCount, char* chars, int charCount, bool flush, out int bytesUsed, out int charsUsed, out bool completed)
	{
	}

	[Token(Token = "0x60015D3")]
	[Address(RVA = "0x1975C00", Offset = "0x1974200", VA = "0x181975C00")]
	internal void ClearMustFlush()
	{
	}
}
