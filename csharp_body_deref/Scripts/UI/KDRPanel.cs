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

[Token(Token = "0x2000640")]
internal class KDRPanel : MonoBehaviour, IInRoomCallbacks, IMatchmakingCallbacks
{
	[Token(Token = "0x4001E87")]
	[FieldOffset(Offset = "0x20")]
	private ElementStyle _style;

	[Token(Token = "0x4001E88")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<int, PlayerKDRRow> _players;

	[Token(Token = "0x4001E89")]
	[FieldOffset(Offset = "0x30")]
	private Dictionary<string, TeamKDRRow> _teamHeaders;

	[Token(Token = "0x4001E8A")]
	private const float MaxSyncDelay = 0.2f;

	[Token(Token = "0x4001E8B")]
	[FieldOffset(Offset = "0x38")]
	private float _currentSyncDelay;

	[Token(Token = "0x4001E8C")]
	[FieldOffset(Offset = "0x3C")]
	private KDRMode _kdrMode;

	[Token(Token = "0x4001E8D")]
	[FieldOffset(Offset = "0x40")]
	private PVPMode _pvpMode;

	[Token(Token = "0x4001E8E")]
	[FieldOffset(Offset = "0x48")]
	private string _defaultTeam;

	[Token(Token = "0x4001E8F")]
	[FieldOffset(Offset = "0x50")]
	public bool _showScoreboardLoadout;

	[Token(Token = "0x4001E90")]
	[FieldOffset(Offset = "0x51")]
	public bool _showScoreboardStatus;

	[Token(Token = "0x6003EF0")]
	[Address(RVA = "0x42CE400", Offset = "0x42CE400", VA = "0x42CE400")]
	public void Setup(ElementStyle style)
	{
	}

	[Token(Token = "0x6003EF1")]
	[Address(RVA = "0x42CEA90", Offset = "0x42CEA90", VA = "0x42CEA90")]
	private void Update()
	{
	}

	[Token(Token = "0x6003EF2")]
	[Address(RVA = "0x42CE940", Offset = "0x42CE940", VA = "0x42CE940")]
	private void Sync()
	{
	}

	[Token(Token = "0x6003EF3")]
	[Address(RVA = "0x42CEAE0", Offset = "0x42CEAE0", VA = "0x42CEAE0")]
	private string GetPlayerTeam(Player player)
	{
		return null;
	}

	[Token(Token = "0x6003EF4")]
	[Address(RVA = "0x42CEBC0", Offset = "0x42CEBC0", VA = "0x42CEBC0")]
	private void ReorganizeLayout()
	{
	}

	[Token(Token = "0x6003EF5")]
	[Address(RVA = "0x42CF1F0", Offset = "0x42CF1F0", VA = "0x42CF1F0")]
	private void AddPlayer(Player player, bool redoLayout = false, bool isVisible = true)
	{
	}

	[Token(Token = "0x6003EF6")]
	[Address(RVA = "0x42CF480", Offset = "0x42CF480", VA = "0x42CF480")]
	private void RemovePlayer(Player player, bool redoLayout = false)
	{
	}

	[Token(Token = "0x6003EF7")]
	[Address(RVA = "0x42CE430", Offset = "0x42CE430", VA = "0x42CE430")]
	public void DestroyAndRecreate()
	{
	}

	[Token(Token = "0x6003EF8")]
	[Address(RVA = "0x42CF760", Offset = "0x42CF760", VA = "0x42CF760", Slot = "4")]
	public void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x6003EF9")]
	[Address(RVA = "0x42CF7F0", Offset = "0x42CF7F0", VA = "0x42CF7F0", Slot = "5")]
	public void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x6003EFA")]
	[Address(RVA = "0x42CF880", Offset = "0x42CF880", VA = "0x42CF880", Slot = "7")]
	public void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
	}

	[Token(Token = "0x6003EFB")]
	[Address(RVA = "0x42CFC60", Offset = "0x42CFC60", VA = "0x42CFC60", Slot = "12")]
	public void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6003EFC")]
	[Address(RVA = "0x42CFC70", Offset = "0x42CFC70", VA = "0x42CFC70", Slot = "16")]
	public virtual void OnEnable()
	{
	}

	[Token(Token = "0x6003EFD")]
	[Address(RVA = "0x42CFCE0", Offset = "0x42CFCE0", VA = "0x42CFCE0", Slot = "17")]
	public virtual void OnDisable()
	{
	}

	[Token(Token = "0x6003EFE")]
	[Address(RVA = "0x42CFD50", Offset = "0x42CFD50", VA = "0x42CFD50", Slot = "6")]
	public void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x6003EFF")]
	[Address(RVA = "0x42CFD60", Offset = "0x42CFD60", VA = "0x42CFD60", Slot = "8")]
	public void OnMasterClientSwitched(Player newMasterClient)
	{
	}

	[Token(Token = "0x6003F00")]
	[Address(RVA = "0x42CFD70", Offset = "0x42CFD70", VA = "0x42CFD70", Slot = "9")]
	public void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x6003F01")]
	[Address(RVA = "0x42CFD80", Offset = "0x42CFD80", VA = "0x42CFD80", Slot = "10")]
	public void OnCreatedRoom()
	{
	}

	[Token(Token = "0x6003F02")]
	[Address(RVA = "0x42CFD90", Offset = "0x42CFD90", VA = "0x42CFD90", Slot = "11")]
	public void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6003F03")]
	[Address(RVA = "0x42CFDA0", Offset = "0x42CFDA0", VA = "0x42CFDA0", Slot = "13")]
	public void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6003F04")]
	[Address(RVA = "0x42CFDB0", Offset = "0x42CFDB0", VA = "0x42CFDB0", Slot = "14")]
	public void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6003F05")]
	[Address(RVA = "0x42CFDC0", Offset = "0x42CFDC0", VA = "0x42CFDC0", Slot = "15")]
	public void OnLeftRoom()
	{
	}

	[Token(Token = "0x6003F06")]
	[Address(RVA = "0x42CFDD0", Offset = "0x42CFDD0", VA = "0x42CFDD0")]
	public KDRPanel()
	{
	}
}
