// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Unity.UnityTlsConversions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x5E322E0", Offset = "0x5E312E0", VA = "0x5E322E0")]
	public static UnityTls.unitytls_protocol GetMinProtocol(SslProtocols protocols)
	{
		return default(UnityTls.unitytls_protocol);
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x5E32310", Offset = "0x5E31310", VA = "0x5E32310")]
	public static UnityTls.unitytls_protocol GetMaxProtocol(SslProtocols protocols)
	{
		return default(UnityTls.unitytls_protocol);
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x5E33260", Offset = "0x5E32260", VA = "0x5E33260")]
	public static TlsProtocols ConvertProtocolVersion(UnityTls.unitytls_protocol protocol)
	{
		return default(TlsProtocols);
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x5E2F440", Offset = "0x5E2E440", VA = "0x5E2F440")]
	public static AlertDescription VerifyResultToAlertDescription(UnityTls.unitytls_x509verify_result verifyResult, AlertDescription defaultAlert = AlertDescription.InternalError)
	{
		return default(AlertDescription);
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x5E348A0", Offset = "0x5E338A0", VA = "0x5E348A0")]
	public static SslPolicyErrors VerifyResultToPolicyErrror(UnityTls.unitytls_x509verify_result verifyResult)
	{
		return default(SslPolicyErrors);
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x5E348D0", Offset = "0x5E338D0", VA = "0x5E348D0")]
	public static X509ChainStatusFlags VerifyResultToChainStatus(UnityTls.unitytls_x509verify_result verifyResult)
	{
		return default(X509ChainStatusFlags);
	}
}
