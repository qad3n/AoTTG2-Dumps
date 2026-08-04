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
	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x4523AE0", Offset = "0x4523AE0", VA = "0x4523AE0")]
	public AsyncHandshakeRequest(MobileAuthenticatedStream parent, bool sync)
	{
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x4523B70", Offset = "0x4523B70", VA = "0x4523B70", Slot = "4")]
	protected override AsyncOperationStatus Run(AsyncOperationStatus status)
	{
		return default(AsyncOperationStatus);
	}
}
