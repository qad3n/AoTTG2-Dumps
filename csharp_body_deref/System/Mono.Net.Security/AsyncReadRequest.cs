using Il2CppDummyDll;

namespace Mono.Net.Security;

[Token(Token = "0x2000050")]
internal class AsyncReadRequest : AsyncReadOrWriteRequest
{
	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x453DFE0", Offset = "0x453DFE0", VA = "0x453DFE0")]
	public AsyncReadRequest(MobileAuthenticatedStream parent, bool sync, byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x453DFF0", Offset = "0x453DFF0", VA = "0x453DFF0", Slot = "4")]
	protected override AsyncOperationStatus Run(AsyncOperationStatus status)
	{
		return default(AsyncOperationStatus);
	}
}
