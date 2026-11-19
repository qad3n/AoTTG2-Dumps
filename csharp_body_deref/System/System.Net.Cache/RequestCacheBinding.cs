// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Cache.RequestCacheBinding
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.Cache;

[Token(Token = "0x200032D")]
internal class RequestCacheBinding
{
	[Token(Token = "0x4000D2A")]
	[FieldOffset(Offset = "0x10")]
	private RequestCache m_RequestCache;

	[Token(Token = "0x4000D2B")]
	[FieldOffset(Offset = "0x18")]
	private RequestCacheValidator m_CacheValidator;

	[Token(Token = "0x170004ED")]
	internal RequestCache Cache
	{
		[Token(Token = "0x60015C3")]
		[Address(RVA = "0x61A51C0", Offset = "0x61A41C0", VA = "0x61A51C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004EE")]
	internal RequestCacheValidator Validator
	{
		[Token(Token = "0x60015C4")]
		[Address(RVA = "0x61A51D0", Offset = "0x61A41D0", VA = "0x61A51D0")]
		get
		{
			return null;
		}
	}
}
