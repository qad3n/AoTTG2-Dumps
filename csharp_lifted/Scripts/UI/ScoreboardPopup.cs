// ==================== AoTTG2 cross-reference ====================
// Type: UI.ScoreboardPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ScoreboardPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000869")]
internal class ScoreboardPopup : BasePopup
{
	[Token(Token = "0x4002A98")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public string LocaleCategory;

	[Token(Token = "0x4002A99")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public ScoreboardProfilePopup _profilePopup;

	[Token(Token = "0x4002A9A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public ScoreboardKickPopup _kickPopup;

	[Token(Token = "0x4002A9B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	public ScoreboardMutePopup _mutePopup;

	[Token(Token = "0x4002A9C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private AottgInGameView _view;

	[Token(Token = "0x17000DE5")]
	protected override string Title
	{
		[Token(Token = "0x6005037")]
		[Address(RVA = "0x5C49350", Offset = "0x5C48350", VA = "0x5C49350", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/ScoreboardPopup.c (UI.ScoreboardPopup$$get_Title): clean
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
	}

	[Token(Token = "0x17000DE6")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6005038")]
		[Address(RVA = "0x5C49370", Offset = "0x5C48370", VA = "0x5C49370", Slot = "54")]
		get
		{
			// Lifted from source/cpp/UI/ScoreboardPopup.c (UI.ScoreboardPopup$$get_PopupAnimationType): clean
			return 1;
		}
	}

	[Token(Token = "0x17000DE7")]
	protected override float MinFadeAlpha
	{
		[Token(Token = "0x6005039")]
		[Address(RVA = "0x5C49380", Offset = "0x5C48380", VA = "0x5C49380", Slot = "47")]
		get
		{
			// Lifted from source/cpp/UI/ScoreboardPopup.c (UI.ScoreboardPopup$$get_MinFadeAlpha): clean
			return 0.5;
		}
	}

	[Token(Token = "0x17000DE8")]
	protected override float Width
	{
		[Token(Token = "0x600503A")]
		[Address(RVA = "0x5C49390", Offset = "0x5C48390", VA = "0x5C49390", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/ScoreboardPopup.c (UI.ScoreboardPopup$$get_Width): clean
			return 1400.0;
		}
	}

	[Token(Token = "0x17000DE9")]
	protected override float Height
	{
		[Token(Token = "0x600503B")]
		[Address(RVA = "0x5C493A0", Offset = "0x5C483A0", VA = "0x5C493A0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/ScoreboardPopup.c (UI.ScoreboardPopup$$get_Height): clean
			return 800.0;
		}
	}

	[Token(Token = "0x17000DEA")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x600503C")]
		[Address(RVA = "0x5C493B0", Offset = "0x5C483B0", VA = "0x5C493B0", Slot = "16")]
		get
		{
			// Lifted from source/cpp/UI/ScoreboardPopup.c (UI.ScoreboardPopup$$get_CategoryPanel): clean
			return true;
		}
	}

	[Token(Token = "0x17000DEB")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x600503D")]
		[Address(RVA = "0x5C493C0", Offset = "0x5C483C0", VA = "0x5C493C0", Slot = "42")]
		get
		{
			// Lifted from source/cpp/UI/ScoreboardPopup.c (UI.ScoreboardPopup$$get_CategoryButtons): clean
			return true;
		}
	}

	[Token(Token = "0x17000DEC")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x600503E")]
		[Address(RVA = "0x5C493D0", Offset = "0x5C483D0", VA = "0x5C493D0", Slot = "19")]
		get
		{
			// Lifted from source/cpp/UI/ScoreboardPopup.c (UI.ScoreboardPopup$$get_DefaultCategoryPanel): clean
			return "Scoreboard";
		}
	}

	[Token(Token = "0x600503F")]
	[Address(RVA = "0x5C49400", Offset = "0x5C48400", VA = "0x5C49400", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/ScoreboardPopup.c (UI.ScoreboardPopup$$Setup): clean
		Dictionary<object, object> __this_00;
		bool bVar1;
		Transform pUVar2;
		AottgInGameView pGVar3;
		String pSVar4;
		Type t;
		float width;
		float height;
		float headerHeight;
		float footerHeight;

		this.Parent = parent;
		pUVar2 = this.transform;
		width = this.get_Width();
		height = this.get_Height();
		headerHeight = this.get_TopBarHeight();
		footerHeight = this.get_BottomBarHeight();
		pGVar3 = AottgInGameView.ScaledPopupShell(pUVar2, width, height, headerHeight, footerHeight, ref this.TopBar, ref this.BottomBar, "inGameFooter");
		this._view = pGVar3;
		this.SetupTopButtons();
		pUVar2 = this.BottomBar;
		pGVar3 = this._view;
		pSVar4 = UIManager.GetLocaleCommon("Back");
		if (pGVar3 != null) {
			pGVar3.Button(pUVar2, pSVar4, "ingame.scoreboard.back", null, 220.0, 44.0, 3);
			this.SetupPopups();
			this.RegisterCategoryPanels();
			t = this.GetType();
			pSVar4 = UIManager.GetLastcategory(t);
			__this_00 = (Dictionary<object, object>)this._categoryPanelTypes;
			if (__this_00 != null) {
				bVar1 = __this_00.ContainsKey((object)pSVar4);
				if (!bVar1) {
					pSVar4 = this.get_DefaultCategoryPanel();
				}
				this.SetCategoryPanel(pSVar4);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005040")]
	[Address(RVA = "0x5C49680", Offset = "0x5C48680", VA = "0x5C49680", Slot = "21")]
	public override void Show()
	{
		// Lifted from source/cpp/UI/ScoreboardPopup.c (UI.ScoreboardPopup$$Show): 1 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		StringSetting pSVar1;
		bool bVar2;
		Button method_00;
		GameObject pUVar3;
		ScoreboardScorePanel __this_01;
		MethodInfo pMVar4;

		__this_00 = (Dictionary<object, object>)this._topButtons;
		if (__this_00 != null) {
			method_00 = __this_00.get_Item((Il2CppObject *)"Moderation");
			if (method_00 != null) {
				pUVar3 = method_00.gameObject;
				bVar2 = ScoreboardPopup.ShouldShowModerationTab();
				if (pUVar3 != null) {
					pUVar3.SetActive(bVar2);
					pSVar1 = this._currentCategoryPanelName;
					if (pSVar1 != null) {
						pMVar4 = (MethodInfo)pSVar1._value;
						bVar2 = ((String)pMVar4 == "Moderation");
						if (bVar2) {
							bVar2 = ScoreboardPopup.ShouldShowModerationTab();
							if (!bVar2) {
								this.SetCategoryPanel("Scoreboard");
							}
						}
						this.Show();
						pSVar1 = this._currentCategoryPanelName;
						if (pSVar1 != null) {
							bVar2 = (pSVar1._value == "Scoreboard");
							if (!bVar2) {
								return;
							}
							pUVar3 = this._currentCategoryPanel;
							if (pUVar3 != null) {
								pMVar4 = MethodInfo_UnityEngine_GameObject_GetComponent_ScoreboardScorePanel;
								__this_01 = pUVar3.GetComponent<ScoreboardScorePanel>();
								if (__this_01 != null) {
									__this_01.Sync();
									return;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005041")]
	[Address(RVA = "0x5C49B30", Offset = "0x5C48B30", VA = "0x5C49B30", Slot = "44")]
	protected override void SetupTopButtons()
	{
		// Lifted from source/cpp/UI/ScoreboardPopup.c (UI.ScoreboardPopup$$SetupTopButtons): 7 lines keep C-only constructs
		AottgInGameView __this_00;
		Transform parent;
		Dictionary<object, object> __this_01;
		bool bVar1;
		bool value;
		object pIVar2;
		ulong uVar3;
		String item;
		String pSVar4;
		Button __this_02;
		GameObject __this_03;
		Il2CppClass method_00;
		ulong uVar5;

		pIVar2 = new string[3];
		if (pIVar2 == null) {
	label_05d49dbe: ;
			throw new NullReferenceException();
		}
		if (*(int)&pIVar2[1].monitor != 0) {
			pIVar2[2].klass = (Il2CppClass *)"Scoreboard";
			if (((ulong)pIVar2[1].monitor & 0xfffffffe) != 0) {
				pIVar2[2].monitor = "GameInfo";
				if (2 < *(uint)&pIVar2[1].monitor) {
					pIVar2[3].klass = (Il2CppClass *)"Moderation";
					if (0 < (int)pIVar2[1].monitor) {
						uVar3 = (ulong)pIVar2[1].monitor & 0xffffffff;
						uVar5 = 0;
						do {
							if (uVar3 <= uVar5) goto label_05d49dc3;
							method_00 = (&pIVar2[2].klass)[uVar5];
							__this_00 = this._view;
							parent = this.TopBar;
							pSVar4 = this.LocaleCategory;
							item = String.Concat((String)method_00, "Button");
							pSVar4 = UIManager.GetLocale(pSVar4, "Top", item, "", "");
							if (__this_00 == null) goto label_05d49dbe;
							__this_02 = __this_00.Button(parent, pSVar4, "ingame.scoreboard.tab", (String)method_00, 240.0, 44.0, 3);
							__this_01 = (Dictionary<object, object>)this._topButtons;
							if (__this_01 == null) goto label_05d49dbe;
							__this_01.Add((object)method_00, (object)__this_02);
							if (__this_02 == null) goto label_05d49dbe;
							__this_03 = __this_02.gameObject;
							bVar1 = ((String)method_00 != "Moderation");
							value = true;
							if (!bVar1) {
								value = ScoreboardPopup.ShouldShowModerationTab();
							}
							if (__this_03 == null) goto label_05d49dbe;
							__this_03.SetActive(value);
							uVar5 = uVar5 + 1;
							uVar3 = (ulong)*(uint)&pIVar2[1].monitor;
						} while ((long)uVar5 < (long)(int)*(uint)&pIVar2[1].monitor);
					}
					return;
				}
			}
		}
	label_05d49dc3: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6005042")]
	[Address(RVA = "0x5C49DD0", Offset = "0x5C48DD0", VA = "0x5C49DD0", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
		// Lifted from source/cpp/UI/ScoreboardPopup.c (UI.ScoreboardPopup$$RegisterCategoryPanels): clean
		Dictionary<object, object> pSVar1;
		Il2CppType handle;
		Type pSVar2;

		handle = TypeRef_UI_ScoreboardScorePanel;
		pSVar1 = (Dictionary<object, object>)this._categoryPanelTypes;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (pSVar1 != null) {
			pSVar1.Add((Il2CppObject *)"Scoreboard", (object)pSVar2);
			pSVar1 = (Dictionary<object, object>)this._categoryPanelTypes;
			pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UI_ScoreboardInfoPanel);
			if (pSVar1 != null) {
				pSVar1.Add((Il2CppObject *)"GameInfo", (object)pSVar2);
				pSVar1 = (Dictionary<object, object>)this._categoryPanelTypes ;
				pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UI_ScoreboardModerationPanel);
				if (pSVar1 != null) {
					pSVar1.Add((Il2CppObject *)"Moderation", (object)pSVar2);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005043")]
	[Address(RVA = "0x5C49F10", Offset = "0x5C48F10", VA = "0x5C49F10", Slot = "43")]
	protected override void SetTopButton(string name)
	{
		// Lifted from source/cpp/UI/ScoreboardPopup.c (UI.ScoreboardPopup$$SetTopButton): 2 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		AottgInGameView __this_01;
		object a;
		object button;
		bool bVar1;
		System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o SStack_58;

		SStack_58._current.key = null;
		SStack_58._current.value = null;
		SStack_58._dictionary = null;
		SStack_58._version = 0;
		SStack_58._index = 0;
		SStack_58._getEnumeratorRetType = 0;
		SStack_58._36_4_ = 0;
		__this_00 = (Dictionary<object, object>)this._topButtons;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		SStack_58 = __this_00.GetEnumerator();
		while(true) {
			bVar1 = SStack_58.MoveNext();
			button = SStack_58._current.value;
			a = SStack_58._current.key;
			if (!bVar1) {
				SStack_58.Dispose();
				return;
			}
			if ((Button)SStack_58._current.value == null) break;
			SStack_58._current.value.interactable = true;
			__this_01 = this._view;
			bVar1 = ((String)a == name);
			if (__this_01 == null) {
				throw new NullReferenceException();
			}
			__this_01.SetButtonSelected((Button)button, bVar1);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005044")]
	[Address(RVA = "0x5C4A0C0", Offset = "0x5C490C0", VA = "0x5C4A0C0", Slot = "28")]
	public override void SetCategoryPanel(string name)
	{
		// Lifted from source/cpp/UI/ScoreboardPopup.c (UI.ScoreboardPopup$$SetCategoryPanel): clean
		Object x;
		bool bVar1;
		String b;

		x = (Object)this._currentCategoryPanel;
		bVar1 = (x != null);
		if (bVar1) {
			b = this.GetCurrentCategoryName();
			bVar1 = (name == b);
			if (bVar1) {
				return;
			}
		}
		bVar1 = (name == "Moderation");
		if (bVar1) {
			bVar1 = ScoreboardPopup.ShouldShowModerationTab();
			if (!bVar1) {
				name = "Scoreboard";
			}
		}
		this.SetCategoryPanel(name);
		return;
	}

	[Token(Token = "0x6005045")]
	[Address(RVA = "0x5C497E0", Offset = "0x5C487E0", VA = "0x5C497E0")]
	private static bool ShouldShowModerationTab()
	{
		// Lifted from source/cpp/UI/ScoreboardPopup.c (UI.ScoreboardPopup$$ShouldShowModerationTab): clean
		sbyte cVar1;
		uint uVar2;
		bool bVar3;
		int iVar4;
		String[] array;

		if (Il2CppMethodInitialized_07547ed5 == false) {
			Il2CppMethodInitialized_07547ed5 = true;
			uVar2 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_07544cc2 == false) {
			Il2CppMethodInitialized_07544cc2 = true;
			uVar2 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			cVar1 = PhotonNetwork.offlineMode;
		}
		else {
			cVar1 = *(sbyte)((long)(typeof(PhotonNetwork)).static_fields + 0x30);
		}
		if (cVar1 == false) {
			if (((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor == 0) {
			}
			bVar3 = PhotonNetwork.IsMasterClient;
			if (bVar3) {
				return true;
			}
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
				array = AccountManager.Roles;
			}
			else {
				array = AccountManager.Roles;
			}
			if (array != null) {
				iVar4 = Array.IndexOf<string>((Object[])array, (Il2CppObject *)"admin");
				if (iVar4 < 0) {
					iVar4 = Array.IndexOf<string>((Object[])array, (Il2CppObject *)"moderator");
					return -1 < iVar4;
				}
				return true;
			}
		}
		return false;
	}

	[Token(Token = "0x6005046")]
	[Address(RVA = "0x5C4A190", Offset = "0x5C49190", VA = "0x5C4A190", Slot = "25")]
	protected override void SetupPopups()
	{
		// Lifted from source/cpp/UI/ScoreboardPopup.c (UI.ScoreboardPopup$$SetupPopups): 6 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<BasePopup> pSVar3;
		BasePopup[] pUVar4;
		Transform pUVar6;
		ScoreboardProfilePopup pUVar7;
		ScoreboardKickPopup pUVar8;
		ScoreboardMutePopup pUVar9;

		this.SetupPopups();
		pUVar6 = this.transform;
		pUVar7 = ElementFactory.CreateDefaultPopup<ScoreboardProfilePopup>(pUVar6, false);
		this._profilePopup = pUVar7;
		pUVar6 = this.transform;
		pUVar8 = ElementFactory.CreateDefaultPopup<ScoreboardKickPopup>(pUVar6, false);
		this._kickPopup = pUVar8;
		pUVar6 = this.transform;
		pUVar9 = ElementFactory.CreateDefaultPopup<ScoreboardMutePopup>(pUVar6, false);
		this._mutePopup = pUVar9;
		pSVar3 = this._popups;
		if (pSVar3 != null) {
			pUVar7 = this._profilePopup;
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
				pSVar3 = this._popups;
				if (pSVar3 != null) {
					pUVar9 = this._mutePopup;
					piVar1 = &pSVar3._version;
					*piVar1 = *piVar1 + 1;
					pUVar4 = pSVar3._items;
					if (pUVar4 != null) {
						uVar2 = pSVar3._size;
						if (uVar2 < (uint)pUVar4.Length) {
							pSVar3._size = uVar2 + 1;
							pUVar4[(int)uVar2] = (BasePopup)pUVar9;
						}
						else {
							pSVar3.AddWithResize((object)pUVar9);
						}
						pSVar3 = this._popups;
						if (pSVar3 != null) {
							pUVar8 = this._kickPopup;
							piVar1 = &pSVar3._version;
							*piVar1 = *piVar1 + 1;
							pUVar4 = pSVar3._items;
							if (pUVar4 != null) {
								uVar2 = pSVar3._size;
								if (uVar2 < (uint)pUVar4.Length) {
									pSVar3._size = uVar2 + 1;
									pUVar4[(int)uVar2] = (BasePopup)pUVar8;
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

	[Token(Token = "0x6005047")]
	[Address(RVA = "0x5C4A3B0", Offset = "0x5C493B0", VA = "0x5C4A3B0")]
	public ScoreboardPopup()
	{
		// Lifted from source/cpp/UI/ScoreboardPopup.c (UI.ScoreboardPopup$$.ctor): clean
		this.LocaleCategory = "ScoreboardPopup";
		base();
		return;
	}
}
