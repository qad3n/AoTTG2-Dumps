// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Interface.AlertDescription
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Security.Interface;

[Token(Token = "0x2000039")]
public enum AlertDescription : byte
{
	[Token(Token = "0x40000B6")]
	CloseNotify = 0,
	[Token(Token = "0x40000B7")]
	UnexpectedMessage = 10,
	[Token(Token = "0x40000B8")]
	BadRecordMAC = 20,
	[Token(Token = "0x40000B9")]
	DecryptionFailed_RESERVED = 21,
	[Token(Token = "0x40000BA")]
	RecordOverflow = 22,
	[Token(Token = "0x40000BB")]
	DecompressionFailure = 30,
	[Token(Token = "0x40000BC")]
	HandshakeFailure = 40,
	[Token(Token = "0x40000BD")]
	NoCertificate_RESERVED = 41,
	[Token(Token = "0x40000BE")]
	BadCertificate = 42,
	[Token(Token = "0x40000BF")]
	UnsupportedCertificate = 43,
	[Token(Token = "0x40000C0")]
	CertificateRevoked = 44,
	[Token(Token = "0x40000C1")]
	CertificateExpired = 45,
	[Token(Token = "0x40000C2")]
	CertificateUnknown = 46,
	[Token(Token = "0x40000C3")]
	IlegalParameter = 47,
	[Token(Token = "0x40000C4")]
	UnknownCA = 48,
	[Token(Token = "0x40000C5")]
	AccessDenied = 49,
	[Token(Token = "0x40000C6")]
	DecodeError = 50,
	[Token(Token = "0x40000C7")]
	DecryptError = 51,
	[Token(Token = "0x40000C8")]
	ExportRestriction = 60,
	[Token(Token = "0x40000C9")]
	ProtocolVersion = 70,
	[Token(Token = "0x40000CA")]
	InsuficientSecurity = 71,
	[Token(Token = "0x40000CB")]
	InternalError = 80,
	[Token(Token = "0x40000CC")]
	UserCancelled = 90,
	[Token(Token = "0x40000CD")]
	NoRenegotiation = 100,
	[Token(Token = "0x40000CE")]
	UnsupportedExtension = 110
}
