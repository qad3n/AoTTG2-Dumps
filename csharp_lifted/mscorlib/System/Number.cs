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

		[Token(Token = "0x400037D")]
		[FieldOffset(Offset = "0x0")]
		public int precision;

		[Token(Token = "0x400037E")]
		[FieldOffset(Offset = "0x4")]
		public int scale;

		[Token(Token = "0x400037F")]
		[FieldOffset(Offset = "0x8")]
		private int _sign;

		[Token(Token = "0x4000380")]
		[FieldOffset(Offset = "0xC")]
		private DigitsAndNullTerminator _digits;

		[Token(Token = "0x4000381")]
		[FieldOffset(Offset = "0x72")]
		private unsafe char* _allDigits;

		[Token(Token = "0x1700009B")]
		public bool sign
		{
			[Token(Token = "0x6000941")]
			[Address(RVA = "0x54CC230", Offset = "0x54CB230", VA = "0x54CC230")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6000942")]
			[Address(RVA = "0x54CC240", Offset = "0x54CB240", VA = "0x54CC240")]
			set
			{
			}
		}

		[Token(Token = "0x1700009C")]
		public unsafe char* digits
		{
			[Token(Token = "0x6000943")]
			[Address(RVA = "0x54CC250", Offset = "0x54CB250", VA = "0x54CC250")]
			get
			{
				//IL_0002: Expected I, but got O
				return (char*)unchecked((nint)null);
			}
		}
	}

	[Token(Token = "0x4000373")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] s_posCurrencyFormats;

	[Token(Token = "0x4000374")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] s_negCurrencyFormats;

	[Token(Token = "0x4000375")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string[] s_posPercentFormats;

	[Token(Token = "0x4000376")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string[] s_negPercentFormats;

	[Token(Token = "0x4000377")]
	[FieldOffset(Offset = "0x20")]
	private static readonly string[] s_negNumberFormats;

	[Token(Token = "0x4000378")]
	[FieldOffset(Offset = "0x28")]
	private static readonly int[] s_charToHexLookup;

	[Token(Token = "0x4000379")]
	[FieldOffset(Offset = "0x30")]
	private static readonly ulong[] s_rgval64Power10;

	[Token(Token = "0x400037A")]
	[FieldOffset(Offset = "0x38")]
	private static readonly sbyte[] s_rgexp64Power10;

	[Token(Token = "0x400037B")]
	[FieldOffset(Offset = "0x40")]
	private static readonly ulong[] s_rgval64Power10By16;

	[Token(Token = "0x400037C")]
	[FieldOffset(Offset = "0x48")]
	private static readonly short[] s_rgexp64Power10By16;

	[Token(Token = "0x60008E5")]
	[Address(RVA = "0x54BCD40", Offset = "0x54BBD40", VA = "0x54BCD40")]
	public static string FormatDecimal(decimal value, ReadOnlySpan<char> format, NumberFormatInfo info)
	{
		return null;
	}

	[Token(Token = "0x60008E6")]
	[Address(RVA = "0x54BEC30", Offset = "0x54BDC30", VA = "0x54BEC30")]
	public static bool TryFormatDecimal(decimal value, ReadOnlySpan<char> format, NumberFormatInfo info, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008E7")]
	[Address(RVA = "0x54BCFE0", Offset = "0x54BBFE0", VA = "0x54BCFE0")]
	private static void DecimalToNumber(decimal value, ref NumberBuffer number)
	{
	}

	[Token(Token = "0x60008E8")]
	[Address(RVA = "0x54BEE30", Offset = "0x54BDE30", VA = "0x54BEE30")]
	public static string FormatDouble(double value, string format, NumberFormatInfo info)
	{
		return null;
	}

	[Token(Token = "0x60008E9")]
	[Address(RVA = "0x54BF2B0", Offset = "0x54BE2B0", VA = "0x54BF2B0")]
	public static bool TryFormatDouble(double value, ReadOnlySpan<char> format, NumberFormatInfo info, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008EA")]
	[Address(RVA = "0x54BEF50", Offset = "0x54BDF50", VA = "0x54BEF50")]
	private static string FormatDouble(ref System.Text.ValueStringBuilder sb, double value, ReadOnlySpan<char> format, NumberFormatInfo info)
	{
		return null;
	}

	[Token(Token = "0x60008EB")]
	[Address(RVA = "0x54C0050", Offset = "0x54BF050", VA = "0x54C0050")]
	public static string FormatSingle(float value, string format, NumberFormatInfo info)
	{
		return null;
	}

	[Token(Token = "0x60008EC")]
	[Address(RVA = "0x54C04B0", Offset = "0x54BF4B0", VA = "0x54C04B0")]
	public static bool TryFormatSingle(float value, ReadOnlySpan<char> format, NumberFormatInfo info, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008ED")]
	[Address(RVA = "0x54C0170", Offset = "0x54BF170", VA = "0x54C0170")]
	private static string FormatSingle(ref System.Text.ValueStringBuilder sb, float value, ReadOnlySpan<char> format, NumberFormatInfo info)
	{
		return null;
	}

	[Token(Token = "0x60008EE")]
	[Address(RVA = "0x54BF460", Offset = "0x54BE460", VA = "0x54BF460")]
	private static bool TryCopyTo(string source, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008EF")]
	[Address(RVA = "0x54B55F0", Offset = "0x54B45F0", VA = "0x54B55F0")]
	public static string FormatInt32(int value, ReadOnlySpan<char> format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60008F0")]
	[Address(RVA = "0x54B6090", Offset = "0x54B5090", VA = "0x54B6090")]
	public static bool TryFormatInt32(int value, ReadOnlySpan<char> format, IFormatProvider provider, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F1")]
	[Address(RVA = "0x54B5A80", Offset = "0x54B4A80", VA = "0x54B5A80")]
	public static string FormatUInt32(uint value, ReadOnlySpan<char> format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60008F2")]
	[Address(RVA = "0x54B5DE0", Offset = "0x54B4DE0", VA = "0x54B5DE0")]
	public static bool TryFormatUInt32(uint value, ReadOnlySpan<char> format, IFormatProvider provider, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F3")]
	[Address(RVA = "0x54B8430", Offset = "0x54B7430", VA = "0x54B8430")]
	public static string FormatInt64(long value, ReadOnlySpan<char> format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60008F4")]
	[Address(RVA = "0x54B8980", Offset = "0x54B7980", VA = "0x54B8980")]
	public static bool TryFormatInt64(long value, ReadOnlySpan<char> format, IFormatProvider provider, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F5")]
	[Address(RVA = "0x54C2650", Offset = "0x54C1650", VA = "0x54C2650")]
	public static string FormatUInt64(ulong value, ReadOnlySpan<char> format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60008F6")]
	[Address(RVA = "0x54C2AC0", Offset = "0x54C1AC0", VA = "0x54C2AC0")]
	public static bool TryFormatUInt64(ulong value, ReadOnlySpan<char> format, IFormatProvider provider, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F7")]
	[Address(RVA = "0x54C2D70", Offset = "0x54C1D70", VA = "0x54C2D70")]
	private static void Int32ToNumber(int value, ref NumberBuffer number)
	{
	}

	[Token(Token = "0x60008F8")]
	[Address(RVA = "0x54C0810", Offset = "0x54BF810", VA = "0x54C0810")]
	private static string NegativeInt32ToDecStr(int value, int digits, string sNegative)
	{
		return null;
	}

	[Token(Token = "0x60008F9")]
	[Address(RVA = "0x54C0D70", Offset = "0x54BFD70", VA = "0x54C0D70")]
	private static bool TryNegativeInt32ToDecStr(int value, int digits, string sNegative, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008FA")]
	[Address(RVA = "0x54C0A10", Offset = "0x54BFA10", VA = "0x54C0A10")]
	private static string Int32ToHexStr(int value, char hexBase, int digits)
	{
		return null;
	}

	[Token(Token = "0x60008FB")]
	[Address(RVA = "0x54C0FB0", Offset = "0x54BFFB0", VA = "0x54C0FB0")]
	private static bool TryInt32ToHexStr(int value, char hexBase, int digits, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60008FC")]
	[Address(RVA = "0x54C2EE0", Offset = "0x54C1EE0", VA = "0x54C2EE0")]
	private unsafe static char* Int32ToHexChars(char* buffer, uint value, int hexBase, int digits)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008FD")]
	[Address(RVA = "0x54C2F40", Offset = "0x54C1F40", VA = "0x54C2F40")]
	private static void UInt32ToNumber(uint value, ref NumberBuffer number)
	{
	}

	[Token(Token = "0x60008FE")]
	[Address(RVA = "0x54BEDE0", Offset = "0x54BDDE0", VA = "0x54BEDE0")]
	internal unsafe static char* UInt32ToDecChars(char* bufferEnd, uint value, int digits)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60008FF")]
	[Address(RVA = "0x54C0660", Offset = "0x54BF660", VA = "0x54C0660")]
	private static string UInt32ToDecStr(uint value, int digits)
	{
		return null;
	}

	[Token(Token = "0x6000900")]
	[Address(RVA = "0x54C0B60", Offset = "0x54BFB60", VA = "0x54C0B60")]
	private static bool TryUInt32ToDecStr(uint value, int digits, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6000901")]
	[Address(RVA = "0x54C1A50", Offset = "0x54C0A50", VA = "0x54C1A50")]
	private static void Int64ToNumber(long input, ref NumberBuffer number)
	{
	}

	[Token(Token = "0x6000902")]
	[Address(RVA = "0x54C1470", Offset = "0x54C0470", VA = "0x54C1470")]
	private static string NegativeInt64ToDecStr(long input, int digits, string sNegative)
	{
		return null;
	}

	[Token(Token = "0x6000903")]
	[Address(RVA = "0x54C1FF0", Offset = "0x54C0FF0", VA = "0x54C1FF0")]
	private static bool TryNegativeInt64ToDecStr(long input, int digits, string sNegative, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6000904")]
	[Address(RVA = "0x54C17F0", Offset = "0x54C07F0", VA = "0x54C17F0")]
	private static string Int64ToHexStr(long value, char hexBase, int digits)
	{
		return null;
	}

	[Token(Token = "0x6000905")]
	[Address(RVA = "0x54C23A0", Offset = "0x54C13A0", VA = "0x54C23A0")]
	private static bool TryInt64ToHexStr(long value, char hexBase, int digits, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6000906")]
	[Address(RVA = "0x54C28B0", Offset = "0x54C18B0", VA = "0x54C28B0")]
	private static void UInt64ToNumber(ulong value, ref NumberBuffer number)
	{
	}

	[Token(Token = "0x6000907")]
	[Address(RVA = "0x54C1140", Offset = "0x54C0140", VA = "0x54C1140")]
	private static string UInt64ToDecStr(ulong value, int digits)
	{
		return null;
	}

	[Token(Token = "0x6000908")]
	[Address(RVA = "0x54C1C80", Offset = "0x54C0C80", VA = "0x54C1C80")]
	private static bool TryUInt64ToDecStr(ulong value, int digits, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6000909")]
	[Address(RVA = "0x54BCEE0", Offset = "0x54BBEE0", VA = "0x54BCEE0")]
	internal static char ParseFormatSpecifier(ReadOnlySpan<char> format, out int digits)
	{
		return default(char);
	}

	[Token(Token = "0x600090A")]
	[Address(RVA = "0x54BD260", Offset = "0x54BC260", VA = "0x54BD260")]
	internal static void NumberToString(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, char format, int nMaxDigits, NumberFormatInfo info, bool isDecimal)
	{
	}

	[Token(Token = "0x600090B")]
	[Address(RVA = "0x54BD860", Offset = "0x54BC860", VA = "0x54BD860")]
	internal static void NumberToStringFormat(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, ReadOnlySpan<char> format, NumberFormatInfo info)
	{
	}

	[Token(Token = "0x600090C")]
	[Address(RVA = "0x54C31D0", Offset = "0x54C21D0", VA = "0x54C31D0")]
	private static void FormatCurrency(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info)
	{
	}

	[Token(Token = "0x600090D")]
	[Address(RVA = "0x54C34E0", Offset = "0x54C24E0", VA = "0x54C34E0")]
	private static void FormatFixed(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info, int[] groupDigits, string sDecimal, string sGroup)
	{
	}

	[Token(Token = "0x600090E")]
	[Address(RVA = "0x54C3B90", Offset = "0x54C2B90", VA = "0x54C3B90")]
	private static void FormatNumber(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info)
	{
	}

	[Token(Token = "0x600090F")]
	[Address(RVA = "0x54C3E00", Offset = "0x54C2E00", VA = "0x54C3E00")]
	private static void FormatScientific(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info, char expChar)
	{
	}

	[Token(Token = "0x6000910")]
	[Address(RVA = "0x54C48C0", Offset = "0x54C38C0", VA = "0x54C48C0")]
	private static void FormatExponent(ref System.Text.ValueStringBuilder sb, NumberFormatInfo info, int value, char expChar, int minDigits, bool positiveSign)
	{
	}

	[Token(Token = "0x6000911")]
	[Address(RVA = "0x54C4070", Offset = "0x54C3070", VA = "0x54C4070")]
	private static void FormatGeneral(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info, char expChar, bool bSuppressScientific)
	{
	}

	[Token(Token = "0x6000912")]
	[Address(RVA = "0x54C4480", Offset = "0x54C3480", VA = "0x54C4480")]
	private static void FormatPercent(ref System.Text.ValueStringBuilder sb, ref NumberBuffer number, int nMinDigits, int nMaxDigits, NumberFormatInfo info)
	{
	}

	[Token(Token = "0x6000913")]
	[Address(RVA = "0x54C30F0", Offset = "0x54C20F0", VA = "0x54C30F0")]
	private static void RoundNumber(ref NumberBuffer number, int pos)
	{
	}

	[Token(Token = "0x6000914")]
	[Address(RVA = "0x54C47A0", Offset = "0x54C37A0", VA = "0x54C47A0")]
	private static int FindSection(ReadOnlySpan<char> format, int section)
	{
		return default(int);
	}

	[Token(Token = "0x6000915")]
	[Address(RVA = "0x54C30E0", Offset = "0x54C20E0", VA = "0x54C30E0")]
	private static uint Low32(ulong value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000916")]
	[Address(RVA = "0x54C30D0", Offset = "0x54C20D0", VA = "0x54C30D0")]
	private static uint High32(ulong value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000917")]
	[Address(RVA = "0x54C30A0", Offset = "0x54C20A0", VA = "0x54C30A0")]
	private static uint Int64DivMod1E9(ref ulong value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000918")]
	[Address(RVA = "0x54C4B80", Offset = "0x54C3B80", VA = "0x54C4B80")]
	private static bool NumberToInt32(ref NumberBuffer number, ref int value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000919")]
	[Address(RVA = "0x54C4C10", Offset = "0x54C3C10", VA = "0x54C4C10")]
	private static bool NumberToInt64(ref NumberBuffer number, ref long value)
	{
		return default(bool);
	}

	[Token(Token = "0x600091A")]
	[Address(RVA = "0x54C4CA0", Offset = "0x54C3CA0", VA = "0x54C4CA0")]
	private static bool NumberToUInt32(ref NumberBuffer number, ref uint value)
	{
		return default(bool);
	}

	[Token(Token = "0x600091B")]
	[Address(RVA = "0x54C4D30", Offset = "0x54C3D30", VA = "0x54C4D30")]
	private static bool NumberToUInt64(ref NumberBuffer number, ref ulong value)
	{
		return default(bool);
	}

	[Token(Token = "0x600091C")]
	[Address(RVA = "0x54B6630", Offset = "0x54B5630", VA = "0x54B6630")]
	internal static int ParseInt32(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info)
	{
		return default(int);
	}

	[Token(Token = "0x600091D")]
	[Address(RVA = "0x54B8D40", Offset = "0x54B7D40", VA = "0x54B8D40")]
	internal static long ParseInt64(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info)
	{
		return default(long);
	}

	[Token(Token = "0x600091E")]
	[Address(RVA = "0x54C70F0", Offset = "0x54C60F0", VA = "0x54C70F0")]
	internal static uint ParseUInt32(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info)
	{
		return default(uint);
	}

	[Token(Token = "0x600091F")]
	[Address(RVA = "0x54C7E30", Offset = "0x54C6E30", VA = "0x54C7E30")]
	internal static ulong ParseUInt64(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000920")]
	[Address(RVA = "0x54C8930", Offset = "0x54C7930", VA = "0x54C8930")]
	private unsafe static bool ParseNumber(ref char* str, char* strEnd, NumberStyles styles, ref NumberBuffer number, NumberFormatInfo info, bool parseDecimal)
	{
		return default(bool);
	}

	[Token(Token = "0x6000921")]
	[Address(RVA = "0x54B6B70", Offset = "0x54B5B70", VA = "0x54B6B70")]
	internal static bool TryParseInt32(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000922")]
	[Address(RVA = "0x54C4DD0", Offset = "0x54C3DD0", VA = "0x54C4DD0")]
	private static bool TryParseInt32IntegerStyle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out int result, ref bool failureIsOverflow)
	{
		return default(bool);
	}

	[Token(Token = "0x6000923")]
	[Address(RVA = "0x54C6110", Offset = "0x54C5110", VA = "0x54C6110")]
	private static bool TryParseInt64IntegerStyle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out long result, ref bool failureIsOverflow)
	{
		return default(bool);
	}

	[Token(Token = "0x6000924")]
	[Address(RVA = "0x54B9180", Offset = "0x54B8180", VA = "0x54B9180")]
	internal static bool TryParseInt64(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out long result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000925")]
	[Address(RVA = "0x54C9A60", Offset = "0x54C8A60", VA = "0x54C9A60")]
	internal static bool TryParseUInt32(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out uint result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000926")]
	[Address(RVA = "0x54C7340", Offset = "0x54C6340", VA = "0x54C7340")]
	private static bool TryParseUInt32IntegerStyle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out uint result, ref bool failureIsOverflow)
	{
		return default(bool);
	}

	[Token(Token = "0x6000927")]
	[Address(RVA = "0x54C5970", Offset = "0x54C4970", VA = "0x54C5970")]
	private static bool TryParseUInt32HexNumberStyle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out uint result, ref bool failureIsOverflow)
	{
		return default(bool);
	}

	[Token(Token = "0x6000928")]
	[Address(RVA = "0x54C9C30", Offset = "0x54C8C30", VA = "0x54C9C30")]
	internal static bool TryParseUInt64(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out ulong result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000929")]
	[Address(RVA = "0x54C8080", Offset = "0x54C7080", VA = "0x54C8080")]
	private static bool TryParseUInt64IntegerStyle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out ulong result, ref bool failureIsOverflow)
	{
		return default(bool);
	}

	[Token(Token = "0x600092A")]
	[Address(RVA = "0x54C6900", Offset = "0x54C5900", VA = "0x54C6900")]
	private static bool TryParseUInt64HexNumberStyle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out ulong result, ref bool failureIsOverflow)
	{
		return default(bool);
	}

	[Token(Token = "0x600092B")]
	[Address(RVA = "0x54C9E10", Offset = "0x54C8E10", VA = "0x54C9E10")]
	internal static decimal ParseDecimal(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info)
	{
		return 0m;
	}

	[Token(Token = "0x600092C")]
	[Address(RVA = "0x54C9F60", Offset = "0x54C8F60", VA = "0x54C9F60")]
	private static bool NumberBufferToDecimal(ref NumberBuffer number, ref decimal value)
	{
		return default(bool);
	}

	[Token(Token = "0x600092D")]
	[Address(RVA = "0x54CA270", Offset = "0x54C9270", VA = "0x54CA270")]
	internal static double ParseDouble(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info)
	{
		return default(double);
	}

	[Token(Token = "0x600092E")]
	[Address(RVA = "0x54CA770", Offset = "0x54C9770", VA = "0x54CA770")]
	internal static float ParseSingle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info)
	{
		return default(float);
	}

	[Token(Token = "0x600092F")]
	[Address(RVA = "0x54CAC00", Offset = "0x54C9C00", VA = "0x54CAC00")]
	internal static bool TryParseDecimal(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out decimal result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000930")]
	[Address(RVA = "0x54CACE0", Offset = "0x54C9CE0", VA = "0x54CACE0")]
	internal static bool TryParseDouble(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out double result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000931")]
	[Address(RVA = "0x54CAE40", Offset = "0x54C9E40", VA = "0x54CAE40")]
	internal static bool TryParseSingle(ReadOnlySpan<char> value, NumberStyles styles, NumberFormatInfo info, out float result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000932")]
	[Address(RVA = "0x54C5F60", Offset = "0x54C4F60", VA = "0x54C5F60")]
	private static void StringToNumber(ReadOnlySpan<char> value, NumberStyles styles, ref NumberBuffer number, NumberFormatInfo info, bool parseDecimal)
	{
	}

	[Token(Token = "0x6000933")]
	[Address(RVA = "0x54C9890", Offset = "0x54C8890", VA = "0x54C9890")]
	internal static bool TryStringToNumber(ReadOnlySpan<char> value, NumberStyles styles, ref NumberBuffer number, NumberFormatInfo info, bool parseDecimal)
	{
		return default(bool);
	}

	[Token(Token = "0x6000934")]
	[Address(RVA = "0x54C99F0", Offset = "0x54C89F0", VA = "0x54C99F0")]
	private static bool TrailingZeros(ReadOnlySpan<char> value, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000935")]
	[Address(RVA = "0x54C97F0", Offset = "0x54C87F0", VA = "0x54C97F0")]
	private unsafe static char* MatchChars(char* p, char* pEnd, string value)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x6000936")]
	[Address(RVA = "0x54C97D0", Offset = "0x54C87D0", VA = "0x54C97D0")]
	private static bool IsWhite(int ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000937")]
	[Address(RVA = "0x54C9880", Offset = "0x54C8880", VA = "0x54C9880")]
	private static bool IsDigit(int ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000938")]
	[Address(RVA = "0x54C58E0", Offset = "0x54C48E0", VA = "0x54C58E0")]
	private static void ThrowOverflowOrFormatException(bool overflow, string overflowResourceKey)
	{
	}

	[Token(Token = "0x6000939")]
	[Address(RVA = "0x54CA6F0", Offset = "0x54C96F0", VA = "0x54CA6F0")]
	private static bool NumberBufferToDouble(ref NumberBuffer number, ref double value)
	{
		return default(bool);
	}

	[Token(Token = "0x600093A")]
	[Address(RVA = "0x54CAFC0", Offset = "0x54C9FC0", VA = "0x54CAFC0")]
	private unsafe static uint DigitsToInt(char* p, int count)
	{
		return default(uint);
	}

	[Token(Token = "0x600093B")]
	[Address(RVA = "0x54CB000", Offset = "0x54CA000", VA = "0x54CB000")]
	private static ulong Mul32x32To64(uint a, uint b)
	{
		return default(ulong);
	}

	[Token(Token = "0x600093C")]
	[Address(RVA = "0x54CB010", Offset = "0x54CA010", VA = "0x54CB010")]
	private static ulong Mul64Lossy(ulong a, ulong b, ref int pexp)
	{
		return default(ulong);
	}

	[Token(Token = "0x600093D")]
	[Address(RVA = "0x54CB090", Offset = "0x54CA090", VA = "0x54CB090")]
	private static int abs(int value)
	{
		return default(int);
	}

	[Token(Token = "0x600093E")]
	[Address(RVA = "0x54BF9E0", Offset = "0x54BE9E0", VA = "0x54BF9E0")]
	private static double NumberToDouble(ref NumberBuffer number)
	{
		return default(double);
	}

	[Token(Token = "0x600093F")]
	[Address(RVA = "0x54BF530", Offset = "0x54BE530", VA = "0x54BF530")]
	private static void DoubleToNumber(double value, int precision, ref NumberBuffer number)
	{
	}
}
