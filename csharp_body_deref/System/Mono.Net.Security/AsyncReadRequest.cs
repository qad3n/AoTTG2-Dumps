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
	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x5E38340", Offset = "0x5E37340", VA = "0x5E38340")]
	public AsyncReadRequest(MobileAuthenticatedStream parent, bool sync, byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x5E38350", Offset = "0x5E37350", VA = "0x5E38350", Slot = "4")]
	protected override AsyncOperationStatus Run(AsyncOperationStatus status)
	{
		return default(AsyncOperationStatus);
	}
}
