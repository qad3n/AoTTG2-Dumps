using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200008E")]
internal class DomainNameHelper
{
	[Token(Token = "0x6000277")]
	[Address(RVA = "0x45D9400", Offset = "0x45D9400", VA = "0x45D9400")]
	internal static string ParseCanonicalName(string str, int start, int end, ref bool loopback)
	{
		return null;
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x45D9550", Offset = "0x45D9550", VA = "0x45D9550")]
	internal unsafe static bool IsValid(char* name, ushort pos, ref int returnedEnd, ref bool notCanonical, bool notImplicitFile)
	{
		return default(bool);
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x45D9740", Offset = "0x45D9740", VA = "0x45D9740")]
	internal unsafe static bool IsValidByIri(char* name, ushort pos, ref int returnedEnd, ref bool notCanonical, bool notImplicitFile)
	{
		return default(bool);
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x45D9940", Offset = "0x45D9940", VA = "0x45D9940")]
	internal static string IdnEquivalent(string hostname)
	{
		return null;
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x45D9990", Offset = "0x45D9990", VA = "0x45D9990")]
	internal unsafe static string IdnEquivalent(char* hostname, int start, int end, ref bool allAscii, ref bool atLeastOneValidIdn)
	{
		return null;
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x45D9C70", Offset = "0x45D9C70", VA = "0x45D9C70")]
	internal unsafe static string IdnEquivalent(char* hostname, int start, int end, ref bool allAscii, ref string bidiStrippedHost)
	{
		return null;
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x45D9EB0", Offset = "0x45D9EB0", VA = "0x45D9EB0")]
	private static bool IsIdnAce(string input, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x45D9E70", Offset = "0x45D9E70", VA = "0x45D9E70")]
	private unsafe static bool IsIdnAce(char* input, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x45D9F20", Offset = "0x45D9F20", VA = "0x45D9F20")]
	internal unsafe static string UnicodeEquivalent(string idnHost, char* hostname, int start, int end)
	{
		return null;
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x45DA040", Offset = "0x45DA040", VA = "0x45DA040")]
	internal unsafe static string UnicodeEquivalent(char* hostname, int start, int end, ref bool allAscii, ref bool atLeastOneValidIdn)
	{
		return null;
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x45D96E0", Offset = "0x45D96E0", VA = "0x45D96E0")]
	private static bool IsASCIILetterOrDigit(char character, ref bool notCanonical)
	{
		return default(bool);
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x45D9710", Offset = "0x45D9710", VA = "0x45D9710")]
	private static bool IsValidDomainLabelCharacter(char character, ref bool notCanonical)
	{
		return default(bool);
	}
}
