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
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001FA")]
		[Address(RVA = "0x1D2DF80", Offset = "0x1D2C580", VA = "0x181D2DF80")]
		set
		{
		}
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x1D2DE20", Offset = "0x1D2C420", VA = "0x181D2DE20")]
	protected void Start()
	{
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x1D2CEE0", Offset = "0x1D2B4E0", VA = "0x181D2CEE0")]
	protected void OnDestroy()
	{
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x1D2C6B0", Offset = "0x1D2ACB0", VA = "0x181D2C6B0")]
	protected void OnApplicationPause(bool pause)
	{
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x1D2C7F0", Offset = "0x1D2ADF0", VA = "0x181D2C7F0")]
	protected void OnApplicationQuit()
	{
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x1D2DD80", Offset = "0x1D2C380", VA = "0x181D2DD80")]
	public void StartLogStats()
	{
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x1D2DEB0", Offset = "0x1D2C4B0", VA = "0x181D2DEB0")]
	public void StopLogStats()
	{
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x1D2DDD0", Offset = "0x1D2C3D0", VA = "0x181D2DDD0")]
	private void StartTrackValues()
	{
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x1D2DEF0", Offset = "0x1D2C4F0", VA = "0x181D2DEF0")]
	private void StopTrackValues()
	{
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x1D2B7A0", Offset = "0x1D29DA0", VA = "0x181D2B7A0")]
	private string GetFormattedTimestamp()
	{
		return null;
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x1D2DF30", Offset = "0x1D2C530", VA = "0x181D2DF30")]
	private void TrackValues()
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x1D2C450", Offset = "0x1D2AA50", VA = "0x181D2C450")]
	public void LogStats()
	{
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x1D2B9A0", Offset = "0x1D29FA0", VA = "0x181D2B9A0")]
	private void LogBasics()
	{
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x1D2C880", Offset = "0x1D2AE80", VA = "0x181D2C880", Slot = "4")]
	public void OnConnected()
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x1D2C800", Offset = "0x1D2AE00", VA = "0x181D2C800", Slot = "5")]
	public void OnConnectedToMaster()
	{
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x1D2D100", Offset = "0x1D2B700", VA = "0x181D2D100", Slot = "10")]
	public void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x1D2D4A0", Offset = "0x1D2BAA0", VA = "0x181D2D4A0", Slot = "22")]
	public void OnJoinedLobby()
	{
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x1D2D750", Offset = "0x1D2BD50", VA = "0x181D2D750", Slot = "23")]
	public void OnLeftLobby()
	{
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x1D2CA00", Offset = "0x1D2B000", VA = "0x181D2CA00", Slot = "12")]
	public void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x1D2D570", Offset = "0x1D2BB70", VA = "0x181D2D570", Slot = "13")]
	public void OnJoinedRoom()
	{
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x1D2D310", Offset = "0x1D2B910", VA = "0x181D2D310", Slot = "14")]
	public void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x1D2D180", Offset = "0x1D2B780", VA = "0x181D2D180", Slot = "15")]
	public void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x1D2CB90", Offset = "0x1D2B190", VA = "0x181D2CB90", Slot = "11")]
	public void OnCreatedRoom()
	{
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x1D2D7D0", Offset = "0x1D2BDD0", VA = "0x181D2D7D0", Slot = "16")]
	public void OnLeftRoom()
	{
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x1D2CF40", Offset = "0x1D2B540", VA = "0x181D2CF40", Slot = "6")]
	public void OnDisconnected(DisconnectCause cause)
	{
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x1D2DBC0", Offset = "0x1D2C1C0", VA = "0x181D2DBC0", Slot = "7")]
	public void OnRegionListReceived(RegionHandler regionHandler)
	{
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x1D2DC40", Offset = "0x1D2C240", VA = "0x181D2DC40", Slot = "24")]
	public void OnRoomListUpdate(List<RoomInfo> roomList)
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x1D2D9A0", Offset = "0x1D2BFA0", VA = "0x181D2D9A0", Slot = "17")]
	public void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x1D2DA70", Offset = "0x1D2C070", VA = "0x181D2DA70", Slot = "18")]
	public void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x1D2DD00", Offset = "0x1D2C300", VA = "0x181D2DD00", Slot = "19")]
	public void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x1D2DB40", Offset = "0x1D2C140", VA = "0x181D2DB40", Slot = "20")]
	public void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x1D2D8D0", Offset = "0x1D2BED0", VA = "0x181D2D8D0", Slot = "21")]
	public void OnMasterClientSwitched(Player newMasterClient)
	{
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x1D2CE10", Offset = "0x1D2B410", VA = "0x181D2CE10", Slot = "8")]
	public void OnCustomAuthenticationResponse(Dictionary<string, object> data)
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x1D2CD70", Offset = "0x1D2B370", VA = "0x181D2CD70", Slot = "9")]
	public void OnCustomAuthenticationFailed(string debugMessage)
	{
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x1D2D850", Offset = "0x1D2BE50", VA = "0x181D2D850", Slot = "25")]
	public void OnLobbyStatisticsUpdate(List<TypedLobbyInfo> lobbyStatistics)
	{
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x1D2D090", Offset = "0x1D2B690", VA = "0x181D2D090", Slot = "26")]
	public void OnErrorInfo(ErrorInfo errorInfo)
	{
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x1D2DF70", Offset = "0x1D2C570", VA = "0x181D2DF70")]
	public SupportLogger()
	{
	}
}
