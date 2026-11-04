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

[Token(Token = "0x200001D")]
public class MonoBehaviourPunCallbacks : MonoBehaviourPun, IConnectionCallbacks, IMatchmakingCallbacks, IInRoomCallbacks, ILobbyCallbacks, IWebRpcCallback, IErrorInfoCallback
{
	[Token(Token = "0x6000136")]
	[Address(RVA = "0x1D2F630", Offset = "0x1D2DC30", VA = "0x181D2F630", Slot = "28")]
	public virtual void OnEnable()
	{
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x1D2F5E0", Offset = "0x1D2DBE0", VA = "0x181D2F5E0", Slot = "29")]
	public virtual void OnDisable()
	{
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "30")]
	public virtual void OnConnected()
	{
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "31")]
	public virtual void OnLeftRoom()
	{
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "32")]
	public virtual void OnMasterClientSwitched(Player newMasterClient)
	{
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "33")]
	public virtual void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "34")]
	public virtual void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "35")]
	public virtual void OnCreatedRoom()
	{
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "36")]
	public virtual void OnJoinedLobby()
	{
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "37")]
	public virtual void OnLeftLobby()
	{
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "38")]
	public virtual void OnDisconnected(DisconnectCause cause)
	{
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "39")]
	public virtual void OnRegionListReceived(RegionHandler regionHandler)
	{
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "40")]
	public virtual void OnRoomListUpdate(List<RoomInfo> roomList)
	{
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "41")]
	public virtual void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "42")]
	public virtual void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "43")]
	public virtual void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "44")]
	public virtual void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "45")]
	public virtual void OnConnectedToMaster()
	{
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "46")]
	public virtual void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "47")]
	public virtual void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "48")]
	public virtual void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "49")]
	public virtual void OnCustomAuthenticationResponse(Dictionary<string, object> data)
	{
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "50")]
	public virtual void OnCustomAuthenticationFailed(string debugMessage)
	{
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "51")]
	public virtual void OnWebRpcResponse(OperationResponse response)
	{
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "52")]
	public virtual void OnLobbyStatisticsUpdate(List<TypedLobbyInfo> lobbyStatistics)
	{
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "53")]
	public virtual void OnErrorInfo(ErrorInfo errorInfo)
	{
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public MonoBehaviourPunCallbacks()
	{
	}
}
