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
		[Address(RVA = "0x4331E60", Offset = "0x4331E60", VA = "0x4331E60")]
		public static BigNumberBuffer Create()
		{
			return default(BigNumberBuffer);
		}
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x4331AB0", Offset = "0x4331AB0", VA = "0x4331AB0")]
	internal static bool TryValidateParseStyleInteger(NumberStyles style, out ArgumentException e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x4331C10", Offset = "0x4331C10", VA = "0x4331C10")]
	internal static bool TryParseBigInteger(ReadOnlySpan<char> value, NumberStyles style, NumberFormatInfo info, out BigInteger result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x43288A0", Offset = "0x43288A0", VA = "0x43288A0")]
	internal static BigInteger ParseBigInteger(string value, NumberStyles style, NumberFormatInfo info)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x4332510", Offset = "0x4332510", VA = "0x4332510")]
	internal static BigInteger ParseBigInteger(ReadOnlySpan<char> value, NumberStyles style, NumberFormatInfo info)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x4331FB0", Offset = "0x4331FB0", VA = "0x4331FB0")]
	private static bool HexNumberToBigInteger(ref BigNumberBuffer number, ref BigInteger value)
	{
		return default(bool);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x4332180", Offset = "0x4332180", VA = "0x4332180")]
	private static bool NumberToBigInteger(ref BigNumberBuffer number, ref BigInteger value)
	{
		return default(bool);
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x4332660", Offset = "0x4332660", VA = "0x4332660")]
	internal static char ParseFormatSpecifier(ReadOnlySpan<char> format, out int digits)
	{
		return default(char);
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x4332730", Offset = "0x4332730", VA = "0x4332730")]
	private static string FormatBigIntegerToHex(bool targetSpan, BigInteger value, char format, int digits, NumberFormatInfo info, Span<char> destination, out int charsWritten, out bool spanSuccess)
	{
		return null;
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x432A320", Offset = "0x432A320", VA = "0x432A320")]
	internal static string FormatBigInteger(BigInteger value, string format, NumberFormatInfo info)
	{
		return null;
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x43332F0", Offset = "0x43332F0", VA = "0x43332F0")]
	private static string FormatBigInteger(bool targetSpan, BigInteger value, string formatString, ReadOnlySpan<char> formatSpan, NumberFormatInfo info, Span<char> destination, out int charsWritten, out bool spanSuccess)
	{
		return null;
	}
}
