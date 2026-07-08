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
	[Address(RVA = "0x3BC9B40", Offset = "0x3BC9B40", VA = "0x3BC9B40")]
	public InRoomCallbacksContainer(LoadBalancingClient client)
	{
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x3BD4A60", Offset = "0x3BD4A60", VA = "0x3BD4A60", Slot = "35")]
	public void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x3BD4E40", Offset = "0x3BD4E40", VA = "0x3BD4E40", Slot = "36")]
	public void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x3BCD9F0", Offset = "0x3BCD9F0", VA = "0x3BCD9F0", Slot = "37")]
	public void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x3BCD1B0", Offset = "0x3BCD1B0", VA = "0x3BCD1B0", Slot = "38")]
	public void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProp)
	{
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x3BD4C40", Offset = "0x3BD4C40", VA = "0x3BD4C40", Slot = "39")]
	public void OnMasterClientSwitched(Player newMasterClient)
	{
	}
}
