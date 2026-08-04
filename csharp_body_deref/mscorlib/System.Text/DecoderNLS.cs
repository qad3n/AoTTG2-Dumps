// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.DecoderNLS
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x2000272")]
internal class DecoderNLS : Decoder
{
	[Token(Token = "0x4000B37")]
	[FieldOffset(Offset = "0x20")]
	private Encoding _encoding;

	[Token(Token = "0x4000B38")]
	[FieldOffset(Offset = "0x28")]
	private bool _mustFlush;

	[Token(Token = "0x4000B39")]
	[FieldOffset(Offset = "0x29")]
	internal bool _throwOnOverflow;

	[Token(Token = "0x4000B3A")]
	[FieldOffset(Offset = "0x2C")]
	internal int _bytesUsed;

	[Token(Token = "0x1700021B")]
	public bool MustFlush
	{
		[Token(Token = "0x6001565")]
		[Address(RVA = "0x3D532D0", Offset = "0x3D532D0", VA = "0x3D532D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700021C")]
	internal virtual bool HasState
	{
		[Token(Token = "0x6001566")]
		[Address(RVA = "0x3D532E0", Offset = "0x3D532E0", VA = "0x3D532E0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600155B")]
	[Address(RVA = "0x3D50BA0", Offset = "0x3D50BA0", VA = "0x3D50BA0")]
	internal DecoderNLS(Encoding encoding)
	{
	}

	[Token(Token = "0x600155C")]
	[Address(RVA = "0x3D52790", Offset = "0x3D52790", VA = "0x3D52790", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x600155D")]
	[Address(RVA = "0x3D527B0", Offset = "0x3D527B0", VA = "0x3D527B0", Slot = "5")]
	public override int GetCharCount(byte[] bytes, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600155E")]
	[Address(RVA = "0x3D527D0", Offset = "0x3D527D0", VA = "0x3D527D0", Slot = "6")]
	public override int GetCharCount(byte[] bytes, int index, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x600155F")]
	[Address(RVA = "0x3D52990", Offset = "0x3D52990", VA = "0x3D52990", Slot = "7")]
	public unsafe override int GetCharCount(byte* bytes, int count, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x6001560")]
	[Address(RVA = "0x3D52A80", Offset = "0x3D52A80", VA = "0x3D52A80", Slot = "8")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6001561")]
	[Address(RVA = "0x3D52AA0", Offset = "0x3D52AA0", VA = "0x3D52AA0", Slot = "9")]
	public override int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x6001562")]
	[Address(RVA = "0x3D52D50", Offset = "0x3D52D50", VA = "0x3D52D50", Slot = "10")]
	public unsafe override int GetChars(byte* bytes, int byteCount, char* chars, int charCount, bool flush)
	{
		return default(int);
	}

	[Token(Token = "0x6001563")]
	[Address(RVA = "0x3D52E60", Offset = "0x3D52E60", VA = "0x3D52E60", Slot = "12")]
	public override void Convert(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, int charCount, bool flush, out int bytesUsed, out int charsUsed, out bool completed)
	{
	}

	[Token(Token = "0x6001564")]
	[Address(RVA = "0x3D53120", Offset = "0x3D53120", VA = "0x3D53120", Slot = "13")]
	public unsafe override void Convert(byte* bytes, int byteCount, char* chars, int charCount, bool flush, out int bytesUsed, out int charsUsed, out bool completed)
	{
	}

	[Token(Token = "0x6001567")]
	[Address(RVA = "0x3D532F0", Offset = "0x3D532F0", VA = "0x3D532F0")]
	internal void ClearMustFlush()
	{
	}
}
