// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.EncoderNLS
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x20002AD")]
internal class EncoderNLS : Encoder
{
	[Token(Token = "0x4000B9E")]
	[FieldOffset(Offset = "0x20")]
	internal char _charLeftOver;

	[Token(Token = "0x4000B9F")]
	[FieldOffset(Offset = "0x28")]
	private Encoding _encoding;

	[Token(Token = "0x4000BA0")]
	[FieldOffset(Offset = "0x30")]
	private bool _mustFlush;

	[Token(Token = "0x4000BA1")]
	[FieldOffset(Offset = "0x31")]
	internal bool _throwOnOverflow;

	[Token(Token = "0x4000BA2")]
	[FieldOffset(Offset = "0x34")]
	internal int _charsUsed;

	[Token(Token = "0x1700022E")]
	public Encoding Encoding
	{
		[Token(Token = "0x6001624")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022F")]
	public bool MustFlush
	{
		[Token(Token = "0x6001625")]
		[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000230")]
	internal virtual bool HasState
	{
		[Token(Token = "0x6001626")]
		[Address(RVA = "0x19789C0", Offset = "0x1976FC0", VA = "0x1819789C0", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600161C")]
	[Address(RVA = "0x1978950", Offset = "0x1976F50", VA = "0x181978950")]
	internal EncoderNLS(Encoding encoding)
	{
	}

	[Token(Token = "0x600161D")]
	[Address(RVA = "0x1978920", Offset = "0x1976F20", VA = "0x181978920", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x600161E")]
	[Address(RVA = "0x19781D0", Offset = "0x19767D0", VA = "0x1819781D0", Slot = "5")]
	public override int GetByteCount(char[] chars, int index, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x600161F")]
	[Address(RVA = "0x19783B0", Offset = "0x19769B0", VA = "0x1819783B0", Slot = "6")]
	public unsafe override int GetByteCount(char* chars, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x6001620")]
	[Address(RVA = "0x19784C0", Offset = "0x1976AC0", VA = "0x1819784C0", Slot = "7")]
	public override int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x6001621")]
	[Address(RVA = "0x19787D0", Offset = "0x1976DD0", VA = "0x1819787D0", Slot = "8")]
	public unsafe override int GetBytes(char* chars, int charCount, byte* bytes, int byteCount, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x6001622")]
	[Address(RVA = "0x1977E10", Offset = "0x1976410", VA = "0x181977E10", Slot = "9")]
	public override void Convert(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex, int byteCount, bool flush, out int charsUsed, out int bytesUsed, out bool completed)
	{
	}

	[Token(Token = "0x6001623")]
	[Address(RVA = "0x1977C30", Offset = "0x1976230", VA = "0x181977C30", Slot = "10")]
	public unsafe override void Convert(char* chars, int charCount, byte* bytes, int byteCount, bool flush, out int charsUsed, out int bytesUsed, out bool completed)
	{
	}

	[Token(Token = "0x6001627")]
	[Address(RVA = "0xACCA60", Offset = "0xACB060", VA = "0x180ACCA60")]
	internal void ClearMustFlush()
	{
	}
}
