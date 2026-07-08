using System.Collections.Generic;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200001F")]
internal class LobbyCallbacksContainer : List<ILobbyCallbacks>, ILobbyCallbacks
{
	[Token(Token = "0x40000CB")]
	[FieldOffset(Offset = "0x28")]
	private readonly LoadBalancingClient client;

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x3BC9BC0", Offset = "0x3BC9BC0", VA = "0x3BC9BC0")]
	public LobbyCallbacksContainer(LoadBalancingClient client)
	{
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x3BD1DD0", Offset = "0x3BD1DD0", VA = "0x3BD1DD0", Slot = "35")]
	public void OnJoinedLobby()
	{
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x3BD1FB0", Offset = "0x3BD1FB0", VA = "0x3BD1FB0", Slot = "36")]
	public void OnLeftLobby()
	{
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x3BD1BD0", Offset = "0x3BD1BD0", VA = "0x3BD1BD0", Slot = "37")]
	public void OnRoomListUpdate(List<RoomInfo> roomList)
	{
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x3BD50B0", Offset = "0x3BD50B0", VA = "0x3BD50B0", Slot = "38")]
	public void OnLobbyStatisticsUpdate(List<TypedLobbyInfo> lobbyStatistics)
	{
	}
}
