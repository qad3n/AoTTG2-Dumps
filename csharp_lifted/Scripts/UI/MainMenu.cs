// ==================== AoTTG2 cross-reference ====================
// Type: UI.MainMenu
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/MainMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MainMenu.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace UI;

[Token(Token = "0x2000882")]
internal class MainMenu : BaseMenu
{
	[Token(Token = "0x2000883")]
	[CompilerGenerated]
	private sealed class _003CWaitAndChangeBackground_003Ed__16 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002B16")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002B17")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002B18")]
		[FieldOffset(Offset = "0x20")]
		public MainMenu _003C_003E4__this;

		[Token(Token = "0x17000E2F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005124")]
			[Address(RVA = "0x5C58500", Offset = "0x5C57500", VA = "0x5C58500", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/MainMenu.c (UI.MainMenu.<WaitAndChangeBackground>d__16$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000E30")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005126")]
			[Address(RVA = "0x5C58550", Offset = "0x5C57550", VA = "0x5C58550", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/MainMenu.c (UI.MainMenu.<WaitAndChangeBackground>d__16$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6005121")]
		[Address(RVA = "0x5C58290", Offset = "0x5C57290", VA = "0x5C58290")]
		[DebuggerHidden]
		public _003CWaitAndChangeBackground_003Ed__16(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/MainMenu.c (UI.MainMenu.<WaitAndChangeBackground>d__16$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6005122")]
		[Address(RVA = "0x5C58420", Offset = "0x5C57420", VA = "0x5C58420", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/MainMenu.c (UI.MainMenu.<WaitAndChangeBackground>d__16$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6005123")]
		[Address(RVA = "0x5C58430", Offset = "0x5C57430", VA = "0x5C58430", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/MainMenu.c (UI.MainMenu.<WaitAndChangeBackground>d__16$$MoveNext): clean
			int iVar1;
			MainMenu pUVar2;
			MainBackgroundMenu __this_00;
			AottgMainMenuTipPanelController __this_01;
			WaitForSeconds __this_02;

			iVar1 = this.__1__state;
			if (iVar1 == 1) {
				pUVar2 = this.__4__this;
				this.__1__state = -1;
				if ((pUVar2 == null) ||(__this_00 = pUVar2._backgroundMenu, __this_00 == null)) {
					throw new NullReferenceException();
				}
				__this_00.ChangeMainBackground();
				__this_01 = pUVar2._tipPanel;
				if (__this_01 != null) {
					__this_01.ShowRandomTip(true);
				}
			}
			else {
				if (iVar1 != 0) {
					return false;
				}
				this.__1__state = -1;
			}
			__this_02 = new WaitForSeconds(20.0);
			this.__2__current = (object)__this_02;
			this.__1__state = 1;
			return true;
		}

		[Token(Token = "0x6005125")]
		[Address(RVA = "0x5C58510", Offset = "0x5C57510", VA = "0x5C58510", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/MainMenu.c (UI.MainMenu.<WaitAndChangeBackground>d__16$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_MainMenu_WaitAndChangeBackground_d__16_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4002B0F")]
	[FieldOffset(Offset = "0x98")]
	public BasePopup _leaderboardPopup;

	[Token(Token = "0x4002B10")]
	[FieldOffset(Offset = "0xA0")]
	public BasePopup _questPopup;

	[Token(Token = "0x4002B11")]
	[FieldOffset(Offset = "0xA8")]
	public MainBackgroundMenu _backgroundMenu;

	[Token(Token = "0x4002B12")]
	[FieldOffset(Offset = "0xB0")]
	protected string _lastButtonClicked;

	[Token(Token = "0x4002B13")]
	[FieldOffset(Offset = "0x0")]
	public static JSONNode MainBackgroundInfo;

	[Token(Token = "0x4002B14")]
	protected const float ChangeBackgroundTime = 20f;

	[Token(Token = "0x4002B15")]
	[FieldOffset(Offset = "0xB8")]
	private AottgMainMenuTipPanelController _tipPanel;

	[Token(Token = "0x6005114")]
	[Address(RVA = "0x5C57AD0", Offset = "0x5C56AD0", VA = "0x5C57AD0", Slot = "4")]
	public override void Setup()
	{
		// Lifted from source/cpp/UI/MainMenu.c (UI.MainMenu$$Setup): clean
		JSONNode a;
		bool bVar1;
		String pSVar2;
		MethodInfo method_00;
		AottgMainMenuTipPanelController pGVar3;

		this.Setup();
		a = MainMenu.MainBackgroundInfo;
		method_00 = null;
		bVar1 = (a == null);
		if (bVar1) {
			pSVar2 = ResourcePaths.Info;
			pSVar2 = ResourceManager.LoadText(pSVar2, "MainBackgroundInfo");
			method_00 = (MethodInfo)JSON.Parse(pSVar2);
			MainMenu.MainBackgroundInfo = (JSONNode)method_00;
		}
		this.SetupMainBackground();
		pGVar3 = AottgGisketchUiHost.ShowMainMenu();
		this._tipPanel = pGVar3;
		return;
	}

	[Token(Token = "0x6005115")]
	[Address(RVA = "0x5C57C20", Offset = "0x5C56C20", VA = "0x5C57C20")]
	private void SetupMainBackground()
	{
		// Lifted from source/cpp/UI/MainMenu.c (UI.MainMenu$$SetupMainBackground): clean
		MainBackgroundMenu pUVar1;
		MainMenu.d__16<WaitAndChangeBackground> __this_00;

		pUVar1 = ElementFactory.CreateMenu<MainBackgroundMenu>("Prefabs/Panels/BackgroundMenu");
		this._backgroundMenu = pUVar1;
		pUVar1 = this._backgroundMenu;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.Setup();
		__this_00 = new MainMenu.d__16<WaitAndChangeBackground>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		this.StartCoroutine((IEnumerator)__this_00);
		return;
	}

	[Token(Token = "0x6005116")]
	[Address(RVA = "0x5C57DB0", Offset = "0x5C56DB0", VA = "0x5C57DB0")]
	public void ShowMultiplayerRoomList()
	{
		// Lifted from source/cpp/UI/MainMenu.c (UI.MainMenu$$ShowMultiplayerRoomList): clean
		GisketchScreenRouter __this_00;
		GisketchUIRoot pGVar1;

		this.HideAllPopups();
		AottgRoomList.Reset();
		AottgCustomServerWarning.Sync();
		pGVar1 = AottgGisketchUiHost.Root;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		__this_00 = pGVar1._Screens_k__BackingField;
		if (__this_00 == null) {
			return;
		}
		__this_00.ShowScreen("room-list");
		return;
	}

	[Token(Token = "0x6005117")]
	[Address(RVA = "0x5C57E50", Offset = "0x5C56E50", VA = "0x5C57E50")]
	public void ShowMultiplayerServerSelect()
	{
		// Lifted from source/cpp/UI/MainMenu.c (UI.MainMenu$$ShowMultiplayerServerSelect): clean
		GisketchScreenRouter __this_00;
		GisketchUIRoot pGVar1;

		this.HideAllPopups();
		AottgCustomServerWarning.Sync();
		AottgQuickPlay.Prewarm();
		pGVar1 = AottgGisketchUiHost.Root;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		__this_00 = pGVar1._Screens_k__BackingField;
		if (__this_00 == null) {
			return;
		}
		__this_00.ShowScreen("server-select");
		return;
	}

	[Token(Token = "0x6005118")]
	[Address(RVA = "0x5C57EF0", Offset = "0x5C56EF0", VA = "0x5C57EF0")]
	public void OpenIntroAction(string name)
	{
		// Lifted from source/cpp/UI/MainMenu.c (UI.MainMenu$$OpenIntroAction): clean
		this.OnIntroButtonClick(name);
		return;
	}

	[Token(Token = "0x6005119")]
	[Address(RVA = "0x5C58070", Offset = "0x5C57070", VA = "0x5C58070")]
	public void ClosePopups()
	{
		// Lifted from source/cpp/UI/MainMenu.c (UI.MainMenu$$ClosePopups): clean
		this.HideAllPopups();
		return;
	}

	[Token(Token = "0x600511A")]
	[Address(RVA = "0x5C58090", Offset = "0x5C57090", VA = "0x5C58090", Slot = "5")]
	protected override void SetupPopups()
	{
		// Lifted from source/cpp/UI/MainMenu.c (UI.MainMenu$$SetupPopups): 4 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<BasePopup> pSVar3;
		BasePopup[] pUVar4;
		Transform pUVar6;
		Component pUVar7;
		BasePopup pUVar8;

		this.SetupPopups();
		pUVar6 = this.transform;
		pUVar7 = (Component)ElementFactory.CreateHeadedPanel<LeaderboardPopup>(pUVar6, false);
		if (pUVar7 != null) {
			pUVar8 = (BasePopup)pUVar7.GetComponent<BasePopup>();
			this._leaderboardPopup = pUVar8;
			pUVar6 = this.transform;
			pUVar7 = (Component)ElementFactory.CreateHeadedPanel<QuestPopup>(pUVar6, false);
			if (pUVar7 != null) {
				pUVar8 = (BasePopup)pUVar7.GetComponent<BasePopup>();
				this._questPopup = pUVar8;
				pSVar3 = this._popups;
				if (pSVar3 != null) {
					pUVar8 = this._leaderboardPopup;
					piVar1 = &pSVar3._version;
					*piVar1 = *piVar1 + 1;
					pUVar4 = pSVar3._items;
					if (pUVar4 != null) {
						uVar2 = pSVar3._size;
						if (uVar2 < (uint)pUVar4.Length) {
							pSVar3._size = uVar2 + 1;
							pUVar4[(int)uVar2] = pUVar8;
						}
						else {
							pSVar3.AddWithResize((object)pUVar8);
						}
						pSVar3 = this._popups;
						if (pSVar3 != null) {
							pUVar8 = this._questPopup;
							piVar1 = &pSVar3._version;
							*piVar1 = *piVar1 + 1;
							pUVar4 = pSVar3._items;
							if (pUVar4 != null) {
								uVar2 = pSVar3._size;
								if (uVar2 < (uint)pUVar4.Length) {
									pSVar3._size = uVar2 + 1;
									pUVar4[(int)uVar2] = pUVar8;
									return;
								}
								pSVar3.AddWithResize((object)pUVar8);
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600511B")]
	[Address(RVA = "0x5C57D10", Offset = "0x5C56D10", VA = "0x5C57D10")]
	private void SetupIntroPanel()
	{
		// Lifted from source/cpp/UI/MainMenu.c (UI.MainMenu$$SetupIntroPanel): clean
		AottgMainMenuTipPanelController pGVar1;

		pGVar1 = AottgGisketchUiHost.ShowMainMenu();
		this._tipPanel = pGVar1;
		return;
	}

	[Token(Token = "0x600511C")]
	[Address(RVA = "0x5C58250", Offset = "0x5C57250", VA = "0x5C58250")]
	private void ChangeMainBackground()
	{
		// Lifted from source/cpp/UI/MainMenu.c (UI.MainMenu$$ChangeMainBackground): clean
		MainBackgroundMenu __this_00;
		AottgMainMenuTipPanelController __this_01;

		__this_00 = this._backgroundMenu;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.ChangeMainBackground();
		__this_01 = this._tipPanel;
		if (__this_01 == null) {
			return;
		}
		__this_01.ShowRandomTip(true);
		return;
	}

	[Token(Token = "0x600511D")]
	[Address(RVA = "0x5C57D40", Offset = "0x5C56D40", VA = "0x5C57D40")]
	[IteratorStateMachine(typeof(_003CWaitAndChangeBackground_003Ed__16))]
	private IEnumerator WaitAndChangeBackground()
	{
		// Lifted from source/cpp/UI/MainMenu.c (UI.MainMenu$$WaitAndChangeBackground): clean
		MainMenu.d__16<WaitAndChangeBackground> __this_00;

		__this_00 = new MainMenu.d__16<WaitAndChangeBackground>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x600511E")]
	[Address(RVA = "0x5C582B0", Offset = "0x5C572B0", VA = "0x5C582B0")]
	private bool IsPopupActive()
	{
		// Lifted from source/cpp/UI/MainMenu.c (UI.MainMenu$$IsPopupActive): 3 lines keep C-only constructs
		List<BasePopup> __this_00;
		bool bVar1;
		int iVar2;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		byte local_20;

		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		__this_00 = this._popups;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_48 = __this_00.GetEnumerator();
		local_20 = (byte)&local_48;
		do {
			bVar1 = local_48.MoveNext();
			if (!bVar1) {
				iVar2 = 5;
				goto label_05d58381;
			}
			if (local_48._current == null) {
				throw new NullReferenceException();
			}
		} while (*(sbyte)&local_48._current[9].klass == false);
		iVar2 = 4;
	label_05d58381: ;
		local_48.Dispose();
		return iVar2 == 4 && bVar1;
	}

	[Token(Token = "0x600511F")]
	[Address(RVA = "0x5C57F00", Offset = "0x5C56F00", VA = "0x5C57F00")]
	private void OnIntroButtonClick(string name)
	{
		// Lifted from source/cpp/UI/MainMenu.c (UI.MainMenu$$OnIntroButtonClick): clean
		BasePopup pUVar1;
		ExternalLinkPopup __this_00;
		bool bVar2;
		MethodInfo pMVar3;

		bVar2 = this.IsPopupActive();
		this.HideAllPopups();
		if ((bVar2) &&(bVar2 = (this._lastButtonClicked == name))) {
			return;
		}
		this._lastButtonClicked = name;
		pMVar3 = (MethodInfo *)"MultiplayerButton";
		bVar2 = (name == "MultiplayerButton");
		if (bVar2) {
			this.ShowMultiplayerServerSelect();
			return;
		}
		bVar2 = (name == "QuestButton");
		if (bVar2) {
			pUVar1 = this._questPopup;
		}
		else {
			bVar2 = (name == "LeaderboardButton");
			if (!bVar2) {
				bVar2 = (name == "PatreonButton");
				if (!bVar2) {
					return;
				}
				__this_00 = this.ExternalLinkPopup;
				if (__this_00 != null) {
					__this_00.Show("https://www.patreon.com/aottg2");
					return;
				}
				goto label_05d5806b;
			}
			pUVar1 = this._leaderboardPopup;
		}
		if (pUVar1 != null) {
			pUVar1.Show();
			return;
		}
	label_05d5806b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005120")]
	[Address(RVA = "0x5C58410", Offset = "0x5C57410", VA = "0x5C58410")]
	public MainMenu()
	{
		// Lifted from source/cpp/UI/MainMenu.c (UI.MainMenu$$.ctor): clean
		base();
		return;
	}
}
