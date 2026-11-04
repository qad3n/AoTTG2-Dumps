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

[Token(Token = "0x200011D")]
internal static class Number
{
	[Token(Token = "0x200011E")]
	internal ref struct NumberBuffer
	{
		[Token(Token = "0x200011F")]
		private struct DigitsAndNullTerminator
		{
		}

		[Token(Token = "0x4000422")]
		[FieldOffset(Offset = "0x0")]
		public int precision;

		[Token(Token = "0x4000423")]
		[FieldOffset(Offset = "0x4")]
		public int scale;

		[Token(Token = "0x4000424")]
		[FieldOffset(Offset = "0x8")]
		private int _sign;

		[Token(Token = "0x4000425")]
		[FieldOffset(Offset = "0xC")]
		private DigitsAndNullTerminator _digits;

		[Token(Token = "0x4000426")]
		[FieldOffset(Offset = "0x72")]
		private unsafe char* _allDigits;

		[Token(Token = "0x1700009B")]
		public bool sign
		{
			[Token(Token = "0x6000966")]
			[Address(RVA = "0x1B449D0", Offset = "0x1B42FD0", VA = "0x181B449D0")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6000967")]
			[Address(RVA = "0x1B449E0", Offset = "0x1B42FE0", VA = "0x181B449E0")]
			set
			{
			}
		}

		[Token(Token = "0x1700009C")]
		public unsafe char* digits
		{
			[Token(Token = "0x6000968")]
			[Address(RVA = "0x1B449C0", Offset = "0x1B42FC0", VA = "0x181B449C0")]
			get
			{
				//IL_0002: Expected I, but got O
				return (char*)unchecked((nint)null);
			}
		}
	}

	[Token(Token = "0x4000418")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] s_posCurrencyFormats;

	[Token(Token = "0x4000419")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] s_negCurrencyFormats;

	[Token(Token = "0x400041A")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string[] s_posPercentFormats;

	[Token(Token = "0x400041B")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string[] s_negPercentFormats;

	[Token(Token = "0x400041C")]
	[FieldOffset(Offset = "0x20")]
	private static readonly string[] s_negNumberFormats;

	[Token(Token = "0x400041D")]
	[FieldOffset(Offset = "0x28")]
	private static readonly int[] s_charToHexLookup;

	[Token(Token = "0x400041E")]
	[FieldOffset(Offset = "0x30")]
	private static readonly ulong[] s_rgval64Power10;

	[Token(Token = "0x400041F")]
	[FieldOffset(Offset = "0x38")]
	private static readonly sbyte[] s_rgexp64Power10;

	[Token(Token = "0x4000420")]
	[FieldOffset(Offset = "0x40")]
	private static readonly ulong[] s_rgval64Power10By16;

	[Token(Token = "0x4000421")]
	[FieldOffset(Offset = "0x48")]
	private static readonly short[] s_rgexp64Power10By16;

	[Token(Token = "0x600090A")]
	[Address(RVA = "0x1B2ECF0", Offset = "0x1B2D2F0", VA = "0x181B2ECF0")]
	public static string FormatDecimal(decimal value, ReadOnlySpan<char> format, NumberFormatInfo info)
	{
		return null;
	}

	[Token(Token = "0x600090B")]
	[Address(RVA = "0x1B36290", Offset = "0x1B34890", VA = "0x181B36290")]
	public static bool TryFormatDecimal(decimal value, ReadOnlySpan<char> format, NumberFormatInfo info, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x600090C")]
	[Address(RVA = "0x1B2E640", Offset = "0x1B2CC40", VA = "0x181B2E640")]
	private static void DecimalToNumber(decimal value, ref NumberBuffer number)
	{
	}

	[Token(Token = "0x600090D")]
	[Address(RVA = "0x1B2EEC0", Offset = "0x1B2D4C0", VA = "0x181B2EEC0")]
	public static string FormatDouble(double value, string format, NumberFormatInfo info)
	{
		return null;
	}

	[Token(Token = "0x600090E")]
	[Address(RVA = "0x1B36490", Offset = "0x1B34A90", VA = "0x181B36490")]
	public static bool TryFormatDouble(double value, ReadOnlySpan<char> format, NumberFormatInfo info, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x600090F")]
	[Address(RVA = "0x1B2F000", Offset = "0x1B2D600", VA = "0x181B2F000")]
	private static string FormatDouble(ref System.Text.ValueStringBuilder sb, double value, ReadOnlySpan<char> format, NumberFormatInfo info)
	{
		return null;
	}

	[Token(Token = "0x6000910")]
	[Address(RVA = "0x1B307B0", Offset = "0x1B2EDB0", VA = "0x181B307B0")]
	public static string FormatSingle(float value, string format, NumberFormatInfo info)
	{
		return null;
	}

	[Token(Token = "0x6000911")]
	[Address(RVA = "0x1B36E60", Offset = "0x1B35460", VA = "0x181B36E60")]
	public static bool TryFormatSingle(float value, ReadOnlySpan<char> format, NumberFormatInfo info, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6000912")]
	[Address(RVA = "0x1B308F0", Offset = "0x1B2EEF0", VA = "0x181B308F0")]
	private static string FormatSingle(ref System.Text.ValueStringBuilder sb, float value, ReadOnlySpan<char> format, NumberFormatInfo info)
	{
		return null;
	}

	[Token(Token = "0x6000913")]
	[Address(RVA = "0x1B361A0", Offset = "0x1B347A0", VA = "0x181B361A0")]
	private static bool TryCopyTo(string source, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6000914")]
	[Address(RVA = "0x1B2FB80", Offset = "0x1B2E180", VA = "0x181B2FB80")]
	public static string FormatInt32(int value, ReadOnlySpan<char> format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000915")]
	[Address(RVA = "0x1B36670", Offset = "0x1B34C70", VA = "0x181B36670")]
	public static bool TryFormatInt32(int value, ReadOnlySpan<char> format, IFormatProvider provider, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6000916")]
	[Address(RVA = "0x1B30C10", Offset = "0x1B2F210", VA = "0x181B30C10")]
	public static string FormatUInt32(uint value, ReadOnlySpan<char> format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000917")]
	[Address(RVA = "0x1B37040", Offset = "0x1B35640", VA = "0x181B37040")]
	public static bool TryFormatUInt32(uint value, ReadOnlySpan<char> format, IFormatProvider provider, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6000918")]
	[Address(RVA = "0x1B2FF70", Offset = "0x1B2E570", VA = "0x181B2FF70")]
	public static string FormatInt64(long value, ReadOnlySpan<char> format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000919")]
	[Address(RVA = "0x1B36B00", Offset = "0x1B35100", VA = "0x181B36B00")]
	public static bool TryFormatInt64(long value, ReadOnlySpan<char> format, IFormatProvider provider, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x600091A")]
	[Address(RVA = "0x1B30EC0", Offset = "0x1B2F4C0", VA = "0x181B30EC0")]
	public static string FormatUInt64(ulong value, ReadOnlySpan<char> format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600091B")]
	[Address(RVA = "0x1B37520", Offset = "0x1B35B20", VA = "0x181B37520")]
	public static bool TryFormatUInt64(ulong value, ReadOnlySpan<char> format, IFormatProvider provider, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600091C")]
	[Address(RVA = "0x1B31310", Offset = "0x1B2F910", VA = "0x181B31310")]
	private static void Int32ToNumber(int value, ref NumberBuffer number)
	{
	}

	[Token(Token = "0x600091D")]
	[Address(RVA = "0x1B319A0", Offset = "0x1B2FFA0", VA = "0x181B319A0")]
	private static string NegativeInt32ToDecStr(int value, int digits, string sNegative)
	{
		return null;
	}

	[Token(Token = "0x600091E")]
	[Address(RVA = "0x1B37BB0", Offset = "0x1B361B0", VA = "0x181B37BB0")]
	private static bool TryNegativeInt32ToDecStr(int value, int digits, string sNegative, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x600091F")]
	[Address(RVA = "0x1B311E0", Offset = "0x1B2F7E0", VA = "0x181B311E0")]
	private static string Int32ToHexStr(int value, char hexBase, int digits)
	{
		return null;
	}

	[Token(Token = "0x6000920")]
	[Address(RVA = "0x1B37800", Offset = "0x1B35E00", VA = "0x181B37800")]
	private static bool TryInt32ToHexStr(int value, char hexBase, int digits, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6000921")]
	[Address(RVA = "0x1B31190", Offset = "0x1B2F790", VA = "0x181B31190")]
	private unsafe static char* Int32ToHexChars(char* buffer, uint value, int hexBase, int digits)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000922")]
	[Address(RVA = "0x1B3AF30", Offset = "0x1B39530", VA = "0x181B3AF30")]
	private static void UInt32ToNumber(uint value, ref NumberBuffer number)
	{
	}

	[Token(Token = "0x6000923")]
	[Address(RVA = "0x1B3ADC0", Offset = "0x1B393C0", VA = "0x181B3ADC0")]
	internal unsafe static char* UInt32ToDecChars(char* bufferEnd, uint value, int digits)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x6000924")]
	[Address(RVA = "0x1B3AE10", Offset = "0x1B39410", VA = "0x181B3AE10")]
	private static string UInt32ToDecStr(uint value, int digits)
	{
		return null;
	}

	[Token(Token = "0x6000925")]
	[Address(RVA = "0x1B3AA80", Offset = "0x1B39080", VA = "0x181B3AA80")]
	private static bool TryUInt32ToDecStr(uint value, int digits, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6000926")]
	[Address(RVA = "0x1B31670", Offset = "0x1B2FC70", VA = "0x181B31670")]
	private static void Int64ToNumber(long input, ref NumberBuffer number)
	{
	}

	[Token(Token = "0x6000927")]
	[Address(RVA = "0x1B31AF0", Offset = "0x1B300F0", VA = "0x181B31AF0")]
	private static string NegativeInt64ToDecStr(long input, int digits, string sNegative)
	{
		return null;
	}

	[Token(Token = "0x6000928")]
	[Address(RVA = "0x1B37D20", Offset = "0x1B36320", VA = "0x181B37D20")]
	private static bool TryNegativeInt64ToDecStr(long input, int digits, string sNegative, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6000929")]
	[Address(RVA = "0x1B31460", Offset = "0x1B2FA60", VA = "0x181B31460")]
	private static string Int64ToHexStr(long value, char hexBase, int digits)
	{
		return null;
	}

	[Token(Token = "0x600092A")]
	[Address(RVA = "0x1B37960", Offset = "0x1B35F60", VA = "0x181B37960")]
	private static bool TryInt64ToHexStr(long value, char hexBase, int digits, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x600092B")]
	[Address(RVA = "0x1B3B1D0", Offset = "0x1B397D0", VA = "0x181B3B1D0")]
	private static void UInt64ToNumber(ulong value, ref NumberBuffer number)
	{
	}

	[Token(Token = "0x600092C")]
	[Address(RVA = "0x1B3B020", Offset = "0x1B39620", VA = "0x181B3B020")]
	private static string UInt64ToDecStr(ulong value, int digits)
	{
		return null;
	}

	[Token(Token = "0x600092D")]
	[Address(RVA = "0x1B3ABE0", Offset = "0x1B391E0", VA = "0x181B3ABE0")]
	private static bool TryUInt64ToDecStr(ulong value, int digits, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x600092E")]
	[Address(RVA = "0x1B34300", Offset = "0x1B32900", VA = "0x181B34300")]
	internal static char ParseFormatSpecifier(ReadOnlySpan<char> format, out int digits)
	{
		return default(char);
	}

	[Token(Token = "0x600092F")]
	[Address(RVA = "0x1B335B0", Offset = "0x1B31BB0", VA = "0x181B335B0")]
	internal static void NumberToString(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, char format, int nMaxDigits, NumberFormatInfo info, bool isDecimal)
	{
	}

	[Token(Token = "0x6000930")]
	[Address(RVA = "0x1B32890", Offset = "0x1B30E90", VA = "0x181B32890")]
	internal static void NumberToStringFormat(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, ReadOnlySpan<char> format, NumberFormatInfo info)
	{
	}

	[Token(Token = "0x6000931")]
	[Address(RVA = "0x1B2EAD0", Offset = "0x1B2D0D0", VA = "0x181B2EAD0")]
	private static void FormatCurrency(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info)
	{
	}

	[Token(Token = "0x6000932")]
	[Address(RVA = "0x1B2F440", Offset = "0x1B2DA40", VA = "0x181B2F440")]
	private static void FormatFixed(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info, int[] groupDigits, string sDecimal, string sGroup)
	{
	}

	[Token(Token = "0x6000933")]
	[Address(RVA = "0x1B30280", Offset = "0x1B2E880", VA = "0x181B30280")]
	private static void FormatNumber(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info)
	{
	}

	[Token(Token = "0x6000934")]
	[Address(RVA = "0x1B30690", Offset = "0x1B2EC90", VA = "0x181B30690")]
	private static void FormatScientific(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info, char expChar)
	{
	}

	[Token(Token = "0x6000935")]
	[Address(RVA = "0x1B2F310", Offset = "0x1B2D910", VA = "0x181B2F310")]
	private static void FormatExponent(ref System.Text.ValueStringBuilder sb, NumberFormatInfo info, int value, char expChar, int minDigits, bool positiveSign)
	{
	}

	[Token(Token = "0x6000936")]
	[Address(RVA = "0x1B2F880", Offset = "0x1B2DE80", VA = "0x181B2F880")]
	private static void FormatGeneral(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info, char expChar, bool bSuppressScientific)
	{
	}

	[Token(Token = "0x6000937")]
	[Address(RVA = "0x1B30460", Offset = "0x1B2EA60", VA = "0x181B30460")]
	private static void FormatPercent(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info)
	{
	}

	[Token(Token = "0x6000938")]
	[Address(RVA = "0x1B35E80", Offset = "0x1B34480", VA = "0x181B35E80")]
	private static void RoundNumber(ref NumberBuffer number, int pos)
	{
	}

	[Token(Token = "0x6000939")]
	[Address(RVA = "0x1B2E9C0", Offset = "0x1B2CFC0", VA = "0x181B2E9C0")]
	private static int FindSection(ReadOnlySpan<char> format, int section)
	{
		return default(int);
	}

	[Token(Token = "0x600093A")]
	[Address(RVA = "0x611500", Offset = "0x60FB00", VA = "0x180611500")]
	private static uint Low32(ulong value)
	{
		return default(uint);
	}

	[Token(Token = "0x600093B")]
	[Address(RVA = "0x1B31180", Offset = "0x1B2F780", VA = "0x181B31180")]
	private static uint High32(ulong value)
	{
		return default(uint);
	}

	[Token(Token = "0x600093C")]
	[Address(RVA = "0x1B31410", Offset = "0x1B2FA10", VA = "0x181B31410")]
	private static uint Int64DivMod1E9(ref ulong value)
	{
		return default(uint);
	}

	[Token(Token = "0x600093D")]
	[Address(RVA = "0x1B32730", Offset = "0x1B30D30", VA = "0x181B32730")]
	private static bool NumberToInt32(ref NumberBuffer number, ref int value)
	{
		return default(bool);
	}

	[Token(Token = "0x600093E")]
	[Address(RVA = "0x1B327D0", Offset = "0x1B30DD0", VA = "0x181B327D0")]
	private static bool NumberToInt64(ref NumberBuffer number, ref long value)
	{
		return default(bool);
	}

	[Token(Token = "0x600093F")]
	[Address(RVA = "0x1B33C70", Offset = "0x1B32270", VA = "0x181B33C70")]
	private static bool NumberToUInt32(ref NumberBuffer number, ref uint value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000940")]
	[Address(RVA = "0x1B33D10", Offset = "0x1B32310", VA = "0x181B33D10")]
	private static bool NumberToUInt64(ref NumberBuffer number, ref ulong value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000941")]
	[Address(RVA = "0x1B344D0", Offset = "0x1B32AD0", VA = "0x181B344D0")]
	internal static int ParseInt32(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info)
	{
		return default(int);
	}

	[Token(Token = "0x6000942")]
	[Address(RVA = "0x1B34740", Offset = "0x1B32D40", VA = "0x181B34740")]
	internal static long ParseInt64(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info)
	{
		return default(long);
	}

	[Token(Token = "0x6000943")]
	[Address(RVA = "0x1B359F0", Offset = "0x1B33FF0", VA = "0x181B359F0")]
	internal static uint ParseUInt32(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info)
	{
		return default(uint);
	}

	[Token(Token = "0x6000944")]
	[Address(RVA = "0x1B35C30", Offset = "0x1B34230", VA = "0x181B35C30")]
	internal static ulong ParseUInt64(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000945")]
	[Address(RVA = "0x1B349B0", Offset = "0x1B32FB0", VA = "0x181B349B0")]
	private unsafe static bool ParseNumber(ref char* str, char* strEnd, NumberStyles styles, ref NumberBuffer number, NumberFormatInfo info, bool parseDecimal)
	{
		return default(bool);
	}

	[Token(Token = "0x6000946")]
	[Address(RVA = "0x1B38800", Offset = "0x1B36E00", VA = "0x181B38800")]
	internal static bool TryParseInt32(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000947")]
	[Address(RVA = "0x1B381C0", Offset = "0x1B367C0", VA = "0x181B381C0")]
	private static bool TryParseInt32IntegerStyle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out int result, ref bool failureIsOverflow)
	{
		return default(bool);
	}

	[Token(Token = "0x6000948")]
	[Address(RVA = "0x1B389C0", Offset = "0x1B36FC0", VA = "0x181B389C0")]
	private static bool TryParseInt64IntegerStyle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out long result, ref bool failureIsOverflow)
	{
		return default(bool);
	}

	[Token(Token = "0x6000949")]
	[Address(RVA = "0x1B39010", Offset = "0x1B37610", VA = "0x181B39010")]
	internal static bool TryParseInt64(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out long result)
	{
		return default(bool);
	}

	[Token(Token = "0x600094A")]
	[Address(RVA = "0x1B39C70", Offset = "0x1B38270", VA = "0x181B39C70")]
	internal static bool TryParseUInt32(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out uint result)
	{
		return default(bool);
	}

	[Token(Token = "0x600094B")]
	[Address(RVA = "0x1B39660", Offset = "0x1B37C60", VA = "0x181B39660")]
	private static bool TryParseUInt32IntegerStyle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out uint result, ref bool failureIsOverflow)
	{
		return default(bool);
	}

	[Token(Token = "0x600094C")]
	[Address(RVA = "0x1B39340", Offset = "0x1B37940", VA = "0x181B39340")]
	private static bool TryParseUInt32HexNumberStyle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out uint result, ref bool failureIsOverflow)
	{
		return default(bool);
	}

	[Token(Token = "0x600094D")]
	[Address(RVA = "0x1B3A760", Offset = "0x1B38D60", VA = "0x181B3A760")]
	internal static bool TryParseUInt64(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out ulong result)
	{
		return default(bool);
	}

	[Token(Token = "0x600094E")]
	[Address(RVA = "0x1B3A150", Offset = "0x1B38750", VA = "0x181B3A150")]
	private static bool TryParseUInt64IntegerStyle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out ulong result, ref bool failureIsOverflow)
	{
		return default(bool);
	}

	[Token(Token = "0x600094F")]
	[Address(RVA = "0x1B39E30", Offset = "0x1B38430", VA = "0x181B39E30")]
	private static bool TryParseUInt64HexNumberStyle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out ulong result, ref bool failureIsOverflow)
	{
		return default(bool);
	}

	[Token(Token = "0x6000950")]
	[Address(RVA = "0x1B33DC0", Offset = "0x1B323C0", VA = "0x181B33DC0")]
	internal static decimal ParseDecimal(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info)
	{
		return 0m;
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0x1B31D00", Offset = "0x1B30300", VA = "0x181B31D00")]
	private static bool NumberBufferToDecimal(ref NumberBuffer number, ref decimal value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000952")]
	[Address(RVA = "0x1B33EC0", Offset = "0x1B324C0", VA = "0x181B33EC0")]
	internal static double ParseDouble(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info)
	{
		return default(double);
	}

	[Token(Token = "0x6000953")]
	[Address(RVA = "0x1B35590", Offset = "0x1B33B90", VA = "0x181B35590")]
	internal static float ParseSingle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info)
	{
		return default(float);
	}

	[Token(Token = "0x6000954")]
	[Address(RVA = "0x1B37F60", Offset = "0x1B36560", VA = "0x181B37F60")]
	internal static bool TryParseDecimal(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out decimal result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x1B38060", Offset = "0x1B36660", VA = "0x181B38060")]
	internal static bool TryParseDouble(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out double result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x1B391D0", Offset = "0x1B377D0", VA = "0x181B391D0")]
	internal static bool TryParseSingle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out float result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x1B35F20", Offset = "0x1B34520", VA = "0x181B35F20")]
	private static void StringToNumber(ReadOnlySpan<char> value, NumberStyles styles, ref NumberBuffer number, NumberFormatInfo info, bool parseDecimal)
	{
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x1B3A920", Offset = "0x1B38F20", VA = "0x181B3A920")]
	internal static bool TryStringToNumber(ReadOnlySpan<char> value, NumberStyles styles, ref NumberBuffer number, NumberFormatInfo info, bool parseDecimal)
	{
		return default(bool);
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x1B36130", Offset = "0x1B34730", VA = "0x181B36130")]
	private static bool TrailingZeros(ReadOnlySpan<char> value, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x1B31870", Offset = "0x1B2FE70", VA = "0x181B31870")]
	private unsafe static char* MatchChars(char* p, char* pEnd, string value)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x1B31850", Offset = "0x1B2FE50", VA = "0x181B31850")]
	private static bool IsWhite(int ch)
	{
		return default(bool);
	}

	[Token(Token = "0x600095C")]
	[Address(RVA = "0x1B31840", Offset = "0x1B2FE40", VA = "0x181B31840")]
	private static bool IsDigit(int ch)
	{
		return default(bool);
	}

	[Token(Token = "0x600095D")]
	[Address(RVA = "0x1B36090", Offset = "0x1B34690", VA = "0x181B36090")]
	private static void ThrowOverflowOrFormatException(bool overflow, string overflowResourceKey)
	{
	}

	[Token(Token = "0x600095E")]
	[Address(RVA = "0x1B31FE0", Offset = "0x1B305E0", VA = "0x181B31FE0")]
	private static bool NumberBufferToDouble(ref NumberBuffer number, ref double value)
	{
		return default(bool);
	}

	[Token(Token = "0x600095F")]
	[Address(RVA = "0x1B2E830", Offset = "0x1B2CE30", VA = "0x181B2E830")]
	private unsafe static uint DigitsToInt(char* p, int count)
	{
		return default(uint);
	}

	[Token(Token = "0x6000960")]
	[Address(RVA = "0x1B31900", Offset = "0x1B2FF00", VA = "0x181B31900")]
	private static ulong Mul32x32To64(uint a, uint b)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000961")]
	[Address(RVA = "0x1B31910", Offset = "0x1B2FF10", VA = "0x181B31910")]
	private static ulong Mul64Lossy(ulong a, ulong b, ref int pexp)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000962")]
	[Address(RVA = "0x1B3BE10", Offset = "0x1B3A410", VA = "0x181B3BE10")]
	private static int abs(int value)
	{
		return default(int);
	}

	[Token(Token = "0x6000963")]
	[Address(RVA = "0x1B32080", Offset = "0x1B30680", VA = "0x181B32080")]
	private static double NumberToDouble(ref NumberBuffer number)
	{
		return default(double);
	}

	[Token(Token = "0x6000964")]
	[Address(RVA = "0x1B2E870", Offset = "0x1B2CE70", VA = "0x181B2E870")]
	private static void DoubleToNumber(double value, int precision, ref NumberBuffer number)
	{
	}
}
