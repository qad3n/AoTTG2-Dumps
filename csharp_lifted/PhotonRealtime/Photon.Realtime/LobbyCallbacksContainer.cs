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

[Token(Token = "0x200001D")]
internal class LobbyCallbacksContainer : List<ILobbyCallbacks>, ILobbyCallbacks
{
	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0x28")]
	private readonly LoadBalancingClient client;

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x56ABFD0", Offset = "0x56AAFD0", VA = "0x56ABFD0")]
	public LobbyCallbacksContainer(LoadBalancingClient client)
	{
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x56B3EB0", Offset = "0x56B2EB0", VA = "0x56B3EB0", Slot = "35")]
	public void OnJoinedLobby()
	{
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x56B4080", Offset = "0x56B3080", VA = "0x56B4080", Slot = "36")]
	public void OnLeftLobby()
	{
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x56B3CC0", Offset = "0x56B2CC0", VA = "0x56B3CC0", Slot = "37")]
	public void OnRoomListUpdate(List<RoomInfo> roomList)
	{
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x56B7070", Offset = "0x56B6070", VA = "0x56B7070", Slot = "38")]
	public void OnLobbyStatisticsUpdate(List<TypedLobbyInfo> lobbyStatistics)
	{
	}
}
