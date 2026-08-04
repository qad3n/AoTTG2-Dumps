// ==================== AoTTG2 cross-reference ====================
// Type: UI.ScoreboardModerationPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ScoreboardModerationPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Anticheat;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200064F")]
internal class ScoreboardModerationPanel : ScoreboardCategoryPanel
{
	[Token(Token = "0x2000650")]
	private enum Tab
	{
		[Token(Token = "0x4001F1A")]
		Players,
		[Token(Token = "0x4001F1B")]
		PastPlayers,
		[Token(Token = "0x4001F1C")]
		RoomBans,
		[Token(Token = "0x4001F1D")]
		RegionBans
	}

	[Token(Token = "0x4001EFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private Tab _activeTab;

	[Token(Token = "0x4001EFC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	private bool _subscribed;

	[Token(Token = "0x4001EFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Text _authLabel;

	[Token(Token = "0x4001EFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private Text _statusLabel;

	[Token(Token = "0x4001EFF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private Transform _listContainer;

	[Token(Token = "0x4001F00")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private Transform _detailContainer;

	[Token(Token = "0x4001F01")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private Transform _footerRow;

	[Token(Token = "0x4001F02")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private StringSetting _searchSetting;

	[Token(Token = "0x4001F03")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private Dictionary<Tab, Button> _tabButtons;

	[Token(Token = "0x4001F04")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private readonly Dictionary<Tab, string> _searchTerms;

	[Token(Token = "0x4001F05")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private PlayerEntry _selectedPlayer;

	[Token(Token = "0x4001F06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private bool _selectedPlayerIsActive;

	[Token(Token = "0x4001F07")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private RoomBanEntry _selectedRoomBan;

	[Token(Token = "0x4001F08")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private RegionBanEntry _selectedRegionBan;

	[Token(Token = "0x4001F09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private ModerationBatchBanPopup _batchBanPopup;

	[Token(Token = "0x4001F0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private PlayerPropEditPopup _propEditPopup;

	[Token(Token = "0x4001F0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private CanvasGroup _popupCanvasGroup;

	[Token(Token = "0x4001F0C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private float _popupMinFadeAlpha;

	[Token(Token = "0x4001F0D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private readonly List<CanvasGroup> _fadeSyncGroups;

	[Token(Token = "0x4001F0E")]
	private const int BanPageSize = 50;

	[Token(Token = "0x4001F0F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private readonly List<RoomBanEntry> _cachedRoomBans;

	[Token(Token = "0x4001F10")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private readonly List<RegionBanEntry> _cachedRegionBans;

	[Token(Token = "0x4001F11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private int _roomBanCount;

	[Token(Token = "0x4001F12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10C")]
	private int _regionBanCount;

	[Token(Token = "0x4001F13")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private int _roomBanNextStart;

	[Token(Token = "0x4001F14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x114")]
	private int _regionBanNextStart;

	[Token(Token = "0x4001F15")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private bool _roomBanLoaded;

	[Token(Token = "0x4001F16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x119")]
	private bool _regionBanLoaded;

	[Token(Token = "0x4001F17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x11A")]
	private bool _roomBanRequestPending;

	[Token(Token = "0x4001F18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x11B")]
	private bool _regionBanRequestPending;

	[Token(Token = "0x17000C1F")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6003FA7")]
		[Address(RVA = "0x42DB9E0", Offset = "0x42DB9E0", VA = "0x42DB9E0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C20")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003FA8")]
		[Address(RVA = "0x42DB9F0", Offset = "0x42DB9F0", VA = "0x42DB9F0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003FA9")]
	[Address(RVA = "0x42DBA00", Offset = "0x42DBA00", VA = "0x42DBA00", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003FAA")]
	[Address(RVA = "0x42DC640", Offset = "0x42DC640", VA = "0x42DC640")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6003FAB")]
	[Address(RVA = "0x42DC810", Offset = "0x42DC810", VA = "0x42DC810")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6003FAC")]
	[Address(RVA = "0x42DC830", Offset = "0x42DC830", VA = "0x42DC830")]
	private static void HidePopupIfActive(BasePopup popup)
	{
	}

	[Token(Token = "0x6003FAD")]
	[Address(RVA = "0x42DC8C0", Offset = "0x42DC8C0", VA = "0x42DC8C0")]
	private void Update()
	{
	}

	[Token(Token = "0x6003FAE")]
	[Address(RVA = "0x42DCB50", Offset = "0x42DCB50", VA = "0x42DCB50")]
	private void RegisterFadeSyncGroup(GameObject target)
	{
	}

	[Token(Token = "0x6003FAF")]
	[Address(RVA = "0x42DCC70", Offset = "0x42DCC70", VA = "0x42DCC70", Slot = "25")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6003FB0")]
	[Address(RVA = "0x42DBA30", Offset = "0x42DBA30", VA = "0x42DBA30")]
	private void SubscribeToManager()
	{
	}

	[Token(Token = "0x6003FB1")]
	[Address(RVA = "0x42DC650", Offset = "0x42DC650", VA = "0x42DC650")]
	private void UnsubscribeFromManager()
	{
	}

	[Token(Token = "0x6003FB2")]
	[Address(RVA = "0x42DCDF0", Offset = "0x42DCDF0", VA = "0x42DCDF0")]
	private void OnAuthChanged()
	{
	}

	[Token(Token = "0x6003FB3")]
	[Address(RVA = "0x42DCFA0", Offset = "0x42DCFA0", VA = "0x42DCFA0")]
	private void OnRoomBanListReceived(RoomBanPage page)
	{
	}

	[Token(Token = "0x6003FB4")]
	[Address(RVA = "0x42DD250", Offset = "0x42DD250", VA = "0x42DD250")]
	private void OnRegionBanListReceived(RegionBanPage page)
	{
	}

	[Token(Token = "0x6003FB5")]
	[Address(RVA = "0x42DBC00", Offset = "0x42DBC00", VA = "0x42DBC00")]
	private void BuildUI()
	{
	}

	[Token(Token = "0x6003FB6")]
	[Address(RVA = "0x42DCE00", Offset = "0x42DCE00", VA = "0x42DCE00")]
	private void RebuildUI()
	{
	}

	[Token(Token = "0x6003FB7")]
	[Address(RVA = "0x42DD410", Offset = "0x42DD410", VA = "0x42DD410")]
	private void BuildTabButtons(Transform tabRow, ElementStyle style)
	{
	}

	[Token(Token = "0x6003FB8")]
	[Address(RVA = "0x42DDD40", Offset = "0x42DDD40", VA = "0x42DDD40")]
	private void AddTabButton(Transform parent, ElementStyle style, Tab tab, string label)
	{
	}

	[Token(Token = "0x6003FB9")]
	[Address(RVA = "0x42DD6B0", Offset = "0x42DD6B0", VA = "0x42DD6B0")]
	private void SetActiveTab(Tab tab)
	{
	}

	[Token(Token = "0x6003FBA")]
	[Address(RVA = "0x42DDF00", Offset = "0x42DDF00", VA = "0x42DDF00")]
	private void OnSearchChanged()
	{
	}

	[Token(Token = "0x6003FBB")]
	[Address(RVA = "0x42DD630", Offset = "0x42DD630", VA = "0x42DD630")]
	private string GetSearchTerm(Tab tab)
	{
		return null;
	}

	[Token(Token = "0x6003FBC")]
	[Address(RVA = "0x42DDF90", Offset = "0x42DDF90", VA = "0x42DDF90")]
	private bool MatchesSearch(Tab tab, string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6003FBD")]
	[Address(RVA = "0x42DD040", Offset = "0x42DD040", VA = "0x42DD040")]
	private void RefreshActiveTab()
	{
	}

	[Token(Token = "0x6003FBE")]
	[Address(RVA = "0x42DE070", Offset = "0x42DE070", VA = "0x42DE070")]
	private void PopulatePlayerList(ElementStyle style, bool active)
	{
	}

	[Token(Token = "0x6003FBF")]
	[Address(RVA = "0x42DEB30", Offset = "0x42DEB30", VA = "0x42DEB30")]
	private void BuildPlayerListFooter(ElementStyle style)
	{
	}

	[Token(Token = "0x6003FC0")]
	[Address(RVA = "0x42DEE20", Offset = "0x42DEE20", VA = "0x42DEE20")]
	private void BuildPastPlayerFooter(ElementStyle style)
	{
	}

	[Token(Token = "0x6003FC1")]
	[Address(RVA = "0x42DEF80", Offset = "0x42DEF80", VA = "0x42DEF80")]
	private void PopulateRoomBanList(ElementStyle style)
	{
	}

	[Token(Token = "0x6003FC2")]
	[Address(RVA = "0x42DF3A0", Offset = "0x42DF3A0", VA = "0x42DF3A0")]
	private void BuildRoomBanFooter(ElementStyle style)
	{
	}

	[Token(Token = "0x6003FC3")]
	[Address(RVA = "0x42DF680", Offset = "0x42DF680", VA = "0x42DF680")]
	private void PopulateRegionBanList(ElementStyle style)
	{
	}

	[Token(Token = "0x6003FC4")]
	[Address(RVA = "0x42DFAA0", Offset = "0x42DFAA0", VA = "0x42DFAA0")]
	private void BuildRegionBanFooter(ElementStyle style)
	{
	}

	[Token(Token = "0x6003FC5")]
	[Address(RVA = "0x42E0260", Offset = "0x42E0260", VA = "0x42E0260")]
	private void ResetRoomBanPagination()
	{
	}

	[Token(Token = "0x6003FC6")]
	[Address(RVA = "0x42E0120", Offset = "0x42E0120", VA = "0x42E0120")]
	private void RequestRoomBanPage(int startIndex, bool reset)
	{
	}

	[Token(Token = "0x6003FC7")]
	[Address(RVA = "0x42E0360", Offset = "0x42E0360", VA = "0x42E0360")]
	private void ResetRegionBanPagination()
	{
	}

	[Token(Token = "0x6003FC8")]
	[Address(RVA = "0x42E01C0", Offset = "0x42E01C0", VA = "0x42E01C0")]
	private void RequestRegionBanPage(int startIndex, bool reset)
	{
	}

	[Token(Token = "0x6003FC9")]
	[Address(RVA = "0x42DDE90", Offset = "0x42DDE90", VA = "0x42DDE90")]
	private void ClearDetailPanel()
	{
	}

	[Token(Token = "0x6003FCA")]
	[Address(RVA = "0x42E0460", Offset = "0x42E0460", VA = "0x42E0460")]
	private void SelectPlayer(PlayerEntry player, bool isActive)
	{
	}

	[Token(Token = "0x6003FCB")]
	[Address(RVA = "0x42E11D0", Offset = "0x42E11D0", VA = "0x42E11D0")]
	private void SelectRoomBan(RoomBanEntry entry)
	{
	}

	[Token(Token = "0x6003FCC")]
	[Address(RVA = "0x42E1490", Offset = "0x42E1490", VA = "0x42E1490")]
	private void SelectRegionBan(RegionBanEntry entry)
	{
	}

	[Token(Token = "0x6003FCD")]
	[Address(RVA = "0x42E1790", Offset = "0x42E1790", VA = "0x42E1790")]
	private void PromptReason(string actionTitle, Action<string> onSubmit)
	{
	}

	[Token(Token = "0x6003FCE")]
	[Address(RVA = "0x42E19A0", Offset = "0x42E19A0", VA = "0x42E19A0")]
	private void ShowPlayerProps(int actorNumber)
	{
	}

	[Token(Token = "0x6003FCF")]
	[Address(RVA = "0x42DD2F0", Offset = "0x42DD2F0", VA = "0x42DD2F0")]
	private string GetAuthStatusText()
	{
		return null;
	}

	[Token(Token = "0x6003FD0")]
	[Address(RVA = "0x42E2AD0", Offset = "0x42E2AD0", VA = "0x42E2AD0")]
	private void SetStatus(string text)
	{
	}

	[Token(Token = "0x6003FD1")]
	[Address(RVA = "0x42DFD90", Offset = "0x42DFD90", VA = "0x42DFD90")]
	private string GetPlayerDisplayName(PlayerEntry player)
	{
		return null;
	}

	[Token(Token = "0x6003FD2")]
	[Address(RVA = "0x42E0CF0", Offset = "0x42E0CF0", VA = "0x42E0CF0")]
	private Transform CreateDetailsBox(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6003FD3")]
	[Address(RVA = "0x42E0F40", Offset = "0x42E0F40", VA = "0x42E0F40")]
	private void AddDetailTitle(Transform parent, ElementStyle style, string title)
	{
	}

	[Token(Token = "0x6003FD4")]
	[Address(RVA = "0x42E0F60", Offset = "0x42E0F60", VA = "0x42E0F60")]
	private void AddDetailRow(Transform parent, ElementStyle style, string key, string value)
	{
	}

	[Token(Token = "0x6003FD5")]
	[Address(RVA = "0x42DFEF0", Offset = "0x42DFEF0", VA = "0x42DFEF0")]
	private void CreateClickableEntry(Transform parent, ElementStyle style, string text, UnityAction onClick)
	{
	}

	[Token(Token = "0x6003FD6")]
	[Address(RVA = "0x42DD9C0", Offset = "0x42DD9C0", VA = "0x42DD9C0")]
	private void ClearContainer(Transform container)
	{
	}

	[Token(Token = "0x6003FD7")]
	[Address(RVA = "0x42E2C00", Offset = "0x42E2C00", VA = "0x42E2C00")]
	public ScoreboardModerationPanel()
	{
	}
}
