// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.X509.X509ChainStatusFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Mono.Security.X509;

[Serializable]
[Token(Token = "0x2000015")]
[Flags]
public enum X509ChainStatusFlags
{
	[Token(Token = "0x4000068")]
	InvalidBasicConstraints = 0x400,
	[Token(Token = "0x4000069")]
	NoError = 0,
	[Token(Token = "0x400006A")]
	NotSignatureValid = 8,
	[Token(Token = "0x400006B")]
	NotTimeNested = 2,
	[Token(Token = "0x400006C")]
	NotTimeValid = 1,
	[Token(Token = "0x400006D")]
	PartialChain = 0x10000,
	[Token(Token = "0x400006E")]
	UntrustedRoot = 0x20
}
