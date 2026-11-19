// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.EncoderNLS
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x2000285")]
internal class EncoderNLS : Encoder
{
	[Token(Token = "0x4000AFC")]
	[FieldOffset(Offset = "0x20")]
	internal char _charLeftOver;

	[Token(Token = "0x4000AFD")]
	[FieldOffset(Offset = "0x28")]
	private Encoding _encoding;

	[Token(Token = "0x4000AFE")]
	[FieldOffset(Offset = "0x30")]
	private bool _mustFlush;

	[Token(Token = "0x4000AFF")]
	[FieldOffset(Offset = "0x31")]
	internal bool _throwOnOverflow;

	[Token(Token = "0x4000B00")]
	[FieldOffset(Offset = "0x34")]
	internal int _charsUsed;

	[Token(Token = "0x1700022D")]
	public Encoding Encoding
	{
		[Token(Token = "0x60015FB")]
		[Address(RVA = "0x530A9C0", Offset = "0x53099C0", VA = "0x530A9C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022E")]
	public bool MustFlush
	{
		[Token(Token = "0x60015FC")]
		[Address(RVA = "0x530A9D0", Offset = "0x53099D0", VA = "0x530A9D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700022F")]
	internal virtual bool HasState
	{
		[Token(Token = "0x60015FD")]
		[Address(RVA = "0x530A9E0", Offset = "0x53099E0", VA = "0x530A9E0", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60015F3")]
	[Address(RVA = "0x5309E90", Offset = "0x5308E90", VA = "0x5309E90")]
	internal EncoderNLS(Encoding encoding)
	{
	}

	[Token(Token = "0x60015F4")]
	[Address(RVA = "0x5309EF0", Offset = "0x5308EF0", VA = "0x5309EF0", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x60015F5")]
	[Address(RVA = "0x5309F20", Offset = "0x5308F20", VA = "0x5309F20", Slot = "5")]
	public override int GetByteCount(char[] chars, int index, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x60015F6")]
	[Address(RVA = "0x530A0E0", Offset = "0x53090E0", VA = "0x530A0E0", Slot = "6")]
	public unsafe override int GetByteCount(char* chars, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x60015F7")]
	[Address(RVA = "0x530A1D0", Offset = "0x53091D0", VA = "0x530A1D0", Slot = "7")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x60015F8")]
	[Address(RVA = "0x530A460", Offset = "0x5309460", VA = "0x530A460", Slot = "8")]
	public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x60015F9")]
	[Address(RVA = "0x530A570", Offset = "0x5309570", VA = "0x530A570", Slot = "9")]
	public override void Convert(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex, int byteCount, bool flush, out int charsUsed, out int bytesUsed, out bool completed)
	{
	}

	[Token(Token = "0x60015FA")]
	[Address(RVA = "0x530A820", Offset = "0x5309820", VA = "0x530A820", Slot = "10")]
	public unsafe override void Convert(char* chars, int charCount, byte* bytes, int byteCount, bool flush, out int charsUsed, out int bytesUsed, out bool completed)
	{
	}

	[Token(Token = "0x60015FE")]
	[Address(RVA = "0x530A9F0", Offset = "0x53099F0", VA = "0x530A9F0")]
	internal void ClearMustFlush()
	{
	}
}
