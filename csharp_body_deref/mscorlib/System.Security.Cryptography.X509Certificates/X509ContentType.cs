// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509ContentType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000354")]
public enum X509ContentType
{
	[Token(Token = "0x4000E2B")]
	Unknown = 0,
	[Token(Token = "0x4000E2C")]
	Cert = 1,
	[Token(Token = "0x4000E2D")]
	SerializedCert = 2,
	[Token(Token = "0x4000E2E")]
	Pfx = 3,
	[Token(Token = "0x4000E2F")]
	Pkcs12 = Pfx,
	[Token(Token = "0x4000E30")]
	SerializedStore = 4,
	[Token(Token = "0x4000E31")]
	Pkcs7 = 5,
	[Token(Token = "0x4000E32")]
	Authenticode = 6
}
