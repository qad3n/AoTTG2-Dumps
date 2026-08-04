// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Interface.AlertDescription
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Security.Interface;

[Token(Token = "0x2000027")]
public enum AlertDescription : byte
{
	[Token(Token = "0x40000B0")]
	CloseNotify = 0,
	[Token(Token = "0x40000B1")]
	UnexpectedMessage = 10,
	[Token(Token = "0x40000B2")]
	BadRecordMAC = 20,
	[Token(Token = "0x40000B3")]
	DecryptionFailed_RESERVED = 21,
	[Token(Token = "0x40000B4")]
	RecordOverflow = 22,
	[Token(Token = "0x40000B5")]
	DecompressionFailure = 30,
	[Token(Token = "0x40000B6")]
	HandshakeFailure = 40,
	[Token(Token = "0x40000B7")]
	NoCertificate_RESERVED = 41,
	[Token(Token = "0x40000B8")]
	BadCertificate = 42,
	[Token(Token = "0x40000B9")]
	UnsupportedCertificate = 43,
	[Token(Token = "0x40000BA")]
	CertificateRevoked = 44,
	[Token(Token = "0x40000BB")]
	CertificateExpired = 45,
	[Token(Token = "0x40000BC")]
	CertificateUnknown = 46,
	[Token(Token = "0x40000BD")]
	IlegalParameter = 47,
	[Token(Token = "0x40000BE")]
	UnknownCA = 48,
	[Token(Token = "0x40000BF")]
	AccessDenied = 49,
	[Token(Token = "0x40000C0")]
	DecodeError = 50,
	[Token(Token = "0x40000C1")]
	DecryptError = 51,
	[Token(Token = "0x40000C2")]
	ExportRestriction = 60,
	[Token(Token = "0x40000C3")]
	ProtocolVersion = 70,
	[Token(Token = "0x40000C4")]
	InsuficientSecurity = 71,
	[Token(Token = "0x40000C5")]
	InternalError = 80,
	[Token(Token = "0x40000C6")]
	UserCancelled = 90,
	[Token(Token = "0x40000C7")]
	NoRenegotiation = 100,
	[Token(Token = "0x40000C8")]
	UnsupportedExtension = 110
}
