// ==================== AoTTG2 cross-reference ====================
// Type: UI.GlobalPauseGamePopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/GlobalPauseGamePopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/GlobalPauseGamePopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200083E")]
internal class GlobalPauseGamePopup : BasePopup
{
	[Token(Token = "0x400291E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _label;

	[Token(Token = "0x400291F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private string _unpausingText;

	[Token(Token = "0x4002920")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private string _pausedText;

	[Token(Token = "0x17000DA6")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004E91")]
		[Address(RVA = "0x5C21F10", Offset = "0x5C20F10", VA = "0x5C21F10", Slot = "55")]
		get
		{
			// Lifted from source/cpp/UI/GlobalPauseGamePopup.c (UI.GlobalPauseGamePopup$$get_EscapeBehavior): clean
			return 2;
		}
	}

	[Token(Token = "0x17000DA7")]
	protected override string Title
	{
		[Token(Token = "0x6004E92")]
		[Address(RVA = "0x5C21F20", Offset = "0x5C20F20", VA = "0x5C21F20", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/GlobalPauseGamePopup.c (UI.GlobalPauseGamePopup$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocale("InGameMenu", "GlobalPause", "Title", "", "");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000DA8")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004E93")]
		[Address(RVA = "0x5C21FC0", Offset = "0x5C20FC0", VA = "0x5C21FC0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/UI/GlobalPauseGamePopup.c (UI.GlobalPauseGamePopup$$get_ThemePanel): clean
			return "LoadingPanel";
		}
	}

	[Token(Token = "0x17000DA9")]
	protected override float Width
	{
		[Token(Token = "0x6004E94")]
		[Address(RVA = "0x5C21FF0", Offset = "0x5C20FF0", VA = "0x5C21FF0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/GlobalPauseGamePopup.c (UI.GlobalPauseGamePopup$$get_Width): clean
			return 320.0;
		}
	}

	[Token(Token = "0x17000DAA")]
	protected override float Height
	{
		[Token(Token = "0x6004E95")]
		[Address(RVA = "0x5C22000", Offset = "0x5C21000", VA = "0x5C22000", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/GlobalPauseGamePopup.c (UI.GlobalPauseGamePopup$$get_Height): clean
			return 220.0;
		}
	}

	[Token(Token = "0x17000DAB")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004E96")]
		[Address(RVA = "0x5C22010", Offset = "0x5C21010", VA = "0x5C22010", Slot = "36")]
		get
		{
			// Lifted from source/cpp/UI/GlobalPauseGamePopup.c (UI.GlobalPauseGamePopup$$get_TopBarHeight): clean
			return 55.0;
		}
	}

	[Token(Token = "0x17000DAC")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004E97")]
		[Address(RVA = "0x5C22020", Offset = "0x5C21020", VA = "0x5C22020", Slot = "37")]
		get
		{
			// Lifted from source/cpp/UI/GlobalPauseGamePopup.c (UI.GlobalPauseGamePopup$$get_BottomBarHeight): clean
			return 55.0;
		}
	}

	[Token(Token = "0x17000DAD")]
	protected override int TitleFontSize
	{
		[Token(Token = "0x6004E98")]
		[Address(RVA = "0x5C22030", Offset = "0x5C21030", VA = "0x5C22030", Slot = "40")]
		get
		{
			// Lifted from source/cpp/UI/GlobalPauseGamePopup.c (UI.GlobalPauseGamePopup$$get_TitleFontSize): clean
			return 0x1a;
		}
	}

	[Token(Token = "0x17000DAE")]
	protected override int ButtonFontSize
	{
		[Token(Token = "0x6004E99")]
		[Address(RVA = "0x5C22040", Offset = "0x5C21040", VA = "0x5C22040", Slot = "41")]
		get
		{
			// Lifted from source/cpp/UI/GlobalPauseGamePopup.c (UI.GlobalPauseGamePopup$$get_ButtonFontSize): clean
			return 0x16;
		}
	}

	[Token(Token = "0x17000DAF")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004E9A")]
		[Address(RVA = "0x5C22050", Offset = "0x5C21050", VA = "0x5C22050", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/GlobalPauseGamePopup.c (UI.GlobalPauseGamePopup$$get_VerticalPadding): clean
			return 0x1e;
		}
	}

	[Token(Token = "0x17000DB0")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004E9B")]
		[Address(RVA = "0x5C22060", Offset = "0x5C21060", VA = "0x5C22060", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/GlobalPauseGamePopup.c (UI.GlobalPauseGamePopup$$get_HorizontalPadding): clean
			return 0x1e;
		}
	}

	[Token(Token = "0x17000DB1")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004E9C")]
		[Address(RVA = "0x5C22070", Offset = "0x5C21070", VA = "0x5C22070", Slot = "12")]
		get
		{
			// Lifted from source/cpp/UI/GlobalPauseGamePopup.c (UI.GlobalPauseGamePopup$$get_PanelAlignment): clean
			return 4;
		}
	}

	[Token(Token = "0x17000DB2")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004E9D")]
		[Address(RVA = "0x5C22080", Offset = "0x5C21080", VA = "0x5C22080", Slot = "54")]
		get
		{
			// Lifted from source/cpp/UI/GlobalPauseGamePopup.c (UI.GlobalPauseGamePopup$$get_PopupAnimationType): clean
			return 1;
		}
	}

	[Token(Token = "0x17000DB3")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6004E9E")]
		[Address(RVA = "0x5C22090", Offset = "0x5C21090", VA = "0x5C22090", Slot = "51")]
		get
		{
			// Lifted from source/cpp/UI/GlobalPauseGamePopup.c (UI.GlobalPauseGamePopup$$get_AnimationTime): clean
			return 0.2;
		}
	}

	[Token(Token = "0x6004E9F")]
	[Address(RVA = "0x5C220A0", Offset = "0x5C210A0", VA = "0x5C220A0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/GlobalPauseGamePopup.c (UI.GlobalPauseGamePopup$$Setup): 7 lines keep C-only constructs
		Text* targetAddress;
		Transform parent_00;
		int iVar1;
		String pSVar2;
		ElementStyle __this_00;
		ElementStyle __this_01;
		UnityAction __this_02;
		GameObject __this_03;
		Text pUVar3;
		LayoutElement pUVar4;
		float fVar5;
		Color UVar6;

		this.Setup(parent);
		pSVar2 = this.get_ThemePanel();
		__this_00 = new ElementStyle(0x18, 120.0, 20.0, pSVar2);
		iVar1 = this.get_ButtonFontSize();
		pSVar2 = this.get_ThemePanel();
		__this_01 = new ElementStyle(iVar1, 120.0, 20.0, pSVar2);
		parent_00 = this.BottomBar;
		pSVar2 = UIManager.GetLocaleCommon("Quit");
		__this_02 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_GlobalPauseGamePopup_Setup_b__31_0);
		ElementFactory.CreateTextButton(parent_00, __this_01, pSVar2, 0.0, __this_02);
		__this_03 = ElementFactory.CreateDefaultLabel(this.SinglePanel, __this_00, "", 0, 4);
		if (__this_03 != null) {
			pUVar3 = __this_03.GetComponent<Text>();
			targetAddress = &this._label;
			this._label = pUVar3;
			pUVar3 = this._label;
			pSVar2 = this.get_ThemePanel();
			UVar6 = UIManager.GetThemeColor(pSVar2, "DefaultLabel", "TextColor", "DefaultPanel");
			if (pUVar3 != null) {
				pUVar3.set_color(UVar6);
				if (*targetAddress != null) {
					pUVar4 = (*targetAddress).GetComponent<LayoutElement>() ;
					fVar5 = this.GetWidth();
					iVar1 = this.get_HorizontalPadding();
					if (pUVar4 != null) {
						pUVar4.set_preferredWidth(fVar5 - (float)(iVar1 * 2));
						if (*targetAddress != null) {
							pUVar4 = (*targetAddress).GetComponent<LayoutElement>();
							if (pUVar4 != null) {
								pUVar4.set_preferredHeight(40.0);
								pSVar2 = UIManager.GetLocale("InGameMenu", "GlobalPause", "UnpausingIn", "", "");
								this._unpausingText = pSVar2;
								pSVar2 = UIManager.GetLocale("InGameMenu", "GlobalPause", "PausedByMaster", "", "");
								this._pausedText = pSVar2;
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EA0")]
	[Address(RVA = "0x5C22490", Offset = "0x5C21490", VA = "0x5C22490")]
	public void SetTimeLeft(float timeLeft)
	{
		// Lifted from source/cpp/UI/GlobalPauseGamePopup.c (UI.GlobalPauseGamePopup$$SetTimeLeft): clean
		Text pUVar1;
		String str1;
		String pSVar2;

		pUVar1 = this._label;
		if (0.0 <= timeLeft) {
			pSVar2 = this._unpausingText;
			str1 = Util.FormatFloat(timeLeft, 1);
			pSVar2 = String.Concat(pSVar2, str1);
		}
		else {
			pSVar2 = this._pausedText;
		}
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.set_text(pSVar2) ;
		return;
	}

	[Token(Token = "0x6004EA1")]
	[Address(RVA = "0x5C22550", Offset = "0x5C21550", VA = "0x5C22550")]
	private void OnButtonClick(string name)
	{
		// Lifted from source/cpp/UI/GlobalPauseGamePopup.c (UI.GlobalPauseGamePopup$$OnButtonClick): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07547dd9 == false) {
			Il2CppMethodInitialized_07547dd9 = true;
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			InGameManager.LeaveRoom();
			return;
		}
		InGameManager.LeaveRoom();
		return;
	}

	[Token(Token = "0x6004EA2")]
	[Address(RVA = "0x5C225B0", Offset = "0x5C215B0", VA = "0x5C225B0")]
	public GlobalPauseGamePopup()
	{
		// Lifted from source/cpp/UI/GlobalPauseGamePopup.c (UI.GlobalPauseGamePopup$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/GlobalPauseGamePopup.c.

	// UI.GlobalPauseGamePopup$$<Setup>b__31_0: clean
	private void Setup_b__31_0()
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07547dd9 == false) {
			Il2CppMethodInitialized_07547dd9 = true;
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(InGameManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			InGameManager.LeaveRoom();
			return;
		}
		InGameManager.LeaveRoom();
		return;
	}
}
