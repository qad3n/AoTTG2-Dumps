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
	[Address(RVA = "0x56E6220", Offset = "0x56E5220", VA = "0x56E6220", Slot = "28")]
	public virtual void OnEnable()
	{
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x56E6280", Offset = "0x56E5280", VA = "0x56E6280", Slot = "29")]
	public virtual void OnDisable()
	{
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x56E62E0", Offset = "0x56E52E0", VA = "0x56E62E0", Slot = "30")]
	public virtual void OnConnected()
	{
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x56E62F0", Offset = "0x56E52F0", VA = "0x56E62F0", Slot = "31")]
	public virtual void OnLeftRoom()
	{
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x56E6300", Offset = "0x56E5300", VA = "0x56E6300", Slot = "32")]
	public virtual void OnMasterClientSwitched(Player newMasterClient)
	{
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x56E6310", Offset = "0x56E5310", VA = "0x56E6310", Slot = "33")]
	public virtual void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x56E6320", Offset = "0x56E5320", VA = "0x56E6320", Slot = "34")]
	public virtual void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x56E6330", Offset = "0x56E5330", VA = "0x56E6330", Slot = "35")]
	public virtual void OnCreatedRoom()
	{
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x56E6340", Offset = "0x56E5340", VA = "0x56E6340", Slot = "36")]
	public virtual void OnJoinedLobby()
	{
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x56E6350", Offset = "0x56E5350", VA = "0x56E6350", Slot = "37")]
	public virtual void OnLeftLobby()
	{
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x56E6360", Offset = "0x56E5360", VA = "0x56E6360", Slot = "38")]
	public virtual void OnDisconnected(DisconnectCause cause)
	{
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x56E6370", Offset = "0x56E5370", VA = "0x56E6370", Slot = "39")]
	public virtual void OnRegionListReceived(RegionHandler regionHandler)
	{
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x56E6380", Offset = "0x56E5380", VA = "0x56E6380", Slot = "40")]
	public virtual void OnRoomListUpdate(List<RoomInfo> roomList)
	{
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x56E6390", Offset = "0x56E5390", VA = "0x56E6390", Slot = "41")]
	public virtual void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x56E63A0", Offset = "0x56E53A0", VA = "0x56E63A0", Slot = "42")]
	public virtual void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x56E63B0", Offset = "0x56E53B0", VA = "0x56E63B0", Slot = "43")]
	public virtual void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x56E63C0", Offset = "0x56E53C0", VA = "0x56E63C0", Slot = "44")]
	public virtual void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x56E63D0", Offset = "0x56E53D0", VA = "0x56E63D0", Slot = "45")]
	public virtual void OnConnectedToMaster()
	{
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x56E63E0", Offset = "0x56E53E0", VA = "0x56E63E0", Slot = "46")]
	public virtual void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x56E63F0", Offset = "0x56E53F0", VA = "0x56E63F0", Slot = "47")]
	public virtual void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x56E6400", Offset = "0x56E5400", VA = "0x56E6400", Slot = "48")]
	public virtual void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x56E6410", Offset = "0x56E5410", VA = "0x56E6410", Slot = "49")]
	public virtual void OnCustomAuthenticationResponse(Dictionary<string, object> data)
	{
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x56E6420", Offset = "0x56E5420", VA = "0x56E6420", Slot = "50")]
	public virtual void OnCustomAuthenticationFailed(string debugMessage)
	{
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x56E6430", Offset = "0x56E5430", VA = "0x56E6430", Slot = "51")]
	public virtual void OnWebRpcResponse(OperationResponse response)
	{
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x56E6440", Offset = "0x56E5440", VA = "0x56E6440", Slot = "52")]
	public virtual void OnLobbyStatisticsUpdate(List<TypedLobbyInfo> lobbyStatistics)
	{
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x56E6450", Offset = "0x56E5450", VA = "0x56E6450", Slot = "53")]
	public virtual void OnErrorInfo(ErrorInfo errorInfo)
	{
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x56E6460", Offset = "0x56E5460", VA = "0x56E6460")]
	public MonoBehaviourPunCallbacks()
	{
	}
}
