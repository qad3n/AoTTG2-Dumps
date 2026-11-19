// ==================== AoTTG2 cross-reference ====================
// Type: UI.KDRPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/KDRPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/KDRPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using ExitGames.Client.Photon;
using Il2CppDummyDll;
using Photon.Realtime;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000849")]
internal class KDRPanel : MonoBehaviour, IInRoomCallbacks, IMatchmakingCallbacks
{
	[Token(Token = "0x40029CA")]
	[FieldOffset(Offset = "0x20")]
	private ElementStyle _style;

	[Token(Token = "0x40029CB")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<int, PlayerKDRRow> _players;

	[Token(Token = "0x40029CC")]
	[FieldOffset(Offset = "0x30")]
	private Dictionary<string, TeamKDRRow> _teamHeaders;

	[Token(Token = "0x40029CD")]
	private const float MaxSyncDelay = 0.2f;

	[Token(Token = "0x40029CE")]
	[FieldOffset(Offset = "0x38")]
	private float _currentSyncDelay;

	[Token(Token = "0x40029CF")]
	[FieldOffset(Offset = "0x3C")]
	private KDRMode _kdrMode;

	[Token(Token = "0x40029D0")]
	[FieldOffset(Offset = "0x40")]
	private PVPMode _pvpMode;

	[Token(Token = "0x40029D1")]
	[FieldOffset(Offset = "0x48")]
	private string _defaultTeam;

	[Token(Token = "0x40029D2")]
	[FieldOffset(Offset = "0x50")]
	public bool _showScoreboardLoadout;

	[Token(Token = "0x40029D3")]
	[FieldOffset(Offset = "0x51")]
	public bool _showScoreboardStatus;

	[Token(Token = "0x6004F25")]
	[Address(RVA = "0x5C32030", Offset = "0x5C31030", VA = "0x5C32030")]
	public void Setup(ElementStyle style)
	{
	}

	[Token(Token = "0x6004F26")]
	[Address(RVA = "0x5C32670", Offset = "0x5C31670", VA = "0x5C32670")]
	private void Update()
	{
	}

	[Token(Token = "0x6004F27")]
	[Address(RVA = "0x5C32510", Offset = "0x5C31510", VA = "0x5C32510")]
	private void Sync()
	{
	}

	[Token(Token = "0x6004F28")]
	[Address(RVA = "0x5C326C0", Offset = "0x5C316C0", VA = "0x5C326C0")]
	private string GetPlayerTeam(Player player)
	{
		return null;
	}

	[Token(Token = "0x6004F29")]
	[Address(RVA = "0x5C327A0", Offset = "0x5C317A0", VA = "0x5C327A0")]
	private void ReorganizeLayout()
	{
	}

	[Token(Token = "0x6004F2A")]
	[Address(RVA = "0x5C32EA0", Offset = "0x5C31EA0", VA = "0x5C32EA0")]
	private void AddPlayer(Player player, bool redoLayout = false, bool isVisible = true)
	{
	}

	[Token(Token = "0x6004F2B")]
	[Address(RVA = "0x5C33130", Offset = "0x5C32130", VA = "0x5C33130")]
	private void RemovePlayer(Player player, bool redoLayout = false)
	{
	}

	[Token(Token = "0x6004F2C")]
	[Address(RVA = "0x5C32060", Offset = "0x5C31060", VA = "0x5C32060")]
	public void DestroyAndRecreate()
	{
	}

	[Token(Token = "0x6004F2D")]
	[Address(RVA = "0x5C33420", Offset = "0x5C32420", VA = "0x5C33420", Slot = "4")]
	public void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x6004F2E")]
	[Address(RVA = "0x5C334B0", Offset = "0x5C324B0", VA = "0x5C334B0", Slot = "5")]
	public void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x6004F2F")]
	[Address(RVA = "0x5C33540", Offset = "0x5C32540", VA = "0x5C33540", Slot = "7")]
	public void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
	}

	[Token(Token = "0x6004F30")]
	[Address(RVA = "0x5C338C0", Offset = "0x5C328C0", VA = "0x5C338C0", Slot = "12")]
	public void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6004F31")]
	[Address(RVA = "0x5C338D0", Offset = "0x5C328D0", VA = "0x5C338D0", Slot = "16")]
	public virtual void OnEnable()
	{
	}

	[Token(Token = "0x6004F32")]
	[Address(RVA = "0x5C33930", Offset = "0x5C32930", VA = "0x5C33930", Slot = "17")]
	public virtual void OnDisable()
	{
	}

	[Token(Token = "0x6004F33")]
	[Address(RVA = "0x5C339A0", Offset = "0x5C329A0", VA = "0x5C339A0", Slot = "6")]
	public void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x6004F34")]
	[Address(RVA = "0x5C339B0", Offset = "0x5C329B0", VA = "0x5C339B0", Slot = "8")]
	public void OnMasterClientSwitched(Player newMasterClient)
	{
	}

	[Token(Token = "0x6004F35")]
	[Address(RVA = "0x5C339C0", Offset = "0x5C329C0", VA = "0x5C339C0", Slot = "9")]
	public void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x6004F36")]
	[Address(RVA = "0x5C339D0", Offset = "0x5C329D0", VA = "0x5C339D0", Slot = "10")]
	public void OnCreatedRoom()
	{
	}

	[Token(Token = "0x6004F37")]
	[Address(RVA = "0x5C339E0", Offset = "0x5C329E0", VA = "0x5C339E0", Slot = "11")]
	public void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6004F38")]
	[Address(RVA = "0x5C339F0", Offset = "0x5C329F0", VA = "0x5C339F0", Slot = "13")]
	public void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6004F39")]
	[Address(RVA = "0x5C33A00", Offset = "0x5C32A00", VA = "0x5C33A00", Slot = "14")]
	public void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6004F3A")]
	[Address(RVA = "0x5C33A10", Offset = "0x5C32A10", VA = "0x5C33A10", Slot = "15")]
	public void OnLeftRoom()
	{
	}

	[Token(Token = "0x6004F3B")]
	[Address(RVA = "0x5C33A20", Offset = "0x5C32A20", VA = "0x5C33A20")]
	public KDRPanel()
	{
	}
}
