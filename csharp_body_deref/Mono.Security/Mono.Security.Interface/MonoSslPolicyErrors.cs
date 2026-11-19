// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Interface.MonoSslPolicyErrors
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Mono.Security.Interface;

[Token(Token = "0x200002D")]
[Flags]
public enum MonoSslPolicyErrors
{
	[Token(Token = "0x40001DE")]
	None = 0,
	[Token(Token = "0x40001DF")]
	RemoteCertificateNotAvailable = 1,
	[Token(Token = "0x40001E0")]
	RemoteCertificateNameMismatch = 2,
	[Token(Token = "0x40001E1")]
	RemoteCertificateChainErrors = 4
}
