// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.Unicode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x20000E8")]
[GenerateTestsForBurstCompatibility]
public struct Unicode
{
	[Token(Token = "0x20000E9")]
	[GenerateTestsForBurstCompatibility]
	public struct Rune
	{
		[Token(Token = "0x400045C")]
		[FieldOffset(Offset = "0x0")]
		public int value;

		[Token(Token = "0x6000A4D")]
		[Address(RVA = "0x63869D0", Offset = "0x63859D0", VA = "0x63869D0")]
		public Rune(int codepoint)
		{
		}

		[Token(Token = "0x6000A4E")]
		[Address(RVA = "0x63869E0", Offset = "0x63859E0", VA = "0x63869E0")]
		public static implicit operator Rune(char codepoint)
		{
			return default(Rune);
		}

		[Token(Token = "0x6000A4F")]
		[Address(RVA = "0x63869F0", Offset = "0x63859F0", VA = "0x63869F0")]
		public static bool operator ==(Rune lhs, Rune rhs)
		{
			return default(bool);
		}

		[Token(Token = "0x6000A50")]
		[Address(RVA = "0x6386A00", Offset = "0x6385A00", VA = "0x6386A00", Slot = "0")]
		[ExcludeFromBurstCompatTesting("Takes managed object")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000A51")]
		[Address(RVA = "0x6386A60", Offset = "0x6385A60", VA = "0x6386A60", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000A52")]
		[Address(RVA = "0x6386A70", Offset = "0x6385A70", VA = "0x6386A70")]
		public static bool operator !=(Rune lhs, Rune rhs)
		{
			return default(bool);
		}

		[Token(Token = "0x6000A53")]
		[Address(RVA = "0x6386A80", Offset = "0x6385A80", VA = "0x6386A80")]
		public static bool IsDigit(Rune r)
		{
			return default(bool);
		}

		[Token(Token = "0x6000A54")]
		[Address(RVA = "0x6386AA0", Offset = "0x6385AA0", VA = "0x6386AA0")]
		internal bool IsAscii()
		{
			return default(bool);
		}

		[Token(Token = "0x6000A55")]
		[Address(RVA = "0x6386AB0", Offset = "0x6385AB0", VA = "0x6386AB0")]
		internal bool IsLatin1()
		{
			return default(bool);
		}

		[Token(Token = "0x6000A56")]
		[Address(RVA = "0x6386A90", Offset = "0x6385A90", VA = "0x6386A90")]
		internal bool IsDigit()
		{
			return default(bool);
		}

		[Token(Token = "0x6000A57")]
		[Address(RVA = "0x6386AC0", Offset = "0x6385AC0", VA = "0x6386AC0")]
		internal bool IsWhiteSpace()
		{
			return default(bool);
		}

		[Token(Token = "0x6000A58")]
		[Address(RVA = "0x6386B30", Offset = "0x6385B30", VA = "0x6386B30")]
		internal Rune ToLowerAscii()
		{
			return default(Rune);
		}

		[Token(Token = "0x6000A59")]
		[Address(RVA = "0x6386B50", Offset = "0x6385B50", VA = "0x6386B50")]
		internal Rune ToUpperAscii()
		{
			return default(Rune);
		}

		[Token(Token = "0x6000A5A")]
		[Address(RVA = "0x6386B70", Offset = "0x6385B70", VA = "0x6386B70")]
		public int LengthInUtf8Bytes()
		{
			return default(int);
		}
	}

	[Token(Token = "0x400045B")]
	public const int kMaximumValidCodePoint = 1114111;

	[Token(Token = "0x1700012D")]
	public static Rune ReplacementCharacter
	{
		[Token(Token = "0x6000A3E")]
		[Address(RVA = "0x6386760", Offset = "0x6385760", VA = "0x6386760")]
		get
		{
			return default(Rune);
		}
	}

	[Token(Token = "0x1700012E")]
	public static Rune BadRune
	{
		[Token(Token = "0x6000A3F")]
		[Address(RVA = "0x6386770", Offset = "0x6385770", VA = "0x6386770")]
		get
		{
			return default(Rune);
		}
	}

	[Token(Token = "0x6000A3C")]
	[Address(RVA = "0x6386740", Offset = "0x6385740", VA = "0x6386740")]
	public static bool IsValidCodePoint(int codepoint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A3D")]
	[Address(RVA = "0x6386750", Offset = "0x6385750", VA = "0x6386750")]
	public static bool NotTrailer(byte b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A40")]
	[Address(RVA = "0x6381DA0", Offset = "0x6380DA0", VA = "0x6381DA0")]
	public unsafe static ConversionError Utf8ToUcs(out Rune rune, byte* buffer, ref int index, int capacity)
	{
		return default(ConversionError);
	}

	[Token(Token = "0x6000A41")]
	[Address(RVA = "0x6386780", Offset = "0x6385780", VA = "0x6386780")]
	private unsafe static int FindUtf8CharStartInReverse(byte* ptr, ref int index)
	{
		return default(int);
	}

	[Token(Token = "0x6000A42")]
	[Address(RVA = "0x63867B0", Offset = "0x63857B0", VA = "0x63867B0")]
	internal unsafe static ConversionError Utf8ToUcsReverse(out Rune rune, byte* buffer, ref int index, int capacity)
	{
		return default(ConversionError);
	}

	[Token(Token = "0x6000A43")]
	[Address(RVA = "0x6386810", Offset = "0x6385810", VA = "0x6386810")]
	private static bool IsLeadingSurrogate(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A44")]
	[Address(RVA = "0x6386820", Offset = "0x6385820", VA = "0x6386820")]
	private static bool IsTrailingSurrogate(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A45")]
	[Address(RVA = "0x63864D0", Offset = "0x63854D0", VA = "0x63864D0")]
	public unsafe static ConversionError Utf16ToUcs(out Rune rune, char* buffer, ref int index, int capacity)
	{
		return default(ConversionError);
	}

	[Token(Token = "0x6000A46")]
	[Address(RVA = "0x6386360", Offset = "0x6385360", VA = "0x6386360")]
	internal unsafe static ConversionError UcsToUcs(out Rune rune, Rune* buffer, ref int index, int capacity)
	{
		return default(ConversionError);
	}

	[Token(Token = "0x6000A47")]
	[Address(RVA = "0x6386830", Offset = "0x6385830", VA = "0x6386830")]
	public unsafe static ConversionError UcsToUtf8(byte* buffer, ref int index, int capacity, Rune rune)
	{
		return default(ConversionError);
	}

	[Token(Token = "0x6000A48")]
	[Address(RVA = "0x6386910", Offset = "0x6385910", VA = "0x6386910")]
	public unsafe static ConversionError UcsToUtf16(char* buffer, ref int index, int capacity, Rune rune)
	{
		return default(ConversionError);
	}

	[Token(Token = "0x6000A49")]
	[Address(RVA = "0x63858A0", Offset = "0x63848A0", VA = "0x63858A0")]
	public unsafe static ConversionError Utf16ToUtf8(char* utf16Buffer, int utf16Length, byte* utf8Buffer, out int utf8Length, int utf8Capacity)
	{
		return default(ConversionError);
	}

	[Token(Token = "0x6000A4A")]
	[Address(RVA = "0x6385B00", Offset = "0x6384B00", VA = "0x6385B00")]
	public unsafe static ConversionError Utf8ToUtf8(byte* srcBuffer, int srcLength, byte* destBuffer, out int destLength, int destCapacity)
	{
		return default(ConversionError);
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x6385D30", Offset = "0x6384D30", VA = "0x6385D30")]
	public unsafe static ConversionError Utf8ToUtf16(byte* utf8Buffer, int utf8Length, char* utf16Buffer, out int utf16Length, int utf16Capacity)
	{
		return default(ConversionError);
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x6386980", Offset = "0x6385980", VA = "0x6386980")]
	private unsafe static int CountRunes(byte* utf8Buffer, int utf8Length, int maxRunes = 2147483647)
	{
		return default(int);
	}
}
