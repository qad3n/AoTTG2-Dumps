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
	[Address(RVA = "0x56ABE50", Offset = "0x56AAE50", VA = "0x56ABE50")]
	public ConnectionCallbacksContainer(LoadBalancingClient client)
	{
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x56B54F0", Offset = "0x56B44F0", VA = "0x56B54F0", Slot = "35")]
	public void OnConnected()
	{
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x56B3710", Offset = "0x56B2710", VA = "0x56B3710", Slot = "36")]
	public void OnConnectedToMaster()
	{
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x56B3AD0", Offset = "0x56B2AD0", VA = "0x56B3AD0", Slot = "38")]
	public void OnRegionListReceived(RegionHandler regionHandler)
	{
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x56B5890", Offset = "0x56B4890", VA = "0x56B5890", Slot = "37")]
	public void OnDisconnected(DisconnectCause cause)
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x56B38E0", Offset = "0x56B28E0", VA = "0x56B38E0", Slot = "39")]
	public void OnCustomAuthenticationResponse(Dictionary<string, object> data)
	{
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x56B3120", Offset = "0x56B2120", VA = "0x56B3120", Slot = "40")]
	public void OnCustomAuthenticationFailed(string debugMessage)
	{
	}
}
