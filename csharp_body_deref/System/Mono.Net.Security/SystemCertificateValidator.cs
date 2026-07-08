using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;
using Mono.Security.Interface;

namespace Mono.Net.Security;

[Token(Token = "0x2000064")]
internal static class SystemCertificateValidator
{
	[Token(Token = "0x4000128")]
	[FieldOffset(Offset = "0x0")]
	private static bool is_macosx;

	[Token(Token = "0x4000129")]
	[FieldOffset(Offset = "0x4")]
	private static X509KeyUsageFlags s_flags;

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x4545410", Offset = "0x4545410", VA = "0x4545410")]
	static SystemCertificateValidator()
	{
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x453F4E0", Offset = "0x453F4E0", VA = "0x453F4E0")]
	internal static bool NeedsChain(MonoTlsSettings settings)
	{
		return default(bool);
	}
}
