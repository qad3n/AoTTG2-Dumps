// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Interface.MonoLocalCertificateSelectionCallback
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;

namespace Mono.Security.Interface;

[Token(Token = "0x200002F")]
public delegate X509Certificate MonoLocalCertificateSelectionCallback(string targetHost, X509CertificateCollection localCertificates, X509Certificate remoteCertificate, string[] acceptableIssuers);
