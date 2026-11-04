// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.MatchMakingCallbacksContainer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadBalancingClient.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200001B")]
public class MatchMakingCallbacksContainer : List<IMatchmakingCallbacks>, IMatchmakingCallbacks
{
	[Token(Token = "0x40000C4")]
	[FieldOffset(Offset = "0x28")]
	private readonly LoadBalancingClient client;

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x1D24950", Offset = "0x1D22F50", VA = "0x181D24950")]
	public MatchMakingCallbacksContainer(LoadBalancingClient client)
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x1D23F50", Offset = "0x1D22550", VA = "0x181D23F50", Slot = "36")]
	public void OnCreatedRoom()
	{
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x1D24610", Offset = "0x1D22C10", VA = "0x181D24610", Slot = "38")]
	public void OnJoinedRoom()
	{
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x1D23D90", Offset = "0x1D22390", VA = "0x181D23D90", Slot = "37")]
	public void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x1D24290", Offset = "0x1D22890", VA = "0x181D24290", Slot = "40")]
	public void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x1D24450", Offset = "0x1D22A50", VA = "0x181D24450", Slot = "39")]
	public void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x1D247B0", Offset = "0x1D22DB0", VA = "0x181D247B0", Slot = "41")]
	public void OnLeftRoom()
	{
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x1D240F0", Offset = "0x1D226F0", VA = "0x181D240F0", Slot = "35")]
	public void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}
}
