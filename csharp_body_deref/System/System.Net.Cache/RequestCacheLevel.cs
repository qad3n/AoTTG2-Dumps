using Il2CppDummyDll;

namespace System.Net.Cache;

[Token(Token = "0x20001E5")]
public enum RequestCacheLevel
{
	[Token(Token = "0x40009E6")]
	Default,
	[Token(Token = "0x40009E7")]
	BypassCache,
	[Token(Token = "0x40009E8")]
	CacheOnly,
	[Token(Token = "0x40009E9")]
	CacheIfAvailable,
	[Token(Token = "0x40009EA")]
	Revalidate,
	[Token(Token = "0x40009EB")]
	Reload,
	[Token(Token = "0x40009EC")]
	NoCacheNoStore
}
