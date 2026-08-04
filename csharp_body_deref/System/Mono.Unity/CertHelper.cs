// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Unity.CertHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;

namespace Mono.Unity;

[Token(Token = "0x2000008")]
internal static class CertHelper
{
	[Token(Token = "0x6000023")]
	[Address(RVA = "0x451A780", Offset = "0x451A780", VA = "0x451A780")]
	public unsafe static void AddCertificatesToNativeChain(UnityTls.unitytls_x509list* nativeCertificateChain, X509CertificateCollection certificates, UnityTls.unitytls_errorstate* errorState)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x451A980", Offset = "0x451A980", VA = "0x451A980")]
	public unsafe static void AddCertificateToNativeChain(UnityTls.unitytls_x509list* nativeCertificateChain, X509Certificate certificate, UnityTls.unitytls_errorstate* errorState)
	{
	}
}
