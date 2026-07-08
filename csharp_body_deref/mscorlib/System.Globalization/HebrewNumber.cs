using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x20005A5")]
internal class HebrewNumber
{
	[Token(Token = "0x20005A6")]
	private enum HebrewToken : short
	{
		[Token(Token = "0x4001828")]
		Invalid = -1,
		[Token(Token = "0x4001829")]
		Digit400,
		[Token(Token = "0x400182A")]
		Digit200_300,
		[Token(Token = "0x400182B")]
		Digit100,
		[Token(Token = "0x400182C")]
		Digit10,
		[Token(Token = "0x400182D")]
		Digit1,
		[Token(Token = "0x400182E")]
		Digit6_7,
		[Token(Token = "0x400182F")]
		Digit7,
		[Token(Token = "0x4001830")]
		Digit9,
		[Token(Token = "0x4001831")]
		SingleQuote,
		[Token(Token = "0x4001832")]
		DoubleQuote
	}

	[Token(Token = "0x20005A7")]
	private struct HebrewValue
	{
		[Token(Token = "0x4001833")]
		[FieldOffset(Offset = "0x0")]
		internal HebrewToken token;

		[Token(Token = "0x4001834")]
		[FieldOffset(Offset = "0x2")]
		internal short value;

		[Token(Token = "0x6002C20")]
		[Address(RVA = "0x4F649B0", Offset = "0x4F649B0", VA = "0x4F649B0")]
		internal HebrewValue(HebrewToken token, short value)
		{
		}
	}

	[Token(Token = "0x20005A8")]
	internal enum HS : sbyte
	{
		[Token(Token = "0x4001836")]
		_err = -1,
		[Token(Token = "0x4001837")]
		Start = 0,
		[Token(Token = "0x4001838")]
		S400 = 1,
		[Token(Token = "0x4001839")]
		S400_400 = 2,
		[Token(Token = "0x400183A")]
		S400_X00 = 3,
		[Token(Token = "0x400183B")]
		S400_X0 = 4,
		[Token(Token = "0x400183C")]
		X00_DQ = 5,
		[Token(Token = "0x400183D")]
		S400_X00_X0 = 6,
		[Token(Token = "0x400183E")]
		X0_DQ = 7,
		[Token(Token = "0x400183F")]
		X = 8,
		[Token(Token = "0x4001840")]
		X0 = 9,
		[Token(Token = "0x4001841")]
		X00 = 10,
		[Token(Token = "0x4001842")]
		S400_DQ = 11,
		[Token(Token = "0x4001843")]
		S400_400_DQ = 12,
		[Token(Token = "0x4001844")]
		S400_400_100 = 13,
		[Token(Token = "0x4001845")]
		S9 = 14,
		[Token(Token = "0x4001846")]
		X00_S9 = 15,
		[Token(Token = "0x4001847")]
		S9_DQ = 16,
		[Token(Token = "0x4001848")]
		END = 100
	}

	[Token(Token = "0x4001824")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HebrewValue[] s_hebrewValues;

	[Token(Token = "0x4001825")]
	[FieldOffset(Offset = "0x8")]
	private static char s_maxHebrewNumberCh;

	[Token(Token = "0x4001826")]
	[FieldOffset(Offset = "0x10")]
	private static readonly HS[] s_numberPasingState;

	[Token(Token = "0x6002C1C")]
	[Address(RVA = "0x4F644F0", Offset = "0x4F644F0", VA = "0x4F644F0")]
	internal static string ToString(int Number)
	{
		return null;
	}

	[Token(Token = "0x6002C1D")]
	[Address(RVA = "0x4F62610", Offset = "0x4F62610", VA = "0x4F62610")]
	internal static System.Globalization.HebrewNumberParsingState ParseByChar(char ch, ref System.Globalization.HebrewNumberParsingContext context)
	{
		return default(System.Globalization.HebrewNumberParsingState);
	}

	[Token(Token = "0x6002C1E")]
	[Address(RVA = "0x4F62540", Offset = "0x4F62540", VA = "0x4F62540")]
	internal static bool IsDigit(char ch)
	{
		return default(bool);
	}
}
