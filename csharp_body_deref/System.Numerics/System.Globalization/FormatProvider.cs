using System.Text;
using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x200000C")]
internal class FormatProvider
{
	[Token(Token = "0x200000D")]
	private class Number
	{
		[Token(Token = "0x200000E")]
		internal struct NumberBuffer
		{
			[Token(Token = "0x4000023")]
			[FieldOffset(Offset = "0x0")]
			public int precision;

			[Token(Token = "0x4000024")]
			[FieldOffset(Offset = "0x4")]
			public int scale;

			[Token(Token = "0x4000025")]
			[FieldOffset(Offset = "0x8")]
			public bool sign;

			[Token(Token = "0x4000026")]
			[FieldOffset(Offset = "0x10")]
			public unsafe char* overrideDigits;

			[Token(Token = "0x17000006")]
			public unsafe char* digits
			{
				[Token(Token = "0x60000B2")]
				[Address(RVA = "0x433A1D0", Offset = "0x433A1D0", VA = "0x433A1D0")]
				get
				{
					//IL_0002: Expected I, but got O
					return (char*)unchecked((nint)null);
				}
			}
		}

		[Token(Token = "0x400001D")]
		[FieldOffset(Offset = "0x0")]
		private static string[] s_posCurrencyFormats;

		[Token(Token = "0x400001E")]
		[FieldOffset(Offset = "0x8")]
		private static string[] s_negCurrencyFormats;

		[Token(Token = "0x400001F")]
		[FieldOffset(Offset = "0x10")]
		private static string[] s_posPercentFormats;

		[Token(Token = "0x4000020")]
		[FieldOffset(Offset = "0x18")]
		private static string[] s_negPercentFormats;

		[Token(Token = "0x4000021")]
		[FieldOffset(Offset = "0x20")]
		private static string[] s_negNumberFormats;

		[Token(Token = "0x4000022")]
		[FieldOffset(Offset = "0x28")]
		private static string s_posNumberFormat;

		[Token(Token = "0x600009D")]
		[Address(RVA = "0x4336580", Offset = "0x4336580", VA = "0x4336580")]
		private static bool IsWhite(char ch)
		{
			return default(bool);
		}

		[Token(Token = "0x600009E")]
		[Address(RVA = "0x43365A0", Offset = "0x43365A0", VA = "0x43365A0")]
		private unsafe static char* MatchChars(char* p, char* pEnd, string str)
		{
			//IL_0002: Expected I, but got O
			return (char*)unchecked((nint)null);
		}

		[Token(Token = "0x600009F")]
		[Address(RVA = "0x4336670", Offset = "0x4336670", VA = "0x4336670")]
		private unsafe static char* MatchChars(char* p, char* pEnd, char* str)
		{
			//IL_0002: Expected I, but got O
			return (char*)unchecked((nint)null);
		}

		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x43366D0", Offset = "0x43366D0", VA = "0x43366D0")]
		private unsafe static bool ParseNumber(ref char* str, char* strEnd, NumberStyles options, ref NumberBuffer number, StringBuilder sb, NumberFormatInfo numfmt, bool parseDecimal)
		{
			return default(bool);
		}

		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x4337970", Offset = "0x4337970", VA = "0x4337970")]
		private static bool TrailingZeros(ReadOnlySpan<char> s, int index)
		{
			return default(bool);
		}

		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x4336420", Offset = "0x4336420", VA = "0x4336420")]
		internal static bool TryStringToNumber(ReadOnlySpan<char> str, NumberStyles options, ref NumberBuffer number, StringBuilder sb, NumberFormatInfo numfmt, bool parseDecimal)
		{
			return default(bool);
		}

		[Token(Token = "0x60000A3")]
		[Address(RVA = "0x43379D0", Offset = "0x43379D0", VA = "0x43379D0")]
		internal unsafe static void Int32ToDecChars(char* buffer, ref int index, uint value, int digits)
		{
		}

		[Token(Token = "0x60000A4")]
		[Address(RVA = "0x43343D0", Offset = "0x43343D0", VA = "0x43343D0")]
		internal static char ParseFormatSpecifier(ReadOnlySpan<char> format, out int digits)
		{
			return default(char);
		}

		[Token(Token = "0x60000A5")]
		[Address(RVA = "0x43344E0", Offset = "0x43344E0", VA = "0x43344E0")]
		internal static void NumberToString(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, char format, int nMaxDigits, NumberFormatInfo info, bool isDecimal)
		{
		}

		[Token(Token = "0x60000A6")]
		[Address(RVA = "0x4337B00", Offset = "0x4337B00", VA = "0x4337B00")]
		private static void FormatCurrency(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info)
		{
		}

		[Token(Token = "0x60000A7")]
		[Address(RVA = "0x43390F0", Offset = "0x43390F0", VA = "0x43390F0")]
		private unsafe static int wcslen(char* s)
		{
			return default(int);
		}

		[Token(Token = "0x60000A8")]
		[Address(RVA = "0x4337E00", Offset = "0x4337E00", VA = "0x4337E00")]
		private static void FormatFixed(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info, int[] groupDigits, string sDecimal, string sGroup)
		{
		}

		[Token(Token = "0x60000A9")]
		[Address(RVA = "0x4338430", Offset = "0x4338430", VA = "0x4338430")]
		private static void FormatNumber(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info)
		{
		}

		[Token(Token = "0x60000AA")]
		[Address(RVA = "0x43387A0", Offset = "0x43387A0", VA = "0x43387A0")]
		private static void FormatScientific(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info, char expChar)
		{
		}

		[Token(Token = "0x60000AB")]
		[Address(RVA = "0x4339490", Offset = "0x4339490", VA = "0x4339490")]
		private static void FormatExponent(ref System.Text.ValueStringBuilder sb, NumberFormatInfo info, int value, char expChar, int minDigits, bool positiveSign)
		{
		}

		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x43389F0", Offset = "0x43389F0", VA = "0x43389F0")]
		private static void FormatGeneral(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info, char expChar, bool bSuppressScientific)
		{
		}

		[Token(Token = "0x60000AD")]
		[Address(RVA = "0x4338E00", Offset = "0x4338E00", VA = "0x4338E00")]
		private static void FormatPercent(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info)
		{
		}

		[Token(Token = "0x60000AE")]
		[Address(RVA = "0x4337A30", Offset = "0x4337A30", VA = "0x4337A30")]
		private static void RoundNumber(ref NumberBuffer number, int pos)
		{
		}

		[Token(Token = "0x60000AF")]
		[Address(RVA = "0x43397C0", Offset = "0x43397C0", VA = "0x43397C0")]
		private static int FindSection(ReadOnlySpan<char> format, int section)
		{
			return default(int);
		}

		[Token(Token = "0x60000B0")]
		[Address(RVA = "0x4334F50", Offset = "0x4334F50", VA = "0x4334F50")]
		internal static void NumberToStringFormat(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, ReadOnlySpan<char> format, NumberFormatInfo info)
		{
		}
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x43341A0", Offset = "0x43341A0", VA = "0x43341A0")]
	internal static void FormatBigInteger(ref System.Text.ValueStringBuilder sb, int precision, int scale, bool sign, ReadOnlySpan<char> format, NumberFormatInfo numberFormatInfo, char[] digits, int startIndex)
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x4331EE0", Offset = "0x4331EE0", VA = "0x4331EE0")]
	internal static bool TryStringToBigInteger(ReadOnlySpan<char> s, NumberStyles styles, NumberFormatInfo numberFormatInfo, StringBuilder receiver, out int precision, out int scale, out bool sign)
	{
		return default(bool);
	}
}
