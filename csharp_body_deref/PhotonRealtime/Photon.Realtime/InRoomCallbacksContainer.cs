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
	[Address(RVA = "0x1D163C0", Offset = "0x1D149C0", VA = "0x181D163C0")]
	public InRoomCallbacksContainer(LoadBalancingClient client)
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x1D15D00", Offset = "0x1D14300", VA = "0x181D15D00", Slot = "35")]
	public void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x1D15EA0", Offset = "0x1D144A0", VA = "0x181D15EA0", Slot = "36")]
	public void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x1D16200", Offset = "0x1D14800", VA = "0x181D16200", Slot = "37")]
	public void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x1D16050", Offset = "0x1D14650", VA = "0x181D16050", Slot = "38")]
	public void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProp)
	{
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x1D15B40", Offset = "0x1D14140", VA = "0x181D15B40", Slot = "39")]
	public void OnMasterClientSwitched(Player newMasterClient)
	{
	}
}
