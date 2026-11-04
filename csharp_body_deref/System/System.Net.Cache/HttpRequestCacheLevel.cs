// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Cache.HttpRequestCacheLevel
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.Cache;

[Token(Token = "0x2000374")]
public enum HttpRequestCacheLevel
{
	[Token(Token = "0x4000E1E")]
	Default,
	[Token(Token = "0x4000E1F")]
	BypassCache,
	[Token(Token = "0x4000E20")]
	CacheOnly,
	[Token(Token = "0x4000E21")]
	CacheIfAvailable,
	[Token(Token = "0x4000E22")]
	Revalidate,
	[Token(Token = "0x4000E23")]
	Reload,
	[Token(Token = "0x4000E24")]
	NoCacheNoStore,
	[Token(Token = "0x4000E25")]
	CacheOrNextCacheOnly,
	[Token(Token = "0x4000E26")]
	Refresh
}
