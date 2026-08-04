// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x20000ED")]
[Flags]
public enum X509ChainStatusFlags
{
	[Token(Token = "0x400046F")]
	NoError = 0,
	[Token(Token = "0x4000470")]
	NotTimeValid = 1,
	[Token(Token = "0x4000471")]
	NotTimeNested = 2,
	[Token(Token = "0x4000472")]
	Revoked = 4,
	[Token(Token = "0x4000473")]
	NotSignatureValid = 8,
	[Token(Token = "0x4000474")]
	NotValidForUsage = 0x10,
	[Token(Token = "0x4000475")]
	UntrustedRoot = 0x20,
	[Token(Token = "0x4000476")]
	RevocationStatusUnknown = 0x40,
	[Token(Token = "0x4000477")]
	Cyclic = 0x80,
	[Token(Token = "0x4000478")]
	InvalidExtension = 0x100,
	[Token(Token = "0x4000479")]
	InvalidPolicyConstraints = 0x200,
	[Token(Token = "0x400047A")]
	InvalidBasicConstraints = 0x400,
	[Token(Token = "0x400047B")]
	InvalidNameConstraints = 0x800,
	[Token(Token = "0x400047C")]
	HasNotSupportedNameConstraint = 0x1000,
	[Token(Token = "0x400047D")]
	HasNotDefinedNameConstraint = 0x2000,
	[Token(Token = "0x400047E")]
	HasNotPermittedNameConstraint = 0x4000,
	[Token(Token = "0x400047F")]
	HasExcludedNameConstraint = 0x8000,
	[Token(Token = "0x4000480")]
	PartialChain = 0x10000,
	[Token(Token = "0x4000481")]
	CtlNotTimeValid = 0x20000,
	[Token(Token = "0x4000482")]
	CtlNotSignatureValid = 0x40000,
	[Token(Token = "0x4000483")]
	CtlNotValidForUsage = 0x80000,
	[Token(Token = "0x4000484")]
	OfflineRevocation = 0x1000000,
	[Token(Token = "0x4000485")]
	NoIssuanceChainPolicy = 0x2000000,
	[Token(Token = "0x4000486")]
	ExplicitDistrust = 0x4000000,
	[Token(Token = "0x4000487")]
	HasNotSupportedCriticalExtension = 0x8000000,
	[Token(Token = "0x4000488")]
	HasWeakSignature = 0x100000
}
