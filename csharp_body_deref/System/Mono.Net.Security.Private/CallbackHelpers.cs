using System.Net.Security;
using Il2CppDummyDll;
using Mono.Security.Interface;

namespace Mono.Net.Security.Private;

[Token(Token = "0x2000065")]
internal static class CallbackHelpers
{
	[Token(Token = "0x6000169")]
	[Address(RVA = "0x4545450", Offset = "0x4545450", VA = "0x4545450")]
	internal static MonoRemoteCertificateValidationCallback PublicToMono(RemoteCertificateValidationCallback callback)
	{
		return null;
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x453EB50", Offset = "0x453EB50", VA = "0x453EB50")]
	internal static LocalCertSelectionCallback MonoToInternal(MonoLocalCertificateSelectionCallback callback)
	{
		return null;
	}
}
