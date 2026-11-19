// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Cache.HttpRequestCacheLevel
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.Cache;

[Token(Token = "0x2000330")]
public enum HttpRequestCacheLevel
{
	[Token(Token = "0x4000D36")]
	Default,
	[Token(Token = "0x4000D37")]
	BypassCache,
	[Token(Token = "0x4000D38")]
	CacheOnly,
	[Token(Token = "0x4000D39")]
	CacheIfAvailable,
	[Token(Token = "0x4000D3A")]
	Revalidate,
	[Token(Token = "0x4000D3B")]
	Reload,
	[Token(Token = "0x4000D3C")]
	NoCacheNoStore,
	[Token(Token = "0x4000D3D")]
	CacheOrNextCacheOnly,
	[Token(Token = "0x4000D3E")]
	Refresh
}
