// ==================== AoTTG2 cross-reference ====================
// Type: UI.ScoreboardModerationPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/ScoreboardModerationPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Anticheat;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200085A")]
internal class ScoreboardModerationPanel : ScoreboardCategoryPanel
{
	[Token(Token = "0x200085B")]
	private enum Tab
	{
		[Token(Token = "0x4002A69")]
		Players,
		[Token(Token = "0x4002A6A")]
		PastPlayers,
		[Token(Token = "0x4002A6B")]
		RoomBans,
		[Token(Token = "0x4002A6C")]
		RegionBans
	}

	[Token(Token = "0x4002A48")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private Tab _activeTab;

	[Token(Token = "0x4002A49")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	private bool _subscribed;

	[Token(Token = "0x4002A4A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private AottgInGameView _view;

	[Token(Token = "0x4002A4B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private Text _authLabel;

	[Token(Token = "0x4002A4C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private Text _statusLabel;

	[Token(Token = "0x4002A4D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private Transform _listContainer;

	[Token(Token = "0x4002A4E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private Transform _detailContainer;

	[Token(Token = "0x4002A4F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private Transform _footerRow;

	[Token(Token = "0x4002A50")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private StringSetting _searchSetting;

	[Token(Token = "0x4002A51")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Dictionary<Tab, Button> _tabButtons;

	[Token(Token = "0x4002A52")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private readonly Dictionary<Tab, string> _searchTerms;

	[Token(Token = "0x4002A53")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private PlayerEntry _selectedPlayer;

	[Token(Token = "0x4002A54")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private bool _selectedPlayerIsActive;

	[Token(Token = "0x4002A55")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private RoomBanEntry _selectedRoomBan;

	[Token(Token = "0x4002A56")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private RegionBanEntry _selectedRegionBan;

	[Token(Token = "0x4002A57")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private ModerationBatchBanPopup _batchBanPopup;

	[Token(Token = "0x4002A58")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private PlayerPropEditPopup _propEditPopup;

	[Token(Token = "0x4002A59")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private ModerationReasonPopup _reasonPopup;

	[Token(Token = "0x4002A5A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private CanvasGroup _popupCanvasGroup;

	[Token(Token = "0x4002A5B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private float _popupMinFadeAlpha;

	[Token(Token = "0x4002A5C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private readonly List<CanvasGroup> _fadeSyncGroups;

	[Token(Token = "0x4002A5D")]
	private const int BanPageSize = 50;

	[Token(Token = "0x4002A5E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private readonly List<RoomBanEntry> _cachedRoomBans;

	[Token(Token = "0x4002A5F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private readonly List<RegionBanEntry> _cachedRegionBans;

	[Token(Token = "0x4002A60")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private int _roomBanCount;

	[Token(Token = "0x4002A61")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x11C")]
	private int _regionBanCount;

	[Token(Token = "0x4002A62")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private int _roomBanNextStart;

	[Token(Token = "0x4002A63")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x124")]
	private int _regionBanNextStart;

	[Token(Token = "0x4002A64")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private bool _roomBanLoaded;

	[Token(Token = "0x4002A65")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x129")]
	private bool _regionBanLoaded;

	[Token(Token = "0x4002A66")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x12A")]
	private bool _roomBanRequestPending;

	[Token(Token = "0x4002A67")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x12B")]
	private bool _regionBanRequestPending;

	[Token(Token = "0x17000DE2")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6004FCB")]
		[Address(RVA = "0x5C3EBB0", Offset = "0x5C3DBB0", VA = "0x5C3EBB0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000DE3")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004FCC")]
		[Address(RVA = "0x5C3EBC0", Offset = "0x5C3DBC0", VA = "0x5C3EBC0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004FCD")]
	[Address(RVA = "0x5C3EBD0", Offset = "0x5C3DBD0", VA = "0x5C3EBD0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004FCE")]
	[Address(RVA = "0x5C3F8A0", Offset = "0x5C3E8A0", VA = "0x5C3F8A0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6004FCF")]
	[Address(RVA = "0x5C3FA70", Offset = "0x5C3EA70", VA = "0x5C3FA70")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6004FD0")]
	[Address(RVA = "0x5C3FAA0", Offset = "0x5C3EAA0", VA = "0x5C3FAA0")]
	private static void HidePopupIfActive(BasePopup popup)
	{
	}

	[Token(Token = "0x6004FD1")]
	[Address(RVA = "0x5C3FB30", Offset = "0x5C3EB30", VA = "0x5C3FB30")]
	private void Update()
	{
	}

	[Token(Token = "0x6004FD2")]
	[Address(RVA = "0x5C3FDB0", Offset = "0x5C3EDB0", VA = "0x5C3FDB0")]
	private void RegisterFadeSyncGroup(GameObject target)
	{
	}

	[Token(Token = "0x6004FD3")]
	[Address(RVA = "0x5C3FED0", Offset = "0x5C3EED0", VA = "0x5C3FED0", Slot = "25")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6004FD4")]
	[Address(RVA = "0x5C3EC50", Offset = "0x5C3DC50", VA = "0x5C3EC50")]
	private void SubscribeToManager()
	{
	}

	[Token(Token = "0x6004FD5")]
	[Address(RVA = "0x5C3F8B0", Offset = "0x5C3E8B0", VA = "0x5C3F8B0")]
	private void UnsubscribeFromManager()
	{
	}

	[Token(Token = "0x6004FD6")]
	[Address(RVA = "0x5C400F0", Offset = "0x5C3F0F0", VA = "0x5C400F0")]
	private void OnAuthChanged()
	{
	}

	[Token(Token = "0x6004FD7")]
	[Address(RVA = "0x5C402A0", Offset = "0x5C3F2A0", VA = "0x5C402A0")]
	private void OnRoomBanListReceived(RoomBanPage page)
	{
	}

	[Token(Token = "0x6004FD8")]
	[Address(RVA = "0x5C40550", Offset = "0x5C3F550", VA = "0x5C40550")]
	private void OnRegionBanListReceived(RegionBanPage page)
	{
	}

	[Token(Token = "0x6004FD9")]
	[Address(RVA = "0x5C3EE20", Offset = "0x5C3DE20", VA = "0x5C3EE20")]
	private void BuildUI()
	{
	}

	[Token(Token = "0x6004FDA")]
	[Address(RVA = "0x5C40100", Offset = "0x5C3F100", VA = "0x5C40100")]
	private void RebuildUI()
	{
	}

	[Token(Token = "0x6004FDB")]
	[Address(RVA = "0x5C40830", Offset = "0x5C3F830", VA = "0x5C40830")]
	private void BuildTabButtons(Transform tabRow, ElementStyle style)
	{
	}

	[Token(Token = "0x6004FDC")]
	[Address(RVA = "0x5C41450", Offset = "0x5C40450", VA = "0x5C41450")]
	private void AddTabButton(Transform parent, ElementStyle style, Tab tab, string label)
	{
	}

	[Token(Token = "0x6004FDD")]
	[Address(RVA = "0x5C40E80", Offset = "0x5C3FE80", VA = "0x5C40E80")]
	private void SetActiveTab(Tab tab)
	{
	}

	[Token(Token = "0x6004FDE")]
	[Address(RVA = "0x5C41610", Offset = "0x5C40610", VA = "0x5C41610")]
	private void OnSearchChanged()
	{
	}

	[Token(Token = "0x6004FDF")]
	[Address(RVA = "0x5C40C70", Offset = "0x5C3FC70", VA = "0x5C40C70")]
	private string GetSearchTerm(Tab tab)
	{
		return null;
	}

	[Token(Token = "0x6004FE0")]
	[Address(RVA = "0x5C416A0", Offset = "0x5C406A0", VA = "0x5C416A0")]
	private bool MatchesSearch(Tab tab, string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6004FE1")]
	[Address(RVA = "0x5C40340", Offset = "0x5C3F340", VA = "0x5C40340")]
	private void RefreshActiveTab()
	{
	}

	[Token(Token = "0x6004FE2")]
	[Address(RVA = "0x5C41780", Offset = "0x5C40780", VA = "0x5C41780")]
	private void PopulatePlayerList(ElementStyle style, bool active)
	{
	}

	[Token(Token = "0x6004FE3")]
	[Address(RVA = "0x5C42170", Offset = "0x5C41170", VA = "0x5C42170")]
	private void BuildPlayerListFooter(ElementStyle style)
	{
	}

	[Token(Token = "0x6004FE4")]
	[Address(RVA = "0x5C42540", Offset = "0x5C41540", VA = "0x5C42540")]
	private void BuildPastPlayerFooter(ElementStyle style)
	{
	}

	[Token(Token = "0x6004FE5")]
	[Address(RVA = "0x5C42710", Offset = "0x5C41710", VA = "0x5C42710")]
	private void PopulateRoomBanList(ElementStyle style)
	{
	}

	[Token(Token = "0x6004FE6")]
	[Address(RVA = "0x5C42C80", Offset = "0x5C41C80", VA = "0x5C42C80")]
	private void BuildRoomBanFooter(ElementStyle style)
	{
	}

	[Token(Token = "0x6004FE7")]
	[Address(RVA = "0x5C42F30", Offset = "0x5C41F30", VA = "0x5C42F30")]
	private void PopulateRegionBanList(ElementStyle style)
	{
	}

	[Token(Token = "0x6004FE8")]
	[Address(RVA = "0x5C434A0", Offset = "0x5C424A0", VA = "0x5C434A0")]
	private void BuildRegionBanFooter(ElementStyle style)
	{
	}

	[Token(Token = "0x6004FE9")]
	[Address(RVA = "0x5C43EE0", Offset = "0x5C42EE0", VA = "0x5C43EE0")]
	private void ResetRoomBanPagination()
	{
	}

	[Token(Token = "0x6004FEA")]
	[Address(RVA = "0x5C43B70", Offset = "0x5C42B70", VA = "0x5C43B70")]
	private void RequestRoomBanPage(int startIndex, bool reset)
	{
	}

	[Token(Token = "0x6004FEB")]
	[Address(RVA = "0x5C43FE0", Offset = "0x5C42FE0", VA = "0x5C43FE0")]
	private void ResetRegionBanPagination()
	{
	}

	[Token(Token = "0x6004FEC")]
	[Address(RVA = "0x5C43E40", Offset = "0x5C42E40", VA = "0x5C43E40")]
	private void RequestRegionBanPage(int startIndex, bool reset)
	{
	}

	[Token(Token = "0x6004FED")]
	[Address(RVA = "0x5C415A0", Offset = "0x5C405A0", VA = "0x5C415A0")]
	private void ClearDetailPanel()
	{
	}

	[Token(Token = "0x6004FEE")]
	[Address(RVA = "0x5C440E0", Offset = "0x5C430E0", VA = "0x5C440E0")]
	private void SelectPlayer(PlayerEntry player, bool isActive)
	{
	}

	[Token(Token = "0x6004FEF")]
	[Address(RVA = "0x5C45420", Offset = "0x5C44420", VA = "0x5C45420")]
	private void SelectRoomBan(RoomBanEntry entry)
	{
	}

	[Token(Token = "0x6004FF0")]
	[Address(RVA = "0x5C459C0", Offset = "0x5C449C0", VA = "0x5C459C0")]
	private void SelectRegionBan(RegionBanEntry entry)
	{
	}

	[Token(Token = "0x6004FF1")]
	[Address(RVA = "0x5C46020", Offset = "0x5C45020", VA = "0x5C46020")]
	private void PromptReason(string actionTitle, Action<string> onSubmit)
	{
	}

	[Token(Token = "0x6004FF2")]
	[Address(RVA = "0x5C46040", Offset = "0x5C45040", VA = "0x5C46040")]
	private void ShowPlayerProps(int actorNumber)
	{
	}

	[Token(Token = "0x6004FF3")]
	[Address(RVA = "0x5C405F0", Offset = "0x5C3F5F0", VA = "0x5C405F0")]
	private string GetAuthStatusText()
	{
		return null;
	}

	[Token(Token = "0x6004FF4")]
	[Address(RVA = "0x5C40CF0", Offset = "0x5C3FCF0", VA = "0x5C40CF0")]
	private static string Locale(string item)
	{
		return null;
	}

	[Token(Token = "0x6004FF5")]
	[Address(RVA = "0x5C43C10", Offset = "0x5C42C10", VA = "0x5C43C10")]
	private static string BanEntryLabel(string username, bool ipBan)
	{
		return null;
	}

	[Token(Token = "0x6004FF6")]
	[Address(RVA = "0x5C43D00", Offset = "0x5C42D00", VA = "0x5C43D00")]
	private static string LoadedAllText(int loaded, int total)
	{
		return null;
	}

	[Token(Token = "0x6004FF7")]
	[Address(RVA = "0x5C47070", Offset = "0x5C46070", VA = "0x5C47070")]
	private void SetStatus(string text)
	{
	}

	[Token(Token = "0x6004FF8")]
	[Address(RVA = "0x5C43760", Offset = "0x5C42760", VA = "0x5C43760")]
	private string GetPlayerDisplayName(PlayerEntry player)
	{
		return null;
	}

	[Token(Token = "0x6004FF9")]
	[Address(RVA = "0x5C40D80", Offset = "0x5C3FD80", VA = "0x5C40D80")]
	private void StyleListBox(GameObject box)
	{
	}

	[Token(Token = "0x6004FFA")]
	[Address(RVA = "0x5C45070", Offset = "0x5C44070", VA = "0x5C45070")]
	private Transform CreateDetailsBox(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6004FFB")]
	[Address(RVA = "0x5C45230", Offset = "0x5C44230", VA = "0x5C45230")]
	private void AddDetailTitle(Transform parent, ElementStyle style, string title)
	{
	}

	[Token(Token = "0x6004FFC")]
	[Address(RVA = "0x5C45250", Offset = "0x5C44250", VA = "0x5C45250")]
	private void AddDetailRow(Transform parent, ElementStyle style, string key, string value)
	{
	}

	[Token(Token = "0x6004FFD")]
	[Address(RVA = "0x5C43940", Offset = "0x5C42940", VA = "0x5C43940")]
	private void CreateClickableEntry(Transform parent, ElementStyle style, string text, UnityAction onClick)
	{
	}

	[Token(Token = "0x6004FFE")]
	[Address(RVA = "0x5C41140", Offset = "0x5C40140", VA = "0x5C41140")]
	private void ClearContainer(Transform container)
	{
	}

	[Token(Token = "0x6004FFF")]
	[Address(RVA = "0x5C471A0", Offset = "0x5C461A0", VA = "0x5C471A0")]
	public ScoreboardModerationPanel()
	{
	}
}
