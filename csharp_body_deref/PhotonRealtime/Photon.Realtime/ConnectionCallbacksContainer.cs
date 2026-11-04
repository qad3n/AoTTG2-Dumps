// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.ConnectionCallbacksContainer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadBalancingClient.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200001A")]
public class ConnectionCallbacksContainer : List<IConnectionCallbacks>, IConnectionCallbacks
{
	[Token(Token = "0x40000C3")]
	[FieldOffset(Offset = "0x28")]
	private readonly LoadBalancingClient client;

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x1D12B00", Offset = "0x1D11100", VA = "0x181D12B00")]
	public ConnectionCallbacksContainer(LoadBalancingClient client)
	{
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x1D12260", Offset = "0x1D10860", VA = "0x181D12260", Slot = "35")]
	public void OnConnected()
	{
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x1D120C0", Offset = "0x1D106C0", VA = "0x181D120C0", Slot = "36")]
	public void OnConnectedToMaster()
	{
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x1D12940", Offset = "0x1D10F40", VA = "0x181D12940", Slot = "38")]
	public void OnRegionListReceived(RegionHandler regionHandler)
	{
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x1D12780", Offset = "0x1D10D80", VA = "0x181D12780", Slot = "37")]
	public void OnDisconnected(DisconnectCause cause)
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x1D125C0", Offset = "0x1D10BC0", VA = "0x181D125C0", Slot = "39")]
	public void OnCustomAuthenticationResponse(Dictionary<string, object> data)
	{
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x1D12400", Offset = "0x1D10A00", VA = "0x181D12400", Slot = "40")]
	public void OnCustomAuthenticationFailed(string debugMessage)
	{
	}
}
