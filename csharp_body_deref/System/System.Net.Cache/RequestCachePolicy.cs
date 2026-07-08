using Il2CppDummyDll;

namespace System.Net.Cache;

[Token(Token = "0x20001E6")]
public class RequestCachePolicy
{
	[Token(Token = "0x40009ED")]
	[FieldOffset(Offset = "0x10")]
	private RequestCacheLevel m_Level;

	[Token(Token = "0x170002C8")]
	public RequestCacheLevel Level
	{
		[Token(Token = "0x6000BC3")]
		[Address(RVA = "0x467FDF0", Offset = "0x467FDF0", VA = "0x467FDF0")]
		get
		{
			return default(RequestCacheLevel);
		}
	}

	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x467FD80", Offset = "0x467FD80", VA = "0x467FD80")]
	public RequestCachePolicy(RequestCacheLevel level)
	{
	}

	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x467FE00", Offset = "0x467FE00", VA = "0x467FE00", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
