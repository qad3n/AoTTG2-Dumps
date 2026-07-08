using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200007B")]
internal static class IriHelper
{
	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x45D3E40", Offset = "0x45D3E40", VA = "0x45D3E40")]
	internal static bool CheckIriUnicodeRange(char unicode, bool isQuery)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x45D3E90", Offset = "0x45D3E90", VA = "0x45D3E90")]
	internal static bool CheckIriUnicodeRange(char highSurr, char lowSurr, ref bool surrogatePair, bool isQuery)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x45D4430", Offset = "0x45D4430", VA = "0x45D4430")]
	internal static bool CheckIsReserved(char ch, UriComponents component)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x45D4540", Offset = "0x45D4540", VA = "0x45D4540")]
	internal unsafe static string EscapeUnescapeIri(char* pInput, int start, int end, UriComponents component)
	{
		return null;
	}
}
