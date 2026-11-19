// ==================== AoTTG2 cross-reference ====================
// Type: UI.SelectListPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/SelectListPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/SelectListPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x20007A0")]
internal class SelectListPopup : PromptPopup
{
	[Token(Token = "0x20007A1")]
	public class ItemCategory
	{
		[Token(Token = "0x4002693")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public string Name;

		[Token(Token = "0x4002694")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public List<string> Items;

		[Token(Token = "0x60049D5")]
		[Address(RVA = "0x5BC7400", Offset = "0x5BC6400", VA = "0x5BC7400")]
		public ItemCategory(string name, List<string> items)
		{
			// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup.ItemCategory$$.ctor): clean
			base();
			this.Name = name;
			this.Items = items;
			return;
		}
	}

	[Token(Token = "0x400267D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected GameObject _noItemsLabel;

	[Token(Token = "0x400267E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected List<GameObject> _itemButtons;

	[Token(Token = "0x400267F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected List<GameObject> _categoryButtons;

	[Token(Token = "0x4002680")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected GameObject _categoryButtonContainer;

	[Token(Token = "0x4002681")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	protected bool _cachedTopBarAlignment;

	[Token(Token = "0x4002682")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xCC")]
	protected TextAnchor _defaultTopBarAlignment;

	[Token(Token = "0x4002683")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	protected List<GameObject> _saveElements;

	[Token(Token = "0x4002684")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	protected InputSettingElement _inputElement;

	[Token(Token = "0x4002685")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	protected List<string> _items;

	[Token(Token = "0x4002686")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	protected UnityAction _onLoad;

	[Token(Token = "0x4002687")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	protected UnityAction _onSave;

	[Token(Token = "0x4002688")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	protected UnityAction _onDelete;

	[Token(Token = "0x4002689")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	protected bool _isSave;

	[Token(Token = "0x400268A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x101")]
	protected bool _delete;

	[Token(Token = "0x400268B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	protected List<string> _disallowedDelete;

	[Token(Token = "0x400268C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	protected List<string> _disallowedSave;

	[Token(Token = "0x400268D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	protected Func<string, bool> _isValidName;

	[Token(Token = "0x400268E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	protected List<ItemCategory> _categorizedItems;

	[Token(Token = "0x400268F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	protected string _activeCategoryName;

	[Token(Token = "0x4002690")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	protected bool _useCategories;

	[Token(Token = "0x4002691")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	protected string _title;

	[Token(Token = "0x4002692")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	public StringSetting FinishSetting;

	[Token(Token = "0x17000CC3")]
	protected override string ThemePanel
	{
		[Token(Token = "0x60049AD")]
		[Address(RVA = "0x5BC3B20", Offset = "0x5BC2B20", VA = "0x5BC3B20", Slot = "4")]
		get
		{
			// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$get_ThemePanel): clean
			return "SelectListPopup";
		}
	}

	[Token(Token = "0x17000CC4")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60049AE")]
		[Address(RVA = "0x5BC3B50", Offset = "0x5BC2B50", VA = "0x5BC3B50", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$get_HorizontalPadding): clean
			return 0;
		}
	}

	[Token(Token = "0x17000CC5")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60049AF")]
		[Address(RVA = "0x5BC3B60", Offset = "0x5BC2B60", VA = "0x5BC3B60", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$get_VerticalPadding): clean
			return 5;
		}
	}

	[Token(Token = "0x17000CC6")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60049B0")]
		[Address(RVA = "0x5BC3B70", Offset = "0x5BC2B70", VA = "0x5BC3B70", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$get_VerticalSpacing): clean
			return 10.0;
		}
	}

	[Token(Token = "0x17000CC7")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x60049B1")]
		[Address(RVA = "0x5BC3B80", Offset = "0x5BC2B80", VA = "0x5BC3B80", Slot = "13")]
		get
		{
			// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$get_DoublePanel): clean
			return false;
		}
	}

	[Token(Token = "0x17000CC8")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60049B2")]
		[Address(RVA = "0x5BC3B90", Offset = "0x5BC2B90", VA = "0x5BC3B90", Slot = "15")]
		get
		{
			// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$get_ScrollBar): clean
			return true;
		}
	}

	[Token(Token = "0x17000CC9")]
	protected override float Width
	{
		[Token(Token = "0x60049B3")]
		[Address(RVA = "0x5BC3BA0", Offset = "0x5BC2BA0", VA = "0x5BC3BA0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$get_Width): clean
			return 450.0;
		}
	}

	[Token(Token = "0x17000CCA")]
	protected override float Height
	{
		[Token(Token = "0x60049B4")]
		[Address(RVA = "0x5BC3BB0", Offset = "0x5BC2BB0", VA = "0x5BC3BB0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$get_Height): clean
			return 500.0;
		}
	}

	[Token(Token = "0x17000CCB")]
	protected virtual float ItemButtonWidth
	{
		[Token(Token = "0x60049B5")]
		[Address(RVA = "0x5BC3BC0", Offset = "0x5BC2BC0", VA = "0x5BC3BC0", Slot = "62")]
		get
		{
			// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$get_ItemButtonWidth): clean
			return 380.0;
		}
	}

	[Token(Token = "0x17000CCC")]
	protected virtual int ItemFontSize
	{
		[Token(Token = "0x60049B6")]
		[Address(RVA = "0x5BC3BD0", Offset = "0x5BC2BD0", VA = "0x5BC3BD0", Slot = "63")]
		get
		{
			// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$get_ItemFontSize): clean
			return 0x1c;
		}
	}

	[Token(Token = "0x17000CCD")]
	protected virtual float DeleteButtonSize
	{
		[Token(Token = "0x60049B7")]
		[Address(RVA = "0x5BC3BE0", Offset = "0x5BC2BE0", VA = "0x5BC3BE0", Slot = "64")]
		get
		{
			// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$get_DeleteButtonSize): clean
			return 32.0;
		}
	}

	[Token(Token = "0x60049B8")]
	[Address(RVA = "0x5BC3BF0", Offset = "0x5BC2BF0", VA = "0x5BC3BF0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$Setup): 9 lines keep C-only constructs
		int piVar1;
		GameObject* targetAddress;
		uint uVar2;
		Transform pUVar3;
		StringSetting setting;
		List<GameObject> __this_00;
		GameObject[] pUVar4;
		int fontSize;
		String pSVar6;
		ElementStyle pUVar7;
		UnityAction pUVar8;
		UnityAction __this_01;
		GameObject pUVar9;
		InputSettingElement pUVar10;
		LayoutElement pUVar11;
		HorizontalLayoutGroup pUVar12;

		this.Setup(parent);
		fontSize = this.get_ButtonFontSize();
		pSVar6 = this.get_ThemePanel();
		pUVar7 = new ElementStyle(fontSize, 60.0, 20.0, pSVar6);
		pUVar3 = this.BottomBar;
		setting = this.FinishSetting;
		pSVar6 = UIManager.GetLocaleCommon("Name");
		pUVar8 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_SelectListPopup_Setup_b__45_0);
		__this_01 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_SelectListPopup_Setup_b__45_1);
		pUVar9 = ElementFactory.CreateInputSetting(pUVar3, pUVar7, (BaseSetting)setting, pSVar6, "", 185.0, 40.0, false, pUVar8, __this_01, null, null);
		if (pUVar9 != null) {
			pUVar10 = pUVar9.GetComponent<InputSettingElement>();
			this._inputElement = pUVar10;
			pUVar3 = this.BottomBar;
			__this_00 = this._saveElements;
			pSVar6 = UIManager.GetLocaleCommon("Save");
			pUVar8 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_SelectListPopup_Setup_b__45_2);
			pUVar9 = ElementFactory.CreateTextButton(pUVar3, pUVar7, pSVar6, 0.0, pUVar8);
			if (__this_00 != null) {
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pUVar4 = __this_00._items;
				if (pUVar4 != null) {
					uVar2 = __this_00._size;
					if (uVar2 < (uint)pUVar4.Length) {
						__this_00._size = uVar2 + 1;
						pUVar4[(int)uVar2] = pUVar9;
					}
					else {
						__this_00.AddWithResize((object)pUVar9);
					}
					pUVar3 = this.BottomBar;
					pSVar6 = UIManager.GetLocaleCommon("Back");
					pUVar8 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_SelectListPopup_Setup_b__45_3);
					ElementFactory.CreateTextButton(pUVar3, pUVar7, pSVar6, 0.0, pUVar8);
					pUVar3 = this.SinglePanel;
					pSVar6 = this.get_ThemePanel();
					pUVar7 = new ElementStyle(0x18, 120.0, 20.0, pSVar6);
					pSVar6 = UIManager.GetLocale("Common", "NoItemsFound", "", "", "");
					pUVar9 = ElementFactory.CreateDefaultLabel(pUVar3, pUVar7, pSVar6, 0, 4);
					this._noItemsLabel = pUVar9;
					pUVar9 = ElementFactory.CreateHorizontalGroup(this.TopBar, 12.0, 4);
					targetAddress = &this._categoryButtonContainer;
					this._categoryButtonContainer = pUVar9;
					pUVar9 = this._categoryButtonContainer;
					if (pUVar9 != null) {
						pUVar11 = pUVar9.GetComponent<LayoutElement>();
						if (pUVar11 != null) {
							pUVar11.set_flexibleWidth(0.0);
							pUVar9 = *targetAddress;
							if (pUVar9 != null) {
								pUVar9.SetActive(false);
								pUVar3 = this.TopBar;
								if (pUVar3 != null) {
									pUVar12 = pUVar3.GetComponent<HorizontalLayoutGroup>();
									if (pUVar12 != null) {
										this._defaultTopBarAlignment = pUVar12.m_ChildAlignment;
										this._cachedTopBarAlignment = true;
										return;
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60049B9")]
	[Address(RVA = "0x5BC40E0", Offset = "0x5BC30E0", VA = "0x5BC40E0")]
	private void OnSearchChanged()
	{
		// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$OnSearchChanged): clean
		this.RefreshList();
		return;
	}

	[Token(Token = "0x60049BA")]
	[Address(RVA = "0x5BC44E0", Offset = "0x5BC34E0", VA = "0x5BC44E0")]
	private void OnSearchEndEdit()
	{
		// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$OnSearchEndEdit): 2 lines keep C-only constructs
		StringSetting pSVar1;
		bool bVar2;
		SelectListPopup.c__DisplayClass47_0 __this_00;
		String pSVar3;
		List<string> source;
		Func<string, bool> __this_01;

		__this_00 = new SelectListPopup.c__DisplayClass47_0();
		bVar2 = Input.GetKeyDown(0xd);
		if ((((!bVar2) && (bVar2 = Input.GetKeyDown(0x10f), !bVar2)) &&(bVar2 = Input.GetKey(0xd), !bVar2)) &&(bVar2 = Input.GetKey(0x10f), !bVar2)) {
			return;
		}
		pSVar1 = this.FinishSetting;
		if (((pSVar1 == null) ||(pSVar3 = pSVar1._value, pSVar3 == null)) ||(pSVar3 = pSVar3.ToLowerInvariant(), __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.query = pSVar3;
		bVar2 = String.IsNullOrEmpty(__this_00.query);
		if (!bVar2) {
			source = this.GetActiveCategoryItems();
			__this_01 = new Func<string, bool>((object)__this_00, (intptr_t)MethodInfo_UI_SelectListPopup_c__DisplayClass47_0_OnSearchEndEdit_b__0);
			pSVar3 = Enumerable.FirstOrDefault<string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_01) ;
			if (pSVar3 != null) {
				this.OnItemClick(pSVar3);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60049BB")]
	[Address(RVA = "0x5BC4A80", Offset = "0x5BC3A80", VA = "0x5BC4A80")]
	public void ShowLoad(List<string> items, [Optional][DefaultParameterValue("")] string title, [Optional] UnityAction onLoad, [Optional] UnityAction onDelete, [Optional] List<string> disallowedDelete)
	{
		// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$ShowLoad): clean
		StringSetting __this_00;
		InputSettingElement pUVar1;
		InputField pUVar2;
		bool bVar3;
		MethodInfo pMVar4;

		pMVar4 = (MethodInfo)items;
		this.Show();
		this._items = items;
		this._categorizedItems = null;
		this._useCategories = false;
		this._isSave = false;
		this._onLoad = onLoad;
		this._delete = onDelete != null;
		this._disallowedDelete = disallowedDelete;
		this._onDelete = onDelete;
		__this_00 = this.FinishSetting;
		if (__this_00 != null) {
			__this_00.Value = (Il2CppObject *)"";
			pUVar1 = this._inputElement;
			if (pUVar1 != null) {
				pUVar1.SyncElement();
				pMVar4 = null;
				this.SetCategoryTabsEnabled(false);
				this.ToggleSaveElements();
				pMVar4 = (MethodInfo)**(ulong*)(g_data_07556758 + 0xb8);
				bVar3 = (title != (String)pMVar4);
				if (bVar3) {
					this.SetTitle(title);
					pMVar4 = (MethodInfo)title;
				}
				this.RefreshList();
				pUVar1 = this._inputElement;
				if ((pUVar1 != null) &&(pUVar2 = pUVar1._inputField, pUVar2 != null)) {
					pUVar2.Select();
					pUVar1 = this._inputElement;
					if ((pUVar1 != null) &&(pUVar2 = pUVar1._inputField, pUVar2 != null)) {
						pUVar2.ActivateInputField();
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60049BC")]
	[Address(RVA = "0x5BC5080", Offset = "0x5BC4080", VA = "0x5BC5080")]
	public void ShowLoadCategorized(List<ItemCategory> categories, [Optional][DefaultParameterValue("")] string title, [Optional] UnityAction onLoad)
	{
		// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$ShowLoadCategorized): 10 lines keep C-only constructs
		int piVar1;
		List<string>* targetAddress;
		uint uVar2;
		String[] pSVar3;
		StringSetting __this_00;
		InputSettingElement pUVar4;
		InputField pUVar5;
		bool bVar6;
		List<string> pSVar7;
		MethodInfo pMVar8;
		MethodInfo title_00;
		byte[] auStack_a0 = new byte[16];
		String pSStack_90;
		byte[] auStack_88 = new byte[8];
		String pSStack_78;
		byte[] auStack_68 = new byte[8];
		String pSStack_58;
		MethodInfo pMStack_50;
		UnityAction pUStack_48;

		pMVar8 = (MethodInfo)categories;
		pMStack_50 = (MethodInfo)title;
		pUStack_48 = onLoad;
		auStack_88 = (byte[])0x0;
		pSStack_78 = null;
		auStack_68 = (byte[])0x0;
		pSStack_58 = null;
		this.Show();
		this._categorizedItems = categories;
		this._useCategories = true;
		pSVar7 = new List<string>();
		targetAddress = &this._items;
		this._items = pSVar7;
		if (categories != null) {
			auStack_a0.GetEnumerator((List<object>)categories);
			pSStack_78 = pSStack_90;
			auStack_88 = (byte[])auStack_a0._0_8_;
			while (bVar6 = auStack_88.MoveNext()) {
				if (pSStack_78 == null) {
					throw new NullReferenceException();
				}
				if ((*(ulong)((sbyte)pSStack_78 + 0x18)) == null) {
					throw new NullReferenceException();
				}
				auStack_a0.GetEnumerator((List<object>)(*(ulong)((sbyte)pSStack_78 + 0x18)));
				pSStack_58 = pSStack_90;
				auStack_68 = (byte[])auStack_a0._0_8_;
				auStack_a0._0_8_ = null;
				auStack_a0._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_68;
				while (true) {
					bVar6 = auStack_68.MoveNext();
					pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
					if (!(bVar6)) break;
					pSVar7 = *targetAddress;
					if (pSVar7 == null) {
	label_05cc5333: ;
						throw new NullReferenceException();
					}
					piVar1 = &pSVar7._version;
					*piVar1 = *piVar1 + 1;
					pSVar3 = pSVar7._items;
					if (pSVar3 == null) goto label_05cc5333;
					uVar2 = pSVar7._size;
					if (uVar2 < (uint)pSVar3.Length) {
						pSVar7._size = uVar2 + 1;
						pSVar3[(int)uVar2] = pSStack_58;
					}
					else {
						pSVar7.AddWithResize((object)pSStack_58);
					}
				}
				auStack_68.Dispose();
			}
			auStack_88.Dispose();
			this._isSave = false;
			this._onLoad = pUStack_48;
			this._delete = false;
			this._disallowedDelete = null;
			this._onDelete = null;
			__this_00 = this.FinishSetting;
			if (__this_00 != null) {
				__this_00.Value = (object)**(ulong*)(g_data_07556758 + 0xb8);
				pUVar4 = this._inputElement;
				if (pUVar4 != null) {
					pMVar8 = (pUVar4.klass.vtable)._6_SyncElement.method;
					pUVar4.SyncElement();
					this.SetupCategoryTabs();
					this.ToggleSaveElements();
					title_00 = pMStack_50;
					pMVar8 = (MethodInfo)**(ulong*)(g_data_07556758 + 0xb8);
					bVar6 = ((String)pMStack_50 != (String)pMVar8);
					if (bVar6) {
						this.SetTitle((String)title_00);
						pMVar8 = title_00;
					}
					this.RefreshList();
					pUVar4 = this._inputElement;
					if ((pUVar4 != null) &&(pUVar5 = pUVar4._inputField, pUVar5 != null)) {
						pUVar5.Select();
						pUVar4 = this._inputElement;
						if ((pUVar4 != null) &&(pUVar5 = pUVar4._inputField, pUVar5 != null)) {
							pUVar5.ActivateInputField();
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60049BD")]
	[Address(RVA = "0x5BC5A70", Offset = "0x5BC4A70", VA = "0x5BC5A70")]
	public void ShowSave(List<string> items, [Optional][DefaultParameterValue("")] string title, [Optional][DefaultParameterValue("")] string initial, [Optional] UnityAction onSave, [Optional] List<string> disallowedSave, [Optional] UnityAction onDelete, [Optional] List<string> disallowedDelete, [Optional] Func<string, bool> isValidName)
	{
		// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$ShowSave): clean
		StringSetting __this_00;
		InputSettingElement pUVar1;
		InputField pUVar2;
		bool bVar3;
		MethodInfo pMVar4;

		pMVar4 = (MethodInfo)items;
		this.Show();
		this._items = items;
		this._categorizedItems = null;
		this._useCategories = false;
		this._isSave = true;
		this._onSave = onSave;
		this._disallowedSave = disallowedSave;
		this._isValidName = isValidName;
		this._delete = onDelete != null;
		this._disallowedDelete = disallowedDelete;
		this._onDelete = onDelete;
		__this_00 = this.FinishSetting;
		if (__this_00 != null) {
			__this_00.Value = (object)initial;
			pUVar1 = this._inputElement;
			if (pUVar1 != null) {
				pUVar1.SyncElement();
				pMVar4 = null;
				this.SetCategoryTabsEnabled(false);
				this.ToggleSaveElements();
				pMVar4 = (MethodInfo)**(ulong*)(g_data_07556758 + 0xb8);
				bVar3 = (title != (String)pMVar4);
				if (bVar3) {
					this.SetTitle(title);
					pMVar4 = (MethodInfo)title;
				}
				this.RefreshList();
				pUVar1 = this._inputElement;
				if ((pUVar1 != null) &&(pUVar2 = pUVar1._inputField, pUVar2 != null)) {
					pUVar2.Select();
					pUVar1 = this._inputElement;
					if ((pUVar1 != null) &&(pUVar2 = pUVar1._inputField, pUVar2 != null)) {
						pUVar2.ActivateInputField();
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60049BE")]
	[Address(RVA = "0x5BC4DD0", Offset = "0x5BC3DD0", VA = "0x5BC4DD0")]
	private void ToggleSaveElements()
	{
		// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$ToggleSaveElements): 3 lines keep C-only constructs
		uint uVar1;
		List<GameObject> __this_00;
		bool bVar2;
		String title;
		String* ppSVar3;
		System_Collections_Generic_List_Enumerator_T__o local_38;

		local_38._list = null;
		local_38._index = 0;
		local_38._version = 0;
		local_38._current = null;
		__this_00 = this._saveElements;
		if (this._isSave == false) {
			if (__this_00 == null) goto label_05cc4fc5;
			local_38 = __this_00.GetEnumerator();
			while (bVar2 = local_38.MoveNext()) {
				if ((GameObject)local_38._current == null) {
					throw new NullReferenceException();
				}
				local_38._current.SetActive(false);
			}
			local_38.Dispose() ;
			ppSVar3 = &"Load";
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (__this_00 == null) {
	label_05cc4fc5: ;
				throw new NullReferenceException();
			}
			local_38 = __this_00.GetEnumerator();
			while (bVar2 = local_38.MoveNext()) {
				if ((GameObject)local_38._current == null) {
					throw new NullReferenceException();
				}
				local_38._current.SetActive(true);
			}
			local_38.Dispose() ;
			ppSVar3 = &"Save";
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		title = UIManager.GetLocaleCommon(*ppSVar3);
		this.SetTitle(title);
		return;
	}

	[Token(Token = "0x60049BF")]
	[Address(RVA = "0x5BC40F0", Offset = "0x5BC30F0", VA = "0x5BC40F0")]
	public void RefreshList()
	{
		// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$RefreshList): 12 lines keep C-only constructs
		StringSetting pSVar1;
		String __this_00;
		GameObject __this_01;
		bool bVar2;
		SelectListPopup.c__DisplayClass52_0 __this_02;
		MethodInfo pMVar3;
		List<string> pSVar4;
		Func<string, bool> pSVar5;
		System_Collections_Generic_IEnumerable_TSource__o pSVar6;
		int iVar7;
		SelectListPopup.c__DisplayClass52_0 targetAddress;
		byte[] local_68 = new byte[8];
		String local_58;
		byte[] local_48 = new byte[16];
		String local_38;

		local_68 = (byte[])0x0;
		local_58 = null;
		pMVar3 = null;
		__this_02 = new SelectListPopup.c__DisplayClass52_0();
		this.ClearListButtons();
		pSVar1 = this.FinishSetting;
		if ((pSVar1 != null) &&(__this_00 = pSVar1._value, __this_00 != null)) {
			iVar7 = 0;
			pMVar3 = (MethodInfo)__this_00.ToLowerInvariant();
			if (__this_02 != null) {
				targetAddress = &__this_02.fields;
				__this_02.query = (String)pMVar3;
				if ((this._useCategories == false) ||(this._categorizedItems ==null)) {
					bVar2 = String.IsNullOrEmpty(targetAddress.query);
					pSVar4 = this._items;
					if (!bVar2) {
						pSVar5 = new Func<string, bool>((object)__this_02, (intptr_t)MethodInfo_UI_SelectListPopup_c__DisplayClass52_0_RefreshList_b__1);
						pSVar6 = Enumerable.Where<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar4, (System_Func_TSource__bool__o)pSVar5);
						pSVar4 = (List<string>)Enumerable.ToList<string>(pSVar6);
					}
					if (pSVar4 == null) goto label_05cc446c;
					local_48.GetEnumerator((List<object>)pSVar4);
					local_58 = local_38;
					local_68 = (byte[])local_48._0_8_;
					local_48._0_8_ = null;
					local_48._8_8_ = local_68;
					while(true) {
						bVar2 = local_68.MoveNext();
						if (!bVar2) break;
						this.CreateItemButton(local_58);
						iVar7 = iVar7 + 1;
					}
				}
				else {
					pSVar4 = this.GetActiveCategoryItems();
					bVar2 = String.IsNullOrEmpty(targetAddress.query);
					if (!bVar2) {
						pSVar5 = new Func<string, bool>((object)__this_02, (intptr_t)MethodInfo_UI_SelectListPopup_c__DisplayClass52_0_RefreshList_b__0);
						pSVar6 = Enumerable.Where<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar4, (System_Func_TSource__bool__o)pSVar5);
						pSVar4 = (List<string>)Enumerable.ToList<string>(pSVar6);
					}
					if (pSVar4 == null) goto label_05cc446c;
					local_48.GetEnumerator((List<object>)pSVar4);
					local_58 = local_38;
					local_68 = (byte[])local_48._0_8_;
					local_48._0_8_ = null;
					iVar7 = 0;
					local_48._8_8_ = local_68;
					while(true) {
						bVar2 = local_68.MoveNext();
						if (!bVar2) break;
						this.CreateItemButton(local_58);
						iVar7 = iVar7 + 1;
					}
				}
				local_68.Dispose();
				__this_01 = this._noItemsLabel;
				if (__this_01 != null) {
					__this_01.SetActive(iVar7 == 0);
					return;
				}
			}
		}
	label_05cc446c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60049C0")]
	[Address(RVA = "0x5BC5E20", Offset = "0x5BC4E20", VA = "0x5BC5E20")]
	protected void CreateItemButton(string item)
	{
		// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$CreateItemButton): 7 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<GameObject> __this_00;
		GameObject[] pUVar3;
		UnityEvent pUVar4;
		List<string> __this_01;
		ColorBlock value;
		ColorBlock value_00;
		bool bVar6;
		int value_01;
		SelectListPopup.c__DisplayClass53_0 __this_02;
		GameObject pUVar7;
		Transform pUVar8;
		Button __this_03;
		Button __this_04;
		UnityAction pUVar9;
		Text pUVar10;
		String pSVar11;
		LayoutElement pUVar12;
		String* targetAddress;
		float fVar13;
		float fVar14;
		Color UVar15;
		ColorBlock local_88;

		__this_02 = new SelectListPopup.c__DisplayClass53_0();
		if (__this_02 != null) {
			__this_02.__4__this = this;
			targetAddress = &__this_02.item;
			__this_02.item = item;
			pUVar7 = ElementFactory.InstantiateAndBind(this.SinglePanel, "Prefabs/Misc/SelectListButton");
			__this_00 = this._itemButtons;
			if (__this_00 != null) {
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pUVar3 = __this_00._items;
				if (pUVar3 != null) {
					uVar2 = __this_00._size;
					if (uVar2 < (uint)pUVar3.Length) {
						__this_00._size = uVar2 + 1;
						pUVar3[(int)uVar2] = pUVar7;
					}
					else {
						__this_00.AddWithResize((object)pUVar7);
					}
					if (((pUVar7 != null) &&(pUVar8 = pUVar7.transform, pUVar8 != null)) &&(pUVar8 = pUVar8.Find("ItemButton"), pUVar8 != null)) {
						__this_03 = pUVar8.GetComponent<Button>();
						pUVar8 = pUVar7.transform;
						if (((pUVar8 != null) &&(pUVar8 = pUVar8.Find("DeleteButton"), pUVar8 != null)) &&(__this_04 = pUVar8.GetComponent<Button>(), __this_03 != null)) {
							pUVar4 = (UnityEvent)__this_03.m_OnClick;
							pUVar9 = new UnityAction((object)__this_02, (intptr_t)MethodInfo_UI_SelectListPopup_c__DisplayClass53_0_CreateItemButton_b__0);
							if (pUVar4 != null) {
								pUVar4.AddListener(pUVar9);
								pUVar8 = __this_03.transform;
								if (((pUVar8 != null) &&(pUVar8 = pUVar8.Find("Text"), pUVar8 != null)) &&(pUVar10 = pUVar8.GetComponent<Text>(), pUVar10 != null)) {
									pUVar10.set_text(*targetAddress);
									pUVar8 = __this_03.transform;
									if ((pUVar8 != null) &&(pUVar8 = pUVar8.Find("Text"), pUVar8 != null)) {
										pUVar10 = pUVar8.GetComponent<Text>();
										value_01 = this.get_ItemFontSize();
										if (pUVar10 != null) {
											pUVar10.fontSize = value_01;
											pSVar11 = this.get_ThemePanel();
											local_88 = UIManager.GetThemeColorBlock(pSVar11, "ItemButton", "", "DefaultPanel");
											value.m_NormalColor.b = local_88.m_NormalColor.b;
											value.m_NormalColor.a = local_88.m_NormalColor.a;
											value.m_NormalColor.r = local_88.m_NormalColor.r;
											value.m_NormalColor.g = local_88.m_NormalColor.g;
											value.m_HighlightedColor.r = local_88.m_HighlightedColor.r;
											value.m_HighlightedColor.g = local_88.m_HighlightedColor.g;
											value.m_HighlightedColor.b = local_88.m_HighlightedColor.b;
											value.m_HighlightedColor.a = local_88.m_HighlightedColor.a;
											value.m_PressedColor.r = local_88.m_PressedColor.r;
											value.m_PressedColor.g = local_88.m_PressedColor.g;
											value.m_PressedColor.b = local_88.m_PressedColor.b;
											value.m_PressedColor.a = local_88.m_PressedColor.a;
											value.m_SelectedColor.r = local_88.m_SelectedColor.r;
											value.m_SelectedColor.g = local_88.m_SelectedColor.g;
											value.m_SelectedColor.b = local_88.m_SelectedColor.b;
											value.m_SelectedColor.a = local_88.m_SelectedColor.a;
											value.m_DisabledColor.r = local_88.m_DisabledColor.r;
											value.m_DisabledColor.g = local_88.m_DisabledColor.g;
											value.m_DisabledColor.b = local_88.m_DisabledColor.b;
											value.m_DisabledColor.a = local_88.m_DisabledColor.a;
											value.m_ColorMultiplier = local_88.m_ColorMultiplier;
											value.m_FadeDuration = local_88.m_FadeDuration;
											__this_03.colors = value;
											pUVar8 = __this_03.transform;
											if ((pUVar8 != null) &&(pUVar8 = pUVar8.Find("Text"), pUVar8 != null)) {
												pUVar10 = pUVar8.GetComponent<Text>();
												pSVar11 = this.get_ThemePanel();
												UVar15 = UIManager.GetThemeColor(pSVar11, "ItemButton", "TextColor", "DefaultPanel");
												if (pUVar10 != null) {
													pUVar10.set_color(UVar15);
													bVar6 = this._delete;
													pUVar12 = __this_03.GetComponent<LayoutElement>();
													fVar13 = this.get_ItemButtonWidth();
													if (bVar6 == false) {
														fVar14 = this.get_DeleteButtonSize();
														if (pUVar12 == null) goto label_05cc6549;
														fVar13 = fVar13 + fVar14 + 10.0;
													}
													else if (pUVar12 == null) goto label_05cc6549;
													pUVar12.set_preferredWidth(fVar13);
													if ((this._delete == false) ||((__this_01 = this._disallowedDelete, __this_01 != null &&(bVar6 = __this_01.Contains((object)*targetAddress))))) {
														if ((__this_04 != null) &&(pUVar7 = __this_04.gameObject, pUVar7 != null)) {
															pUVar7.SetActive(false);
															return;
														}
													}
													else if (__this_04 != null) {
														pUVar4 = (UnityEvent)__this_04.m_OnClick;
														pUVar9 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_SelectListPopup_c__DisplayClass53_0_CreateItemButton_b__1);
														if (pUVar4 != null) {
															pUVar4.AddListener(pUVar9);
															pUVar12 = __this_04.GetComponent<LayoutElement>();
															fVar13 = this.get_DeleteButtonSize();
															if (pUVar12 != null) {
																pUVar12.set_preferredWidth(fVar13);
																pUVar12 = __this_04.GetComponent<LayoutElement>();
																fVar13 = this.get_DeleteButtonSize();
																if (pUVar12 != null) {
																	pUVar12.set_preferredHeight(fVar13);
																	pSVar11 = this.get_ThemePanel();
																	local_88 = UIManager.GetThemeColorBlock(pSVar11, "DeleteButton", "", "DefaultPanel");
																	value_00.m_NormalColor.b = local_88.m_NormalColor.b;
																	value_00.m_NormalColor.a = local_88.m_NormalColor.a;
																	value_00.m_NormalColor.r = local_88.m_NormalColor.r;
																	value_00.m_NormalColor.g = local_88.m_NormalColor.g;
																	value_00.m_HighlightedColor.r = local_88.m_HighlightedColor.r;
																	value_00.m_HighlightedColor.g = local_88.m_HighlightedColor.g;
																	value_00.m_HighlightedColor.b = local_88.m_HighlightedColor.b;
																	value_00.m_HighlightedColor.a = local_88.m_HighlightedColor.a;
																	value_00.m_PressedColor.r = local_88.m_PressedColor.r;
																	value_00.m_PressedColor.g = local_88.m_PressedColor.g;
																	value_00.m_PressedColor.b = local_88.m_PressedColor.b;
																	value_00.m_PressedColor.a = local_88.m_PressedColor.a;
																	value_00.m_SelectedColor.r = local_88.m_SelectedColor.r;
																	value_00.m_SelectedColor.g = local_88.m_SelectedColor.g;
																	value_00.m_SelectedColor.b = local_88.m_SelectedColor.b;
																	value_00.m_SelectedColor.a = local_88.m_SelectedColor.a;
																	value_00.m_DisabledColor.r = local_88.m_DisabledColor.r;
																	value_00.m_DisabledColor.g = local_88.m_DisabledColor.g;
																	value_00.m_DisabledColor.b = local_88.m_DisabledColor.b;
																	value_00.m_DisabledColor.a = local_88.m_DisabledColor.a;
																	value_00.m_ColorMultiplier = local_88.m_ColorMultiplier;
																	value_00.m_FadeDuration = local_88.m_FadeDuration;
																	__this_04.colors = value_00;
																	return;
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_05cc6549: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60049C1")]
	[Address(RVA = "0x5BC5C80", Offset = "0x5BC4C80", VA = "0x5BC5C80")]
	protected void ClearListButtons()
	{
		// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$ClearListButtons): 4 lines keep C-only constructs
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
		pSVar2 = this._itemButtons;
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
			pSVar2 = this._itemButtons;
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

	[Token(Token = "0x60049C2")]
	[Address(RVA = "0x5BC4670", Offset = "0x5BC3670", VA = "0x5BC4670")]
	protected List<string> GetActiveCategoryItems()
	{
		// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$GetActiveCategoryItems): 6 lines keep C-only constructs
		System_Collections_Generic_List_SelectListPopup_ItemCategory__o pSVar1;
		Func<SelectListPopup.ItemCategory, bool> __this_00;
		object pIVar2;
		List<string>* ppSVar3;

		if (((this._useCategories == false) ||(pSVar1 = this._categorizedItems, pSVar1 == null)) ||(pSVar1._size == 0)) {
			ppSVar3 = &this._items;
		}
		else {
			__this_00 = new Func<SelectListPopup.ItemCategory, bool>((object)this, (intptr_t)MethodInfo_UI_SelectListPopup_GetActiveCategoryItems_b__55_0);
			pIVar2 = Enumerable.FirstOrDefault<SelectListPopup.ItemCategory>((System_Collections_Generic_IEnumerable_TSource__o)pSVar1, (System_Func_TSource__bool__o)__this_00);
			if (pIVar2 == null) {
				pSVar1 = this._categorizedItems;
				if (pSVar1 == null) {
	label_05cc478a: ;
					throw new NullReferenceException();
				}
				pIVar2 = pSVar1.get_Item(0);
				if (pIVar2 == null) goto label_05cc478a;
			}
			this._activeCategoryName = (String)pIVar2[1].klass;
			ppSVar3 = &pIVar2[1].monitor;
		}
		return *ppSVar3;
	}

	[Token(Token = "0x60049C3")]
	[Address(RVA = "0x5BC5570", Offset = "0x5BC4570", VA = "0x5BC5570")]
	protected void SetupCategoryTabs()
	{
		// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$SetupCategoryTabs): 16 lines keep C-only constructs
		int piVar1;
		String* targetAddress;
		uint uVar2;
		Object x;
		System_Collections_Generic_List_SelectListPopup_ItemCategory__o pSVar3;
		List<GameObject> __this_00;
		GameObject[] pUVar4;
		bool bVar5;
		Func<SelectListPopup.ItemCategory, bool> __this_01;
		object pIVar6;
		String pSVar7;
		ElementStyle __this_02;
		SelectListPopup.c__DisplayClass56_0 __this_03;
		Transform parent;
		UnityAction __this_04;
		GameObject pUVar8;
		System_Collections_Generic_List_Enumerator_object__o local_68;
		byte[] local_48 = new byte[16];
		object local_38;

		local_68._list = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._current = null;
		x = (Object)this._categoryButtonContainer;
		bVar5 = (x == null);
		if (bVar5) {
			return;
		}
		this.ClearCategoryTabs();
		if (((this._useCategories == false) ||(pSVar3 = this._categorizedItems, pSVar3 == null)) ||(pSVar3._size == 0)) {
			this._activeCategoryName = (String)**(ulong*)(g_data_07556758 + 0xb8);
			this.SetCategoryTabsEnabled(false);
			return;
		}
		bVar5 = (this._activeCategoryName == (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (bVar5) {
	label_05cc573f: ;
			pSVar3 = this._categorizedItems;
			if ((pSVar3 == null) ||(pIVar6 = pSVar3.get_Item(0), pIVar6 == null)) goto label_05cc59f4;
			targetAddress = &this._activeCategoryName;
			*targetAddress = (String)pIVar6[1].klass;
		}
		else {
			pSVar3 = this._categorizedItems;
			__this_01 = new Func<SelectListPopup.ItemCategory, bool>((object)this, (intptr_t)MethodInfo_UI_SelectListPopup_SetupCategoryTabs_b__56_0);
			bVar5 = Enumerable.Any<SelectListPopup.ItemCategory>((System_Collections_Generic_IEnumerable_TSource__o)pSVar3, (System_Func_TSource__bool__o)__this_01);
			if (!bVar5) goto label_05cc573f;
		}
		pSVar7 = this.get_ThemePanel();
		__this_02 = new ElementStyle(0x14, 120.0, 20.0, pSVar7);
		pSVar3 = this._categorizedItems;
		if (pSVar3 != null) {
			local_48.GetEnumerator((List<object>)pSVar3);
			local_68._current = local_38;
			local_68._list = (List<T>)local_48._0_8_;
			local_68._index = local_48._8_4_;
			local_68._version = local_48._12_4_;
			local_48._0_8_ = null;
			local_48._8_8_ = &local_68;
			while(true) {
				bVar5 = local_68.MoveNext();
				pIVar6 = local_68._current;
				if (!bVar5) {
					local_68.Dispose() ;
					this.SetCategoryTabsEnabled(true);
					this.SyncCategoryTabs();
					return;
				}
				__this_03 = new SelectListPopup.c__DisplayClass56_0();
				if (__this_03 == null) {
					throw new NullReferenceException();
				}
				__this_03.__4__this = this;
				if (pIVar6 == null) {
					throw new NullReferenceException();
				}
				__this_03.categoryName = (String)pIVar6[1].klass;
				pUVar8 = this._categoryButtonContainer;
				if (pUVar8 == null) {
					throw new NullReferenceException();
				}
				parent = pUVar8.transform;
				pSVar7 = __this_03.categoryName;
				__this_04 = new UnityAction((object)__this_03, (intptr_t)MethodInfo_UI_SelectListPopup_c__DisplayClass56_0_SetupCategoryTabs_b__1);
				pUVar8 = ElementFactory.CreateDefaultButton(parent, __this_02, pSVar7, 140.0, 36.0, __this_04);
				__this_00 = this._categoryButtons;
				if (__this_00 == null) break;
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pUVar4 = __this_00._items;
				if (pUVar4 == null) break;
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pUVar4.Length) {
					__this_00._size = uVar2 + 1;
					pUVar4[(int)uVar2] = pUVar8;
				}
				else {
					__this_00.AddWithResize((object)pUVar8);
				}
			}
			throw new NullReferenceException();
		}
	label_05cc59f4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60049C4")]
	[Address(RVA = "0x5BC4C40", Offset = "0x5BC3C40", VA = "0x5BC4C40")]
	protected void SetCategoryTabsEnabled(bool enabled)
	{
		// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$SetCategoryTabsEnabled): clean
		Object x;
		bool bVar1;
		Transform pUVar2;
		GameObject pUVar3;
		HorizontalLayoutGroup __this_00;
		int value;

		pUVar2 = this.TopBar;
		bVar1 = ((Object)pUVar2 != null);
		if (bVar1) {
			pUVar2 = this.TopBar;
			if (pUVar2 == null) goto label_05cc4dc7;
			pUVar2 = pUVar2.Find("Label");
			bVar1 = ((Object)pUVar2 != null);
			if (bVar1) {
				if (pUVar2 == null) goto label_05cc4dc7;
				pUVar3 = pUVar2.gameObject;
				if (pUVar3 == null) goto label_05cc4dc7;
				pUVar3.SetActive(!enabled);
			}
			if (this._cachedTopBarAlignment != false) {
				pUVar2 = this.TopBar;
				if (pUVar2 == null) goto label_05cc4dc7;
				__this_00 = pUVar2.GetComponent<HorizontalLayoutGroup>();
				value = 4;
				if (!enabled) {
					value = this._defaultTopBarAlignment;
				}
				if (__this_00 == null) goto label_05cc4dc7;
				__this_00.childAlignment = value;
			}
		}
		x = (Object)this._categoryButtonContainer;
		bVar1 = (x != null);
		if (bVar1) {
			pUVar3 = this._categoryButtonContainer;
			if (pUVar3 == null) {
	label_05cc4dc7: ;
				throw new NullReferenceException();
			}
			pUVar3.SetActive(enabled);
		}
		if (enabled) {
			return;
		}
		this.ClearCategoryTabs();
		return;
	}

	[Token(Token = "0x60049C5")]
	[Address(RVA = "0x5BC6560", Offset = "0x5BC5560", VA = "0x5BC6560")]
	protected void ClearCategoryTabs()
	{
		// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$ClearCategoryTabs): 4 lines keep C-only constructs
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
		pSVar2 = this._categoryButtons;
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
			pSVar2 = this._categoryButtons;
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

	[Token(Token = "0x60049C6")]
	[Address(RVA = "0x5BC6960", Offset = "0x5BC5960", VA = "0x5BC6960")]
	protected void OnCategoryTabClick(string categoryName)
	{
		// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$OnCategoryTabClick): clean
		this._activeCategoryName = categoryName;
		this.SyncCategoryTabs();
		this.RefreshList();
		return;
	}

	[Token(Token = "0x60049C7")]
	[Address(RVA = "0x5BC6710", Offset = "0x5BC5710", VA = "0x5BC6710")]
	protected void SyncCategoryTabs()
	{
		// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$SyncCategoryTabs): 6 lines keep C-only constructs
		List<GameObject> __this_00;
		object __this_01;
		bool bVar1;
		Button __this_02;
		Transform pUVar2;
		Text pUVar3;
		String a;
		System_Collections_Generic_List_Enumerator_object__o local_68;
		byte[] local_48 = new byte[16];
		GameObject local_38;

		local_68._list = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._current = null;
		__this_00 = this._categoryButtons;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_48.GetEnumerator((List<object>)__this_00);
		local_68._current = (object)local_38;
		local_68._list = (List<T>)local_48._0_8_;
		local_68._index = local_48._8_4_;
		local_68._version = local_48._12_4_;
		local_48._0_8_ = null;
		local_48._8_8_ = &local_68;
		while(true) {
			bVar1 = local_68.MoveNext();
			__this_01 = local_68._current;
			if (!bVar1) {
				local_68.Dispose();
				return;
			}
			if ((GameObject)local_68._current == null) {
				throw new NullReferenceException();
			}
			__this_02 = local_68._current.GetComponent<Button>();
			pUVar2 = __this_01.transform;
			if (pUVar2 == null) {
				throw new NullReferenceException();
			}
			pUVar2 = pUVar2.Find("Text");
			if (pUVar2 == null) break;
			pUVar3 = pUVar2.GetComponent<Text>();
			if (pUVar3 == null) {
				throw new NullReferenceException();
			}
			a = pUVar3.get_text();
			bVar1 = (a == this._activeCategoryName);
			if (__this_02 == null) {
				throw new NullReferenceException();
			}
			__this_02.interactable = !bVar1;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60049C8")]
	[Address(RVA = "0x5BC4790", Offset = "0x5BC3790", VA = "0x5BC4790")]
	private void OnItemClick(string name)
	{
		// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$OnItemClick): 3 lines keep C-only constructs
		List<string> __this_00;
		BaseMenu pUVar1;
		MessagePopup __this_01;
		GameObject __this_02;
		Text pUVar2;
		ConfirmPopup __this_03;
		StringSetting __this_04;
		bool bVar3;
		SelectListPopup.c__DisplayClass61_0 __this_05;
		String pSVar4;
		UnityAction pUVar5;
		String* targetAddress;
		MethodInfo pMVar6;

		__this_05 = new SelectListPopup.c__DisplayClass61_0();
		if (__this_05 != null) {
			__this_05.__4__this = this;
			targetAddress = &__this_05.name;
			__this_05.name = name;
			if (this._isSave == false) {
				__this_04 = this.FinishSetting;
				if (__this_04 != null) {
					__this_04.Value = (object)*targetAddress;
					pUVar5 = this._onLoad;
					if (pUVar5 != null) {
						(*(code)pUVar5.invoke_impl)(pUVar5.method_code,pUVar5.method);
						this.Hide();
						return;
					}
				}
			}
			else {
				__this_00 = this._disallowedSave;
				if (__this_00 != null) {
					bVar3 = __this_00.Contains((object)*targetAddress);
					if (bVar3) {
						pUVar1 = UIManager.CurrentMenu;
						if (pUVar1 != null) {
							__this_01 = pUVar1.MessagePopup;
							pMVar6 = (MethodInfo *)"CannotOverwriteItem";
							pSVar4 = UIManager.GetLocale("Common", "CannotOverwriteItem", "", "", "");
							if (__this_01 != null) {
								__this_01.Show();
								__this_02 = __this_01._button;
								if (__this_02 != null) {
									__this_02.SetActive(true);
									pUVar2 = __this_01._label;
									if (pUVar2 != null) {
										pUVar2.set_text(pSVar4);
										return;
									}
								}
							}
						}
						goto label_05cc4a6d;
					}
				}
				pUVar1 = UIManager.CurrentMenu;
				if (pUVar1 != null) {
					__this_03 = pUVar1.ConfirmPopup;
					pMVar6 = (MethodInfo *)"";
					pSVar4 = UIManager.GetLocale("Common", "OverwriteItemConfirm", "", "", "");
					pUVar5 = new UnityAction((object)__this_05, (intptr_t)MethodInfo_UI_SelectListPopup_c__DisplayClass61_0_OnItemClick_b__0);
					if (__this_03 != null) {
						__this_03.Show(pSVar4, pUVar5, null);
						return;
					}
				}
			}
		}
	label_05cc4a6d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60049C9")]
	[Address(RVA = "0x5BC69A0", Offset = "0x5BC59A0", VA = "0x5BC69A0")]
	private void OnConfirmOverwrite(string name)
	{
		// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$OnConfirmOverwrite): clean
		StringSetting __this_00;
		UnityAction pUVar1;

		__this_00 = this.FinishSetting;
		if (__this_00 != null) {
			__this_00.Value = (object)name;
			pUVar1 = this._onSave;
			if (pUVar1 != null) {
				(*(code)pUVar1.invoke_impl)(pUVar1.method_code,pUVar1.method);
				this.Hide();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60049CA")]
	[Address(RVA = "0x5BC6A20", Offset = "0x5BC5A20", VA = "0x5BC6A20")]
	private void OnConfirmDelete(string name)
	{
		// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$OnConfirmDelete): clean
		StringSetting pSVar1;
		UnityAction pUVar2;
		List<string> __this_00;

		pSVar1 = this.FinishSetting;
		if (pSVar1 != null) {
			pSVar1.Value = (object)name;
			pUVar2 = this._onDelete;
			if (pUVar2 != null) {
				(*(code)pUVar2.invoke_impl)(pUVar2.method_code,pUVar2.method);
				pSVar1 = this.FinishSetting;
				if (pSVar1 != null) {
					pSVar1.Value = (object)**(ulong*)(g_data_07556758 + 0xb8);
					__this_00 = this._items;
					if (__this_00 != null) {
						__this_00.Remove((object)name);
						this.RefreshList();
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60049CB")]
	[Address(RVA = "0x5BC6AF0", Offset = "0x5BC5AF0", VA = "0x5BC6AF0")]
	private void OnDeleteClick(string name)
	{
		// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$OnDeleteClick): 1 lines keep C-only constructs
		BaseMenu pUVar1;
		ConfirmPopup __this_00;
		SelectListPopup.c__DisplayClass64_0 __this_01;
		String message;
		UnityAction __this_02;

		__this_01 = new SelectListPopup.c__DisplayClass64_0();
		if (__this_01 != null) {
			__this_01.__4__this = this;
			__this_01.name = name;
			pUVar1 = UIManager.CurrentMenu;
			if (pUVar1 != null) {
				__this_00 = pUVar1.ConfirmPopup;
				message = UIManager.GetLocaleCommon("DeleteWarning");
				__this_02 = new UnityAction((object)__this_01, (intptr_t)MethodInfo_UI_SelectListPopup_c__DisplayClass64_0_OnDeleteClick_b__0);
				if (__this_00 != null) {
					__this_00.Show(message, __this_02, null);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60049CC")]
	[Address(RVA = "0x5BC6C40", Offset = "0x5BC5C40", VA = "0x5BC6C40")]
	private void OnButtonClick(string name)
	{
		// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$OnButtonClick): 4 lines keep C-only constructs
		StringSetting pSVar1;
		BaseMenu pUVar2;
		List<string> pSVar3;
		ConfirmPopup __this_00;
		GameObject __this_01;
		Text pUVar4;
		bool bVar5;
		sbyte cVar6;
		String* ppSVar7;
		SelectListPopup.c__DisplayClass65_0 __this_02;
		Func<string, bool> pSVar8;
		UnityAction pUVar9;
		String pSVar10;
		MessagePopup __this_03;
		MethodInfo pMVar11;

		bVar5 = (name == "Back");
		if (bVar5) goto label_05cc6d46;
		bVar5 = (name == "Save");
		if (!bVar5) {
			return;
		}
		pSVar1 = this.FinishSetting;
		if (pSVar1 == null) goto label_05cc70d7;
		bVar5 = (pSVar1._value == (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (bVar5) {
			pUVar2 = UIManager.CurrentMenu;
			if (pUVar2 == null) goto label_05cc70d7;
			__this_03 = pUVar2.MessagePopup;
			ppSVar7 = &"EmptyName";
	label_05cc704b: ;
			pMVar11 = (MethodInfo)*ppSVar7;
			pSVar10 = UIManager.GetLocale("Common", (String)pMVar11, "", "", "");
			if (__this_03 != null) {
				__this_03.Show();
				__this_01 = __this_03._button;
				if (__this_01 != null) {
					__this_01.SetActive(true);
					pUVar4 = __this_03._label;
					if (pUVar4 != null) {
						pUVar4.set_text(pSVar10);
						return;
					}
				}
			}
		}
		else {
			__this_02 = new SelectListPopup.c__DisplayClass65_0();
			if (__this_02 == null) goto label_05cc70d7;
			__this_02.__4__this = this;
			pSVar3 = this._items;
			pSVar8 = new Func<string, bool>((object)this, (intptr_t)MethodInfo_UI_SelectListPopup_OnButtonClick_b__65_0);
			pSVar10 = Enumerable.FirstOrDefault<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar3, (System_Func_TSource__bool__o)pSVar8);
			__this_02.existing = pSVar10;
			pSVar3 = this._disallowedSave;
			if (pSVar3 != null) {
				pSVar1 = this.FinishSetting;
				if (pSVar1 == null) goto label_05cc70d7;
				bVar5 = pSVar3.Contains((object)pSVar1._value);
				if (bVar5) {
					pUVar2 = UIManager.CurrentMenu;
					if (pUVar2 == null) goto label_05cc70d7;
					__this_03 = pUVar2.MessagePopup;
					ppSVar7 = &"CannotOverwriteItem";
					goto label_05cc704b;
				}
			}
			pSVar8 = this._isValidName;
			if (pSVar8 != null) {
				pSVar1 = this.FinishSetting;
				if (pSVar1 == null) goto label_05cc70d7;
				cVar6 = (*(code)pSVar8.invoke_impl)(pSVar8.method_code,pSVar1._value,pSVar8.method);
				if (cVar6 == false) {
					pUVar2 = UIManager.CurrentMenu;
					if (pUVar2 == null) goto label_05cc70d7;
					__this_03 = pUVar2.MessagePopup;
					ppSVar7 = &"InvalidName";
					goto label_05cc704b;
				}
			}
			if (__this_02.existing == null) {
				pUVar9 = this._onSave;
				if (pUVar9 != null) {
					(*(code)pUVar9.invoke_impl)(pUVar9.method_code,pUVar9.method);
	label_05cc6d46: ;
					this.Hide();
					return;
				}
			}
			else {
				pUVar2 = UIManager.CurrentMenu;
				if (pUVar2 != null) {
					__this_00 = pUVar2.ConfirmPopup;
					pMVar11 = (MethodInfo *)"";
					pSVar10 = UIManager.GetLocale("Common", "OverwriteItemConfirm", "", "", "");
					pUVar9 = new UnityAction((object)__this_02, (intptr_t)MethodInfo_UI_SelectListPopup_c__DisplayClass65_0_OnButtonClick_b__1);
					if (__this_00 != null) {
						__this_00.Show(pSVar10, pUVar9, null);
						return;
					}
				}
			}
		}
	label_05cc70d7: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60049CD")]
	[Address(RVA = "0x5BC70F0", Offset = "0x5BC60F0", VA = "0x5BC70F0")]
	public SelectListPopup()
	{
		// Lifted from source/cpp/UI/SelectListPopup.c (UI.SelectListPopup$$.ctor): clean
		String defaultValue;
		List<GameObject> pSVar1;
		List<string> __this_00;
		MethodInfo method_00;

		pSVar1 = new List<GameObject>();
		this._itemButtons = pSVar1;
		pSVar1 = new List<GameObject>();
		this._categoryButtons = pSVar1;
		pSVar1 = new List<GameObject>();
		this._saveElements = pSVar1;
		__this_00 = new List<string>();
		this._items = __this_00;
		this._activeCategoryName = (String)**(ulong*)(g_data_07556758 + 0xb8);
		defaultValue = (String)**(ulong*)(g_data_07556758 + 0xb8);
		method_00 = new StringSetting(defaultValue, 0x7fffffff);
		this.FinishSetting = (StringSetting)method_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/SelectListPopup.c.

	// UI.SelectListPopup.<>c__DisplayClass47_0$$.ctor: clean
	private void c__DisplayClass47_0__ctor()
	{
		base();
		return;
	}

	// UI.SelectListPopup.<>c__DisplayClass52_0$$.ctor: clean
	private void c__DisplayClass52_0__ctor()
	{
		base();
		return;
	}

	// UI.SelectListPopup.<>c__DisplayClass53_0$$.ctor: clean
	private void c__DisplayClass53_0__ctor()
	{
		base();
		return;
	}

	// UI.SelectListPopup.<>c__DisplayClass56_0$$.ctor: clean
	private void c__DisplayClass56_0__ctor()
	{
		base();
		return;
	}

	// UI.SelectListPopup.<>c__DisplayClass61_0$$.ctor: clean
	private void c__DisplayClass61_0__ctor()
	{
		base();
		return;
	}

	// UI.SelectListPopup.<>c__DisplayClass64_0$$.ctor: clean
	private void c__DisplayClass64_0__ctor()
	{
		base();
		return;
	}

	// UI.SelectListPopup.<>c__DisplayClass65_0$$.ctor: clean
	private void c__DisplayClass65_0__ctor()
	{
		base();
		return;
	}

	// UI.SelectListPopup$$<Setup>b__45_0: clean
	private void Setup_b__45_0()
	{
		this.RefreshList();
		return;
	}

	// UI.SelectListPopup$$<Setup>b__45_1: clean
	private void Setup_b__45_1()
	{
		this.OnSearchEndEdit();
		return;
	}

	// UI.SelectListPopup$$<Setup>b__45_2: clean
	private void Setup_b__45_2()
	{


		this.OnButtonClick("Save");
		return;
	}

	// UI.SelectListPopup$$<Setup>b__45_3: clean
	private void Setup_b__45_3()
	{


		this.OnButtonClick("Back");
		return;
	}

	// UI.SelectListPopup$$<GetActiveCategoryItems>b__55_0: clean
	private bool GetActiveCategoryItems_b__55_0(SelectListPopup.ItemCategory x)
	{
		bool bVar1;

		if (x == null) {
			throw new NullReferenceException();
		}
		bVar1 = (x.Name == this._activeCategoryName);
		return bVar1;
	}

	// UI.SelectListPopup$$<SetupCategoryTabs>b__56_0: clean
	private bool SetupCategoryTabs_b__56_0(SelectListPopup.ItemCategory x)
	{
		bool bVar1;

		if (x == null) {
			throw new NullReferenceException();
		}
		bVar1 = (x.Name == this._activeCategoryName);
		return bVar1;
	}

	// UI.SelectListPopup$$<OnButtonClick>b__65_0: clean
	private bool OnButtonClick_b__65_0(String item)
	{
		StringSetting pSVar1;
		bool bVar2;

		pSVar1 = this.FinishSetting;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		bVar2 = String.Equals(item, pSVar1._value, 5);
		return bVar2;
	}

	// UI.SelectListPopup.<>c__DisplayClass47_0$$<OnSearchEndEdit>b__0: clean
	private bool c__DisplayClass47_0__OnSearchEndEdit_b__0(String item)
	{
		int iVar1;
		String __this_00;

		if (item != null) {
			__this_00 = item.ToLowerInvariant();
			if (__this_00 != null) {
				iVar1 = __this_00.IndexOf(this.query, 0, __this_00._stringLength, 4);
				return -1 < iVar1;
			}
		}
		throw new NullReferenceException();
	}

	// UI.SelectListPopup.<>c__DisplayClass52_0$$<RefreshList>b__0: clean
	private bool c__DisplayClass52_0__RefreshList_b__0(String item)
	{
		bool bVar1;
		String __this_00;

		if (item != null) {
			__this_00 = item.ToLowerInvariant();
			if (__this_00 != null) {
				return bVar1;
			}
		}
		throw new NullReferenceException();
	}

	// UI.SelectListPopup.<>c__DisplayClass52_0$$<RefreshList>b__1: clean
	private bool c__DisplayClass52_0__RefreshList_b__1(String item)
	{
		bool bVar1;
		String __this_00;

		if (item != null) {
			__this_00 = item.ToLowerInvariant();
			if (__this_00 != null) {
				return bVar1;
			}
		}
		throw new NullReferenceException();
	}

	// UI.SelectListPopup.<>c__DisplayClass53_0$$<CreateItemButton>b__0: clean
	private void c__DisplayClass53_0__CreateItemButton_b__0()
	{
		SelectListPopup __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnItemClick(this.item);
		return;
	}

	// UI.SelectListPopup.<>c__DisplayClass53_0$$<CreateItemButton>b__1: clean
	private void c__DisplayClass53_0__CreateItemButton_b__1()
	{
		SelectListPopup __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnDeleteClick(this.item);
		return;
	}

	// UI.SelectListPopup.<>c__DisplayClass56_0$$<SetupCategoryTabs>b__1: clean
	private void c__DisplayClass56_0__SetupCategoryTabs_b__1()
	{
		SelectListPopup __this_00;
		MethodInfo method_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		method_00 = (MethodInfo)this.categoryName;
		__this_00._activeCategoryName = (String)method_00;
		__this_00.SyncCategoryTabs();
		__this_00.RefreshList();
		return;
	}

	// UI.SelectListPopup.<>c__DisplayClass61_0$$<OnItemClick>b__0: clean
	private void c__DisplayClass61_0__OnItemClick_b__0()
	{
		SelectListPopup pUVar1;
		String value;
		StringSetting __this_00;
		UnityAction pUVar2;

		pUVar1 = this.__4__this;
		if (pUVar1 != null) {
			value = this.name;
			__this_00 = pUVar1.FinishSetting;
			if (__this_00 != null) {
				__this_00.Value = (object)value;
				pUVar2 = pUVar1._onSave;
				if (pUVar2 != null) {
					(*(code)pUVar2.invoke_impl)(pUVar2.method_code,pUVar2.method);
					pUVar1.Hide();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// UI.SelectListPopup.<>c__DisplayClass64_0$$<OnDeleteClick>b__0: clean
	private void c__DisplayClass64_0__OnDeleteClick_b__0()
	{
		SelectListPopup __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnConfirmDelete(this.name);
		return;
	}

	// UI.SelectListPopup.<>c__DisplayClass65_0$$<OnButtonClick>b__1: clean
	private void c__DisplayClass65_0__OnButtonClick_b__1()
	{
		SelectListPopup pUVar1;
		String value;
		StringSetting __this_00;
		UnityAction pUVar2;

		pUVar1 = this.__4__this;
		if (pUVar1 != null) {
			value = this.existing;
			__this_00 = pUVar1.FinishSetting;
			if (__this_00 != null) {
				__this_00.Value = (object)value;
				pUVar2 = pUVar1._onSave;
				if (pUVar2 != null) {
					(*(code)pUVar2.invoke_impl)(pUVar2.method_code,pUVar2.method);
					pUVar1.Hide();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}
}
