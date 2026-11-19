// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.HebrewNumber
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x2000552")]
internal class HebrewNumber
{
	[Token(Token = "0x2000553")]
	private enum HebrewToken : short
	{
		[Token(Token = "0x40015D9")]
		Invalid = -1,
		[Token(Token = "0x40015DA")]
		Digit400,
		[Token(Token = "0x40015DB")]
		Digit200_300,
		[Token(Token = "0x40015DC")]
		Digit100,
		[Token(Token = "0x40015DD")]
		Digit10,
		[Token(Token = "0x40015DE")]
		Digit1,
		[Token(Token = "0x40015DF")]
		Digit6_7,
		[Token(Token = "0x40015E0")]
		Digit7,
		[Token(Token = "0x40015E1")]
		Digit9,
		[Token(Token = "0x40015E2")]
		SingleQuote,
		[Token(Token = "0x40015E3")]
		DoubleQuote
	}

	[Token(Token = "0x2000554")]
	private struct HebrewValue
	{
		[Token(Token = "0x40015E4")]
		[FieldOffset(Offset = "0x0")]
		internal HebrewToken token;

		[Token(Token = "0x40015E5")]
		[FieldOffset(Offset = "0x2")]
		internal short value;

		[Token(Token = "0x600290C")]
		[Address(RVA = "0x53FFB20", Offset = "0x53FEB20", VA = "0x53FFB20")]
		internal HebrewValue(HebrewToken token, short value)
		{
		}
	}

	[Token(Token = "0x2000555")]
	internal enum HS : sbyte
	{
		[Token(Token = "0x40015E7")]
		_err = -1,
		[Token(Token = "0x40015E8")]
		Start = 0,
		[Token(Token = "0x40015E9")]
		S400 = 1,
		[Token(Token = "0x40015EA")]
		S400_400 = 2,
		[Token(Token = "0x40015EB")]
		S400_X00 = 3,
		[Token(Token = "0x40015EC")]
		S400_X0 = 4,
		[Token(Token = "0x40015ED")]
		X00_DQ = 5,
		[Token(Token = "0x40015EE")]
		S400_X00_X0 = 6,
		[Token(Token = "0x40015EF")]
		X0_DQ = 7,
		[Token(Token = "0x40015F0")]
		X = 8,
		[Token(Token = "0x40015F1")]
		X0 = 9,
		[Token(Token = "0x40015F2")]
		X00 = 10,
		[Token(Token = "0x40015F3")]
		S400_DQ = 11,
		[Token(Token = "0x40015F4")]
		S400_400_DQ = 12,
		[Token(Token = "0x40015F5")]
		S400_400_100 = 13,
		[Token(Token = "0x40015F6")]
		S9 = 14,
		[Token(Token = "0x40015F7")]
		X00_S9 = 15,
		[Token(Token = "0x40015F8")]
		S9_DQ = 16,
		[Token(Token = "0x40015F9")]
		END = 100
	}

	[Token(Token = "0x40015D5")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HebrewValue[] s_hebrewValues;

	[Token(Token = "0x40015D6")]
	[FieldOffset(Offset = "0x8")]
	private static char s_maxHebrewNumberCh;

	[Token(Token = "0x40015D7")]
	[FieldOffset(Offset = "0x10")]
	private static readonly HS[] s_numberPasingState;

	[Token(Token = "0x6002908")]
	[Address(RVA = "0x53FF630", Offset = "0x53FE630", VA = "0x53FF630")]
	internal static string ToString(int Number)
	{
		return null;
	}

	[Token(Token = "0x6002909")]
	[Address(RVA = "0x53FD8B0", Offset = "0x53FC8B0", VA = "0x53FD8B0")]
	internal static System.Globalization.HebrewNumberParsingState ParseByChar(char ch, ref System.Globalization.HebrewNumberParsingContext context)
	{
		return default(System.Globalization.HebrewNumberParsingState);
	}

	[Token(Token = "0x600290A")]
	[Address(RVA = "0x53FD7E0", Offset = "0x53FC7E0", VA = "0x53FD7E0")]
	internal static bool IsDigit(char ch)
	{
		return default(bool);
	}
}
