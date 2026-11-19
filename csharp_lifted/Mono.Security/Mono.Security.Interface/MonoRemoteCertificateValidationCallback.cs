// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Interface.MonoRemoteCertificateValidationCallback
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;

namespace Mono.Security.Interface;

[Token(Token = "0x200002E")]
public delegate bool MonoRemoteCertificateValidationCallback(string targetHost, X509Certificate certificate, X509Chain chain, MonoSslPolicyErrors sslPolicyErrors);
