// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.Unicode
// Update status: NEW in this game update
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
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		public Rune(int codepoint)
		{
		}

		[Token(Token = "0x6000A4E")]
		[Address(RVA = "0x1A82000", Offset = "0x1A80600", VA = "0x181A82000")]
		public static implicit operator Rune(char codepoint)
		{
			return default(Rune);
		}

		[Token(Token = "0x6000A4F")]
		[Address(RVA = "0x866D40", Offset = "0x865340", VA = "0x180866D40")]
		public static bool operator ==(Rune lhs, Rune rhs)
		{
			return default(bool);
		}

		[Token(Token = "0x6000A50")]
		[Address(RVA = "0x29B9D30", Offset = "0x29B8330", VA = "0x1829B9D30", Slot = "0")]
		[ExcludeFromBurstCompatTesting("Takes managed object")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000A51")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000A52")]
		[Address(RVA = "0x29B9EE0", Offset = "0x29B84E0", VA = "0x1829B9EE0")]
		public static bool operator !=(Rune lhs, Rune rhs)
		{
			return default(bool);
		}

		[Token(Token = "0x6000A53")]
		[Address(RVA = "0x29B9DD0", Offset = "0x29B83D0", VA = "0x1829B9DD0")]
		public static bool IsDigit(Rune r)
		{
			return default(bool);
		}

		[Token(Token = "0x6000A54")]
		[Address(RVA = "0x29B9DB0", Offset = "0x29B83B0", VA = "0x1829B9DB0")]
		internal bool IsAscii()
		{
			return default(bool);
		}

		[Token(Token = "0x6000A55")]
		[Address(RVA = "0x29B9DE0", Offset = "0x29B83E0", VA = "0x1829B9DE0")]
		internal bool IsLatin1()
		{
			return default(bool);
		}

		[Token(Token = "0x6000A56")]
		[Address(RVA = "0x29B9DC0", Offset = "0x29B83C0", VA = "0x1829B9DC0")]
		internal bool IsDigit()
		{
			return default(bool);
		}

		[Token(Token = "0x6000A57")]
		[Address(RVA = "0x29B9DF0", Offset = "0x29B83F0", VA = "0x1829B9DF0")]
		internal bool IsWhiteSpace()
		{
			return default(bool);
		}

		[Token(Token = "0x6000A58")]
		[Address(RVA = "0x29B9EA0", Offset = "0x29B84A0", VA = "0x1829B9EA0")]
		internal Rune ToLowerAscii()
		{
			return default(Rune);
		}

		[Token(Token = "0x6000A59")]
		[Address(RVA = "0x29B9EC0", Offset = "0x29B84C0", VA = "0x1829B9EC0")]
		internal Rune ToUpperAscii()
		{
			return default(Rune);
		}

		[Token(Token = "0x6000A5A")]
		[Address(RVA = "0x29B9E60", Offset = "0x29B8460", VA = "0x1829B9E60")]
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
		[Address(RVA = "0x29BD7C0", Offset = "0x29BBDC0", VA = "0x1829BD7C0")]
		get
		{
			return default(Rune);
		}
	}

	[Token(Token = "0x1700012E")]
	public static Rune BadRune
	{
		[Token(Token = "0x6000A3F")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
		get
		{
			return default(Rune);
		}
	}

	[Token(Token = "0x6000A3C")]
	[Address(RVA = "0x29BCFB0", Offset = "0x29BB5B0", VA = "0x1829BCFB0")]
	public static bool IsValidCodePoint(int codepoint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A3D")]
	[Address(RVA = "0x29BCFC0", Offset = "0x29BB5C0", VA = "0x1829BCFC0")]
	public static bool NotTrailer(byte b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A40")]
	[Address(RVA = "0x29BD3C0", Offset = "0x29BB9C0", VA = "0x1829BD3C0")]
	public unsafe static ConversionError Utf8ToUcs(out Rune rune, byte* buffer, ref int index, int capacity)
	{
		return default(ConversionError);
	}

	[Token(Token = "0x6000A41")]
	[Address(RVA = "0x29BCF80", Offset = "0x29BB580", VA = "0x1829BCF80")]
	private unsafe static int FindUtf8CharStartInReverse(byte* ptr, ref int index)
	{
		return default(int);
	}

	[Token(Token = "0x6000A42")]
	[Address(RVA = "0x29BD350", Offset = "0x29BB950", VA = "0x1829BD350")]
	internal unsafe static ConversionError Utf8ToUcsReverse(out Rune rune, byte* buffer, ref int index, int capacity)
	{
		return default(ConversionError);
	}

	[Token(Token = "0x6000A43")]
	[Address(RVA = "0x1A7C790", Offset = "0x1A7AD90", VA = "0x181A7C790")]
	private static bool IsLeadingSurrogate(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A44")]
	[Address(RVA = "0x1A7C990", Offset = "0x1A7AF90", VA = "0x181A7C990")]
	private static bool IsTrailingSurrogate(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A45")]
	[Address(RVA = "0x29BD1B0", Offset = "0x29BB7B0", VA = "0x1829BD1B0")]
	public unsafe static ConversionError Utf16ToUcs(out Rune rune, char* buffer, ref int index, int capacity)
	{
		return default(ConversionError);
	}

	[Token(Token = "0x6000A46")]
	[Address(RVA = "0x29BCFD0", Offset = "0x29BB5D0", VA = "0x1829BCFD0")]
	internal unsafe static ConversionError UcsToUcs(out Rune rune, Rune* buffer, ref int index, int capacity)
	{
		return default(ConversionError);
	}

	[Token(Token = "0x6000A47")]
	[Address(RVA = "0x29BD0A0", Offset = "0x29BB6A0", VA = "0x1829BD0A0")]
	public unsafe static ConversionError UcsToUtf8(byte* buffer, ref int index, int capacity, Rune rune)
	{
		return default(ConversionError);
	}

	[Token(Token = "0x6000A48")]
	[Address(RVA = "0x29BD000", Offset = "0x29BB600", VA = "0x1829BD000")]
	public unsafe static ConversionError UcsToUtf16(char* buffer, ref int index, int capacity, Rune rune)
	{
		return default(ConversionError);
	}

	[Token(Token = "0x6000A49")]
	[Address(RVA = "0x29BD280", Offset = "0x29BB880", VA = "0x1829BD280")]
	public unsafe static ConversionError Utf16ToUtf8(char* utf16Buffer, int utf16Length, byte* utf8Buffer, out int utf8Length, int utf8Capacity)
	{
		return default(ConversionError);
	}

	[Token(Token = "0x6000A4A")]
	[Address(RVA = "0x29BD700", Offset = "0x29BBD00", VA = "0x1829BD700")]
	public unsafe static ConversionError Utf8ToUtf8(byte* srcBuffer, int srcLength, byte* destBuffer, out int destLength, int destCapacity)
	{
		return default(ConversionError);
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x29BD600", Offset = "0x29BBC00", VA = "0x1829BD600")]
	public unsafe static ConversionError Utf8ToUtf16(byte* utf8Buffer, int utf8Length, char* utf16Buffer, out int utf16Length, int utf16Capacity)
	{
		return default(ConversionError);
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x29BCF40", Offset = "0x29BB540", VA = "0x1829BCF40")]
	private unsafe static int CountRunes(byte* utf8Buffer, int utf8Length, int maxRunes = 2147483647)
	{
		return default(int);
	}
}
