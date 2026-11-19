// ==================== AoTTG2 cross-reference ====================
// Type: UI.CustomAssetVideoUrlPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CustomAssetVideoUrlPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000834")]
internal class CustomAssetVideoUrlPopup : PromptPopup
{
	[Token(Token = "0x40028EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _label;

	[Token(Token = "0x40028EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public bool Done;

	[Token(Token = "0x40028EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB4")]
	public VideoUrlPopupResult Result;

	[Token(Token = "0x17000D8A")]
	protected override string Title
	{
		[Token(Token = "0x6004E36")]
		[Address(RVA = "0x5C1C2E0", Offset = "0x5C1B2E0", VA = "0x5C1C2E0", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/CustomAssetVideoUrlPopup.c (UI.CustomAssetVideoUrlPopup$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocaleCommon("Confirm");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000D8B")]
	protected override float Width
	{
		[Token(Token = "0x6004E37")]
		[Address(RVA = "0x5C1C340", Offset = "0x5C1B340", VA = "0x5C1C340", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/CustomAssetVideoUrlPopup.c (UI.CustomAssetVideoUrlPopup$$get_Width): clean
			return 500.0;
		}
	}

	[Token(Token = "0x17000D8C")]
	protected override float Height
	{
		[Token(Token = "0x6004E38")]
		[Address(RVA = "0x5C1C350", Offset = "0x5C1B350", VA = "0x5C1C350", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/CustomAssetVideoUrlPopup.c (UI.CustomAssetVideoUrlPopup$$get_Height): clean
			return 300.0;
		}
	}

	[Token(Token = "0x17000D8D")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004E39")]
		[Address(RVA = "0x5C1C360", Offset = "0x5C1B360", VA = "0x5C1C360", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/CustomAssetVideoUrlPopup.c (UI.CustomAssetVideoUrlPopup$$get_VerticalPadding): clean
			return 0x1e;
		}
	}

	[Token(Token = "0x17000D8E")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004E3A")]
		[Address(RVA = "0x5C1C370", Offset = "0x5C1B370", VA = "0x5C1C370", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/CustomAssetVideoUrlPopup.c (UI.CustomAssetVideoUrlPopup$$get_HorizontalPadding): clean
			return 0x1e;
		}
	}

	[Token(Token = "0x17000D8F")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004E3B")]
		[Address(RVA = "0x5C1C380", Offset = "0x5C1B380", VA = "0x5C1C380", Slot = "12")]
		get
		{
			// Lifted from source/cpp/UI/CustomAssetVideoUrlPopup.c (UI.CustomAssetVideoUrlPopup$$get_PanelAlignment): clean
			return 4;
		}
	}

	[Token(Token = "0x17000D90")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004E3C")]
		[Address(RVA = "0x5C1C390", Offset = "0x5C1B390", VA = "0x5C1C390", Slot = "55")]
		get
		{
			// Lifted from source/cpp/UI/CustomAssetVideoUrlPopup.c (UI.CustomAssetVideoUrlPopup$$get_EscapeBehavior): clean
			return 1;
		}
	}

	[Token(Token = "0x17000D91")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004E3D")]
		[Address(RVA = "0x5C1C3A0", Offset = "0x5C1B3A0", VA = "0x5C1C3A0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/UI/CustomAssetVideoUrlPopup.c (UI.CustomAssetVideoUrlPopup$$get_ScrollBar): clean
			return true;
		}
	}

	[Token(Token = "0x6004E3E")]
	[Address(RVA = "0x5C1C3B0", Offset = "0x5C1B3B0", VA = "0x5C1C3B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/CustomAssetVideoUrlPopup.c (UI.CustomAssetVideoUrlPopup$$Setup): 3 lines keep C-only constructs
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
		pUVar4 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CustomAssetVideoUrlPopup_Setup_b__19_0);
		ElementFactory.CreateTextButton(pUVar1, __this_01, pSVar3, 0.0, pUVar4);
		pUVar1 = this.BottomBar;
		pSVar3 = UIManager.GetLocaleCommon("Cancel");
		pUVar4 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CustomAssetVideoUrlPopup_Setup_b__19_1);
		ElementFactory.CreateTextButton(pUVar1, __this_01, pSVar3, 0.0, pUVar4);
		pUVar1 = this.BottomBar;
		pSVar3 = UIManager.GetLocaleCommon("Quit");
		pUVar4 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CustomAssetVideoUrlPopup_Setup_b__19_2);
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

	[Token(Token = "0x6004E3F")]
	[Address(RVA = "0x5C1C710", Offset = "0x5C1B710", VA = "0x5C1C710")]
	public void Show(List<string> urls)
	{
		// Lifted from source/cpp/UI/CustomAssetVideoUrlPopup.c (UI.CustomAssetVideoUrlPopup$$Show): 3 lines keep C-only constructs
		Text pUVar1;
		object value;
		bool bVar2;
		StringBuilder __this_00;
		String pSVar3;
		StringBuilder pSVar4;
		RectTransform pUVar5;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		byte local_38;

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		this.Show();
		this.Done = false;
		this.Result = 0;
		pUVar1 = this._label;
		if (pUVar1 != null) {
			pUVar1.supportRichText = false;
			__this_00 = new StringBuilder();
			pSVar3 = UIManager.GetLocale("InGameMenu", "CustomAsset", "VideoUrlPrompt", "", "");
			if (__this_00 != null) {
				pSVar4 = __this_00.Append(pSVar3);
				if (pSVar4 != null) {
					pSVar4.Append("\n");
					if (urls != null) {
						local_58 = urls.GetEnumerator();
						local_38 = (byte)&local_58;
						while(true) {
							bVar2 = local_58.MoveNext();
							value = local_58._current;
							if (!bVar2) break;
							pSVar4 = __this_00.Append("\n");
							if (pSVar4 == null) {
								throw new NullReferenceException();
							}
							pSVar4.Append((String)value);
						}
						local_58.Dispose();
						pUVar1 = this._label;
						pSVar3 = __this_00.ToString();
						if (pUVar1 != null) {
							pUVar1.set_text(pSVar3);
							Canvas.ForceUpdateCanvases();
							pUVar1 = this._label;
							if (pUVar1 != null) {
								pUVar5 = pUVar1.rectTransform;
								LayoutRebuilder.ForceRebuildLayoutImmediate(pUVar5);
								pUVar5 = (RectTransform)this.SinglePanel;
								if ((pUVar5 != null) &&(pUVar5.klass != typeof(RectTransform))) {
									throw new InvalidCastException();
								}
								LayoutRebuilder.ForceRebuildLayoutImmediate(pUVar5);
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E40")]
	[Address(RVA = "0x5C1CA60", Offset = "0x5C1BA60", VA = "0x5C1CA60", Slot = "59")]
	protected override void OnDisable()
	{
		// Lifted from source/cpp/UI/CustomAssetVideoUrlPopup.c (UI.CustomAssetVideoUrlPopup$$OnDisable): clean
		this.OnDisable();
		this.Done = true;
		return;
	}

	[Token(Token = "0x6004E41")]
	[Address(RVA = "0x5C1CA80", Offset = "0x5C1BA80", VA = "0x5C1CA80")]
	private void OnButtonClick(VideoUrlPopupResult result)
	{
		// Lifted from source/cpp/UI/CustomAssetVideoUrlPopup.c (UI.CustomAssetVideoUrlPopup$$OnButtonClick): clean
		this.Result = result;
		this.Done = true;
		this.Hide();
		if (result != 3) {
			return;
		}
		InGameManager.LeaveRoom();
		return;
	}

	[Token(Token = "0x6004E42")]
	[Address(RVA = "0x5C1CB00", Offset = "0x5C1BB00", VA = "0x5C1CB00")]
	public CustomAssetVideoUrlPopup()
	{
		// Lifted from source/cpp/UI/CustomAssetVideoUrlPopup.c (UI.CustomAssetVideoUrlPopup$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/CustomAssetVideoUrlPopup.c.

	// UI.CustomAssetVideoUrlPopup$$<Setup>b__19_0: clean
	private void Setup_b__19_0()
	{
		this.Result = 1;
		this.Done = true;
		this.Hide();
		return;
	}

	// UI.CustomAssetVideoUrlPopup$$<Setup>b__19_1: clean
	private void Setup_b__19_1()
	{
		this.Result = 2;
		this.Done = true;
		this.Hide();
		return;
	}

	// UI.CustomAssetVideoUrlPopup$$<Setup>b__19_2: clean
	private void Setup_b__19_2()
	{
		this.Result = 3;
		this.Done = true;
		this.Hide();
		if ((typeof(InGameManager)._2).cctor_finished_or_no_cctor == 0) {
			InGameManager.LeaveRoom();
			return;
		}
		InGameManager.LeaveRoom();
		return;
	}
}
