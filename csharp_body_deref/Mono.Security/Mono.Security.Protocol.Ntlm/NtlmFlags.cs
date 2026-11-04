// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Protocol.Ntlm.NtlmFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Mono.Security.Protocol.Ntlm;

[Token(Token = "0x2000033")]
[Flags]
public enum NtlmFlags
{
	[Token(Token = "0x4000099")]
	NegotiateUnicode = 1,
	[Token(Token = "0x400009A")]
	NegotiateOem = 2,
	[Token(Token = "0x400009B")]
	RequestTarget = 4,
	[Token(Token = "0x400009C")]
	NegotiateNtlm = 0x200,
	[Token(Token = "0x400009D")]
	NegotiateDomainSupplied = 0x1000,
	[Token(Token = "0x400009E")]
	NegotiateWorkstationSupplied = 0x2000,
	[Token(Token = "0x400009F")]
	NegotiateAlwaysSign = 0x8000,
	[Token(Token = "0x40000A0")]
	NegotiateNtlm2Key = 0x80000,
	[Token(Token = "0x40000A1")]
	Negotiate128 = 0x20000000,
	[Token(Token = "0x40000A2")]
	Negotiate56 = -2147483648
}
