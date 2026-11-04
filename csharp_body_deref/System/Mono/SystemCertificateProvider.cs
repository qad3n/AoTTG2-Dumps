// ==================== AoTTG2 cross-reference ====================
// Type: Mono.SystemCertificateProvider
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;
using Mono.Security.Interface;

namespace Mono;

[Token(Token = "0x2000002")]
internal class SystemCertificateProvider
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x0")]
	private static MonoTlsProvider provider;

	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x8")]
	private static int initialized;

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x10")]
	private static X509PalImpl x509pal;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x18")]
	private static object syncRoot;

	[Token(Token = "0x17000001")]
	public X509PalImpl X509Pal
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x249F800", Offset = "0x249DE00", VA = "0x18249F800")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x249F070", Offset = "0x249D670", VA = "0x18249F070")]
	private static X509PalImpl GetX509Pal()
	{
		return null;
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x249EED0", Offset = "0x249D4D0", VA = "0x18249EED0")]
	private static void EnsureInitialized()
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x249F280", Offset = "0x249D880", VA = "0x18249F280", Slot = "4")]
	public System.Security.Cryptography.X509Certificates.X509CertificateImpl Import(byte[] data, Mono.CertificateImportFlags importFlags = Mono.CertificateImportFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x249F550", Offset = "0x249DB50", VA = "0x18249F550", Slot = "5")]
	private System.Security.Cryptography.X509Certificates.X509CertificateImpl Mono_002EISystemCertificateProvider_002EImport(byte[] data, Microsoft.Win32.SafeHandles.SafePasswordHandle password, X509KeyStorageFlags keyStorageFlags, Mono.CertificateImportFlags importFlags)
	{
		return null;
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x249F320", Offset = "0x249D920", VA = "0x18249F320")]
	public X509Certificate2Impl Import(byte[] data, Microsoft.Win32.SafeHandles.SafePasswordHandle password, X509KeyStorageFlags keyStorageFlags, Mono.CertificateImportFlags importFlags = Mono.CertificateImportFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x249F610", Offset = "0x249DC10", VA = "0x18249F610", Slot = "6")]
	private System.Security.Cryptography.X509Certificates.X509CertificateImpl Mono_002EISystemCertificateProvider_002EImport(X509Certificate cert, Mono.CertificateImportFlags importFlags)
	{
		return null;
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x249F3E0", Offset = "0x249D9E0", VA = "0x18249F3E0")]
	public X509Certificate2Impl Import(X509Certificate cert, Mono.CertificateImportFlags importFlags = Mono.CertificateImportFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public SystemCertificateProvider()
	{
	}
}
