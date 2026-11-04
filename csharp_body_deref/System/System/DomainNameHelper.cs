// ==================== AoTTG2 cross-reference ====================
// Type: System.DomainNameHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000CD")]
internal class DomainNameHelper
{
	[Token(Token = "0x600042B")]
	[Address(RVA = "0x284A1E0", Offset = "0x28487E0", VA = "0x18284A1E0")]
	internal static string ParseCanonicalName(string str, int start, int end, ref bool loopback)
	{
		return null;
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x284A060", Offset = "0x2848660", VA = "0x18284A060")]
	internal unsafe static bool IsValid(char* name, ushort pos, ref int returnedEnd, ref bool notCanonical, bool notImplicitFile)
	{
		return default(bool);
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x2849E40", Offset = "0x2848440", VA = "0x182849E40")]
	internal unsafe static bool IsValidByIri(char* name, ushort pos, ref int returnedEnd, ref bool notCanonical, bool notImplicitFile)
	{
		return default(bool);
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x2849B80", Offset = "0x2848180", VA = "0x182849B80")]
	internal static string IdnEquivalent(string hostname)
	{
		return null;
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x2849930", Offset = "0x2847F30", VA = "0x182849930")]
	internal unsafe static string IdnEquivalent(char* hostname, int start, int end, ref bool allAscii, ref bool atLeastOneValidIdn)
	{
		return null;
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x2849BE0", Offset = "0x28481E0", VA = "0x182849BE0")]
	internal unsafe static string IdnEquivalent(char* hostname, int start, int end, ref bool allAscii, ref string bidiStrippedHost)
	{
		return null;
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x2849D90", Offset = "0x2848390", VA = "0x182849D90")]
	private static bool IsIdnAce(string input, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x2849E10", Offset = "0x2848410", VA = "0x182849E10")]
	private unsafe static bool IsIdnAce(char* input, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x284A350", Offset = "0x2848950", VA = "0x18284A350")]
	internal unsafe static string UnicodeEquivalent(string idnHost, char* hostname, int start, int end)
	{
		return null;
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x284A400", Offset = "0x2848A00", VA = "0x18284A400")]
	internal unsafe static string UnicodeEquivalent(char* hostname, int start, int end, ref bool allAscii, ref bool atLeastOneValidIdn)
	{
		return null;
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x2849D60", Offset = "0x2848360", VA = "0x182849D60")]
	private static bool IsASCIILetterOrDigit(char character, ref bool notCanonical)
	{
		return default(bool);
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x284A020", Offset = "0x2848620", VA = "0x18284A020")]
	private static bool IsValidDomainLabelCharacter(char character, ref bool notCanonical)
	{
		return default(bool);
	}
}
