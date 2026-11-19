// ==================== AoTTG2 cross-reference ====================
// Type: UI.LeaderboardPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/LeaderboardPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/LeaderboardPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200087F")]
internal class LeaderboardPopup : BasePopup
{
	[Token(Token = "0x17000E27")]
	protected override string Title
	{
		[Token(Token = "0x60050FA")]
		[Address(RVA = "0x5C56D80", Offset = "0x5C55D80", VA = "0x5C56D80", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/LeaderboardPopup.c (UI.LeaderboardPopup$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocale("MainMenu", "LeaderboardPopup", "Title", "", "");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000E28")]
	protected override float Width
	{
		[Token(Token = "0x60050FB")]
		[Address(RVA = "0x5C56E20", Offset = "0x5C55E20", VA = "0x5C56E20", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/LeaderboardPopup.c (UI.LeaderboardPopup$$get_Width): clean
			return 800.0;
		}
	}

	[Token(Token = "0x17000E29")]
	protected override float Height
	{
		[Token(Token = "0x60050FC")]
		[Address(RVA = "0x5C56E30", Offset = "0x5C55E30", VA = "0x5C56E30", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/LeaderboardPopup.c (UI.LeaderboardPopup$$get_Height): clean
			return 630.0;
		}
	}

	[Token(Token = "0x17000E2A")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x60050FD")]
		[Address(RVA = "0x5C56E40", Offset = "0x5C55E40", VA = "0x5C56E40", Slot = "16")]
		get
		{
			// Lifted from source/cpp/UI/LeaderboardPopup.c (UI.LeaderboardPopup$$get_CategoryPanel): clean
			return true;
		}
	}

	[Token(Token = "0x17000E2B")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x60050FE")]
		[Address(RVA = "0x5C56E50", Offset = "0x5C55E50", VA = "0x5C56E50", Slot = "19")]
		get
		{
			// Lifted from source/cpp/UI/LeaderboardPopup.c (UI.LeaderboardPopup$$get_DefaultCategoryPanel): clean
			return "Default";
		}
	}

	[Token(Token = "0x17000E2C")]
	protected override bool UseSound
	{
		[Token(Token = "0x60050FF")]
		[Address(RVA = "0x5C56E80", Offset = "0x5C55E80", VA = "0x5C56E80", Slot = "53")]
		get
		{
			// Lifted from source/cpp/UI/LeaderboardPopup.c (UI.LeaderboardPopup$$get_UseSound): clean
			return true;
		}
	}

	[Token(Token = "0x6005100")]
	[Address(RVA = "0x5C56E90", Offset = "0x5C55E90", VA = "0x5C56E90", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/LeaderboardPopup.c (UI.LeaderboardPopup$$Setup): 1 lines keep C-only constructs
		Transform parent_00;
		int fontSize;
		String pSVar1;
		ElementStyle __this_00;
		ElementStyle __this_01;
		UnityAction __this_02;

		this.Setup(parent);
		fontSize = this.get_ButtonFontSize();
		pSVar1 = this.get_ThemePanel();
		__this_00 = new ElementStyle(fontSize, 120.0, 20.0, pSVar1);
		pSVar1 = this.get_ThemePanel();
		__this_01 = new ElementStyle(0x18, 120.0, 20.0, pSVar1);
		parent_00 = this.BottomBar;
		pSVar1 = UIManager.GetLocaleCommon("Back");
		__this_02 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_LeaderboardPopup_Setup_b__12_0);
		ElementFactory.CreateTextButton(parent_00, __this_00, pSVar1, 0.0, __this_02);
		return;
	}

	[Token(Token = "0x6005101")]
	[Address(RVA = "0x5C57010", Offset = "0x5C56010", VA = "0x5C57010", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
		// Lifted from source/cpp/UI/LeaderboardPopup.c (UI.LeaderboardPopup$$RegisterCategoryPanels): clean
		Dictionary<object, object> __this_00;
		Il2CppType handle;
		Type value;

		handle = TypeRef_UI_LeaderboardDefaultPanel;
		__this_00 = (Dictionary<object, object>)this._categoryPanelTypes;
		value = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Add((Il2CppObject *)"Default", (object)value);
		return;
	}

	[Token(Token = "0x6005102")]
	[Address(RVA = "0x5C570B0", Offset = "0x5C560B0", VA = "0x5C570B0")]
	private void OnButtonClick(string name)
	{
		// Lifted from source/cpp/UI/LeaderboardPopup.c (UI.LeaderboardPopup$$OnButtonClick): clean
		bool bVar1;

		bVar1 = (name == "Back");
		if (bVar1) {
			this.Hide();
			return;
		}
		return;
	}

	[Token(Token = "0x6005103")]
	[Address(RVA = "0x5C57120", Offset = "0x5C56120", VA = "0x5C57120")]
	public LeaderboardPopup()
	{
		// Lifted from source/cpp/UI/LeaderboardPopup.c (UI.LeaderboardPopup$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/LeaderboardPopup.c.

	// UI.LeaderboardPopup$$<Setup>b__12_0: clean
	private void Setup_b__12_0()
	{
		String a;
		bool bVar1;

		a = "Back";
		bVar1 = (a == "Back");
		if (bVar1) {
			this.Hide();
			return;
		}
		return;
	}
}
