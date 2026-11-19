// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileLayoutEditorToolbar
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileLayoutEditorToolbar.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200077B")]
internal class MobileLayoutEditorToolbar : HeadedPanel
{
	[Token(Token = "0x40025BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private string _title;

	[Token(Token = "0x40025BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private Action _loadPreset;

	[Token(Token = "0x40025BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private Action _savePreset;

	[Token(Token = "0x40025BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private Action _add;

	[Token(Token = "0x40025BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private Action _edit;

	[Token(Token = "0x40025BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Action _delete;

	[Token(Token = "0x40025C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Action _copy;

	[Token(Token = "0x40025C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Action _back;

	[Token(Token = "0x17000C36")]
	public Transform Buttons
	{
		[Token(Token = "0x6004829")]
		[Address(RVA = "0x5BB0B30", Offset = "0x5BAFB30", VA = "0x5BB0B30")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorToolbar.c (UI.MobileLayoutEditorToolbar$$get_Buttons): clean
			return this.BottomBar;
		}
	}

	[Token(Token = "0x17000C37")]
	public GameObject ReturnButton
	{
		[Token(Token = "0x600482A")]
		[Address(RVA = "0x5BB0B40", Offset = "0x5BAFB40", VA = "0x5BB0B40")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorToolbar.c (UI.MobileLayoutEditorToolbar$$get_ReturnButton): clean
			return this._ReturnButton_k__BackingField;
		}
		[Token(Token = "0x600482B")]
		[Address(RVA = "0x5BB0B50", Offset = "0x5BAFB50", VA = "0x5BB0B50")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorToolbar.c (UI.MobileLayoutEditorToolbar$$set_ReturnButton): clean
			this._ReturnButton_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000C38")]
	protected override string Title
	{
		[Token(Token = "0x600482C")]
		[Address(RVA = "0x5BB0B70", Offset = "0x5BAFB70", VA = "0x5BB0B70", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorToolbar.c (UI.MobileLayoutEditorToolbar$$get_Title): clean
			return this._title;
		}
	}

	[Token(Token = "0x17000C39")]
	protected override float Width
	{
		[Token(Token = "0x600482D")]
		[Address(RVA = "0x5BB0B80", Offset = "0x5BAFB80", VA = "0x5BB0B80", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorToolbar.c (UI.MobileLayoutEditorToolbar$$get_Width): clean
			return 1060.0;
		}
	}

	[Token(Token = "0x17000C3A")]
	protected override float Height
	{
		[Token(Token = "0x600482E")]
		[Address(RVA = "0x5BB0B90", Offset = "0x5BAFB90", VA = "0x5BB0B90", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorToolbar.c (UI.MobileLayoutEditorToolbar$$get_Height): clean
			return 112.0;
		}
	}

	[Token(Token = "0x17000C3B")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x600482F")]
		[Address(RVA = "0x5BB0BA0", Offset = "0x5BAFBA0", VA = "0x5BB0BA0", Slot = "36")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorToolbar.c (UI.MobileLayoutEditorToolbar$$get_TopBarHeight): clean
			return 48.0;
		}
	}

	[Token(Token = "0x17000C3C")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004830")]
		[Address(RVA = "0x5BB0BB0", Offset = "0x5BAFBB0", VA = "0x5BB0BB0", Slot = "37")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorToolbar.c (UI.MobileLayoutEditorToolbar$$get_BottomBarHeight): clean
			return 64.0;
		}
	}

	[Token(Token = "0x17000C3D")]
	protected override int TitleFontSize
	{
		[Token(Token = "0x6004831")]
		[Address(RVA = "0x5BB0BC0", Offset = "0x5BAFBC0", VA = "0x5BB0BC0", Slot = "40")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorToolbar.c (UI.MobileLayoutEditorToolbar$$get_TitleFontSize): clean
			return 0x16;
		}
	}

	[Token(Token = "0x17000C3E")]
	protected override int ButtonFontSize
	{
		[Token(Token = "0x6004832")]
		[Address(RVA = "0x5BB0BD0", Offset = "0x5BAFBD0", VA = "0x5BB0BD0", Slot = "41")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorToolbar.c (UI.MobileLayoutEditorToolbar$$get_ButtonFontSize): clean
			return 0x12;
		}
	}

	[Token(Token = "0x17000C3F")]
	protected override int BottomBarPadding
	{
		[Token(Token = "0x6004833")]
		[Address(RVA = "0x5BB0BE0", Offset = "0x5BAFBE0", VA = "0x5BB0BE0", Slot = "39")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorToolbar.c (UI.MobileLayoutEditorToolbar$$get_BottomBarPadding): clean
			return 0xc;
		}
	}

	[Token(Token = "0x17000C40")]
	protected override float BottomBarSpacing
	{
		[Token(Token = "0x6004834")]
		[Address(RVA = "0x5BB0BF0", Offset = "0x5BAFBF0", VA = "0x5BB0BF0", Slot = "38")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorToolbar.c (UI.MobileLayoutEditorToolbar$$get_BottomBarSpacing): clean
			return 8.0;
		}
	}

	[Token(Token = "0x17000C41")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004835")]
		[Address(RVA = "0x5BB0C00", Offset = "0x5BAFC00", VA = "0x5BB0C00", Slot = "15")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorToolbar.c (UI.MobileLayoutEditorToolbar$$get_ScrollBar): clean
			return false;
		}
	}

	[Token(Token = "0x6004836")]
	[Address(RVA = "0x5B9E750", Offset = "0x5B9D750", VA = "0x5B9E750")]
	public void SetupToolbar(string title, Action loadPreset, Action savePreset, Action add, Action edit, Action delete, Action copy, Action back)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorToolbar.c (UI.MobileLayoutEditorToolbar$$SetupToolbar): clean
		this._title = title;
		this._loadPreset = loadPreset;
		this._savePreset = savePreset;
		this._add = add;
		this._edit = edit;
		this._delete = delete;
		this._copy = copy;
		this._back = back;
		this.Setup(null);
		return;
	}

	[Token(Token = "0x6004837")]
	[Address(RVA = "0x5BB0C10", Offset = "0x5BAFC10", VA = "0x5BB0C10", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorToolbar.c (UI.MobileLayoutEditorToolbar$$Setup): 7 lines keep C-only constructs
		bool bVar1;
		int fontSize;
		Transform pUVar2;
		GameObject pUVar3;
		HorizontalLayoutGroup __this_00;
		String pSVar4;
		ElementStyle __this_01;
		UnityAction pUVar5;

		this.Setup(parent);
		pUVar2 = this.SinglePanel;
		bVar1 = ((Object)pUVar2 != null);
		if (bVar1) {
			pUVar2 = this.SinglePanel;
			if (pUVar2 == null) goto label_05cb10ff;
			pUVar2 = pUVar2.parent;
			if (pUVar2 == null) goto label_05cb10ff;
			pUVar3 = pUVar2.gameObject;
			if (pUVar3 == null) goto label_05cb10ff;
			pUVar3.SetActive(false);
		}
		pUVar2 = this.BottomBar;
		if (pUVar2 != null) {
			__this_00 = pUVar2.GetComponent<HorizontalLayoutGroup>();
			if (__this_00 != null) {
				__this_00.childAlignment = 4;
				fontSize = this.get_ButtonFontSize();
				pSVar4 = this.get_ThemePanel();
				__this_01 = new ElementStyle(fontSize, 120.0, 20.0, pSVar4);
				pUVar2 = this.BottomBar;
				pSVar4 = UIManager.GetLocaleCommon("LoadPreset");
				pUVar5 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MobileLayoutEditorToolbar_Setup_b__35_0);
				ElementFactory.CreateDefaultButton(pUVar2, __this_01, pSVar4, 160.0, 42.0, pUVar5);
				pUVar2 = this.BottomBar;
				pSVar4 = UIManager.GetLocaleCommon("SavePreset");
				pUVar5 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MobileLayoutEditorToolbar_Setup_b__35_1);
				ElementFactory.CreateDefaultButton(pUVar2, __this_01, pSVar4, 160.0, 42.0, pUVar5);
				pUVar2 = this.BottomBar;
				pSVar4 = UIManager.GetLocaleCommon("Add");
				pUVar5 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MobileLayoutEditorToolbar_Setup_b__35_2);
				ElementFactory.CreateDefaultButton(pUVar2, __this_01, pSVar4, 128.0, 42.0, pUVar5);
				pUVar2 = this.BottomBar;
				pSVar4 = UIManager.GetLocaleCommon("Edit");
				pUVar5 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MobileLayoutEditorToolbar_Setup_b__35_3);
				ElementFactory.CreateDefaultButton(pUVar2, __this_01, pSVar4, 128.0, 42.0, pUVar5);
				pUVar2 = this.BottomBar;
				pSVar4 = UIManager.GetLocaleCommon("Delete");
				pUVar5 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MobileLayoutEditorToolbar_Setup_b__35_4);
				ElementFactory.CreateDefaultButton(pUVar2, __this_01, pSVar4, 128.0, 42.0, pUVar5);
				pUVar2 = this.BottomBar;
				pSVar4 = UIManager.GetLocaleCommon("Copy");
				pUVar5 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MobileLayoutEditorToolbar_Setup_b__35_5);
				ElementFactory.CreateDefaultButton(pUVar2, __this_01, pSVar4, 128.0, 42.0, pUVar5);
				pUVar2 = this.BottomBar;
				pSVar4 = UIManager.GetLocaleCommon("Back");
				pUVar5 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MobileLayoutEditorToolbar_Setup_b__35_6);
				pUVar3 = ElementFactory.CreateDefaultButton(pUVar2, __this_01, pSVar4, 128.0, 42.0, pUVar5);
				this._ReturnButton_k__BackingField = pUVar3;
				return;
			}
		}
	label_05cb10ff: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004838")]
	[Address(RVA = "0x5BB1110", Offset = "0x5BB0110", VA = "0x5BB1110")]
	public MobileLayoutEditorToolbar()
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorToolbar.c (UI.MobileLayoutEditorToolbar$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MobileLayoutEditorToolbar.c.

	// UI.MobileLayoutEditorToolbar$$<Setup>b__35_0: 2 lines keep C-only constructs
	private void Setup_b__35_0()
	{
		Action pSVar1;
		code *vtableDispatch;
		ulong in_RDX;

		pSVar1 = this._loadPreset;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,pSVar1.method,in_RDX,vtableDispatch);
		return;
	}

	// UI.MobileLayoutEditorToolbar$$<Setup>b__35_1: 2 lines keep C-only constructs
	private void Setup_b__35_1()
	{
		Action pSVar1;
		code *vtableDispatch;
		ulong in_RDX;

		pSVar1 = this._savePreset;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,pSVar1.method,in_RDX,vtableDispatch);
		return;
	}

	// UI.MobileLayoutEditorToolbar$$<Setup>b__35_2: 2 lines keep C-only constructs
	private void Setup_b__35_2()
	{
		Action pSVar1;
		code *vtableDispatch;
		ulong in_RDX;

		pSVar1 = this._add;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,pSVar1.method,in_RDX,vtableDispatch);
		return;
	}

	// UI.MobileLayoutEditorToolbar$$<Setup>b__35_3: 2 lines keep C-only constructs
	private void Setup_b__35_3()
	{
		Action pSVar1;
		code *vtableDispatch;
		ulong in_RDX;

		pSVar1 = this._edit;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,pSVar1.method,in_RDX,vtableDispatch);
		return;
	}

	// UI.MobileLayoutEditorToolbar$$<Setup>b__35_4: 2 lines keep C-only constructs
	private void Setup_b__35_4()
	{
		Action pSVar1;
		code *vtableDispatch;
		ulong in_RDX;

		pSVar1 = this._delete;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,pSVar1.method,in_RDX,vtableDispatch);
		return;
	}

	// UI.MobileLayoutEditorToolbar$$<Setup>b__35_5: 2 lines keep C-only constructs
	private void Setup_b__35_5()
	{
		Action pSVar1;
		code *vtableDispatch;
		ulong in_RDX;

		pSVar1 = this._copy;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,pSVar1.method,in_RDX,vtableDispatch);
		return;
	}

	// UI.MobileLayoutEditorToolbar$$<Setup>b__35_6: 2 lines keep C-only constructs
	private void Setup_b__35_6()
	{
		Action pSVar1;
		code *vtableDispatch;
		ulong in_RDX;

		pSVar1 = this._back;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,pSVar1.method,in_RDX,vtableDispatch);
		return;
	}
}
