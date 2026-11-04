// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.UTF8ArrayUnsafeUtility
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x20000E2")]
[GenerateTestsForBurstCompatibility]
public static class UTF8ArrayUnsafeUtility
{
	[Token(Token = "0x20000E3")]
	internal struct Comparison
	{
		[Token(Token = "0x4000448")]
		[FieldOffset(Offset = "0x0")]
		public bool terminates;

		[Token(Token = "0x4000449")]
		[FieldOffset(Offset = "0x4")]
		public int result;

		[Token(Token = "0x6000A3B")]
		[Address(RVA = "0x29B3250", Offset = "0x29B1850", VA = "0x1829B3250")]
		public Comparison(Unicode.Rune runeA, ConversionError errorA, Unicode.Rune runeB, ConversionError errorB)
		{
		}
	}

	[Token(Token = "0x6000A2B")]
	[Address(RVA = "0x29BC650", Offset = "0x29BAC50", VA = "0x1829BC650")]
	public unsafe static CopyError Copy(byte* dest, out int destLength, int destUTF8MaxLengthInBytes, char* src, int srcLength)
	{
		return default(CopyError);
	}

	[Token(Token = "0x6000A2C")]
	[Address(RVA = "0x29BC890", Offset = "0x29BAE90", VA = "0x1829BC890")]
	public unsafe static CopyError Copy(byte* dest, out ushort destLength, ushort destUTF8MaxLengthInBytes, char* src, int srcLength)
	{
		return default(CopyError);
	}

	[Token(Token = "0x6000A2D")]
	[Address(RVA = "0x29BC7B0", Offset = "0x29BADB0", VA = "0x1829BC7B0")]
	public unsafe static CopyError Copy(byte* dest, out int destLength, int destUTF8MaxLengthInBytes, byte* src, int srcLength)
	{
		return default(CopyError);
	}

	[Token(Token = "0x6000A2E")]
	[Address(RVA = "0x29BC6D0", Offset = "0x29BACD0", VA = "0x1829BC6D0")]
	public unsafe static CopyError Copy(byte* dest, out ushort destLength, ushort destUTF8MaxLengthInBytes, byte* src, ushort srcLength)
	{
		return default(CopyError);
	}

	[Token(Token = "0x6000A2F")]
	[Address(RVA = "0x29BC690", Offset = "0x29BAC90", VA = "0x1829BC690")]
	public unsafe static CopyError Copy(char* dest, out int destLength, int destUCS2MaxLengthInChars, byte* src, int srcLength)
	{
		return default(CopyError);
	}

	[Token(Token = "0x6000A30")]
	[Address(RVA = "0x29BC8F0", Offset = "0x29BAEF0", VA = "0x1829BC8F0")]
	public unsafe static CopyError Copy(char* dest, out ushort destLength, ushort destUCS2MaxLengthInChars, byte* src, ushort srcLength)
	{
		return default(CopyError);
	}

	[Token(Token = "0x6000A31")]
	[Address(RVA = "0x29BC440", Offset = "0x29BAA40", VA = "0x1829BC440")]
	public unsafe static FormatError AppendUTF8Bytes(byte* dest, ref int destLength, int destCapacity, byte* src, int srcLength)
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000A32")]
	[Address(RVA = "0x29BC560", Offset = "0x29BAB60", VA = "0x1829BC560")]
	public unsafe static CopyError Append(byte* dest, ref ushort destLength, ushort destUTF8MaxLengthInBytes, byte* src, ushort srcLength)
	{
		return default(CopyError);
	}

	[Token(Token = "0x6000A33")]
	[Address(RVA = "0x29BC4A0", Offset = "0x29BAAA0", VA = "0x1829BC4A0")]
	public unsafe static CopyError Append(byte* dest, ref ushort destLength, ushort destUTF8MaxLengthInBytes, char* src, int srcLength)
	{
		return default(CopyError);
	}

	[Token(Token = "0x6000A34")]
	[Address(RVA = "0x29BC500", Offset = "0x29BAB00", VA = "0x1829BC500")]
	public unsafe static CopyError Append(char* dest, ref ushort destLength, ushort destUCS2MaxLengthInChars, byte* src, ushort srcLength)
	{
		return default(CopyError);
	}

	[Token(Token = "0x6000A35")]
	[Address(RVA = "0x29BCE80", Offset = "0x29BB480", VA = "0x1829BCE80")]
	public unsafe static int StrCmp(byte* utf8BufferA, int utf8LengthInBytesA, byte* utf8BufferB, int utf8LengthInBytesB)
	{
		return default(int);
	}

	[Token(Token = "0x6000A36")]
	[Address(RVA = "0x29BCDC0", Offset = "0x29BB3C0", VA = "0x1829BCDC0")]
	internal unsafe static int StrCmp(byte* utf8BufferA, int utf8LengthInBytesA, Unicode.Rune* runeBufferB, int lengthInRunesB)
	{
		return default(int);
	}

	[Token(Token = "0x6000A37")]
	[Address(RVA = "0x29BCC70", Offset = "0x29BB270", VA = "0x1829BCC70")]
	public unsafe static int StrCmp(char* utf16BufferA, int utf16LengthInCharsA, char* utf16BufferB, int utf16LengthInCharsB)
	{
		return default(int);
	}

	[Token(Token = "0x6000A38")]
	[Address(RVA = "0x29BC950", Offset = "0x29BAF50", VA = "0x1829BC950")]
	public unsafe static bool EqualsUTF8Bytes(byte* aBytes, int aLength, byte* bBytes, int bLength)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A39")]
	[Address(RVA = "0x29BCB50", Offset = "0x29BB150", VA = "0x1829BCB50")]
	public unsafe static int StrCmp(byte* utf8Buffer, int utf8LengthInBytes, char* utf16Buffer, int utf16LengthInChars)
	{
		return default(int);
	}

	[Token(Token = "0x6000A3A")]
	[Address(RVA = "0x29BCA30", Offset = "0x29BB030", VA = "0x1829BCA30")]
	public unsafe static int StrCmp(char* utf16Buffer, int utf16LengthInChars, byte* utf8Buffer, int utf8LengthInBytes)
	{
		return default(int);
	}
}
