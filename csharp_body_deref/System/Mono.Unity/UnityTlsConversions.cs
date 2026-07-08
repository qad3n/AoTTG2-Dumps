using System.Net.Security;
using System.Security.Authentication;
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;
using Mono.Security.Interface;

namespace Mono.Unity;

[Token(Token = "0x2000042")]
internal static class UnityTlsConversions
{
	[Token(Token = "0x600008D")]
	[Address(RVA = "0x4537B10", Offset = "0x4537B10", VA = "0x4537B10")]
	public static UnityTls.unitytls_protocol GetMinProtocol(SslProtocols protocols)
	{
		return default(UnityTls.unitytls_protocol);
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x4537B50", Offset = "0x4537B50", VA = "0x4537B50")]
	public static UnityTls.unitytls_protocol GetMaxProtocol(SslProtocols protocols)
	{
		return default(UnityTls.unitytls_protocol);
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x4538A90", Offset = "0x4538A90", VA = "0x4538A90")]
	public static TlsProtocols ConvertProtocolVersion(UnityTls.unitytls_protocol protocol)
	{
		return default(TlsProtocols);
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x4534BA0", Offset = "0x4534BA0", VA = "0x4534BA0")]
	public static AlertDescription VerifyResultToAlertDescription(UnityTls.unitytls_x509verify_result verifyResult, AlertDescription defaultAlert = AlertDescription.InternalError)
	{
		return default(AlertDescription);
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x453A4E0", Offset = "0x453A4E0", VA = "0x453A4E0")]
	public static SslPolicyErrors VerifyResultToPolicyErrror(UnityTls.unitytls_x509verify_result verifyResult)
	{
		return default(SslPolicyErrors);
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x453A510", Offset = "0x453A510", VA = "0x453A510")]
	public static X509ChainStatusFlags VerifyResultToChainStatus(UnityTls.unitytls_x509verify_result verifyResult)
	{
		return default(X509ChainStatusFlags);
	}
}
