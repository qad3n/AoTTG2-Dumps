// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Security.SslPolicyErrors
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.Security;

[Token(Token = "0x20003CE")]
[Flags]
public enum SslPolicyErrors
{
	[Token(Token = "0x40010D9")]
	None = 0,
	[Token(Token = "0x40010DA")]
	RemoteCertificateNotAvailable = 1,
	[Token(Token = "0x40010DB")]
	RemoteCertificateNameMismatch = 2,
	[Token(Token = "0x40010DC")]
	RemoteCertificateChainErrors = 4
}
