// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Unity.Debug
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/SupportLogger.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Mono.Security.Interface;

namespace Mono.Unity;

[Token(Token = "0x2000009")]
internal static class Debug
{
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x24913B0", Offset = "0x248F9B0", VA = "0x1824913B0")]
	public static void CheckAndThrow(UnityTls.unitytls_errorstate errorState, string context, AlertDescription defaultAlert = AlertDescription.InternalError)
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x2491230", Offset = "0x248F830", VA = "0x182491230")]
	public static void CheckAndThrow(UnityTls.unitytls_errorstate errorState, UnityTls.unitytls_x509verify_result verifyResult, string context, AlertDescription defaultAlert = AlertDescription.InternalError)
	{
	}
}
