// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.HebrewNumber
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x2000579")]
internal class HebrewNumber
{
	[Token(Token = "0x200057A")]
	private enum HebrewToken : short
	{
		[Token(Token = "0x4001679")]
		Invalid = -1,
		[Token(Token = "0x400167A")]
		Digit400,
		[Token(Token = "0x400167B")]
		Digit200_300,
		[Token(Token = "0x400167C")]
		Digit100,
		[Token(Token = "0x400167D")]
		Digit10,
		[Token(Token = "0x400167E")]
		Digit1,
		[Token(Token = "0x400167F")]
		Digit6_7,
		[Token(Token = "0x4001680")]
		Digit7,
		[Token(Token = "0x4001681")]
		Digit9,
		[Token(Token = "0x4001682")]
		SingleQuote,
		[Token(Token = "0x4001683")]
		DoubleQuote
	}

	[Token(Token = "0x200057B")]
	private struct HebrewValue
	{
		[Token(Token = "0x4001684")]
		[FieldOffset(Offset = "0x0")]
		internal HebrewToken token;

		[Token(Token = "0x4001685")]
		[FieldOffset(Offset = "0x2")]
		internal short value;

		[Token(Token = "0x600293E")]
		[Address(RVA = "0x1A6A860", Offset = "0x1A68E60", VA = "0x181A6A860")]
		internal HebrewValue(HebrewToken token, short value)
		{
		}
	}

	[Token(Token = "0x200057C")]
	internal enum HS : sbyte
	{
		[Token(Token = "0x4001687")]
		_err = -1,
		[Token(Token = "0x4001688")]
		Start = 0,
		[Token(Token = "0x4001689")]
		S400 = 1,
		[Token(Token = "0x400168A")]
		S400_400 = 2,
		[Token(Token = "0x400168B")]
		S400_X00 = 3,
		[Token(Token = "0x400168C")]
		S400_X0 = 4,
		[Token(Token = "0x400168D")]
		X00_DQ = 5,
		[Token(Token = "0x400168E")]
		S400_X00_X0 = 6,
		[Token(Token = "0x400168F")]
		X0_DQ = 7,
		[Token(Token = "0x4001690")]
		X = 8,
		[Token(Token = "0x4001691")]
		X0 = 9,
		[Token(Token = "0x4001692")]
		X00 = 10,
		[Token(Token = "0x4001693")]
		S400_DQ = 11,
		[Token(Token = "0x4001694")]
		S400_400_DQ = 12,
		[Token(Token = "0x4001695")]
		S400_400_100 = 13,
		[Token(Token = "0x4001696")]
		S9 = 14,
		[Token(Token = "0x4001697")]
		X00_S9 = 15,
		[Token(Token = "0x4001698")]
		S9_DQ = 16,
		[Token(Token = "0x4001699")]
		END = 100
	}

	[Token(Token = "0x4001675")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HebrewValue[] s_hebrewValues;

	[Token(Token = "0x4001676")]
	[FieldOffset(Offset = "0x8")]
	private static char s_maxHebrewNumberCh;

	[Token(Token = "0x4001677")]
	[FieldOffset(Offset = "0x10")]
	private static readonly HS[] s_numberPasingState;

	[Token(Token = "0x600293A")]
	[Address(RVA = "0x1A6A1E0", Offset = "0x1A687E0", VA = "0x181A6A1E0")]
	internal static string ToString(int Number)
	{
		return null;
	}

	[Token(Token = "0x600293B")]
	[Address(RVA = "0x1A6A030", Offset = "0x1A68630", VA = "0x181A6A030")]
	internal static System.Globalization.HebrewNumberParsingState ParseByChar(char ch, ref System.Globalization.HebrewNumberParsingContext context)
	{
		return default(System.Globalization.HebrewNumberParsingState);
	}

	[Token(Token = "0x600293C")]
	[Address(RVA = "0x1A69F70", Offset = "0x1A68570", VA = "0x181A69F70")]
	internal static bool IsDigit(char ch)
	{
		return default(bool);
	}
}
