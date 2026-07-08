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
	[Address(RVA = "0x4DDCD40", Offset = "0x4DDCD40", VA = "0x4DDCD40")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static string RedirectTo(string baseUri, string redirectUri)
	{
		return null;
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4DDCE20", Offset = "0x4DDCE20", VA = "0x4DDCE20")]
	internal static string MakeInitialUrl(string targetUrl, string localUrl)
	{
		return null;
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4DDD1E0", Offset = "0x4DDD1E0", VA = "0x4DDD1E0")]
	internal static string MakeUriString(Uri targetUri, string targetUrl, bool prependProtocol)
	{
		return null;
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x4DDD580", Offset = "0x4DDD580", VA = "0x4DDD580")]
	private static string URLDecode(string encoded)
	{
		return null;
	}
}
