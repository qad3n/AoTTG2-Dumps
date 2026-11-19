// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509ContentType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x200032D")]
public enum X509ContentType
{
	[Token(Token = "0x4000D8B")]
	Unknown = 0,
	[Token(Token = "0x4000D8C")]
	Cert = 1,
	[Token(Token = "0x4000D8D")]
	SerializedCert = 2,
	[Token(Token = "0x4000D8E")]
	Pfx = 3,
	[Token(Token = "0x4000D8F")]
	Pkcs12 = Pfx,
	[Token(Token = "0x4000D90")]
	SerializedStore = 4,
	[Token(Token = "0x4000D91")]
	Pkcs7 = 5,
	[Token(Token = "0x4000D92")]
	Authenticode = 6
}
