// ==================== AoTTG2 cross-reference ====================
// Type: System.IriHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000BA")]
internal static class IriHelper
{
	[Token(Token = "0x600037B")]
	[Address(RVA = "0x28312F0", Offset = "0x282F8F0", VA = "0x1828312F0")]
	internal static bool CheckIriUnicodeRange(char unicode, bool isQuery)
	{
		return default(bool);
	}

	[Token(Token = "0x600037C")]
	[Address(RVA = "0x2830DA0", Offset = "0x282F3A0", VA = "0x182830DA0")]
	internal static bool CheckIriUnicodeRange(char highSurr, char lowSurr, ref bool surrogatePair, bool isQuery)
	{
		return default(bool);
	}

	[Token(Token = "0x600037D")]
	[Address(RVA = "0x2831360", Offset = "0x282F960", VA = "0x182831360")]
	internal static bool CheckIsReserved(char ch, UriComponents component)
	{
		return default(bool);
	}

	[Token(Token = "0x600037E")]
	[Address(RVA = "0x2831470", Offset = "0x282FA70", VA = "0x182831470")]
	internal unsafe static string EscapeUnescapeIri(char* pInput, int start, int end, UriComponents component)
	{
		return null;
	}
}
