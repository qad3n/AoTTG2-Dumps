using System;
using Il2CppDummyDll;

namespace Mono.Security.Protocol.Ntlm;

[Token(Token = "0x2000021")]
[Flags]
public enum NtlmFlags
{
	[Token(Token = "0x4000093")]
	NegotiateUnicode = 1,
	[Token(Token = "0x4000094")]
	NegotiateOem = 2,
	[Token(Token = "0x4000095")]
	RequestTarget = 4,
	[Token(Token = "0x4000096")]
	NegotiateNtlm = 0x200,
	[Token(Token = "0x4000097")]
	NegotiateDomainSupplied = 0x1000,
	[Token(Token = "0x4000098")]
	NegotiateWorkstationSupplied = 0x2000,
	[Token(Token = "0x4000099")]
	NegotiateAlwaysSign = 0x8000,
	[Token(Token = "0x400009A")]
	NegotiateNtlm2Key = 0x80000,
	[Token(Token = "0x400009B")]
	Negotiate128 = 0x20000000,
	[Token(Token = "0x400009C")]
	Negotiate56 = int.MinValue
}
