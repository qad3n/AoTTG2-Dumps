// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngineInternal.WebRequestUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Text.RegularExpressions;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngineInternal;

[Token(Token = "0x2000002")]
internal static class WebRequestUtils
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x0")]
	private static Regex domainRegex;

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x6D19560", Offset = "0x6D18560", VA = "0x6D19560")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static string RedirectTo(string baseUri, string redirectUri)
	{
		return null;
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x6D19640", Offset = "0x6D18640", VA = "0x6D19640")]
	internal static string MakeInitialUrl(string targetUrl, string localUrl)
	{
		return null;
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x6D199C0", Offset = "0x6D189C0", VA = "0x6D199C0")]
	internal static string MakeUriString(Uri targetUri, string targetUrl, bool prependProtocol)
	{
		return null;
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x6D19D60", Offset = "0x6D18D60", VA = "0x6D19D60")]
	private static string URLDecode(string encoded)
	{
		return null;
	}
}
