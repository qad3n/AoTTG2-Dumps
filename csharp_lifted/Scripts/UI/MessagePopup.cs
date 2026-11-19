// ==================== AoTTG2 cross-reference ====================
// Type: UI.MessagePopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MessagePopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/MessagePopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200079B")]
internal class MessagePopup : PromptPopup
{
	[Token(Token = "0x400266D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _label;

	[Token(Token = "0x400266E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private GameObject _button;

	[Token(Token = "0x17000CAA")]
	protected override string Title
	{
		[Token(Token = "0x600497C")]
		[Address(RVA = "0x5BC18D0", Offset = "0x5BC08D0", VA = "0x5BC18D0", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/MessagePopup.c (UI.MessagePopup$$get_Title): clean
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
	}

	[Token(Token = "0x17000CAB")]
	protected override float Width
	{
		[Token(Token = "0x600497D")]
		[Address(RVA = "0x5BC18F0", Offset = "0x5BC08F0", VA = "0x5BC18F0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/MessagePopup.c (UI.MessagePopup$$get_Width): clean
			return 300.0;
		}
	}

	[Token(Token = "0x17000CAC")]
	protected override float Height
	{
		[Token(Token = "0x600497E")]
		[Address(RVA = "0x5BC1900", Offset = "0x5BC0900", VA = "0x5BC1900", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/MessagePopup.c (UI.MessagePopup$$get_Height): clean
			return 240.0;
		}
	}

	[Token(Token = "0x17000CAD")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600497F")]
		[Address(RVA = "0x5BC1910", Offset = "0x5BC0910", VA = "0x5BC1910", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/MessagePopup.c (UI.MessagePopup$$get_VerticalPadding): clean
			return 0x1e;
		}
	}

	[Token(Token = "0x17000CAE")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004980")]
		[Address(RVA = "0x5BC1920", Offset = "0x5BC0920", VA = "0x5BC1920", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/MessagePopup.c (UI.MessagePopup$$get_HorizontalPadding): clean
			return 0x1e;
		}
	}

	[Token(Token = "0x17000CAF")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004981")]
		[Address(RVA = "0x5BC1930", Offset = "0x5BC0930", VA = "0x5BC1930", Slot = "12")]
		get
		{
			// Lifted from source/cpp/UI/MessagePopup.c (UI.MessagePopup$$get_PanelAlignment): clean
			return 4;
		}
	}

	[Token(Token = "0x17000CB0")]
	protected virtual float LabelHeight
	{
		[Token(Token = "0x6004982")]
		[Address(RVA = "0x5BC1940", Offset = "0x5BC0940", VA = "0x5BC1940", Slot = "62")]
		get
		{
			// Lifted from source/cpp/UI/MessagePopup.c (UI.MessagePopup$$get_LabelHeight): clean
			return 60.0;
		}
	}

	[Token(Token = "0x6004983")]
	[Address(RVA = "0x5BC1950", Offset = "0x5BC0950", VA = "0x5BC1950", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/MessagePopup.c (UI.MessagePopup$$Setup): 4 lines keep C-only constructs
		Text* targetAddress;
		Transform parent_00;
		int iVar1;
		String pSVar2;
		ElementStyle __this_00;
		ElementStyle __this_01;
		UnityAction __this_02;
		GameObject pUVar3;
		Text pUVar4;
		LayoutElement pUVar5;
		float fVar6;

		this.Setup(parent);
		pSVar2 = this.get_ThemePanel();
		__this_00 = new ElementStyle(0x18, 120.0, 20.0, pSVar2);
		iVar1 = this.get_ButtonFontSize();
		pSVar2 = this.get_ThemePanel();
		__this_01 = new ElementStyle(iVar1, 120.0, 20.0, pSVar2);
		parent_00 = this.BottomBar;
		pSVar2 = UIManager.GetLocaleCommon("Okay");
		__this_02 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MessagePopup_Setup_b__16_0);
		pUVar3 = ElementFactory.CreateTextButton(parent_00, __this_01, pSVar2, 0.0, __this_02);
		this._button = pUVar3;
		pUVar3 = ElementFactory.CreateDefaultLabel(this.SinglePanel, __this_00, (String)**(ulong*)(g_data_07556758 + 0xb8), 0, 4);
		if (pUVar3 != null) {
			pUVar4 = pUVar3.GetComponent<Text>();
			targetAddress = &this._label;
			this._label = pUVar4;
			pUVar4 = this._label;
			if (pUVar4 != null) {
				pUVar5 = pUVar4.GetComponent<LayoutElement>();
				fVar6 = this.get_LabelHeight();
				if (pUVar5 != null) {
					pUVar5.set_preferredHeight(fVar6);
					pUVar4 = *targetAddress;
					if (pUVar4 != null) {
						pUVar5 = pUVar4.GetComponent<LayoutElement>();
						fVar6 = this.GetWidth();
						iVar1 = this.get_HorizontalPadding();
						if (pUVar5 != null) {
							pUVar5.set_preferredWidth(fVar6 - (float)(iVar1 * 2));
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004984")]
	[Address(RVA = "0x5BC1C30", Offset = "0x5BC0C30", VA = "0x5BC1C30")]
	public void Show(string message, bool allowDismiss = true)
	{
		// Lifted from source/cpp/UI/MessagePopup.c (UI.MessagePopup$$Show): clean
		GameObject __this_00;
		Text pUVar1;

		this.Show();
		__this_00 = this._button;
		if (__this_00 != null) {
			__this_00.SetActive(allowDismiss);
			pUVar1 = this._label;
			if (pUVar1 != null) {
				pUVar1.set_text(message);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004985")]
	[Address(RVA = "0x5BC1C90", Offset = "0x5BC0C90", VA = "0x5BC1C90")]
	private void OnButtonClick(string name)
	{
		// Lifted from source/cpp/UI/MessagePopup.c (UI.MessagePopup$$OnButtonClick): clean
		this.Hide();
		return;
	}

	[Token(Token = "0x6004986")]
	[Address(RVA = "0x5BC1CB0", Offset = "0x5BC0CB0", VA = "0x5BC1CB0")]
	public MessagePopup()
	{
		// Lifted from source/cpp/UI/MessagePopup.c (UI.MessagePopup$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MessagePopup.c.

	// UI.MessagePopup$$<Setup>b__16_0: clean
	private void Setup_b__16_0()
	{
		this.Hide();
		return;
	}
}
