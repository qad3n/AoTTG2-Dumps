using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Net;

[Serializable]
[Token(Token = "0x2000175")]
public class CookieContainer
{
	[Token(Token = "0x4000772")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HeaderVariantInfo[] HeaderInfo;

	[Token(Token = "0x4000773")]
	[FieldOffset(Offset = "0x10")]
	private Hashtable m_domainTable;

	[Token(Token = "0x4000774")]
	[FieldOffset(Offset = "0x18")]
	private int m_maxCookieSize;

	[Token(Token = "0x4000775")]
	[FieldOffset(Offset = "0x1C")]
	private int m_maxCookies;

	[Token(Token = "0x4000776")]
	[FieldOffset(Offset = "0x20")]
	private int m_maxCookiesPerDomain;

	[Token(Token = "0x4000777")]
	[FieldOffset(Offset = "0x24")]
	private int m_count;

	[Token(Token = "0x4000778")]
	[FieldOffset(Offset = "0x28")]
	private string m_fqdnMyDomain;

	[Token(Token = "0x6000900")]
	[Address(RVA = "0x464B700", Offset = "0x464B700", VA = "0x464B700")]
	public CookieContainer()
	{
	}

	[Token(Token = "0x6000901")]
	[Address(RVA = "0x464B800", Offset = "0x464B800", VA = "0x464B800")]
	private void AddRemoveDomain(string key, PathList value)
	{
	}

	[Token(Token = "0x6000902")]
	[Address(RVA = "0x464B940", Offset = "0x464B940", VA = "0x464B940")]
	internal void Add(Cookie cookie, bool throwOnError)
	{
	}

	[Token(Token = "0x6000903")]
	[Address(RVA = "0x464C8C0", Offset = "0x464C8C0", VA = "0x464C8C0")]
	private bool AgeCookies(string domain)
	{
		return default(bool);
	}

	[Token(Token = "0x6000904")]
	[Address(RVA = "0x464E560", Offset = "0x464E560", VA = "0x464E560")]
	private int ExpireCollection(CookieCollection cc)
	{
		return default(int);
	}

	[Token(Token = "0x6000905")]
	[Address(RVA = "0x464E750", Offset = "0x464E750", VA = "0x464E750")]
	internal bool IsLocalDomain(string host)
	{
		return default(bool);
	}

	[Token(Token = "0x6000906")]
	[Address(RVA = "0x464EC00", Offset = "0x464EC00", VA = "0x464EC00")]
	internal CookieCollection CookieCutter(Uri uri, string headerName, string setCookieHeader, bool isThrow)
	{
		return null;
	}

	[Token(Token = "0x6000907")]
	[Address(RVA = "0x464F5C0", Offset = "0x464F5C0", VA = "0x464F5C0")]
	internal CookieCollection InternalGetCookies(Uri uri)
	{
		return null;
	}

	[Token(Token = "0x6000908")]
	[Address(RVA = "0x464FB00", Offset = "0x464FB00", VA = "0x464FB00")]
	private void BuildCookieCollectionFromDomainMatches(Uri uri, bool isSecure, int port, CookieCollection cookies, List<string> domainAttribute, bool matchOnlyPlainCookie)
	{
	}

	[Token(Token = "0x6000909")]
	[Address(RVA = "0x4650600", Offset = "0x4650600", VA = "0x4650600")]
	private void MergeUpdateCollections(CookieCollection destination, CookieCollection source, int port, bool isSecure, bool isPlainOnly)
	{
	}

	[Token(Token = "0x600090A")]
	[Address(RVA = "0x4650B00", Offset = "0x4650B00", VA = "0x4650B00")]
	public string GetCookieHeader(Uri uri)
	{
		return null;
	}

	[Token(Token = "0x600090B")]
	[Address(RVA = "0x4650BC0", Offset = "0x4650BC0", VA = "0x4650BC0")]
	internal string GetCookieHeader(Uri uri, out string optCookie2)
	{
		return null;
	}
}
