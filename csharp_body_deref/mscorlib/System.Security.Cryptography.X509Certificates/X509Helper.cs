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

[Token(Token = "0x2000358")]
internal static class X509Helper
{
	[Token(Token = "0x1700031B")]
	private static Mono.ISystemCertificateProvider CertificateProvider
	{
		[Token(Token = "0x6001C2C")]
		[Address(RVA = "0x19EC170", Offset = "0x19EA770", VA = "0x1819EC170")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C2D")]
	[Address(RVA = "0x19EC010", Offset = "0x19EA610", VA = "0x1819EC010")]
	public static System.Security.Cryptography.X509Certificates.X509CertificateImpl InitFromCertificate(X509Certificate cert)
	{
		return null;
	}

	[Token(Token = "0x6001C2E")]
	[Address(RVA = "0x19EC0E0", Offset = "0x19EA6E0", VA = "0x1819EC0E0")]
	public static System.Security.Cryptography.X509Certificates.X509CertificateImpl InitFromCertificate(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
	{
		return null;
	}

	[Token(Token = "0x6001C2F")]
	[Address(RVA = "0x19EC100", Offset = "0x19EA700", VA = "0x1819EC100")]
	public static bool IsValid(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C30")]
	[Address(RVA = "0x19EC120", Offset = "0x19EA720", VA = "0x1819EC120")]
	internal static void ThrowIfContextInvalid(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
	{
	}

	[Token(Token = "0x6001C31")]
	[Address(RVA = "0x19EBE00", Offset = "0x19EA400", VA = "0x1819EBE00")]
	internal static Exception GetInvalidContextException()
	{
		return null;
	}

	[Token(Token = "0x6001C32")]
	[Address(RVA = "0x19EBF50", Offset = "0x19EA550", VA = "0x1819EBF50")]
	public static System.Security.Cryptography.X509Certificates.X509CertificateImpl Import(byte[] rawData)
	{
		return null;
	}

	[Token(Token = "0x6001C33")]
	[Address(RVA = "0x19EBE70", Offset = "0x19EA470", VA = "0x1819EBE70")]
	public static System.Security.Cryptography.X509Certificates.X509CertificateImpl Import(byte[] rawData, Microsoft.Win32.SafeHandles.SafePasswordHandle password, X509KeyStorageFlags keyStorageFlags)
	{
		return null;
	}
}
