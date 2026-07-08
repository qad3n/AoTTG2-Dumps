using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x20000EE")]
public enum X509FindType
{
	[Token(Token = "0x400048A")]
	FindByThumbprint,
	[Token(Token = "0x400048B")]
	FindBySubjectName,
	[Token(Token = "0x400048C")]
	FindBySubjectDistinguishedName,
	[Token(Token = "0x400048D")]
	FindByIssuerName,
	[Token(Token = "0x400048E")]
	FindByIssuerDistinguishedName,
	[Token(Token = "0x400048F")]
	FindBySerialNumber,
	[Token(Token = "0x4000490")]
	FindByTimeValid,
	[Token(Token = "0x4000491")]
	FindByTimeNotYetValid,
	[Token(Token = "0x4000492")]
	FindByTimeExpired,
	[Token(Token = "0x4000493")]
	FindByTemplateName,
	[Token(Token = "0x4000494")]
	FindByApplicationPolicy,
	[Token(Token = "0x4000495")]
	FindByCertificatePolicy,
	[Token(Token = "0x4000496")]
	FindByExtension,
	[Token(Token = "0x4000497")]
	FindByKeyUsage,
	[Token(Token = "0x4000498")]
	FindBySubjectKeyIdentifier
}
