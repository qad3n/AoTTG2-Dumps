// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.LobbyCallbacksContainer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadBalancingClient.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3EBF510", Offset = "0x3EBF510", VA = "0x3EBF510")]
	public LobbyCallbacksContainer(LoadBalancingClient client)
	{
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x3EC7720", Offset = "0x3EC7720", VA = "0x3EC7720", Slot = "35")]
	public void OnJoinedLobby()
	{
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x3EC7900", Offset = "0x3EC7900", VA = "0x3EC7900", Slot = "36")]
	public void OnLeftLobby()
	{
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x3EC7520", Offset = "0x3EC7520", VA = "0x3EC7520", Slot = "37")]
	public void OnRoomListUpdate(List<RoomInfo> roomList)
	{
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x3ECAA00", Offset = "0x3ECAA00", VA = "0x3ECAA00", Slot = "38")]
	public void OnLobbyStatisticsUpdate(List<TypedLobbyInfo> lobbyStatistics)
	{
	}
}
