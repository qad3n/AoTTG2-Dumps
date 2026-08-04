// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Net.Security.Private.CallbackHelpers
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Net.Security;
using Il2CppDummyDll;
using Mono.Security.Interface;

namespace Mono.Net.Security.Private;

[Token(Token = "0x2000065")]
internal static class CallbackHelpers
{
	[Token(Token = "0x6000169")]
	[Address(RVA = "0x452B640", Offset = "0x452B640", VA = "0x452B640")]
	internal static MonoRemoteCertificateValidationCallback PublicToMono(RemoteCertificateValidationCallback callback)
	{
		return null;
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x4524D40", Offset = "0x4524D40", VA = "0x4524D40")]
	internal static LocalCertSelectionCallback MonoToInternal(MonoLocalCertificateSelectionCallback callback)
	{
		return null;
	}
}
