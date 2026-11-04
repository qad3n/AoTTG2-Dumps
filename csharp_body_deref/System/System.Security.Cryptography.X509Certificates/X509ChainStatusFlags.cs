// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x200012D")]
[Flags]
public enum X509ChainStatusFlags
{
	[Token(Token = "0x4000541")]
	NoError = 0,
	[Token(Token = "0x4000542")]
	NotTimeValid = 1,
	[Token(Token = "0x4000543")]
	NotTimeNested = 2,
	[Token(Token = "0x4000544")]
	Revoked = 4,
	[Token(Token = "0x4000545")]
	NotSignatureValid = 8,
	[Token(Token = "0x4000546")]
	NotValidForUsage = 0x10,
	[Token(Token = "0x4000547")]
	UntrustedRoot = 0x20,
	[Token(Token = "0x4000548")]
	RevocationStatusUnknown = 0x40,
	[Token(Token = "0x4000549")]
	Cyclic = 0x80,
	[Token(Token = "0x400054A")]
	InvalidExtension = 0x100,
	[Token(Token = "0x400054B")]
	InvalidPolicyConstraints = 0x200,
	[Token(Token = "0x400054C")]
	InvalidBasicConstraints = 0x400,
	[Token(Token = "0x400054D")]
	InvalidNameConstraints = 0x800,
	[Token(Token = "0x400054E")]
	HasNotSupportedNameConstraint = 0x1000,
	[Token(Token = "0x400054F")]
	HasNotDefinedNameConstraint = 0x2000,
	[Token(Token = "0x4000550")]
	HasNotPermittedNameConstraint = 0x4000,
	[Token(Token = "0x4000551")]
	HasExcludedNameConstraint = 0x8000,
	[Token(Token = "0x4000552")]
	PartialChain = 0x10000,
	[Token(Token = "0x4000553")]
	CtlNotTimeValid = 0x20000,
	[Token(Token = "0x4000554")]
	CtlNotSignatureValid = 0x40000,
	[Token(Token = "0x4000555")]
	CtlNotValidForUsage = 0x80000,
	[Token(Token = "0x4000556")]
	OfflineRevocation = 0x1000000,
	[Token(Token = "0x4000557")]
	NoIssuanceChainPolicy = 0x2000000,
	[Token(Token = "0x4000558")]
	ExplicitDistrust = 0x4000000,
	[Token(Token = "0x4000559")]
	HasNotSupportedCriticalExtension = 0x8000000,
	[Token(Token = "0x400055A")]
	HasWeakSignature = 0x100000
}
