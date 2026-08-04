// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.SupportLogger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/SupportLogger.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using ExitGames.Client.Photon;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Realtime;

[Token(Token = "0x200004A")]
[DisallowMultipleComponent]
[AddComponentMenu("")]
public class SupportLogger : MonoBehaviour, IConnectionCallbacks, IMatchmakingCallbacks, IInRoomCallbacks, ILobbyCallbacks, IErrorInfoCallback
{
	[Token(Token = "0x400022C")]
	[FieldOffset(Offset = "0x20")]
	public bool LogTrafficStats;

	[Token(Token = "0x400022D")]
	[FieldOffset(Offset = "0x28")]
	private LoadBalancingClient client;

	[Token(Token = "0x400022E")]
	[FieldOffset(Offset = "0x30")]
	private Stopwatch startStopwatch;

	[Token(Token = "0x400022F")]
	[FieldOffset(Offset = "0x38")]
	private bool initialOnApplicationPauseSkipped;

	[Token(Token = "0x4000230")]
	[FieldOffset(Offset = "0x3C")]
	private int pingMax;

	[Token(Token = "0x4000231")]
	[FieldOffset(Offset = "0x40")]
	private int pingMin;

	[Token(Token = "0x1700006D")]
	public LoadBalancingClient Client
	{
		[Token(Token = "0x60001FB")]
		[Address(RVA = "0x3ED6360", Offset = "0x3ED6360", VA = "0x3ED6360")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x3ED6370", Offset = "0x3ED6370", VA = "0x3ED6370")]
		set
		{
		}
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x3ED63D0", Offset = "0x3ED63D0", VA = "0x3ED63D0")]
	protected void Start()
	{
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x3ED6FC0", Offset = "0x3ED6FC0", VA = "0x3ED6FC0")]
	protected void OnDestroy()
	{
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x3ED7020", Offset = "0x3ED7020", VA = "0x3ED7020")]
	protected void OnApplicationPause(bool pause)
	{
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x3ED7330", Offset = "0x3ED7330", VA = "0x3ED7330")]
	protected void OnApplicationQuit()
	{
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x3ED7340", Offset = "0x3ED7340", VA = "0x3ED7340")]
	public void StartLogStats()
	{
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x3ED7380", Offset = "0x3ED7380", VA = "0x3ED7380")]
	public void StopLogStats()
	{
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x3ED73C0", Offset = "0x3ED73C0", VA = "0x3ED73C0")]
	private void StartTrackValues()
	{
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x3ED7400", Offset = "0x3ED7400", VA = "0x3ED7400")]
	private void StopTrackValues()
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x3ED7130", Offset = "0x3ED7130", VA = "0x3ED7130")]
	private string GetFormattedTimestamp()
	{
		return null;
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x3ED7440", Offset = "0x3ED7440", VA = "0x3ED7440")]
	private void TrackValues()
	{
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x3ED7480", Offset = "0x3ED7480", VA = "0x3ED7480")]
	public void LogStats()
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x3ED6460", Offset = "0x3ED6460", VA = "0x3ED6460")]
	private void LogBasics()
	{
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x3ED76C0", Offset = "0x3ED76C0", VA = "0x3ED76C0", Slot = "4")]
	public void OnConnected()
	{
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x3ED7840", Offset = "0x3ED7840", VA = "0x3ED7840", Slot = "5")]
	public void OnConnectedToMaster()
	{
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x3ED78C0", Offset = "0x3ED78C0", VA = "0x3ED78C0", Slot = "10")]
	public void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x3ED7940", Offset = "0x3ED7940", VA = "0x3ED7940", Slot = "22")]
	public void OnJoinedLobby()
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x3ED7A10", Offset = "0x3ED7A10", VA = "0x3ED7A10", Slot = "23")]
	public void OnLeftLobby()
	{
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x3ED7A90", Offset = "0x3ED7A90", VA = "0x3ED7A90", Slot = "12")]
	public void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x3ED7C20", Offset = "0x3ED7C20", VA = "0x3ED7C20", Slot = "13")]
	public void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x3ED7E20", Offset = "0x3ED7E20", VA = "0x3ED7E20", Slot = "14")]
	public void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x3ED7FB0", Offset = "0x3ED7FB0", VA = "0x3ED7FB0", Slot = "15")]
	public void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x3ED8140", Offset = "0x3ED8140", VA = "0x3ED8140", Slot = "11")]
	public void OnCreatedRoom()
	{
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x3ED8340", Offset = "0x3ED8340", VA = "0x3ED8340", Slot = "16")]
	public void OnLeftRoom()
	{
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x3ED83C0", Offset = "0x3ED83C0", VA = "0x3ED83C0", Slot = "6")]
	public void OnDisconnected(DisconnectCause cause)
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x3ED8510", Offset = "0x3ED8510", VA = "0x3ED8510", Slot = "7")]
	public void OnRegionListReceived(RegionHandler regionHandler)
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x3ED8590", Offset = "0x3ED8590", VA = "0x3ED8590", Slot = "24")]
	public void OnRoomListUpdate(List<RoomInfo> roomList)
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x3ED8650", Offset = "0x3ED8650", VA = "0x3ED8650", Slot = "17")]
	public void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x3ED8710", Offset = "0x3ED8710", VA = "0x3ED8710", Slot = "18")]
	public void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x3ED87D0", Offset = "0x3ED87D0", VA = "0x3ED87D0", Slot = "19")]
	public void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x3ED8850", Offset = "0x3ED8850", VA = "0x3ED8850", Slot = "20")]
	public void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x3ED88D0", Offset = "0x3ED88D0", VA = "0x3ED88D0", Slot = "21")]
	public void OnMasterClientSwitched(Player newMasterClient)
	{
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x3ED8990", Offset = "0x3ED8990", VA = "0x3ED8990", Slot = "8")]
	public void OnCustomAuthenticationResponse(Dictionary<string, object> data)
	{
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x3ED8A60", Offset = "0x3ED8A60", VA = "0x3ED8A60", Slot = "9")]
	public void OnCustomAuthenticationFailed(string debugMessage)
	{
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x3ED8B00", Offset = "0x3ED8B00", VA = "0x3ED8B00", Slot = "25")]
	public void OnLobbyStatisticsUpdate(List<TypedLobbyInfo> lobbyStatistics)
	{
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x3ED8B80", Offset = "0x3ED8B80", VA = "0x3ED8B80", Slot = "26")]
	public void OnErrorInfo(ErrorInfo errorInfo)
	{
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x3ED8BF0", Offset = "0x3ED8BF0", VA = "0x3ED8BF0")]
	public SupportLogger()
	{
	}
}
