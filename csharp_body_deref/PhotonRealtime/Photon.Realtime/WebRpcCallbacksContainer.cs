// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.WebRpcCallbacksContainer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadBalancingClient.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3EBF590", Offset = "0x3EBF590", VA = "0x3EBF590")]
	public WebRpcCallbacksContainer(LoadBalancingClient client)
	{
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x3EC7CD0", Offset = "0x3EC7CD0", VA = "0x3EC7CD0", Slot = "35")]
	public void OnWebRpcResponse(OperationResponse response)
	{
	}
}
