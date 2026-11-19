// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509FindType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x20000EF")]
public enum X509FindType
{
	[Token(Token = "0x400048D")]
	FindByThumbprint,
	[Token(Token = "0x400048E")]
	FindBySubjectName,
	[Token(Token = "0x400048F")]
	FindBySubjectDistinguishedName,
	[Token(Token = "0x4000490")]
	FindByIssuerName,
	[Token(Token = "0x4000491")]
	FindByIssuerDistinguishedName,
	[Token(Token = "0x4000492")]
	FindBySerialNumber,
	[Token(Token = "0x4000493")]
	FindByTimeValid,
	[Token(Token = "0x4000494")]
	FindByTimeNotYetValid,
	[Token(Token = "0x4000495")]
	FindByTimeExpired,
	[Token(Token = "0x4000496")]
	FindByTemplateName,
	[Token(Token = "0x4000497")]
	FindByApplicationPolicy,
	[Token(Token = "0x4000498")]
	FindByCertificatePolicy,
	[Token(Token = "0x4000499")]
	FindByExtension,
	[Token(Token = "0x400049A")]
	FindByKeyUsage,
	[Token(Token = "0x400049B")]
	FindBySubjectKeyIdentifier
}
