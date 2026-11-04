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

[Token(Token = "0x200079C")]
internal class KDRPanel : MonoBehaviour, IInRoomCallbacks, IMatchmakingCallbacks
{
	[Token(Token = "0x400264A")]
	[FieldOffset(Offset = "0x20")]
	private ElementStyle _style;

	[Token(Token = "0x400264B")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<int, PlayerKDRRow> _players;

	[Token(Token = "0x400264C")]
	[FieldOffset(Offset = "0x30")]
	private Dictionary<string, TeamKDRRow> _teamHeaders;

	[Token(Token = "0x400264D")]
	private const float MaxSyncDelay = 0.2f;

	[Token(Token = "0x400264E")]
	[FieldOffset(Offset = "0x38")]
	private float _currentSyncDelay;

	[Token(Token = "0x400264F")]
	[FieldOffset(Offset = "0x3C")]
	private KDRMode _kdrMode;

	[Token(Token = "0x4002650")]
	[FieldOffset(Offset = "0x40")]
	private PVPMode _pvpMode;

	[Token(Token = "0x4002651")]
	[FieldOffset(Offset = "0x48")]
	private string _defaultTeam;

	[Token(Token = "0x4002652")]
	[FieldOffset(Offset = "0x50")]
	public bool _showScoreboardLoadout;

	[Token(Token = "0x4002653")]
	[FieldOffset(Offset = "0x51")]
	public bool _showScoreboardStatus;

	[Token(Token = "0x60049F7")]
	[Address(RVA = "0x2257210", Offset = "0x2255810", VA = "0x182257210")]
	public void Setup(ElementStyle style)
	{
	}

	[Token(Token = "0x60049F8")]
	[Address(RVA = "0x2257410", Offset = "0x2255A10", VA = "0x182257410")]
	private void Update()
	{
	}

	[Token(Token = "0x60049F9")]
	[Address(RVA = "0x2257240", Offset = "0x2255840", VA = "0x182257240")]
	private void Sync()
	{
	}

	[Token(Token = "0x60049FA")]
	[Address(RVA = "0x2256380", Offset = "0x2254980", VA = "0x182256380")]
	private string GetPlayerTeam(Player player)
	{
		return null;
	}

	[Token(Token = "0x60049FB")]
	[Address(RVA = "0x2256CD0", Offset = "0x22552D0", VA = "0x182256CD0")]
	private void ReorganizeLayout()
	{
	}

	[Token(Token = "0x60049FC")]
	[Address(RVA = "0x2255C80", Offset = "0x2254280", VA = "0x182255C80")]
	private void AddPlayer(Player player, bool redoLayout = false, bool isVisible = true)
	{
	}

	[Token(Token = "0x60049FD")]
	[Address(RVA = "0x2256A00", Offset = "0x2255000", VA = "0x182256A00")]
	private void RemovePlayer(Player player, bool redoLayout = false)
	{
	}

	[Token(Token = "0x60049FE")]
	[Address(RVA = "0x2255F10", Offset = "0x2254510", VA = "0x182255F10")]
	public void DestroyAndRecreate()
	{
	}

	[Token(Token = "0x60049FF")]
	[Address(RVA = "0x2256530", Offset = "0x2254B30", VA = "0x182256530", Slot = "4")]
	public void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x6004A00")]
	[Address(RVA = "0x22565D0", Offset = "0x2254BD0", VA = "0x1822565D0", Slot = "5")]
	public void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x6004A01")]
	[Address(RVA = "0x2256660", Offset = "0x2254C60", VA = "0x182256660", Slot = "7")]
	public void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
	}

	[Token(Token = "0x6004A02")]
	[Address(RVA = "0x2256520", Offset = "0x2254B20", VA = "0x182256520", Slot = "12")]
	public void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6004A03")]
	[Address(RVA = "0x22564D0", Offset = "0x2254AD0", VA = "0x1822564D0", Slot = "16")]
	public virtual void OnEnable()
	{
	}

	[Token(Token = "0x6004A04")]
	[Address(RVA = "0x2256480", Offset = "0x2254A80", VA = "0x182256480", Slot = "17")]
	public virtual void OnDisable()
	{
	}

	[Token(Token = "0x6004A05")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	public void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x6004A06")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	public void OnMasterClientSwitched(Player newMasterClient)
	{
	}

	[Token(Token = "0x6004A07")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	public void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x6004A08")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "10")]
	public void OnCreatedRoom()
	{
	}

	[Token(Token = "0x6004A09")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "11")]
	public void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6004A0A")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "13")]
	public void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6004A0B")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "14")]
	public void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6004A0C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "15")]
	public void OnLeftRoom()
	{
	}

	[Token(Token = "0x6004A0D")]
	[Address(RVA = "0x2257450", Offset = "0x2255A50", VA = "0x182257450")]
	public KDRPanel()
	{
	}
}
