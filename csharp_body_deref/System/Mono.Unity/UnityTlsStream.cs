using System.IO;
using System.Net.Security;
using Il2CppDummyDll;
using Mono.Net.Security;
using Mono.Security.Interface;

namespace Mono.Unity;

[Token(Token = "0x2000044")]
internal class UnityTlsStream : MobileAuthenticatedStream
{
	[Token(Token = "0x600009E")]
	[Address(RVA = "0x453A720", Offset = "0x453A720", VA = "0x453A720")]
	public UnityTlsStream(Stream innerStream, bool leaveInnerStreamOpen, SslStream owner, MonoTlsSettings settings, MobileTlsProvider provider)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x453B6B0", Offset = "0x453B6B0", VA = "0x453B6B0", Slot = "41")]
	protected override MobileTlsContext CreateContext(MonoSslAuthenticationOptions options)
	{
		return null;
	}
}
