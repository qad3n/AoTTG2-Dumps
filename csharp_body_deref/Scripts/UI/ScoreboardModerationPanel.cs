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

[Token(Token = "0x20007AE")]
internal class ScoreboardModerationPanel : ScoreboardCategoryPanel
{
	[Token(Token = "0x20007AF")]
	private enum Tab
	{
		[Token(Token = "0x40026E9")]
		Players,
		[Token(Token = "0x40026EA")]
		PastPlayers,
		[Token(Token = "0x40026EB")]
		RoomBans,
		[Token(Token = "0x40026EC")]
		RegionBans
	}

	[Token(Token = "0x40026C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private Tab _activeTab;

	[Token(Token = "0x40026C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	private bool _subscribed;

	[Token(Token = "0x40026CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private AottgInGameView _view;

	[Token(Token = "0x40026CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private Text _authLabel;

	[Token(Token = "0x40026CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private Text _statusLabel;

	[Token(Token = "0x40026CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private Transform _listContainer;

	[Token(Token = "0x40026CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private Transform _detailContainer;

	[Token(Token = "0x40026CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private Transform _footerRow;

	[Token(Token = "0x40026D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private StringSetting _searchSetting;

	[Token(Token = "0x40026D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Dictionary<Tab, Button> _tabButtons;

	[Token(Token = "0x40026D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private readonly Dictionary<Tab, string> _searchTerms;

	[Token(Token = "0x40026D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private PlayerEntry _selectedPlayer;

	[Token(Token = "0x40026D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private bool _selectedPlayerIsActive;

	[Token(Token = "0x40026D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private RoomBanEntry _selectedRoomBan;

	[Token(Token = "0x40026D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private RegionBanEntry _selectedRegionBan;

	[Token(Token = "0x40026D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private ModerationBatchBanPopup _batchBanPopup;

	[Token(Token = "0x40026D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private PlayerPropEditPopup _propEditPopup;

	[Token(Token = "0x40026D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private ModerationReasonPopup _reasonPopup;

	[Token(Token = "0x40026DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private CanvasGroup _popupCanvasGroup;

	[Token(Token = "0x40026DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private float _popupMinFadeAlpha;

	[Token(Token = "0x40026DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private readonly List<CanvasGroup> _fadeSyncGroups;

	[Token(Token = "0x40026DD")]
	private const int BanPageSize = 50;

	[Token(Token = "0x40026DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private readonly List<RoomBanEntry> _cachedRoomBans;

	[Token(Token = "0x40026DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private readonly List<RegionBanEntry> _cachedRegionBans;

	[Token(Token = "0x40026E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private int _roomBanCount;

	[Token(Token = "0x40026E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x11C")]
	private int _regionBanCount;

	[Token(Token = "0x40026E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private int _roomBanNextStart;

	[Token(Token = "0x40026E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x124")]
	private int _regionBanNextStart;

	[Token(Token = "0x40026E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private bool _roomBanLoaded;

	[Token(Token = "0x40026E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x129")]
	private bool _regionBanLoaded;

	[Token(Token = "0x40026E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x12A")]
	private bool _roomBanRequestPending;

	[Token(Token = "0x40026E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x12B")]
	private bool _regionBanRequestPending;

	[Token(Token = "0x17000D71")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6004AAF")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D72")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004AB0")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004AB1")]
	[Address(RVA = "0x2268670", Offset = "0x2266C70", VA = "0x182268670", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004AB2")]
	[Address(RVA = "0x22654A0", Offset = "0x2263AA0", VA = "0x1822654A0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6004AB3")]
	[Address(RVA = "0x2265650", Offset = "0x2263C50", VA = "0x182265650")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6004AB4")]
	[Address(RVA = "0x22651E0", Offset = "0x22637E0", VA = "0x1822651E0")]
	private static void HidePopupIfActive(BasePopup popup)
	{
	}

	[Token(Token = "0x6004AB5")]
	[Address(RVA = "0x2269890", Offset = "0x2267E90", VA = "0x182269890")]
	private void Update()
	{
	}

	[Token(Token = "0x6004AB6")]
	[Address(RVA = "0x2266F20", Offset = "0x2265520", VA = "0x182266F20")]
	private void RegisterFadeSyncGroup(GameObject target)
	{
	}

	[Token(Token = "0x6004AB7")]
	[Address(RVA = "0x2268430", Offset = "0x2266A30", VA = "0x182268430", Slot = "25")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6004AB8")]
	[Address(RVA = "0x2269590", Offset = "0x2267B90", VA = "0x182269590")]
	private void SubscribeToManager()
	{
	}

	[Token(Token = "0x6004AB9")]
	[Address(RVA = "0x22654A0", Offset = "0x2263AA0", VA = "0x1822654A0")]
	private void UnsubscribeFromManager()
	{
	}

	[Token(Token = "0x6004ABA")]
	[Address(RVA = "0x2265300", Offset = "0x2263900", VA = "0x182265300")]
	private void OnAuthChanged()
	{
	}

	[Token(Token = "0x6004ABB")]
	[Address(RVA = "0x22658A0", Offset = "0x2263EA0", VA = "0x1822658A0")]
	private void OnRoomBanListReceived(RoomBanPage page)
	{
	}

	[Token(Token = "0x6004ABC")]
	[Address(RVA = "0x2265800", Offset = "0x2263E00", VA = "0x182265800")]
	private void OnRegionBanListReceived(RegionBanPage page)
	{
	}

	[Token(Token = "0x6004ABD")]
	[Address(RVA = "0x2263F00", Offset = "0x2262500", VA = "0x182263F00")]
	private void BuildUI()
	{
	}

	[Token(Token = "0x6004ABE")]
	[Address(RVA = "0x2265300", Offset = "0x2263900", VA = "0x182265300")]
	private void RebuildUI()
	{
	}

	[Token(Token = "0x6004ABF")]
	[Address(RVA = "0x2263CF0", Offset = "0x22622F0", VA = "0x182263CF0")]
	private void BuildTabButtons(Transform tabRow, ElementStyle style)
	{
	}

	[Token(Token = "0x6004AC0")]
	[Address(RVA = "0x2263190", Offset = "0x2261790", VA = "0x182263190")]
	private void AddTabButton(Transform parent, ElementStyle style, Tab tab, string label)
	{
	}

	[Token(Token = "0x6004AC1")]
	[Address(RVA = "0x22680B0", Offset = "0x22666B0", VA = "0x1822680B0")]
	private void SetActiveTab(Tab tab)
	{
	}

	[Token(Token = "0x6004AC2")]
	[Address(RVA = "0x2265940", Offset = "0x2263F40", VA = "0x182265940")]
	private void OnSearchChanged()
	{
	}

	[Token(Token = "0x6004AC3")]
	[Address(RVA = "0x2265150", Offset = "0x2263750", VA = "0x182265150")]
	private string GetSearchTerm(Tab tab)
	{
		return null;
	}

	[Token(Token = "0x6004AC4")]
	[Address(RVA = "0x2265280", Offset = "0x2263880", VA = "0x182265280")]
	private bool MatchesSearch(Tab tab, string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6004AC5")]
	[Address(RVA = "0x2266B70", Offset = "0x2265170", VA = "0x182266B70")]
	private void RefreshActiveTab()
	{
	}

	[Token(Token = "0x6004AC6")]
	[Address(RVA = "0x22659E0", Offset = "0x2263FE0", VA = "0x1822659E0")]
	private void PopulatePlayerList(ElementStyle style, bool active)
	{
	}

	[Token(Token = "0x6004AC7")]
	[Address(RVA = "0x2263450", Offset = "0x2261A50", VA = "0x182263450")]
	private void BuildPlayerListFooter(ElementStyle style)
	{
	}

	[Token(Token = "0x6004AC8")]
	[Address(RVA = "0x22632C0", Offset = "0x22618C0", VA = "0x1822632C0")]
	private void BuildPastPlayerFooter(ElementStyle style)
	{
	}

	[Token(Token = "0x6004AC9")]
	[Address(RVA = "0x2266680", Offset = "0x2264C80", VA = "0x182266680")]
	private void PopulateRoomBanList(ElementStyle style)
	{
	}

	[Token(Token = "0x6004ACA")]
	[Address(RVA = "0x2263A00", Offset = "0x2262000", VA = "0x182263A00")]
	private void BuildRoomBanFooter(ElementStyle style)
	{
	}

	[Token(Token = "0x6004ACB")]
	[Address(RVA = "0x2266260", Offset = "0x2264860", VA = "0x182266260")]
	private void PopulateRegionBanList(ElementStyle style)
	{
	}

	[Token(Token = "0x6004ACC")]
	[Address(RVA = "0x2263710", Offset = "0x2261D10", VA = "0x182263710")]
	private void BuildRegionBanFooter(ElementStyle style)
	{
	}

	[Token(Token = "0x6004ACD")]
	[Address(RVA = "0x2267290", Offset = "0x2265890", VA = "0x182267290")]
	private void ResetRoomBanPagination()
	{
	}

	[Token(Token = "0x6004ACE")]
	[Address(RVA = "0x22670F0", Offset = "0x22656F0", VA = "0x1822670F0")]
	private void RequestRoomBanPage(int startIndex, bool reset)
	{
	}

	[Token(Token = "0x6004ACF")]
	[Address(RVA = "0x2267190", Offset = "0x2265790", VA = "0x182267190")]
	private void ResetRegionBanPagination()
	{
	}

	[Token(Token = "0x6004AD0")]
	[Address(RVA = "0x2267050", Offset = "0x2265650", VA = "0x182267050")]
	private void RequestRegionBanPage(int startIndex, bool reset)
	{
	}

	[Token(Token = "0x6004AD1")]
	[Address(RVA = "0x2264AB0", Offset = "0x22630B0", VA = "0x182264AB0")]
	private void ClearDetailPanel()
	{
	}

	[Token(Token = "0x6004AD2")]
	[Address(RVA = "0x2267390", Offset = "0x2265990", VA = "0x182267390")]
	private void SelectPlayer(PlayerEntry player, bool isActive)
	{
	}

	[Token(Token = "0x6004AD3")]
	[Address(RVA = "0x2267E30", Offset = "0x2266430", VA = "0x182267E30")]
	private void SelectRoomBan(RoomBanEntry entry)
	{
	}

	[Token(Token = "0x6004AD4")]
	[Address(RVA = "0x2267B70", Offset = "0x2266170", VA = "0x182267B70")]
	private void SelectRegionBan(RegionBanEntry entry)
	{
	}

	[Token(Token = "0x6004AD5")]
	[Address(RVA = "0x2266AA0", Offset = "0x22650A0", VA = "0x182266AA0")]
	private void PromptReason(string actionTitle, Action<string> onSubmit)
	{
	}

	[Token(Token = "0x6004AD6")]
	[Address(RVA = "0x2268880", Offset = "0x2266E80", VA = "0x182268880")]
	private void ShowPlayerProps(int actorNumber)
	{
	}

	[Token(Token = "0x6004AD7")]
	[Address(RVA = "0x2264F40", Offset = "0x2263540", VA = "0x182264F40")]
	private string GetAuthStatusText()
	{
		return null;
	}

	[Token(Token = "0x6004AD8")]
	[Address(RVA = "0x2268300", Offset = "0x2266900", VA = "0x182268300")]
	private void SetStatus(string text)
	{
	}

	[Token(Token = "0x6004AD9")]
	[Address(RVA = "0x2265010", Offset = "0x2263610", VA = "0x182265010")]
	private string GetPlayerDisplayName(PlayerEntry player)
	{
		return null;
	}

	[Token(Token = "0x6004ADA")]
	[Address(RVA = "0x2269450", Offset = "0x2267A50", VA = "0x182269450")]
	private void StyleListBox(GameObject box)
	{
	}

	[Token(Token = "0x6004ADB")]
	[Address(RVA = "0x2264D70", Offset = "0x2263370", VA = "0x182264D70")]
	private Transform CreateDetailsBox(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6004ADC")]
	[Address(RVA = "0x2263150", Offset = "0x2261750", VA = "0x182263150")]
	private void AddDetailTitle(Transform parent, ElementStyle style, string title)
	{
	}

	[Token(Token = "0x6004ADD")]
	[Address(RVA = "0x2262F90", Offset = "0x2261590", VA = "0x182262F90")]
	private void AddDetailRow(Transform parent, ElementStyle style, string key, string value)
	{
	}

	[Token(Token = "0x6004ADE")]
	[Address(RVA = "0x2264B30", Offset = "0x2263130", VA = "0x182264B30")]
	private void CreateClickableEntry(Transform parent, ElementStyle style, string text, UnityAction onClick)
	{
	}

	[Token(Token = "0x6004ADF")]
	[Address(RVA = "0x2264880", Offset = "0x2262E80", VA = "0x182264880")]
	private void ClearContainer(Transform container)
	{
	}

	[Token(Token = "0x6004AE0")]
	[Address(RVA = "0x2269B10", Offset = "0x2268110", VA = "0x182269B10")]
	public ScoreboardModerationPanel()
	{
	}
}
