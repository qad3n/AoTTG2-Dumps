// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorAddVariantPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorAddVariantPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorAddVariantPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000898")]
internal class MapEditorAddVariantPopup : BasePopup
{
	[Token(Token = "0x4002B3A")]
	protected const int Columns = 8;

	[Token(Token = "0x4002B3B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected List<GameObject> _rows;

	[Token(Token = "0x17000E5A")]
	protected override string Title
	{
		[Token(Token = "0x60051A4")]
		[Address(RVA = "0x5C61550", Offset = "0x5C60550", VA = "0x5C61550", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddVariantPopup.c (UI.MapEditorAddVariantPopup$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocale("MapEditor", "AddVariant", "Title", "", "");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000E5B")]
	protected override float Width
	{
		[Token(Token = "0x60051A5")]
		[Address(RVA = "0x5C615F0", Offset = "0x5C605F0", VA = "0x5C615F0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddVariantPopup.c (UI.MapEditorAddVariantPopup$$get_Width): clean
			return 1155.0;
		}
	}

	[Token(Token = "0x17000E5C")]
	protected override float Height
	{
		[Token(Token = "0x60051A6")]
		[Address(RVA = "0x5C61600", Offset = "0x5C60600", VA = "0x5C61600", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddVariantPopup.c (UI.MapEditorAddVariantPopup$$get_Height): clean
			return 865.0;
		}
	}

	[Token(Token = "0x17000E5D")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x60051A7")]
		[Address(RVA = "0x5C61610", Offset = "0x5C60610", VA = "0x5C61610", Slot = "36")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddVariantPopup.c (UI.MapEditorAddVariantPopup$$get_TopBarHeight): clean
			return 65.0;
		}
	}

	[Token(Token = "0x17000E5E")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60051A8")]
		[Address(RVA = "0x5C61620", Offset = "0x5C60620", VA = "0x5C61620", Slot = "15")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddVariantPopup.c (UI.MapEditorAddVariantPopup$$get_ScrollBar): clean
			return true;
		}
	}

	[Token(Token = "0x17000E5F")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60051A9")]
		[Address(RVA = "0x5C61630", Offset = "0x5C60630", VA = "0x5C61630", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddVariantPopup.c (UI.MapEditorAddVariantPopup$$get_VerticalSpacing): clean
			return 12.0;
		}
	}

	[Token(Token = "0x17000E60")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60051AA")]
		[Address(RVA = "0x5C61640", Offset = "0x5C60640", VA = "0x5C61640", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddVariantPopup.c (UI.MapEditorAddVariantPopup$$get_HorizontalPadding): clean
			return 0xf;
		}
	}

	[Token(Token = "0x17000E61")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60051AB")]
		[Address(RVA = "0x5C61650", Offset = "0x5C60650", VA = "0x5C61650", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddVariantPopup.c (UI.MapEditorAddVariantPopup$$get_VerticalPadding): clean
			return 10;
		}
	}

	[Token(Token = "0x60051AC")]
	[Address(RVA = "0x5C61660", Offset = "0x5C60660", VA = "0x5C61660", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/MapEditorAddVariantPopup.c (UI.MapEditorAddVariantPopup$$Setup): 1 lines keep C-only constructs
		Transform parent_00;
		String pSVar1;
		ElementStyle __this_00;
		UnityAction __this_01;

		this.Setup(parent);
		pSVar1 = this.get_ThemePanel();
		__this_00 = new ElementStyle(0x18, 70.0, 20.0, pSVar1);
		parent_00 = this.BottomBar;
		pSVar1 = UIManager.GetLocaleCommon("Back");
		__this_01 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorAddVariantPopup_Setup_b__18_0);
		ElementFactory.CreateTextButton(parent_00, __this_00, pSVar1, 0.0, __this_01);
		return;
	}

	[Token(Token = "0x60051AD")]
	[Address(RVA = "0x5C61790", Offset = "0x5C60790", VA = "0x5C61790")]
	private void OnBottomBarButtonClick(string name)
	{
		// Lifted from source/cpp/UI/MapEditorAddVariantPopup.c (UI.MapEditorAddVariantPopup$$OnBottomBarButtonClick): 1 lines keep C-only constructs
		byte bVar1;
		BaseMenu pUVar2;
		TooltipPopup pUVar3;

		this.Hide();
		pUVar2 = UIManager.CurrentMenu;
		if (pUVar2 != null) {
			bVar1 = (typeof(MapEditorMenu)._2).typeHierarchyDepth;
			if (((pUVar2.klass._2).typeHierarchyDepth < bVar1) ||((pUVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(MapEditorMenu))) {
				throw new InvalidCastException();
			}
			pUVar3 = (*(ulong)((sbyte)pUVar2 + 0xc0));
			if (pUVar3 != null) {
				pUVar3.Show();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60051AE")]
	[Address(RVA = "0x5C5FB10", Offset = "0x5C5EB10", VA = "0x5C5FB10")]
	public void Show(string prefab)
	{
		// Lifted from source/cpp/UI/MapEditorAddVariantPopup.c (UI.MapEditorAddVariantPopup$$Show): 11 lines keep C-only constructs
		int piVar1;
		int length;
		uint uVar2;
		uint uVar3;
		List<GameObject> pSVar4;
		String[] pSVar5;
		Dictionary<object, object> pSVar6;
		Object obj;
		bool bVar8;
		List<string> __this_00;
		object collection;
		System_Collections_Generic_List_List_T___o __this_01;
		byte[] local_80 = new byte[16];
		Object local_70;
		byte[] local_68 = new byte[8];
		Object local_58;
		System_Collections_Generic_List_Enumerator_T__o local_48;

		local_68 = (byte[])0x0;
		local_58 = null;
		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		pSVar4 = this._rows;
		if (pSVar4 != null) {
			local_80.GetEnumerator((List<object>)pSVar4);
			local_58 = local_70;
			local_68 = (byte[])local_80._0_8_;
			local_80._0_8_ = null;
			local_80._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_68;
			while (true) {
				bVar8 = local_68.MoveNext();
				obj = local_58;
				if (!(bVar8)) break;
				Object.Destroy(obj);
			}
			local_68.Dispose() ;
			pSVar4 = this._rows;
			if (pSVar4 != null) {
				piVar1 = &pSVar4._version;
				*piVar1 = *piVar1 + 1;
				length = pSVar4._size;
				pSVar4._size = 0;
				if (0 < length) {
					Array.Clear((Array)pSVar4._items, 0, length);
				}
				__this_00 = new List<string>();
				if (__this_00 != null) {
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar5 = __this_00._items;
					if (pSVar5 != null) {
						uVar2 = __this_00._size;
						if (uVar2 < (uint)pSVar5.Length) {
							__this_00._size = uVar2 + 1;
							pSVar5[(int)uVar2] = prefab;
							uVar3 = (typeof(BuiltinMapPrefabs)._2).cctor_finished_or_no_cctor;
						}
						else {
							__this_00.AddWithResize((object)prefab);
							uVar3 = (typeof(BuiltinMapPrefabs)._2).cctor_finished_or_no_cctor;
						}
						if (uVar3 == 0) {
						}
						pSVar6 = (Dictionary<object, object>)BuiltinMapPrefabs.PrefabVariants;
						if (pSVar6 != null) {
							bVar8 = pSVar6.ContainsKey((object)prefab);
							if (bVar8) {
								pSVar6 = (Dictionary<object, object>)BuiltinMapPrefabs.PrefabVariants;
								if (pSVar6 == null) goto label_05d5fefc;
								collection = pSVar6.get_Item((object)prefab);
								__this_00.AddRange((IEnumerable<T>)collection);
							}
							__this_01 = Util.GroupItems<string>((List<T>)__this_00, 8);
							if (__this_01 != null) {
								local_48 = __this_01.GetEnumerator();
								local_80._0_8_ = null;
								local_80._8_8_ = &local_48;
								while (bVar8 = local_48.MoveNext()) {
									this.CreateRow((List<string>)local_48._current);
								}
								local_48.Dispose();
								this.Show();
								return;
							}
						}
					}
				}
			}
		}
	label_05d5fefc: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60051AF")]
	[Address(RVA = "0x5C61850", Offset = "0x5C60850", VA = "0x5C61850")]
	protected void CreateRow(List<string> items)
	{
		// Lifted from source/cpp/UI/MapEditorAddVariantPopup.c (UI.MapEditorAddVariantPopup$$CreateRow): 8 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		UnityEvent __this_00;
		String path;
		List<GameObject> __this_01;
		GameObject[] pUVar3;
		bool bVar5;
		GameObject __this_02;
		MapEditorAddVariantPopup.c__DisplayClass21_0 pUVar6;
		Transform pUVar7;
		GameObject __this_03;
		Button pUVar8;
		UnityAction __this_04;
		String pSVar9;
		Texture value;
		RawImage pUVar10;
		Text pUVar11;
		MapEditorAddVariantPopup.c__DisplayClass21_0 targetAddress;
		float spacing;
		Color UVar12;
		byte[] local_68 = new byte[8];
		String local_58;
		byte[] local_48 = new byte[16];
		String local_38;

		local_68 = (byte[])0x0;
		local_58 = null;
		pUVar7 = this.SinglePanel;
		spacing = this.get_VerticalSpacing();
		__this_02 = ElementFactory.CreateHorizontalGroup(pUVar7, spacing, 3);
		if (items != null) {
			local_48.GetEnumerator((List<object>)items);
			local_58 = local_38;
			local_68 = (byte[])local_48._0_8_;
			local_48._0_8_ = null;
			local_48._8_8_ = local_68;
			if (__this_02 == null) {
				bVar5 = local_68.MoveNext();
				if (bVar5) {
					pUVar6 = new MapEditorAddVariantPopup.c__DisplayClass21_0();
					if (pUVar6 != null) {
						pUVar6.__4__this = this;
						pUVar6.item = local_58;
						throw new NullReferenceException();
					}
	label_05d61ed8: ;
					throw new NullReferenceException();
				}
			}
			else {
				while(true) {
					bVar5 = local_68.MoveNext();
					if (!bVar5) break;
					pUVar6 = new MapEditorAddVariantPopup.c__DisplayClass21_0();
					if (pUVar6 == null) goto label_05d61ed8;
					pUVar6.__4__this = this;
					targetAddress = &pUVar6.fields;
					pUVar6.item = local_58;
					pUVar7 = __this_02.transform;
					__this_03 = ElementFactory.InstantiateAndBind(pUVar7, "Prefabs/Misc/MapEditorObjectButton");
					if (__this_03 == null) {
						throw new NullReferenceException();
					}
					pUVar8 = __this_03.GetComponent<Button>();
					if (pUVar8 == null) {
						throw new NullReferenceException();
					}
					__this_00 = (UnityEvent)pUVar8.m_OnClick;
					__this_04 = new UnityAction((object)pUVar6, (intptr_t)MethodInfo_UI_MapEditorAddVariantPopup_c__DisplayClass21_0_CreateRow_b__0);
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					__this_00.AddListener(__this_04);
					pSVar9 = this.GetPreviewName(targetAddress.item);
					path = ResourcePaths.Map;
					pSVar9 = String.Concat("Previews/", pSVar9);
					value = (Texture)ResourceManager.LoadAsset(path, pSVar9, false, false);
					bVar5 = ((Object)value != null);
					if (bVar5) {
						pUVar7 = __this_03.transform;
						if (pUVar7 == null) {
							throw new NullReferenceException();
						}
						pUVar7 = pUVar7.Find("Icon");
						if (pUVar7 == null) {
							throw new NullReferenceException();
						}
						pUVar10 = pUVar7.GetComponent<RawImage>();
						if (pUVar10 == null) {
							throw new NullReferenceException();
						}
						if ((value != null) &&(value.klass != (Texture)typeof(Texture2D))) {
							throw new InvalidCastException();
						}
						pUVar10.texture = value;
					}
					else {
						pUVar7 = __this_03.transform;
						if (pUVar7 == null) {
							throw new NullReferenceException();
						}
						pUVar7 = pUVar7.Find("Icon");
						if (pUVar7 == null) {
							throw new NullReferenceException();
						}
						pUVar10 = pUVar7.GetComponent<RawImage>();
						if (pUVar10 == null) {
							throw new NullReferenceException();
						}
						UVar12.b = 0.32;
						UVar12.a = 1.0;
						UVar12.r = 0.32;
						UVar12.g = 0.32;
						pUVar10.set_color(UVar12);
					}
					pUVar7 = __this_03.transform;
					if (pUVar7 == null) {
						throw new NullReferenceException();
					}
					pUVar7 = pUVar7.Find("Text");
					if (pUVar7 == null) {
						throw new NullReferenceException();
					}
					pUVar11 = pUVar7.GetComponent<Text>();
					if (pUVar11 == null) {
						throw new NullReferenceException();
					}
					pUVar11.set_text(targetAddress.item);
					pUVar7 = __this_03.transform;
					if (pUVar7 == null) {
						throw new NullReferenceException();
					}
					pUVar7 = pUVar7.Find("Text");
					if (pUVar7 == null) {
						throw new NullReferenceException();
					}
					pUVar11 = pUVar7.GetComponent<Text>();
					UVar12 = UIManager.GetThemeColor("DefaultPanel", "DefaultLabel", "TextColor", "DefaultPanel");
					if (pUVar11 == null) {
						throw new NullReferenceException();
					}
					pUVar11.set_color(UVar12);
				}
			}
			local_68.Dispose();
			__this_01 = this._rows;
			if (__this_01 != null) {
				piVar1 = &__this_01._version;
				*piVar1 = *piVar1 + 1;
				pUVar3 = __this_01._items;
				if (pUVar3 != null) {
					uVar2 = __this_01._size;
					if (uVar2 < (uint)pUVar3.Length) {
						__this_01._size = uVar2 + 1;
						pUVar3[(int)uVar2] = __this_02;
					}
					else {
						__this_01.AddWithResize((object)__this_02);
					}
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60051B0")]
	[Address(RVA = "0x5C61FE0", Offset = "0x5C60FE0", VA = "0x5C61FE0", Slot = "62")]
	protected virtual string GetPreviewName(string item)
	{
		// Lifted from source/cpp/UI/MapEditorAddVariantPopup.c (UI.MapEditorAddVariantPopup$$GetPreviewName): clean
		Dictionary<object, object> pSVar1;
		bool bVar2;
		String pSVar3;

		if (Il2CppMethodInitialized_07547f7e == false) {
			Il2CppMethodInitialized_07547f7e = true;
			if ((typeof(BuiltinMapPrefabs)._2).cctor_finished_or_no_cctor == 0) goto label_05d62062;
	label_05d62003: ;
			pSVar1 = (Dictionary<object, object>)BuiltinMapPrefabs.PrefabPreviews;
		}
		else {
			if ((typeof(BuiltinMapPrefabs)._2).cctor_finished_or_no_cctor != 0) goto label_05d62003;
	label_05d62062: ;
			pSVar1 = (Dictionary<object, object>)BuiltinMapPrefabs.PrefabPreviews;
		}
		if (pSVar1 == null) {
	label_05d620e4: ;
			throw new NullReferenceException();
		}
		bVar2 = pSVar1.ContainsKey((object)item);
		if (bVar2) {
			pSVar1 = (Dictionary<object, object>)BuiltinMapPrefabs.PrefabPreviews;
			if (pSVar1 == null) goto label_05d620e4;
			item = pSVar1.get_Item((object)item);
		}
		pSVar3 = String.Concat(item, "Preview");
		return pSVar3;
	}

	[Token(Token = "0x60051B1")]
	[Address(RVA = "0x5C620F0", Offset = "0x5C610F0", VA = "0x5C620F0", Slot = "63")]
	protected virtual void OnSelectObject(string name)
	{
		// Lifted from source/cpp/UI/MapEditorAddVariantPopup.c (UI.MapEditorAddVariantPopup$$OnSelectObject): 2 lines keep C-only constructs
		byte bVar1;
		MapEditorGameManager __this_00;
		MapEditorBrush pMVar2;
		MapEditorMenu __this_01;

		__this_00 = (MapEditorGameManager)SceneLoader.CurrentGameManager;
		if (__this_00 != null) {
			bVar1 = (typeof(MapEditorGameManager)._2).typeHierarchyDepth;
			if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(MapEditorGameManager))) {
				throw new InvalidCastException();
			}
			pMVar2 = __this_00.Brush;
			if ((pMVar2 == null) || (pMVar2.AssetSelectMode == false)) {
				__this_00.AddObject(name);
	label_05d6222a: ;
				this.Hide();
				return;
			}
			pMVar2.AddEntry(name);
			pMVar2 = __this_00.Brush;
			if (pMVar2 != null) {
				pMVar2.AssetSelectMode = false;
				__this_01 = (MapEditorMenu)UIManager.CurrentMenu;
				if (__this_01 != null) {
					bVar1 = (typeof(MapEditorMenu)._2).typeHierarchyDepth;
					if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(MapEditorMenu) )) {
						throw new InvalidCastException();
					}
					__this_01.SyncBrushPanel();
					goto label_05d6222a;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60051B2")]
	[Address(RVA = "0x5C62260", Offset = "0x5C61260", VA = "0x5C62260")]
	public MapEditorAddVariantPopup()
	{
		// Lifted from source/cpp/UI/MapEditorAddVariantPopup.c (UI.MapEditorAddVariantPopup$$.ctor): clean
		List<GameObject> __this_00;

		__this_00 = new List<GameObject>();
		this._rows = __this_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MapEditorAddVariantPopup.c.

	// UI.MapEditorAddVariantPopup.<>c__DisplayClass21_0$$.ctor: clean
	private void c__DisplayClass21_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorAddVariantPopup$$<Setup>b__18_0: clean
	private void Setup_b__18_0()
	{


		this.OnBottomBarButtonClick((String)method);
		return;
	}

	// UI.MapEditorAddVariantPopup.<>c__DisplayClass21_0$$<CreateRow>b__0: clean
	private void c__DisplayClass21_0__CreateRow_b__0()
	{
		MapEditorAddVariantPopup pUVar1;

		pUVar1 = this.__4__this;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.OnSelectObject(this.item);
		return;
	}
}
