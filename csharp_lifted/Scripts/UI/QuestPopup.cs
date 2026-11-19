// ==================== AoTTG2 cross-reference ====================
// Type: UI.QuestPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/QuestPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/QuestPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000888")]
internal class QuestPopup : BasePopup
{
	[Token(Token = "0x4002B1B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public StringSetting TierSelection;

	[Token(Token = "0x4002B1C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public StringSetting CompletedSelection;

	[Token(Token = "0x17000E38")]
	protected override string Title
	{
		[Token(Token = "0x600513A")]
		[Address(RVA = "0x5C5B020", Offset = "0x5C5A020", VA = "0x5C5B020", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/QuestPopup.c (UI.QuestPopup$$get_Title): clean
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
	}

	[Token(Token = "0x17000E39")]
	protected override float Width
	{
		[Token(Token = "0x600513B")]
		[Address(RVA = "0x5C5B040", Offset = "0x5C5A040", VA = "0x5C5B040", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/QuestPopup.c (UI.QuestPopup$$get_Width): clean
			return 990.0;
		}
	}

	[Token(Token = "0x17000E3A")]
	protected override float Height
	{
		[Token(Token = "0x600513C")]
		[Address(RVA = "0x5C5B050", Offset = "0x5C5A050", VA = "0x5C5B050", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/QuestPopup.c (UI.QuestPopup$$get_Height): clean
			return 740.0;
		}
	}

	[Token(Token = "0x17000E3B")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x600513D")]
		[Address(RVA = "0x5C5B060", Offset = "0x5C5A060", VA = "0x5C5B060", Slot = "16")]
		get
		{
			// Lifted from source/cpp/UI/QuestPopup.c (UI.QuestPopup$$get_CategoryPanel): clean
			return true;
		}
	}

	[Token(Token = "0x17000E3C")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x600513E")]
		[Address(RVA = "0x5C5B070", Offset = "0x5C5A070", VA = "0x5C5B070", Slot = "42")]
		get
		{
			// Lifted from source/cpp/UI/QuestPopup.c (UI.QuestPopup$$get_CategoryButtons): clean
			return true;
		}
	}

	[Token(Token = "0x17000E3D")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x600513F")]
		[Address(RVA = "0x5C5B080", Offset = "0x5C5A080", VA = "0x5C5B080", Slot = "19")]
		get
		{
			// Lifted from source/cpp/UI/QuestPopup.c (UI.QuestPopup$$get_DefaultCategoryPanel): clean
			return "Daily";
		}
	}

	[Token(Token = "0x17000E3E")]
	protected override bool UseSound
	{
		[Token(Token = "0x6005140")]
		[Address(RVA = "0x5C5B0B0", Offset = "0x5C5A0B0", VA = "0x5C5B0B0", Slot = "53")]
		get
		{
			// Lifted from source/cpp/UI/QuestPopup.c (UI.QuestPopup$$get_UseSound): clean
			return true;
		}
	}

	[Token(Token = "0x6005141")]
	[Address(RVA = "0x5C5B0C0", Offset = "0x5C5A0C0", VA = "0x5C5B0C0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/QuestPopup.c (UI.QuestPopup$$Setup): clean
		this.Setup(parent);
		this.SetupBottomButtons();
		return;
	}

	[Token(Token = "0x6005142")]
	[Address(RVA = "0x5C59110", Offset = "0x5C58110", VA = "0x5C59110")]
	public void CreateAchievementDropdowns(Transform panel)
	{
		// Lifted from source/cpp/UI/QuestPopup.c (UI.QuestPopup$$CreateAchievementDropdowns): 2 lines keep C-only constructs
		StringSetting pSVar1;
		String themePanel;
		ElementStyle __this_00;
		String[] pSVar2;
		UnityAction pUVar3;

		themePanel = this.get_ThemePanel();
		__this_00 = new ElementStyle(0x18, 0.0, 20.0, themePanel);
		pSVar1 = this.TierSelection;
		pSVar2 = (String[])new string[3];
		if (pSVar2 == null) {
	label_05d5940e: ;
			throw new NullReferenceException();
		}
		if ((int)pSVar2.Length != 0) {
			pSVar2[0] = "Bronze";
			if ((pSVar2.Length & 0xfffffffe) != 0) {
				pSVar2[1] = "Silver";
				if (2 < (uint)pSVar2.Length) {
					pSVar2[2] = "Gold";
					pUVar3 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_QuestPopup_CreateAchievementDropdowns_b__17_0);
					ElementFactory.CreateDropdownSetting(panel, __this_00, (BaseSetting)pSVar1, "", pSVar2, "", 180.0, 40.0, 300.0, (Nullable<float>)0x0, pUVar3, null, null);
					pSVar1 = this.CompletedSelection;
					pSVar2 = (String[])new string[2];
					if (pSVar2 == null) goto label_05d5940e;
					if ((int)pSVar2.Length != 0) {
						pSVar2[0] = "In Progress";
						if ((pSVar2.Length & 0xfffffffe) != 0) {
							pSVar2[1] = "Completed";
							pUVar3 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_QuestPopup_CreateAchievementDropdowns_b__17_1);
							ElementFactory.CreateDropdownSetting(panel, __this_00, (BaseSetting)pSVar1, "", pSVar2, "", 180.0, 40.0, 300.0, (Nullable<float>)0x0, pUVar3, null, null);
							return;
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6005143")]
	[Address(RVA = "0x5C5B320", Offset = "0x5C5A320", VA = "0x5C5B320", Slot = "44")]
	protected override void SetupTopButtons()
	{
		// Lifted from source/cpp/UI/QuestPopup.c (UI.QuestPopup$$SetupTopButtons): 10 lines keep C-only constructs
		Transform parent;
		Dictionary<object, object> __this_00;
		bool bVar1;
		String pSVar2;
		ElementStyle __this_01;
		object pIVar3;
		QuestPopup.c__DisplayClass18_0 __this_02;
		UnityAction __this_03;
		GameObject __this_04;
		Button value;
		QuestPopup.c__DisplayClass18_0 targetAddress;
		ulong uVar4;

		pSVar2 = this.get_ThemePanel();
		__this_01 = new ElementStyle(0x1c, 120.0, 20.0, pSVar2);
		pIVar3 = new string[3];
		if (pIVar3 == null) {
	label_05d5b694: ;
			throw new NullReferenceException();
		}
		if (*(int)&pIVar3[1].monitor != 0) {
			pIVar3[2].klass = (Il2CppClass *)"Daily";
			if (((ulong)pIVar3[1].monitor & 0xfffffffe) != 0) {
				pIVar3[2].monitor = "Weekly";
				if (2 < *(uint)&pIVar3[1].monitor) {
					pIVar3[3].klass = (Il2CppClass *)"Achievements";
					if (0 < *(int)&pIVar3[1].monitor) {
						uVar4 = 0;
						do {
							__this_02 = new QuestPopup.c__DisplayClass18_0();
							if (__this_02 == null) goto label_05d5b694;
							__this_02.__4__this = this;
							if (*(uint)&pIVar3[1].monitor <= uVar4) goto label_05d5b699;
							targetAddress = &__this_02.fields;
							__this_02.buttonName = (String)(&pIVar3[2].klass)[uVar4];
							bVar1 = (__this_02.buttonName == "Daily");
							if (bVar1) {
	label_05d5b56a: ;
								pSVar2 = targetAddress.buttonName;
								pSVar2 = UIManager.GetLocale("MainMenu", "QuestsPopup", pSVar2, "", "");
							}
							else {
								bVar1 = (targetAddress.buttonName == "Weekly");
								if (bVar1) goto label_05d5b56a;
								pSVar2 = targetAddress.buttonName;
								pSVar2 = UIManager.GetLocaleCommon(pSVar2);
							}
							parent = this.TopBar;
							__this_03 = new UnityAction((object)__this_02, (intptr_t)MethodInfo_UI_QuestPopup_c__DisplayClass18_0_SetupTopButtons_b__0);
							__this_04 = ElementFactory.CreateCategoryButton(parent, __this_01, pSVar2, __this_03);
							if (__this_04 == null) goto label_05d5b694;
							__this_00 = (Dictionary<object, object>)this._topButtons;
							pSVar2 = __this_02.buttonName;
							value = __this_04.GetComponent<Button>();
							if (__this_00 == null) goto label_05d5b694;
							__this_00.Add((object)pSVar2, (object)value);
							uVar4 = uVar4 + 1;
						} while ((long)uVar4 < (long)*(int)&pIVar3[1].monitor);
					}
					this.SetupTopButtons();
					return;
				}
			}
		}
	label_05d5b699: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6005144")]
	[Address(RVA = "0x5C5B6B0", Offset = "0x5C5A6B0", VA = "0x5C5B6B0", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
		// Lifted from source/cpp/UI/QuestPopup.c (UI.QuestPopup$$RegisterCategoryPanels): clean
		Dictionary<object, object> pSVar1;
		Il2CppType handle;
		Type pSVar2;

		handle = TypeRef_UI_QuestDailyPanel;
		pSVar1 = (Dictionary<object, object>)this._categoryPanelTypes;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (pSVar1 != null) {
			pSVar1.Add((Il2CppObject *)"Daily", (object)pSVar2);
			pSVar1 = (Dictionary<object, object>)this._categoryPanelTypes;
			pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UI_QuestWeeklyPanel);
			if (pSVar1 != null) {
				pSVar1.Add((Il2CppObject *)"Weekly", (object)pSVar2);
				pSVar1 = (Dictionary<object, object>)this._categoryPanelTypes ;
				pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UI_QuestAchievementsPanel);
				if (pSVar1 != null) {
					pSVar1.Add((Il2CppObject *)"Achievements", (object)pSVar2);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005145")]
	[Address(RVA = "0x5C5B7F0", Offset = "0x5C5A7F0", VA = "0x5C5B7F0", Slot = "25")]
	protected override void SetupPopups()
	{
		// Lifted from source/cpp/UI/QuestPopup.c (UI.QuestPopup$$SetupPopups): clean
		this.SetupPopups();
		return;
	}

	[Token(Token = "0x6005146")]
	[Address(RVA = "0x5C5B0E0", Offset = "0x5C5A0E0", VA = "0x5C5B0E0")]
	private void SetupBottomButtons()
	{
		// Lifted from source/cpp/UI/QuestPopup.c (UI.QuestPopup$$SetupBottomButtons): 7 lines keep C-only constructs
		Transform parent;
		int fontSize;
		String pSVar1;
		ElementStyle __this_00;
		object pIVar2;
		UnityAction __this_01;
		QuestPopup.c__DisplayClass21_0 __this_02;
		ulong uVar3;

		fontSize = this.get_ButtonFontSize();
		pSVar1 = this.get_ThemePanel();
		__this_00 = new ElementStyle(fontSize, 120.0, 20.0, pSVar1);
		pIVar2 = new string[1];
		if (pIVar2 == null) {
	label_05d5b309: ;
			throw new NullReferenceException();
		}
		if (*(int)&pIVar2[1].monitor == 0) {
	label_05d5b30e: ;
			throw new IndexOutOfRangeException();
		}
		pIVar2[2].klass = (Il2CppClass *)"Back";
		if (0 < *(int)&pIVar2[1].monitor) {
			uVar3 = 0;
			do {
				__this_02 = new QuestPopup.c__DisplayClass21_0();
				if (__this_02 == null) goto label_05d5b309;
				__this_02.__4__this = this;
				if (*(uint)&pIVar2[1].monitor <= uVar3) goto label_05d5b30e;
				__this_02.buttonName = (String)(&pIVar2[2].klass)[uVar3];
				parent = this.BottomBar;
				pSVar1 = __this_02.buttonName;
				pSVar1 = UIManager.GetLocaleCommon(pSVar1);
				__this_01 = new UnityAction((object)__this_02, (intptr_t)MethodInfo_UI_QuestPopup_c__DisplayClass21_0_SetupBottomButtons_b__0);
				ElementFactory.CreateTextButton(parent, __this_00, pSVar1, 0.0, __this_01);
				uVar3 = uVar3 + 1;
			} while ((long)uVar3 < (long)*(int)&pIVar2[1].monitor);
		}
		return;
	}

	[Token(Token = "0x6005147")]
	[Address(RVA = "0x5C5B810", Offset = "0x5C5A810", VA = "0x5C5B810")]
	private void OnBottomBarButtonClick(string name)
	{
		// Lifted from source/cpp/UI/QuestPopup.c (UI.QuestPopup$$OnBottomBarButtonClick): clean
		bool bVar1;

		bVar1 = (name == "Back");
		if (bVar1) {
			this.Hide();
			return;
		}
		return;
	}

	[Token(Token = "0x6005148")]
	[Address(RVA = "0x5C5B880", Offset = "0x5C5A880", VA = "0x5C5B880")]
	public QuestPopup()
	{
		// Lifted from source/cpp/UI/QuestPopup.c (UI.QuestPopup$$.ctor): clean
		StringSetting pSVar1;

		pSVar1 = new StringSetting("Bronze", 0x7fffffff);
		this.TierSelection = pSVar1;
		pSVar1 = new StringSetting("In Progress", 0x7fffffff);
		this.CompletedSelection = pSVar1;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/QuestPopup.c.

	// UI.QuestPopup.<>c__DisplayClass18_0$$.ctor: clean
	private void c__DisplayClass18_0__ctor()
	{
		base();
		return;
	}

	// UI.QuestPopup.<>c__DisplayClass21_0$$.ctor: clean
	private void c__DisplayClass21_0__ctor()
	{
		base();
		return;
	}

	// UI.QuestPopup$$<CreateAchievementDropdowns>b__17_0: clean
	private void CreateAchievementDropdowns_b__17_0()
	{
		this.RebuildCategoryPanel();
		return;
	}

	// UI.QuestPopup$$<CreateAchievementDropdowns>b__17_1: clean
	private void CreateAchievementDropdowns_b__17_1()
	{
		this.RebuildCategoryPanel();
		return;
	}

	// UI.QuestPopup.<>c__DisplayClass18_0$$<SetupTopButtons>b__0: clean
	private void c__DisplayClass18_0__SetupTopButtons_b__0()
	{
		QuestPopup pUVar1;

		pUVar1 = this.__4__this;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.SetCategoryPanel(this.buttonName);
		return;
	}

	// UI.QuestPopup.<>c__DisplayClass21_0$$<SetupBottomButtons>b__0: clean
	private void c__DisplayClass21_0__SetupBottomButtons_b__0()
	{
		QuestPopup pUVar1;
		String a;
		bool bVar2;

		pUVar1 = this.__4__this;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		a = this.buttonName;
		bVar2 = (a == "Back");
		if (bVar2) {
			pUVar1.Hide();
			return;
		}
		return;
	}
}
