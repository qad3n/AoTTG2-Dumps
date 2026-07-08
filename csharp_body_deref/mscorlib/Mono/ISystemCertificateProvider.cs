using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;

namespace Mono;

[Token(Token = "0x2000010")]
internal interface ISystemCertificateProvider
{
	[Token(Token = "0x6000039")]
	System.Security.Cryptography.X509Certificates.X509CertificateImpl Import(byte[] data, Mono.CertificateImportFlags importFlags = Mono.CertificateImportFlags.None);

	[Token(Token = "0x600003A")]
	System.Security.Cryptography.X509Certificates.X509CertificateImpl Import(byte[] data, Microsoft.Win32.SafeHandles.SafePasswordHandle password, X509KeyStorageFlags keyStorageFlags, Mono.CertificateImportFlags importFlags = Mono.CertificateImportFlags.None);

	[Token(Token = "0x600003B")]
	System.Security.Cryptography.X509Certificates.X509CertificateImpl Import(X509Certificate cert, Mono.CertificateImportFlags importFlags = Mono.CertificateImportFlags.None);
}
