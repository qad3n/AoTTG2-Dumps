// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Cache.RequestCacheBinding
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.Cache;

[Token(Token = "0x20001E4")]
internal class RequestCacheBinding
{
	[Token(Token = "0x40009E3")]
	[FieldOffset(Offset = "0x10")]
	private RequestCache m_RequestCache;

	[Token(Token = "0x40009E4")]
	[FieldOffset(Offset = "0x18")]
	private RequestCacheValidator m_CacheValidator;

	[Token(Token = "0x170002C6")]
	internal RequestCache Cache
	{
		[Token(Token = "0x6000BC0")]
		[Address(RVA = "0x49A4E60", Offset = "0x49A4E60", VA = "0x49A4E60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C7")]
	internal RequestCacheValidator Validator
	{
		[Token(Token = "0x6000BC1")]
		[Address(RVA = "0x49A4E70", Offset = "0x49A4E70", VA = "0x49A4E70")]
		get
		{
			return null;
		}
	}
}
