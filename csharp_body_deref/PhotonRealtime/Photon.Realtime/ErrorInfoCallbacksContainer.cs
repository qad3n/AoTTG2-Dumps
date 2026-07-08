using System.Collections.Generic;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000021")]
internal class ErrorInfoCallbacksContainer : List<IErrorInfoCallback>, IErrorInfoCallback
{
	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x28")]
	private LoadBalancingClient client;

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x3BC9CC0", Offset = "0x3BC9CC0", VA = "0x3BC9CC0")]
	public ErrorInfoCallbacksContainer(LoadBalancingClient client)
	{
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x3BD5330", Offset = "0x3BD5330", VA = "0x3BD5330", Slot = "35")]
	public void OnErrorInfo(ErrorInfo errorInfo)
	{
	}
}
