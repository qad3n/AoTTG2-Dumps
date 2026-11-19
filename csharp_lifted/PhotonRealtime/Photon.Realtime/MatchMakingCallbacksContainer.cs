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
	[Address(RVA = "0x56ABED0", Offset = "0x56AAED0", VA = "0x56ABED0")]
	public MatchMakingCallbacksContainer(LoadBalancingClient client)
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x56B0BB0", Offset = "0x56AFBB0", VA = "0x56B0BB0", Slot = "36")]
	public void OnCreatedRoom()
	{
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x56B0D80", Offset = "0x56AFD80", VA = "0x56B0D80", Slot = "38")]
	public void OnJoinedRoom()
	{
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x56B1660", Offset = "0x56B0660", VA = "0x56B1660", Slot = "37")]
	public void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x56B1850", Offset = "0x56B0850", VA = "0x56B1850", Slot = "40")]
	public void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x56B1470", Offset = "0x56B0470", VA = "0x56B1470", Slot = "39")]
	public void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x56B56C0", Offset = "0x56B46C0", VA = "0x56B56C0", Slot = "41")]
	public void OnLeftRoom()
	{
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x56B4250", Offset = "0x56B3250", VA = "0x56B4250", Slot = "35")]
	public void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}
}
