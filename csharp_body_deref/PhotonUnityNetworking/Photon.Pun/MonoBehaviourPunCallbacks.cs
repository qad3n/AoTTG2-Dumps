// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.MonoBehaviourPunCallbacks
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/Code/PunClasses.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using ExitGames.Client.Photon;
using Il2CppDummyDll;
using Photon.Realtime;

namespace Photon.Pun;

[Token(Token = "0x200001F")]
public class MonoBehaviourPunCallbacks : MonoBehaviourPun, IConnectionCallbacks, IMatchmakingCallbacks, IInRoomCallbacks, ILobbyCallbacks, IWebRpcCallback, IErrorInfoCallback
{
	[Token(Token = "0x6000138")]
	[Address(RVA = "0x3EFAC10", Offset = "0x3EFAC10", VA = "0x3EFAC10", Slot = "28")]
	public virtual void OnEnable()
	{
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x3EFAC70", Offset = "0x3EFAC70", VA = "0x3EFAC70", Slot = "29")]
	public virtual void OnDisable()
	{
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x3EFACD0", Offset = "0x3EFACD0", VA = "0x3EFACD0", Slot = "30")]
	public virtual void OnConnected()
	{
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x3EFACE0", Offset = "0x3EFACE0", VA = "0x3EFACE0", Slot = "31")]
	public virtual void OnLeftRoom()
	{
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x3EFACF0", Offset = "0x3EFACF0", VA = "0x3EFACF0", Slot = "32")]
	public virtual void OnMasterClientSwitched(Player newMasterClient)
	{
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x3EFAD00", Offset = "0x3EFAD00", VA = "0x3EFAD00", Slot = "33")]
	public virtual void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x3EFAD10", Offset = "0x3EFAD10", VA = "0x3EFAD10", Slot = "34")]
	public virtual void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x3EFAD20", Offset = "0x3EFAD20", VA = "0x3EFAD20", Slot = "35")]
	public virtual void OnCreatedRoom()
	{
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x3EFAD30", Offset = "0x3EFAD30", VA = "0x3EFAD30", Slot = "36")]
	public virtual void OnJoinedLobby()
	{
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x3EFAD40", Offset = "0x3EFAD40", VA = "0x3EFAD40", Slot = "37")]
	public virtual void OnLeftLobby()
	{
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x3EFAD50", Offset = "0x3EFAD50", VA = "0x3EFAD50", Slot = "38")]
	public virtual void OnDisconnected(DisconnectCause cause)
	{
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x3EFAD60", Offset = "0x3EFAD60", VA = "0x3EFAD60", Slot = "39")]
	public virtual void OnRegionListReceived(RegionHandler regionHandler)
	{
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x3EFAD70", Offset = "0x3EFAD70", VA = "0x3EFAD70", Slot = "40")]
	public virtual void OnRoomListUpdate(List<RoomInfo> roomList)
	{
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x3EFAD80", Offset = "0x3EFAD80", VA = "0x3EFAD80", Slot = "41")]
	public virtual void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x3EFAD90", Offset = "0x3EFAD90", VA = "0x3EFAD90", Slot = "42")]
	public virtual void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x3EFADA0", Offset = "0x3EFADA0", VA = "0x3EFADA0", Slot = "43")]
	public virtual void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x3EFADB0", Offset = "0x3EFADB0", VA = "0x3EFADB0", Slot = "44")]
	public virtual void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x3EFADC0", Offset = "0x3EFADC0", VA = "0x3EFADC0", Slot = "45")]
	public virtual void OnConnectedToMaster()
	{
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x3EFADD0", Offset = "0x3EFADD0", VA = "0x3EFADD0", Slot = "46")]
	public virtual void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x3EFADE0", Offset = "0x3EFADE0", VA = "0x3EFADE0", Slot = "47")]
	public virtual void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x3EFADF0", Offset = "0x3EFADF0", VA = "0x3EFADF0", Slot = "48")]
	public virtual void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x3EFAE00", Offset = "0x3EFAE00", VA = "0x3EFAE00", Slot = "49")]
	public virtual void OnCustomAuthenticationResponse(Dictionary<string, object> data)
	{
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x3EFAE10", Offset = "0x3EFAE10", VA = "0x3EFAE10", Slot = "50")]
	public virtual void OnCustomAuthenticationFailed(string debugMessage)
	{
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x3EFAE20", Offset = "0x3EFAE20", VA = "0x3EFAE20", Slot = "51")]
	public virtual void OnWebRpcResponse(OperationResponse response)
	{
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x3EFAE30", Offset = "0x3EFAE30", VA = "0x3EFAE30", Slot = "52")]
	public virtual void OnLobbyStatisticsUpdate(List<TypedLobbyInfo> lobbyStatistics)
	{
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x3EFAE40", Offset = "0x3EFAE40", VA = "0x3EFAE40", Slot = "53")]
	public virtual void OnErrorInfo(ErrorInfo errorInfo)
	{
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x3EFAE50", Offset = "0x3EFAE50", VA = "0x3EFAE50")]
	public MonoBehaviourPunCallbacks()
	{
	}
}
