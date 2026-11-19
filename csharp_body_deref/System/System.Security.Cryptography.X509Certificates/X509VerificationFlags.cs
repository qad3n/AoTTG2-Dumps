// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509VerificationFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x20000F5")]
[Flags]
public enum X509VerificationFlags
{
	[Token(Token = "0x40004BB")]
	NoFlag = 0,
	[Token(Token = "0x40004BC")]
	IgnoreNotTimeValid = 1,
	[Token(Token = "0x40004BD")]
	IgnoreCtlNotTimeValid = 2,
	[Token(Token = "0x40004BE")]
	IgnoreNotTimeNested = 4,
	[Token(Token = "0x40004BF")]
	IgnoreInvalidBasicConstraints = 8,
	[Token(Token = "0x40004C0")]
	AllowUnknownCertificateAuthority = 0x10,
	[Token(Token = "0x40004C1")]
	IgnoreWrongUsage = 0x20,
	[Token(Token = "0x40004C2")]
	IgnoreInvalidName = 0x40,
	[Token(Token = "0x40004C3")]
	IgnoreInvalidPolicy = 0x80,
	[Token(Token = "0x40004C4")]
	IgnoreEndRevocationUnknown = 0x100,
	[Token(Token = "0x40004C5")]
	IgnoreCtlSignerRevocationUnknown = 0x200,
	[Token(Token = "0x40004C6")]
	IgnoreCertificateAuthorityRevocationUnknown = 0x400,
	[Token(Token = "0x40004C7")]
	IgnoreRootRevocationUnknown = 0x800,
	[Token(Token = "0x40004C8")]
	AllFlags = IgnoreNotTimeValid | IgnoreCtlNotTimeValid | IgnoreNotTimeNested | IgnoreInvalidBasicConstraints | AllowUnknownCertificateAuthority | IgnoreWrongUsage | IgnoreInvalidName | IgnoreInvalidPolicy | IgnoreEndRevocationUnknown | IgnoreCtlSignerRevocationUnknown | IgnoreCertificateAuthorityRevocationUnknown | IgnoreRootRevocationUnknown
}
