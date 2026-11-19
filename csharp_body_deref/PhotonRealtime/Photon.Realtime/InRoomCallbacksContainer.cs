// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.InRoomCallbacksContainer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadBalancingClient.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200001C")]
internal class InRoomCallbacksContainer : List<IInRoomCallbacks>, IInRoomCallbacks
{
	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0x28")]
	private readonly LoadBalancingClient client;

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x56ABF50", Offset = "0x56AAF50", VA = "0x56ABF50")]
	public InRoomCallbacksContainer(LoadBalancingClient client)
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x56B6A50", Offset = "0x56B5A50", VA = "0x56B6A50", Slot = "35")]
	public void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x56B6E10", Offset = "0x56B5E10", VA = "0x56B6E10", Slot = "36")]
	public void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x56AFDF0", Offset = "0x56AEDF0", VA = "0x56AFDF0", Slot = "37")]
	public void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x56AF5C0", Offset = "0x56AE5C0", VA = "0x56AF5C0", Slot = "38")]
	public void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProp)
	{
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x56B6C20", Offset = "0x56B5C20", VA = "0x56B6C20", Slot = "39")]
	public void OnMasterClientSwitched(Player newMasterClient)
	{
	}
}
