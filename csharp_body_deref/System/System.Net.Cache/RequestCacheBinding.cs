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
		[Address(RVA = "0x467FD60", Offset = "0x467FD60", VA = "0x467FD60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C7")]
	internal RequestCacheValidator Validator
	{
		[Token(Token = "0x6000BC1")]
		[Address(RVA = "0x467FD70", Offset = "0x467FD70", VA = "0x467FD70")]
		get
		{
			return null;
		}
	}
}
