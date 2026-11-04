// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Unity.UnityTlsStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using System.Net.Security;
using Il2CppDummyDll;
using Mono.Net.Security;
using Mono.Security.Interface;

namespace Mono.Unity;

[Token(Token = "0x2000044")]
internal class UnityTlsStream : MobileAuthenticatedStream
{
	[Token(Token = "0x600009F")]
	[Address(RVA = "0x24A6860", Offset = "0x24A4E60", VA = "0x1824A6860")]
	public UnityTlsStream(Stream innerStream, bool leaveInnerStreamOpen, SslStream owner, MonoTlsSettings settings, MobileTlsProvider provider)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x24A67F0", Offset = "0x24A4DF0", VA = "0x1824A67F0", Slot = "41")]
	protected override MobileTlsContext CreateContext(MonoSslAuthenticationOptions options)
	{
		return null;
	}
}
