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

[Token(Token = "0x2000048")]
[DisallowMultipleComponent]
[AddComponentMenu("")]
public class SupportLogger : MonoBehaviour, IConnectionCallbacks, IMatchmakingCallbacks, IInRoomCallbacks, ILobbyCallbacks, IErrorInfoCallback
{
	[Token(Token = "0x4000227")]
	[FieldOffset(Offset = "0x20")]
	public bool LogTrafficStats;

	[Token(Token = "0x4000228")]
	[FieldOffset(Offset = "0x28")]
	private LoadBalancingClient client;

	[Token(Token = "0x4000229")]
	[FieldOffset(Offset = "0x30")]
	private Stopwatch startStopwatch;

	[Token(Token = "0x400022A")]
	[FieldOffset(Offset = "0x38")]
	private bool initialOnApplicationPauseSkipped;

	[Token(Token = "0x400022B")]
	[FieldOffset(Offset = "0x3C")]
	private int pingMax;

	[Token(Token = "0x400022C")]
	[FieldOffset(Offset = "0x40")]
	private int pingMin;

	[Token(Token = "0x1700006D")]
	public LoadBalancingClient Client
	{
		[Token(Token = "0x60001F9")]
		[Address(RVA = "0x56C2650", Offset = "0x56C1650", VA = "0x56C2650")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001FA")]
		[Address(RVA = "0x56C2660", Offset = "0x56C1660", VA = "0x56C2660")]
		set
		{
		}
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x56C26C0", Offset = "0x56C16C0", VA = "0x56C26C0")]
	protected void Start()
	{
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x56C32A0", Offset = "0x56C22A0", VA = "0x56C32A0")]
	protected void OnDestroy()
	{
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x56C3300", Offset = "0x56C2300", VA = "0x56C3300")]
	protected void OnApplicationPause(bool pause)
	{
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x56C3600", Offset = "0x56C2600", VA = "0x56C3600")]
	protected void OnApplicationQuit()
	{
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x56C3610", Offset = "0x56C2610", VA = "0x56C3610")]
	public void StartLogStats()
	{
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x56C3650", Offset = "0x56C2650", VA = "0x56C3650")]
	public void StopLogStats()
	{
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x56C3690", Offset = "0x56C2690", VA = "0x56C3690")]
	private void StartTrackValues()
	{
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x56C36D0", Offset = "0x56C26D0", VA = "0x56C36D0")]
	private void StopTrackValues()
	{
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x56C3410", Offset = "0x56C2410", VA = "0x56C3410")]
	private string GetFormattedTimestamp()
	{
		return null;
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x56C3710", Offset = "0x56C2710", VA = "0x56C3710")]
	private void TrackValues()
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x56C3750", Offset = "0x56C2750", VA = "0x56C3750")]
	public void LogStats()
	{
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x56C2750", Offset = "0x56C1750", VA = "0x56C2750")]
	private void LogBasics()
	{
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x56C3990", Offset = "0x56C2990", VA = "0x56C3990", Slot = "4")]
	public void OnConnected()
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x56C3B10", Offset = "0x56C2B10", VA = "0x56C3B10", Slot = "5")]
	public void OnConnectedToMaster()
	{
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x56C3B90", Offset = "0x56C2B90", VA = "0x56C3B90", Slot = "10")]
	public void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x56C3C10", Offset = "0x56C2C10", VA = "0x56C3C10", Slot = "22")]
	public void OnJoinedLobby()
	{
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x56C3CE0", Offset = "0x56C2CE0", VA = "0x56C3CE0", Slot = "23")]
	public void OnLeftLobby()
	{
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x56C3D60", Offset = "0x56C2D60", VA = "0x56C3D60", Slot = "12")]
	public void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x56C3EF0", Offset = "0x56C2EF0", VA = "0x56C3EF0", Slot = "13")]
	public void OnJoinedRoom()
	{
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x56C40F0", Offset = "0x56C30F0", VA = "0x56C40F0", Slot = "14")]
	public void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x56C4280", Offset = "0x56C3280", VA = "0x56C4280", Slot = "15")]
	public void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x56C4410", Offset = "0x56C3410", VA = "0x56C4410", Slot = "11")]
	public void OnCreatedRoom()
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x56C4610", Offset = "0x56C3610", VA = "0x56C4610", Slot = "16")]
	public void OnLeftRoom()
	{
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x56C4690", Offset = "0x56C3690", VA = "0x56C4690", Slot = "6")]
	public void OnDisconnected(DisconnectCause cause)
	{
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x56C47E0", Offset = "0x56C37E0", VA = "0x56C47E0", Slot = "7")]
	public void OnRegionListReceived(RegionHandler regionHandler)
	{
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x56C4860", Offset = "0x56C3860", VA = "0x56C4860", Slot = "24")]
	public void OnRoomListUpdate(List<RoomInfo> roomList)
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x56C4910", Offset = "0x56C3910", VA = "0x56C4910", Slot = "17")]
	public void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x56C49D0", Offset = "0x56C39D0", VA = "0x56C49D0", Slot = "18")]
	public void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x56C4A90", Offset = "0x56C3A90", VA = "0x56C4A90", Slot = "19")]
	public void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x56C4B10", Offset = "0x56C3B10", VA = "0x56C4B10", Slot = "20")]
	public void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x56C4B90", Offset = "0x56C3B90", VA = "0x56C4B90", Slot = "21")]
	public void OnMasterClientSwitched(Player newMasterClient)
	{
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x56C4C50", Offset = "0x56C3C50", VA = "0x56C4C50", Slot = "8")]
	public void OnCustomAuthenticationResponse(Dictionary<string, object> data)
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x56C4D20", Offset = "0x56C3D20", VA = "0x56C4D20", Slot = "9")]
	public void OnCustomAuthenticationFailed(string debugMessage)
	{
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x56C4DC0", Offset = "0x56C3DC0", VA = "0x56C4DC0", Slot = "25")]
	public void OnLobbyStatisticsUpdate(List<TypedLobbyInfo> lobbyStatistics)
	{
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x56C4E40", Offset = "0x56C3E40", VA = "0x56C4E40", Slot = "26")]
	public void OnErrorInfo(ErrorInfo errorInfo)
	{
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x56C4EB0", Offset = "0x56C3EB0", VA = "0x56C4EB0")]
	public SupportLogger()
	{
	}
}
