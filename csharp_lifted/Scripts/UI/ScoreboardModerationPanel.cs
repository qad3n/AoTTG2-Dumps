// ==================== AoTTG2 cross-reference ====================
// Type: UI.ScoreboardModerationPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/ScoreboardModerationPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$get_DoublePanel): clean
			return true;
		}
	}

	[Token(Token = "0x17000DE3")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004FCC")]
		[Address(RVA = "0x5C3EBC0", Offset = "0x5C3DBC0", VA = "0x5C3EBC0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$get_ScrollBar): clean
			return true;
		}
	}

	[Token(Token = "0x6004FCD")]
	[Address(RVA = "0x5C3EBD0", Offset = "0x5C3DBD0", VA = "0x5C3EBD0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$Setup): clean
		MethodInfo method_00;

		this.Setup(parent);
		method_00 = new AottgInGameView();
		this._view = (AottgInGameView)method_00;
		this.SubscribeToManager();
		this.BuildUI();
		return;
	}

	[Token(Token = "0x6004FCE")]
	[Address(RVA = "0x5C3F8A0", Offset = "0x5C3E8A0", VA = "0x5C3F8A0")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$OnDestroy): clean
		this.UnsubscribeFromManager();
		return;
	}

	[Token(Token = "0x6004FCF")]
	[Address(RVA = "0x5C3FA70", Offset = "0x5C3EA70", VA = "0x5C3FA70")]
	private void OnDisable()
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$OnDisable): clean
		ScoreboardModerationPanel.HidePopupIfActive((BasePopup)this._batchBanPopup);
		ScoreboardModerationPanel.HidePopupIfActive((BasePopup)this._propEditPopup);
		ScoreboardModerationPanel.HidePopupIfActive((BasePopup)this._reasonPopup);
		return;
	}

	[Token(Token = "0x6004FD0")]
	[Address(RVA = "0x5C3FAA0", Offset = "0x5C3EAA0", VA = "0x5C3FAA0")]
	private static void HidePopupIfActive(BasePopup popup)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$HidePopupIfActive): clean
		bool bVar1;
		GameObject __this;

		bVar1 = ((Object)popup == null);
		if (bVar1) {
			return;
		}
		if ((popup == null) ||(__this = popup.gameObject, __this == null)) {
			throw new NullReferenceException();
		}
		bVar1 = __this.activeSelf;
		if (bVar1) {
			popup.HideImmediate();
			return;
		}
		return;
	}

	[Token(Token = "0x6004FD1")]
	[Address(RVA = "0x5C3FB30", Offset = "0x5C3EB30", VA = "0x5C3FB30")]
	private void Update()
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$Update): 3 lines keep C-only constructs
		CanvasGroup* targetAddress;
		int index;
		List<CanvasGroup> pSVar1;
		bool bVar2;
		BasePopup x;
		CanvasGroup pUVar3;
		float fVar4;
		float fVar5;

		pUVar3 = this._popupCanvasGroup;
		bVar2 = ((Object)pUVar3 == null);
		if (bVar2) {
			x = this.GetComponentInParent<BasePopup>();
			targetAddress = &this._popupCanvasGroup;
			bVar2 = ((Object)x != null);
			if (bVar2) {
				if (x == null) goto label_05d3fda4;
				pUVar3 = x.GetComponent<CanvasGroup>();
				*targetAddress = pUVar3;
			}
			pUVar3 = *targetAddress;
			bVar2 = ((Object)pUVar3 == null);
			if (bVar2) {
				return;
			}
		}
		fVar4 = 1.0 - this._popupMinFadeAlpha;
		pUVar3 = this._popupCanvasGroup;
		if (fVar4 < Mathf.Epsilon || fVar4 == Mathf.Epsilon) {
			if (pUVar3 == null) goto label_05d3fda4;
			fVar5 = pUVar3.alpha;
		}
		else {
			if (pUVar3 == null) goto label_05d3fda4;
			fVar5 = pUVar3.alpha;
			fVar4 = (fVar5 - this._popupMinFadeAlpha) / fVar4;
			fVar5 = 1.0;
			if (fVar4 <= 1.0) {
				fVar5 = fVar4;
			}
			fVar5 = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar5);
		}
		pSVar1 = this._fadeSyncGroups;
		if (pSVar1 != null) {
			index = pSVar1._size;
			while(true) {
				index = index + -1;
				if (index < 0) {
					return;
				}
				pSVar1 = this._fadeSyncGroups;
				if (pSVar1 == null) break;
				pUVar3 = pSVar1.get_Item(index);
				bVar2 = ((Object)pUVar3 == null);
				if (bVar2) {
					pSVar1 = this._fadeSyncGroups;
					if (pSVar1 == null) break;
					pSVar1.RemoveAt(index);
				}
				else {
					if (pUVar3 == null) break;
					pUVar3.alpha = fVar5;
				}
			}
		}
	label_05d3fda4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004FD2")]
	[Address(RVA = "0x5C3FDB0", Offset = "0x5C3EDB0", VA = "0x5C3FDB0")]
	private void RegisterFadeSyncGroup(GameObject target)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$RegisterFadeSyncGroup): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<CanvasGroup> __this_00;
		CanvasGroup[] pUVar3;
		bool bVar5;
		CanvasGroup item;

		bVar5 = ((Object)target == null);
		if (bVar5) {
			return;
		}
		if (target != null) {
			item = target.GetComponent<CanvasGroup>() ;
			if (item == null) {
				item = target.AddComponent<CanvasGroup>();
			}
			__this_00 = this._fadeSyncGroups;
			if (__this_00 != null) {
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pUVar3 = __this_00._items;
				if (pUVar3 != null) {
					uVar2 = __this_00._size;
					if (uVar2 < (uint)pUVar3.Length) {
						__this_00._size = uVar2 + 1;
						pUVar3[(int)uVar2] = item;
						return;
					}
					__this_00.AddWithResize((object)item);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004FD3")]
	[Address(RVA = "0x5C3FED0", Offset = "0x5C3EED0", VA = "0x5C3FED0", Slot = "25")]
	protected override void SetupPopups()
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$SetupPopups): 6 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<BasePopup> pSVar3;
		BasePopup[] pUVar4;
		Transform pUVar6;
		ModerationBatchBanPopup pUVar7;
		PlayerPropEditPopup pUVar8;
		ModerationReasonPopup pUVar9;

		this.SetupPopups();
		pUVar6 = this.transform;
		pUVar7 = ElementFactory.CreateDefaultPopup<ModerationBatchBanPopup>(pUVar6, false);
		this._batchBanPopup = pUVar7;
		pSVar3 = this._popups;
		if (pSVar3 != null) {
			pUVar7 = this._batchBanPopup;
			piVar1 = &pSVar3._version;
			*piVar1 = *piVar1 + 1;
			pUVar4 = pSVar3._items;
			if (pUVar4 != null) {
				uVar2 = pSVar3._size;
				if (uVar2 < (uint)pUVar4.Length) {
					pSVar3._size = uVar2 + 1;
					pUVar4[(int)uVar2] = (BasePopup)pUVar7;
				}
				else {
					pSVar3.AddWithResize((object)pUVar7);
				}
				pUVar6 = this.transform;
				pUVar8 = ElementFactory.CreateDefaultPopup<PlayerPropEditPopup>(pUVar6, false);
				this._propEditPopup = pUVar8;
				pSVar3 = this._popups;
				if (pSVar3 != null) {
					pUVar8 = this._propEditPopup;
					piVar1 = &pSVar3._version;
					*piVar1 = *piVar1 + 1;
					pUVar4 = pSVar3._items;
					if (pUVar4 != null) {
						uVar2 = pSVar3._size;
						if (uVar2 < (uint)pUVar4.Length) {
							pSVar3._size = uVar2 + 1;
							pUVar4[(int)uVar2] = (BasePopup)pUVar8;
						}
						else {
							pSVar3.AddWithResize((object)pUVar8);
						}
						pUVar6 = this.transform;
						pUVar9 = ElementFactory.CreateDefaultPopup<ModerationReasonPopup>(pUVar6, false);
						this._reasonPopup = pUVar9;
						pSVar3 = this._popups;
						if (pSVar3 != null) {
							pUVar9 = this._reasonPopup;
							piVar1 = &pSVar3._version;
							*piVar1 = *piVar1 + 1;
							pUVar4 = pSVar3._items;
							if (pUVar4 != null) {
								uVar2 = pSVar3._size;
								if (uVar2 < (uint)pUVar4.Length) {
									pSVar3._size = uVar2 + 1;
									pUVar4[(int)uVar2] = (BasePopup)pUVar9;
									return;
								}
								pSVar3.AddWithResize((object)pUVar9);
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004FD4")]
	[Address(RVA = "0x5C3EC50", Offset = "0x5C3DC50", VA = "0x5C3EC50")]
	private void SubscribeToManager()
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$SubscribeToManager): 6 lines keep C-only constructs
		sbyte cVar1;
		Action pSVar2;
		Action<string> __this_00;
		Action<RoomBanPage> __this_01;
		Action<RegionBanPage> __this_02;

		if (Il2CppMethodInitialized_07547e87 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ScoreboardModerationPanel_OnRoomBanListReceived) ;
			Il2CppMethodInitialized_07547e87 = true;
			cVar1 = this._subscribed;
		}
		else {
			cVar1 = this._subscribed;
		}
		if (cVar1 != false) {
			return;
		}
		pSVar2 = new Action((object)this, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_OnAuthChanged);
		ModeratorManager.add_AuthChanged(pSVar2);
		pSVar2 = new Action((object)this, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_RefreshActiveTab);
		ModeratorManager.add_PlayerListChanged(pSVar2);
		__this_00 = new Action<string>((object)this, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_SetStatus);
		ModeratorManager.add_StatusMessage(__this_00);
		__this_01 = new Action<RoomBanPage>((object)this, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_OnRoomBanListReceived);
		ModeratorManager.add_RoomBanListReceived(__this_01);
		__this_02 = new Action<RegionBanPage>((object)this, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_OnRegionBanListReceived);
		ModeratorManager.add_RegionBanListReceived(__this_02);
		this._subscribed = true;
		return;
	}

	[Token(Token = "0x6004FD5")]
	[Address(RVA = "0x5C3F8B0", Offset = "0x5C3E8B0", VA = "0x5C3F8B0")]
	private void UnsubscribeFromManager()
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$UnsubscribeFromManager): 6 lines keep C-only constructs
		Action pSVar1;
		Action<string> __this_00;
		Action<RoomBanPage> __this_01;
		Action<RegionBanPage> __this_02;

		if (Il2CppMethodInitialized_07547e88 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ScoreboardModerationPanel_OnRoomBanListReceived) ;
			Il2CppMethodInitialized_07547e88 = true;
		}
		if (this._subscribed != false) {
			pSVar1 = new Action((object)this, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_OnAuthChanged);
			ModeratorManager.remove_AuthChanged(pSVar1);
			pSVar1 = new Action((object)this, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_RefreshActiveTab);
			ModeratorManager.remove_PlayerListChanged(pSVar1);
			__this_00 = new Action<string>((object)this, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_SetStatus);
			ModeratorManager.remove_StatusMessage(__this_00);
			__this_01 = new Action<RoomBanPage>((object)this, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_OnRoomBanListReceived);
			ModeratorManager.remove_RoomBanListReceived(__this_01);
			__this_02 = new Action<RegionBanPage>((object)this, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_OnRegionBanListReceived);
			ModeratorManager.remove_RegionBanListReceived(__this_02);
			this._subscribed = false;
		}
		return;
	}

	[Token(Token = "0x6004FD6")]
	[Address(RVA = "0x5C400F0", Offset = "0x5C3F0F0", VA = "0x5C400F0")]
	private void OnAuthChanged()
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$OnAuthChanged): clean
		this.RebuildUI();
		return;
	}

	[Token(Token = "0x6004FD7")]
	[Address(RVA = "0x5C402A0", Offset = "0x5C3F2A0", VA = "0x5C402A0")]
	private void OnRoomBanListReceived(RoomBanPage page)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$OnRoomBanListReceived): clean
		List<RoomBanEntry> __this_00;
		RoomBanEntry[] method_00;

		method_00 = (RoomBanEntry[])page;
		this._roomBanRequestPending = false;
		if (page != null) {
			this._roomBanCount = page.Count;
			this._roomBanNextStart = page.EndIndex;
			this._roomBanLoaded = true;
			method_00 = page.Entries;
			if ((method_00 != null) && (method_00.Length != 0)) {
				__this_00 = this._cachedRoomBans;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.AddRange((IEnumerable<T>)method_00);
			}
		}
		if (this._activeTab == 2) {
			this.RefreshActiveTab();
			return;
		}
		return;
	}

	[Token(Token = "0x6004FD8")]
	[Address(RVA = "0x5C40550", Offset = "0x5C3F550", VA = "0x5C40550")]
	private void OnRegionBanListReceived(RegionBanPage page)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$OnRegionBanListReceived): clean
		List<RegionBanEntry> __this_00;
		RegionBanEntry[] method_00;

		method_00 = (RegionBanEntry[])page;
		this._regionBanRequestPending = false;
		if (page != null) {
			this._regionBanCount = page.Count;
			this._regionBanNextStart = page.EndIndex;
			this._regionBanLoaded = true;
			method_00 = page.Entries;
			if ((method_00 != null) && (method_00.Length != 0)) {
				__this_00 = this._cachedRegionBans;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.AddRange((IEnumerable<T>)method_00);
			}
		}
		if (this._activeTab == 3) {
			this.RefreshActiveTab();
			return;
		}
		return;
	}

	[Token(Token = "0x6004FD9")]
	[Address(RVA = "0x5C3EE20", Offset = "0x5C3DE20", VA = "0x5C3EE20")]
	private void BuildUI()
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$BuildUI): 10 lines keep C-only constructs
		byte bVar1;
		int key;
		uint uVar2;
		Dictionary<ScoreboardModerationPanel.Tab, Button> __this_00;
		StringSetting pSVar3;
		Dictionary<ScoreboardModerationPanel.Tab, string> __this_01;
		Graphic pUVar4;
		Il2CppType handle;
		bool bVar5;
		int iVar6;
		String pSVar7;
		ElementStyle __this_02;
		ScoreboardModerationPanel __this_03;
		Transform pUVar8;
		GameObject pUVar9;
		Text pUVar10;
		UnityAction __this_04;
		InputField x;
		VerticalLayoutGroup pUVar11;
		RectOffset __this_05;
		LayoutElement pUVar12;
		Type[] components;
		Type obj;
		object pIVar13;
		MethodInfo* method_00;
		object* value;
		Graphic x_00;
		float fVar14;
		float fVar15;
		float elementWidth;
		object local_38;

		pSVar7 = this.get_ThemePanel();
		__this_02 = new ElementStyle(0x18, 120.0, 20.0, pSVar7);
		fVar14 = this.GetPanelWidth();
		iVar6 = this.get_HorizontalPadding();
		__this_03 = (ScoreboardModerationPanel)ElementFactory.CreateHorizontalGroup(this.DoublePanelLeft, 15.0, 3);
		if (__this_03 == null) goto label_05d3f87a;
		pUVar8 = __this_03.transform;
		pSVar7 = __this_03.GetAuthStatusText();
		pUVar9 = ElementFactory.CreateDefaultLabel(pUVar8, __this_02, pSVar7, 0, 3);
		if (pUVar9 == null) goto label_05d3f87a;
		method_00 = &MethodInfo_UnityEngine_GameObject_GetComponent_Text;
		pUVar10 = pUVar9.GetComponent<Text>();
		this._authLabel = pUVar10;
		pUVar9 = ElementFactory.CreateHorizontalGroup(this.DoublePanelLeft, 10.0, 3) ;
		if (pUVar9 == null) goto label_05d3f87a;
		pUVar8 = pUVar9.transform;
		__this_00 = this._tabButtons;
		if (__this_00 == null) goto label_05d3f87a;
		__this_00.Clear();
		this.BuildTabButtons(pUVar8, __this_02);
		pUVar9 = ElementFactory.CreateHorizontalGroup(this.DoublePanelLeft, 8.0, 3);
		if (pUVar9 == null) goto label_05d3f87a;
		pUVar8 = pUVar9.transform;
		pSVar3 = this._searchSetting;
		key = this._activeTab;
		local_38 = null;
		__this_01 = this._searchTerms;
		if (__this_01 == null) goto label_05d3f87a;
		value = &local_38;
		bVar5 = __this_01.TryGetValue(key, value);
		if (!bVar5) {
			value = *(object**)(g_data_07556758 + 0xb8);
		}
		if (pSVar3 == null) goto label_05d3f87a;
		fVar14 = fVar14 * 0.5 - ((float)iVar6 + (float)iVar6);
		pSVar3.Value = *value;
		pSVar3 = this._searchSetting;
		pSVar7 = UIManager.GetLocaleCommon("Search");
		fVar15 = fVar14 + -20.0;
		elementWidth = 160.0;
		if (160.0 <= fVar15) {
			elementWidth = fVar15;
		}
		__this_04 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_OnSearchChanged);
		pUVar9 = ElementFactory.CreateInputSetting(pUVar8, __this_02, (BaseSetting)pSVar3, pSVar7, "", elementWidth, 34.0, false, __this_04, null, null, null);
		if ((pUVar9 == null) ||(pUVar8 = pUVar9.transform, pUVar8 == null)) goto label_05d3f87a;
		x = null;
		pUVar8 = pUVar8.Find("InputField");
		if (pUVar8 != null) {
			x = pUVar8.GetComponent<InputField>();
		}
		bVar5 = ((Object)x != null);
		if (bVar5) {
			if (x == null) goto label_05d3f87a;
			pUVar4 = x.m_Placeholder;
			if (pUVar4 == null) {
	label_05d3f2f9: ;
				x_00 = null;
				uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
			}
			else {
				bVar1 = (typeof(Text)._2).typeHierarchyDepth;
				if ((pUVar4.klass._2).typeHierarchyDepth < bVar1) goto label_05d3f2f9;
				x_00 = null;
				if ((pUVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Text)) {
					x_00 = pUVar4;
				}
				uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
			}
			bVar5 = ((Object)x_00 != null);
			pSVar7 = "SearchPlaceholder";
			if (bVar5) {
				pSVar7 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar7, "", "");
				if (x_00 == null) goto label_05d3f87a;
				(*(code)((Il2CppClass)x_00.klass).vtable[75].methodPtr)(x_00,pSVar7,((Il2CppClass)x_00.klass).vtable[75].method);
			}
		}
		pUVar8 = this.DoublePanelLeft;
		if (pUVar8 != null) {
			pUVar11 = pUVar8.GetComponent<VerticalLayoutGroup>();
			bVar5 = ((Object)pUVar11 != null);
			if (bVar5) {
				if (pUVar11 == null) goto label_05d3f87a;
				pUVar11.childForceExpandHeight = false;
			}
			pUVar9 = ElementFactory.CreateVerticalGroup(this.DoublePanelLeft, 2.0, 0);
			this.StyleListBox(pUVar9);
			this.RegisterFadeSyncGroup(pUVar9);
			if (pUVar9 != null) {
				pUVar11 = pUVar9.GetComponent<VerticalLayoutGroup>();
				bVar5 = ((Object)pUVar11 != null);
				if (bVar5) {
					__this_05 = new RectOffset(8, 8, 6, 6);
					if (pUVar11 == null) goto label_05d3f87a;
					pUVar11.padding = __this_05;
					pUVar11.childAlignment = 0;
					pUVar11.childControlWidth = true;
					pUVar11.childControlHeight = true;
					pUVar11.childForceExpandWidth = true;
					pUVar11.childForceExpandHeight = false;
				}
				pUVar12 = pUVar9.GetComponent<LayoutElement>();
				if ((pUVar12 != null) ||(pUVar12 = pUVar9.AddComponent<LayoutElement>(), pUVar12 != null)) {
					pUVar12.set_preferredWidth(fVar14);
					pUVar12.set_flexibleWidth(1.0);
					fVar14 = this.GetPanelHeight();
					pUVar12.set_preferredHeight((fVar14 + -160.0) * 0.8);
					pUVar12.set_flexibleHeight(0.0);
					pUVar8 = pUVar9.transform;
					this._listContainer = pUVar8;
					pUVar8 = this.DoublePanelRight;
					if (pUVar8 != null) {
						pUVar11 = pUVar8.GetComponent<VerticalLayoutGroup>();
						bVar5 = ((Object)pUVar11 != null);
						if (bVar5) {
							if (pUVar11 == null) goto label_05d3f87a;
							pUVar11.childForceExpandHeight = false;
						}
						pUVar9 = ElementFactory.CreateHorizontalGroup(this.DoublePanelRight, 0.0, 5);
						if (pUVar9 != null) {
							pUVar8 = pUVar9.transform;
							pUVar9 = ElementFactory.CreateDefaultLabel(pUVar8, __this_02, (String)**(ulong*)(g_data_07556758 + 0xb8), 0, 5);
							if (pUVar9 != null) {
								pUVar10 = pUVar9.GetComponent<Text>();
								this._statusLabel = pUVar10;
								components = (Type[])new Type[1];
								handle = TypeRef_UnityEngine_RectTransform;
								obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
								if (components != null) {
									if ((obj != null) &&(pIVar13 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class), pIVar13 == null)) {
										pIVar13 = new ArrayTypeMismatchException();
										throw pIVar13;
									}
									if ((int)components.Length == 0) {
										throw new IndexOutOfRangeException();
									}
									components[0] = obj;
									pUVar9 = new GameObject("DetailsSpacer", components);
									if ((pUVar9 != null) &&(pUVar8 = pUVar9.transform, pUVar8 != null)) {
										pUVar8.SetParent(this.DoublePanelRight, false);
										pUVar12 = pUVar9.AddComponent<LayoutElement>();
										if (pUVar12 != null) {
											pUVar12.set_preferredHeight(12.0);
											pUVar12.set_flexibleHeight(0.0);
											pUVar9 = ElementFactory.CreateVerticalGroup(this.DoublePanelRight, 10.0, 0);
											if (pUVar9 != null) {
												pUVar8 = pUVar9.transform;
												this._detailContainer = pUVar8;
												this.SetActiveTab(this._activeTab) ;
												return;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_05d3f87a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004FDA")]
	[Address(RVA = "0x5C40100", Offset = "0x5C3F100", VA = "0x5C40100")]
	private void RebuildUI()
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$RebuildUI): 5 lines keep C-only constructs
		Transform* targetAddress;
		Transform x;
		Dictionary<ScoreboardModerationPanel.Tab, Button> __this_00;
		bool bVar1;
		Object obj;
		MethodInfo method_02;
		ScoreboardModerationPanel __this_01;

		this._authLabel = null;
		this._statusLabel = null;
		this._listContainer = null;
		this._detailContainer = null;
		x = this._footerRow;
		bVar1 = ((Object)x != null);
		if (bVar1) {
			targetAddress = &this._footerRow;
			if (*targetAddress == null) goto label_05d40296;
			obj = (Object)(*targetAddress).gameObject;
			Object.Destroy(obj);
			*targetAddress = null;
		}
		__this_00 = this._tabButtons;
		if (__this_00 != null) {
			__this_00.Clear();
			this._selectedPlayer = null;
			this._selectedRoomBan = null;
			__this_01 = (ScoreboardModerationPanel)&this._selectedRegionBan;
			this._selectedRegionBan = null;
			__this_01.ClearContainer(this.DoublePanelLeft);
			method_02 = (MethodInfo)this.DoublePanelRight;
			__this_01.ClearContainer((Transform)method_02);
			this.BuildUI();
			return;
		}
	label_05d40296: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004FDB")]
	[Address(RVA = "0x5C40830", Offset = "0x5C3F830", VA = "0x5C40830")]
	private void BuildTabButtons(Transform tabRow, ElementStyle style)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$BuildTabButtons): clean
		bool bVar1;
		int iVar2;
		String pSVar3;
		sbyte cVar4;

		bVar1 = PhotonNetwork.IsMasterClient;
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07547eed == false) goto label_05d40944;
	label_05d408e1: ;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05d408ee;
	label_05d40964: ;
			cVar4 = ModeratorManager._IsAuthenticated_k__BackingField;
			if (Il2CppMethodInitialized_07547eee == false) goto label_05d40981;
	label_05d40902: ;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05d4090f;
	label_05d409a1: ;
			iVar2 = ModeratorManager._AuthLevel_k__BackingField;
			if (!bVar1) goto label_05d409bd;
	label_05d40922: ;
			bVar1 = 0 < iVar2 && cVar4 != false;
		}
		else {
			if (Il2CppMethodInitialized_07547eed != false) goto label_05d408e1;
	label_05d40944: ;
			Il2CppMethodInitialized_07547eed = true;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05d40964;
	label_05d408ee: ;
			cVar4 = ModeratorManager._IsAuthenticated_k__BackingField;
			if (Il2CppMethodInitialized_07547eee != false) goto label_05d40902;
	label_05d40981: ;
			Il2CppMethodInitialized_07547eee = true;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05d409a1;
	label_05d4090f: ;
			iVar2 = ModeratorManager._AuthLevel_k__BackingField;
			if (bVar1) goto label_05d40922;
	label_05d409bd: ;
			bVar1 = 0 < iVar2 && cVar4 != false;
			if (iVar2 < 0 || cVar4 == false) goto label_05d40ba4;
		}
		pSVar3 = "Players";
		pSVar3 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar3, "", "");
		this.AddTabButton(tabRow, style, 0, pSVar3);
		pSVar3 = "PastPlayers";
		pSVar3 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar3, "", "");
		this.AddTabButton(tabRow, style, 1, pSVar3);
		pSVar3 = "RoomBans";
		pSVar3 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar3, "", "");
		this.AddTabButton(tabRow, style, 2, pSVar3);
	label_05d40ba4: ;
		pSVar3 = "RegionBans";
		if (bVar1) {
			pSVar3 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar3, "", "");
			this.AddTabButton(tabRow, style, 3, pSVar3);
			return;
		}
		return;
	}

	[Token(Token = "0x6004FDC")]
	[Address(RVA = "0x5C41450", Offset = "0x5C40450", VA = "0x5C41450")]
	private void AddTabButton(Transform parent, ElementStyle style, Tab tab, string label)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$AddTabButton): 1 lines keep C-only constructs
		int key;
		Dictionary<ScoreboardModerationPanel.Tab, Button> __this_00;
		ScoreboardModerationPanel.c__DisplayClass52_0 __this_01;
		UnityAction __this_02;
		GameObject __this_03;
		Button value;

		__this_01 = new ScoreboardModerationPanel.c__DisplayClass52_0();
		if (__this_01 != null) {
			__this_01.__4__this = this;
			__this_01.tab = tab;
			__this_02 = new UnityAction((object)__this_01, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass52_0_AddTabButton_b__0);
			__this_03 = ElementFactory.CreateDefaultButton(parent, style, label, 0.0, 0.0, __this_02) ;
			if (__this_03 != null) {
				__this_00 = this._tabButtons;
				key = __this_01.tab;
				value = __this_03.GetComponent<Button>();
				if (__this_00 != null) {
					__this_00.set_Item(key, (object)value);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004FDD")]
	[Address(RVA = "0x5C40E80", Offset = "0x5C3FE80", VA = "0x5C40E80")]
	private void SetActiveTab(Tab tab)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$SetActiveTab): 8 lines keep C-only constructs
		StringSetting __this_00;
		Dictionary<ScoreboardModerationPanel.Tab, string> __this_01;
		Dictionary<ScoreboardModerationPanel.Tab, Button> __this_02;
		bool bVar1;
		object* ppIVar2;
		MethodInfo method_01;
		ScoreboardModerationPanel __this_03;
		object local_68;
		System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_60;
		System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_58;

		local_58._current.key = null;
		local_58._current.value = null;
		local_58._dictionary = null;
		local_58._version = 0;
		local_58._index = 0;
		local_58._getEnumeratorRetType = 0;
		local_58._36_4_ = 0;
		this._activeTab = tab;
		this._selectedPlayer = null;
		this._selectedRoomBan = null;
		this._selectedRegionBan = null;
		__this_00 = this._searchSetting;
		if (__this_00 != null) {
			ppIVar2 = &local_68;
			local_68 = null;
			__this_01 = this._searchTerms;
			if (__this_01 == null) goto label_05d410d7;
			bVar1 = __this_01.TryGetValue(tab, ref local_68);
			if (!bVar1) {
				ppIVar2 = *(object**)(g_data_07556758 + 0xb8);
			}
			__this_00.Value = *ppIVar2;
		}
		__this_02 = this._tabButtons;
		if (__this_02 != null) {
			local_58 = __this_02.GetEnumerator();
			local_68 = null;
			local_60 = &local_58;
			while(true) {
				bVar1 = local_58.MoveNext();
				if (!bVar1) {
					method_01 = MethodInfo_System_Collections_Generic_Dictionary_Enumerator_ScoreboardModerationPanel_Tab_Button_Dispose ;
					local_58.Dispose();
					this.RefreshActiveTab();
					__this_03 = (ScoreboardModerationPanel)this._detailContainer;
					bVar1 = ((Object)__this_03 == null);
					if (!bVar1) {
						__this_03.ClearContainer(this._detailContainer);
					}
					return;
				}
				if ((Selectable)local_58._current.value ==null) break;
				local_58._current.value.interactable = (int)local_58._current.key != tab;
			}
			throw new NullReferenceException();
		}
	label_05d410d7: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004FDE")]
	[Address(RVA = "0x5C41610", Offset = "0x5C40610", VA = "0x5C41610")]
	private void OnSearchChanged()
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$OnSearchChanged): clean
		uint key;
		StringSetting pSVar1;
		Dictionary<ScoreboardModerationPanel.Tab, string> __this_00;
		String value;

		pSVar1 = this._searchSetting;
		if (pSVar1 == null) {
			return;
		}
		__this_00 = this._searchTerms;
		value = pSVar1._value;
		if (value == null) {
			value = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		key = this._activeTab;
		__this_00.set_Item(key, (object)value);
		this.RefreshActiveTab();
		return;
	}

	[Token(Token = "0x6004FDF")]
	[Address(RVA = "0x5C40C70", Offset = "0x5C3FC70", VA = "0x5C40C70")]
	private string GetSearchTerm(Tab tab)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$GetSearchTerm): 2 lines keep C-only constructs
		Dictionary<ScoreboardModerationPanel.Tab, string> __this_00;
		bool bVar1;
		object* ppIVar2;
		object pIStack_18;

		ppIVar2 = &pIStack_18;
		pIStack_18 = null;
		__this_00 = this._searchTerms;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.TryGetValue(tab, ref pIStack_18);
		if (!bVar1) {
			ppIVar2 = *(object**)(g_data_07556758 + 0xb8);
		}
		return (String)*ppIVar2;
	}

	[Token(Token = "0x6004FE0")]
	[Address(RVA = "0x5C416A0", Offset = "0x5C406A0", VA = "0x5C416A0")]
	private bool MatchesSearch(Tab tab, string value)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$MatchesSearch): 2 lines keep C-only constructs
		Dictionary<ScoreboardModerationPanel.Tab, string> __this_00;
		String value_00;
		bool bVar1;
		int iVar2;
		object* value_01;
		bool bVar3;
		object local_20;

		local_20 = null;
		__this_00 = this._searchTerms;
		if (__this_00 == null) {
	label_05d4176e: ;
			throw new NullReferenceException();
		}
		value_01 = &local_20;
		bVar1 = __this_00.TryGetValue(tab, value_01);
		if (!bVar1) {
			value_01 = *(object**)(g_data_07556758 + 0xb8);
		}
		value_00 = (String)*value_01;
		bVar1 = String.IsNullOrEmpty(value_00);
		if (!bVar1) {
			if ((value == null) &&(value = (String)**(long*)(g_data_07556758 + 0xb8), value == null)) goto label_05d4176e;
			iVar2 = value.IndexOf(value_00, 5);
			bVar3 = -1 < iVar2;
		}
		return bVar3;
	}

	[Token(Token = "0x6004FE1")]
	[Address(RVA = "0x5C40340", Offset = "0x5C3F340", VA = "0x5C40340")]
	private void RefreshActiveTab()
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$RefreshActiveTab): 4 lines keep C-only constructs
		Transform* targetAddress;
		Transform x;
		bool bVar1;
		Object obj;
		String themePanel;
		ElementStyle __this_00;
		ScoreboardModerationPanel __this_01;

		bVar1 = ((Object)this == null);
		if (!bVar1) {
			__this_01 = (ScoreboardModerationPanel)this._listContainer;
			bVar1 = ((Object)__this_01 == null);
			if (!bVar1) {
				__this_01.ClearContainer(this._listContainer);
				x = this._footerRow;
				bVar1 = ((Object)x != null);
				if (bVar1) {
					targetAddress = &this._footerRow;
					if (*targetAddress == null) {
						throw new NullReferenceException();
					}
					obj = (Object)(*targetAddress).gameObject;
					Object.Destroy(obj);
					*targetAddress = null;
				}
				themePanel = this.get_ThemePanel();
				__this_00 = new ElementStyle(0x18, 120.0, 20.0, themePanel);
				switch(this._activeTab) {
				case 0:
					this.PopulatePlayerList(__this_00, true);
					this.BuildPlayerListFooter(__this_00);
					return;
				case 1:
					this.PopulatePlayerList(__this_00, false);
					this.BuildPastPlayerFooter(__this_00);
					return;
				case 2:
					this.PopulateRoomBanList(__this_00);
					this.BuildRoomBanFooter(__this_00);
					return;
				case 3:
					this.PopulateRegionBanList(__this_00);
					this.BuildRegionBanFooter(__this_00);
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6004FE2")]
	[Address(RVA = "0x5C41780", Offset = "0x5C40780", VA = "0x5C41780")]
	private void PopulatePlayerList(ElementStyle style, bool active)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$PopulatePlayerList): 22 lines keep C-only constructs
		uint uVar1;
		Dictionary<int, object> pSVar2;
		List<PlayerEntry> pSVar3;
		Transform pUVar4;
		ulong player;
		object pIVar5;
		bool bVar6;
		int iVar7;
		int iVar8;
		ScoreboardModerationPanel.c__DisplayClass58_0 __this_00;
		String pSVar9;
		String pSVar10;
		ScoreboardModerationPanel pUVar11;
		ScoreboardModerationPanel.c__DisplayClass58_1 __this_01;
		String str1;
		ScoreboardModerationPanel.c__DisplayClass58_0 targetAddress;
		ScoreboardModerationPanel pUVar12;
		byte[] local_a0 = new byte[16];
		PlayerEntry local_90;
		PlayerEntry pAStack_88;
		int local_80;
		uint uStack_7c;
		byte[] local_78 = new byte[32];
		System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_58;

		local_58._current.key = null;
		local_58._current.value = null;
		local_58._dictionary = null;
		local_58._version = 0;
		local_58._index = 0;
		local_58._getEnumeratorRetType = 0;
		local_58._36_4_ = 0;
		local_78._0_8_ = null;
		local_78._8_4_ = 0;
		local_78._12_4_ = 0;
		local_78._16_8_ = null;
		uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		if (!active) {
			if (uVar1 == 0) {
				if (g_data_07547ef0 == false) goto label_05d41a23;
	label_05d4193e: ;
				if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05d4194e;
	label_05d41a46: ;
				pSVar3 = ModeratorManager._PastPlayers_k__BackingField;
			}
			else {
				if (g_data_07547ef0 != false) goto label_05d4193e;
	label_05d41a23: ;
				g_data_07547ef0 = true;
				if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05d41a46;
	label_05d4194e: ;
				pSVar3 = ModeratorManager._PastPlayers_k__BackingField;
			}
			if (pSVar3 == null) goto label_05d4208a;
			if (pSVar3._size == 0) goto label_05d41aab;
			if (((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_07547ef0 == false) goto label_05d41d66;
	label_05d41a82: ;
				uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (g_data_07547ef0 != false) goto label_05d41a82;
	label_05d41d66: ;
				g_data_07547ef0 = true;
				uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pSVar3 = ModeratorManager._PastPlayers_k__BackingField;
			}
			else {
				pSVar3 = *(List<PlayerEntry>*)((long)(typeof(ModeratorManager)).static_fields + 0x18);
			}
			if (pSVar3 == null) goto label_05d4208a;
			local_a0.GetEnumerator((List<object>)pSVar3);
			local_78._16_8_ = local_90;
			local_78._0_8_ = local_a0._0_8_;
			local_78._8_8_ = local_a0._8_8_;
			local_a0._0_8_ = null;
			iVar8 = 0;
			local_a0._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o)local_78;
			while (true) {
				bVar6 = local_78.MoveNext();
				player = local_78._16_8_;
				if (!(bVar6)) break;
				__this_01 = new ScoreboardModerationPanel.c__DisplayClass58_1();
				if (__this_01 == null) {
					throw new NullReferenceException();
				}
				pUVar12 = (ScoreboardModerationPanel)&__this_01.__4__this;
				__this_01.__4__this = this;
				pSVar10 = pUVar12.GetPlayerDisplayName((PlayerEntry)player);
				bVar6 = this.MatchesSearch(1, pSVar10);
				pSVar9 = "LeftPlayer";
				if (bVar6) {
					pSVar9 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar9, "", "");
					if ((PlayerEntry)player == null) {
						throw new NullReferenceException();
					}
					str1 = (((PlayerEntry)(player + 0x10)).ActorNumber).ToString();
					pSVar10 = String.Concat("#", str1, " ", pSVar10);
					method = (MethodInfo)String.Format(pSVar9, (object)pSVar10);
					__this_01.capturedPlayer = (PlayerEntry)player;
					pUVar4 = this._listContainer;
					pUVar12 = pUVar11;
					pUVar11 = new UnityAction((object)__this_01, (intptr_t) MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass58_1_PopulatePlayerList_b__1);
					pUVar12.CreateClickableEntry(pUVar4, style, (String)method, (UnityAction)pUVar11);
					iVar8 = iVar8 + 1;
				}
			}
			local_78.Dispose();
			goto label_05d41fb4;
		}
		if (uVar1 == 0) {
			if (g_data_07547eef == false) goto label_05d41975;
	label_05d41900: ;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05d41910;
	label_05d41998: ;
			pSVar2 = (Dictionary<int, object>)ModeratorManager._ActivePlayers_k__BackingField;
		}
		else {
			if (g_data_07547eef != false) goto label_05d41900;
	label_05d41975: ;
			g_data_07547eef = true;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05d41998;
	label_05d41910: ;
			pSVar2 = (Dictionary<int, object>)ModeratorManager._ActivePlayers_k__BackingField;
		}
		if (pSVar2 == null) goto label_05d4208a;
		iVar7 = pSVar2.Count;
		if (iVar7 == 0) {
	label_05d41aab: ;
			pSVar9 = "NoEntries";
			pUVar4 = this._listContainer;
			pSVar9 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar9, "", "");
			ElementFactory.CreateDefaultLabel(pUVar4, style, pSVar9, 0, 3);
			return;
		}
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_07547eef == false) goto label_05d41b7e;
	label_05d419e8: ;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (g_data_07547eef != false) goto label_05d419e8;
	label_05d41b7e: ;
			g_data_07547eef = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = (Dictionary<int, object>)ModeratorManager._ActivePlayers_k__BackingField;
		}
		else {
			pSVar2 = *(Dictionary<int, object>*)((long)(typeof(ModeratorManager)).static_fields + 0x10);
		}
		if (pSVar2 != null) {
			local_a0.GetEnumerator(pSVar2);
			local_58._getEnumeratorRetType = local_80;
			local_58._36_4_ = uStack_7c;
			local_58._current.key = (object)local_90;
			local_58._current.value = (object)pAStack_88;
			local_58._dictionary = (Dictionary<TKey, TValue>)local_a0._0_8_;
			local_58._version = local_a0._8_4_;
			local_58._index = local_a0._12_4_;
			local_a0._0_8_ = null;
			iVar8 = 0;
			local_a0._8_8_ = &local_58;
			while (true) {
				bVar6 = local_58.MoveNext();
				pIVar5 = local_58._current.value;
				if (!(bVar6)) break;
				__this_00 = new ScoreboardModerationPanel.c__DisplayClass58_0();
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.__4__this = this;
				targetAddress = &__this_00.fields;
				__this_00.player = (PlayerEntry)pIVar5;
				pUVar12 = (ScoreboardModerationPanel)targetAddress;
				pSVar9 = pUVar12.GetPlayerDisplayName(targetAddress.player);
				bVar6 = this.MatchesSearch(0, pSVar9);
				if (bVar6) {
					if (targetAddress.player == null) {
						throw new NullReferenceException();
					}
					pSVar10 = (targetAddress.player.ActorNumber).ToString();
					method = (MethodInfo)String.Concat("#", pSVar10, " ", pSVar9);
					pUVar4 = this._listContainer;
					pUVar12 = pUVar11;
					pUVar11 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass58_0_PopulatePlayerList_b__0);
					pUVar12.CreateClickableEntry(pUVar4, style, (String)method, (UnityAction)pUVar11);
					iVar8 = iVar8 + 1;
				}
			}
			local_58.Dispose();
	label_05d41fb4: ;
			pSVar9 = "NoMatchingEntries";
			if (iVar8 == 0) {
				pUVar4 = this._listContainer;
				pSVar9 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar9, "", "");
				ElementFactory.CreateDefaultLabel(pUVar4, style, pSVar9, 0, 3);
			}
			return;
		}
	label_05d4208a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004FE3")]
	[Address(RVA = "0x5C42170", Offset = "0x5C41170", VA = "0x5C42170")]
	private void BuildPlayerListFooter(ElementStyle style)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$BuildPlayerListFooter): 5 lines keep C-only constructs
		Transform* targetAddress;
		sbyte cVar1;
		uint uVar2;
		object @object;
		GameObject __this_00;
		Transform pUVar3;
		String pSVar4;
		UI_ScoreboardModerationPanel___c_StaticFields pUVar5;
		UnityAction pUVar6;

		__this_00 = ElementFactory.CreateHorizontalGroup(this.DoublePanelLeft, 10.0, 3);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pUVar3 = __this_00.transform;
		targetAddress = &this._footerRow;
		this._footerRow = pUVar3;
		pUVar3 = this._footerRow;
		pSVar4 = UIManager.GetLocale("Common", "Refresh", "", "", "");
		if ((typeof(ScoreboardModerationPanel.c)._2).cctor_finished_or_no_cctor == 0) {
			pUVar5 = typeof(ScoreboardModerationPanel.c).static_fields;
			pUVar6 = pUVar5.__9__59_0;
		}
		else {
			pUVar5 = typeof(ScoreboardModerationPanel.c).static_fields;
			pUVar6 = pUVar5.__9__59_0;
		}
		if (pUVar6 == null) {
			if (((typeof(ScoreboardModerationPanel.c))._2).cctor_finished_or_no_cctor == 0) {
				pUVar5 = typeof(ScoreboardModerationPanel.c).static_fields;
			}
			@object = (object)pUVar5.__9;
			pUVar6 = new UnityAction(@object, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c_BuildPlayerListFooter_b__59_0);
			pUVar5 = typeof(ScoreboardModerationPanel.c).static_fields;
			pUVar5.__9__59_0 = pUVar6;
		}
		ElementFactory.CreateDefaultButton(pUVar3, style, pSVar4, 0.0, 0.0, pUVar6);
		if (Il2CppMethodInitialized_07547eed == false) {
			Il2CppMethodInitialized_07547eed = true;
			uVar2 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = *(uint)((long)typeof(ModeratorManager) + 0xe4);
		}
		if (uVar2 == 0) {
			cVar1 = ModeratorManager._IsAuthenticated_k__BackingField;
		}
		else {
			cVar1 = (*(Anticheat_ModeratorManager_StaticFields*)((long)typeof(ModeratorManager) + 0xb8)) ._IsAuthenticated_k__BackingField;
		}
		if (Il2CppMethodInitialized_07547eee == false) {
			Il2CppMethodInitialized_07547eee = true;
			uVar2 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pSVar4 = "BatchBan";
		}
		else {
			pSVar4 = "BatchBan";
		}
		if ((cVar1 == false) ||(*(int)((long)(typeof(ModeratorManager)).static_fields + 0xc) < 1)) {
			"BatchBan" = pSVar4;
			return;
		}
		pUVar3 = *targetAddress;
		"BatchBan" = pSVar4;
		pSVar4 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar4, "", "");
		pUVar6 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_BuildPlayerListFooter_b__59_1);
		ElementFactory.CreateDefaultButton(pUVar3, style, pSVar4, 0.0, 0.0, pUVar6);
		return;
	}

	[Token(Token = "0x6004FE4")]
	[Address(RVA = "0x5C42540", Offset = "0x5C41540", VA = "0x5C42540")]
	private void BuildPastPlayerFooter(ElementStyle style)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$BuildPastPlayerFooter): 1 lines keep C-only constructs
		object @object;
		GameObject __this_00;
		Transform pUVar1;
		String title;
		UI_ScoreboardModerationPanel___c_StaticFields pUVar2;
		UnityAction __this_01;

		__this_00 = ElementFactory.CreateHorizontalGroup(this.DoublePanelLeft, 10.0, 3);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pUVar1 = __this_00.transform;
		this._footerRow = pUVar1;
		pUVar1 = this._footerRow;
		title = UIManager.GetLocale("Common", "Refresh", "", "", "");
		if ((typeof(ScoreboardModerationPanel.c)._2).cctor_finished_or_no_cctor == 0) {
			pUVar2 = typeof(ScoreboardModerationPanel.c).static_fields;
			__this_01 = pUVar2.__9__60_0;
		}
		else {
			pUVar2 = typeof(ScoreboardModerationPanel.c).static_fields;
			__this_01 = pUVar2.__9__60_0;
		}
		if (__this_01 == null) {
			if (((typeof(ScoreboardModerationPanel.c))._2).cctor_finished_or_no_cctor == 0) {
				pUVar2 = typeof(ScoreboardModerationPanel.c).static_fields;
			}
			@object = (object)pUVar2.__9;
			__this_01 = new UnityAction(@object, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c_BuildPastPlayerFooter_b__60_0);
			pUVar2 = typeof(ScoreboardModerationPanel.c).static_fields;
			pUVar2.__9__60_0 = __this_01;
		}
		ElementFactory.CreateDefaultButton(pUVar1, style, title, 0.0, 0.0, __this_01);
		return;
	}

	[Token(Token = "0x6004FE5")]
	[Address(RVA = "0x5C42710", Offset = "0x5C41710", VA = "0x5C42710")]
	private void PopulateRoomBanList(ElementStyle style)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$PopulateRoomBanList): 7 lines keep C-only constructs
		List<RoomBanEntry> __this_00;
		Transform pUVar1;
		object pIVar2;
		bool bVar3;
		int iVar4;
		ScoreboardModerationPanel.c__DisplayClass61_0 __this_01;
		ScoreboardModerationPanel __this_02;
		String pSVar5;
		String first;
		ScoreboardModerationPanel __this_03;
		byte[] local_70 = new byte[16];
		RoomBanEntry local_60;
		System_Collections_Generic_List_Enumerator_object__o local_58;
		Transform local_40;
		MethodInfo local_38;

		pSVar5 = "NoEntries";
		if (this._roomBanLoaded == false) {
			pUVar1 = this._listContainer;
			first = UIManager.GetLocaleCommon("Loading");
			pSVar5 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pSVar5 = GisketchArabicText.Join(first, "...", pSVar5);
			ElementFactory.CreateDefaultLabel(pUVar1, style, pSVar5, 0, 3);
			if (this._roomBanRequestPending == false) {
				this._roomBanRequestPending = true;
				ModeratorManager.RequestRoomBanList(0, 0x32, null);
				return;
			}
		}
		else {
			__this_00 = this._cachedRoomBans;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			if (__this_00._size == 0) {
				pUVar1 = this._listContainer;
				pSVar5 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar5, "", "");
				ElementFactory.CreateDefaultLabel(pUVar1, style, pSVar5, 0, 3);
				return;
			}
			local_70.GetEnumerator((List<object>)__this_00);
			local_58._current = (object)local_60;
			local_58._list = (List<T>)local_70._0_8_;
			local_58._index = local_70._8_4_;
			local_58._version = local_70._12_4_;
			local_70._0_8_ = null;
			iVar4 = 0;
			local_70._8_8_ = &local_58;
			while(true) {
				bVar3 = local_58.MoveNext();
				pIVar2 = local_58._current;
				if (!bVar3) break;
				__this_01 = new ScoreboardModerationPanel.c__DisplayClass61_0();
				if (__this_01 == null) {
					throw new NullReferenceException();
				}
				__this_01.__4__this = this;
				if ((RoomBanEntry)pIVar2 != null) {
					pSVar5 = ((RoomBanEntry)((long)pIVar2 + 0x10)).Username;
					if (pSVar5 == null) {
						pSVar5 = (String)**(ulong*)(g_data_07556758 + 0xb8);
					}
					bVar3 = this.MatchesSearch(2, pSVar5);
					if (bVar3) {
						local_38 = (MethodInfo)ScoreboardModerationPanel.BanEntryLabel(((RoomBanEntry)((long)pIVar2 + 0x10)).Username, ((RoomBanEntry)((long)pIVar2 + 0x10)).IsIPBan);
						__this_01.captured = (RoomBanEntry)pIVar2;
						local_40 = this._listContainer;
						__this_03 = __this_02;
						__this_02 = new UnityAction((object)__this_01, (intptr_t) MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass61_0_PopulateRoomBanList_b__0);
						__this_03.CreateClickableEntry(local_40, style, (String)local_38, (UnityAction)__this_02);
						iVar4 = iVar4 + 1;
					}
				}
			}
			local_58.Dispose();
			pSVar5 = "NoMatchingEntries";
			if (iVar4 == 0) {
				pUVar1 = this._listContainer;
				pSVar5 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar5, "", "");
				ElementFactory.CreateDefaultLabel(pUVar1, style, pSVar5, 0, 3);
			}
		}
		return;
	}

	[Token(Token = "0x6004FE6")]
	[Address(RVA = "0x5C42C80", Offset = "0x5C41C80", VA = "0x5C42C80")]
	private void BuildRoomBanFooter(ElementStyle style)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$BuildRoomBanFooter): 5 lines keep C-only constructs
		Transform* targetAddress;
		List<RoomBanEntry> pSVar1;
		GameObject __this_00;
		Transform pUVar2;
		String pSVar3;
		UnityAction pUVar4;

		__this_00 = ElementFactory.CreateHorizontalGroup(this.DoublePanelLeft, 10.0, 3);
		if (__this_00 != null) {
			pUVar2 = __this_00.transform;
			targetAddress = &this._footerRow;
			this._footerRow = pUVar2;
			pUVar2 = this._footerRow;
			pSVar3 = UIManager.GetLocale("Common", "Refresh", "", "", "");
			pUVar4 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_ResetRoomBanPagination);
			ElementFactory.CreateDefaultButton(pUVar2, style, pSVar3, 0.0, 0.0, pUVar4);
			pSVar3 = "LoadMore";
			if ((this._roomBanLoaded == false) || (-1 < this._roomBanNextStart)) {
				pUVar2 = *targetAddress;
				pSVar3 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar3, "", "");
				pUVar4 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_BuildRoomBanFooter_b__62_0);
				ElementFactory.CreateDefaultButton(pUVar2, style, pSVar3, 0.0, 0.0, pUVar4);
				return;
			}
			pSVar1 = this._cachedRoomBans;
			if (pSVar1 != null) {
				pUVar2 = this._footerRow;
				pSVar3 = ScoreboardModerationPanel.LoadedAllText(pSVar1._size, this._roomBanCount);
				ElementFactory.CreateDefaultLabel(pUVar2, style, pSVar3, 0, 3);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004FE7")]
	[Address(RVA = "0x5C42F30", Offset = "0x5C41F30", VA = "0x5C42F30")]
	private void PopulateRegionBanList(ElementStyle style)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$PopulateRegionBanList): 7 lines keep C-only constructs
		List<RegionBanEntry> __this_00;
		Transform pUVar1;
		object pIVar2;
		bool bVar3;
		int iVar4;
		ScoreboardModerationPanel.c__DisplayClass63_0 __this_01;
		ScoreboardModerationPanel __this_02;
		String pSVar5;
		String first;
		ScoreboardModerationPanel __this_03;
		byte[] local_70 = new byte[16];
		RegionBanEntry local_60;
		System_Collections_Generic_List_Enumerator_object__o local_58;
		Transform local_40;
		MethodInfo local_38;

		pSVar5 = "NoEntries";
		if (this._regionBanLoaded == false) {
			pUVar1 = this._listContainer;
			first = UIManager.GetLocaleCommon("Loading");
			pSVar5 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pSVar5 = GisketchArabicText.Join(first, "...", pSVar5);
			ElementFactory.CreateDefaultLabel(pUVar1, style, pSVar5, 0, 3);
			if (this._regionBanRequestPending == false) {
				this._regionBanRequestPending = true;
				ModeratorManager.RequestRegionBanList(0, 0x32, null);
				return;
			}
		}
		else {
			__this_00 = this._cachedRegionBans;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			if (__this_00._size == 0) {
				pUVar1 = this._listContainer;
				pSVar5 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar5, "", "");
				ElementFactory.CreateDefaultLabel(pUVar1, style, pSVar5, 0, 3);
				return;
			}
			local_70.GetEnumerator((List<object>)__this_00);
			local_58._current = (object)local_60;
			local_58._list = (List<T>)local_70._0_8_;
			local_58._index = local_70._8_4_;
			local_58._version = local_70._12_4_;
			local_70._0_8_ = null;
			iVar4 = 0;
			local_70._8_8_ = &local_58;
			while(true) {
				bVar3 = local_58.MoveNext();
				pIVar2 = local_58._current;
				if (!bVar3) break;
				__this_01 = new ScoreboardModerationPanel.c__DisplayClass63_0();
				if (__this_01 == null) {
					throw new NullReferenceException();
				}
				__this_01.__4__this = this;
				if ((RegionBanEntry)pIVar2 != null) {
					pSVar5 = ((RegionBanEntry)((long)pIVar2 + 0x10)).Username;
					if (pSVar5 == null) {
						pSVar5 = (String)**(ulong*)(g_data_07556758 + 0xb8);
					}
					bVar3 = this.MatchesSearch(3, pSVar5);
					if (bVar3) {
						local_38 = (MethodInfo)ScoreboardModerationPanel.BanEntryLabel(((RegionBanEntry)((long)pIVar2 + 0x10)).Username, ((RegionBanEntry)((long)pIVar2 + 0x10)).IsIPBan) ;
						__this_01.captured = (RegionBanEntry)pIVar2;
						local_40 = this._listContainer;
						__this_03 = __this_02;
						__this_02 = new UnityAction((object)__this_01, (intptr_t) MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass63_0_PopulateRegionBanList_b__0);
						__this_03.CreateClickableEntry(local_40, style, (String)local_38, (UnityAction)__this_02);
						iVar4 = iVar4 + 1;
					}
				}
			}
			local_58.Dispose();
			pSVar5 = "NoMatchingEntries";
			if (iVar4 == 0) {
				pUVar1 = this._listContainer;
				pSVar5 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar5, "", "");
				ElementFactory.CreateDefaultLabel(pUVar1, style, pSVar5, 0, 3);
			}
		}
		return;
	}

	[Token(Token = "0x6004FE8")]
	[Address(RVA = "0x5C434A0", Offset = "0x5C424A0", VA = "0x5C434A0")]
	private void BuildRegionBanFooter(ElementStyle style)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$BuildRegionBanFooter): 5 lines keep C-only constructs
		Transform* targetAddress;
		List<RegionBanEntry> pSVar1;
		GameObject __this_00;
		Transform pUVar2;
		String pSVar3;
		UnityAction pUVar4;

		__this_00 = ElementFactory.CreateHorizontalGroup(this.DoublePanelLeft, 10.0, 3);
		if (__this_00 != null) {
			pUVar2 = __this_00.transform;
			targetAddress = &this._footerRow;
			this._footerRow = pUVar2;
			pUVar2 = this._footerRow;
			pSVar3 = UIManager.GetLocale("Common", "Refresh", "", "", "");
			pUVar4 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_ResetRegionBanPagination);
			ElementFactory.CreateDefaultButton(pUVar2, style, pSVar3, 0.0, 0.0, pUVar4);
			pSVar3 = "LoadMore";
			if ((this._regionBanLoaded == false) || (-1 < this._regionBanNextStart)) {
				pUVar2 = *targetAddress;
				pSVar3 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar3, "", "");
				pUVar4 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_BuildRegionBanFooter_b__64_0);
				ElementFactory.CreateDefaultButton(pUVar2, style, pSVar3, 0.0, 0.0, pUVar4);
				return;
			}
			pSVar1 = this._cachedRegionBans;
			if (pSVar1 != null) {
				pUVar2 = this._footerRow;
				pSVar3 = ScoreboardModerationPanel.LoadedAllText(pSVar1._size, this._regionBanCount);
				ElementFactory.CreateDefaultLabel(pUVar2, style, pSVar3, 0, 3);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004FE9")]
	[Address(RVA = "0x5C43EE0", Offset = "0x5C42EE0", VA = "0x5C43EE0")]
	private void ResetRoomBanPagination()
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$ResetRoomBanPagination): 4 lines keep C-only constructs
		int piVar1;
		sbyte cVar2;
		int length;
		List<RoomBanEntry> pSVar3;
		MethodInfo pMVar4;

		if (Il2CppMethodInitialized_07547e9a == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomBanEntry_Clear) ;
			Il2CppMethodInitialized_07547e9a = true;
		}
		pSVar3 = this._cachedRoomBans;
		if (pSVar3 == null) {
			throw new NullReferenceException();
		}
		piVar1 = &pSVar3._version;
		*piVar1 = *piVar1 + 1;
		length = pSVar3._size;
		pSVar3._size = 0;
		if (0 < length) {
			Array.Clear((Array)pSVar3._items, 0, length);
		}
		this._roomBanCount = 0;
		this._roomBanNextStart = 0;
		this._roomBanLoaded = false;
		this._roomBanRequestPending = false;
		this._selectedRoomBan = null;
		if (Il2CppMethodInitialized_07547e9b == false) {
			Il2CppMethodInitialized_07547e9b = true;
			cVar2 = this._roomBanRequestPending;
		}
		else {
			cVar2 = this._roomBanRequestPending;
		}
		if (cVar2 != false) {
			this.RefreshActiveTab();
			return;
		}
		this._roomBanRequestPending = true;
		pMVar4 = (MethodInfo)&g_data_00000032;
		ModeratorManager.RequestRoomBanList(0, 0x32, null);
		this.RefreshActiveTab();
		return;
	}

	[Token(Token = "0x6004FEA")]
	[Address(RVA = "0x5C43B70", Offset = "0x5C42B70", VA = "0x5C43B70")]
	private void RequestRoomBanPage(int startIndex, bool reset)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$RequestRoomBanPage): clean
		int startIndex_00;

		if ((this._roomBanRequestPending == false) &&(((reset || (this._roomBanLoaded == false)) || (-1 < this._roomBanNextStart)))) {
			this._roomBanRequestPending = true;
			startIndex_00 = 0;
			if (0 < startIndex) {
				startIndex_00 = startIndex;
			}
			ModeratorManager.RequestRoomBanList(startIndex_00, 0x32, null);
			return;
		}
		return;
	}

	[Token(Token = "0x6004FEB")]
	[Address(RVA = "0x5C43FE0", Offset = "0x5C42FE0", VA = "0x5C43FE0")]
	private void ResetRegionBanPagination()
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$ResetRegionBanPagination): 3 lines keep C-only constructs
		int piVar1;
		sbyte cVar2;
		int length;
		List<RegionBanEntry> pSVar3;
		MethodInfo pMVar4;

		pSVar3 = this._cachedRegionBans;
		if (pSVar3 == null) {
			throw new NullReferenceException();
		}
		piVar1 = &pSVar3._version;
		*piVar1 = *piVar1 + 1;
		length = pSVar3._size;
		pSVar3._size = 0;
		if (0 < length) {
			Array.Clear((Array)pSVar3._items, 0, length);
		}
		this._regionBanCount = 0;
		this._regionBanNextStart = 0;
		this._regionBanLoaded = false;
		this._regionBanRequestPending = false;
		this._selectedRegionBan = null;
		if (Il2CppMethodInitialized_07547e9d == false) {
			Il2CppMethodInitialized_07547e9d = true;
			cVar2 = this._regionBanRequestPending;
		}
		else {
			cVar2 = this._regionBanRequestPending;
		}
		if (cVar2 != false) {
			this.RefreshActiveTab();
			return;
		}
		this._regionBanRequestPending = true;
		pMVar4 = (MethodInfo)&g_data_00000032;
		ModeratorManager.RequestRegionBanList(0, 0x32, null);
		this.RefreshActiveTab();
		return;
	}

	[Token(Token = "0x6004FEC")]
	[Address(RVA = "0x5C43E40", Offset = "0x5C42E40", VA = "0x5C43E40")]
	private void RequestRegionBanPage(int startIndex, bool reset)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$RequestRegionBanPage): clean
		int startIndex_00;

		if ((this._regionBanRequestPending == false) &&(((reset || (this._regionBanLoaded == false)) || (-1 < this._regionBanNextStart)) )) {
			this._regionBanRequestPending = true;
			startIndex_00 = 0;
			if (0 < startIndex) {
				startIndex_00 = startIndex;
			}
			ModeratorManager.RequestRegionBanList(startIndex_00, 0x32, null);
			return;
		}
		return;
	}

	[Token(Token = "0x6004FED")]
	[Address(RVA = "0x5C415A0", Offset = "0x5C405A0", VA = "0x5C415A0")]
	private void ClearDetailPanel()
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$ClearDetailPanel): clean
		bool bVar1;
		ScoreboardModerationPanel __this_00;

		__this_00 = (ScoreboardModerationPanel)this._detailContainer;
		bVar1 = ((Object)__this_00 == null);
		if (bVar1) {
			return;
		}
		__this_00.ClearContainer(this._detailContainer);
		return;
	}

	[Token(Token = "0x6004FEE")]
	[Address(RVA = "0x5C440E0", Offset = "0x5C430E0", VA = "0x5C440E0")]
	private void SelectPlayer(PlayerEntry player, bool isActive)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$SelectPlayer): 22 lines keep C-only constructs
		int __this_00;
		int iVar1;
		bool bVar2;
		ScoreboardModerationPanel __this_01;
		String pSVar3;
		ElementStyle __this_02;
		String pSVar4;
		Transform pUVar5;
		GameObject pUVar6;
		UnityAction pUVar7;
		ScoreboardModerationPanel pUVar8;
		String* ppSVar9;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo pMVar10;
		sbyte cVar11;

		__this_01 = new ScoreboardModerationPanel.c__DisplayClass70_0();
		if (__this_01 == null) goto label_05d45059;
		__this_01.m_CancellationTokenSource = (CancellationTokenSource)this;
		this._selectedPlayer = player;
		this._selectedPlayerIsActive = isActive;
		pUVar8 = (ScoreboardModerationPanel)this._detailContainer;
		bVar2 = ((Object)pUVar8 == null);
		if (!bVar2) {
			pUVar8.ClearContainer(this._detailContainer);
		}
		pSVar3 = this.get_ThemePanel();
		__this_02 = new ElementStyle(0x18, 120.0, 20.0, pSVar3);
		if (player == null) goto label_05d45059;
		__this_00 = &player.ActorNumber;
		pUVar8 = (ScoreboardModerationPanel)__this_00;
		pSVar3 = __this_00.ToString();
		pSVar4 = pUVar8.GetPlayerDisplayName(player);
		pSVar4 = String.Concat("#", pSVar3, " ", pSVar4);
		pSVar3 = "LeftPlayer";
		pMVar10 = extraout_RDX;
		if (!isActive) {
			pSVar3 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar3, "", "");
			pSVar4 = String.Format(pSVar3, (object)pSVar4);
			pMVar10 = extraout_RDX_00;
		}
		pUVar5 = this.CreateDetailsBox(this._detailContainer);
		ElementFactory.CreateDefaultLabel(pUVar5, __this_02, pSVar4, 1, 3);
		pSVar3 = "SessionId";
		pMVar10 = null;
		pUVar8 = (UI_ScoreboardModerationPanel_o *)"ScoreboardPopup";
		pSVar4 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar3, "", "");
		pSVar3 = player.SessionId;
		if (pSVar3 == null) goto label_05d45059;
		if (pSVar3._stringLength < 1) {
			ppSVar9 = &"\xe2\x80\x94";
		}
		else {
			ppSVar9 = &player.SessionId;
		}
		pUVar8.AddDetailRow(pUVar5, __this_02, pSVar4, ((PlayerEntry)ppSVar9).SessionId);
		pSVar3 = "IpAddress";
		pMVar10 = null;
		pUVar8 = (UI_ScoreboardModerationPanel_o *)"ScoreboardPopup";
		pSVar4 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar3, "", "");
		pSVar3 = player.IPAddress;
		if (pSVar3 == null) goto label_05d45059;
		if (pSVar3._stringLength < 1) {
			ppSVar9 = &"\xe2\x80\x94";
		}
		else {
			ppSVar9 = &player.IPAddress;
		}
		pUVar8.AddDetailRow(pUVar5, __this_02, pSVar4, *ppSVar9);
		*(int)&__this_01.m_CachedPtr = *__this_00;
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07547eed == false) goto label_05d44bdb;
	label_05d4462d: ;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05d4463e;
	label_05d44bff: ;
			cVar11 = ModeratorManager._IsAuthenticated_k__BackingField;
			if (Il2CppMethodInitialized_07547eee == false) goto label_05d44c20;
	label_05d44656: ;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05d44663;
	label_05d44c40: ;
			iVar1 = ModeratorManager._AuthLevel_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_07547eed != false) goto label_05d4462d;
	label_05d44bdb: ;
			Il2CppMethodInitialized_07547eed = true;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05d44bff;
	label_05d4463e: ;
			cVar11 = ModeratorManager._IsAuthenticated_k__BackingField;
			if (Il2CppMethodInitialized_07547eee != false) goto label_05d44656;
	label_05d44c20: ;
			Il2CppMethodInitialized_07547eee = true;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05d44c40;
	label_05d44663: ;
			iVar1 = ModeratorManager._AuthLevel_k__BackingField;
		}
		if (isActive) {
			pUVar6 = ElementFactory.CreateHorizontalGroup(this._detailContainer, 8.0, 3);
			if (pUVar6 != null) {
				pUVar5 = pUVar6.transform;
				pSVar3 = "Kick";
				pSVar3 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar3, "", "");
				pUVar7 = new UnityAction((object)__this_01, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__0);
				ElementFactory.CreateDefaultButton(pUVar5, __this_02, pSVar3, 0.0, 0.0, pUVar7);
				pSVar3 = "RoomBan";
				pSVar3 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar3, "", "");
				pUVar7 = new UnityAction((object)__this_01, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__1);
				ElementFactory.CreateDefaultButton(pUVar5, __this_02, pSVar3, 0.0, 0.0, pUVar7);
				pSVar3 = "RoomIpBan";
				pSVar3 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar3, "", "");
				pUVar7 = new UnityAction((object)__this_01, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__2);
				ElementFactory.CreateDefaultButton(pUVar5, __this_02, pSVar3, 0.0, 0.0, pUVar7);
				pSVar3 = "ViewProps";
				pSVar3 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar3, "", "");
				pUVar7 = new UnityAction((object)__this_01, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__3);
				ElementFactory.CreateDefaultButton(pUVar5, __this_02, pSVar3, 0.0, 0.0, pUVar7);
				if ((cVar11 == false) || (iVar1 < 1)) {
					return;
				}
				pUVar6 = ElementFactory.CreateHorizontalGroup(this._detailContainer, 8.0, 3);
				if (pUVar6 != null) {
					pUVar5 = pUVar6.transform;
					pSVar3 = "RegionBan";
					pSVar3 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar3, "", "");
					pUVar7 = new UnityAction((object)__this_01, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__6);
					ElementFactory.CreateDefaultButton(pUVar5, __this_02, pSVar3, 0.0, 0.0, pUVar7);
					pSVar3 = "RegionIpBan";
					pSVar3 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar3, "", "");
					pMVar10 = MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__7;
					pUVar8 = __this_01;
	label_05d45019: ;
					pUVar7 = new UnityAction((object)pUVar8, (intptr_t)pMVar10);
					ElementFactory.CreateDefaultButton(pUVar5, __this_02, pSVar3, 0.0, 0.0, pUVar7);
					return;
				}
			}
		}
		else {
			pUVar8 = new ScoreboardModerationPanel.c__DisplayClass70_1();
			if (pUVar8 != null) {
				(((ScoreboardModerationPanel.c__DisplayClass70_0)pUVar8).fields).__4__this = __this_01;
				*(PlayerEntry*)&((ScoreboardModerationPanel.c__DisplayClass70_0)pUVar8).fields = player;
				pUVar6 = ElementFactory.CreateHorizontalGroup(this._detailContainer, 8.0, 3);
				if (pUVar6 != null) {
					pUVar5 = pUVar6.transform;
					pSVar3 = "RoomBan";
					pSVar3 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar3, "", "");
					pUVar7 = new UnityAction((object)pUVar8, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1_SelectPlayer_b__10);
					ElementFactory.CreateDefaultButton(pUVar5, __this_02, pSVar3, 0.0, 0.0, pUVar7);
					pSVar3 = "RoomIpBan";
					pSVar3 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar3, "", "");
					pUVar7 = new UnityAction((object)pUVar8, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1_SelectPlayer_b__11);
					ElementFactory.CreateDefaultButton(pUVar5, __this_02, pSVar3, 0.0, 0.0, pUVar7);
					pSVar3 = "RegionBan";
					if (cVar11 == false) {
						return;
					}
					if (iVar1 < 1) {
						return;
					}
					pSVar3 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar3, "", "");
					pUVar7 = new UnityAction((object)pUVar8, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1_SelectPlayer_b__12);
					ElementFactory.CreateDefaultButton(pUVar5, __this_02, pSVar3, 0.0, 0.0, pUVar7);
					pSVar3 = "RegionIpBan";
					pSVar3 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar3, "", "");
					pMVar10 = MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1_SelectPlayer_b__13;
					goto label_05d45019;
				}
			}
		}
	label_05d45059: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004FEF")]
	[Address(RVA = "0x5C45420", Offset = "0x5C44420", VA = "0x5C45420")]
	private void SelectRoomBan(RoomBanEntry entry)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$SelectRoomBan): 7 lines keep C-only constructs
		bool bVar1;
		ScoreboardModerationPanel.c__DisplayClass71_0 __this_00;
		String pSVar2;
		ElementStyle __this_01;
		Transform pUVar3;
		String key;
		String pSVar4;
		UnityAction __this_02;
		String* ppSVar5;
		ScoreboardModerationPanel pUVar6;

		__this_00 = new ScoreboardModerationPanel.c__DisplayClass71_0();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			this._selectedRoomBan = entry;
			pUVar6 = (ScoreboardModerationPanel)this._detailContainer;
			bVar1 = ((Object)pUVar6 == null);
			if (!bVar1) {
				pUVar6.ClearContainer(this._detailContainer);
			}
			pSVar2 = this.get_ThemePanel();
			__this_01 = new ElementStyle(0x18, 120.0, 20.0, pSVar2);
			pUVar3 = this.CreateDetailsBox(this._detailContainer);
			if (entry != null) {
				ElementFactory.CreateDefaultLabel(pUVar3, __this_01, entry.Username, 1, 3);
				pSVar2 = "Type";
				key = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar2, "", "");
				pSVar4 = "SessionBan";
				pSVar2 = "IpBan";
				if (entry.IsIPBan == false) {
					pUVar6 = (UI_ScoreboardModerationPanel_o *)"ScoreboardPopup";
					pSVar2 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar4, "", "");
				}
				else {
					pUVar6 = (UI_ScoreboardModerationPanel_o *)"ScoreboardPopup";
					pSVar2 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar2, "", "");
				}
				pUVar6.AddDetailRow(pUVar3, __this_01, key, pSVar2);
				pSVar2 = "Reason";
				pUVar6 = (UI_ScoreboardModerationPanel_o *)"ScoreboardPopup";
				pSVar4 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar2, "", "");
				pSVar2 = entry.Reason;
				if (pSVar2 != null) {
					if (pSVar2._stringLength < 1) {
						ppSVar5 = &"\xe2\x80\x94";
					}
					else {
						ppSVar5 = &entry.Reason;
					}
					pUVar6.AddDetailRow(pUVar3, __this_01, pSVar4, *ppSVar5);
					if (entry.CanUnban == false) {
						return;
					}
					__this_00.captured = entry;
					pSVar2 = "Unban";
					pUVar3 = this._detailContainer;
					pSVar2 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar2, "", "");
					__this_02 = new UnityAction((object)__this_00, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass71_0_SelectRoomBan_b__0);
					ElementFactory.CreateDefaultButton(pUVar3, __this_01, pSVar2, 0.0, 0.0, __this_02);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004FF0")]
	[Address(RVA = "0x5C459C0", Offset = "0x5C449C0", VA = "0x5C459C0")]
	private void SelectRegionBan(RegionBanEntry entry)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$SelectRegionBan): 10 lines keep C-only constructs
		bool bVar1;
		ScoreboardModerationPanel.c__DisplayClass72_0 __this_00;
		String pSVar2;
		ElementStyle __this_01;
		Transform pUVar3;
		String key;
		String pSVar4;
		UnityAction __this_02;
		String* ppSVar5;
		ScoreboardModerationPanel pUVar6;

		__this_00 = new ScoreboardModerationPanel.c__DisplayClass72_0();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			this._selectedRegionBan = entry;
			pUVar6 = (ScoreboardModerationPanel)this._detailContainer;
			bVar1 = ((Object)pUVar6 == null);
			if (!bVar1) {
				pUVar6.ClearContainer(this._detailContainer);
			}
			pSVar2 = this.get_ThemePanel();
			__this_01 = new ElementStyle(0x18, 120.0, 20.0, pSVar2);
			pUVar3 = this.CreateDetailsBox(this._detailContainer);
			if (entry != null) {
				ElementFactory.CreateDefaultLabel(pUVar3, __this_01, entry.Username, 1, 3);
				pSVar2 = "Type";
				key = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar2, "", "");
				pSVar4 = "SessionBan";
				pSVar2 = "IpBan";
				if (entry.IsIPBan == false) {
					pUVar6 = (UI_ScoreboardModerationPanel_o *)"ScoreboardPopup";
					pSVar2 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar4, "", "");
				}
				else {
					pUVar6 = (UI_ScoreboardModerationPanel_o *)"ScoreboardPopup";
					pSVar2 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar2, "", "");
				}
				pUVar6.AddDetailRow(pUVar3, __this_01, key, pSVar2);
				pSVar2 = "BannedBy";
				pUVar6 = (UI_ScoreboardModerationPanel_o *)"ScoreboardPopup";
				pSVar4 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar2, "", "");
				pSVar2 = entry.BannedBy;
				if (pSVar2 != null) {
					if (pSVar2._stringLength < 1) {
						ppSVar5 = &"\xe2\x80\x94";
					}
					else {
						ppSVar5 = &entry.BannedBy;
					}
					pUVar6.AddDetailRow(pUVar3, __this_01, pSVar4, *ppSVar5);
					pSVar2 = "Reason";
					pUVar6 = (UI_ScoreboardModerationPanel_o *)"ScoreboardPopup";
					pSVar4 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar2, "", "");
					pSVar2 = entry.Reason;
					if (pSVar2 != null) {
						if (pSVar2._stringLength < 1) {
							ppSVar5 = &"\xe2\x80\x94";
						}
						else {
							ppSVar5 = &entry.Reason;
						}
						pUVar6.AddDetailRow(pUVar3, __this_01, pSVar4, *ppSVar5);
						__this_00.captured = entry;
						pSVar2 = "Unban";
						pUVar3 = this._detailContainer;
						pSVar2 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar2, "", "");
						__this_02 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass72_0_SelectRegionBan_b__0);
						ElementFactory.CreateDefaultButton(pUVar3, __this_01, pSVar2, 0.0, 0.0, __this_02);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004FF1")]
	[Address(RVA = "0x5C46020", Offset = "0x5C45020", VA = "0x5C46020")]
	private void PromptReason(string actionTitle, Action<string> onSubmit)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$PromptReason): clean
		ModerationReasonPopup __this_00;

		__this_00 = this._reasonPopup;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Show(actionTitle, onSubmit);
		return;
	}

	[Token(Token = "0x6004FF2")]
	[Address(RVA = "0x5C46040", Offset = "0x5C45040", VA = "0x5C46040")]
	private void ShowPlayerProps(int actorNumber)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$ShowPlayerProps): 22 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		Hashtable pEVar4;
		String[] pSVar6;
		bool bVar8;
		int iVar9;
		ScoreboardModerationPanel.c__DisplayClass74_0 __this_00;
		String pSVar10;
		Room pPVar11;
		Player pPVar12;
		ScoreboardModerationPanel.c__DisplayClass74_1 pUVar13;
		object pIVar14;
		List<string> __this_01;
		Il2CppClass pIVar16;
		GameObject pUVar17;
		Transform parent;
		LayoutElement pUVar18;
		StringSetting __this_02;
		String pSVar19;
		Transform pUVar20;
		InputField __this_03;
		UnityAction pUVar21;
		object obj;
		ScoreboardModerationPanel __this_04;
		DictionaryEntry SVar25;
		object pIStack_e8;
		ElementStyle pUStack_e0;
		Transform pUStack_d0;
		ScoreboardModerationPanel.c__DisplayClass74_0 pUStack_c8;
		ScoreboardModerationPanel.c__DisplayClass74_1 pUStack_c0;
		String pSStack_b8;
		byte[] auStack_b0 = new byte[16];
		ulong uStack_88;
		ElementStyle pUStack_78;
		Transform pUStack_70;
		byte puStack_60;
		byte[] auStack_58 = new byte[16];
		int iStack_38;
		uint uStack_34;

		auStack_b0._8_8_ = null;
		uStack_88._0_4_ = 0;
		uStack_88._4_4_ = 0;
		pIStack_e8 = null;
		auStack_b0._0_8_ = null;
		__this_00 = new ScoreboardModerationPanel.c__DisplayClass74_0();
		if (__this_00 == null) {
	label_05d46f60: ;
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		__this_00.actorNumber = actorNumber;
		pUStack_c8 = __this_00;
		__this_04 = (ScoreboardModerationPanel)this._detailContainer;
		bVar8 = ((Object)__this_04 == null);
		if (!bVar8) {
			__this_04.ClearContainer(this._detailContainer);
		}
		pSVar10 = this.get_ThemePanel();
		pUStack_e0 = new ElementStyle(0x18, 200.0, 20.0, pSVar10);
		pSVar10 = this.get_ThemePanel();
		pUStack_78 = new ElementStyle(0x18, 200.0, 20.0, pSVar10);
		pPVar12 = null;
		pPVar11 = PhotonNetwork.CurrentRoom;
		if (pPVar11 != null) {
			pPVar12 = pPVar11.GetPlayer(pUStack_c8.actorNumber, false);
		}
		pUStack_d0 = this.CreateDetailsBox(this._detailContainer);
		pSVar10 = "PlayerProps";
		pSVar10 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar10, "", "");
		ElementFactory.CreateDefaultLabel(pUStack_d0, pUStack_e0, pSVar10, 1, 3);
		if (pPVar12 != null) {
			pEVar4 = pPVar12._CustomProperties_k__BackingField;
			if (pEVar4 == null) goto label_05d46f60;
			iVar9 = pEVar4.Count;
			if (iVar9 != 0) {
				pEVar4 = pPVar12._CustomProperties_k__BackingField;
				if (pEVar4 == null) goto label_05d46f60;
				pUVar20 = null;
				auStack_58.GetEnumerator(pEVar4);
				uStack_88._0_4_ = iStack_38;
				uStack_88._4_4_ = uStack_34;
				auStack_b0._8_8_ = auStack_58._0_8_;
				puStack_60 = auStack_b0 + 8;
				while(true) {
					bVar8 = ((auStack_b0 + 8)).MoveNext();
					pUStack_70 = pUVar20;
					if (!bVar8) break;
					SVar25 = ((auStack_b0 + 8)).Current;
					obj = SVar25._value;
					pIVar14 = SVar25._key;
					pUVar13 = new ScoreboardModerationPanel.c__DisplayClass74_1();
					if (pUVar13 == null) {
						throw new NullReferenceException();
					}
					pUVar13.CS___8__locals1 = pUStack_c8;
					pUStack_c0 = pUVar13;
					if (pIVar14 == null) {
	label_05d46582: ;
						pSVar10 = *(String*)g_data_07556758.static_fields;
					}
					else {
						if (pIVar14 == null) goto label_05d46f26;
						pSVar10 = (String)(*pIVar14.klass.vtable[3].methodPtr)(pIVar14,pIVar14.klass.vtable[3].method);
						if (pSVar10 == null) goto label_05d46582;
					}
					pIVar14 = (obj as IEnumerable);
					pSStack_b8 = pSVar10;
					if (pIVar14 == null) {
						if (obj != null) {
							pIVar16 = obj.klass;
							goto label_05d4666c;
						}
	label_05d468fa: ;
						pSVar10 = "null";
					}
					else if ((obj == null) || (pIVar16 = g_data_07556758, obj.klass != g_data_07556758)) {
						__this_01 = new List<string>();
						pIVar16 = pIVar14.klass;
						pIStack_e8 = (object)pIVar14.Dispose();
						auStack_58._0_8_ = null;
						auStack_58._8_8_ = &pIStack_e8;
	label_05d466ff: ;
						pIVar14 = pIStack_e8;
						if (pIStack_e8 == null) {
							throw new NullReferenceException();
						}
						pIVar16 = pIStack_e8.klass;
						bVar8 = pIVar14.Dispose();
						pIVar14 = pIStack_e8;
						if (bVar8) {
							if (pIStack_e8 == null) {
								throw new NullReferenceException();
							}
							pIVar16 = pIStack_e8.klass;
							pIVar14 = pIVar14.Dispose();
							if (pIVar14 == null) {
	label_05d4681d: ;
								pSVar10 = "null";
							}
							else {
								pSVar10 = (String)(*pIVar14.klass.vtable[3].methodPtr)(pIVar14,pIVar14.klass.vtable[3].method);
								if (pSVar10 == null) goto label_05d4681d;
							}
							if (__this_01 == null) {
	label_05d46d11: ;
								throw new NullReferenceException();
							}
							piVar1 = &__this_01._version;
							*piVar1 = *piVar1 + 1;
							pSVar6 = __this_01._items;
							if (pSVar6 == null) goto label_05d46d11;
							uVar2 = __this_01._size;
							if (uVar2 < (uint)pSVar6.Length) {
								__this_01._size = uVar2 + 1;
								pSVar6[(int)uVar2] = pSVar10;
							}
							else {
								__this_01.AddWithResize((object)pSVar10);
							}
							goto label_05d466ff;
						}
						pIVar16 = (Il2CppClass)(pIStack_e8 as IDisposable);
						auStack_b0._0_8_ = pIVar16;
						if (pIVar16 != null) {
							pIVar16.Dispose();
						}
						pSVar10 = String.Join(", ", (IEnumerable<string>)__this_01);
					}
					else {
	label_05d4666c: ;
						pSVar10 = (String)(*pIVar16.vtable[3].methodPtr)(obj,pIVar16.vtable[3].method);
						if (pSVar10 == null) goto label_05d468fa;
					}
					pUVar17 = ElementFactory.CreateHorizontalGroup(pUStack_d0, 6.0, 3);
					if (pUVar17 == null) {
						throw new NullReferenceException();
					}
					parent = pUVar17.transform;
					if (parent == null) {
						throw new NullReferenceException();
					}
					pUVar17 = parent.gameObject;
					if (pUVar17 == null) {
						throw new NullReferenceException();
					}
					pUVar18 = pUVar17.GetComponent<LayoutElement>();
					if (pUVar18 == null) {
						pUVar17 = parent.gameObject ;
						if (pUVar17 == null) {
							throw new NullReferenceException();
						}
						pUVar18 = pUVar17.AddComponent<LayoutElement>();
						if (pUVar18 == null) goto label_05d46f26;
					}
					pUVar18.set_flexibleWidth(1.0);
					pSVar19 = pSVar10;
					if (pSVar10 == null) {
						pSVar19 = *(String*)g_data_07556758.static_fields;
					}
					__this_02 = new StringSetting(pSVar19, 0x7fffffff);
					pSVar19 = String.Concat(pSStack_b8, ":");
					pUVar17 = ElementFactory.CreateInputSetting(parent, pUStack_78, (BaseSetting)__this_02, pSVar19, "", 300.0, 40.0, false, null, null, null, null);
					if (pUVar17 == null) {
						throw new NullReferenceException();
					}
					pUVar18 = pUVar17.GetComponent<LayoutElement>();
					if ((pUVar18 == null) &&(pUVar18 = pUVar17.AddComponent<LayoutElement>(), pUVar18 == null)) {
						throw new NullReferenceException();
					}
					pUVar18.set_minWidth(0.0);
					pUVar18.set_preferredWidth(-1.0);
					pUVar18.set_flexibleWidth(1.0);
					pUVar20 = pUVar17.transform;
					if (pUVar20 == null) {
						throw new NullReferenceException();
					}
					pUVar20 = pUVar20.Find("InputField");
					if (pUVar20 == null) {
						__this_03 = null;
						uVar3 = (typeof(Object)._2).cctor_finished_or_no_cctor;
						pUVar20 = pUStack_70;
					}
					else {
						if (pUVar20 == null) {
	label_05d46f26: ;
							throw new NullReferenceException();
						}
						__this_03 = pUVar20.GetComponent<InputField>();
						uVar3 = (typeof(Object)._2).cctor_finished_or_no_cctor;
					}
					if (uVar3 == 0) {
					}
					bVar8 = ((Object)__this_03 != null);
					if (bVar8) {
						if (__this_03 == null) {
							throw new NullReferenceException();
						}
						__this_03.m_ReadOnly = true;
						pUVar18 = __this_03.GetComponent<LayoutElement>();
						if (pUVar18 == null) {
							pUVar17 = __this_03.gameObject;
							if (pUVar17 == null) {
								throw new NullReferenceException();
							}
							pUVar18 = pUVar17.AddComponent<LayoutElement>();
							if (pUVar18 == null) {
								throw new NullReferenceException();
							}
						}
						pUVar18.set_minWidth(80.0);
						pUVar18.set_preferredWidth(300.0);
						pUVar18.set_flexibleWidth(1.0);
						__this_03.ForceLabelUpdate();
					}
					pUVar13 = pUStack_c0;
					pUStack_c0.capturedKey = pSStack_b8;
					pUVar13.capturedValue = pSVar10;
					pUVar21 = new UnityAction((object)pUStack_c0, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass74_1_ShowPlayerProps_b__1);
					ElementFactory.CreateDefaultButton(parent, pUStack_e0, "...", 36.0, 0.0, pUVar21);
				}
				((auStack_b0 + 8)).Dispose();
				goto label_05d46e22;
			}
		}
		pSVar10 = "NoProperties";
		pSVar10 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar10, "", "");
		ElementFactory.CreateDefaultLabel(pUStack_d0, pUStack_e0, pSVar10, 0, 3);
	label_05d46e22: ;
		pSVar10 = "AddProp";
		pUVar20 = this._detailContainer;
		pSVar10 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar10, "", "");
		pUVar21 = new UnityAction((object)pUStack_c8, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass74_0_ShowPlayerProps_b__0);
		ElementFactory.CreateDefaultButton(pUVar20, pUStack_e0, pSVar10, 0.0, 0.0, pUVar21);
		return;
	}

	[Token(Token = "0x6004FF3")]
	[Address(RVA = "0x5C405F0", Offset = "0x5C3F5F0", VA = "0x5C405F0")]
	private string GetAuthStatusText()
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$GetAuthStatusText): clean
		sbyte cVar1;
		uint uVar2;
		String pSVar3;
		String pSVar4;

		if (Il2CppMethodInitialized_07547ea3 == false) {
			Il2CppMethodInitialized_07547ea3 = true;
			uVar2 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_07547eed == false) {
			Il2CppMethodInitialized_07547eed = true;
			uVar2 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			cVar1 = ModeratorManager._IsAuthenticated_k__BackingField;
			pSVar3 = "AuthenticatedAs";
			pSVar4 = "NotAuthenticated";
		}
		else {
			cVar1 = *(sbyte)((long)(typeof(ModeratorManager)).static_fields + 8);
			pSVar3 = "AuthenticatedAs";
			pSVar4 = "NotAuthenticated";
		}
		"AuthenticatedAs" = pSVar3;
		"NotAuthenticated" = pSVar4;
		if (cVar1 == false) {
			pSVar3 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar4, "", "");
			return pSVar3;
		}
		pSVar3 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar3, "", "");
		pSVar4 = ModeratorManager.AuthUsername;
		pSVar3 = String.Format(pSVar3, (object)pSVar4);
		return pSVar3;
	}

	[Token(Token = "0x6004FF4")]
	[Address(RVA = "0x5C40CF0", Offset = "0x5C3FCF0", VA = "0x5C40CF0")]
	private static string Locale(string item)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$Locale): clean
		String pSVar1;

		pSVar1 = UIManager.GetLocale("ScoreboardPopup", "Moderation", item, "", "");
		return pSVar1;
	}

	[Token(Token = "0x6004FF5")]
	[Address(RVA = "0x5C43C10", Offset = "0x5C42C10", VA = "0x5C43C10")]
	private static string BanEntryLabel(string username, bool ipBan)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$BanEntryLabel): clean
		String pSVar1;

		if (ipBan) {
			pSVar1 = "IpBanEntry";
		}
		else {
			pSVar1 = "SessionBanEntry";
		}
		pSVar1 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar1, "", "");
		pSVar1 = String.Format(pSVar1, (object)username);
		return pSVar1;
	}

	[Token(Token = "0x6004FF6")]
	[Address(RVA = "0x5C43D00", Offset = "0x5C42D00", VA = "0x5C43D00")]
	private static string LoadedAllText(int loaded, int total)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$LoadedAllText): 1 lines keep C-only constructs
		uint uVar1;
		String pSVar2;
		object arg0;
		object arg1;
		int local_28;
		int local_24;

		pSVar2 = "LoadedAll";
		if (Il2CppMethodInitialized_07547ea6 == false) {
			Il2CppMethodInitialized_07547ea6 = true;
			pSVar2 = "LoadedAll";
		}
		"LoadedAll" = pSVar2;
		if (Il2CppMethodInitialized_07547ea4 == false) {
			Il2CppMethodInitialized_07547ea4 = true;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(UIManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar2 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar2, "", "");
		local_24 = loaded;
		arg0 = (object)local_24;
		_local_28 = CONCAT44(local_24, total);
		arg1 = (object)local_28;
		pSVar2 = String.Format(pSVar2, arg0, arg1);
		return pSVar2;
	}

	[Token(Token = "0x6004FF7")]
	[Address(RVA = "0x5C47070", Offset = "0x5C46070", VA = "0x5C47070")]
	private void SetStatus(string text)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$SetStatus): clean
		Text pUVar1;
		bool bVar2;
		String pSVar3;
		ScoreboardModerationPanel __this_00;

		bVar2 = ((Object)this == null);
		if (!bVar2) {
			__this_00 = (ScoreboardModerationPanel)this._authLabel;
			bVar2 = ((Object)__this_00 != null);
			if (bVar2) {
				pUVar1 = this._authLabel;
				pSVar3 = __this_00.GetAuthStatusText();
				if (pUVar1 == null) goto label_05d47194;
				pUVar1.set_text(pSVar3);
			}
			pUVar1 = this._statusLabel;
			bVar2 = ((Object)pUVar1 != null);
			if (bVar2) {
				pUVar1 = this._statusLabel;
				if (text == null) {
					text = (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
				if (pUVar1 != null) {
					pUVar1.set_text(text);
					return;
				}
	label_05d47194: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6004FF8")]
	[Address(RVA = "0x5C43760", Offset = "0x5C42760", VA = "0x5C43760")]
	private string GetPlayerDisplayName(PlayerEntry player)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$GetPlayerDisplayName): clean
		bool bVar1;
		Room pPVar2;
		Player player_00;
		String pSVar3;

		if (player == null) {
			throw new NullReferenceException();
		}
		bVar1 = String.IsNullOrEmpty(player.Username);
		if (bVar1) {
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
				pPVar2 = PhotonNetwork.CurrentRoom;
			}
			else {
				pPVar2 = PhotonNetwork.CurrentRoom;
			}
			if ((pPVar2 != null) &&(player_00 = pPVar2.GetPlayer(player.ActorNumber, false), player_00 != null)) {
				pSVar3 = PhotonExtensions.GetStringProperty(player_00, PlayerProperty.Name, "");
				bVar1 = String.IsNullOrEmpty(pSVar3);
				if (!bVar1) goto label_05d437f3;
			}
			pSVar3 = "Unknown";
			pSVar3 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar3, "", "");
			return pSVar3;
		}
		pSVar3 = player.Username;
	label_05d437f3: ;
		pSVar3 = MiscExtensions.StripColor(pSVar3);
		return pSVar3;
	}

	[Token(Token = "0x6004FF9")]
	[Address(RVA = "0x5C40D80", Offset = "0x5C3FD80", VA = "0x5C40D80")]
	private void StyleListBox(GameObject box)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$StyleListBox): clean
		AottgInGameView pGVar1;
		Image pUVar2;
		Outline __this_00;
		Color UVar3;

		if (box != null) {
			pUVar2 = box.AddComponent<Image>();
			pGVar1 = this._view;
			if (pGVar1 != null) {
				UVar3 = pGVar1.ThemeColor("inGameListBg");
				if (pUVar2 != null) {
					pUVar2.set_color(UVar3);
					__this_00 = box.AddComponent<Outline>();
					pGVar1 = this._view;
					if (pGVar1 != null) {
						UVar3 = pGVar1.ThemeColor("inGameListOutline");
						if (__this_00 != null) {
							__this_00.effectColor = UVar3;
							__this_00.effectDistance = (Vector2)0xbf8000003f800000;
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004FFA")]
	[Address(RVA = "0x5C45070", Offset = "0x5C44070", VA = "0x5C45070")]
	private Transform CreateDetailsBox(Transform parent)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$CreateDetailsBox): clean
		bool bVar1;
		GameObject box;
		VerticalLayoutGroup __this_00;
		RectOffset __this_01;
		LayoutElement pUVar2;
		Transform pUVar3;

		box = ElementFactory.CreateVerticalGroup(parent, 6.0, 0);
		this.StyleListBox(box);
		this.RegisterFadeSyncGroup(box);
		if (box == null) {
	label_05d45223: ;
			throw new NullReferenceException();
		}
		__this_00 = box.GetComponent<VerticalLayoutGroup>();
		bVar1 = ((Object)__this_00 != null);
		if (bVar1) {
			__this_01 = new RectOffset(10, 10, 8, 8);
			if (__this_00 == null) goto label_05d45223;
			__this_00.padding = __this_01;
			__this_00.childAlignment = 0;
			__this_00.childControlWidth = true;
			__this_00.childControlHeight = true;
			__this_00.childForceExpandWidth = true;
			__this_00.childForceExpandHeight = false;
		}
		pUVar2 = box.GetComponent<LayoutElement>();
		if (pUVar2 == null) {
			pUVar2 = box.AddComponent<LayoutElement>();
			if (pUVar2 == null) goto label_05d45223;
		}
		pUVar2.set_flexibleWidth(1.0);
		return pUVar3;
	}

	[Token(Token = "0x6004FFB")]
	[Address(RVA = "0x5C45230", Offset = "0x5C44230", VA = "0x5C45230")]
	private void AddDetailTitle(Transform parent, ElementStyle style, string title)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$AddDetailTitle): clean
		ElementFactory.CreateDefaultLabel(parent, style, title, 1, 3);
		return;
	}

	[Token(Token = "0x6004FFC")]
	[Address(RVA = "0x5C45250", Offset = "0x5C44250", VA = "0x5C45250")]
	private void AddDetailRow(Transform parent, ElementStyle style, string key, string value)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$AddDetailRow): clean
		bool bVar1;
		StringSetting __this_00;
		GameObject __this_01;
		Transform pUVar2;
		InputField __this_02;

		if (value == null) {
			value = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		__this_00 = new StringSetting(value, 0x7fffffff);
		__this_01 = ElementFactory.CreateInputSetting(parent, style, (BaseSetting)__this_00, key, "", 240.0, 40.0, false, null, null, null, null);
		if ((__this_01 != null) &&(pUVar2 = __this_01.transform, pUVar2 != null)) {
			pUVar2 = pUVar2.Find("InputField");
			bVar1 = ((Object)pUVar2 != null);
			if (!bVar1) {
				return;
			}
			if (pUVar2 != null) {
				__this_02 = pUVar2.GetComponent<InputField>();
				bVar1 = ((Object)__this_02 != null);
				if (!bVar1) {
					return;
				}
				if (__this_02 != null) {
					__this_02.m_ReadOnly = true;
					__this_02.ForceLabelUpdate();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004FFD")]
	[Address(RVA = "0x5C43940", Offset = "0x5C42940", VA = "0x5C43940")]
	private void CreateClickableEntry(Transform parent, ElementStyle style, string text, UnityAction onClick)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$CreateClickableEntry): clean
		bool bVar1;
		GameObject __this_00;
		ContentSizeFitter __this_01;
		LayoutElement x;
		Transform pUVar2;
		Text __this_02;

		__this_00 = ElementFactory.CreateDefaultButton(parent, style, text, 0.0, 28.0, onClick);
		if (__this_00 != null) {
			__this_01 = __this_00.GetComponent<ContentSizeFitter>();
			bVar1 = ((Object)__this_01 != null);
			if (bVar1) {
				if (__this_01 == null) goto label_05d43b5a;
				__this_01.horizontalFit = 0;
				__this_01.verticalFit = 0;
			}
			x = __this_00.GetComponent<LayoutElement>();
			bVar1 = ((Object)x != null);
			if (bVar1) {
				if (x == null) goto label_05d43b5a;
				x.set_minHeight(28.0);
				x.set_preferredHeight(28.0);
				x.set_flexibleWidth(1.0);
				x.set_flexibleHeight(0.0);
			}
			pUVar2 = __this_00.transform;
			if (pUVar2 != null) {
				__this_02 = null;
				pUVar2 = pUVar2.Find("Text");
				if (pUVar2 != null) {
					__this_02 = pUVar2.GetComponent<Text>();
				}
				bVar1 = ((Object)__this_02 != null);
				if (!bVar1) {
					return;
				}
				if (__this_02 != null) {
					__this_02.alignment = 3;
					return;
				}
			}
		}
	label_05d43b5a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004FFE")]
	[Address(RVA = "0x5C41140", Offset = "0x5C40140", VA = "0x5C41140")]
	private void ClearContainer(Transform container)
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$ClearContainer): 10 lines keep C-only constructs
		byte bVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		bool bVar4;
		VirtualInvokeData pVVar5;
		Component __this_00;
		Object obj;
		object pIVar6;
		ulong uVar7;
		long lVar8;
		object local_50;
		object local_48;
		object* local_38;
		object* local_30;

		local_48 = null;
		if (container == null) {
			throw new NullReferenceException();
		}
		local_50 = (object)container.GetEnumerator();
		local_38 = &local_50;
		local_30 = &local_48;
		do {
			pIVar6 = local_50;
			if (local_50 == null) {
				throw new NullReferenceException();
			}
			pIVar2 = local_50.klass;
			uVar7 = (ulong)(pIVar2._2).interface_offsets_count;
			bVar4 = pIVar6.Dispose();
			pIVar6 = local_50;
			if (!bVar4) {
				pIVar6 = (local_50 as IDisposable);
				if (pIVar6 == null) {
					return;
				}
				pIVar2 = pIVar6.klass;
				uVar7 = (ulong)(pIVar2._2).interface_offsets_count;
				local_48 = pIVar6;
				if (uVar7 == 0) goto label_05d413ef;
				pIVar3 = (pIVar2._1).interfaceOffsets;
				lVar8 = 0;
				break;
			}
			if (local_50 == null) {
				throw new NullReferenceException();
			}
			pIVar2 = local_50.klass;
			uVar7 = (ulong)(pIVar2._2).interface_offsets_count;
			__this_00 = (Component)pIVar6.Dispose();
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			bVar1 = (typeof(Transform)._2).typeHierarchyDepth;
			if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(Transform))) {
				throw new InvalidCastException();
			}
			obj = (Object)__this_00.gameObject;
			Object.Destroy(obj);
		} while(true);
		while (true) {
			lVar8 = lVar8 + 0x10;
			if (!(uVar7 * 0x10 != lVar8)) break;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar8) == typeof(IDisposable)) {
				pVVar5 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar8);
				goto label_05d4140d;
			}
		}
	label_05d413ef: ;
	label_05d4140d: ;
		pIVar6.Dispose();
		return;
	}

	[Token(Token = "0x6004FFF")]
	[Address(RVA = "0x5C471A0", Offset = "0x5C461A0", VA = "0x5C471A0")]
	public ScoreboardModerationPanel()
	{
		// Lifted from source/cpp/UI/ScoreboardModerationPanel.c (UI.ScoreboardModerationPanel$$.ctor): 2 lines keep C-only constructs
		String defaultValue;
		StringSetting __this_00;
		Dictionary<ScoreboardModerationPanel.Tab, Button> __this_01;
		Dictionary<ScoreboardModerationPanel.Tab, string> __this_02;
		List<CanvasGroup> __this_03;
		List<RoomBanEntry> __this_04;
		List<RegionBanEntry> __this_05;

		defaultValue = (String)**(ulong*)(g_data_07556758 + 0xb8);
		__this_00 = new StringSetting(defaultValue, 0x50);
		this._searchSetting = __this_00;
		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<ScoreboardModerationPanel.Tab, Button>));
		__this_01 = new Dictionary<Int32Enum, object>();
		this._tabButtons = __this_01;
		__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<ScoreboardModerationPanel.Tab, string>));
		__this_02 = new Dictionary<Int32Enum, object>();
		this._searchTerms = __this_02;
		this._popupMinFadeAlpha = 0.5;
		__this_03 = new List<CanvasGroup>();
		this._fadeSyncGroups = __this_03;
		__this_04 = new List<RoomBanEntry>();
		this._cachedRoomBans = __this_04;
		__this_05 = new List<RegionBanEntry>();
		this._cachedRegionBans = __this_05;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/ScoreboardModerationPanel.c.

	// UI.ScoreboardModerationPanel.<>c__DisplayClass52_0$$.ctor: clean
	private void c__DisplayClass52_0__ctor()
	{
		base();
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass58_0$$.ctor: clean
	private void c__DisplayClass58_0__ctor()
	{
		base();
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass58_1$$.ctor: clean
	private void c__DisplayClass58_1__ctor()
	{
		base();
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass61_0$$.ctor: clean
	private void c__DisplayClass61_0__ctor()
	{
		base();
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass63_0$$.ctor: clean
	private void c__DisplayClass63_0__ctor()
	{
		base();
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass70_0$$.ctor: clean
	private void c__DisplayClass70_0__ctor()
	{
		base();
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass70_1$$.ctor: clean
	private void c__DisplayClass70_1__ctor()
	{
		base();
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass71_0$$.ctor: clean
	private void c__DisplayClass71_0__ctor()
	{
		base();
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass72_0$$.ctor: clean
	private void c__DisplayClass72_0__ctor()
	{
		base();
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass74_0$$.ctor: clean
	private void c__DisplayClass74_0__ctor()
	{
		base();
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass74_1$$.ctor: clean
	private void c__DisplayClass74_1__ctor()
	{
		base();
		return;
	}

	// UI.ScoreboardModerationPanel$$<BuildPlayerListFooter>b__59_1: clean
	private void BuildPlayerListFooter_b__59_1()
	{
		ModerationBatchBanPopup pUVar1;

		pUVar1 = this._batchBanPopup;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.Show();
		return;
	}

	// UI.ScoreboardModerationPanel$$<BuildRoomBanFooter>b__62_0: clean
	private void BuildRoomBanFooter_b__62_0()
	{
		int iVar1;
		int startIndex;

		iVar1 = this._roomBanNextStart;
		startIndex = 0;
		if (0 < iVar1) {
			startIndex = iVar1;
		}
		if ((this._roomBanRequestPending != false) ||((this._roomBanLoaded != false && (this._roomBanNextStart < 0)))) {
			return;
		}
		this._roomBanRequestPending = true;
		ModeratorManager.RequestRoomBanList(startIndex, 0x32, null);
		return;
	}

	// UI.ScoreboardModerationPanel$$<BuildRegionBanFooter>b__64_0: clean
	private void BuildRegionBanFooter_b__64_0()
	{
		int iVar1;
		int startIndex;

		iVar1 = this._regionBanNextStart;
		startIndex = 0;
		if (0 < iVar1) {
			startIndex = iVar1;
		}
		if ((this._regionBanRequestPending != false) ||((this._regionBanLoaded != false && (this._regionBanNextStart < 0)))) {
			return;
		}
		this._regionBanRequestPending = true;
		ModeratorManager.RequestRegionBanList(startIndex, 0x32, null);
		return;
	}

	// UI.ScoreboardModerationPanel.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new ScoreboardModerationPanel.c();
		ScoreboardModerationPanel.c.__9 = (ScoreboardModerationPanel.c)__this;
		return;
	}

	// UI.ScoreboardModerationPanel.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// UI.ScoreboardModerationPanel.<>c$$<BuildPlayerListFooter>b__59_0: clean
	private void c__BuildPlayerListFooter_b__59_0()
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07547eb0 == false) {
			Il2CppMethodInitialized_07547eb0 = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			ModeratorManager.RequestPlayerList(null);
			return;
		}
		ModeratorManager.RequestPlayerList(null);
		return;
	}

	// UI.ScoreboardModerationPanel.<>c$$<BuildPastPlayerFooter>b__60_0: clean
	private void c__BuildPastPlayerFooter_b__60_0()
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07547eb1 == false) {
			Il2CppMethodInitialized_07547eb1 = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			ModeratorManager.RequestPlayerList(null);
			return;
		}
		ModeratorManager.RequestPlayerList(null);
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass52_0$$<AddTabButton>b__0: 8 lines keep C-only constructs
	private void c__DisplayClass52_0__AddTabButton_b__0()
	{
		int key;
		StringSetting __this_00;
		Dictionary<ScoreboardModerationPanel.Tab, string> __this_01;
		Dictionary<ScoreboardModerationPanel.Tab, Button> __this_02;
		ScoreboardModerationPanel __this_03;
		bool bVar1;
		object* ppIVar2;
		MethodInfo method_01;
		ScoreboardModerationPanel __this_04;
		object pIStack_68;
		System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o pSStack_60;
		System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o SStack_58;

		__this_03 = this.__4__this;
		if (__this_03 == null) {
			throw new NullReferenceException();
		}
		key = this.tab;
		SStack_58._current.key = null;
		SStack_58._current.value = null;
		SStack_58._dictionary = null;
		SStack_58._version = 0;
		SStack_58._index = 0;
		SStack_58._getEnumeratorRetType = 0;
		SStack_58._36_4_ = 0;
		__this_03._activeTab = key;
		__this_03._selectedPlayer = null;
		__this_03._selectedRoomBan = null;
		__this_03._selectedRegionBan = null;
		__this_00 = __this_03._searchSetting;
		if (__this_00 != null) {
			ppIVar2 = &pIStack_68;
			pIStack_68 = null;
			__this_01 = __this_03._searchTerms;
			if (__this_01 == null) goto label_05d410d7;
			bVar1 = __this_01.TryGetValue(key, ref pIStack_68);
			if (!bVar1) {
				ppIVar2 = *(object**)(g_data_07556758 + 0xb8);
			}
			__this_00.Value = *ppIVar2;
		}
		__this_02 = __this_03._tabButtons;
		if (__this_02 != null) {
			SStack_58 = __this_02.GetEnumerator();
			pIStack_68 = null;
			pSStack_60 = &SStack_58;
			while(true) {
				bVar1 = SStack_58.MoveNext();
				if (!bVar1) {
					method_01 = MethodInfo_System_Collections_Generic_Dictionary_Enumerator_ScoreboardModerationPanel_Tab_Button_Dispose ;
					SStack_58.Dispose();
					__this_03.RefreshActiveTab();
					__this_04 = (ScoreboardModerationPanel)__this_03._detailContainer;
					bVar1 = ((Object)__this_04 == null);
					if (!bVar1) {
						__this_04.ClearContainer(__this_03._detailContainer);
					}
					return;
				}
				if ((Selectable)SStack_58._current.value ==null) break;
				SStack_58._current.value.interactable = (int)SStack_58._current.key != key;
			}
			throw new NullReferenceException();
		}
	label_05d410d7: ;
		throw new NullReferenceException();
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass58_0$$<PopulatePlayerList>b__0: 14 lines keep C-only constructs
	private void c__DisplayClass58_0__PopulatePlayerList_b__0()
	{
		int __this_00;
		ScoreboardModerationPanel __this_01;
		PlayerEntry player;
		bool bVar1;
		object __this_02;
		String pSVar2;
		ElementStyle __this_03;
		String pSVar3;
		Transform pUVar4;
		GameObject pUVar5;
		UnityAction pUVar6;
		String* ppSVar7;
		sbyte cVar8;
		ScoreboardModerationPanel pUVar9;
		int iVar11;

		__this_01 = this.__4__this;
		if (__this_01 == null) {
			throw new NullReferenceException();
		}
		player = this.player;
		__this_02 = new ScoreboardModerationPanel.c__DisplayClass70_0();
		if (__this_02 == null) goto label_05d45059;
		__this_02[1].monitor = __this_01;
		__this_01._selectedPlayer = player;
		__this_01._selectedPlayerIsActive = true;
		pUVar9 = (ScoreboardModerationPanel)__this_01._detailContainer;
		bVar1 = ((Object)pUVar9 == null);
		if (!bVar1) {
			pUVar9.ClearContainer(__this_01._detailContainer);
		}
		pSVar2 = __this_01.get_ThemePanel();
		__this_03 = new ElementStyle(0x18, 120.0, 20.0, pSVar2);
		if (player == null) goto label_05d45059;
		__this_00 = &player.ActorNumber;
		pUVar9 = (ScoreboardModerationPanel)__this_00;
		pSVar2 = __this_00.ToString();
		pSVar3 = pUVar9.GetPlayerDisplayName(player);
		pSVar2 = String.Concat("#", pSVar2, " ", pSVar3);
		pUVar4 = __this_01.CreateDetailsBox(__this_01._detailContainer);
		ElementFactory.CreateDefaultLabel(pUVar4, __this_03, pSVar2, 1, 3);
		pSVar2 = "SessionId";
		pUVar9 = (UI_ScoreboardModerationPanel_o *)"ScoreboardPopup";
		pSVar3 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar2, "", "");
		pSVar2 = player.SessionId;
		if (pSVar2 == null) goto label_05d45059;
		if (pSVar2._stringLength < 1) {
			ppSVar7 = &"\xe2\x80\x94";
		}
		else {
			ppSVar7 = &player.SessionId;
		}
		pUVar9.AddDetailRow(pUVar4, __this_03, pSVar3, ((PlayerEntry)ppSVar7).SessionId);
		pSVar2 = "IpAddress";
		pUVar9 = (UI_ScoreboardModerationPanel_o *)"ScoreboardPopup";
		pSVar3 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar2, "", "");
		pSVar2 = player.IPAddress;
		if (pSVar2 == null) goto label_05d45059;
		if (pSVar2._stringLength < 1) {
			ppSVar7 = &"\xe2\x80\x94";
		}
		else {
			ppSVar7 = &player.IPAddress;
		}
		pUVar9.AddDetailRow(pUVar4, __this_03, pSVar3, *ppSVar7);
		*(int)&__this_02[1].klass = *__this_00;
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07547eed != false) goto label_05d4462d;
	label_05d44bdb: ;
			Il2CppMethodInitialized_07547eed = true;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05d4463e;
	label_05d44bff: ;
			cVar8 = ModeratorManager._IsAuthenticated_k__BackingField;
			if (Il2CppMethodInitialized_07547eee != false) goto label_05d44656;
	label_05d44c20: ;
			Il2CppMethodInitialized_07547eee = true;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05d44663;
	label_05d44c40: ;
			iVar11 = ModeratorManager._AuthLevel_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_07547eed == false) goto label_05d44bdb;
	label_05d4462d: ;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05d44bff;
	label_05d4463e: ;
			cVar8 = ModeratorManager._IsAuthenticated_k__BackingField;
			if (Il2CppMethodInitialized_07547eee == false) goto label_05d44c20;
	label_05d44656: ;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05d44c40;
	label_05d44663: ;
			iVar11 = ModeratorManager._AuthLevel_k__BackingField;
		}
		pUVar5 = ElementFactory.CreateHorizontalGroup(__this_01._detailContainer, 8.0, 3);
		if (pUVar5 != null) {
			pUVar4 = pUVar5.transform;
			pSVar2 = "Kick";
			pSVar2 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar2, "", "");
			pUVar6 = new UnityAction(__this_02, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__0);
			ElementFactory.CreateDefaultButton(pUVar4, __this_03, pSVar2, 0.0, 0.0, pUVar6);
			pSVar2 = "RoomBan";
			pSVar2 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar2, "", "");
			pUVar6 = new UnityAction(__this_02, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__1);
			ElementFactory.CreateDefaultButton(pUVar4, __this_03, pSVar2, 0.0, 0.0, pUVar6);
			pSVar2 = "RoomIpBan";
			pSVar2 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar2, "", "");
			pUVar6 = new UnityAction(__this_02, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__2);
			ElementFactory.CreateDefaultButton(pUVar4, __this_03, pSVar2, 0.0, 0.0, pUVar6);
			pSVar2 = "ViewProps";
			pSVar2 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar2, "", "");
			pUVar6 = new UnityAction(__this_02, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__3);
			ElementFactory.CreateDefaultButton(pUVar4, __this_03, pSVar2, 0.0, 0.0, pUVar6);
			if ((cVar8 == false) || (iVar11 < 1)) {
				return;
			}
			pUVar5 = ElementFactory.CreateHorizontalGroup(__this_01._detailContainer, 8.0, 3);
			if (pUVar5 != null) {
				pUVar4 = pUVar5.transform;
				pSVar2 = "RegionBan";
				pSVar2 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar2, "", "");
				pUVar6 = new UnityAction(__this_02, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__6);
				ElementFactory.CreateDefaultButton(pUVar4, __this_03, pSVar2, 0.0, 0.0, pUVar6);
				pSVar2 = "RegionIpBan";
				pSVar2 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar2, "", "");
				pUVar6 = new UnityAction(__this_02, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__7);
				ElementFactory.CreateDefaultButton(pUVar4, __this_03, pSVar2, 0.0, 0.0, pUVar6);
				return;
			}
		}
	label_05d45059: ;
		throw new NullReferenceException();
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass58_1$$<PopulatePlayerList>b__1: clean
	private void c__DisplayClass58_1__PopulatePlayerList_b__1()
	{
		ScoreboardModerationPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SelectPlayer(this.capturedPlayer, false);
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass61_0$$<PopulateRoomBanList>b__0: clean
	private void c__DisplayClass61_0__PopulateRoomBanList_b__0()
	{
		ScoreboardModerationPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SelectRoomBan(this.captured);
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass63_0$$<PopulateRegionBanList>b__0: clean
	private void c__DisplayClass63_0__PopulateRegionBanList_b__0()
	{
		ScoreboardModerationPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SelectRegionBan(this.captured);
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass70_0$$<SelectPlayer>b__0: clean
	private void c__DisplayClass70_0__SelectPlayer_b__0()
	{
		int actorNumber;

		actorNumber = this.capturedActor;
		ModeratorManager.KickPlayer(actorNumber, null);
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass70_0$$<SelectPlayer>b__1: 1 lines keep C-only constructs
	private void c__DisplayClass70_0__SelectPlayer_b__1()
	{
		ScoreboardModerationPanel pUVar1;
		ModerationReasonPopup __this_00;
		String pSVar2;
		Action<string> __this_01;
		MethodInfo method_00;

		pSVar2 = "RoomBan";
		pUVar1 = this.__4__this;
		method_00 = (MethodInfo *)"";
		pSVar2 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar2, "", "");
		__this_01 = this.__9__4;
		if (__this_01 == null) {
			__this_01 = new Action<string>((object)this, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__4);
			this.__9__4 = __this_01;
		}
		if ((pUVar1 == null) ||(__this_00 = pUVar1._reasonPopup, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Show(pSVar2, __this_01);
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass70_0$$<SelectPlayer>b__4: clean
	private void c__DisplayClass70_0__SelectPlayer_b__4(String reason)
	{
		int actorNumber;

		actorNumber = this.capturedActor;
		ModeratorManager.RoomBan(actorNumber, false, null, reason);
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass70_0$$<SelectPlayer>b__2: 1 lines keep C-only constructs
	private void c__DisplayClass70_0__SelectPlayer_b__2()
	{
		ScoreboardModerationPanel pUVar1;
		ModerationReasonPopup __this_00;
		String pSVar2;
		Action<string> __this_01;
		MethodInfo method_00;

		pSVar2 = "RoomIpBan";
		pUVar1 = this.__4__this;
		method_00 = (MethodInfo *)"";
		pSVar2 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar2, "", "");
		__this_01 = this.__9__5;
		if (__this_01 == null) {
			__this_01 = new Action<string>((object)this, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__5);
			this.__9__5 = __this_01;
		}
		if ((pUVar1 == null) ||(__this_00 = pUVar1._reasonPopup, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Show(pSVar2, __this_01);
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass70_0$$<SelectPlayer>b__5: clean
	private void c__DisplayClass70_0__SelectPlayer_b__5(String reason)
	{
		int actorNumber;

		actorNumber = this.capturedActor;
		ModeratorManager.RoomBan(actorNumber, true, null, reason);
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass70_0$$<SelectPlayer>b__3: clean
	private void c__DisplayClass70_0__SelectPlayer_b__3()
	{
		ScoreboardModerationPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.ShowPlayerProps(this.capturedActor);
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass70_0$$<SelectPlayer>b__6: 1 lines keep C-only constructs
	private void c__DisplayClass70_0__SelectPlayer_b__6()
	{
		ScoreboardModerationPanel pUVar1;
		ModerationReasonPopup __this_00;
		String pSVar2;
		Action<string> __this_01;
		MethodInfo method_00;

		pSVar2 = "RegionBan";
		pUVar1 = this.__4__this;
		method_00 = (MethodInfo *)"";
		pSVar2 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar2, "", "");
		__this_01 = this.__9__8;
		if (__this_01 == null) {
			__this_01 = new Action<string>((object)this, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__8);
			this.__9__8 = __this_01;
		}
		if ((pUVar1 == null) ||(__this_00 = pUVar1._reasonPopup, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Show(pSVar2, __this_01);
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass70_0$$<SelectPlayer>b__8: clean
	private void c__DisplayClass70_0__SelectPlayer_b__8(String reason)
	{
		int actorNumber;

		actorNumber = this.capturedActor;
		ModeratorManager.RegionBan(actorNumber, false, null, reason);
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass70_0$$<SelectPlayer>b__7: 1 lines keep C-only constructs
	private void c__DisplayClass70_0__SelectPlayer_b__7()
	{
		ScoreboardModerationPanel pUVar1;
		ModerationReasonPopup __this_00;
		String pSVar2;
		Action<string> __this_01;
		MethodInfo method_00;

		pSVar2 = "RegionIpBan";
		pUVar1 = this.__4__this;
		method_00 = (MethodInfo *)"";
		pSVar2 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar2, "", "");
		__this_01 = this.__9__9;
		if (__this_01 == null) {
			__this_01 = new Action<string>((object)this, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_0_SelectPlayer_b__9);
			this.__9__9 = __this_01;
		}
		if ((pUVar1 == null) ||(__this_00 = pUVar1._reasonPopup, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Show(pSVar2, __this_01);
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass70_0$$<SelectPlayer>b__9: clean
	private void c__DisplayClass70_0__SelectPlayer_b__9(String reason)
	{
		int actorNumber;

		actorNumber = this.capturedActor;
		ModeratorManager.RegionBan(actorNumber, true, null, reason);
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass70_1$$<SelectPlayer>b__10: 1 lines keep C-only constructs
	private void c__DisplayClass70_1__SelectPlayer_b__10()
	{
		ScoreboardModerationPanel.c__DisplayClass70_0 pUVar1;
		ScoreboardModerationPanel pUVar2;
		ModerationReasonPopup __this_00;
		String pSVar3;
		Action<string> __this_01;
		MethodInfo method_00;

		pSVar3 = "RoomBan";
		pUVar1 = this.CS___8__locals1;
		if (pUVar1 != null) {
			pUVar2 = pUVar1.__4__this;
			method_00 = (MethodInfo *)"";
			pSVar3 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar3, "", "");
			__this_01 = this.__9__14;
			if (__this_01 == null) {
				__this_01 = new Action<string>((object)this, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1_SelectPlayer_b__14);
				this.__9__14 = __this_01;
			}
			if ((pUVar2 != null) &&(__this_00 = pUVar2._reasonPopup, __this_00 != null)) {
				__this_00.Show(pSVar3, __this_01);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass70_1$$<SelectPlayer>b__14: clean
	private void c__DisplayClass70_1__SelectPlayer_b__14(String reason)
	{
		PlayerEntry player;

		player = this.capturedPlayer;
		ModeratorManager.RoomBanPlayerEntry(player, false, null, reason);
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass70_1$$<SelectPlayer>b__11: 1 lines keep C-only constructs
	private void c__DisplayClass70_1__SelectPlayer_b__11()
	{
		ScoreboardModerationPanel.c__DisplayClass70_0 pUVar1;
		ScoreboardModerationPanel pUVar2;
		ModerationReasonPopup __this_00;
		String pSVar3;
		Action<string> __this_01;
		MethodInfo method_00;

		pSVar3 = "RoomIpBan";
		pUVar1 = this.CS___8__locals1;
		if (pUVar1 != null) {
			pUVar2 = pUVar1.__4__this;
			method_00 = (MethodInfo *)"";
			pSVar3 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar3, "", "");
			__this_01 = this.__9__15;
			if (__this_01 == null) {
				__this_01 = new Action<string>((object)this, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1_SelectPlayer_b__15);
				this.__9__15 = __this_01;
			}
			if ((pUVar2 != null) &&(__this_00 = pUVar2._reasonPopup, __this_00 != null)) {
				__this_00.Show(pSVar3, __this_01);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass70_1$$<SelectPlayer>b__15: clean
	private void c__DisplayClass70_1__SelectPlayer_b__15(String reason)
	{
		PlayerEntry player;

		player = this.capturedPlayer;
		ModeratorManager.RoomBanPlayerEntry(player, true, null, reason);
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass70_1$$<SelectPlayer>b__12: 1 lines keep C-only constructs
	private void c__DisplayClass70_1__SelectPlayer_b__12()
	{
		ScoreboardModerationPanel.c__DisplayClass70_0 pUVar1;
		ScoreboardModerationPanel pUVar2;
		ModerationReasonPopup __this_00;
		String pSVar3;
		Action<string> __this_01;
		MethodInfo method_00;

		pSVar3 = "RegionBan";
		pUVar1 = this.CS___8__locals1;
		if (pUVar1 != null) {
			pUVar2 = pUVar1.__4__this;
			method_00 = (MethodInfo *)"";
			pSVar3 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar3, "", "");
			__this_01 = this.__9__16;
			if (__this_01 == null) {
				__this_01 = new Action<string>((object)this, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1_SelectPlayer_b__16);
				this.__9__16 = __this_01;
			}
			if ((pUVar2 != null) &&(__this_00 = pUVar2._reasonPopup, __this_00 != null)) {
				__this_00.Show(pSVar3, __this_01);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass70_1$$<SelectPlayer>b__16: clean
	private void c__DisplayClass70_1__SelectPlayer_b__16(String reason)
	{
		PlayerEntry player;

		player = this.capturedPlayer;
		ModeratorManager.RegionBanPlayerEntry(player, false, null, reason);
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass70_1$$<SelectPlayer>b__13: 1 lines keep C-only constructs
	private void c__DisplayClass70_1__SelectPlayer_b__13()
	{
		ScoreboardModerationPanel.c__DisplayClass70_0 pUVar1;
		ScoreboardModerationPanel pUVar2;
		ModerationReasonPopup __this_00;
		String pSVar3;
		Action<string> __this_01;
		MethodInfo method_00;

		pSVar3 = "RegionIpBan";
		pUVar1 = this.CS___8__locals1;
		if (pUVar1 != null) {
			pUVar2 = pUVar1.__4__this;
			method_00 = (MethodInfo *)"";
			pSVar3 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar3, "", "");
			__this_01 = this.__9__17;
			if (__this_01 == null) {
				__this_01 = new Action<string>((object)this, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass70_1_SelectPlayer_b__17);
				this.__9__17 = __this_01;
			}
			if ((pUVar2 != null) &&(__this_00 = pUVar2._reasonPopup, __this_00 != null)) {
				__this_00.Show(pSVar3, __this_01);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass70_1$$<SelectPlayer>b__17: clean
	private void c__DisplayClass70_1__SelectPlayer_b__17(String reason)
	{
		PlayerEntry player;

		player = this.capturedPlayer;
		ModeratorManager.RegionBanPlayerEntry(player, true, null, reason);
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass71_0$$<SelectRoomBan>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass71_0__SelectRoomBan_b__0()
	{
		ScoreboardModerationPanel pUVar1;
		ModerationReasonPopup __this_00;
		String pSVar2;
		Action<string> __this_01;
		MethodInfo method_00;

		pSVar2 = "RoomUnban";
		pUVar1 = this.__4__this;
		method_00 = (MethodInfo *)"";
		pSVar2 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar2, "", "");
		__this_01 = this.__9__1;
		if (__this_01 == null) {
			__this_01 = new Action<string>((object)this, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass71_0_SelectRoomBan_b__1);
			this.__9__1 = __this_01;
		}
		if ((pUVar1 == null) ||(__this_00 = pUVar1._reasonPopup, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Show(pSVar2, __this_01);
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass71_0$$<SelectRoomBan>b__1: clean
	private void c__DisplayClass71_0__SelectRoomBan_b__1(String reason)
	{
		RoomBanEntry banEntry;

		banEntry = this.captured;
		ModeratorManager.RoomUnban(banEntry, null, reason);
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass72_0$$<SelectRegionBan>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass72_0__SelectRegionBan_b__0()
	{
		ScoreboardModerationPanel pUVar1;
		ModerationReasonPopup __this_00;
		String pSVar2;
		Action<string> __this_01;
		MethodInfo method_00;

		pSVar2 = "RegionUnban";
		pUVar1 = this.__4__this;
		method_00 = (MethodInfo *)"";
		pSVar2 = UIManager.GetLocale("ScoreboardPopup", "Moderation", pSVar2, "", "");
		__this_01 = this.__9__1;
		if (__this_01 == null) {
			__this_01 = new Action<string>((object)this, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass72_0_SelectRegionBan_b__1);
			this.__9__1 = __this_01;
		}
		if ((pUVar1 == null) ||(__this_00 = pUVar1._reasonPopup, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Show(pSVar2, __this_01);
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass72_0$$<SelectRegionBan>b__1: clean
	private void c__DisplayClass72_0__SelectRegionBan_b__1(String reason)
	{
		RegionBanEntry banEntry;

		banEntry = this.captured;
		ModeratorManager.RegionUnban(banEntry, null, reason);
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass74_0$$<ShowPlayerProps>b__2: clean
	private void c__DisplayClass74_0__ShowPlayerProps_b__2(String newVal)
	{
		ScoreboardModerationPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.ShowPlayerProps(this.actorNumber);
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass74_0$$<ShowPlayerProps>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass74_0__ShowPlayerProps_b__0()
	{
		int targetActorNumber;
		ScoreboardModerationPanel pUVar1;
		PlayerPropEditPopup __this_00;
		Action<string, string> __this_01;

		pUVar1 = this.__4__this;
		if (pUVar1 != null) {
			__this_00 = pUVar1._propEditPopup;
			targetActorNumber = this.actorNumber;
			__this_01 = this.__9__3;
			if (__this_01 == null) {
				__this_01 = new Action<string, string>((object)this, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass74_0_ShowPlayerProps_b__3);
				this.__9__3 = __this_01;
			}
			if (__this_00 != null) {
				__this_00._onSave = null;
				__this_00._onAdd = __this_01;
				__this_00.ShowForm(targetActorNumber, (String)**(ulong*)(g_data_07556758 + 0xb8), (String)**(ulong*)(g_data_07556758 + 0xb8), true);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass74_0$$<ShowPlayerProps>b__3: clean
	private void c__DisplayClass74_0__ShowPlayerProps_b__3(String newKey, String newVal)
	{
		ScoreboardModerationPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.ShowPlayerProps(this.actorNumber);
		return;
	}

	// UI.ScoreboardModerationPanel.<>c__DisplayClass74_1$$<ShowPlayerProps>b__1: 1 lines keep C-only constructs
	private void c__DisplayClass74_1__ShowPlayerProps_b__1()
	{
		int targetActorNumber;
		ScoreboardModerationPanel.c__DisplayClass74_0 @object;
		ScoreboardModerationPanel pUVar1;
		PlayerPropEditPopup __this_00;
		String key;
		String value;
		Action<string> __this_01;

		@object = this.CS___8__locals1;
		if ((@object != null) &&(pUVar1 = @object.__4__this, pUVar1 != null)) {
			__this_00 = pUVar1._propEditPopup;
			targetActorNumber = @object.actorNumber;
			key = this.capturedKey;
			value = this.capturedValue;
			__this_01 = @object.__9__2;
			if (__this_01 == null) {
				__this_01 = new Action<string>((object)@object, (intptr_t)MethodInfo_UI_ScoreboardModerationPanel_c__DisplayClass74_0_ShowPlayerProps_b__2);
				@object.__9__2 = __this_01;
			}
			if (__this_00 != null) {
				__this_00._onSave = __this_01;
				__this_00._onAdd = null;
				__this_00.ShowForm(targetActorNumber, key, value, false);
				return;
			}
		}
		throw new NullReferenceException();
	}
}
