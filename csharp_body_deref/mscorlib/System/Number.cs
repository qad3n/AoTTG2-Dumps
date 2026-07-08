using System.Globalization;
using System.Runtime.CompilerServices;
using System.Text;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000F5")]
internal static class Number
{
	[Token(Token = "0x20000F6")]
	internal ref struct NumberBuffer
	{
		[Token(Token = "0x20000F7")]
		private struct DigitsAndNullTerminator
		{
		}

		[Token(Token = "0x400039D")]
		[FieldOffset(Offset = "0x0")]
		public int precision;

		[Token(Token = "0x400039E")]
		[FieldOffset(Offset = "0x4")]
		public int scale;

		[Token(Token = "0x400039F")]
		[FieldOffset(Offset = "0x8")]
		private int _sign;

		[Token(Token = "0x40003A0")]
		[FieldOffset(Offset = "0xC")]
		private DigitsAndNullTerminator _digits;

		[Token(Token = "0x40003A1")]
		[FieldOffset(Offset = "0x72")]
		private unsafe char* _allDigits;

		[Token(Token = "0x1700009B")]
		public bool sign
		{
			[Token(Token = "0x600092B")]
			[Address(RVA = "0x4FE2E20", Offset = "0x4FE2E20", VA = "0x4FE2E20")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x600092C")]
			[Address(RVA = "0x4FE2E30", Offset = "0x4FE2E30", VA = "0x4FE2E30")]
			set
			{
			}
		}

		[Token(Token = "0x1700009C")]
		public unsafe char* digits
		{
			[Token(Token = "0x600092D")]
			[Address(RVA = "0x4FE2E40", Offset = "0x4FE2E40", VA = "0x4FE2E40")]
			get
			{
				//IL_0002: Expected I, but got O
				return (char*)unchecked((nint)null);
			}
		}
	}

	[Token(Token = "0x4000393")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] s_posCurrencyFormats;

	[Token(Token = "0x4000394")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] s_negCurrencyFormats;

	[Token(Token = "0x4000395")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string[] s_posPercentFormats;

	[Token(Token = "0x4000396")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string[] s_negPercentFormats;

	[Token(Token = "0x4000397")]
	[FieldOffset(Offset = "0x20")]
	private static readonly string[] s_negNumberFormats;

	[Token(Token = "0x4000398")]
	[FieldOffset(Offset = "0x28")]
	private static readonly int[] s_charToHexLookup;

	[Token(Token = "0x4000399")]
	[FieldOffset(Offset = "0x30")]
	private static readonly ulong[] s_rgval64Power10;

	[Token(Token = "0x400039A")]
	[FieldOffset(Offset = "0x38")]
	private static readonly sbyte[] s_rgexp64Power10;

	[Token(Token = "0x400039B")]
	[FieldOffset(Offset = "0x40")]
	private static readonly ulong[] s_rgval64Power10By16;

	[Token(Token = "0x400039C")]
	[FieldOffset(Offset = "0x48")]
	private static readonly short[] s_rgexp64Power10By16;

	[Token(Token = "0x60008CF")]
	[Address(RVA = "0x4FD3B40", Offset = "0x4FD3B40", VA = "0x4FD3B40")]
	public static string FormatDecimal(decimal value, ReadOnlySpan<char> format, NumberFormatInfo info)
	{
		return null;
	}

	[Token(Token = "0x60008D0")]
	[Address(RVA = "0x4FD5A90", Offset = "0x4FD5A90", VA = "0x4FD5A90")]
	public static bool TryFormatDecimal(decimal value, ReadOnlySpan<char> format, NumberFormatInfo info, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x4FD3E20", Offset = "0x4FD3E20", VA = "0x4FD3E20")]
	private static void DecimalToNumber(decimal value, ref NumberBuffer number)
	{
	}

	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x4FD5CD0", Offset = "0x4FD5CD0", VA = "0x4FD5CD0")]
	public static string FormatDouble(double value, string format, NumberFormatInfo info)
	{
		return null;
	}

	[Token(Token = "0x60008D3")]
	[Address(RVA = "0x4FD6160", Offset = "0x4FD6160", VA = "0x4FD6160")]
	public static bool TryFormatDouble(double value, ReadOnlySpan<char> format, NumberFormatInfo info, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D4")]
	[Address(RVA = "0x4FD5DF0", Offset = "0x4FD5DF0", VA = "0x4FD5DF0")]
	private static string FormatDouble(ref System.Text.ValueStringBuilder sb, double value, ReadOnlySpan<char> format, NumberFormatInfo info)
	{
		return null;
	}

	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x4FD6F60", Offset = "0x4FD6F60", VA = "0x4FD6F60")]
	public static string FormatSingle(float value, string format, NumberFormatInfo info)
	{
		return null;
	}

	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x4FD73E0", Offset = "0x4FD73E0", VA = "0x4FD73E0")]
	public static bool TryFormatSingle(float value, ReadOnlySpan<char> format, NumberFormatInfo info, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D7")]
	[Address(RVA = "0x4FD7080", Offset = "0x4FD7080", VA = "0x4FD7080")]
	private static string FormatSingle(ref System.Text.ValueStringBuilder sb, float value, ReadOnlySpan<char> format, NumberFormatInfo info)
	{
		return null;
	}

	[Token(Token = "0x60008D8")]
	[Address(RVA = "0x4FD6310", Offset = "0x4FD6310", VA = "0x4FD6310")]
	private static bool TryCopyTo(string source, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D9")]
	[Address(RVA = "0x4FCC8E0", Offset = "0x4FCC8E0", VA = "0x4FCC8E0")]
	public static string FormatInt32(int value, ReadOnlySpan<char> format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60008DA")]
	[Address(RVA = "0x4FCD3F0", Offset = "0x4FCD3F0", VA = "0x4FCD3F0")]
	public static bool TryFormatInt32(int value, ReadOnlySpan<char> format, IFormatProvider provider, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008DB")]
	[Address(RVA = "0x4FCCD90", Offset = "0x4FCCD90", VA = "0x4FCCD90")]
	public static string FormatUInt32(uint value, ReadOnlySpan<char> format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60008DC")]
	[Address(RVA = "0x4FCD110", Offset = "0x4FCD110", VA = "0x4FCD110")]
	public static bool TryFormatUInt32(uint value, ReadOnlySpan<char> format, IFormatProvider provider, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008DD")]
	[Address(RVA = "0x4FCF870", Offset = "0x4FCF870", VA = "0x4FCF870")]
	public static string FormatInt64(long value, ReadOnlySpan<char> format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60008DE")]
	[Address(RVA = "0x4FCFDE0", Offset = "0x4FCFDE0", VA = "0x4FCFDE0")]
	public static bool TryFormatInt64(long value, ReadOnlySpan<char> format, IFormatProvider provider, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008DF")]
	[Address(RVA = "0x4FD94F0", Offset = "0x4FD94F0", VA = "0x4FD94F0")]
	public static string FormatUInt64(ulong value, ReadOnlySpan<char> format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x4FD9940", Offset = "0x4FD9940", VA = "0x4FD9940")]
	public static bool TryFormatUInt64(ulong value, ReadOnlySpan<char> format, IFormatProvider provider, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E1")]
	[Address(RVA = "0x4FD9C20", Offset = "0x4FD9C20", VA = "0x4FD9C20")]
	private static void Int32ToNumber(int value, ref NumberBuffer number)
	{
	}

	[Token(Token = "0x60008E2")]
	[Address(RVA = "0x4FD7770", Offset = "0x4FD7770", VA = "0x4FD7770")]
	private static string NegativeInt32ToDecStr(int value, int digits, string sNegative)
	{
		return null;
	}

	[Token(Token = "0x60008E3")]
	[Address(RVA = "0x4FD7D00", Offset = "0x4FD7D00", VA = "0x4FD7D00")]
	private static bool TryNegativeInt32ToDecStr(int value, int digits, string sNegative, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008E4")]
	[Address(RVA = "0x4FD7990", Offset = "0x4FD7990", VA = "0x4FD7990")]
	private static string Int32ToHexStr(int value, char hexBase, int digits)
	{
		return null;
	}

	[Token(Token = "0x60008E5")]
	[Address(RVA = "0x4FD7F50", Offset = "0x4FD7F50", VA = "0x4FD7F50")]
	private static bool TryInt32ToHexStr(int value, char hexBase, int digits, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008E6")]
	[Address(RVA = "0x4FD9D50", Offset = "0x4FD9D50", VA = "0x4FD9D50")]
	private unsafe static char* Int32ToHexChars(char* buffer, uint value, int hexBase, int digits)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E7")]
	[Address(RVA = "0x4FD9DB0", Offset = "0x4FD9DB0", VA = "0x4FD9DB0")]
	private static void UInt32ToNumber(uint value, ref NumberBuffer number)
	{
	}

	[Token(Token = "0x60008E8")]
	[Address(RVA = "0x4FD5C70", Offset = "0x4FD5C70", VA = "0x4FD5C70")]
	internal unsafe static char* UInt32ToDecChars(char* bufferEnd, uint value, int digits)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60008E9")]
	[Address(RVA = "0x4FD7590", Offset = "0x4FD7590", VA = "0x4FD7590")]
	private static string UInt32ToDecStr(uint value, int digits)
	{
		return null;
	}

	[Token(Token = "0x60008EA")]
	[Address(RVA = "0x4FD7AF0", Offset = "0x4FD7AF0", VA = "0x4FD7AF0")]
	private static bool TryUInt32ToDecStr(uint value, int digits, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008EB")]
	[Address(RVA = "0x4FD89E0", Offset = "0x4FD89E0", VA = "0x4FD89E0")]
	private static void Int64ToNumber(long input, ref NumberBuffer number)
	{
	}

	[Token(Token = "0x60008EC")]
	[Address(RVA = "0x4FD83F0", Offset = "0x4FD83F0", VA = "0x4FD83F0")]
	private static string NegativeInt64ToDecStr(long input, int digits, string sNegative)
	{
		return null;
	}

	[Token(Token = "0x60008ED")]
	[Address(RVA = "0x4FD8F00", Offset = "0x4FD8F00", VA = "0x4FD8F00")]
	private static bool TryNegativeInt64ToDecStr(long input, int digits, string sNegative, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008EE")]
	[Address(RVA = "0x4FD8780", Offset = "0x4FD8780", VA = "0x4FD8780")]
	private static string Int64ToHexStr(long value, char hexBase, int digits)
	{
		return null;
	}

	[Token(Token = "0x60008EF")]
	[Address(RVA = "0x4FD9290", Offset = "0x4FD9290", VA = "0x4FD9290")]
	private static bool TryInt64ToHexStr(long value, char hexBase, int digits, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F0")]
	[Address(RVA = "0x4FD9780", Offset = "0x4FD9780", VA = "0x4FD9780")]
	private static void UInt64ToNumber(ulong value, ref NumberBuffer number)
	{
	}

	[Token(Token = "0x60008F1")]
	[Address(RVA = "0x4FD80D0", Offset = "0x4FD80D0", VA = "0x4FD80D0")]
	private static string UInt64ToDecStr(ulong value, int digits)
	{
		return null;
	}

	[Token(Token = "0x60008F2")]
	[Address(RVA = "0x4FD8BC0", Offset = "0x4FD8BC0", VA = "0x4FD8BC0")]
	private static bool TryUInt64ToDecStr(ulong value, int digits, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F3")]
	[Address(RVA = "0x4FD3D10", Offset = "0x4FD3D10", VA = "0x4FD3D10")]
	internal static char ParseFormatSpecifier(ReadOnlySpan<char> format, out int digits)
	{
		return default(char);
	}

	[Token(Token = "0x60008F4")]
	[Address(RVA = "0x4FD4050", Offset = "0x4FD4050", VA = "0x4FD4050")]
	internal static void NumberToString(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, char format, int nMaxDigits, NumberFormatInfo info, bool isDecimal)
	{
	}

	[Token(Token = "0x60008F5")]
	[Address(RVA = "0x4FD4640", Offset = "0x4FD4640", VA = "0x4FD4640")]
	internal static void NumberToStringFormat(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, ReadOnlySpan<char> format, NumberFormatInfo info)
	{
	}

	[Token(Token = "0x60008F6")]
	[Address(RVA = "0x4FDA010", Offset = "0x4FDA010", VA = "0x4FDA010")]
	private static void FormatCurrency(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info)
	{
	}

	[Token(Token = "0x60008F7")]
	[Address(RVA = "0x4FDA350", Offset = "0x4FDA350", VA = "0x4FDA350")]
	private static void FormatFixed(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info, int[] groupDigits, string sDecimal, string sGroup)
	{
	}

	[Token(Token = "0x60008F8")]
	[Address(RVA = "0x4FDA9C0", Offset = "0x4FDA9C0", VA = "0x4FDA9C0")]
	private static void FormatNumber(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info)
	{
	}

	[Token(Token = "0x60008F9")]
	[Address(RVA = "0x4FDAD10", Offset = "0x4FDAD10", VA = "0x4FDAD10")]
	private static void FormatScientific(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info, char expChar)
	{
	}

	[Token(Token = "0x60008FA")]
	[Address(RVA = "0x4FDB7F0", Offset = "0x4FDB7F0", VA = "0x4FDB7F0")]
	private static void FormatExponent(ref System.Text.ValueStringBuilder sb, NumberFormatInfo info, int value, char expChar, int minDigits, bool positiveSign)
	{
	}

	[Token(Token = "0x60008FB")]
	[Address(RVA = "0x4FDAF80", Offset = "0x4FDAF80", VA = "0x4FDAF80")]
	private static void FormatGeneral(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info, char expChar, bool bSuppressScientific)
	{
	}

	[Token(Token = "0x60008FC")]
	[Address(RVA = "0x4FDB390", Offset = "0x4FDB390", VA = "0x4FDB390")]
	private static void FormatPercent(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info)
	{
	}

	[Token(Token = "0x60008FD")]
	[Address(RVA = "0x4FD9F20", Offset = "0x4FD9F20", VA = "0x4FD9F20")]
	private static void RoundNumber(ref NumberBuffer number, int pos)
	{
	}

	[Token(Token = "0x60008FE")]
	[Address(RVA = "0x4FDB6C0", Offset = "0x4FDB6C0", VA = "0x4FDB6C0")]
	private static int FindSection(ReadOnlySpan<char> format, int section)
	{
		return default(int);
	}

	[Token(Token = "0x60008FF")]
	[Address(RVA = "0x4FD9F10", Offset = "0x4FD9F10", VA = "0x4FD9F10")]
	private static uint Low32(ulong value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000900")]
	[Address(RVA = "0x4FD9F00", Offset = "0x4FD9F00", VA = "0x4FD9F00")]
	private static uint High32(ulong value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000901")]
	[Address(RVA = "0x4FD9ED0", Offset = "0x4FD9ED0", VA = "0x4FD9ED0")]
	private static uint Int64DivMod1E9(ref ulong value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000902")]
	[Address(RVA = "0x4FDBAB0", Offset = "0x4FDBAB0", VA = "0x4FDBAB0")]
	private static bool NumberToInt32(ref NumberBuffer number, ref int value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000903")]
	[Address(RVA = "0x4FDBB40", Offset = "0x4FDBB40", VA = "0x4FDBB40")]
	private static bool NumberToInt64(ref NumberBuffer number, ref long value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000904")]
	[Address(RVA = "0x4FDBBD0", Offset = "0x4FDBBD0", VA = "0x4FDBBD0")]
	private static bool NumberToUInt32(ref NumberBuffer number, ref uint value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000905")]
	[Address(RVA = "0x4FDBC60", Offset = "0x4FDBC60", VA = "0x4FDBC60")]
	private static bool NumberToUInt64(ref NumberBuffer number, ref ulong value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000906")]
	[Address(RVA = "0x4FCDA00", Offset = "0x4FCDA00", VA = "0x4FCDA00")]
	internal static int ParseInt32(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info)
	{
		return default(int);
	}

	[Token(Token = "0x6000907")]
	[Address(RVA = "0x4FD0210", Offset = "0x4FD0210", VA = "0x4FD0210")]
	internal static long ParseInt64(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info)
	{
		return default(long);
	}

	[Token(Token = "0x6000908")]
	[Address(RVA = "0x4FDDE80", Offset = "0x4FDDE80", VA = "0x4FDDE80")]
	internal static uint ParseUInt32(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info)
	{
		return default(uint);
	}

	[Token(Token = "0x6000909")]
	[Address(RVA = "0x4FDEB20", Offset = "0x4FDEB20", VA = "0x4FDEB20")]
	internal static ulong ParseUInt64(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info)
	{
		return default(ulong);
	}

	[Token(Token = "0x600090A")]
	[Address(RVA = "0x4FDF510", Offset = "0x4FDF510", VA = "0x4FDF510")]
	private unsafe static bool ParseNumber(ref char* str, char* strEnd, NumberStyles styles, ref NumberBuffer number, NumberFormatInfo info, bool parseDecimal)
	{
		return default(bool);
	}

	[Token(Token = "0x600090B")]
	[Address(RVA = "0x4FCDF40", Offset = "0x4FCDF40", VA = "0x4FCDF40")]
	internal static bool TryParseInt32(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x600090C")]
	[Address(RVA = "0x4FDBD00", Offset = "0x4FDBD00", VA = "0x4FDBD00")]
	private static bool TryParseInt32IntegerStyle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out int result, ref bool failureIsOverflow)
	{
		return default(bool);
	}

	[Token(Token = "0x600090D")]
	[Address(RVA = "0x4FDD000", Offset = "0x4FDD000", VA = "0x4FDD000")]
	private static bool TryParseInt64IntegerStyle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out long result, ref bool failureIsOverflow)
	{
		return default(bool);
	}

	[Token(Token = "0x600090E")]
	[Address(RVA = "0x4FD0670", Offset = "0x4FD0670", VA = "0x4FD0670")]
	internal static bool TryParseInt64(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out long result)
	{
		return default(bool);
	}

	[Token(Token = "0x600090F")]
	[Address(RVA = "0x4FE0790", Offset = "0x4FE0790", VA = "0x4FE0790")]
	internal static bool TryParseUInt32(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out uint result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000910")]
	[Address(RVA = "0x4FDE0A0", Offset = "0x4FDE0A0", VA = "0x4FDE0A0")]
	private static bool TryParseUInt32IntegerStyle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out uint result, ref bool failureIsOverflow)
	{
		return default(bool);
	}

	[Token(Token = "0x6000911")]
	[Address(RVA = "0x4FDC870", Offset = "0x4FDC870", VA = "0x4FDC870")]
	private static bool TryParseUInt32HexNumberStyle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out uint result, ref bool failureIsOverflow)
	{
		return default(bool);
	}

	[Token(Token = "0x6000912")]
	[Address(RVA = "0x4FE09C0", Offset = "0x4FE09C0", VA = "0x4FE09C0")]
	internal static bool TryParseUInt64(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out ulong result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000913")]
	[Address(RVA = "0x4FDED70", Offset = "0x4FDED70", VA = "0x4FDED70")]
	private static bool TryParseUInt64IntegerStyle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out ulong result, ref bool failureIsOverflow)
	{
		return default(bool);
	}

	[Token(Token = "0x6000914")]
	[Address(RVA = "0x4FDD7A0", Offset = "0x4FDD7A0", VA = "0x4FDD7A0")]
	private static bool TryParseUInt64HexNumberStyle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out ulong result, ref bool failureIsOverflow)
	{
		return default(bool);
	}

	[Token(Token = "0x6000915")]
	[Address(RVA = "0x4FE0C00", Offset = "0x4FE0C00", VA = "0x4FE0C00")]
	internal static decimal ParseDecimal(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000916")]
	[Address(RVA = "0x4FE0D00", Offset = "0x4FE0D00", VA = "0x4FE0D00")]
	private static bool NumberBufferToDecimal(ref NumberBuffer number, ref decimal value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000917")]
	[Address(RVA = "0x4FE1000", Offset = "0x4FE1000", VA = "0x4FE1000")]
	internal static double ParseDouble(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info)
	{
		return default(double);
	}

	[Token(Token = "0x6000918")]
	[Address(RVA = "0x4FE1490", Offset = "0x4FE1490", VA = "0x4FE1490")]
	internal static float ParseSingle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info)
	{
		return default(float);
	}

	[Token(Token = "0x6000919")]
	[Address(RVA = "0x4FE18B0", Offset = "0x4FE18B0", VA = "0x4FE18B0")]
	internal static bool TryParseDecimal(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out decimal result)
	{
		return default(bool);
	}

	[Token(Token = "0x600091A")]
	[Address(RVA = "0x4FE1990", Offset = "0x4FE1990", VA = "0x4FE1990")]
	internal static bool TryParseDouble(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out double result)
	{
		return default(bool);
	}

	[Token(Token = "0x600091B")]
	[Address(RVA = "0x4FE1B00", Offset = "0x4FE1B00", VA = "0x4FE1B00")]
	internal static bool TryParseSingle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out float result)
	{
		return default(bool);
	}

	[Token(Token = "0x600091C")]
	[Address(RVA = "0x4FDCEA0", Offset = "0x4FDCEA0", VA = "0x4FDCEA0")]
	private static void StringToNumber(ReadOnlySpan<char> value, NumberStyles styles, ref NumberBuffer number, NumberFormatInfo info, bool parseDecimal)
	{
	}

	[Token(Token = "0x600091D")]
	[Address(RVA = "0x4FE05E0", Offset = "0x4FE05E0", VA = "0x4FE05E0")]
	internal static bool TryStringToNumber(ReadOnlySpan<char> value, NumberStyles styles, ref NumberBuffer number, NumberFormatInfo info, bool parseDecimal)
	{
		return default(bool);
	}

	[Token(Token = "0x600091E")]
	[Address(RVA = "0x4FE0730", Offset = "0x4FE0730", VA = "0x4FE0730")]
	private static bool TrailingZeros(ReadOnlySpan<char> value, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600091F")]
	[Address(RVA = "0x4FE0540", Offset = "0x4FE0540", VA = "0x4FE0540")]
	private unsafe static char* MatchChars(char* p, char* pEnd, string value)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x6000920")]
	[Address(RVA = "0x4FE0520", Offset = "0x4FE0520", VA = "0x4FE0520")]
	private static bool IsWhite(int ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000921")]
	[Address(RVA = "0x4FE05D0", Offset = "0x4FE05D0", VA = "0x4FE05D0")]
	private static bool IsDigit(int ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000922")]
	[Address(RVA = "0x4FDC7E0", Offset = "0x4FDC7E0", VA = "0x4FDC7E0")]
	private static void ThrowOverflowOrFormatException(bool overflow, string overflowResourceKey)
	{
	}

	[Token(Token = "0x6000923")]
	[Address(RVA = "0x4FE1410", Offset = "0x4FE1410", VA = "0x4FE1410")]
	private static bool NumberBufferToDouble(ref NumberBuffer number, ref double value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000924")]
	[Address(RVA = "0x4FE1C80", Offset = "0x4FE1C80", VA = "0x4FE1C80")]
	private unsafe static uint DigitsToInt(char* p, int count)
	{
		return default(uint);
	}

	[Token(Token = "0x6000925")]
	[Address(RVA = "0x4FE1CC0", Offset = "0x4FE1CC0", VA = "0x4FE1CC0")]
	private static ulong Mul32x32To64(uint a, uint b)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000926")]
	[Address(RVA = "0x4FE1CD0", Offset = "0x4FE1CD0", VA = "0x4FE1CD0")]
	private static ulong Mul64Lossy(ulong a, ulong b, ref int pexp)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000927")]
	[Address(RVA = "0x4FE1D50", Offset = "0x4FE1D50", VA = "0x4FE1D50")]
	private static int abs(int value)
	{
		return default(int);
	}

	[Token(Token = "0x6000928")]
	[Address(RVA = "0x4FD6890", Offset = "0x4FD6890", VA = "0x4FD6890")]
	private static double NumberToDouble(ref NumberBuffer number)
	{
		return default(double);
	}

	[Token(Token = "0x6000929")]
	[Address(RVA = "0x4FD63F0", Offset = "0x4FD63F0", VA = "0x4FD63F0")]
	private static void DoubleToNumber(double value, int precision, ref NumberBuffer number)
	{
	}
}
