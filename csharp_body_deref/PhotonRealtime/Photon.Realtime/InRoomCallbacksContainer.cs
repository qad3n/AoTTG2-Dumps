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

[Token(Token = "0x200001E")]
internal class InRoomCallbacksContainer : List<IInRoomCallbacks>, IInRoomCallbacks
{
	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0x28")]
	private readonly LoadBalancingClient client;

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x3EBF490", Offset = "0x3EBF490", VA = "0x3EBF490")]
	public InRoomCallbacksContainer(LoadBalancingClient client)
	{
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x3ECA3B0", Offset = "0x3ECA3B0", VA = "0x3ECA3B0", Slot = "35")]
	public void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x3ECA790", Offset = "0x3ECA790", VA = "0x3ECA790", Slot = "36")]
	public void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x3EC3340", Offset = "0x3EC3340", VA = "0x3EC3340", Slot = "37")]
	public void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x3EC2B00", Offset = "0x3EC2B00", VA = "0x3EC2B00", Slot = "38")]
	public void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProp)
	{
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x3ECA590", Offset = "0x3ECA590", VA = "0x3ECA590", Slot = "39")]
	public void OnMasterClientSwitched(Player newMasterClient)
	{
	}
}
