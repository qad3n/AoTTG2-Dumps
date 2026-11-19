// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorAddObjectPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorAddObjectPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorAddObjectPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000894")]
internal class MapEditorAddObjectPopup : BasePopup
{
	[Token(Token = "0x4002B32")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public StringSetting Search;

	[Token(Token = "0x4002B33")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _searchInput;

	[Token(Token = "0x17000E52")]
	protected override string Title
	{
		[Token(Token = "0x600518B")]
		[Address(RVA = "0x5C60090", Offset = "0x5C5F090", VA = "0x5C60090", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddObjectPopup.c (UI.MapEditorAddObjectPopup$$get_Title): clean
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
	}

	[Token(Token = "0x17000E53")]
	protected override float Width
	{
		[Token(Token = "0x600518C")]
		[Address(RVA = "0x5C600B0", Offset = "0x5C5F0B0", VA = "0x5C600B0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddObjectPopup.c (UI.MapEditorAddObjectPopup$$get_Width): clean
			return 1155.0;
		}
	}

	[Token(Token = "0x17000E54")]
	protected override float Height
	{
		[Token(Token = "0x600518D")]
		[Address(RVA = "0x5C600C0", Offset = "0x5C5F0C0", VA = "0x5C600C0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddObjectPopup.c (UI.MapEditorAddObjectPopup$$get_Height): clean
			return 865.0;
		}
	}

	[Token(Token = "0x17000E55")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x600518E")]
		[Address(RVA = "0x5C600D0", Offset = "0x5C5F0D0", VA = "0x5C600D0", Slot = "16")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddObjectPopup.c (UI.MapEditorAddObjectPopup$$get_CategoryPanel): clean
			return true;
		}
	}

	[Token(Token = "0x17000E56")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x600518F")]
		[Address(RVA = "0x5C600E0", Offset = "0x5C5F0E0", VA = "0x5C600E0", Slot = "42")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddObjectPopup.c (UI.MapEditorAddObjectPopup$$get_CategoryButtons): clean
			return true;
		}
	}

	[Token(Token = "0x17000E57")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6005190")]
		[Address(RVA = "0x5C600F0", Offset = "0x5C5F0F0", VA = "0x5C600F0", Slot = "36")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddObjectPopup.c (UI.MapEditorAddObjectPopup$$get_TopBarHeight): clean
			return 65.0;
		}
	}

	[Token(Token = "0x17000E58")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x6005191")]
		[Address(RVA = "0x5C60100", Offset = "0x5C5F100", VA = "0x5C60100", Slot = "19")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddObjectPopup.c (UI.MapEditorAddObjectPopup$$get_DefaultCategoryPanel): clean
			return "General";
		}
	}

	[Token(Token = "0x17000E59")]
	protected virtual bool TwoRows
	{
		[Token(Token = "0x6005192")]
		[Address(RVA = "0x5C60130", Offset = "0x5C5F130", VA = "0x5C60130", Slot = "62")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddObjectPopup.c (UI.MapEditorAddObjectPopup$$get_TwoRows): clean
			return false;
		}
	}

	[Token(Token = "0x6005193")]
	[Address(RVA = "0x5C60140", Offset = "0x5C5F140", VA = "0x5C60140", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/MapEditorAddObjectPopup.c (UI.MapEditorAddObjectPopup$$Setup): 2 lines keep C-only constructs
		Transform pUVar1;
		StringSetting setting;
		String pSVar2;
		ElementStyle __this_00;
		UnityAction pUVar3;
		GameObject __this_01;
		InputSettingElement pUVar4;
		HorizontalLayoutGroup pUVar5;
		float fVar6;

		this.Setup(parent);
		pSVar2 = this.get_ThemePanel();
		__this_00 = new ElementStyle(0x18, 70.0, 20.0, pSVar2);
		pUVar1 = this.BottomBar;
		setting = this.Search;
		pSVar2 = UIManager.GetLocaleCommon("Search");
		pUVar3 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorAddObjectPopup_Setup_b__18_0);
		__this_01 = ElementFactory.CreateInputSetting(pUVar1, __this_00, (BaseSetting)setting, pSVar2, "", 200.0, 40.0, false, null, pUVar3, null, null);
		if (__this_01 != null) {
			pUVar4 = __this_01.GetComponent<InputSettingElement>();
			this._searchInput = pUVar4;
			pUVar4 = this._searchInput;
			if (pUVar4 != null) {
				pUVar5 = pUVar4.GetComponent<HorizontalLayoutGroup>();
				if (pUVar5 != null) {
					pUVar5.spacing = 5.0;
					pUVar1 = this.BottomBar;
					pSVar2 = UIManager.GetLocaleCommon("Back");
					pUVar3 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorAddObjectPopup_Setup_b__18_1);
					ElementFactory.CreateTextButton(pUVar1, __this_00, pSVar2, 0.0, pUVar3);
					pUVar1 = this.BottomBar;
					if (pUVar1 != null) {
						pUVar5 = pUVar1.GetComponent<HorizontalLayoutGroup>();
						fVar6 = this.get_Width();
						if (pUVar5 != null) {
							pUVar5.spacing = fVar6 + -365.0;
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005194")]
	[Address(RVA = "0x5C60400", Offset = "0x5C5F400", VA = "0x5C60400", Slot = "63")]
	protected virtual string[] GetCategories()
	{
		// Lifted from source/cpp/UI/MapEditorAddObjectPopup.c (UI.MapEditorAddObjectPopup$$GetCategories): clean
		String[] pSVar1;

		pSVar1 = (String[])new string[0xb];
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		if ((int)pSVar1.Length != 0) {
			pSVar1[0] = "All";
			if ((pSVar1.Length & 0xfffffffe) != 0) {
				pSVar1[1] = "General";
				if (2 < (uint)pSVar1.Length) {
					pSVar1[2] = "Interact";
					if ((pSVar1.Length & 0xfffffffc) != 0) {
						pSVar1[3] = "Geometry";
						if (4 < (uint)pSVar1.Length) {
							pSVar1[4] = "Buildings";
							if (5 < (uint)pSVar1.Length) {
								pSVar1[5] = "Nature";
								if (6 < (uint)pSVar1.Length) {
									pSVar1[6] = "Decor";
									if ((pSVar1.Length & 0xfffffff8) != 0) {
										pSVar1[7] = "Arenas";
										if (8 < (uint)pSVar1.Length) {
											pSVar1[8] = "Terrain";
											if (9 < (uint)pSVar1.Length) {
												pSVar1[9] = "FX";
												if (10 < (uint)pSVar1.Length) {
													pSVar1[10] = "Custom";
													return pSVar1;
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
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6005195")]
	[Address(RVA = "0x5C60640", Offset = "0x5C5F640", VA = "0x5C60640", Slot = "32")]
	public override float GetPanelVerticalOffset()
	{
		// Lifted from source/cpp/UI/MapEditorAddObjectPopup.c (UI.MapEditorAddObjectPopup$$GetPanelVerticalOffset): clean
		bool bVar1;

		bVar1 = this.get_TwoRows();
		if (bVar1) {
			return -32.5;
		}
		return 0.0;
	}

	[Token(Token = "0x6005196")]
	[Address(RVA = "0x5C60670", Offset = "0x5C5F670", VA = "0x5C60670", Slot = "44")]
	protected override void SetupTopButtons()
	{
		// Lifted from source/cpp/UI/MapEditorAddObjectPopup.c (UI.MapEditorAddObjectPopup$$SetupTopButtons): 15 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		bool bVar2;
		String pSVar3;
		HorizontalLayoutGroup pUVar4;
		GameObject pUVar5;
		VerticalLayoutGroup __this_00;
		GameObject __this_01;
		String[] pSVar6;
		System_Collections_Generic_List_TSource__o items;
		System_Collections_Generic_List_List_T___o __this_02;
		List<object> pSVar7;
		MapEditorAddObjectPopup.c__DisplayClass21_0 pUVar8;
		Transform pUVar9;
		UnityAction pUVar10;
		GameObject pUVar11;
		Button pUVar12;
		MapEditorAddObjectPopup.c__DisplayClass21_2 __this_03;
		MapEditorAddObjectPopup.c__DisplayClass21_1 pUVar13;
		MapEditorAddObjectPopup.c__DisplayClass21_1 targetAddress;
		MapEditorAddObjectPopup.c__DisplayClass21_0 targetAddress_00;
		ulong uVar14;
		byte[] auStack_78 = new byte[8];
		String pSStack_68;
		byte[] auStack_58 = new byte[16];
		String pSStack_48;
		ElementStyle pUStack_40;
		System_Collections_Generic_List_List_T___o pSStack_38;

		auStack_78 = (byte[])0x0;
		pSStack_68 = null;
		pSVar3 = this.get_ThemePanel();
		pUStack_40 = new ElementStyle(0x14, 120.0, 20.0, pSVar3);
		bVar2 = this.get_TwoRows();
		if (bVar2) {
			pUVar9 = this.TopBar;
			if (pUVar9 != null) {
				pUVar4 = pUVar9.GetComponent<HorizontalLayoutGroup>();
				Object.DestroyImmediate((Object)pUVar4);
				pUVar9 = this.TopBar;
				if (((pUVar9 != null) &&(pUVar5 = pUVar9.gameObject , pUVar5 != null)) &&(__this_00 = pUVar5.AddComponent<VerticalLayoutGroup>(), __this_00 != null)) {
					__this_00.childAlignment = 4;
					__this_00.childControlHeight = true;
					__this_00.childControlWidth = true;
					__this_00.childForceExpandHeight = true;
					__this_00.childForceExpandWidth = true;
					__this_00.spacing = -30.0;
					pUVar5 = this.CreateRow();
					__this_01 = this.CreateRow();
					pSVar6 = this.GetCategories();
					items = Enumerable.ToList<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar6);
					__this_02 = Util.GroupBuckets<string>((List<T>)items, 2);
					if ((__this_02 != null) &&(pSVar7 = (List<object>)__this_02.get_Item(0), pSVar7 != null)) {
						auStack_58.GetEnumerator(pSVar7);
						pSStack_68 = pSStack_48;
						auStack_78 = (byte[])auStack_58._0_8_;
						auStack_58._0_8_ = null;
						auStack_58._8_8_ = auStack_78;
						pSStack_38 = __this_02;
						if (pUVar5 == null) {
							bVar2 = auStack_78.MoveNext();
							if (bVar2) {
								pUVar8 = new MapEditorAddObjectPopup.c__DisplayClass21_0();
								if (pUVar8 != null) {
									pUVar8.__4__this = this;
									pUVar8.buttonName = pSStack_68;
									throw new NullReferenceException();
								}
	label_05d60ec3: ;
								throw new NullReferenceException();
							}
						}
						else {
							while (bVar2 = auStack_78.MoveNext()) {
								pUVar8 = new MapEditorAddObjectPopup.c__DisplayClass21_0();
								if (pUVar8 == null) goto label_05d60ec3;
								pUVar8.__4__this = this;
								targetAddress_00 = &pUVar8.fields;
								pUVar8.buttonName = pSStack_68;
								pUVar9 = pUVar5.transform;
								pSVar3 = targetAddress_00.buttonName;
								pUVar10 = new UnityAction((object)pUVar8, (intptr_t) MethodInfo_UI_MapEditorAddObjectPopup_c__DisplayClass21_0_SetupTopButtons_b__0);
								pUVar11 = ElementFactory.CreateCategoryButton(pUVar9, pUStack_40, pSVar3, pUVar10);
								if (pUVar11 == null) {
									throw new NullReferenceException();
								}
								pSVar1 = (Dictionary<object, object>)this._topButtons ;
								pSVar3 = targetAddress_00.buttonName;
								pUVar12 = pUVar11.GetComponent<Button>();
								if (pSVar1 == null) {
									throw new NullReferenceException();
								}
								pSVar1.Add((object)pSVar3, (object)pUVar12);
							}
						}
						auStack_78.Dispose();
						pSVar7 = (List<object>)pSStack_38.get_Item(1);
						if (pSVar7 != null) {
							auStack_58.GetEnumerator(pSVar7);
							pSStack_68 = pSStack_48;
							auStack_78 = (byte[])auStack_58._0_8_;
							auStack_58._0_8_ = null;
							auStack_58._8_8_ = auStack_78;
							if (__this_01 == null) {
								bVar2 = auStack_78.MoveNext();
								if (bVar2) {
									pUVar13 = new MapEditorAddObjectPopup.c__DisplayClass21_1();
									if (pUVar13 != null) {
										pUVar13.__4__this = this;
										pUVar13.buttonName = pSStack_68;
										throw new NullReferenceException();
									}
	label_05d60ee9: ;
									throw new NullReferenceException();
								}
							}
							else {
								while (bVar2 = auStack_78.MoveNext()) {
									pUVar13 = new MapEditorAddObjectPopup.c__DisplayClass21_1();
									if (pUVar13 == null) goto label_05d60ee9;
									pUVar13.__4__this = this;
									targetAddress = &pUVar13.fields;
									pUVar13.buttonName = pSStack_68;
									pUVar9 = __this_01.transform;
									pSVar3 = targetAddress.buttonName;
									pUVar10 = new UnityAction((object)pUVar13, (intptr_t) MethodInfo_UI_MapEditorAddObjectPopup_c__DisplayClass21_1_SetupTopButtons_b__1);
									pUVar11 = ElementFactory.CreateCategoryButton(pUVar9, pUStack_40, pSVar3, pUVar10);
									if (pUVar11 == null) {
										throw new NullReferenceException();
									}
									pSVar1 = (Dictionary<object, object>)this._topButtons;
									pSVar3 = targetAddress.buttonName;
									pUVar12 = pUVar11.GetComponent<Button>();
									if (pSVar1 == null) {
										throw new NullReferenceException();
									}
									pSVar1.Add((object)pSVar3, (object)pUVar12);
								}
							}
							auStack_78.Dispose();
							Canvas.ForceUpdateCanvases();
							if (((pUVar5 != null) &&(pUVar4 = pUVar5.GetComponent<HorizontalLayoutGroup>(), pUVar4 != null)) &&((pUVar4.spacing = 80.0 , __this_01 != null &&(pUVar4 = __this_01.GetComponent<HorizontalLayoutGroup>(), pUVar4 != null)))) {
								pUVar4.spacing = 80.0;
								return;
							}
						}
					}
				}
			}
		}
		else {
			pSVar6 = this.GetCategories();
			if (pSVar6 != null) {
				if (0 < (int)pSVar6.Length) {
					uVar14 = 0;
					do {
						__this_03 = new MapEditorAddObjectPopup.c__DisplayClass21_2();
						if (__this_03 == null) goto label_05d60e84;
						__this_03.__4__this = this;
						if ((uint)pSVar6.Length <= uVar14) {
							throw new IndexOutOfRangeException();
						}
						__this_03.buttonName = pSVar6[uVar14];
						pUVar9 = this.TopBar;
						pSVar3 = __this_03.buttonName;
						pUVar10 = new UnityAction((object)__this_03, (intptr_t)MethodInfo_UI_MapEditorAddObjectPopup_c__DisplayClass21_2_SetupTopButtons_b__2);
						pUVar5 = ElementFactory.CreateCategoryButton(pUVar9, pUStack_40, pSVar3, pUVar10) ;
						if (pUVar5 == null) goto label_05d60e84;
						pSVar1 = (Dictionary<object, object>)this._topButtons;
						pSVar3 = __this_03.buttonName;
						pUVar12 = pUVar5.GetComponent<Button>();
						if (pSVar1 == null) goto label_05d60e84;
						pSVar1.Add((object)pSVar3, (object)pUVar12) ;
						uVar14 = uVar14 + 1;
					} while ((long)uVar14 < (long)(int)pSVar6.Length);
				}
				this.SetupTopButtons();
				return;
			}
		}
	label_05d60e84: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005197")]
	[Address(RVA = "0x5C61030", Offset = "0x5C60030", VA = "0x5C61030")]
	protected GameObject CreateRow()
	{
		// Lifted from source/cpp/UI/MapEditorAddObjectPopup.c (UI.MapEditorAddObjectPopup$$CreateRow): clean
		GameObject __this_00;
		Transform __this_01;
		HorizontalLayoutGroup __this_02;

		__this_00 = new GameObject();
		if (__this_00 != null) {
			__this_01 = __this_00.transform;
			if (__this_01 != null) {
				__this_01.SetParent(this.TopBar);
				__this_02 = __this_00.AddComponent<HorizontalLayoutGroup>();
				if (__this_02 != null) {
					__this_02.childAlignment = 4;
					__this_02.childControlHeight = true;
					__this_02.childControlWidth = true;
					__this_02.childForceExpandHeight = false;
					__this_02.childForceExpandWidth = false;
					return __this_00;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005198")]
	[Address(RVA = "0x5C61140", Offset = "0x5C60140", VA = "0x5C61140")]
	protected void OnTopBarButtonClick(string name)
	{
		// Lifted from source/cpp/UI/MapEditorAddObjectPopup.c (UI.MapEditorAddObjectPopup$$OnTopBarButtonClick): clean
		StringSetting __this_00;
		InputSettingElement pUVar1;
		bool bVar2;

		__this_00 = this.Search;
		if (__this_00 == null) {
	label_05d61213: ;
			throw new NullReferenceException();
		}
		__this_00.Value = (object)**(ulong*)(g_data_07556758 + 0xb8);
		pUVar1 = this._searchInput;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._searchInput;
			if (pUVar1 == null) goto label_05d61213;
			pUVar1.SyncElement();
		}
		this.SetCategoryPanel(name);
		return;
	}

	[Token(Token = "0x6005199")]
	[Address(RVA = "0x5C61220", Offset = "0x5C60220", VA = "0x5C61220", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
		// Lifted from source/cpp/UI/MapEditorAddObjectPopup.c (UI.MapEditorAddObjectPopup$$RegisterCategoryPanels): 3 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		Il2CppType handle;
		object key;
		bool bVar2;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_00;
		Type value;
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o SStack_58;
		byte puStack_38;

		SStack_58._dictionary = null;
		SStack_58._index = 0;
		SStack_58._version = 0;
		SStack_58._currentKey = null;
		pSVar1 = (Dictionary<object, object>)this._topButtons;
		if (pSVar1 != null) {
			__this_00 = pSVar1.Keys;
			if (__this_00 != null) {
				SStack_58 = __this_00.GetEnumerator();
				puStack_38 = (byte)&SStack_58;
				while(true) {
					bVar2 = SStack_58.MoveNext();
					key = SStack_58._currentKey;
					handle = TypeRef_UI_MapEditorAddObjectPanel;
					if (!bVar2) {
						SStack_58.Dispose();
						return;
					}
					pSVar1 = (Dictionary<object, object>)this._categoryPanelTypes;
					value = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
					if (pSVar1 == null) break;
					pSVar1.Add(key, (object)value);
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600519A")]
	[Address(RVA = "0x5C613F0", Offset = "0x5C603F0", VA = "0x5C613F0")]
	private void OnBottomBarButtonClick(string name)
	{
		// Lifted from source/cpp/UI/MapEditorAddObjectPopup.c (UI.MapEditorAddObjectPopup$$OnBottomBarButtonClick): clean
		this.Hide();
		return;
	}

	[Token(Token = "0x600519B")]
	[Address(RVA = "0x5C61410", Offset = "0x5C60410", VA = "0x5C61410")]
	public MapEditorAddObjectPopup()
	{
		// Lifted from source/cpp/UI/MapEditorAddObjectPopup.c (UI.MapEditorAddObjectPopup$$.ctor): clean
		String defaultValue;
		StringSetting __this_00;

		defaultValue = (String)**(ulong*)(g_data_07556758 + 0xb8);
		__this_00 = new StringSetting(defaultValue, 0x7fffffff);
		this.Search = __this_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MapEditorAddObjectPopup.c.

	// UI.MapEditorAddObjectPopup.<>c__DisplayClass21_0$$.ctor: clean
	private void c__DisplayClass21_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorAddObjectPopup.<>c__DisplayClass21_1$$.ctor: clean
	private void c__DisplayClass21_1__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorAddObjectPopup.<>c__DisplayClass21_2$$.ctor: clean
	private void c__DisplayClass21_2__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorAddObjectPopup$$<Setup>b__18_0: clean
	private void Setup_b__18_0()
	{
		this.RebuildCategoryPanel();
		return;
	}

	// UI.MapEditorAddObjectPopup$$<Setup>b__18_1: clean
	private void Setup_b__18_1()
	{
		this.Hide();
		return;
	}

	// UI.MapEditorAddObjectPopup.<>c__DisplayClass21_0$$<SetupTopButtons>b__0: clean
	private void c__DisplayClass21_0__SetupTopButtons_b__0()
	{
		MapEditorAddObjectPopup __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnTopBarButtonClick(this.buttonName);
		return;
	}

	// UI.MapEditorAddObjectPopup.<>c__DisplayClass21_1$$<SetupTopButtons>b__1: clean
	private void c__DisplayClass21_1__SetupTopButtons_b__1()
	{
		MapEditorAddObjectPopup __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnTopBarButtonClick(this.buttonName);
		return;
	}

	// UI.MapEditorAddObjectPopup.<>c__DisplayClass21_2$$<SetupTopButtons>b__2: clean
	private void c__DisplayClass21_2__SetupTopButtons_b__2()
	{
		MapEditorAddObjectPopup __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnTopBarButtonClick(this.buttonName);
		return;
	}
}
