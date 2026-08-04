// ==================== AoTTG2 cross-reference ====================
// Type: System.Number
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
			[Address(RVA = "0x3CC8940", Offset = "0x3CC8940", VA = "0x3CC8940")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x600092C")]
			[Address(RVA = "0x3CC8950", Offset = "0x3CC8950", VA = "0x3CC8950")]
			set
			{
			}
		}

		[Token(Token = "0x1700009C")]
		public unsafe char* digits
		{
			[Token(Token = "0x600092D")]
			[Address(RVA = "0x3CC8960", Offset = "0x3CC8960", VA = "0x3CC8960")]
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
	[Address(RVA = "0x3CB9660", Offset = "0x3CB9660", VA = "0x3CB9660")]
	public static string FormatDecimal(decimal value, ReadOnlySpan<char> format, NumberFormatInfo info)
	{
		return null;
	}

	[Token(Token = "0x60008D0")]
	[Address(RVA = "0x3CBB5B0", Offset = "0x3CBB5B0", VA = "0x3CBB5B0")]
	public static bool TryFormatDecimal(decimal value, ReadOnlySpan<char> format, NumberFormatInfo info, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x3CB9940", Offset = "0x3CB9940", VA = "0x3CB9940")]
	private static void DecimalToNumber(decimal value, ref NumberBuffer number)
	{
	}

	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x3CBB7F0", Offset = "0x3CBB7F0", VA = "0x3CBB7F0")]
	public static string FormatDouble(double value, string format, NumberFormatInfo info)
	{
		return null;
	}

	[Token(Token = "0x60008D3")]
	[Address(RVA = "0x3CBBC80", Offset = "0x3CBBC80", VA = "0x3CBBC80")]
	public static bool TryFormatDouble(double value, ReadOnlySpan<char> format, NumberFormatInfo info, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D4")]
	[Address(RVA = "0x3CBB910", Offset = "0x3CBB910", VA = "0x3CBB910")]
	private static string FormatDouble(ref System.Text.ValueStringBuilder sb, double value, ReadOnlySpan<char> format, NumberFormatInfo info)
	{
		return null;
	}

	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x3CBCA80", Offset = "0x3CBCA80", VA = "0x3CBCA80")]
	public static string FormatSingle(float value, string format, NumberFormatInfo info)
	{
		return null;
	}

	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x3CBCF00", Offset = "0x3CBCF00", VA = "0x3CBCF00")]
	public static bool TryFormatSingle(float value, ReadOnlySpan<char> format, NumberFormatInfo info, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D7")]
	[Address(RVA = "0x3CBCBA0", Offset = "0x3CBCBA0", VA = "0x3CBCBA0")]
	private static string FormatSingle(ref System.Text.ValueStringBuilder sb, float value, ReadOnlySpan<char> format, NumberFormatInfo info)
	{
		return null;
	}

	[Token(Token = "0x60008D8")]
	[Address(RVA = "0x3CBBE30", Offset = "0x3CBBE30", VA = "0x3CBBE30")]
	private static bool TryCopyTo(string source, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D9")]
	[Address(RVA = "0x3CB2400", Offset = "0x3CB2400", VA = "0x3CB2400")]
	public static string FormatInt32(int value, ReadOnlySpan<char> format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60008DA")]
	[Address(RVA = "0x3CB2F10", Offset = "0x3CB2F10", VA = "0x3CB2F10")]
	public static bool TryFormatInt32(int value, ReadOnlySpan<char> format, IFormatProvider provider, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008DB")]
	[Address(RVA = "0x3CB28B0", Offset = "0x3CB28B0", VA = "0x3CB28B0")]
	public static string FormatUInt32(uint value, ReadOnlySpan<char> format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60008DC")]
	[Address(RVA = "0x3CB2C30", Offset = "0x3CB2C30", VA = "0x3CB2C30")]
	public static bool TryFormatUInt32(uint value, ReadOnlySpan<char> format, IFormatProvider provider, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008DD")]
	[Address(RVA = "0x3CB5390", Offset = "0x3CB5390", VA = "0x3CB5390")]
	public static string FormatInt64(long value, ReadOnlySpan<char> format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60008DE")]
	[Address(RVA = "0x3CB5900", Offset = "0x3CB5900", VA = "0x3CB5900")]
	public static bool TryFormatInt64(long value, ReadOnlySpan<char> format, IFormatProvider provider, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008DF")]
	[Address(RVA = "0x3CBF010", Offset = "0x3CBF010", VA = "0x3CBF010")]
	public static string FormatUInt64(ulong value, ReadOnlySpan<char> format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x3CBF460", Offset = "0x3CBF460", VA = "0x3CBF460")]
	public static bool TryFormatUInt64(ulong value, ReadOnlySpan<char> format, IFormatProvider provider, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E1")]
	[Address(RVA = "0x3CBF740", Offset = "0x3CBF740", VA = "0x3CBF740")]
	private static void Int32ToNumber(int value, ref NumberBuffer number)
	{
	}

	[Token(Token = "0x60008E2")]
	[Address(RVA = "0x3CBD290", Offset = "0x3CBD290", VA = "0x3CBD290")]
	private static string NegativeInt32ToDecStr(int value, int digits, string sNegative)
	{
		return null;
	}

	[Token(Token = "0x60008E3")]
	[Address(RVA = "0x3CBD820", Offset = "0x3CBD820", VA = "0x3CBD820")]
	private static bool TryNegativeInt32ToDecStr(int value, int digits, string sNegative, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008E4")]
	[Address(RVA = "0x3CBD4B0", Offset = "0x3CBD4B0", VA = "0x3CBD4B0")]
	private static string Int32ToHexStr(int value, char hexBase, int digits)
	{
		return null;
	}

	[Token(Token = "0x60008E5")]
	[Address(RVA = "0x3CBDA70", Offset = "0x3CBDA70", VA = "0x3CBDA70")]
	private static bool TryInt32ToHexStr(int value, char hexBase, int digits, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008E6")]
	[Address(RVA = "0x3CBF870", Offset = "0x3CBF870", VA = "0x3CBF870")]
	private unsafe static char* Int32ToHexChars(char* buffer, uint value, int hexBase, int digits)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E7")]
	[Address(RVA = "0x3CBF8D0", Offset = "0x3CBF8D0", VA = "0x3CBF8D0")]
	private static void UInt32ToNumber(uint value, ref NumberBuffer number)
	{
	}

	[Token(Token = "0x60008E8")]
	[Address(RVA = "0x3CBB790", Offset = "0x3CBB790", VA = "0x3CBB790")]
	internal unsafe static char* UInt32ToDecChars(char* bufferEnd, uint value, int digits)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60008E9")]
	[Address(RVA = "0x3CBD0B0", Offset = "0x3CBD0B0", VA = "0x3CBD0B0")]
	private static string UInt32ToDecStr(uint value, int digits)
	{
		return null;
	}

	[Token(Token = "0x60008EA")]
	[Address(RVA = "0x3CBD610", Offset = "0x3CBD610", VA = "0x3CBD610")]
	private static bool TryUInt32ToDecStr(uint value, int digits, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008EB")]
	[Address(RVA = "0x3CBE500", Offset = "0x3CBE500", VA = "0x3CBE500")]
	private static void Int64ToNumber(long input, ref NumberBuffer number)
	{
	}

	[Token(Token = "0x60008EC")]
	[Address(RVA = "0x3CBDF10", Offset = "0x3CBDF10", VA = "0x3CBDF10")]
	private static string NegativeInt64ToDecStr(long input, int digits, string sNegative)
	{
		return null;
	}

	[Token(Token = "0x60008ED")]
	[Address(RVA = "0x3CBEA20", Offset = "0x3CBEA20", VA = "0x3CBEA20")]
	private static bool TryNegativeInt64ToDecStr(long input, int digits, string sNegative, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008EE")]
	[Address(RVA = "0x3CBE2A0", Offset = "0x3CBE2A0", VA = "0x3CBE2A0")]
	private static string Int64ToHexStr(long value, char hexBase, int digits)
	{
		return null;
	}

	[Token(Token = "0x60008EF")]
	[Address(RVA = "0x3CBEDB0", Offset = "0x3CBEDB0", VA = "0x3CBEDB0")]
	private static bool TryInt64ToHexStr(long value, char hexBase, int digits, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F0")]
	[Address(RVA = "0x3CBF2A0", Offset = "0x3CBF2A0", VA = "0x3CBF2A0")]
	private static void UInt64ToNumber(ulong value, ref NumberBuffer number)
	{
	}

	[Token(Token = "0x60008F1")]
	[Address(RVA = "0x3CBDBF0", Offset = "0x3CBDBF0", VA = "0x3CBDBF0")]
	private static string UInt64ToDecStr(ulong value, int digits)
	{
		return null;
	}

	[Token(Token = "0x60008F2")]
	[Address(RVA = "0x3CBE6E0", Offset = "0x3CBE6E0", VA = "0x3CBE6E0")]
	private static bool TryUInt64ToDecStr(ulong value, int digits, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F3")]
	[Address(RVA = "0x3CB9830", Offset = "0x3CB9830", VA = "0x3CB9830")]
	internal static char ParseFormatSpecifier(ReadOnlySpan<char> format, out int digits)
	{
		return default(char);
	}

	[Token(Token = "0x60008F4")]
	[Address(RVA = "0x3CB9B70", Offset = "0x3CB9B70", VA = "0x3CB9B70")]
	internal static void NumberToString(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, char format, int nMaxDigits, NumberFormatInfo info, bool isDecimal)
	{
	}

	[Token(Token = "0x60008F5")]
	[Address(RVA = "0x3CBA160", Offset = "0x3CBA160", VA = "0x3CBA160")]
	internal static void NumberToStringFormat(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, ReadOnlySpan<char> format, NumberFormatInfo info)
	{
	}

	[Token(Token = "0x60008F6")]
	[Address(RVA = "0x3CBFB30", Offset = "0x3CBFB30", VA = "0x3CBFB30")]
	private static void FormatCurrency(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info)
	{
	}

	[Token(Token = "0x60008F7")]
	[Address(RVA = "0x3CBFE70", Offset = "0x3CBFE70", VA = "0x3CBFE70")]
	private static void FormatFixed(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info, int[] groupDigits, string sDecimal, string sGroup)
	{
	}

	[Token(Token = "0x60008F8")]
	[Address(RVA = "0x3CC04E0", Offset = "0x3CC04E0", VA = "0x3CC04E0")]
	private static void FormatNumber(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info)
	{
	}

	[Token(Token = "0x60008F9")]
	[Address(RVA = "0x3CC0830", Offset = "0x3CC0830", VA = "0x3CC0830")]
	private static void FormatScientific(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info, char expChar)
	{
	}

	[Token(Token = "0x60008FA")]
	[Address(RVA = "0x3CC1310", Offset = "0x3CC1310", VA = "0x3CC1310")]
	private static void FormatExponent(ref System.Text.ValueStringBuilder sb, NumberFormatInfo info, int value, char expChar, int minDigits, bool positiveSign)
	{
	}

	[Token(Token = "0x60008FB")]
	[Address(RVA = "0x3CC0AA0", Offset = "0x3CC0AA0", VA = "0x3CC0AA0")]
	private static void FormatGeneral(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info, char expChar, bool bSuppressScientific)
	{
	}

	[Token(Token = "0x60008FC")]
	[Address(RVA = "0x3CC0EB0", Offset = "0x3CC0EB0", VA = "0x3CC0EB0")]
	private static void FormatPercent(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info)
	{
	}

	[Token(Token = "0x60008FD")]
	[Address(RVA = "0x3CBFA40", Offset = "0x3CBFA40", VA = "0x3CBFA40")]
	private static void RoundNumber(ref NumberBuffer number, int pos)
	{
	}

	[Token(Token = "0x60008FE")]
	[Address(RVA = "0x3CC11E0", Offset = "0x3CC11E0", VA = "0x3CC11E0")]
	private static int FindSection(ReadOnlySpan<char> format, int section)
	{
		return default(int);
	}

	[Token(Token = "0x60008FF")]
	[Address(RVA = "0x3CBFA30", Offset = "0x3CBFA30", VA = "0x3CBFA30")]
	private static uint Low32(ulong value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000900")]
	[Address(RVA = "0x3CBFA20", Offset = "0x3CBFA20", VA = "0x3CBFA20")]
	private static uint High32(ulong value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000901")]
	[Address(RVA = "0x3CBF9F0", Offset = "0x3CBF9F0", VA = "0x3CBF9F0")]
	private static uint Int64DivMod1E9(ref ulong value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000902")]
	[Address(RVA = "0x3CC15D0", Offset = "0x3CC15D0", VA = "0x3CC15D0")]
	private static bool NumberToInt32(ref NumberBuffer number, ref int value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000903")]
	[Address(RVA = "0x3CC1660", Offset = "0x3CC1660", VA = "0x3CC1660")]
	private static bool NumberToInt64(ref NumberBuffer number, ref long value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000904")]
	[Address(RVA = "0x3CC16F0", Offset = "0x3CC16F0", VA = "0x3CC16F0")]
	private static bool NumberToUInt32(ref NumberBuffer number, ref uint value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000905")]
	[Address(RVA = "0x3CC1780", Offset = "0x3CC1780", VA = "0x3CC1780")]
	private static bool NumberToUInt64(ref NumberBuffer number, ref ulong value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000906")]
	[Address(RVA = "0x3CB3520", Offset = "0x3CB3520", VA = "0x3CB3520")]
	internal static int ParseInt32(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info)
	{
		return default(int);
	}

	[Token(Token = "0x6000907")]
	[Address(RVA = "0x3CB5D30", Offset = "0x3CB5D30", VA = "0x3CB5D30")]
	internal static long ParseInt64(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info)
	{
		return default(long);
	}

	[Token(Token = "0x6000908")]
	[Address(RVA = "0x3CC39A0", Offset = "0x3CC39A0", VA = "0x3CC39A0")]
	internal static uint ParseUInt32(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info)
	{
		return default(uint);
	}

	[Token(Token = "0x6000909")]
	[Address(RVA = "0x3CC4640", Offset = "0x3CC4640", VA = "0x3CC4640")]
	internal static ulong ParseUInt64(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info)
	{
		return default(ulong);
	}

	[Token(Token = "0x600090A")]
	[Address(RVA = "0x3CC5030", Offset = "0x3CC5030", VA = "0x3CC5030")]
	private unsafe static bool ParseNumber(ref char* str, char* strEnd, NumberStyles styles, ref NumberBuffer number, NumberFormatInfo info, bool parseDecimal)
	{
		return default(bool);
	}

	[Token(Token = "0x600090B")]
	[Address(RVA = "0x3CB3A60", Offset = "0x3CB3A60", VA = "0x3CB3A60")]
	internal static bool TryParseInt32(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x600090C")]
	[Address(RVA = "0x3CC1820", Offset = "0x3CC1820", VA = "0x3CC1820")]
	private static bool TryParseInt32IntegerStyle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out int result, ref bool failureIsOverflow)
	{
		return default(bool);
	}

	[Token(Token = "0x600090D")]
	[Address(RVA = "0x3CC2B20", Offset = "0x3CC2B20", VA = "0x3CC2B20")]
	private static bool TryParseInt64IntegerStyle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out long result, ref bool failureIsOverflow)
	{
		return default(bool);
	}

	[Token(Token = "0x600090E")]
	[Address(RVA = "0x3CB6190", Offset = "0x3CB6190", VA = "0x3CB6190")]
	internal static bool TryParseInt64(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out long result)
	{
		return default(bool);
	}

	[Token(Token = "0x600090F")]
	[Address(RVA = "0x3CC62B0", Offset = "0x3CC62B0", VA = "0x3CC62B0")]
	internal static bool TryParseUInt32(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out uint result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000910")]
	[Address(RVA = "0x3CC3BC0", Offset = "0x3CC3BC0", VA = "0x3CC3BC0")]
	private static bool TryParseUInt32IntegerStyle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out uint result, ref bool failureIsOverflow)
	{
		return default(bool);
	}

	[Token(Token = "0x6000911")]
	[Address(RVA = "0x3CC2390", Offset = "0x3CC2390", VA = "0x3CC2390")]
	private static bool TryParseUInt32HexNumberStyle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out uint result, ref bool failureIsOverflow)
	{
		return default(bool);
	}

	[Token(Token = "0x6000912")]
	[Address(RVA = "0x3CC64E0", Offset = "0x3CC64E0", VA = "0x3CC64E0")]
	internal static bool TryParseUInt64(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out ulong result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000913")]
	[Address(RVA = "0x3CC4890", Offset = "0x3CC4890", VA = "0x3CC4890")]
	private static bool TryParseUInt64IntegerStyle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out ulong result, ref bool failureIsOverflow)
	{
		return default(bool);
	}

	[Token(Token = "0x6000914")]
	[Address(RVA = "0x3CC32C0", Offset = "0x3CC32C0", VA = "0x3CC32C0")]
	private static bool TryParseUInt64HexNumberStyle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out ulong result, ref bool failureIsOverflow)
	{
		return default(bool);
	}

	[Token(Token = "0x6000915")]
	[Address(RVA = "0x3CC6720", Offset = "0x3CC6720", VA = "0x3CC6720")]
	internal static decimal ParseDecimal(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000916")]
	[Address(RVA = "0x3CC6820", Offset = "0x3CC6820", VA = "0x3CC6820")]
	private static bool NumberBufferToDecimal(ref NumberBuffer number, ref decimal value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000917")]
	[Address(RVA = "0x3CC6B20", Offset = "0x3CC6B20", VA = "0x3CC6B20")]
	internal static double ParseDouble(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info)
	{
		return default(double);
	}

	[Token(Token = "0x6000918")]
	[Address(RVA = "0x3CC6FB0", Offset = "0x3CC6FB0", VA = "0x3CC6FB0")]
	internal static float ParseSingle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info)
	{
		return default(float);
	}

	[Token(Token = "0x6000919")]
	[Address(RVA = "0x3CC73D0", Offset = "0x3CC73D0", VA = "0x3CC73D0")]
	internal static bool TryParseDecimal(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out decimal result)
	{
		return default(bool);
	}

	[Token(Token = "0x600091A")]
	[Address(RVA = "0x3CC74B0", Offset = "0x3CC74B0", VA = "0x3CC74B0")]
	internal static bool TryParseDouble(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out double result)
	{
		return default(bool);
	}

	[Token(Token = "0x600091B")]
	[Address(RVA = "0x3CC7620", Offset = "0x3CC7620", VA = "0x3CC7620")]
	internal static bool TryParseSingle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out float result)
	{
		return default(bool);
	}

	[Token(Token = "0x600091C")]
	[Address(RVA = "0x3CC29C0", Offset = "0x3CC29C0", VA = "0x3CC29C0")]
	private static void StringToNumber(ReadOnlySpan<char> value, NumberStyles styles, ref NumberBuffer number, NumberFormatInfo info, bool parseDecimal)
	{
	}

	[Token(Token = "0x600091D")]
	[Address(RVA = "0x3CC6100", Offset = "0x3CC6100", VA = "0x3CC6100")]
	internal static bool TryStringToNumber(ReadOnlySpan<char> value, NumberStyles styles, ref NumberBuffer number, NumberFormatInfo info, bool parseDecimal)
	{
		return default(bool);
	}

	[Token(Token = "0x600091E")]
	[Address(RVA = "0x3CC6250", Offset = "0x3CC6250", VA = "0x3CC6250")]
	private static bool TrailingZeros(ReadOnlySpan<char> value, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600091F")]
	[Address(RVA = "0x3CC6060", Offset = "0x3CC6060", VA = "0x3CC6060")]
	private unsafe static char* MatchChars(char* p, char* pEnd, string value)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x6000920")]
	[Address(RVA = "0x3CC6040", Offset = "0x3CC6040", VA = "0x3CC6040")]
	private static bool IsWhite(int ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000921")]
	[Address(RVA = "0x3CC60F0", Offset = "0x3CC60F0", VA = "0x3CC60F0")]
	private static bool IsDigit(int ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000922")]
	[Address(RVA = "0x3CC2300", Offset = "0x3CC2300", VA = "0x3CC2300")]
	private static void ThrowOverflowOrFormatException(bool overflow, string overflowResourceKey)
	{
	}

	[Token(Token = "0x6000923")]
	[Address(RVA = "0x3CC6F30", Offset = "0x3CC6F30", VA = "0x3CC6F30")]
	private static bool NumberBufferToDouble(ref NumberBuffer number, ref double value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000924")]
	[Address(RVA = "0x3CC77A0", Offset = "0x3CC77A0", VA = "0x3CC77A0")]
	private unsafe static uint DigitsToInt(char* p, int count)
	{
		return default(uint);
	}

	[Token(Token = "0x6000925")]
	[Address(RVA = "0x3CC77E0", Offset = "0x3CC77E0", VA = "0x3CC77E0")]
	private static ulong Mul32x32To64(uint a, uint b)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000926")]
	[Address(RVA = "0x3CC77F0", Offset = "0x3CC77F0", VA = "0x3CC77F0")]
	private static ulong Mul64Lossy(ulong a, ulong b, ref int pexp)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000927")]
	[Address(RVA = "0x3CC7870", Offset = "0x3CC7870", VA = "0x3CC7870")]
	private static int abs(int value)
	{
		return default(int);
	}

	[Token(Token = "0x6000928")]
	[Address(RVA = "0x3CBC3B0", Offset = "0x3CBC3B0", VA = "0x3CBC3B0")]
	private static double NumberToDouble(ref NumberBuffer number)
	{
		return default(double);
	}

	[Token(Token = "0x6000929")]
	[Address(RVA = "0x3CBBF10", Offset = "0x3CBBF10", VA = "0x3CBBF10")]
	private static void DoubleToNumber(double value, int precision, ref NumberBuffer number)
	{
	}
}
