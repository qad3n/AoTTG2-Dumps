// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.FormatProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
				[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
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
		[Address(RVA = "0x25C7E60", Offset = "0x25C6460", VA = "0x1825C7E60")]
		private static bool IsWhite(char ch)
		{
			return default(bool);
		}

		[Token(Token = "0x600009E")]
		[Address(RVA = "0x25C7ED0", Offset = "0x25C64D0", VA = "0x1825C7ED0")]
		private unsafe static char* MatchChars(char* p, char* pEnd, string str)
		{
			//IL_0002: Expected I, but got O
			return (char*)unchecked((nint)null);
		}

		[Token(Token = "0x600009F")]
		[Address(RVA = "0x25C7E80", Offset = "0x25C6480", VA = "0x1825C7E80")]
		private unsafe static char* MatchChars(char* p, char* pEnd, char* str)
		{
			//IL_0002: Expected I, but got O
			return (char*)unchecked((nint)null);
		}

		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x25C9650", Offset = "0x25C7C50", VA = "0x1825C9650")]
		private unsafe static bool ParseNumber(ref char* str, char* strEnd, NumberStyles options, ref NumberBuffer number, StringBuilder sb, NumberFormatInfo numfmt, bool parseDecimal)
		{
			return default(bool);
		}

		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x25CA3D0", Offset = "0x25C89D0", VA = "0x1825CA3D0")]
		private static bool TrailingZeros(ReadOnlySpan<char> s, int index)
		{
			return default(bool);
		}

		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x25CA440", Offset = "0x25C8A40", VA = "0x1825CA440")]
		internal static bool TryStringToNumber(ReadOnlySpan<char> str, NumberStyles options, ref NumberBuffer number, StringBuilder sb, NumberFormatInfo numfmt, bool parseDecimal)
		{
			return default(bool);
		}

		[Token(Token = "0x60000A3")]
		[Address(RVA = "0x25C7DF0", Offset = "0x25C63F0", VA = "0x1825C7DF0")]
		internal unsafe static void Int32ToDecChars(char* buffer, ref int index, uint value, int digits)
		{
		}

		[Token(Token = "0x60000A4")]
		[Address(RVA = "0x25C9480", Offset = "0x25C7A80", VA = "0x1825C9480")]
		internal static char ParseFormatSpecifier(ReadOnlySpan<char> format, out int digits)
		{
			return default(char);
		}

		[Token(Token = "0x60000A5")]
		[Address(RVA = "0x25C8DD0", Offset = "0x25C73D0", VA = "0x1825C8DD0")]
		internal static void NumberToString(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, char format, int nMaxDigits, NumberFormatInfo info, bool isDecimal)
		{
		}

		[Token(Token = "0x60000A6")]
		[Address(RVA = "0x25C6DE0", Offset = "0x25C53E0", VA = "0x1825C6DE0")]
		private static void FormatCurrency(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info)
		{
		}

		[Token(Token = "0x60000A7")]
		[Address(RVA = "0x25CAE70", Offset = "0x25C9470", VA = "0x1825CAE70")]
		private unsafe static int wcslen(char* s)
		{
			return default(int);
		}

		[Token(Token = "0x60000A8")]
		[Address(RVA = "0x25C7190", Offset = "0x25C5790", VA = "0x1825C7190")]
		private static void FormatFixed(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info, int[] groupDigits, string sDecimal, string sGroup)
		{
		}

		[Token(Token = "0x60000A9")]
		[Address(RVA = "0x25C78C0", Offset = "0x25C5EC0", VA = "0x1825C78C0")]
		private static void FormatNumber(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info)
		{
		}

		[Token(Token = "0x60000AA")]
		[Address(RVA = "0x25C7CD0", Offset = "0x25C62D0", VA = "0x1825C7CD0")]
		private static void FormatScientific(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info, char expChar)
		{
		}

		[Token(Token = "0x60000AB")]
		[Address(RVA = "0x25C7000", Offset = "0x25C5600", VA = "0x1825C7000")]
		private static void FormatExponent(ref System.Text.ValueStringBuilder sb, NumberFormatInfo info, int value, char expChar, int minDigits, bool positiveSign)
		{
		}

		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x25C7580", Offset = "0x25C5B80", VA = "0x1825C7580")]
		private static void FormatGeneral(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info, char expChar, bool bSuppressScientific)
		{
		}

		[Token(Token = "0x60000AD")]
		[Address(RVA = "0x25C7AA0", Offset = "0x25C60A0", VA = "0x1825C7AA0")]
		private static void FormatPercent(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info)
		{
		}

		[Token(Token = "0x60000AE")]
		[Address(RVA = "0x25CA330", Offset = "0x25C8930", VA = "0x1825CA330")]
		private static void RoundNumber(ref NumberBuffer number, int pos)
		{
		}

		[Token(Token = "0x60000AF")]
		[Address(RVA = "0x25C6CD0", Offset = "0x25C52D0", VA = "0x1825C6CD0")]
		private static int FindSection(ReadOnlySpan<char> format, int section)
		{
			return default(int);
		}

		[Token(Token = "0x60000B0")]
		[Address(RVA = "0x25C7F80", Offset = "0x25C6580", VA = "0x1825C7F80")]
		internal static void NumberToStringFormat(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, ReadOnlySpan<char> format, NumberFormatInfo info)
		{
		}
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x25C6980", Offset = "0x25C4F80", VA = "0x1825C6980")]
	internal static void FormatBigInteger(ref System.Text.ValueStringBuilder sb, int precision, int scale, bool sign, ReadOnlySpan<char> format, NumberFormatInfo numberFormatInfo, char[] digits, int startIndex)
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x25C6AE0", Offset = "0x25C50E0", VA = "0x1825C6AE0")]
	internal static bool TryStringToBigInteger(ReadOnlySpan<char> s, NumberStyles styles, NumberFormatInfo numberFormatInfo, StringBuilder receiver, out int precision, out int scale, out bool sign)
	{
		return default(bool);
	}
}
