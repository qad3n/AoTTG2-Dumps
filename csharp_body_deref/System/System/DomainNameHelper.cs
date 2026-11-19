// ==================== AoTTG2 cross-reference ====================
// Type: System.DomainNameHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200008E")]
internal class DomainNameHelper
{
	[Token(Token = "0x6000277")]
	[Address(RVA = "0x61DAD60", Offset = "0x61D9D60", VA = "0x61DAD60")]
	internal static string ParseCanonicalName(string str, int start, int end, ref bool loopback)
	{
		return null;
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x61DAEC0", Offset = "0x61D9EC0", VA = "0x61DAEC0")]
	internal unsafe static bool IsValid(char* name, ushort pos, ref int returnedEnd, ref bool notCanonical, bool notImplicitFile)
	{
		return default(bool);
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x61DB0A0", Offset = "0x61DA0A0", VA = "0x61DB0A0")]
	internal unsafe static bool IsValidByIri(char* name, ushort pos, ref int returnedEnd, ref bool notCanonical, bool notImplicitFile)
	{
		return default(bool);
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x61DB270", Offset = "0x61DA270", VA = "0x61DB270")]
	internal static string IdnEquivalent(string hostname)
	{
		return null;
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x61DB2B0", Offset = "0x61DA2B0", VA = "0x61DB2B0")]
	internal unsafe static string IdnEquivalent(char* hostname, int start, int end, ref bool allAscii, ref bool atLeastOneValidIdn)
	{
		return null;
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x61DB630", Offset = "0x61DA630", VA = "0x61DB630")]
	internal unsafe static string IdnEquivalent(char* hostname, int start, int end, ref bool allAscii, ref string bidiStrippedHost)
	{
		return null;
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x61DB870", Offset = "0x61DA870", VA = "0x61DB870")]
	private static bool IsIdnAce(string input, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x61DB830", Offset = "0x61DA830", VA = "0x61DB830")]
	private unsafe static bool IsIdnAce(char* input, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x61DB8E0", Offset = "0x61DA8E0", VA = "0x61DB8E0")]
	internal unsafe static string UnicodeEquivalent(string idnHost, char* hostname, int start, int end)
	{
		return null;
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x61DB9E0", Offset = "0x61DA9E0", VA = "0x61DB9E0")]
	internal unsafe static string UnicodeEquivalent(char* hostname, int start, int end, ref bool allAscii, ref bool atLeastOneValidIdn)
	{
		return null;
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x61DB030", Offset = "0x61DA030", VA = "0x61DB030")]
	private static bool IsASCIILetterOrDigit(char character, ref bool notCanonical)
	{
		return default(bool);
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x61DB060", Offset = "0x61DA060", VA = "0x61DB060")]
	private static bool IsValidDomainLabelCharacter(char character, ref bool notCanonical)
	{
		return default(bool);
	}
}
