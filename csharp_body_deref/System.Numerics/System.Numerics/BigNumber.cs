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
		[Address(RVA = "0x5F81D90", Offset = "0x5F80D90", VA = "0x5F81D90")]
		public static BigNumberBuffer Create()
		{
			return default(BigNumberBuffer);
		}
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x5F81A00", Offset = "0x5F80A00", VA = "0x5F81A00")]
	internal static bool TryValidateParseStyleInteger(NumberStyles style, out ArgumentException e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x5F81B50", Offset = "0x5F80B50", VA = "0x5F81B50")]
	internal static bool TryParseBigInteger(ReadOnlySpan<char> value, NumberStyles style, NumberFormatInfo info, out BigInteger result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x5F77B60", Offset = "0x5F76B60", VA = "0x5F77B60")]
	internal static BigInteger ParseBigInteger(string value, NumberStyles style, NumberFormatInfo info)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x5F82440", Offset = "0x5F81440", VA = "0x5F82440")]
	internal static BigInteger ParseBigInteger(ReadOnlySpan<char> value, NumberStyles style, NumberFormatInfo info)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x5F81EE0", Offset = "0x5F80EE0", VA = "0x5F81EE0")]
	private static bool HexNumberToBigInteger(ref BigNumberBuffer number, ref BigInteger value)
	{
		return default(bool);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x5F820B0", Offset = "0x5F810B0", VA = "0x5F820B0")]
	private static bool NumberToBigInteger(ref BigNumberBuffer number, ref BigInteger value)
	{
		return default(bool);
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x5F82590", Offset = "0x5F81590", VA = "0x5F82590")]
	internal static char ParseFormatSpecifier(ReadOnlySpan<char> format, out int digits)
	{
		return default(char);
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x5F82650", Offset = "0x5F81650", VA = "0x5F82650")]
	private static string FormatBigIntegerToHex(bool targetSpan, BigInteger value, char format, int digits, NumberFormatInfo info, Span<char> destination, out int charsWritten, out bool spanSuccess)
	{
		return null;
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x5F79AF0", Offset = "0x5F78AF0", VA = "0x5F79AF0")]
	internal static string FormatBigInteger(BigInteger value, string format, NumberFormatInfo info)
	{
		return null;
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x5F831C0", Offset = "0x5F821C0", VA = "0x5F831C0")]
	private static string FormatBigInteger(bool targetSpan, BigInteger value, string formatString, ReadOnlySpan<char> formatSpan, NumberFormatInfo info, Span<char> destination, out int charsWritten, out bool spanSuccess)
	{
		return null;
	}
}
