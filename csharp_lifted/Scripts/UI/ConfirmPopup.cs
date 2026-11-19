// ==================== AoTTG2 cross-reference ====================
// Type: UI.ConfirmPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ConfirmPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/ConfirmPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000791")]
internal class ConfirmPopup : PromptPopup
{
	[Token(Token = "0x4002643")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _label;

	[Token(Token = "0x4002644")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private UnityAction _onConfirm;

	[Token(Token = "0x17000C76")]
	protected override string Title
	{
		[Token(Token = "0x600490C")]
		[Address(RVA = "0x5BBC5E0", Offset = "0x5BBB5E0", VA = "0x5BBC5E0", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/ConfirmPopup.c (UI.ConfirmPopup$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocaleCommon("Confirm");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000C77")]
	protected override float Width
	{
		[Token(Token = "0x600490D")]
		[Address(RVA = "0x5BBC640", Offset = "0x5BBB640", VA = "0x5BBC640", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/ConfirmPopup.c (UI.ConfirmPopup$$get_Width): clean
			return 300.0;
		}
	}

	[Token(Token = "0x17000C78")]
	protected override float Height
	{
		[Token(Token = "0x600490E")]
		[Address(RVA = "0x5BBC650", Offset = "0x5BBB650", VA = "0x5BBC650", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/ConfirmPopup.c (UI.ConfirmPopup$$get_Height): clean
			return 240.0;
		}
	}

	[Token(Token = "0x17000C79")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600490F")]
		[Address(RVA = "0x5BBC660", Offset = "0x5BBB660", VA = "0x5BBC660", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/ConfirmPopup.c (UI.ConfirmPopup$$get_VerticalPadding): clean
			return 0x1e;
		}
	}

	[Token(Token = "0x17000C7A")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004910")]
		[Address(RVA = "0x5BBC670", Offset = "0x5BBB670", VA = "0x5BBC670", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/ConfirmPopup.c (UI.ConfirmPopup$$get_HorizontalPadding): clean
			return 0x1e;
		}
	}

	[Token(Token = "0x17000C7B")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004911")]
		[Address(RVA = "0x5BBC680", Offset = "0x5BBB680", VA = "0x5BBC680", Slot = "12")]
		get
		{
			// Lifted from source/cpp/UI/ConfirmPopup.c (UI.ConfirmPopup$$get_PanelAlignment): clean
			return 4;
		}
	}

	[Token(Token = "0x17000C7C")]
	protected virtual float LabelHeight
	{
		[Token(Token = "0x6004912")]
		[Address(RVA = "0x5BBC690", Offset = "0x5BBB690", VA = "0x5BBC690", Slot = "62")]
		get
		{
			// Lifted from source/cpp/UI/ConfirmPopup.c (UI.ConfirmPopup$$get_LabelHeight): clean
			return 60.0;
		}
	}

	[Token(Token = "0x6004913")]
	[Address(RVA = "0x5BBC6A0", Offset = "0x5BBB6A0", VA = "0x5BBC6A0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/ConfirmPopup.c (UI.ConfirmPopup$$Setup): 5 lines keep C-only constructs
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
		pUVar4 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_ConfirmPopup_Setup_b__16_0);
		ElementFactory.CreateTextButton(pUVar1, __this_01, pSVar3, 0.0, pUVar4);
		pUVar1 = this.BottomBar;
		pSVar3 = UIManager.GetLocaleCommon("Cancel");
		pUVar4 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_ConfirmPopup_Setup_b__16_1);
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
						fVar7 = this.get_LabelHeight();
						if (pUVar6 != null) {
							pUVar6.set_preferredHeight(fVar7);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004914")]
	[Address(RVA = "0x5BBC9D0", Offset = "0x5BBB9D0", VA = "0x5BBC9D0")]
	public void Show(string message, UnityAction onConfirm, [Optional] string title)
	{
		// Lifted from source/cpp/UI/ConfirmPopup.c (UI.ConfirmPopup$$Show): 3 lines keep C-only constructs
		Text pUVar1;
		bool bVar2;
		GameObject __this_00;
		byte[] auVar4 = new byte[16];

		__this_00 = this.gameObject;
		if (__this_00 != null) {
			bVar2 = __this_00.activeSelf;
			if (bVar2) {
				return;
			}
			this.Show();
			pUVar1 = this._label;
			if (pUVar1 != null) {
				pUVar1.set_text(message);
				this._onConfirm = onConfirm;
				if (title == null) {
					auVar4 = (byte[])this.get_Title();
					title = auVar4._0_8_;
				}
				else {
				}
				this.SetTitle(title);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004915")]
	[Address(RVA = "0x5BBCB20", Offset = "0x5BBBB20", VA = "0x5BBCB20")]
	private void OnButtonClick(string name)
	{
		// Lifted from source/cpp/UI/ConfirmPopup.c (UI.ConfirmPopup$$OnButtonClick): clean
		UnityAction pUVar1;
		bool bVar2;

		bVar2 = (name == "Confirm");
		if (bVar2) {
			pUVar1 = this._onConfirm;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			(*(code)pUVar1.invoke_impl)(pUVar1.method_code,pUVar1.method);
		}
		this.Hide();
		return;
	}

	[Token(Token = "0x6004916")]
	[Address(RVA = "0x5BBCBA0", Offset = "0x5BBBBA0", VA = "0x5BBCBA0")]
	public ConfirmPopup()
	{
		// Lifted from source/cpp/UI/ConfirmPopup.c (UI.ConfirmPopup$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/ConfirmPopup.c.

	// UI.ConfirmPopup$$<Setup>b__16_0: clean
	private void Setup_b__16_0()
	{
		UnityAction pUVar1;
		String a;
		bool bVar2;

		a = "Confirm";
		bVar2 = (a == "Confirm");
		if (bVar2) {
			pUVar1 = this._onConfirm;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			(*(code)pUVar1.invoke_impl)(pUVar1.method_code,pUVar1.method);
		}
		this.Hide();
		return;
	}

	// UI.ConfirmPopup$$<Setup>b__16_1: clean
	private void Setup_b__16_1()
	{
		UnityAction pUVar1;
		String a;
		bool bVar2;

		a = "Cancel";
		bVar2 = (a == "Confirm");
		if (bVar2) {
			pUVar1 = this._onConfirm;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			(*(code)pUVar1.invoke_impl)(pUVar1.method_code,pUVar1.method);
		}
		this.Hide();
		return;
	}
}
