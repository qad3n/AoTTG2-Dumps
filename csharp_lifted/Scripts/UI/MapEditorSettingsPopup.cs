// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorSettingsPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorSettingsPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorSettingsPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x20008CD")]
internal class MapEditorSettingsPopup : BasePopup
{
	[Token(Token = "0x4002C7E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public string LocaleCategory;

	[Token(Token = "0x4002C7F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected List<SaveableSettingsContainer> _saveableSettings;

	[Token(Token = "0x17000EAF")]
	protected override string Title
	{
		[Token(Token = "0x60053E9")]
		[Address(RVA = "0x5C9B480", Offset = "0x5C9A480", VA = "0x5C9B480", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorSettingsPopup.c (UI.MapEditorSettingsPopup$$get_Title): clean
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
	}

	[Token(Token = "0x17000EB0")]
	protected override float Width
	{
		[Token(Token = "0x60053EA")]
		[Address(RVA = "0x5C9B4A0", Offset = "0x5C9A4A0", VA = "0x5C9B4A0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorSettingsPopup.c (UI.MapEditorSettingsPopup$$get_Width): clean
			return 1010.0;
		}
	}

	[Token(Token = "0x17000EB1")]
	protected override float Height
	{
		[Token(Token = "0x60053EB")]
		[Address(RVA = "0x5C9B4B0", Offset = "0x5C9A4B0", VA = "0x5C9B4B0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorSettingsPopup.c (UI.MapEditorSettingsPopup$$get_Height): clean
			return 630.0;
		}
	}

	[Token(Token = "0x17000EB2")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x60053EC")]
		[Address(RVA = "0x5C9B4C0", Offset = "0x5C9A4C0", VA = "0x5C9B4C0", Slot = "16")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorSettingsPopup.c (UI.MapEditorSettingsPopup$$get_CategoryPanel): clean
			return true;
		}
	}

	[Token(Token = "0x17000EB3")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x60053ED")]
		[Address(RVA = "0x5C9B4D0", Offset = "0x5C9A4D0", VA = "0x5C9B4D0", Slot = "42")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorSettingsPopup.c (UI.MapEditorSettingsPopup$$get_CategoryButtons): clean
			return true;
		}
	}

	[Token(Token = "0x17000EB4")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x60053EE")]
		[Address(RVA = "0x5C9B4E0", Offset = "0x5C9A4E0", VA = "0x5C9B4E0", Slot = "19")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorSettingsPopup.c (UI.MapEditorSettingsPopup$$get_DefaultCategoryPanel): clean
			return "General";
		}
	}

	[Token(Token = "0x60053EF")]
	[Address(RVA = "0x5C9B510", Offset = "0x5C9A510", VA = "0x5C9B510", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/MapEditorSettingsPopup.c (UI.MapEditorSettingsPopup$$Setup): 4 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<SaveableSettingsContainer> pSVar3;
		MapEditorSettings item;
		SaveableSettingsContainer[] pSVar4;
		InputSettings item_00;

		this.Setup(parent);
		this.SetupBottomButtons();
		pSVar3 = this._saveableSettings;
		if (pSVar3 != null) {
			item = SettingsManager.MapEditorSettings;
			piVar1 = &pSVar3._version;
			*piVar1 = *piVar1 + 1;
			pSVar4 = pSVar3._items;
			if (pSVar4 != null) {
				uVar2 = pSVar3._size;
				if (uVar2 < (uint)pSVar4.Length) {
					pSVar3._size = uVar2 + 1;
					pSVar4[(int)uVar2] = (SaveableSettingsContainer)item;
				}
				else {
					pSVar3.AddWithResize((object)item);
				}
				pSVar3 = this._saveableSettings;
				if (pSVar3 != null) {
					item_00 = SettingsManager.InputSettings;
					piVar1 = &pSVar3._version;
					*piVar1 = *piVar1 + 1;
					pSVar4 = pSVar3._items;
					if (pSVar4 != null) {
						uVar2 = pSVar3._size;
						if (uVar2 < (uint)pSVar4.Length) {
							pSVar3._size = uVar2 + 1;
							pSVar4[(int)uVar2] = (SaveableSettingsContainer)item_00;
							return;
						}
						pSVar3.AddWithResize((object)item_00);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60053F0")]
	[Address(RVA = "0x5C9B960", Offset = "0x5C9A960", VA = "0x5C9B960", Slot = "44")]
	protected override void SetupTopButtons()
	{
		// Lifted from source/cpp/UI/MapEditorSettingsPopup.c (UI.MapEditorSettingsPopup$$SetupTopButtons): 12 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		String[] pSVar3;
		Transform parent;
		Dictionary<object, object> __this_00;
		bool bVar5;
		String pSVar6;
		List<string> __this_01;
		MapEditorSettingsPopup.c__DisplayClass15_0 __this_02;
		String item;
		UnityAction __this_03;
		GameObject __this_04;
		Button value;
		MapEditorSettingsPopup.c__DisplayClass15_0 targetAddress;
		System_Collections_Generic_List_Enumerator_object__o SStack_68;
		byte[] auStack_50 = new byte[16];
		String pSStack_40;
		ElementStyle pUStack_38;

		SStack_68._list = null;
		SStack_68._index = 0;
		SStack_68._version = 0;
		SStack_68._current = null;
		pSVar6 = this.get_ThemePanel();
		pUStack_38 = new ElementStyle(0x1c, 120.0, 20.0, pSVar6);
		__this_01 = new List<string>();
		pSVar6 = "General";
		if (__this_01 != null) {
			piVar1 = &__this_01._version;
			*piVar1 = *piVar1 + 1;
			pSVar3 = __this_01._items;
			if (pSVar3 != null) {
				uVar2 = __this_01._size;
				if (uVar2 < (uint)pSVar3.Length) {
					__this_01._size = uVar2 + 1;
					pSVar3[(int)uVar2] = pSVar6;
				}
				else {
					__this_01.AddWithResize((object)pSVar6);
				}
				pSVar6 = "Keybinds";
				piVar1 = &__this_01._version;
				*piVar1 = *piVar1 + 1;
				pSVar3 = __this_01._items;
				if (pSVar3 != null) {
					uVar2 = __this_01._size;
					if (uVar2 < (uint)pSVar3.Length) {
						__this_01._size = uVar2 + 1;
						pSVar3[(int)uVar2] = pSVar6;
					}
					else {
						__this_01.AddWithResize((object)pSVar6);
					}
					auStack_50.GetEnumerator((List<object>)__this_01);
					SStack_68._current = (object)pSStack_40;
					SStack_68._list = (List<T>)auStack_50._0_8_;
					SStack_68._index = auStack_50._8_4_;
					SStack_68._version = auStack_50._12_4_;
					auStack_50._0_8_ = null;
					auStack_50._8_8_ = &SStack_68;
					while(true) {
						bVar5 = SStack_68.MoveNext();
						if (!bVar5) {
							SStack_68.Dispose();
							this.SetupTopButtons();
							return;
						}
						__this_02 = new MapEditorSettingsPopup.c__DisplayClass15_0();
						if (__this_02 == null) break;
						__this_02.__4__this = this;
						targetAddress = &__this_02.fields;
						__this_02.buttonName = (String)SStack_68._current;
						bVar5 = (targetAddress.buttonName == "MobileLayout");
						if (bVar5) {
							pSVar6 = UIManager.GetLocale("SettingsPopup", "Keybinds", "MobileLayout", "", "");
						}
						else {
							pSVar6 = this.LocaleCategory;
							item = String.Concat(targetAddress.buttonName, "Button");
							pSVar6 = UIManager.GetLocale(pSVar6, "Top", item, "", "");
						}
						parent = this.TopBar;
						__this_03 = new UnityAction((object)__this_02, (intptr_t)MethodInfo_UI_MapEditorSettingsPopup_c__DisplayClass15_0_SetupTopButtons_b__0);
						__this_04 = ElementFactory.CreateCategoryButton(parent, pUStack_38, pSVar6, __this_03);
						if (__this_04 == null) {
							throw new NullReferenceException();
						}
						__this_00 = (Dictionary<object, object>)this._topButtons;
						pSVar6 = targetAddress.buttonName;
						value = __this_04.GetComponent<Button>();
						if (__this_00 == null) {
							throw new NullReferenceException();
						}
						__this_00.Add((object)pSVar6, (object)value) ;
					}
					throw new NullReferenceException();
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60053F1")]
	[Address(RVA = "0x5C9BE80", Offset = "0x5C9AE80", VA = "0x5C9BE80", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
		// Lifted from source/cpp/UI/MapEditorSettingsPopup.c (UI.MapEditorSettingsPopup$$RegisterCategoryPanels): clean
		Dictionary<object, object> pSVar1;
		Il2CppType handle;
		Type pSVar2;

		handle = TypeRef_UI_MapEditorSettingsGeneralPanel;
		pSVar1 = (Dictionary<object, object>)this._categoryPanelTypes;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (pSVar1 != null) {
			pSVar1.Add((Il2CppObject *)"General", (object)pSVar2);
			pSVar1 = (Dictionary<object, object>)this._categoryPanelTypes;
			pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UI_MapEditorSettingsKeybindsPanel);
			if (pSVar1 != null) {
				pSVar1.Add((Il2CppObject *)"Keybinds", (object)pSVar2);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60053F2")]
	[Address(RVA = "0x5C9B640", Offset = "0x5C9A640", VA = "0x5C9B640")]
	private void SetupBottomButtons()
	{
		// Lifted from source/cpp/UI/MapEditorSettingsPopup.c (UI.MapEditorSettingsPopup$$SetupBottomButtons): 9 lines keep C-only constructs
		Transform parent;
		int fontSize;
		String pSVar1;
		ElementStyle __this_00;
		object pIVar2;
		UnityAction __this_01;
		MapEditorSettingsPopup.c__DisplayClass17_0 __this_02;
		ulong uVar3;

		fontSize = this.get_ButtonFontSize();
		pSVar1 = this.get_ThemePanel();
		__this_00 = new ElementStyle(fontSize, 120.0, 20.0, pSVar1);
		pIVar2 = new string[3];
		if (pIVar2 == null) {
	label_05d9b951: ;
			throw new NullReferenceException();
		}
		if (*(int)&pIVar2[1].monitor != 0) {
			pIVar2[2].klass = (Il2CppClass *)"Default";
			if (((ulong)pIVar2[1].monitor & 0xfffffffe) != 0) {
				pIVar2[2].monitor = "Save";
				if (2 < *(uint)&pIVar2[1].monitor) {
					pIVar2[3].klass = (Il2CppClass *)"Back";
					if (0 < *(int)&pIVar2[1].monitor) {
						uVar3 = 0;
						do {
							__this_02 = new MapEditorSettingsPopup.c__DisplayClass17_0();
							if (__this_02 == null) goto label_05d9b951;
							__this_02.__4__this = this;
							if (*(uint)&pIVar2[1].monitor <= uVar3) goto label_05d9b956;
							__this_02.buttonName = (String)(&pIVar2[2].klass)[uVar3];
							parent = this.BottomBar;
							pSVar1 = __this_02.buttonName;
							pSVar1 = UIManager.GetLocale("Common", pSVar1, "", "", "");
							__this_01 = new UnityAction((object)__this_02, (intptr_t) MethodInfo_UI_MapEditorSettingsPopup_c__DisplayClass17_0_SetupBottomButtons_b__0);
							ElementFactory.CreateTextButton(parent, __this_00, pSVar1, 0.0, __this_01);
							uVar3 = uVar3 + 1;
						} while ((long)uVar3 < (long)*(int)&pIVar2[1].monitor);
					}
					return;
				}
			}
		}
	label_05d9b956: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60053F3")]
	[Address(RVA = "0x5C9BF80", Offset = "0x5C9AF80", VA = "0x5C9BF80")]
	private void OnConfirmSetDefault()
	{
		// Lifted from source/cpp/UI/MapEditorSettingsPopup.c (UI.MapEditorSettingsPopup$$OnConfirmSetDefault): 9 lines keep C-only constructs
		byte bVar1;
		List<SaveableSettingsContainer> __this_00;
		Il2CppClass pIVar2;
		long plVar3;
		BaseMenu pUVar4;
		MessagePopup __this_01;
		object pIVar5;
		bool bVar6;
		String message;
		byte[] local_60 = new byte[16];
		object local_50;
		byte[] local_48 = new byte[16];
		object local_38;

		__this_00 = this._saveableSettings;
		if (__this_00 != null) {
			local_60.GetEnumerator((List<object>)__this_00);
			local_38 = local_50;
			local_48._0_8_ = local_60._0_8_;
			local_48._8_8_ = local_60._8_8_;
			local_60._0_8_ = null;
			local_60._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_48;
			while(true) {
				bVar6 = local_48.MoveNext();
				pIVar5 = local_38;
				if (!bVar6) break;
				if (local_38 == null) {
					throw new NullReferenceException();
				}
				pIVar2 = local_38.klass;
				bVar1 = (typeof(InputSettings)._2).typeHierarchyDepth;
				if (((pIVar2._2).typeHierarchyDepth < bVar1) ||((pIVar2._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InputSettings))) {
					(*pIVar2.vtable[4].methodPtr)(local_38,pIVar2.vtable[4].method);
				}
				else {
					plVar3 = local_38[6].monitor;
					if (plVar3 == null) {
						throw new NullReferenceException();
					}
					(**(code*)(*plVar3 + 0x178))(plVar3,*(ulong)(*plVar3 + 0x180));
				}
				pIVar2 = pIVar5.klass;
				(*pIVar2.vtable[0x12].methodPtr)(pIVar5,pIVar2.vtable[0x12].method);
			}
			local_48.Dispose();
			this.RebuildCategoryPanel();
			pUVar4 = UIManager.CurrentMenu;
			if (pUVar4 != null) {
				__this_01 = pUVar4.MessagePopup;
				message = UIManager.GetLocale(this.LocaleCategory, "Defaults", "ResetToast", "", "");
				if (__this_01 != null) {
					__this_01.Show(message, true);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60053F4")]
	[Address(RVA = "0x5C9C210", Offset = "0x5C9B210", VA = "0x5C9C210")]
	private void OnBottomBarButtonClick(string name)
	{
		// Lifted from source/cpp/UI/MapEditorSettingsPopup.c (UI.MapEditorSettingsPopup$$OnBottomBarButtonClick): 4 lines keep C-only constructs
		List<SaveableSettingsContainer> __this_00;
		BaseMenu pUVar1;
		ConfirmPopup __this_01;
		bool bVar2;
		String message;
		UnityAction __this_02;
		String title;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		byte local_38;

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		bVar2 = (name == "Save");
		if (bVar2) {
			__this_00 = this._saveableSettings;
			if (__this_00 == null) {
	label_05d9c4ec: ;
				throw new NullReferenceException();
			}
			local_58 = __this_00.GetEnumerator();
			local_38 = (byte)&local_58;
			while(true) {
				bVar2 = local_58.MoveNext();
				if (!bVar2) break;
				if (local_58._current == null) {
					throw new NullReferenceException();
				}
				(*(local_58._current).klass.vtable[0x12].methodPtr)(local_58._current,(local_58._current).klass.vtable[0x12].method);
			}
			local_58.Dispose();
			this.Hide();
		}
		else {
			bVar2 = (name == "Back");
			if (bVar2) {
				this.Hide();
				return;
			}
			bVar2 = (name == "Default");
			if (bVar2) {
				pUVar1 = UIManager.CurrentMenu;
				if (pUVar1 != null) {
					__this_01 = pUVar1.ConfirmPopup;
					message = UIManager.GetLocale(this.LocaleCategory, "Defaults", "Confirm", "", "");
					__this_02 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorSettingsPopup_OnBottomBarButtonClick_b__19_0);
					title = UIManager.GetLocale(this.LocaleCategory, "Defaults", "Title", "", "");
					if (__this_01 != null) {
						__this_01.Show(message, __this_02, title);
						return;
					}
				}
				goto label_05d9c4ec;
			}
		}
		return;
	}

	[Token(Token = "0x60053F5")]
	[Address(RVA = "0x5C9C560", Offset = "0x5C9B560", VA = "0x5C9C560", Slot = "22")]
	public override void Hide()
	{
		// Lifted from source/cpp/UI/MapEditorSettingsPopup.c (UI.MapEditorSettingsPopup$$Hide): 3 lines keep C-only constructs
		List<SaveableSettingsContainer> __this_00;
		bool bVar1;
		GameObject __this_01;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		byte local_20;

		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		__this_01 = this.gameObject;
		if (__this_01 == null) {
	label_05d9c676: ;
			throw new NullReferenceException();
		}
		bVar1 = __this_01.activeSelf;
		if (bVar1) {
			__this_00 = this._saveableSettings;
			if (__this_00 == null) goto label_05d9c676;
			local_48 = __this_00.GetEnumerator();
			local_20 = (byte)&local_48;
			while(true) {
				bVar1 = local_48.MoveNext();
				if (!bVar1) break;
				if (local_48._current == null) {
					throw new NullReferenceException();
				}
				(*(local_48._current).klass.vtable[0xc].methodPtr)(local_48._current,(local_48._current).klass.vtable[0xc].method);
			}
			local_48.Dispose();
		}
		this.Hide();
		return;
	}

	[Token(Token = "0x60053F6")]
	[Address(RVA = "0x5C9C6E0", Offset = "0x5C9B6E0", VA = "0x5C9C6E0")]
	public MapEditorSettingsPopup()
	{
		// Lifted from source/cpp/UI/MapEditorSettingsPopup.c (UI.MapEditorSettingsPopup$$.ctor): clean
		List<SaveableSettingsContainer> __this_00;

		this.LocaleCategory = "MapEditorSettings";
		__this_00 = new List<SaveableSettingsContainer>();
		this._saveableSettings = __this_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MapEditorSettingsPopup.c.

	// UI.MapEditorSettingsPopup.<>c__DisplayClass15_0$$.ctor: clean
	private void c__DisplayClass15_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorSettingsPopup.<>c__DisplayClass17_0$$.ctor: clean
	private void c__DisplayClass17_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorSettingsPopup$$<OnBottomBarButtonClick>b__19_0: clean
	private void OnBottomBarButtonClick_b__19_0()
	{
		this.OnConfirmSetDefault();
		return;
	}

	// UI.MapEditorSettingsPopup.<>c__DisplayClass15_0$$<SetupTopButtons>b__0: clean
	private void c__DisplayClass15_0__SetupTopButtons_b__0()
	{
		MapEditorSettingsPopup pUVar1;

		pUVar1 = this.__4__this;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.SetCategoryPanel(this.buttonName);
		return;
	}

	// UI.MapEditorSettingsPopup.<>c__DisplayClass17_0$$<SetupBottomButtons>b__0: clean
	private void c__DisplayClass17_0__SetupBottomButtons_b__0()
	{
		MapEditorSettingsPopup __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnBottomBarButtonClick(this.buttonName);
		return;
	}
}
