// ==================== AoTTG2 cross-reference ====================
// Type: System.IriHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200007B")]
internal static class IriHelper
{
	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x61D5490", Offset = "0x61D4490", VA = "0x61D5490")]
	internal static bool CheckIriUnicodeRange(char unicode, bool isQuery)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x61D54E0", Offset = "0x61D44E0", VA = "0x61D54E0")]
	internal static bool CheckIriUnicodeRange(char highSurr, char lowSurr, ref bool surrogatePair, bool isQuery)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x61D5A80", Offset = "0x61D4A80", VA = "0x61D5A80")]
	internal static bool CheckIsReserved(char ch, UriComponents component)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x61D5BA0", Offset = "0x61D4BA0", VA = "0x61D5BA0")]
	internal unsafe static string EscapeUnescapeIri(char* pInput, int start, int end, UriComponents component)
	{
		return null;
	}
}
