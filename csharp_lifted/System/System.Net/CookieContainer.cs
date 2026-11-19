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
[Token(Token = "0x20002BE")]
public class CookieContainer
{
	[Token(Token = "0x4000AB9")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HeaderVariantInfo[] HeaderInfo;

	[Token(Token = "0x4000ABA")]
	[FieldOffset(Offset = "0x10")]
	private Hashtable m_domainTable;

	[Token(Token = "0x4000ABB")]
	[FieldOffset(Offset = "0x18")]
	private int m_maxCookieSize;

	[Token(Token = "0x4000ABC")]
	[FieldOffset(Offset = "0x1C")]
	private int m_maxCookies;

	[Token(Token = "0x4000ABD")]
	[FieldOffset(Offset = "0x20")]
	private int m_maxCookiesPerDomain;

	[Token(Token = "0x4000ABE")]
	[FieldOffset(Offset = "0x24")]
	private int m_count;

	[Token(Token = "0x4000ABF")]
	[FieldOffset(Offset = "0x28")]
	private string m_fqdnMyDomain;

	[Token(Token = "0x6001302")]
	[Address(RVA = "0x62B7620", Offset = "0x62B6620", VA = "0x62B7620")]
	public CookieContainer()
	{
	}

	[Token(Token = "0x6001303")]
	[Address(RVA = "0x62B7720", Offset = "0x62B6720", VA = "0x62B7720")]
	private void AddRemoveDomain(string key, PathList value)
	{
	}

	[Token(Token = "0x6001304")]
	[Address(RVA = "0x62B7840", Offset = "0x62B6840", VA = "0x62B7840")]
	internal void Add(Cookie cookie, bool throwOnError)
	{
	}

	[Token(Token = "0x6001305")]
	[Address(RVA = "0x62B86C0", Offset = "0x62B76C0", VA = "0x62B86C0")]
	private bool AgeCookies(string domain)
	{
		return default(bool);
	}

	[Token(Token = "0x6001306")]
	[Address(RVA = "0x62B9D60", Offset = "0x62B8D60", VA = "0x62B9D60")]
	private int ExpireCollection(CookieCollection cc)
	{
		return default(int);
	}

	[Token(Token = "0x6001307")]
	[Address(RVA = "0x62B9EF0", Offset = "0x62B8EF0", VA = "0x62B9EF0")]
	internal bool IsLocalDomain(string host)
	{
		return default(bool);
	}

	[Token(Token = "0x6001308")]
	[Address(RVA = "0x62BA3C0", Offset = "0x62B93C0", VA = "0x62BA3C0")]
	internal CookieCollection CookieCutter(Uri uri, string headerName, string setCookieHeader, bool isThrow)
	{
		return null;
	}

	[Token(Token = "0x6001309")]
	[Address(RVA = "0x62BAB10", Offset = "0x62B9B10", VA = "0x62BAB10")]
	internal CookieCollection InternalGetCookies(Uri uri)
	{
		return null;
	}

	[Token(Token = "0x600130A")]
	[Address(RVA = "0x62BB040", Offset = "0x62BA040", VA = "0x62BB040")]
	private void BuildCookieCollectionFromDomainMatches(Uri uri, bool isSecure, int port, CookieCollection cookies, List<string> domainAttribute, bool matchOnlyPlainCookie)
	{
	}

	[Token(Token = "0x600130B")]
	[Address(RVA = "0x62BB9F0", Offset = "0x62BA9F0", VA = "0x62BB9F0")]
	private void MergeUpdateCollections(CookieCollection destination, CookieCollection source, int port, bool isSecure, bool isPlainOnly)
	{
	}

	[Token(Token = "0x600130C")]
	[Address(RVA = "0x62BBC20", Offset = "0x62BAC20", VA = "0x62BBC20")]
	public string GetCookieHeader(Uri uri)
	{
		return null;
	}

	[Token(Token = "0x600130D")]
	[Address(RVA = "0x62BBCE0", Offset = "0x62BACE0", VA = "0x62BBCE0")]
	internal string GetCookieHeader(Uri uri, out string optCookie2)
	{
		return null;
	}
}
