using Il2CppDummyDll;

namespace Mono.Net.Security;

[Token(Token = "0x2000051")]
internal class AsyncWriteRequest : AsyncReadOrWriteRequest
{
	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x453E230", Offset = "0x453E230", VA = "0x453E230")]
	public AsyncWriteRequest(MobileAuthenticatedStream parent, bool sync, byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x453E240", Offset = "0x453E240", VA = "0x453E240", Slot = "4")]
	protected override AsyncOperationStatus Run(AsyncOperationStatus status)
	{
		return default(AsyncOperationStatus);
	}
}
