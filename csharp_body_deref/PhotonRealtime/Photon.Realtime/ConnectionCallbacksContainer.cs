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

[Token(Token = "0x200001C")]
public class ConnectionCallbacksContainer : List<IConnectionCallbacks>, IConnectionCallbacks
{
	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x28")]
	private readonly LoadBalancingClient client;

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x3EBF390", Offset = "0x3EBF390", VA = "0x3EBF390")]
	public ConnectionCallbacksContainer(LoadBalancingClient client)
	{
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x3EC8E60", Offset = "0x3EC8E60", VA = "0x3EC8E60", Slot = "35")]
	public void OnConnected()
	{
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x3EC6F30", Offset = "0x3EC6F30", VA = "0x3EC6F30", Slot = "36")]
	public void OnConnectedToMaster()
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x3EC7320", Offset = "0x3EC7320", VA = "0x3EC7320", Slot = "38")]
	public void OnRegionListReceived(RegionHandler regionHandler)
	{
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x3EC9230", Offset = "0x3EC9230", VA = "0x3EC9230", Slot = "37")]
	public void OnDisconnected(DisconnectCause cause)
	{
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x3EC7120", Offset = "0x3EC7120", VA = "0x3EC7120", Slot = "39")]
	public void OnCustomAuthenticationResponse(Dictionary<string, object> data)
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x3EC6930", Offset = "0x3EC6930", VA = "0x3EC6930", Slot = "40")]
	public void OnCustomAuthenticationFailed(string debugMessage)
	{
	}
}
