// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Net.Security.AsyncHandshakeRequest
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Net.Security;

[Token(Token = "0x200004E")]
internal class AsyncHandshakeRequest : AsyncProtocolRequest
{
	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x248F0D0", Offset = "0x248D6D0", VA = "0x18248F0D0")]
	public AsyncHandshakeRequest(MobileAuthenticatedStream parent, bool sync)
	{
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x248F0A0", Offset = "0x248D6A0", VA = "0x18248F0A0", Slot = "4")]
	protected override AsyncOperationStatus Run(AsyncOperationStatus status)
	{
		return default(AsyncOperationStatus);
	}
}
