// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509VerificationFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000134")]
[Flags]
public enum X509VerificationFlags
{
	[Token(Token = "0x400058A")]
	NoFlag = 0,
	[Token(Token = "0x400058B")]
	IgnoreNotTimeValid = 1,
	[Token(Token = "0x400058C")]
	IgnoreCtlNotTimeValid = 2,
	[Token(Token = "0x400058D")]
	IgnoreNotTimeNested = 4,
	[Token(Token = "0x400058E")]
	IgnoreInvalidBasicConstraints = 8,
	[Token(Token = "0x400058F")]
	AllowUnknownCertificateAuthority = 0x10,
	[Token(Token = "0x4000590")]
	IgnoreWrongUsage = 0x20,
	[Token(Token = "0x4000591")]
	IgnoreInvalidName = 0x40,
	[Token(Token = "0x4000592")]
	IgnoreInvalidPolicy = 0x80,
	[Token(Token = "0x4000593")]
	IgnoreEndRevocationUnknown = 0x100,
	[Token(Token = "0x4000594")]
	IgnoreCtlSignerRevocationUnknown = 0x200,
	[Token(Token = "0x4000595")]
	IgnoreCertificateAuthorityRevocationUnknown = 0x400,
	[Token(Token = "0x4000596")]
	IgnoreRootRevocationUnknown = 0x800,
	[Token(Token = "0x4000597")]
	AllFlags = IgnoreNotTimeValid | IgnoreCtlNotTimeValid | IgnoreNotTimeNested | IgnoreInvalidBasicConstraints | AllowUnknownCertificateAuthority | IgnoreWrongUsage | IgnoreInvalidName | IgnoreInvalidPolicy | IgnoreEndRevocationUnknown | IgnoreCtlSignerRevocationUnknown | IgnoreCertificateAuthorityRevocationUnknown | IgnoreRootRevocationUnknown
}
