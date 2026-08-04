// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509VerificationFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x20000F4")]
[Flags]
public enum X509VerificationFlags
{
	[Token(Token = "0x40004B8")]
	NoFlag = 0,
	[Token(Token = "0x40004B9")]
	IgnoreNotTimeValid = 1,
	[Token(Token = "0x40004BA")]
	IgnoreCtlNotTimeValid = 2,
	[Token(Token = "0x40004BB")]
	IgnoreNotTimeNested = 4,
	[Token(Token = "0x40004BC")]
	IgnoreInvalidBasicConstraints = 8,
	[Token(Token = "0x40004BD")]
	AllowUnknownCertificateAuthority = 0x10,
	[Token(Token = "0x40004BE")]
	IgnoreWrongUsage = 0x20,
	[Token(Token = "0x40004BF")]
	IgnoreInvalidName = 0x40,
	[Token(Token = "0x40004C0")]
	IgnoreInvalidPolicy = 0x80,
	[Token(Token = "0x40004C1")]
	IgnoreEndRevocationUnknown = 0x100,
	[Token(Token = "0x40004C2")]
	IgnoreCtlSignerRevocationUnknown = 0x200,
	[Token(Token = "0x40004C3")]
	IgnoreCertificateAuthorityRevocationUnknown = 0x400,
	[Token(Token = "0x40004C4")]
	IgnoreRootRevocationUnknown = 0x800,
	[Token(Token = "0x40004C5")]
	AllFlags = 0xFFF
}
