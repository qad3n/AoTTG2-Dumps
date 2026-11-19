// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x20000EE")]
[Flags]
public enum X509ChainStatusFlags
{
	[Token(Token = "0x4000472")]
	NoError = 0,
	[Token(Token = "0x4000473")]
	NotTimeValid = 1,
	[Token(Token = "0x4000474")]
	NotTimeNested = 2,
	[Token(Token = "0x4000475")]
	Revoked = 4,
	[Token(Token = "0x4000476")]
	NotSignatureValid = 8,
	[Token(Token = "0x4000477")]
	NotValidForUsage = 0x10,
	[Token(Token = "0x4000478")]
	UntrustedRoot = 0x20,
	[Token(Token = "0x4000479")]
	RevocationStatusUnknown = 0x40,
	[Token(Token = "0x400047A")]
	Cyclic = 0x80,
	[Token(Token = "0x400047B")]
	InvalidExtension = 0x100,
	[Token(Token = "0x400047C")]
	InvalidPolicyConstraints = 0x200,
	[Token(Token = "0x400047D")]
	InvalidBasicConstraints = 0x400,
	[Token(Token = "0x400047E")]
	InvalidNameConstraints = 0x800,
	[Token(Token = "0x400047F")]
	HasNotSupportedNameConstraint = 0x1000,
	[Token(Token = "0x4000480")]
	HasNotDefinedNameConstraint = 0x2000,
	[Token(Token = "0x4000481")]
	HasNotPermittedNameConstraint = 0x4000,
	[Token(Token = "0x4000482")]
	HasExcludedNameConstraint = 0x8000,
	[Token(Token = "0x4000483")]
	PartialChain = 0x10000,
	[Token(Token = "0x4000484")]
	CtlNotTimeValid = 0x20000,
	[Token(Token = "0x4000485")]
	CtlNotSignatureValid = 0x40000,
	[Token(Token = "0x4000486")]
	CtlNotValidForUsage = 0x80000,
	[Token(Token = "0x4000487")]
	OfflineRevocation = 0x1000000,
	[Token(Token = "0x4000488")]
	NoIssuanceChainPolicy = 0x2000000,
	[Token(Token = "0x4000489")]
	ExplicitDistrust = 0x4000000,
	[Token(Token = "0x400048A")]
	HasNotSupportedCriticalExtension = 0x8000000,
	[Token(Token = "0x400048B")]
	HasWeakSignature = 0x100000
}
