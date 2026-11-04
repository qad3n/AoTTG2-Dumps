// ==================== AoTTG2 cross-reference ====================
// Type: Mono.ISystemCertificateProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;

namespace Mono;

[Token(Token = "0x200002E")]
internal interface ISystemCertificateProvider
{
	[Token(Token = "0x6000051")]
	System.Security.Cryptography.X509Certificates.X509CertificateImpl Import(byte[] data, Mono.CertificateImportFlags importFlags = Mono.CertificateImportFlags.None);

	[Token(Token = "0x6000052")]
	System.Security.Cryptography.X509Certificates.X509CertificateImpl Import(byte[] data, Microsoft.Win32.SafeHandles.SafePasswordHandle password, X509KeyStorageFlags keyStorageFlags, Mono.CertificateImportFlags importFlags = Mono.CertificateImportFlags.None);

	[Token(Token = "0x6000053")]
	System.Security.Cryptography.X509Certificates.X509CertificateImpl Import(X509Certificate cert, Mono.CertificateImportFlags importFlags = Mono.CertificateImportFlags.None);
}
