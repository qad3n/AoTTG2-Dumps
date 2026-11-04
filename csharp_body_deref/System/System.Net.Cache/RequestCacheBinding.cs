// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Cache.RequestCacheBinding
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.Cache;

[Token(Token = "0x2000371")]
internal class RequestCacheBinding
{
	[Token(Token = "0x4000E12")]
	[FieldOffset(Offset = "0x10")]
	private RequestCache m_RequestCache;

	[Token(Token = "0x4000E13")]
	[FieldOffset(Offset = "0x18")]
	private RequestCacheValidator m_CacheValidator;

	[Token(Token = "0x1700051A")]
	internal RequestCache Cache
	{
		[Token(Token = "0x600177C")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700051B")]
	internal RequestCacheValidator Validator
	{
		[Token(Token = "0x600177D")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}
}
