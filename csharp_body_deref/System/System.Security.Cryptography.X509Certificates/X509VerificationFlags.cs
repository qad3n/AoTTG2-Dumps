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
