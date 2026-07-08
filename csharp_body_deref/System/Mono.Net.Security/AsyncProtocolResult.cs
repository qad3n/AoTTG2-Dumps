using System.Runtime.CompilerServices;
using System.Runtime.ExceptionServices;
using Il2CppDummyDll;

namespace Mono.Net.Security;

[Token(Token = "0x2000049")]
internal class AsyncProtocolResult
{
	[Token(Token = "0x1700001A")]
	public int UserResult
	{
		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x453BF90", Offset = "0x453BF90", VA = "0x453BF90")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700001B")]
	public ExceptionDispatchInfo Error
	{
		[Token(Token = "0x60000B2")]
		[Address(RVA = "0x453BFA0", Offset = "0x453BFA0", VA = "0x453BFA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x453BFB0", Offset = "0x453BFB0", VA = "0x453BFB0")]
	public AsyncProtocolResult(int result)
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x453BFD0", Offset = "0x453BFD0", VA = "0x453BFD0")]
	public AsyncProtocolResult(ExceptionDispatchInfo error)
	{
	}
}
