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
	[Address(RVA = "0x3BC9AC0", Offset = "0x3BC9AC0", VA = "0x3BC9AC0")]
	public MatchMakingCallbacksContainer(LoadBalancingClient client)
	{
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x3BCE840", Offset = "0x3BCE840", VA = "0x3BCE840", Slot = "36")]
	public void OnCreatedRoom()
	{
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x3BCEA30", Offset = "0x3BCEA30", VA = "0x3BCEA30", Slot = "38")]
	public void OnJoinedRoom()
	{
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x3BCF330", Offset = "0x3BCF330", VA = "0x3BCF330", Slot = "37")]
	public void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x3BCF530", Offset = "0x3BCF530", VA = "0x3BCF530", Slot = "40")]
	public void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x3BCF130", Offset = "0x3BCF130", VA = "0x3BCF130", Slot = "39")]
	public void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x3BD36F0", Offset = "0x3BD36F0", VA = "0x3BD36F0", Slot = "41")]
	public void OnLeftRoom()
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x3BD21A0", Offset = "0x3BD21A0", VA = "0x3BD21A0", Slot = "35")]
	public void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}
}
