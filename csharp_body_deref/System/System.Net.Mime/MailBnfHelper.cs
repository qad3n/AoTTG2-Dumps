// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Mime.MailBnfHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.Mime;

[Token(Token = "0x2000353")]
internal static class MailBnfHelper
{
	[Token(Token = "0x4000EC2")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly bool[] Atext;

	[Token(Token = "0x4000EC3")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly bool[] Qtext;

	[Token(Token = "0x4000EC4")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly bool[] Dtext;

	[Token(Token = "0x4000EC5")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly bool[] Ftext;

	[Token(Token = "0x4000EC6")]
	[FieldOffset(Offset = "0x20")]
	internal static readonly bool[] Ttext;

	[Token(Token = "0x4000EC7")]
	[FieldOffset(Offset = "0x28")]
	internal static readonly bool[] Ctext;

	[Token(Token = "0x4000EC8")]
	[FieldOffset(Offset = "0x30")]
	internal static readonly int Ascii7bitMaxValue;

	[Token(Token = "0x4000EC9")]
	[FieldOffset(Offset = "0x34")]
	internal static readonly char Quote;

	[Token(Token = "0x4000ECA")]
	[FieldOffset(Offset = "0x36")]
	internal static readonly char Space;

	[Token(Token = "0x4000ECB")]
	[FieldOffset(Offset = "0x38")]
	internal static readonly char Tab;

	[Token(Token = "0x4000ECC")]
	[FieldOffset(Offset = "0x3A")]
	internal static readonly char CR;

	[Token(Token = "0x4000ECD")]
	[FieldOffset(Offset = "0x3C")]
	internal static readonly char LF;

	[Token(Token = "0x4000ECE")]
	[FieldOffset(Offset = "0x3E")]
	internal static readonly char StartComment;

	[Token(Token = "0x4000ECF")]
	[FieldOffset(Offset = "0x40")]
	internal static readonly char EndComment;

	[Token(Token = "0x4000ED0")]
	[FieldOffset(Offset = "0x42")]
	internal static readonly char Backslash;

	[Token(Token = "0x4000ED1")]
	[FieldOffset(Offset = "0x44")]
	internal static readonly char At;

	[Token(Token = "0x4000ED2")]
	[FieldOffset(Offset = "0x46")]
	internal static readonly char EndAngleBracket;

	[Token(Token = "0x4000ED3")]
	[FieldOffset(Offset = "0x48")]
	internal static readonly char StartAngleBracket;

	[Token(Token = "0x4000ED4")]
	[FieldOffset(Offset = "0x4A")]
	internal static readonly char StartSquareBracket;

	[Token(Token = "0x4000ED5")]
	[FieldOffset(Offset = "0x4C")]
	internal static readonly char EndSquareBracket;

	[Token(Token = "0x4000ED6")]
	[FieldOffset(Offset = "0x4E")]
	internal static readonly char Comma;

	[Token(Token = "0x4000ED7")]
	[FieldOffset(Offset = "0x50")]
	internal static readonly char Dot;

	[Token(Token = "0x4000ED8")]
	[FieldOffset(Offset = "0x58")]
	private static readonly char[] s_colonSeparator;

	[Token(Token = "0x4000ED9")]
	[FieldOffset(Offset = "0x60")]
	private static string[] s_months;

	[Token(Token = "0x600170E")]
	[Address(RVA = "0x61B9C40", Offset = "0x61B8C40", VA = "0x61B9C40")]
	private static bool[] CreateCharactersAllowedInAtoms()
	{
		return null;
	}

	[Token(Token = "0x600170F")]
	[Address(RVA = "0x61BA070", Offset = "0x61B9070", VA = "0x61BA070")]
	private static bool[] CreateCharactersAllowedInQuotedStrings()
	{
		return null;
	}

	[Token(Token = "0x6001710")]
	[Address(RVA = "0x61BA750", Offset = "0x61B9750", VA = "0x61BA750")]
	private static bool[] CreateCharactersAllowedInDomainLiterals()
	{
		return null;
	}

	[Token(Token = "0x6001711")]
	[Address(RVA = "0x61BAE10", Offset = "0x61B9E10", VA = "0x61BAE10")]
	private static bool[] CreateCharactersAllowedInHeaderNames()
	{
		return null;
	}

	[Token(Token = "0x6001712")]
	[Address(RVA = "0x61BB010", Offset = "0x61BA010", VA = "0x61BB010")]
	private static bool[] CreateCharactersAllowedInTokens()
	{
		return null;
	}

	[Token(Token = "0x6001713")]
	[Address(RVA = "0x61BB140", Offset = "0x61BA140", VA = "0x61BB140")]
	private static bool[] CreateCharactersAllowedInComments()
	{
		return null;
	}

	[Token(Token = "0x6001714")]
	[Address(RVA = "0x61BB810", Offset = "0x61BA810", VA = "0x61BB810")]
	internal static bool IsAllowedWhiteSpace(char c)
	{
		return default(bool);
	}
}
