using System.Collections.Generic;
using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000020")]
internal class WebRpcCallbacksContainer : List<IWebRpcCallback>, IWebRpcCallback
{
	[Token(Token = "0x40000CC")]
	[FieldOffset(Offset = "0x28")]
	private LoadBalancingClient client;

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x3BC9C40", Offset = "0x3BC9C40", VA = "0x3BC9C40")]
	public WebRpcCallbacksContainer(LoadBalancingClient client)
	{
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x3BD2380", Offset = "0x3BD2380", VA = "0x3BD2380", Slot = "35")]
	public void OnWebRpcResponse(OperationResponse response)
	{
	}
}
