// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.CookieContainer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Net;

[Serializable]
[Token(Token = "0x20002FD")]
public class CookieContainer
{
	[Token(Token = "0x4000B88")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HeaderVariantInfo[] HeaderInfo;

	[Token(Token = "0x4000B89")]
	[FieldOffset(Offset = "0x10")]
	private Hashtable m_domainTable;

	[Token(Token = "0x4000B8A")]
	[FieldOffset(Offset = "0x18")]
	private int m_maxCookieSize;

	[Token(Token = "0x4000B8B")]
	[FieldOffset(Offset = "0x1C")]
	private int m_maxCookies;

	[Token(Token = "0x4000B8C")]
	[FieldOffset(Offset = "0x20")]
	private int m_maxCookiesPerDomain;

	[Token(Token = "0x4000B8D")]
	[FieldOffset(Offset = "0x24")]
	private int m_count;

	[Token(Token = "0x4000B8E")]
	[FieldOffset(Offset = "0x28")]
	private string m_fqdnMyDomain;

	[Token(Token = "0x60014C0")]
	[Address(RVA = "0x27C4F80", Offset = "0x27C3580", VA = "0x1827C4F80")]
	public CookieContainer()
	{
	}

	[Token(Token = "0x60014C1")]
	[Address(RVA = "0x27C1960", Offset = "0x27BFF60", VA = "0x1827C1960")]
	private void AddRemoveDomain(string key, PathList value)
	{
	}

	[Token(Token = "0x60014C2")]
	[Address(RVA = "0x27C1A90", Offset = "0x27C0090", VA = "0x1827C1A90")]
	internal void Add(Cookie cookie, bool throwOnError)
	{
	}

	[Token(Token = "0x60014C3")]
	[Address(RVA = "0x27C22B0", Offset = "0x27C08B0", VA = "0x1827C22B0")]
	private bool AgeCookies(string domain)
	{
		return default(bool);
	}

	[Token(Token = "0x60014C4")]
	[Address(RVA = "0x27C4000", Offset = "0x27C2600", VA = "0x1827C4000")]
	private int ExpireCollection(CookieCollection cc)
	{
		return default(int);
	}

	[Token(Token = "0x60014C5")]
	[Address(RVA = "0x27C49C0", Offset = "0x27C2FC0", VA = "0x1827C49C0")]
	internal bool IsLocalDomain(string host)
	{
		return default(bool);
	}

	[Token(Token = "0x60014C6")]
	[Address(RVA = "0x27C3880", Offset = "0x27C1E80", VA = "0x1827C3880")]
	internal CookieCollection CookieCutter(Uri uri, string headerName, string setCookieHeader, bool isThrow)
	{
		return null;
	}

	[Token(Token = "0x60014C7")]
	[Address(RVA = "0x27C4580", Offset = "0x27C2B80", VA = "0x1827C4580")]
	internal CookieCollection InternalGetCookies(Uri uri)
	{
		return null;
	}

	[Token(Token = "0x60014C8")]
	[Address(RVA = "0x27C3170", Offset = "0x27C1770", VA = "0x1827C3170")]
	private void BuildCookieCollectionFromDomainMatches(Uri uri, bool isSecure, int port, CookieCollection cookies, List<string> domainAttribute, bool matchOnlyPlainCookie)
	{
	}

	[Token(Token = "0x60014C9")]
	[Address(RVA = "0x27C4C70", Offset = "0x27C3270", VA = "0x1827C4C70")]
	private void MergeUpdateCollections(CookieCollection destination, CookieCollection source, int port, bool isSecure, bool isPlainOnly)
	{
	}

	[Token(Token = "0x60014CA")]
	[Address(RVA = "0x27C4160", Offset = "0x27C2760", VA = "0x1827C4160")]
	public string GetCookieHeader(Uri uri)
	{
		return null;
	}

	[Token(Token = "0x60014CB")]
	[Address(RVA = "0x27C4230", Offset = "0x27C2830", VA = "0x1827C4230")]
	internal string GetCookieHeader(Uri uri, out string optCookie2)
	{
		return null;
	}
}
