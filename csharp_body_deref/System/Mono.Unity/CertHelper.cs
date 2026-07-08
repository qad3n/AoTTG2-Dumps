using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;

namespace Mono.Unity;

[Token(Token = "0x2000008")]
internal static class CertHelper
{
	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4534590", Offset = "0x4534590", VA = "0x4534590")]
	public unsafe static void AddCertificatesToNativeChain(UnityTls.unitytls_x509list* nativeCertificateChain, X509CertificateCollection certificates, UnityTls.unitytls_errorstate* errorState)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4534790", Offset = "0x4534790", VA = "0x4534790")]
	public unsafe static void AddCertificateToNativeChain(UnityTls.unitytls_x509list* nativeCertificateChain, X509Certificate certificate, UnityTls.unitytls_errorstate* errorState)
	{
	}
}
