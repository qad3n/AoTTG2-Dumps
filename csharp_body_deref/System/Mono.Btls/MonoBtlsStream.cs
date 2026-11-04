// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.MonoBtlsStream
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using System.Net.Security;
using Il2CppDummyDll;
using Mono.Net.Security;
using Mono.Security.Interface;

namespace Mono.Btls;

[Token(Token = "0x200008B")]
internal class MonoBtlsStream : MobileAuthenticatedStream
{
	[Token(Token = "0x6000271")]
	[Address(RVA = "0x28365B0", Offset = "0x2834BB0", VA = "0x1828365B0")]
	public MonoBtlsStream(Stream innerStream, bool leaveInnerStreamOpen, SslStream owner, MonoTlsSettings settings, MobileTlsProvider provider)
	{
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x2836540", Offset = "0x2834B40", VA = "0x182836540", Slot = "41")]
	protected override MobileTlsContext CreateContext(MonoSslAuthenticationOptions options)
	{
		return null;
	}
}
