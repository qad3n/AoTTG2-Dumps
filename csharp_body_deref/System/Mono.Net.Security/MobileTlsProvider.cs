using System.IO;
using System.Net.Security;
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;
using Mono.Security.Interface;

namespace Mono.Net.Security;

[Token(Token = "0x200005D")]
internal abstract class MobileTlsProvider : MonoTlsProvider
{
	[Token(Token = "0x6000136")]
	internal abstract MobileAuthenticatedStream CreateSslStream(SslStream sslStream, Stream innerStream, bool leaveInnerStreamOpen, MonoTlsSettings settings);

	[Token(Token = "0x6000137")]
	internal abstract bool ValidateCertificate(ChainValidationHelper validator, string targetHost, bool serverMode, X509CertificateCollection certificates, bool wantsChain, ref X509Chain chain, ref SslPolicyErrors errors, ref int status11);

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x453B4B0", Offset = "0x453B4B0", VA = "0x453B4B0")]
	protected MobileTlsProvider()
	{
	}
}
