// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509Helper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;
using Mono;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000331")]
internal static class X509Helper
{
	[Token(Token = "0x1700031A")]
	private static Mono.ISystemCertificateProvider CertificateProvider
	{
		[Token(Token = "0x6001C03")]
		[Address(RVA = "0x5364400", Offset = "0x5363400", VA = "0x5364400")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C04")]
	[Address(RVA = "0x5362DB0", Offset = "0x5361DB0", VA = "0x5362DB0")]
	public static System.Security.Cryptography.X509Certificates.X509CertificateImpl InitFromCertificate(X509Certificate cert)
	{
		return null;
	}

	[Token(Token = "0x6001C05")]
	[Address(RVA = "0x5362CB0", Offset = "0x5361CB0", VA = "0x5362CB0")]
	public static System.Security.Cryptography.X509Certificates.X509CertificateImpl InitFromCertificate(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
	{
		return null;
	}

	[Token(Token = "0x6001C06")]
	[Address(RVA = "0x5363CB0", Offset = "0x5362CB0", VA = "0x5363CB0")]
	public static bool IsValid(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C07")]
	[Address(RVA = "0x5364050", Offset = "0x5363050", VA = "0x5364050")]
	internal static void ThrowIfContextInvalid(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
	{
	}

	[Token(Token = "0x6001C08")]
	[Address(RVA = "0x53640D0", Offset = "0x53630D0", VA = "0x53640D0")]
	internal static Exception GetInvalidContextException()
	{
		return null;
	}

	[Token(Token = "0x6001C09")]
	[Address(RVA = "0x5362B60", Offset = "0x5361B60", VA = "0x5362B60")]
	public static System.Security.Cryptography.X509Certificates.X509CertificateImpl Import(byte[] rawData)
	{
		return null;
	}

	[Token(Token = "0x6001C0A")]
	[Address(RVA = "0x53644F0", Offset = "0x53634F0", VA = "0x53644F0")]
	public static System.Security.Cryptography.X509Certificates.X509CertificateImpl Import(byte[] rawData, Microsoft.Win32.SafeHandles.SafePasswordHandle password, X509KeyStorageFlags keyStorageFlags)
	{
		return null;
	}
}
