// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Cache.HttpRequestCacheLevel
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.Cache;

[Token(Token = "0x20001E7")]
public enum HttpRequestCacheLevel
{
	[Token(Token = "0x40009EF")]
	Default,
	[Token(Token = "0x40009F0")]
	BypassCache,
	[Token(Token = "0x40009F1")]
	CacheOnly,
	[Token(Token = "0x40009F2")]
	CacheIfAvailable,
	[Token(Token = "0x40009F3")]
	Revalidate,
	[Token(Token = "0x40009F4")]
	Reload,
	[Token(Token = "0x40009F5")]
	NoCacheNoStore,
	[Token(Token = "0x40009F6")]
	CacheOrNextCacheOnly,
	[Token(Token = "0x40009F7")]
	Refresh
}
