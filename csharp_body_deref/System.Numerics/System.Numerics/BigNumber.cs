// ==================== AoTTG2 cross-reference ====================
// Type: System.Numerics.BigNumber
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using System.Text;
using Il2CppDummyDll;

namespace System.Numerics;

[Token(Token = "0x2000008")]
internal static class BigNumber
{
	[Token(Token = "0x2000009")]
	private struct BigNumberBuffer
	{
		[Token(Token = "0x4000017")]
		[FieldOffset(Offset = "0x0")]
		public StringBuilder digits;

		[Token(Token = "0x4000018")]
		[FieldOffset(Offset = "0x8")]
		public int precision;

		[Token(Token = "0x4000019")]
		[FieldOffset(Offset = "0xC")]
		public int scale;

		[Token(Token = "0x400001A")]
		[FieldOffset(Offset = "0x10")]
		public bool sign;

		[Token(Token = "0x6000091")]
		[Address(RVA = "0x466F5C0", Offset = "0x466F5C0", VA = "0x466F5C0")]
		public static BigNumberBuffer Create()
		{
			return default(BigNumberBuffer);
		}
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x466F210", Offset = "0x466F210", VA = "0x466F210")]
	internal static bool TryValidateParseStyleInteger(NumberStyles style, out ArgumentException e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x466F370", Offset = "0x466F370", VA = "0x466F370")]
	internal static bool TryParseBigInteger(ReadOnlySpan<char> value, NumberStyles style, NumberFormatInfo info, out BigInteger result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x4666000", Offset = "0x4666000", VA = "0x4666000")]
	internal static BigInteger ParseBigInteger(string value, NumberStyles style, NumberFormatInfo info)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x466FC70", Offset = "0x466FC70", VA = "0x466FC70")]
	internal static BigInteger ParseBigInteger(ReadOnlySpan<char> value, NumberStyles style, NumberFormatInfo info)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x466F710", Offset = "0x466F710", VA = "0x466F710")]
	private static bool HexNumberToBigInteger(ref BigNumberBuffer number, ref BigInteger value)
	{
		return default(bool);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x466F8E0", Offset = "0x466F8E0", VA = "0x466F8E0")]
	private static bool NumberToBigInteger(ref BigNumberBuffer number, ref BigInteger value)
	{
		return default(bool);
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x466FDC0", Offset = "0x466FDC0", VA = "0x466FDC0")]
	internal static char ParseFormatSpecifier(ReadOnlySpan<char> format, out int digits)
	{
		return default(char);
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x466FE90", Offset = "0x466FE90", VA = "0x466FE90")]
	private static string FormatBigIntegerToHex(bool targetSpan, BigInteger value, char format, int digits, NumberFormatInfo info, Span<char> destination, out int charsWritten, out bool spanSuccess)
	{
		return null;
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x4667A80", Offset = "0x4667A80", VA = "0x4667A80")]
	internal static string FormatBigInteger(BigInteger value, string format, NumberFormatInfo info)
	{
		return null;
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x4670A50", Offset = "0x4670A50", VA = "0x4670A50")]
	private static string FormatBigInteger(bool targetSpan, BigInteger value, string formatString, ReadOnlySpan<char> formatSpan, NumberFormatInfo info, Span<char> destination, out int charsWritten, out bool spanSuccess)
	{
		return null;
	}
}
