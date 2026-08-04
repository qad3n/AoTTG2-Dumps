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

[Token(Token = "0x2000329")]
internal static class X509Helper
{
	[Token(Token = "0x17000319")]
	private static Mono.ISystemCertificateProvider CertificateProvider
	{
		[Token(Token = "0x6001BBE")]
		[Address(RVA = "0x3B5A770", Offset = "0x3B5A770", VA = "0x3B5A770")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001BBF")]
	[Address(RVA = "0x3B590B0", Offset = "0x3B590B0", VA = "0x3B590B0")]
	public static System.Security.Cryptography.X509Certificates.X509CertificateImpl InitFromCertificate(X509Certificate cert)
	{
		return null;
	}

	[Token(Token = "0x6001BC0")]
	[Address(RVA = "0x3B58FB0", Offset = "0x3B58FB0", VA = "0x3B58FB0")]
	public static System.Security.Cryptography.X509Certificates.X509CertificateImpl InitFromCertificate(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
	{
		return null;
	}

	[Token(Token = "0x6001BC1")]
	[Address(RVA = "0x3B59FF0", Offset = "0x3B59FF0", VA = "0x3B59FF0")]
	public static bool IsValid(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BC2")]
	[Address(RVA = "0x3B5A390", Offset = "0x3B5A390", VA = "0x3B5A390")]
	internal static void ThrowIfContextInvalid(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
	{
	}

	[Token(Token = "0x6001BC3")]
	[Address(RVA = "0x3B5A410", Offset = "0x3B5A410", VA = "0x3B5A410")]
	internal static Exception GetInvalidContextException()
	{
		return null;
	}

	[Token(Token = "0x6001BC4")]
	[Address(RVA = "0x3B58E60", Offset = "0x3B58E60", VA = "0x3B58E60")]
	public static System.Security.Cryptography.X509Certificates.X509CertificateImpl Import(byte[] rawData)
	{
		return null;
	}

	[Token(Token = "0x6001BC5")]
	[Address(RVA = "0x3B5A860", Offset = "0x3B5A860", VA = "0x3B5A860")]
	public static System.Security.Cryptography.X509Certificates.X509CertificateImpl Import(byte[] rawData, Microsoft.Win32.SafeHandles.SafePasswordHandle password, X509KeyStorageFlags keyStorageFlags)
	{
		return null;
	}
}
