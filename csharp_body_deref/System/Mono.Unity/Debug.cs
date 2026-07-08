using Il2CppDummyDll;
using Mono.Security.Interface;

namespace Mono.Unity;

[Token(Token = "0x2000009")]
internal static class Debug
{
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4534A20", Offset = "0x4534A20", VA = "0x4534A20")]
	public static void CheckAndThrow(UnityTls.unitytls_errorstate errorState, string context, AlertDescription defaultAlert = AlertDescription.InternalError)
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4534AC0", Offset = "0x4534AC0", VA = "0x4534AC0")]
	public static void CheckAndThrow(UnityTls.unitytls_errorstate errorState, UnityTls.unitytls_x509verify_result verifyResult, string context, AlertDescription defaultAlert = AlertDescription.InternalError)
	{
	}
}
