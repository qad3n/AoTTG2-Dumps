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

[Token(Token = "0x20000AC")]
internal sealed class RegexBoyerMoore
{
	[Token(Token = "0x40002B8")]
	[FieldOffset(Offset = "0x10")]
	public readonly int[] Positive;

	[Token(Token = "0x40002B9")]
	[FieldOffset(Offset = "0x18")]
	public readonly int[] NegativeASCII;

	[Token(Token = "0x40002BA")]
	[FieldOffset(Offset = "0x20")]
	public readonly int[][] NegativeUnicode;

	[Token(Token = "0x40002BB")]
	[FieldOffset(Offset = "0x28")]
	public readonly string Pattern;

	[Token(Token = "0x40002BC")]
	[FieldOffset(Offset = "0x30")]
	public readonly int LowASCII;

	[Token(Token = "0x40002BD")]
	[FieldOffset(Offset = "0x34")]
	public readonly int HighASCII;

	[Token(Token = "0x40002BE")]
	[FieldOffset(Offset = "0x38")]
	public readonly bool RightToLeft;

	[Token(Token = "0x40002BF")]
	[FieldOffset(Offset = "0x39")]
	public readonly bool CaseInsensitive;

	[Token(Token = "0x40002C0")]
	[FieldOffset(Offset = "0x40")]
	private readonly CultureInfo _culture;

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x4907BA0", Offset = "0x4907BA0", VA = "0x4907BA0")]
	public RegexBoyerMoore(string pattern, bool caseInsensitive, bool rightToLeft, CultureInfo culture)
	{
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x49081B0", Offset = "0x49081B0", VA = "0x49081B0")]
	private bool MatchPattern(string text, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x49082E0", Offset = "0x49082E0", VA = "0x49082E0")]
	public bool IsMatch(string text, int index, int beglimit, int endlimit)
	{
		return default(bool);
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x4908330", Offset = "0x4908330", VA = "0x4908330")]
	public int Scan(string text, int index, int beglimit, int endlimit)
	{
		return default(int);
	}
}
