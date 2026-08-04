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

[Token(Token = "0x200001D")]
public class MatchMakingCallbacksContainer : List<IMatchmakingCallbacks>, IMatchmakingCallbacks
{
	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x28")]
	private readonly LoadBalancingClient client;

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x3EBF410", Offset = "0x3EBF410", VA = "0x3EBF410")]
	public MatchMakingCallbacksContainer(LoadBalancingClient client)
	{
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x3EC4190", Offset = "0x3EC4190", VA = "0x3EC4190", Slot = "36")]
	public void OnCreatedRoom()
	{
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x3EC4380", Offset = "0x3EC4380", VA = "0x3EC4380", Slot = "38")]
	public void OnJoinedRoom()
	{
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x3EC4C80", Offset = "0x3EC4C80", VA = "0x3EC4C80", Slot = "37")]
	public void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x3EC4E80", Offset = "0x3EC4E80", VA = "0x3EC4E80", Slot = "40")]
	public void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x3EC4A80", Offset = "0x3EC4A80", VA = "0x3EC4A80", Slot = "39")]
	public void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x3EC9040", Offset = "0x3EC9040", VA = "0x3EC9040", Slot = "41")]
	public void OnLeftRoom()
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x3EC7AF0", Offset = "0x3EC7AF0", VA = "0x3EC7AF0", Slot = "35")]
	public void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}
}
