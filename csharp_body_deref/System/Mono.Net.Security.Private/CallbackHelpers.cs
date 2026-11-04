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
	[Token(Token = "0x6000173")]
	[Address(RVA = "0x2490080", Offset = "0x248E680", VA = "0x182490080")]
	internal static MonoRemoteCertificateValidationCallback PublicToMono(RemoteCertificateValidationCallback callback)
	{
		return null;
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x248FFC0", Offset = "0x248E5C0", VA = "0x18248FFC0")]
	internal static LocalCertSelectionCallback MonoToInternal(MonoLocalCertificateSelectionCallback callback)
	{
		return null;
	}
}
