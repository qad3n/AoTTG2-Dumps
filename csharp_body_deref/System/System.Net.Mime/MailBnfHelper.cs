// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Mime.MailBnfHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.Mime;

[Token(Token = "0x2000397")]
internal static class MailBnfHelper
{
	[Token(Token = "0x4000FAA")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly bool[] Atext;

	[Token(Token = "0x4000FAB")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly bool[] Qtext;

	[Token(Token = "0x4000FAC")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly bool[] Dtext;

	[Token(Token = "0x4000FAD")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly bool[] Ftext;

	[Token(Token = "0x4000FAE")]
	[FieldOffset(Offset = "0x20")]
	internal static readonly bool[] Ttext;

	[Token(Token = "0x4000FAF")]
	[FieldOffset(Offset = "0x28")]
	internal static readonly bool[] Ctext;

	[Token(Token = "0x4000FB0")]
	[FieldOffset(Offset = "0x30")]
	internal static readonly int Ascii7bitMaxValue;

	[Token(Token = "0x4000FB1")]
	[FieldOffset(Offset = "0x34")]
	internal static readonly char Quote;

	[Token(Token = "0x4000FB2")]
	[FieldOffset(Offset = "0x36")]
	internal static readonly char Space;

	[Token(Token = "0x4000FB3")]
	[FieldOffset(Offset = "0x38")]
	internal static readonly char Tab;

	[Token(Token = "0x4000FB4")]
	[FieldOffset(Offset = "0x3A")]
	internal static readonly char CR;

	[Token(Token = "0x4000FB5")]
	[FieldOffset(Offset = "0x3C")]
	internal static readonly char LF;

	[Token(Token = "0x4000FB6")]
	[FieldOffset(Offset = "0x3E")]
	internal static readonly char StartComment;

	[Token(Token = "0x4000FB7")]
	[FieldOffset(Offset = "0x40")]
	internal static readonly char EndComment;

	[Token(Token = "0x4000FB8")]
	[FieldOffset(Offset = "0x42")]
	internal static readonly char Backslash;

	[Token(Token = "0x4000FB9")]
	[FieldOffset(Offset = "0x44")]
	internal static readonly char At;

	[Token(Token = "0x4000FBA")]
	[FieldOffset(Offset = "0x46")]
	internal static readonly char EndAngleBracket;

	[Token(Token = "0x4000FBB")]
	[FieldOffset(Offset = "0x48")]
	internal static readonly char StartAngleBracket;

	[Token(Token = "0x4000FBC")]
	[FieldOffset(Offset = "0x4A")]
	internal static readonly char StartSquareBracket;

	[Token(Token = "0x4000FBD")]
	[FieldOffset(Offset = "0x4C")]
	internal static readonly char EndSquareBracket;

	[Token(Token = "0x4000FBE")]
	[FieldOffset(Offset = "0x4E")]
	internal static readonly char Comma;

	[Token(Token = "0x4000FBF")]
	[FieldOffset(Offset = "0x50")]
	internal static readonly char Dot;

	[Token(Token = "0x4000FC0")]
	[FieldOffset(Offset = "0x58")]
	private static readonly char[] s_colonSeparator;

	[Token(Token = "0x4000FC1")]
	[FieldOffset(Offset = "0x60")]
	private static string[] s_months;

	[Token(Token = "0x60018C7")]
	[Address(RVA = "0x2813D50", Offset = "0x2812350", VA = "0x182813D50")]
	private static bool[] CreateCharactersAllowedInAtoms()
	{
		return null;
	}

	[Token(Token = "0x60018C8")]
	[Address(RVA = "0x2814140", Offset = "0x2812740", VA = "0x182814140")]
	private static bool[] CreateCharactersAllowedInQuotedStrings()
	{
		return null;
	}

	[Token(Token = "0x60018C9")]
	[Address(RVA = "0x2813FE0", Offset = "0x28125E0", VA = "0x182813FE0")]
	private static bool[] CreateCharactersAllowedInDomainLiterals()
	{
		return null;
	}

	[Token(Token = "0x60018CA")]
	[Address(RVA = "0x28140B0", Offset = "0x28126B0", VA = "0x1828140B0")]
	private static bool[] CreateCharactersAllowedInHeaderNames()
	{
		return null;
	}

	[Token(Token = "0x60018CB")]
	[Address(RVA = "0x2814210", Offset = "0x2812810", VA = "0x182814210")]
	private static bool[] CreateCharactersAllowedInTokens()
	{
		return null;
	}

	[Token(Token = "0x60018CC")]
	[Address(RVA = "0x2813EF0", Offset = "0x28124F0", VA = "0x182813EF0")]
	private static bool[] CreateCharactersAllowedInComments()
	{
		return null;
	}

	[Token(Token = "0x60018CD")]
	[Address(RVA = "0x2814320", Offset = "0x2812920", VA = "0x182814320")]
	internal static bool IsAllowedWhiteSpace(char c)
	{
		return default(bool);
	}
}
