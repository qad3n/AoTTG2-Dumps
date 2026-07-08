using System.Collections.Generic;
using ExitGames.Client.Photon;
using Il2CppDummyDll;
using Photon.Realtime;

namespace Photon.Pun;

[Token(Token = "0x200001F")]
public class MonoBehaviourPunCallbacks : MonoBehaviourPun, IConnectionCallbacks, IMatchmakingCallbacks, IInRoomCallbacks, ILobbyCallbacks, IWebRpcCallback, IErrorInfoCallback
{
	[Token(Token = "0x6000138")]
	[Address(RVA = "0x3C17710", Offset = "0x3C17710", VA = "0x3C17710", Slot = "28")]
	public virtual void OnEnable()
	{
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x3C17770", Offset = "0x3C17770", VA = "0x3C17770", Slot = "29")]
	public virtual void OnDisable()
	{
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x3C177D0", Offset = "0x3C177D0", VA = "0x3C177D0", Slot = "30")]
	public virtual void OnConnected()
	{
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x3C177E0", Offset = "0x3C177E0", VA = "0x3C177E0", Slot = "31")]
	public virtual void OnLeftRoom()
	{
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x3C177F0", Offset = "0x3C177F0", VA = "0x3C177F0", Slot = "32")]
	public virtual void OnMasterClientSwitched(Player newMasterClient)
	{
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x3C17800", Offset = "0x3C17800", VA = "0x3C17800", Slot = "33")]
	public virtual void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x3C17810", Offset = "0x3C17810", VA = "0x3C17810", Slot = "34")]
	public virtual void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x3C17820", Offset = "0x3C17820", VA = "0x3C17820", Slot = "35")]
	public virtual void OnCreatedRoom()
	{
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x3C17830", Offset = "0x3C17830", VA = "0x3C17830", Slot = "36")]
	public virtual void OnJoinedLobby()
	{
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x3C17840", Offset = "0x3C17840", VA = "0x3C17840", Slot = "37")]
	public virtual void OnLeftLobby()
	{
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x3C17850", Offset = "0x3C17850", VA = "0x3C17850", Slot = "38")]
	public virtual void OnDisconnected(DisconnectCause cause)
	{
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x3C17860", Offset = "0x3C17860", VA = "0x3C17860", Slot = "39")]
	public virtual void OnRegionListReceived(RegionHandler regionHandler)
	{
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x3C17870", Offset = "0x3C17870", VA = "0x3C17870", Slot = "40")]
	public virtual void OnRoomListUpdate(List<RoomInfo> roomList)
	{
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x3C17880", Offset = "0x3C17880", VA = "0x3C17880", Slot = "41")]
	public virtual void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x3C17890", Offset = "0x3C17890", VA = "0x3C17890", Slot = "42")]
	public virtual void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x3C178A0", Offset = "0x3C178A0", VA = "0x3C178A0", Slot = "43")]
	public virtual void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x3C178B0", Offset = "0x3C178B0", VA = "0x3C178B0", Slot = "44")]
	public virtual void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x3C178C0", Offset = "0x3C178C0", VA = "0x3C178C0", Slot = "45")]
	public virtual void OnConnectedToMaster()
	{
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x3C178D0", Offset = "0x3C178D0", VA = "0x3C178D0", Slot = "46")]
	public virtual void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x3C178E0", Offset = "0x3C178E0", VA = "0x3C178E0", Slot = "47")]
	public virtual void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x3C178F0", Offset = "0x3C178F0", VA = "0x3C178F0", Slot = "48")]
	public virtual void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x3C17900", Offset = "0x3C17900", VA = "0x3C17900", Slot = "49")]
	public virtual void OnCustomAuthenticationResponse(Dictionary<string, object> data)
	{
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x3C17910", Offset = "0x3C17910", VA = "0x3C17910", Slot = "50")]
	public virtual void OnCustomAuthenticationFailed(string debugMessage)
	{
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x3C17920", Offset = "0x3C17920", VA = "0x3C17920", Slot = "51")]
	public virtual void OnWebRpcResponse(OperationResponse response)
	{
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x3C17930", Offset = "0x3C17930", VA = "0x3C17930", Slot = "52")]
	public virtual void OnLobbyStatisticsUpdate(List<TypedLobbyInfo> lobbyStatistics)
	{
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x3C17940", Offset = "0x3C17940", VA = "0x3C17940", Slot = "53")]
	public virtual void OnErrorInfo(ErrorInfo errorInfo)
	{
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x3C17950", Offset = "0x3C17950", VA = "0x3C17950")]
	public MonoBehaviourPunCallbacks()
	{
	}
}
