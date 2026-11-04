// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509FindType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x200012E")]
public enum X509FindType
{
	[Token(Token = "0x400055C")]
	FindByThumbprint,
	[Token(Token = "0x400055D")]
	FindBySubjectName,
	[Token(Token = "0x400055E")]
	FindBySubjectDistinguishedName,
	[Token(Token = "0x400055F")]
	FindByIssuerName,
	[Token(Token = "0x4000560")]
	FindByIssuerDistinguishedName,
	[Token(Token = "0x4000561")]
	FindBySerialNumber,
	[Token(Token = "0x4000562")]
	FindByTimeValid,
	[Token(Token = "0x4000563")]
	FindByTimeNotYetValid,
	[Token(Token = "0x4000564")]
	FindByTimeExpired,
	[Token(Token = "0x4000565")]
	FindByTemplateName,
	[Token(Token = "0x4000566")]
	FindByApplicationPolicy,
	[Token(Token = "0x4000567")]
	FindByCertificatePolicy,
	[Token(Token = "0x4000568")]
	FindByExtension,
	[Token(Token = "0x4000569")]
	FindByKeyUsage,
	[Token(Token = "0x400056A")]
	FindBySubjectKeyIdentifier
}
