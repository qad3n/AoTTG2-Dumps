using Il2CppDummyDll;

namespace Mono.Net.Security;

[Token(Token = "0x200004E")]
internal class AsyncHandshakeRequest : AsyncProtocolRequest
{
	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x453D8F0", Offset = "0x453D8F0", VA = "0x453D8F0")]
	public AsyncHandshakeRequest(MobileAuthenticatedStream parent, bool sync)
	{
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x453D980", Offset = "0x453D980", VA = "0x453D980", Slot = "4")]
	protected override AsyncOperationStatus Run(AsyncOperationStatus status)
	{
		return default(AsyncOperationStatus);
	}
}
