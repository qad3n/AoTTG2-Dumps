// ==================== AoTTG2 cross-reference ====================
// Type: UI.CustomPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CustomPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CustomPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000835")]
internal class CustomPopup : BasePopup
{
	[Token(Token = "0x40028ED")]
	[FieldOffset(Offset = "0xA8")]
	protected List<GameObject> _items;

	[Token(Token = "0x40028EE")]
	[FieldOffset(Offset = "0xB0")]
	protected ElementStyle _style;

	[Token(Token = "0x40028EF")]
	[FieldOffset(Offset = "0xB8")]
	protected float _width;

	[Token(Token = "0x40028F0")]
	[FieldOffset(Offset = "0xBC")]
	protected float _height;

	[Token(Token = "0x17000D92")]
	protected override string Title
	{
		[Token(Token = "0x6004E46")]
		[Address(RVA = "0x5C1CC20", Offset = "0x5C1BC20", VA = "0x5C1CC20", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/CustomPopup.c (UI.CustomPopup$$get_Title): clean
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
	}

	[Token(Token = "0x17000D93")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004E47")]
		[Address(RVA = "0x5C1CC40", Offset = "0x5C1BC40", VA = "0x5C1CC40", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/CustomPopup.c (UI.CustomPopup$$get_VerticalSpacing): clean
			return 20.0;
		}
	}

	[Token(Token = "0x17000D94")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004E48")]
		[Address(RVA = "0x5C1CC50", Offset = "0x5C1BC50", VA = "0x5C1CC50", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/CustomPopup.c (UI.CustomPopup$$get_VerticalPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x6004E49")]
	[Address(RVA = "0x5C1CC60", Offset = "0x5C1BC60", VA = "0x5C1CC60")]
	public void Setup(BasePanel parent, string title, float width, float height)
	{
		// Lifted from source/cpp/UI/CustomPopup.c (UI.CustomPopup$$Setup): 1 lines keep C-only constructs
		Transform parent_00;
		int fontSize;
		String pSVar1;
		ElementStyle pUVar2;
		UnityAction __this_00;

		this._width = width;
		this._height = height;
		this.Setup(parent);
		this.SetTitle(title);
		fontSize = this.get_ButtonFontSize();
		pSVar1 = this.get_ThemePanel();
		pUVar2 = new ElementStyle(fontSize, 120.0, 20.0, pSVar1);
		this._style = pUVar2;
		parent_00 = this.BottomBar;
		pUVar2 = this._style;
		pSVar1 = UIManager.GetLocaleCommon("Back");
		__this_00 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CustomPopup_Setup_b__10_0);
		ElementFactory.CreateTextButton(parent_00, pUVar2, pSVar1, 0.0, __this_00);
		return;
	}

	[Token(Token = "0x6004E4A")]
	[Address(RVA = "0x5C1CE00", Offset = "0x5C1BE00", VA = "0x5C1CE00")]
	public void AddBottomButton(string name, string title)
	{
		// Lifted from source/cpp/UI/CustomPopup.c (UI.CustomPopup$$AddBottomButton): 1 lines keep C-only constructs
		ElementStyle style;
		CustomPopup.c__DisplayClass11_0 __this_00;
		UnityAction __this_01;
		GameObject __this_02;
		Transform pUVar1;

		__this_00 = new CustomPopup.c__DisplayClass11_0();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			__this_00.name = name;
			pUVar1 = this.BottomBar;
			style = this._style;
			__this_01 = new UnityAction((object)__this_00, (intptr_t)MethodInfo_UI_CustomPopup_c__DisplayClass11_0_AddBottomButton_b__0) ;
			__this_02 = ElementFactory.CreateTextButton(pUVar1, style, title, 0.0, __this_01);
			if (__this_02 != null) {
				pUVar1 = __this_02.transform;
				if (pUVar1 != null) {
					pUVar1.SetAsFirstSibling();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E4B")]
	[Address(RVA = "0x5C1CF20", Offset = "0x5C1BF20", VA = "0x5C1CF20", Slot = "34")]
	protected override float GetHeight()
	{
		// Lifted from source/cpp/UI/CustomPopup.c (UI.CustomPopup$$GetHeight): clean
		return this._height;
	}

	[Token(Token = "0x6004E4C")]
	[Address(RVA = "0x5C1CF30", Offset = "0x5C1BF30", VA = "0x5C1CF30", Slot = "33")]
	protected override float GetWidth()
	{
		// Lifted from source/cpp/UI/CustomPopup.c (UI.CustomPopup$$GetWidth): clean
		return this._width;
	}

	[Token(Token = "0x6004E4D")]
	[Address(RVA = "0x5C1CF40", Offset = "0x5C1BF40", VA = "0x5C1CF40")]
	public void Clear()
	{
		// Lifted from source/cpp/UI/CustomPopup.c (UI.CustomPopup$$Clear): 4 lines keep C-only constructs
		int piVar1;
		int length;
		List<GameObject> pSVar2;
		object obj;
		bool bVar3;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		byte local_30;

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		pSVar2 = this._items;
		if (pSVar2 != null) {
			local_58 = pSVar2.GetEnumerator();
			local_30 = (byte)&local_58;
			while(true) {
				bVar3 = local_58.MoveNext();
				obj = local_58._current;
				if (!bVar3) break;
				Object.Destroy((Object)obj);
			}
			local_58.Dispose() ;
			pSVar2 = this._items;
			if (pSVar2 != null) {
				piVar1 = &pSVar2._version;
				*piVar1 = *piVar1 + 1;
				length = pSVar2._size;
				pSVar2._size = 0;
				if (0 < length) {
					Array.Clear((Array)pSVar2._items, 0, length);
				}
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E4E")]
	[Address(RVA = "0x5C1D0E0", Offset = "0x5C1C0E0", VA = "0x5C1D0E0")]
	public void AddLabel(string label)
	{
		// Lifted from source/cpp/UI/CustomPopup.c (UI.CustomPopup$$AddLabel): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<GameObject> __this_00;
		GameObject[] pUVar3;
		GameObject item;

		item = ElementFactory.CreateDefaultLabel(this.SinglePanel, this._style, label, 0, 4);
		__this_00 = this._items;
		if (__this_00 != null) {
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pUVar3 = __this_00._items;
			if (pUVar3 != null) {
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pUVar3.Length) {
					__this_00._size = uVar2 + 1;
					pUVar3[(int)uVar2] = item;
					return;
				}
				__this_00.AddWithResize((object)item);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E4F")]
	[Address(RVA = "0x5C1D1A0", Offset = "0x5C1C1A0", VA = "0x5C1D1A0")]
	public void AddButton(string name, string title)
	{
		// Lifted from source/cpp/UI/CustomPopup.c (UI.CustomPopup$$AddButton): 3 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Transform parent;
		ElementStyle style;
		List<GameObject> __this_00;
		GameObject[] pUVar3;
		CustomPopup.c__DisplayClass16_0 __this_01;
		UnityAction __this_02;
		GameObject item;

		__this_01 = new CustomPopup.c__DisplayClass16_0();
		if (__this_01 != null) {
			__this_01.__4__this = this;
			__this_01.name = name;
			parent = this.SinglePanel;
			style = this._style;
			__this_02 = new UnityAction((object)__this_01, (intptr_t)MethodInfo_UI_CustomPopup_c__DisplayClass16_0_AddButton_b__0);
			item = ElementFactory.CreateDefaultButton(parent, style, title, 0.0, 0.0, __this_02);
			__this_00 = this._items;
			if (__this_00 != null) {
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pUVar3 = __this_00._items;
				if (pUVar3 != null) {
					uVar2 = __this_00._size;
					if (uVar2 < (uint)pUVar3.Length) {
						__this_00._size = uVar2 + 1;
						pUVar3[(int)uVar2] = item;
						return;
					}
					__this_00.AddWithResize((object)item);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E50")]
	[Address(RVA = "0x5C1D320", Offset = "0x5C1C320", VA = "0x5C1D320")]
	public void AddButtons(List<object> names, List<object> titles)
	{
		// Lifted from source/cpp/UI/CustomPopup.c (UI.CustomPopup$$AddButtons): 2 lines keep C-only constructs
		String name;
		String title;
		int iVar1;

		if (names == null) {
			throw new NullReferenceException();
		}
		iVar1 = names._size;
		if (titles == null) {
			if (0 < iVar1) {
				names.get_Item(0);
				throw new NullReferenceException();
			}
		}
		else if (0 < iVar1) {
			iVar1 = 0;
			do {
				name = (String)names.get_Item(iVar1);
				title = (String)titles.get_Item(iVar1);
				if ((name != null) && (name.klass != g_data_07556758)) {
					throw new InvalidCastException();
				}
				if ((title != null) && (title.klass != g_data_07556758)) {
					throw new InvalidCastException();
				}
				this.AddButton(name, title);
				iVar1 = iVar1 + 1;
			} while (iVar1 < names._size);
		}
		return;
	}

	[Token(Token = "0x6004E51")]
	[Address(RVA = "0x5C1D420", Offset = "0x5C1C420", VA = "0x5C1D420")]
	protected void OnButtonClick(string name)
	{
		// Lifted from source/cpp/UI/CustomPopup.c (UI.CustomPopup$$OnButtonClick): clean
		uint uVar1;
		CustomLogicEvaluator __this_00;
		bool bVar2;

		bVar2 = (name == "Back");
		if (bVar2) {
			this.Hide();
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = CustomLogicManager.Evaluator;
		}
		else {
			__this_00 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnButtonClick(name);
		return;
	}

	[Token(Token = "0x6004E52")]
	[Address(RVA = "0x5C1D4F0", Offset = "0x5C1C4F0", VA = "0x5C1D4F0")]
	public CustomPopup()
	{
		// Lifted from source/cpp/UI/CustomPopup.c (UI.CustomPopup$$.ctor): clean
		List<GameObject> __this_00;

		__this_00 = new List<GameObject>();
		this._items = __this_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/CustomPopup.c.

	// UI.CustomPopup.<>c__DisplayClass11_0$$.ctor: clean
	private void c__DisplayClass11_0__ctor()
	{
		base();
		return;
	}

	// UI.CustomPopup.<>c__DisplayClass16_0$$.ctor: clean
	private void c__DisplayClass16_0__ctor()
	{
		base();
		return;
	}

	// UI.CustomPopup$$<Setup>b__10_0: clean
	private void Setup_b__10_0()
	{


		this.OnButtonClick("Back");
		return;
	}

	// UI.CustomPopup.<>c__DisplayClass11_0$$<AddBottomButton>b__0: clean
	private void c__DisplayClass11_0__AddBottomButton_b__0()
	{
		uint uVar1;
		CustomLogicEvaluator __this_00;
		CustomPopup pUVar2;
		String a;
		bool bVar3;

		pUVar2 = this.__4__this;
		if (pUVar2 == null) {
			throw new NullReferenceException();
		}
		a = this.name;
		bVar3 = (a == "Back");
		if (bVar3) {
			pUVar2.Hide();
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = CustomLogicManager.Evaluator;
		}
		else {
			__this_00 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnButtonClick(a);
		return;
	}

	// UI.CustomPopup.<>c__DisplayClass16_0$$<AddButton>b__0: clean
	private void c__DisplayClass16_0__AddButton_b__0()
	{
		CustomPopup __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnButtonClick(this.name);
		return;
	}
}
