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

[Token(Token = "0x2000604")]
internal class ScoreboardModerationPanel : ScoreboardCategoryPanel
{
	[Token(Token = "0x2000605")]
	private enum Tab
	{
		[Token(Token = "0x4001DD3")]
		Players,
		[Token(Token = "0x4001DD4")]
		PastPlayers,
		[Token(Token = "0x4001DD5")]
		RoomBans,
		[Token(Token = "0x4001DD6")]
		RegionBans
	}

	[Token(Token = "0x4001DB4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private Tab _activeTab;

	[Token(Token = "0x4001DB5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	private bool _subscribed;

	[Token(Token = "0x4001DB6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Text _authLabel;

	[Token(Token = "0x4001DB7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private Text _statusLabel;

	[Token(Token = "0x4001DB8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private Transform _listContainer;

	[Token(Token = "0x4001DB9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private Transform _detailContainer;

	[Token(Token = "0x4001DBA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private Transform _footerRow;

	[Token(Token = "0x4001DBB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private StringSetting _searchSetting;

	[Token(Token = "0x4001DBC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private Dictionary<Tab, Button> _tabButtons;

	[Token(Token = "0x4001DBD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private readonly Dictionary<Tab, string> _searchTerms;

	[Token(Token = "0x4001DBE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private PlayerEntry _selectedPlayer;

	[Token(Token = "0x4001DBF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private bool _selectedPlayerIsActive;

	[Token(Token = "0x4001DC0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private RoomBanEntry _selectedRoomBan;

	[Token(Token = "0x4001DC1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private RegionBanEntry _selectedRegionBan;

	[Token(Token = "0x4001DC2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private ModerationBatchBanPopup _batchBanPopup;

	[Token(Token = "0x4001DC3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private PlayerPropEditPopup _propEditPopup;

	[Token(Token = "0x4001DC4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private CanvasGroup _popupCanvasGroup;

	[Token(Token = "0x4001DC5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private float _popupMinFadeAlpha;

	[Token(Token = "0x4001DC6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private readonly List<CanvasGroup> _fadeSyncGroups;

	[Token(Token = "0x4001DC7")]
	private const int BanPageSize = 50;

	[Token(Token = "0x4001DC8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private readonly List<RoomBanEntry> _cachedRoomBans;

	[Token(Token = "0x4001DC9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private readonly List<RegionBanEntry> _cachedRegionBans;

	[Token(Token = "0x4001DCA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private int _roomBanCount;

	[Token(Token = "0x4001DCB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10C")]
	private int _regionBanCount;

	[Token(Token = "0x4001DCC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private int _roomBanNextStart;

	[Token(Token = "0x4001DCD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x114")]
	private int _regionBanNextStart;

	[Token(Token = "0x4001DCE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private bool _roomBanLoaded;

	[Token(Token = "0x4001DCF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x119")]
	private bool _regionBanLoaded;

	[Token(Token = "0x4001DD0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x11A")]
	private bool _roomBanRequestPending;

	[Token(Token = "0x4001DD1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x11B")]
	private bool _regionBanRequestPending;

	[Token(Token = "0x17000BA7")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6003D5A")]
		[Address(RVA = "0x3FC9350", Offset = "0x3FC9350", VA = "0x3FC9350", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BA8")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6003D5B")]
		[Address(RVA = "0x3FC9360", Offset = "0x3FC9360", VA = "0x3FC9360", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003D5C")]
	[Address(RVA = "0x3FC9370", Offset = "0x3FC9370", VA = "0x3FC9370", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003D5D")]
	[Address(RVA = "0x3FC9FB0", Offset = "0x3FC9FB0", VA = "0x3FC9FB0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6003D5E")]
	[Address(RVA = "0x3FCA180", Offset = "0x3FCA180", VA = "0x3FCA180")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6003D5F")]
	[Address(RVA = "0x3FCA1A0", Offset = "0x3FCA1A0", VA = "0x3FCA1A0")]
	private static void HidePopupIfActive(BasePopup popup)
	{
	}

	[Token(Token = "0x6003D60")]
	[Address(RVA = "0x3FCA230", Offset = "0x3FCA230", VA = "0x3FCA230")]
	private void Update()
	{
	}

	[Token(Token = "0x6003D61")]
	[Address(RVA = "0x3FCA4C0", Offset = "0x3FCA4C0", VA = "0x3FCA4C0")]
	private void RegisterFadeSyncGroup(GameObject target)
	{
	}

	[Token(Token = "0x6003D62")]
	[Address(RVA = "0x3FCA5E0", Offset = "0x3FCA5E0", VA = "0x3FCA5E0", Slot = "25")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6003D63")]
	[Address(RVA = "0x3FC93A0", Offset = "0x3FC93A0", VA = "0x3FC93A0")]
	private void SubscribeToManager()
	{
	}

	[Token(Token = "0x6003D64")]
	[Address(RVA = "0x3FC9FC0", Offset = "0x3FC9FC0", VA = "0x3FC9FC0")]
	private void UnsubscribeFromManager()
	{
	}

	[Token(Token = "0x6003D65")]
	[Address(RVA = "0x3FCA760", Offset = "0x3FCA760", VA = "0x3FCA760")]
	private void OnAuthChanged()
	{
	}

	[Token(Token = "0x6003D66")]
	[Address(RVA = "0x3FCA910", Offset = "0x3FCA910", VA = "0x3FCA910")]
	private void OnRoomBanListReceived(RoomBanPage page)
	{
	}

	[Token(Token = "0x6003D67")]
	[Address(RVA = "0x3FCABC0", Offset = "0x3FCABC0", VA = "0x3FCABC0")]
	private void OnRegionBanListReceived(RegionBanPage page)
	{
	}

	[Token(Token = "0x6003D68")]
	[Address(RVA = "0x3FC9570", Offset = "0x3FC9570", VA = "0x3FC9570")]
	private void BuildUI()
	{
	}

	[Token(Token = "0x6003D69")]
	[Address(RVA = "0x3FCA770", Offset = "0x3FCA770", VA = "0x3FCA770")]
	private void RebuildUI()
	{
	}

	[Token(Token = "0x6003D6A")]
	[Address(RVA = "0x3FCAD80", Offset = "0x3FCAD80", VA = "0x3FCAD80")]
	private void BuildTabButtons(Transform tabRow, ElementStyle style)
	{
	}

	[Token(Token = "0x6003D6B")]
	[Address(RVA = "0x3FCB6B0", Offset = "0x3FCB6B0", VA = "0x3FCB6B0")]
	private void AddTabButton(Transform parent, ElementStyle style, Tab tab, string label)
	{
	}

	[Token(Token = "0x6003D6C")]
	[Address(RVA = "0x3FCB020", Offset = "0x3FCB020", VA = "0x3FCB020")]
	private void SetActiveTab(Tab tab)
	{
	}

	[Token(Token = "0x6003D6D")]
	[Address(RVA = "0x3FCB870", Offset = "0x3FCB870", VA = "0x3FCB870")]
	private void OnSearchChanged()
	{
	}

	[Token(Token = "0x6003D6E")]
	[Address(RVA = "0x3FCAFA0", Offset = "0x3FCAFA0", VA = "0x3FCAFA0")]
	private string GetSearchTerm(Tab tab)
	{
		return null;
	}

	[Token(Token = "0x6003D6F")]
	[Address(RVA = "0x3FCB900", Offset = "0x3FCB900", VA = "0x3FCB900")]
	private bool MatchesSearch(Tab tab, string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6003D70")]
	[Address(RVA = "0x3FCA9B0", Offset = "0x3FCA9B0", VA = "0x3FCA9B0")]
	private void RefreshActiveTab()
	{
	}

	[Token(Token = "0x6003D71")]
	[Address(RVA = "0x3FCB9E0", Offset = "0x3FCB9E0", VA = "0x3FCB9E0")]
	private void PopulatePlayerList(ElementStyle style, bool active)
	{
	}

	[Token(Token = "0x6003D72")]
	[Address(RVA = "0x3FCC4A0", Offset = "0x3FCC4A0", VA = "0x3FCC4A0")]
	private void BuildPlayerListFooter(ElementStyle style)
	{
	}

	[Token(Token = "0x6003D73")]
	[Address(RVA = "0x3FCC790", Offset = "0x3FCC790", VA = "0x3FCC790")]
	private void BuildPastPlayerFooter(ElementStyle style)
	{
	}

	[Token(Token = "0x6003D74")]
	[Address(RVA = "0x3FCC8F0", Offset = "0x3FCC8F0", VA = "0x3FCC8F0")]
	private void PopulateRoomBanList(ElementStyle style)
	{
	}

	[Token(Token = "0x6003D75")]
	[Address(RVA = "0x3FCCD10", Offset = "0x3FCCD10", VA = "0x3FCCD10")]
	private void BuildRoomBanFooter(ElementStyle style)
	{
	}

	[Token(Token = "0x6003D76")]
	[Address(RVA = "0x3FCCFF0", Offset = "0x3FCCFF0", VA = "0x3FCCFF0")]
	private void PopulateRegionBanList(ElementStyle style)
	{
	}

	[Token(Token = "0x6003D77")]
	[Address(RVA = "0x3FCD410", Offset = "0x3FCD410", VA = "0x3FCD410")]
	private void BuildRegionBanFooter(ElementStyle style)
	{
	}

	[Token(Token = "0x6003D78")]
	[Address(RVA = "0x3FCDBD0", Offset = "0x3FCDBD0", VA = "0x3FCDBD0")]
	private void ResetRoomBanPagination()
	{
	}

	[Token(Token = "0x6003D79")]
	[Address(RVA = "0x3FCDA90", Offset = "0x3FCDA90", VA = "0x3FCDA90")]
	private void RequestRoomBanPage(int startIndex, bool reset)
	{
	}

	[Token(Token = "0x6003D7A")]
	[Address(RVA = "0x3FCDCD0", Offset = "0x3FCDCD0", VA = "0x3FCDCD0")]
	private void ResetRegionBanPagination()
	{
	}

	[Token(Token = "0x6003D7B")]
	[Address(RVA = "0x3FCDB30", Offset = "0x3FCDB30", VA = "0x3FCDB30")]
	private void RequestRegionBanPage(int startIndex, bool reset)
	{
	}

	[Token(Token = "0x6003D7C")]
	[Address(RVA = "0x3FCB800", Offset = "0x3FCB800", VA = "0x3FCB800")]
	private void ClearDetailPanel()
	{
	}

	[Token(Token = "0x6003D7D")]
	[Address(RVA = "0x3FCDDD0", Offset = "0x3FCDDD0", VA = "0x3FCDDD0")]
	private void SelectPlayer(PlayerEntry player, bool isActive)
	{
	}

	[Token(Token = "0x6003D7E")]
	[Address(RVA = "0x3FCEB40", Offset = "0x3FCEB40", VA = "0x3FCEB40")]
	private void SelectRoomBan(RoomBanEntry entry)
	{
	}

	[Token(Token = "0x6003D7F")]
	[Address(RVA = "0x3FCEE00", Offset = "0x3FCEE00", VA = "0x3FCEE00")]
	private void SelectRegionBan(RegionBanEntry entry)
	{
	}

	[Token(Token = "0x6003D80")]
	[Address(RVA = "0x3FCF100", Offset = "0x3FCF100", VA = "0x3FCF100")]
	private void PromptReason(string actionTitle, Action<string> onSubmit)
	{
	}

	[Token(Token = "0x6003D81")]
	[Address(RVA = "0x3FCF310", Offset = "0x3FCF310", VA = "0x3FCF310")]
	private void ShowPlayerProps(int actorNumber)
	{
	}

	[Token(Token = "0x6003D82")]
	[Address(RVA = "0x3FCAC60", Offset = "0x3FCAC60", VA = "0x3FCAC60")]
	private string GetAuthStatusText()
	{
		return null;
	}

	[Token(Token = "0x6003D83")]
	[Address(RVA = "0x3FD00F0", Offset = "0x3FD00F0", VA = "0x3FD00F0")]
	private void SetStatus(string text)
	{
	}

	[Token(Token = "0x6003D84")]
	[Address(RVA = "0x3FCD700", Offset = "0x3FCD700", VA = "0x3FCD700")]
	private string GetPlayerDisplayName(PlayerEntry player)
	{
		return null;
	}

	[Token(Token = "0x6003D85")]
	[Address(RVA = "0x3FCE660", Offset = "0x3FCE660", VA = "0x3FCE660")]
	private Transform CreateDetailsBox(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6003D86")]
	[Address(RVA = "0x3FCE8B0", Offset = "0x3FCE8B0", VA = "0x3FCE8B0")]
	private void AddDetailTitle(Transform parent, ElementStyle style, string title)
	{
	}

	[Token(Token = "0x6003D87")]
	[Address(RVA = "0x3FCE8D0", Offset = "0x3FCE8D0", VA = "0x3FCE8D0")]
	private void AddDetailRow(Transform parent, ElementStyle style, string key, string value)
	{
	}

	[Token(Token = "0x6003D88")]
	[Address(RVA = "0x3FCD860", Offset = "0x3FCD860", VA = "0x3FCD860")]
	private void CreateClickableEntry(Transform parent, ElementStyle style, string text, UnityAction onClick)
	{
	}

	[Token(Token = "0x6003D89")]
	[Address(RVA = "0x3FCB330", Offset = "0x3FCB330", VA = "0x3FCB330")]
	private void ClearContainer(Transform container)
	{
	}

	[Token(Token = "0x6003D8A")]
	[Address(RVA = "0x3FD0220", Offset = "0x3FD0220", VA = "0x3FD0220")]
	public ScoreboardModerationPanel()
	{
	}
}
