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
	[Address(RVA = "0x330F220", Offset = "0x330D820", VA = "0x18330F220")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static string RedirectTo(string baseUri, string redirectUri)
	{
		return null;
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x330EB10", Offset = "0x330D110", VA = "0x18330EB10")]
	internal static string MakeInitialUrl(string targetUrl, string localUrl)
	{
		return null;
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x330EE00", Offset = "0x330D400", VA = "0x18330EE00")]
	internal static string MakeUriString(Uri targetUri, string targetUrl, bool prependProtocol)
	{
		return null;
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x330F320", Offset = "0x330D920", VA = "0x18330F320")]
	private static string URLDecode(string encoded)
	{
		return null;
	}
}
