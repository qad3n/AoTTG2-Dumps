// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.RegexBoyerMoore
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x20000EC")]
internal sealed class RegexBoyerMoore
{
	[Token(Token = "0x400038A")]
	[FieldOffset(Offset = "0x10")]
	public readonly int[] Positive;

	[Token(Token = "0x400038B")]
	[FieldOffset(Offset = "0x18")]
	public readonly int[] NegativeASCII;

	[Token(Token = "0x400038C")]
	[FieldOffset(Offset = "0x20")]
	public readonly int[][] NegativeUnicode;

	[Token(Token = "0x400038D")]
	[FieldOffset(Offset = "0x28")]
	public readonly string Pattern;

	[Token(Token = "0x400038E")]
	[FieldOffset(Offset = "0x30")]
	public readonly int LowASCII;

	[Token(Token = "0x400038F")]
	[FieldOffset(Offset = "0x34")]
	public readonly int HighASCII;

	[Token(Token = "0x4000390")]
	[FieldOffset(Offset = "0x38")]
	public readonly bool RightToLeft;

	[Token(Token = "0x4000391")]
	[FieldOffset(Offset = "0x39")]
	public readonly bool CaseInsensitive;

	[Token(Token = "0x4000392")]
	[FieldOffset(Offset = "0x40")]
	private readonly CultureInfo _culture;

	[Token(Token = "0x6000534")]
	[Address(RVA = "0x284E680", Offset = "0x284CC80", VA = "0x18284E680")]
	public RegexBoyerMoore(string pattern, bool caseInsensitive, bool rightToLeft, CultureInfo culture)
	{
	}

	[Token(Token = "0x6000535")]
	[Address(RVA = "0x284E260", Offset = "0x284C860", VA = "0x18284E260")]
	private bool MatchPattern(string text, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000536")]
	[Address(RVA = "0x284E1F0", Offset = "0x284C7F0", VA = "0x18284E1F0")]
	public bool IsMatch(string text, int index, int beglimit, int endlimit)
	{
		return default(bool);
	}

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x284E390", Offset = "0x284C990", VA = "0x18284E390")]
	public int Scan(string text, int index, int beglimit, int endlimit)
	{
		return default(int);
	}
}
