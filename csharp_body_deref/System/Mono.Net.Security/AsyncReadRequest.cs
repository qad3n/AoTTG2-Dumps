// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Net.Security.AsyncReadRequest
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Net.Security;

[Token(Token = "0x2000050")]
internal class AsyncReadRequest : AsyncReadOrWriteRequest
{
	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x45241D0", Offset = "0x45241D0", VA = "0x45241D0")]
	public AsyncReadRequest(MobileAuthenticatedStream parent, bool sync, byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x45241E0", Offset = "0x45241E0", VA = "0x45241E0", Slot = "4")]
	protected override AsyncOperationStatus Run(AsyncOperationStatus status)
	{
		return default(AsyncOperationStatus);
	}
}
