// ==================== AoTTG2 cross-reference ====================
// Type: UI.ExternalLinkPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ExternalLinkPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/ExternalLinkPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000793")]
internal class ExternalLinkPopup : PromptPopup
{
	[Token(Token = "0x400264A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected float LabelHeight;

	[Token(Token = "0x400264B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _label;

	[Token(Token = "0x400264C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private string _url;

	[Token(Token = "0x17000C82")]
	protected override string Title
	{
		[Token(Token = "0x6004925")]
		[Address(RVA = "0x5BBD8A0", Offset = "0x5BBC8A0", VA = "0x5BBD8A0", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/ExternalLinkPopup.c (UI.ExternalLinkPopup$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocaleCommon("Confirm");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000C83")]
	protected override float Width
	{
		[Token(Token = "0x6004926")]
		[Address(RVA = "0x5BBD900", Offset = "0x5BBC900", VA = "0x5BBD900", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/ExternalLinkPopup.c (UI.ExternalLinkPopup$$get_Width): clean
			return 450.0;
		}
	}

	[Token(Token = "0x17000C84")]
	protected override float Height
	{
		[Token(Token = "0x6004927")]
		[Address(RVA = "0x5BBD910", Offset = "0x5BBC910", VA = "0x5BBD910", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/ExternalLinkPopup.c (UI.ExternalLinkPopup$$get_Height): clean
			return 250.0;
		}
	}

	[Token(Token = "0x17000C85")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004928")]
		[Address(RVA = "0x5BBD920", Offset = "0x5BBC920", VA = "0x5BBD920", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/ExternalLinkPopup.c (UI.ExternalLinkPopup$$get_VerticalPadding): clean
			return 0x1e;
		}
	}

	[Token(Token = "0x17000C86")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004929")]
		[Address(RVA = "0x5BBD930", Offset = "0x5BBC930", VA = "0x5BBD930", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/ExternalLinkPopup.c (UI.ExternalLinkPopup$$get_HorizontalPadding): clean
			return 0x1e;
		}
	}

	[Token(Token = "0x17000C87")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x600492A")]
		[Address(RVA = "0x5BBD940", Offset = "0x5BBC940", VA = "0x5BBD940", Slot = "12")]
		get
		{
			// Lifted from source/cpp/UI/ExternalLinkPopup.c (UI.ExternalLinkPopup$$get_PanelAlignment): clean
			return 4;
		}
	}

	[Token(Token = "0x600492B")]
	[Address(RVA = "0x5BBD950", Offset = "0x5BBC950", VA = "0x5BBD950", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/ExternalLinkPopup.c (UI.ExternalLinkPopup$$Setup): 5 lines keep C-only constructs
		Text* targetAddress;
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
		pUVar4 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_ExternalLinkPopup_Setup_b__15_0);
		ElementFactory.CreateTextButton(pUVar1, __this_01, pSVar3, 0.0, pUVar4);
		pUVar1 = this.BottomBar;
		pSVar3 = UIManager.GetLocaleCommon("Cancel");
		pUVar4 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_ExternalLinkPopup_Setup_b__15_1);
		ElementFactory.CreateTextButton(pUVar1, __this_01, pSVar3, 0.0, pUVar4);
		__this_02 = ElementFactory.CreateDefaultLabel(this.SinglePanel, __this_00, (String)**(ulong*)(g_data_07556758 + 0xb8), 0, 4);
		if (__this_02 != null) {
			pUVar5 = __this_02.GetComponent<Text>();
			targetAddress = &this._label;
			this._label = pUVar5;
			pUVar5 = this._label;
			if (pUVar5 != null) {
				pUVar6 = pUVar5.GetComponent<LayoutElement>();
				fVar7 = this.GetWidth();
				iVar2 = this.get_HorizontalPadding();
				if (pUVar6 != null) {
					pUVar6.set_preferredWidth(fVar7 - (float)(iVar2 * 2));
					pUVar5 = *targetAddress;
					if (pUVar5 != null) {
						pUVar6 = pUVar5.GetComponent<LayoutElement>();
						if (pUVar6 != null) {
							pUVar6.set_preferredHeight(this.LabelHeight);
							this._url = "";
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600492C")]
	[Address(RVA = "0x5BBDCA0", Offset = "0x5BBCCA0", VA = "0x5BBDCA0")]
	public void Show(string url)
	{
		// Lifted from source/cpp/UI/ExternalLinkPopup.c (UI.ExternalLinkPopup$$Show): clean
		Text pUVar1;
		bool bVar2;
		GameObject __this_00;
		String pSVar3;

		bVar2 = AottgExternalLinks.TryShow(url);
		if (bVar2) {
			return;
		}
		__this_00 = this.gameObject;
		if (__this_00 != null) {
			bVar2 = __this_00.activeSelf;
			if (bVar2) {
				return;
			}
			this.Show();
			pUVar1 = this._label;
			pSVar3 = UIManager.GetLocaleCommon("ExternalLinkConfirm");
			pSVar3 = GisketchArabicText.Join(pSVar3, ": ", url);
			if (pUVar1 != null) {
				pUVar1.set_text(pSVar3);
				this._url = url;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600492D")]
	[Address(RVA = "0x5BBDDE0", Offset = "0x5BBCDE0", VA = "0x5BBDDE0")]
	private void OnButtonClick(string name)
	{
		// Lifted from source/cpp/UI/ExternalLinkPopup.c (UI.ExternalLinkPopup$$OnButtonClick): clean
		String url;
		bool bVar1;

		bVar1 = (name == "Confirm");
		if (bVar1) {
			url = this._url;
			Application.OpenURL(url);
		}
		this.Hide();
		return;
	}

	[Token(Token = "0x600492E")]
	[Address(RVA = "0x5BBDE70", Offset = "0x5BBCE70", VA = "0x5BBDE70")]
	public ExternalLinkPopup()
	{
		// Lifted from source/cpp/UI/ExternalLinkPopup.c (UI.ExternalLinkPopup$$.ctor): clean
		this.LabelHeight = 60.0;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/ExternalLinkPopup.c.

	// UI.ExternalLinkPopup$$<Setup>b__15_0: clean
	private void Setup_b__15_0()
	{
		String pSVar1;
		bool bVar2;

		pSVar1 = "Confirm";
		bVar2 = (pSVar1 == "Confirm");
		if (bVar2) {
			pSVar1 = this._url;
			Application.OpenURL(pSVar1);
		}
		this.Hide();
		return;
	}

	// UI.ExternalLinkPopup$$<Setup>b__15_1: clean
	private void Setup_b__15_1()
	{
		String pSVar1;
		bool bVar2;

		pSVar1 = "Cancel";
		bVar2 = (pSVar1 == "Confirm");
		if (bVar2) {
			pSVar1 = this._url;
			Application.OpenURL(pSVar1);
		}
		this.Hide();
		return;
	}
}
