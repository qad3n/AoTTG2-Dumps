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
		[Address(RVA = "0x4E74C50", Offset = "0x4E74C50", VA = "0x4E74C50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001BBF")]
	[Address(RVA = "0x4E73590", Offset = "0x4E73590", VA = "0x4E73590")]
	public static System.Security.Cryptography.X509Certificates.X509CertificateImpl InitFromCertificate(X509Certificate cert)
	{
		return null;
	}

	[Token(Token = "0x6001BC0")]
	[Address(RVA = "0x4E73490", Offset = "0x4E73490", VA = "0x4E73490")]
	public static System.Security.Cryptography.X509Certificates.X509CertificateImpl InitFromCertificate(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
	{
		return null;
	}

	[Token(Token = "0x6001BC1")]
	[Address(RVA = "0x4E744D0", Offset = "0x4E744D0", VA = "0x4E744D0")]
	public static bool IsValid(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BC2")]
	[Address(RVA = "0x4E74870", Offset = "0x4E74870", VA = "0x4E74870")]
	internal static void ThrowIfContextInvalid(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
	{
	}

	[Token(Token = "0x6001BC3")]
	[Address(RVA = "0x4E748F0", Offset = "0x4E748F0", VA = "0x4E748F0")]
	internal static Exception GetInvalidContextException()
	{
		return null;
	}

	[Token(Token = "0x6001BC4")]
	[Address(RVA = "0x4E73340", Offset = "0x4E73340", VA = "0x4E73340")]
	public static System.Security.Cryptography.X509Certificates.X509CertificateImpl Import(byte[] rawData)
	{
		return null;
	}

	[Token(Token = "0x6001BC5")]
	[Address(RVA = "0x4E74D40", Offset = "0x4E74D40", VA = "0x4E74D40")]
	public static System.Security.Cryptography.X509Certificates.X509CertificateImpl Import(byte[] rawData, Microsoft.Win32.SafeHandles.SafePasswordHandle password, X509KeyStorageFlags keyStorageFlags)
	{
		return null;
	}
}
