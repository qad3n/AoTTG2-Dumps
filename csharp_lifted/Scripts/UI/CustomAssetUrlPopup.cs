// ==================== AoTTG2 cross-reference ====================
// Type: UI.CustomAssetUrlPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CustomAssetUrlPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CustomAssetUrlPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000832")]
internal class CustomAssetUrlPopup : PromptPopup
{
	[Token(Token = "0x40028E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _label;

	[Token(Token = "0x40028E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public bool Done;

	[Token(Token = "0x40028E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB1")]
	public bool Confirmed;

	[Token(Token = "0x17000D82")]
	protected override string Title
	{
		[Token(Token = "0x6004E27")]
		[Address(RVA = "0x5C1BBD0", Offset = "0x5C1ABD0", VA = "0x5C1BBD0", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/CustomAssetUrlPopup.c (UI.CustomAssetUrlPopup$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocaleCommon("Confirm");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000D83")]
	protected override float Width
	{
		[Token(Token = "0x6004E28")]
		[Address(RVA = "0x5C1BC30", Offset = "0x5C1AC30", VA = "0x5C1BC30", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/CustomAssetUrlPopup.c (UI.CustomAssetUrlPopup$$get_Width): clean
			return 500.0;
		}
	}

	[Token(Token = "0x17000D84")]
	protected override float Height
	{
		[Token(Token = "0x6004E29")]
		[Address(RVA = "0x5C1BC40", Offset = "0x5C1AC40", VA = "0x5C1BC40", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/CustomAssetUrlPopup.c (UI.CustomAssetUrlPopup$$get_Height): clean
			return 250.0;
		}
	}

	[Token(Token = "0x17000D85")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004E2A")]
		[Address(RVA = "0x5C1BC50", Offset = "0x5C1AC50", VA = "0x5C1BC50", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/CustomAssetUrlPopup.c (UI.CustomAssetUrlPopup$$get_VerticalPadding): clean
			return 0x1e;
		}
	}

	[Token(Token = "0x17000D86")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004E2B")]
		[Address(RVA = "0x5C1BC60", Offset = "0x5C1AC60", VA = "0x5C1BC60", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/CustomAssetUrlPopup.c (UI.CustomAssetUrlPopup$$get_HorizontalPadding): clean
			return 0x1e;
		}
	}

	[Token(Token = "0x17000D87")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004E2C")]
		[Address(RVA = "0x5C1BC70", Offset = "0x5C1AC70", VA = "0x5C1BC70", Slot = "12")]
		get
		{
			// Lifted from source/cpp/UI/CustomAssetUrlPopup.c (UI.CustomAssetUrlPopup$$get_PanelAlignment): clean
			return 4;
		}
	}

	[Token(Token = "0x17000D88")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004E2D")]
		[Address(RVA = "0x5C1BC80", Offset = "0x5C1AC80", VA = "0x5C1BC80", Slot = "55")]
		get
		{
			// Lifted from source/cpp/UI/CustomAssetUrlPopup.c (UI.CustomAssetUrlPopup$$get_EscapeBehavior): clean
			return 1;
		}
	}

	[Token(Token = "0x17000D89")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004E2E")]
		[Address(RVA = "0x5C1BC90", Offset = "0x5C1AC90", VA = "0x5C1BC90", Slot = "15")]
		get
		{
			// Lifted from source/cpp/UI/CustomAssetUrlPopup.c (UI.CustomAssetUrlPopup$$get_ScrollBar): clean
			return true;
		}
	}

	[Token(Token = "0x6004E2F")]
	[Address(RVA = "0x5C1BCA0", Offset = "0x5C1ACA0", VA = "0x5C1BCA0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/CustomAssetUrlPopup.c (UI.CustomAssetUrlPopup$$Setup): 2 lines keep C-only constructs
		Transform pUVar1;
		int iVar2;
		String pSVar3;
		ElementStyle __this_00;
		ElementStyle __this_01;
		UnityAction pUVar4;
		GameObject __this_02;
		Text pUVar5;
		LayoutElement pUVar6;
		float fVar7;

		this.Setup(parent);
		pSVar3 = this.get_ThemePanel();
		__this_00 = new ElementStyle(0x18, 120.0, 20.0, pSVar3);
		iVar2 = this.get_ButtonFontSize();
		pSVar3 = this.get_ThemePanel();
		__this_01 = new ElementStyle(iVar2, 120.0, 20.0, pSVar3);
		pUVar1 = this.BottomBar;
		pSVar3 = UIManager.GetLocaleCommon("Confirm");
		pUVar4 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CustomAssetUrlPopup_Setup_b__19_0);
		ElementFactory.CreateTextButton(pUVar1, __this_01, pSVar3, 0.0, pUVar4);
		pUVar1 = this.BottomBar;
		pSVar3 = UIManager.GetLocaleCommon("Cancel");
		pUVar4 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CustomAssetUrlPopup_Setup_b__19_1);
		ElementFactory.CreateTextButton(pUVar1, __this_01, pSVar3, 0.0, pUVar4);
		__this_02 = ElementFactory.CreateDefaultLabel(this.SinglePanel, __this_00, (String)**(ulong*)(g_data_07556758 + 0xb8), 0, 4);
		if (__this_02 != null) {
			pUVar5 = __this_02.GetComponent<Text>();
			this._label = pUVar5;
			pUVar5 = this._label;
			if (pUVar5 != null) {
				pUVar6 = pUVar5.GetComponent<LayoutElement>();
				fVar7 = this.GetWidth();
				iVar2 = this.get_HorizontalPadding();
				if (pUVar6 != null) {
					pUVar6.set_preferredWidth(fVar7 - (float)(iVar2 * 2));
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E30")]
	[Address(RVA = "0x5C1BF90", Offset = "0x5C1AF90", VA = "0x5C1BF90")]
	public void Show(string url)
	{
		// Lifted from source/cpp/UI/CustomAssetUrlPopup.c (UI.CustomAssetUrlPopup$$Show): 1 lines keep C-only constructs
		Text pUVar1;
		String pSVar2;
		RectTransform pUVar3;

		this.Show();
		this.Done = false;
		this.Confirmed = false;
		pUVar1 = this._label;
		if (pUVar1 != null) {
			pUVar1.supportRichText = false;
			pUVar1 = this._label;
			pSVar2 = UIManager.GetLocale("InGameMenu", "CustomAsset", "DownloadPrompt", "", "");
			pSVar2 = String.Format(pSVar2, (object)url);
			if (pUVar1 != null) {
				pUVar1.set_text(pSVar2);
				Canvas.ForceUpdateCanvases();
				pUVar1 = this._label;
				if (pUVar1 != null) {
					pUVar3 = pUVar1.rectTransform;
					LayoutRebuilder.ForceRebuildLayoutImmediate(pUVar3);
					pUVar3 = (RectTransform)this.SinglePanel;
					if ((pUVar3 != null) &&(pUVar3.klass != typeof(RectTransform))) {
						throw new InvalidCastException();
					}
					LayoutRebuilder.ForceRebuildLayoutImmediate(pUVar3);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E31")]
	[Address(RVA = "0x5C1C120", Offset = "0x5C1B120", VA = "0x5C1C120", Slot = "59")]
	protected override void OnDisable()
	{
		// Lifted from source/cpp/UI/CustomAssetUrlPopup.c (UI.CustomAssetUrlPopup$$OnDisable): clean
		this.OnDisable();
		this.Done = true;
		return;
	}

	[Token(Token = "0x6004E32")]
	[Address(RVA = "0x5C1C140", Offset = "0x5C1B140", VA = "0x5C1C140")]
	private void OnButtonClick(string name)
	{
		// Lifted from source/cpp/UI/CustomAssetUrlPopup.c (UI.CustomAssetUrlPopup$$OnButtonClick): clean
		bool bVar1;

		bVar1 = (name == "Confirm");
		if (bVar1) {
			this.Confirmed = true;
		}
		this.Done = true;
		this.Hide();
		return;
	}

	[Token(Token = "0x6004E33")]
	[Address(RVA = "0x5C1C1B0", Offset = "0x5C1B1B0", VA = "0x5C1C1B0")]
	public CustomAssetUrlPopup()
	{
		// Lifted from source/cpp/UI/CustomAssetUrlPopup.c (UI.CustomAssetUrlPopup$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/CustomAssetUrlPopup.c.

	// UI.CustomAssetUrlPopup$$<Setup>b__19_0: clean
	private void Setup_b__19_0()
	{
		String a;
		bool bVar1;

		a = "Confirm";
		bVar1 = (a == "Confirm");
		if (bVar1) {
			this.Confirmed = true;
		}
		this.Done = true;
		this.Hide();
		return;
	}

	// UI.CustomAssetUrlPopup$$<Setup>b__19_1: clean
	private void Setup_b__19_1()
	{
		String a;
		bool bVar1;

		a = "Cancel";
		bVar1 = (a == "Confirm");
		if (bVar1) {
			this.Confirmed = true;
		}
		this.Done = true;
		this.Hide();
		return;
	}
}
