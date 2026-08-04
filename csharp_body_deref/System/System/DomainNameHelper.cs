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
	[Address(RVA = "0x48FE500", Offset = "0x48FE500", VA = "0x48FE500")]
	internal static string ParseCanonicalName(string str, int start, int end, ref bool loopback)
	{
		return null;
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x48FE650", Offset = "0x48FE650", VA = "0x48FE650")]
	internal unsafe static bool IsValid(char* name, ushort pos, ref int returnedEnd, ref bool notCanonical, bool notImplicitFile)
	{
		return default(bool);
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x48FE840", Offset = "0x48FE840", VA = "0x48FE840")]
	internal unsafe static bool IsValidByIri(char* name, ushort pos, ref int returnedEnd, ref bool notCanonical, bool notImplicitFile)
	{
		return default(bool);
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x48FEA40", Offset = "0x48FEA40", VA = "0x48FEA40")]
	internal static string IdnEquivalent(string hostname)
	{
		return null;
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x48FEA90", Offset = "0x48FEA90", VA = "0x48FEA90")]
	internal unsafe static string IdnEquivalent(char* hostname, int start, int end, ref bool allAscii, ref bool atLeastOneValidIdn)
	{
		return null;
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x48FED70", Offset = "0x48FED70", VA = "0x48FED70")]
	internal unsafe static string IdnEquivalent(char* hostname, int start, int end, ref bool allAscii, ref string bidiStrippedHost)
	{
		return null;
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x48FEFB0", Offset = "0x48FEFB0", VA = "0x48FEFB0")]
	private static bool IsIdnAce(string input, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x48FEF70", Offset = "0x48FEF70", VA = "0x48FEF70")]
	private unsafe static bool IsIdnAce(char* input, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x48FF020", Offset = "0x48FF020", VA = "0x48FF020")]
	internal unsafe static string UnicodeEquivalent(string idnHost, char* hostname, int start, int end)
	{
		return null;
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x48FF140", Offset = "0x48FF140", VA = "0x48FF140")]
	internal unsafe static string UnicodeEquivalent(char* hostname, int start, int end, ref bool allAscii, ref bool atLeastOneValidIdn)
	{
		return null;
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x48FE7E0", Offset = "0x48FE7E0", VA = "0x48FE7E0")]
	private static bool IsASCIILetterOrDigit(char character, ref bool notCanonical)
	{
		return default(bool);
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x48FE810", Offset = "0x48FE810", VA = "0x48FE810")]
	private static bool IsValidDomainLabelCharacter(char character, ref bool notCanonical)
	{
		return default(bool);
	}
}
