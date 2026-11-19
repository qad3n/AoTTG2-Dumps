// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.UTF8ArrayUnsafeUtility
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6386280", Offset = "0x6385280", VA = "0x6386280")]
		public Comparison(Unicode.Rune runeA, ConversionError errorA, Unicode.Rune runeB, ConversionError errorB)
		{
		}
	}

	[Token(Token = "0x6000A2B")]
	[Address(RVA = "0x637F200", Offset = "0x637E200", VA = "0x637F200")]
	public unsafe static CopyError Copy(byte* dest, out int destLength, int destUTF8MaxLengthInBytes, char* src, int srcLength)
	{
		return default(CopyError);
	}

	[Token(Token = "0x6000A2C")]
	[Address(RVA = "0x6385960", Offset = "0x6384960", VA = "0x6385960")]
	public unsafe static CopyError Copy(byte* dest, out ushort destLength, ushort destUTF8MaxLengthInBytes, char* src, int srcLength)
	{
		return default(CopyError);
	}

	[Token(Token = "0x6000A2D")]
	[Address(RVA = "0x6385A40", Offset = "0x6384A40", VA = "0x6385A40")]
	public unsafe static CopyError Copy(byte* dest, out int destLength, int destUTF8MaxLengthInBytes, byte* src, int srcLength)
	{
		return default(CopyError);
	}

	[Token(Token = "0x6000A2E")]
	[Address(RVA = "0x6385BA0", Offset = "0x6384BA0", VA = "0x6385BA0")]
	public unsafe static CopyError Copy(byte* dest, out ushort destLength, ushort destUTF8MaxLengthInBytes, byte* src, ushort srcLength)
	{
		return default(CopyError);
	}

	[Token(Token = "0x6000A2F")]
	[Address(RVA = "0x6385C60", Offset = "0x6384C60", VA = "0x6385C60")]
	public unsafe static CopyError Copy(char* dest, out int destLength, int destUCS2MaxLengthInChars, byte* src, int srcLength)
	{
		return default(CopyError);
	}

	[Token(Token = "0x6000A30")]
	[Address(RVA = "0x6385E00", Offset = "0x6384E00", VA = "0x6385E00")]
	public unsafe static CopyError Copy(char* dest, out ushort destLength, ushort destUCS2MaxLengthInChars, byte* src, ushort srcLength)
	{
		return default(CopyError);
	}

	[Token(Token = "0x6000A31")]
	[Address(RVA = "0x6385EF0", Offset = "0x6384EF0", VA = "0x6385EF0")]
	public unsafe static FormatError AppendUTF8Bytes(byte* dest, ref int destLength, int destCapacity, byte* src, int srcLength)
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000A32")]
	[Address(RVA = "0x6385F30", Offset = "0x6384F30", VA = "0x6385F30")]
	public unsafe static CopyError Append(byte* dest, ref ushort destLength, ushort destUTF8MaxLengthInBytes, byte* src, ushort srcLength)
	{
		return default(CopyError);
	}

	[Token(Token = "0x6000A33")]
	[Address(RVA = "0x6385FF0", Offset = "0x6384FF0", VA = "0x6385FF0")]
	public unsafe static CopyError Append(byte* dest, ref ushort destLength, ushort destUTF8MaxLengthInBytes, char* src, int srcLength)
	{
		return default(CopyError);
	}

	[Token(Token = "0x6000A34")]
	[Address(RVA = "0x63860D0", Offset = "0x63850D0", VA = "0x63860D0")]
	public unsafe static CopyError Append(char* dest, ref ushort destLength, ushort destUCS2MaxLengthInChars, byte* src, ushort srcLength)
	{
		return default(CopyError);
	}

	[Token(Token = "0x6000A35")]
	[Address(RVA = "0x63861D0", Offset = "0x63851D0", VA = "0x63861D0")]
	public unsafe static int StrCmp(byte* utf8BufferA, int utf8LengthInBytesA, byte* utf8BufferB, int utf8LengthInBytesB)
	{
		return default(int);
	}

	[Token(Token = "0x6000A36")]
	[Address(RVA = "0x63862B0", Offset = "0x63852B0", VA = "0x63862B0")]
	internal unsafe static int StrCmp(byte* utf8BufferA, int utf8LengthInBytesA, Unicode.Rune* runeBufferB, int lengthInRunesB)
	{
		return default(int);
	}

	[Token(Token = "0x6000A37")]
	[Address(RVA = "0x6386390", Offset = "0x6385390", VA = "0x6386390")]
	public unsafe static int StrCmp(char* utf16BufferA, int utf16LengthInCharsA, char* utf16BufferB, int utf16LengthInCharsB)
	{
		return default(int);
	}

	[Token(Token = "0x6000A38")]
	[Address(RVA = "0x6380C10", Offset = "0x637FC10", VA = "0x6380C10")]
	public unsafe static bool EqualsUTF8Bytes(byte* aBytes, int aLength, byte* bBytes, int bLength)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A39")]
	[Address(RVA = "0x6386550", Offset = "0x6385550", VA = "0x6386550")]
	public unsafe static int StrCmp(byte* utf8Buffer, int utf8LengthInBytes, char* utf16Buffer, int utf16LengthInChars)
	{
		return default(int);
	}

	[Token(Token = "0x6000A3A")]
	[Address(RVA = "0x6386640", Offset = "0x6385640", VA = "0x6386640")]
	public unsafe static int StrCmp(char* utf16Buffer, int utf16LengthInChars, byte* utf8Buffer, int utf8LengthInBytes)
	{
		return default(int);
	}
}
