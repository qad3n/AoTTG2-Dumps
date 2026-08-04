// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Mime.MailBnfHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.Mime;

[Token(Token = "0x200023B")]
internal static class MailBnfHelper
{
	[Token(Token = "0x4000C92")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly bool[] Atext;

	[Token(Token = "0x4000C93")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly bool[] Qtext;

	[Token(Token = "0x4000C94")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly bool[] Dtext;

	[Token(Token = "0x4000C95")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly bool[] Ftext;

	[Token(Token = "0x4000C96")]
	[FieldOffset(Offset = "0x20")]
	internal static readonly bool[] Ttext;

	[Token(Token = "0x4000C97")]
	[FieldOffset(Offset = "0x28")]
	internal static readonly bool[] Ctext;

	[Token(Token = "0x4000C98")]
	[FieldOffset(Offset = "0x30")]
	internal static readonly int Ascii7bitMaxValue;

	[Token(Token = "0x4000C99")]
	[FieldOffset(Offset = "0x34")]
	internal static readonly char Quote;

	[Token(Token = "0x4000C9A")]
	[FieldOffset(Offset = "0x36")]
	internal static readonly char Space;

	[Token(Token = "0x4000C9B")]
	[FieldOffset(Offset = "0x38")]
	internal static readonly char Tab;

	[Token(Token = "0x4000C9C")]
	[FieldOffset(Offset = "0x3A")]
	internal static readonly char CR;

	[Token(Token = "0x4000C9D")]
	[FieldOffset(Offset = "0x3C")]
	internal static readonly char LF;

	[Token(Token = "0x4000C9E")]
	[FieldOffset(Offset = "0x3E")]
	internal static readonly char StartComment;

	[Token(Token = "0x4000C9F")]
	[FieldOffset(Offset = "0x40")]
	internal static readonly char EndComment;

	[Token(Token = "0x4000CA0")]
	[FieldOffset(Offset = "0x42")]
	internal static readonly char Backslash;

	[Token(Token = "0x4000CA1")]
	[FieldOffset(Offset = "0x44")]
	internal static readonly char At;

	[Token(Token = "0x4000CA2")]
	[FieldOffset(Offset = "0x46")]
	internal static readonly char EndAngleBracket;

	[Token(Token = "0x4000CA3")]
	[FieldOffset(Offset = "0x48")]
	internal static readonly char StartAngleBracket;

	[Token(Token = "0x4000CA4")]
	[FieldOffset(Offset = "0x4A")]
	internal static readonly char StartSquareBracket;

	[Token(Token = "0x4000CA5")]
	[FieldOffset(Offset = "0x4C")]
	internal static readonly char EndSquareBracket;

	[Token(Token = "0x4000CA6")]
	[FieldOffset(Offset = "0x4E")]
	internal static readonly char Comma;

	[Token(Token = "0x4000CA7")]
	[FieldOffset(Offset = "0x50")]
	internal static readonly char Dot;

	[Token(Token = "0x4000CA8")]
	[FieldOffset(Offset = "0x58")]
	private static readonly char[] s_colonSeparator;

	[Token(Token = "0x4000CA9")]
	[FieldOffset(Offset = "0x60")]
	private static string[] s_months;

	[Token(Token = "0x6000E00")]
	[Address(RVA = "0x49CBB50", Offset = "0x49CBB50", VA = "0x49CBB50")]
	private static bool[] CreateCharactersAllowedInAtoms()
	{
		return null;
	}

	[Token(Token = "0x6000E01")]
	[Address(RVA = "0x49CBFC0", Offset = "0x49CBFC0", VA = "0x49CBFC0")]
	private static bool[] CreateCharactersAllowedInQuotedStrings()
	{
		return null;
	}

	[Token(Token = "0x6000E02")]
	[Address(RVA = "0x49CC620", Offset = "0x49CC620", VA = "0x49CC620")]
	private static bool[] CreateCharactersAllowedInDomainLiterals()
	{
		return null;
	}

	[Token(Token = "0x6000E03")]
	[Address(RVA = "0x49CCC60", Offset = "0x49CCC60", VA = "0x49CCC60")]
	private static bool[] CreateCharactersAllowedInHeaderNames()
	{
		return null;
	}

	[Token(Token = "0x6000E04")]
	[Address(RVA = "0x49CCE10", Offset = "0x49CCE10", VA = "0x49CCE10")]
	private static bool[] CreateCharactersAllowedInTokens()
	{
		return null;
	}

	[Token(Token = "0x6000E05")]
	[Address(RVA = "0x49CCEF0", Offset = "0x49CCEF0", VA = "0x49CCEF0")]
	private static bool[] CreateCharactersAllowedInComments()
	{
		return null;
	}

	[Token(Token = "0x6000E06")]
	[Address(RVA = "0x49CD530", Offset = "0x49CD530", VA = "0x49CD530")]
	internal static bool IsAllowedWhiteSpace(char c)
	{
		return default(bool);
	}
}
