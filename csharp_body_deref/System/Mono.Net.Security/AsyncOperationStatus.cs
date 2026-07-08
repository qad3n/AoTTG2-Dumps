using Il2CppDummyDll;

namespace Mono.Net.Security;

[Token(Token = "0x2000048")]
internal enum AsyncOperationStatus
{
	[Token(Token = "0x400009E")]
	Initialize,
	[Token(Token = "0x400009F")]
	Continue,
	[Token(Token = "0x40000A0")]
	ReadDone,
	[Token(Token = "0x40000A1")]
	Complete
}
