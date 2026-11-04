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

[Token(Token = "0x200001E")]
internal class WebRpcCallbacksContainer : List<IWebRpcCallback>, IWebRpcCallback
{
	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x28")]
	private LoadBalancingClient client;

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x1D27130", Offset = "0x1D25730", VA = "0x181D27130")]
	public WebRpcCallbacksContainer(LoadBalancingClient client)
	{
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x1D26F90", Offset = "0x1D25590", VA = "0x181D26F90", Slot = "35")]
	public void OnWebRpcResponse(OperationResponse response)
	{
	}
}
