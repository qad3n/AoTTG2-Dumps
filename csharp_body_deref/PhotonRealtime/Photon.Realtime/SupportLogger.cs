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
		[Address(RVA = "0x3BE0A10", Offset = "0x3BE0A10", VA = "0x3BE0A10")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x3BE0A20", Offset = "0x3BE0A20", VA = "0x3BE0A20")]
		set
		{
		}
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x3BE0A80", Offset = "0x3BE0A80", VA = "0x3BE0A80")]
	protected void Start()
	{
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x3BE1670", Offset = "0x3BE1670", VA = "0x3BE1670")]
	protected void OnDestroy()
	{
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x3BE16D0", Offset = "0x3BE16D0", VA = "0x3BE16D0")]
	protected void OnApplicationPause(bool pause)
	{
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x3BE19E0", Offset = "0x3BE19E0", VA = "0x3BE19E0")]
	protected void OnApplicationQuit()
	{
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x3BE19F0", Offset = "0x3BE19F0", VA = "0x3BE19F0")]
	public void StartLogStats()
	{
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x3BE1A30", Offset = "0x3BE1A30", VA = "0x3BE1A30")]
	public void StopLogStats()
	{
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x3BE1A70", Offset = "0x3BE1A70", VA = "0x3BE1A70")]
	private void StartTrackValues()
	{
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x3BE1AB0", Offset = "0x3BE1AB0", VA = "0x3BE1AB0")]
	private void StopTrackValues()
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x3BE17E0", Offset = "0x3BE17E0", VA = "0x3BE17E0")]
	private string GetFormattedTimestamp()
	{
		return null;
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x3BE1AF0", Offset = "0x3BE1AF0", VA = "0x3BE1AF0")]
	private void TrackValues()
	{
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x3BE1B30", Offset = "0x3BE1B30", VA = "0x3BE1B30")]
	public void LogStats()
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x3BE0B10", Offset = "0x3BE0B10", VA = "0x3BE0B10")]
	private void LogBasics()
	{
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x3BE1D70", Offset = "0x3BE1D70", VA = "0x3BE1D70", Slot = "4")]
	public void OnConnected()
	{
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x3BE1EF0", Offset = "0x3BE1EF0", VA = "0x3BE1EF0", Slot = "5")]
	public void OnConnectedToMaster()
	{
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x3BE1F70", Offset = "0x3BE1F70", VA = "0x3BE1F70", Slot = "10")]
	public void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x3BE1FF0", Offset = "0x3BE1FF0", VA = "0x3BE1FF0", Slot = "22")]
	public void OnJoinedLobby()
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x3BE20C0", Offset = "0x3BE20C0", VA = "0x3BE20C0", Slot = "23")]
	public void OnLeftLobby()
	{
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x3BE2140", Offset = "0x3BE2140", VA = "0x3BE2140", Slot = "12")]
	public void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x3BE22D0", Offset = "0x3BE22D0", VA = "0x3BE22D0", Slot = "13")]
	public void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x3BE24D0", Offset = "0x3BE24D0", VA = "0x3BE24D0", Slot = "14")]
	public void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x3BE2660", Offset = "0x3BE2660", VA = "0x3BE2660", Slot = "15")]
	public void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x3BE27F0", Offset = "0x3BE27F0", VA = "0x3BE27F0", Slot = "11")]
	public void OnCreatedRoom()
	{
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x3BE29F0", Offset = "0x3BE29F0", VA = "0x3BE29F0", Slot = "16")]
	public void OnLeftRoom()
	{
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x3BE2A70", Offset = "0x3BE2A70", VA = "0x3BE2A70", Slot = "6")]
	public void OnDisconnected(DisconnectCause cause)
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x3BE2BC0", Offset = "0x3BE2BC0", VA = "0x3BE2BC0", Slot = "7")]
	public void OnRegionListReceived(RegionHandler regionHandler)
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x3BE2C40", Offset = "0x3BE2C40", VA = "0x3BE2C40", Slot = "24")]
	public void OnRoomListUpdate(List<RoomInfo> roomList)
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x3BE2D00", Offset = "0x3BE2D00", VA = "0x3BE2D00", Slot = "17")]
	public void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x3BE2DC0", Offset = "0x3BE2DC0", VA = "0x3BE2DC0", Slot = "18")]
	public void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x3BE2E80", Offset = "0x3BE2E80", VA = "0x3BE2E80", Slot = "19")]
	public void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x3BE2F00", Offset = "0x3BE2F00", VA = "0x3BE2F00", Slot = "20")]
	public void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x3BE2F80", Offset = "0x3BE2F80", VA = "0x3BE2F80", Slot = "21")]
	public void OnMasterClientSwitched(Player newMasterClient)
	{
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x3BE3040", Offset = "0x3BE3040", VA = "0x3BE3040", Slot = "8")]
	public void OnCustomAuthenticationResponse(Dictionary<string, object> data)
	{
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x3BE3110", Offset = "0x3BE3110", VA = "0x3BE3110", Slot = "9")]
	public void OnCustomAuthenticationFailed(string debugMessage)
	{
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x3BE31B0", Offset = "0x3BE31B0", VA = "0x3BE31B0", Slot = "25")]
	public void OnLobbyStatisticsUpdate(List<TypedLobbyInfo> lobbyStatistics)
	{
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x3BE3230", Offset = "0x3BE3230", VA = "0x3BE3230", Slot = "26")]
	public void OnErrorInfo(ErrorInfo errorInfo)
	{
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x3BE32A0", Offset = "0x3BE32A0", VA = "0x3BE32A0")]
	public SupportLogger()
	{
	}
}
