using System.Collections.Generic;
using ExitGames.Client.Photon;
using Il2CppDummyDll;
using Photon.Realtime;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x20005F5")]
internal class KDRPanel : MonoBehaviour, IInRoomCallbacks, IMatchmakingCallbacks
{
	[Token(Token = "0x4001D49")]
	[FieldOffset(Offset = "0x20")]
	private ElementStyle _style;

	[Token(Token = "0x4001D4A")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<int, PlayerKDRRow> _players;

	[Token(Token = "0x4001D4B")]
	[FieldOffset(Offset = "0x30")]
	private Dictionary<string, TeamKDRRow> _teamHeaders;

	[Token(Token = "0x4001D4C")]
	private const float MaxSyncDelay = 0.2f;

	[Token(Token = "0x4001D4D")]
	[FieldOffset(Offset = "0x38")]
	private float _currentSyncDelay;

	[Token(Token = "0x4001D4E")]
	[FieldOffset(Offset = "0x3C")]
	private KDRMode _kdrMode;

	[Token(Token = "0x4001D4F")]
	[FieldOffset(Offset = "0x40")]
	private PVPMode _pvpMode;

	[Token(Token = "0x4001D50")]
	[FieldOffset(Offset = "0x48")]
	private string _defaultTeam;

	[Token(Token = "0x4001D51")]
	[FieldOffset(Offset = "0x50")]
	public bool _showScoreboardLoadout;

	[Token(Token = "0x4001D52")]
	[FieldOffset(Offset = "0x51")]
	public bool _showScoreboardStatus;

	[Token(Token = "0x6003CA5")]
	[Address(RVA = "0x3FBC1E0", Offset = "0x3FBC1E0", VA = "0x3FBC1E0")]
	public void Setup(ElementStyle style)
	{
	}

	[Token(Token = "0x6003CA6")]
	[Address(RVA = "0x3FBC870", Offset = "0x3FBC870", VA = "0x3FBC870")]
	private void Update()
	{
	}

	[Token(Token = "0x6003CA7")]
	[Address(RVA = "0x3FBC720", Offset = "0x3FBC720", VA = "0x3FBC720")]
	private void Sync()
	{
	}

	[Token(Token = "0x6003CA8")]
	[Address(RVA = "0x3FBC8C0", Offset = "0x3FBC8C0", VA = "0x3FBC8C0")]
	private string GetPlayerTeam(Player player)
	{
		return null;
	}

	[Token(Token = "0x6003CA9")]
	[Address(RVA = "0x3FBC9A0", Offset = "0x3FBC9A0", VA = "0x3FBC9A0")]
	private void ReorganizeLayout()
	{
	}

	[Token(Token = "0x6003CAA")]
	[Address(RVA = "0x3FBCFD0", Offset = "0x3FBCFD0", VA = "0x3FBCFD0")]
	private void AddPlayer(Player player, bool redoLayout = false, bool isVisible = true)
	{
	}

	[Token(Token = "0x6003CAB")]
	[Address(RVA = "0x3FBD260", Offset = "0x3FBD260", VA = "0x3FBD260")]
	private void RemovePlayer(Player player, bool redoLayout = false)
	{
	}

	[Token(Token = "0x6003CAC")]
	[Address(RVA = "0x3FBC210", Offset = "0x3FBC210", VA = "0x3FBC210")]
	public void DestroyAndRecreate()
	{
	}

	[Token(Token = "0x6003CAD")]
	[Address(RVA = "0x3FBD540", Offset = "0x3FBD540", VA = "0x3FBD540", Slot = "4")]
	public void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x6003CAE")]
	[Address(RVA = "0x3FBD5D0", Offset = "0x3FBD5D0", VA = "0x3FBD5D0", Slot = "5")]
	public void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x6003CAF")]
	[Address(RVA = "0x3FBD660", Offset = "0x3FBD660", VA = "0x3FBD660", Slot = "7")]
	public void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
	}

	[Token(Token = "0x6003CB0")]
	[Address(RVA = "0x3FBD9F0", Offset = "0x3FBD9F0", VA = "0x3FBD9F0", Slot = "12")]
	public void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6003CB1")]
	[Address(RVA = "0x3FBDA00", Offset = "0x3FBDA00", VA = "0x3FBDA00", Slot = "16")]
	public virtual void OnEnable()
	{
	}

	[Token(Token = "0x6003CB2")]
	[Address(RVA = "0x3FBDA70", Offset = "0x3FBDA70", VA = "0x3FBDA70", Slot = "17")]
	public virtual void OnDisable()
	{
	}

	[Token(Token = "0x6003CB3")]
	[Address(RVA = "0x3FBDAE0", Offset = "0x3FBDAE0", VA = "0x3FBDAE0", Slot = "6")]
	public void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x6003CB4")]
	[Address(RVA = "0x3FBDAF0", Offset = "0x3FBDAF0", VA = "0x3FBDAF0", Slot = "8")]
	public void OnMasterClientSwitched(Player newMasterClient)
	{
	}

	[Token(Token = "0x6003CB5")]
	[Address(RVA = "0x3FBDB00", Offset = "0x3FBDB00", VA = "0x3FBDB00", Slot = "9")]
	public void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x6003CB6")]
	[Address(RVA = "0x3FBDB10", Offset = "0x3FBDB10", VA = "0x3FBDB10", Slot = "10")]
	public void OnCreatedRoom()
	{
	}

	[Token(Token = "0x6003CB7")]
	[Address(RVA = "0x3FBDB20", Offset = "0x3FBDB20", VA = "0x3FBDB20", Slot = "11")]
	public void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6003CB8")]
	[Address(RVA = "0x3FBDB30", Offset = "0x3FBDB30", VA = "0x3FBDB30", Slot = "13")]
	public void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6003CB9")]
	[Address(RVA = "0x3FBDB40", Offset = "0x3FBDB40", VA = "0x3FBDB40", Slot = "14")]
	public void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6003CBA")]
	[Address(RVA = "0x3FBDB50", Offset = "0x3FBDB50", VA = "0x3FBDB50", Slot = "15")]
	public void OnLeftRoom()
	{
	}

	[Token(Token = "0x6003CBB")]
	[Address(RVA = "0x3FBDB60", Offset = "0x3FBDB60", VA = "0x3FBDB60")]
	public KDRPanel()
	{
	}
}
