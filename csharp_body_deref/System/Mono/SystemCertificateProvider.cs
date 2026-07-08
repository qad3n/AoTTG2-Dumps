using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;

namespace Mono;

[Token(Token = "0x2000002")]
internal class SystemCertificateProvider : Mono.ISystemCertificateProvider
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x0")]
	private static int initialized;

	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x8")]
	private static X509PalImpl x509pal;

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x10")]
	private static object syncRoot;

	[Token(Token = "0x17000001")]
	public X509PalImpl X509Pal
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x4533200", Offset = "0x4533200", VA = "0x4533200")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x4532F30", Offset = "0x4532F30", VA = "0x4532F30")]
	private static X509PalImpl GetX509Pal()
	{
		return null;
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4533020", Offset = "0x4533020", VA = "0x4533020")]
	private static void EnsureInitialized()
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x4533250", Offset = "0x4533250", VA = "0x4533250", Slot = "4")]
	public System.Security.Cryptography.X509Certificates.X509CertificateImpl Import(byte[] data, Mono.CertificateImportFlags importFlags = Mono.CertificateImportFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4533550", Offset = "0x4533550", VA = "0x4533550", Slot = "5")]
	private System.Security.Cryptography.X509Certificates.X509CertificateImpl Mono_002EISystemCertificateProvider_002EImport(byte[] data, Microsoft.Win32.SafeHandles.SafePasswordHandle password, X509KeyStorageFlags keyStorageFlags, Mono.CertificateImportFlags importFlags)
	{
		return null;
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4533560", Offset = "0x4533560", VA = "0x4533560")]
	public X509Certificate2Impl Import(byte[] data, Microsoft.Win32.SafeHandles.SafePasswordHandle password, X509KeyStorageFlags keyStorageFlags, Mono.CertificateImportFlags importFlags = Mono.CertificateImportFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4533710", Offset = "0x4533710", VA = "0x4533710", Slot = "6")]
	private System.Security.Cryptography.X509Certificates.X509CertificateImpl Mono_002EISystemCertificateProvider_002EImport(X509Certificate cert, Mono.CertificateImportFlags importFlags)
	{
		return null;
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x4533720", Offset = "0x4533720", VA = "0x4533720")]
	public X509Certificate2Impl Import(X509Certificate cert, Mono.CertificateImportFlags importFlags = Mono.CertificateImportFlags.None)
	{
		return null;
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x45338C0", Offset = "0x45338C0", VA = "0x45338C0")]
	public SystemCertificateProvider()
	{
	}
}
