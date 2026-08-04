// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Net.Security.AsyncWriteRequest
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Net.Security;

[Token(Token = "0x2000051")]
internal class AsyncWriteRequest : AsyncReadOrWriteRequest
{
	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x4524420", Offset = "0x4524420", VA = "0x4524420")]
	public AsyncWriteRequest(MobileAuthenticatedStream parent, bool sync, byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x4524430", Offset = "0x4524430", VA = "0x4524430", Slot = "4")]
	protected override AsyncOperationStatus Run(AsyncOperationStatus status)
	{
		return default(AsyncOperationStatus);
	}
}
