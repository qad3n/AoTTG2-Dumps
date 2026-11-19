// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorAddObjectPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorAddObjectPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorAddObjectPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000891")]
internal class MapEditorAddObjectPanel : CategoryPanel
{
	[Token(Token = "0x4002B2D")]
	protected const int Columns = 8;

	[Token(Token = "0x17000E4E")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x600517A")]
		[Address(RVA = "0x5C5E4F0", Offset = "0x5C5D4F0", VA = "0x5C5E4F0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddObjectPanel.c (UI.MapEditorAddObjectPanel$$get_ScrollBar): clean
			return true;
		}
	}

	[Token(Token = "0x17000E4F")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600517B")]
		[Address(RVA = "0x5C5E500", Offset = "0x5C5D500", VA = "0x5C5E500", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddObjectPanel.c (UI.MapEditorAddObjectPanel$$get_VerticalSpacing): clean
			return 12.0;
		}
	}

	[Token(Token = "0x17000E50")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600517C")]
		[Address(RVA = "0x5C5E510", Offset = "0x5C5D510", VA = "0x5C5E510", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddObjectPanel.c (UI.MapEditorAddObjectPanel$$get_HorizontalPadding): clean
			return 0xf;
		}
	}

	[Token(Token = "0x17000E51")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600517D")]
		[Address(RVA = "0x5C5E520", Offset = "0x5C5D520", VA = "0x5C5E520", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddObjectPanel.c (UI.MapEditorAddObjectPanel$$get_VerticalPadding): clean
			return 10;
		}
	}

	[Token(Token = "0x600517E")]
	[Address(RVA = "0x5C5E530", Offset = "0x5C5D530", VA = "0x5C5E530", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/MapEditorAddObjectPanel.c (UI.MapEditorAddObjectPanel$$Setup): 4 lines keep C-only constructs
		byte bVar1;
		GameObject pUVar2;
		MapEditorAddObjectPanel a;
		bool bVar3;
		String pSVar4;
		List<string> original;
		System_Collections_Generic_List_List_T___o __this_00;
		MapEditorAddObjectPanel __this_01;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		byte local_20;

		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		this.Setup(parent);
		if (parent != null) {
			bVar1 = (typeof(MapEditorAddObjectPopup)._2).typeHierarchyDepth;
			if (((parent.klass._2).typeHierarchyDepth < bVar1) ||((parent.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(MapEditorAddObjectPopup))) {
				throw new InvalidCastException();
			}
			pSVar4 = parent.GetCurrentCategoryName();
			pUVar2 = (*(ulong)((sbyte)parent + 0xa8));
			if (pUVar2 != null) {
				a = (*(ulong)((sbyte)pUVar2 + 0x20));
				original = this.GetItems(pSVar4);
				__this_01 = a;
				bVar3 = ((String)a != (String)**(ulong*)(g_data_07556758 + 0xb8));
				if (bVar3) {
					original = __this_01.Filter(original, (String)a);
				}
				__this_00 = Util.GroupItems<string>((List<T>)original, 8);
				if (__this_00 != null) {
					local_48 = __this_00.GetEnumerator() ;
					local_20 = (byte)&local_48;
					while(true) {
						bVar3 = local_48.MoveNext();
						if (!bVar3) break;
						this.CreateRow((List<string>)local_48._current);
					}
					local_48.Dispose();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600517F")]
	[Address(RVA = "0x5C5F160", Offset = "0x5C5E160", VA = "0x5C5F160", Slot = "35")]
	protected virtual List<string> GetItems(string category)
	{
		// Lifted from source/cpp/UI/MapEditorAddObjectPanel.c (UI.MapEditorAddObjectPanel$$GetItems): 4 lines keep C-only constructs
		Dictionary<@object, @object> pSVar1;
		object @object;
		bool bVar2;
		MapEditorAddObjectPanel pUVar3;
		List<string> pSVar4;
		List<string> collection;
		object source;
		UI_MapEditorAddObjectPanel___c_StaticFields pUVar5;
		Func<MapScriptBaseObject, string> __this_00;

		bVar2 = (category == "All");
		if (bVar2) {
			pSVar1 = (Dictionary<@object, @object>)BuiltinMapPrefabs.AllPrefabs;
			if (pSVar1 != null) {
				pUVar3 = (MapEditorAddObjectPanel)pSVar1.Keys;
				pSVar4 = (List<string>)Enumerable.ToList<string>((System_Collections_Generic_IEnumerable_TSource__o)pUVar3);
				pSVar4 = pUVar3.GetItemsNoVariants(pSVar4);
				collection = AssetBundleManager.GetAssetList();
				if (pSVar4 != null) {
					pSVar4.AddRange((IEnumerable<T>)collection);
					return pSVar4;
				}
			}
		}
		else {
			bVar2 = (category == "Custom");
			if (bVar2) {
				pSVar4 = AssetBundleManager.GetAssetList();
				return pSVar4;
			}
			pSVar1 = (Dictionary<@object, @object>)BuiltinMapPrefabs.PrefabCategories;
			if (pSVar1 != null) {
				source = pSVar1.get_Item((object)category);
				if ((typeof(MapEditorAddObjectPanel.c)._2).cctor_finished_or_no_cctor == 0) {
					pUVar5 = typeof(MapEditorAddObjectPanel.c).static_fields;
					__this_00 = pUVar5.__9__10_0;
				}
				else {
					pUVar5 = typeof(MapEditorAddObjectPanel.c).static_fields;
					__this_00 = pUVar5.__9__10_0;
				}
				if (__this_00 == null) {
					if (((typeof(MapEditorAddObjectPanel.c))._2).cctor_finished_or_no_cctor == 0) {
						pUVar5 = typeof(MapEditorAddObjectPanel.c).static_fields;
					}
					@object = (object)pUVar5.__9;
					__this_00 = new Func<MapScriptBaseObject, string>(@object, (intptr_t)MethodInfo_UI_MapEditorAddObjectPanel_c_GetItems_b__10_0);
					pUVar5 = typeof(MapEditorAddObjectPanel.c).static_fields;
					pUVar5.__9__10_0 = __this_00;
				}
				pUVar3 = (MapEditorAddObjectPanel)Enumerable.Select<MapScriptBaseObject, string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TResult__o)__this_00);
				pSVar4 = (List<string>)Enumerable.ToList<string>((System_Collections_Generic_IEnumerable_TSource__o)pUVar3);
				if (this != null) {
					pSVar4 = pUVar3.GetItemsNoVariants(pSVar4);
					return pSVar4;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005180")]
	[Address(RVA = "0x5C5F440", Offset = "0x5C5E440", VA = "0x5C5F440")]
	protected List<string> GetItemsNoVariants(List<string> items)
	{
		// Lifted from source/cpp/UI/MapEditorAddObjectPanel.c (UI.MapEditorAddObjectPanel$$GetItemsNoVariants): 12 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Dictionary<object, object> pSVar3;
		String[] pSVar4;
		object pIVar6;
		System_Collections_Generic_List_Enumerator_object__o pSVar7;
		bool bVar8;
		List<string> __this_00;
		System_Collections_Generic_List_Enumerator_object__o local_68;
		byte[] local_48 = new byte[16];
		String local_38;

		__this_00 = new List<string>();
		if (items == null) {
			throw new NullReferenceException();
		}
		local_48.GetEnumerator((List<object>)items);
		local_68._current = (object)local_38;
		local_68._list = (List<T>)local_48._0_8_;
		local_68._index = local_48._8_4_;
		local_68._version = local_48._12_4_;
		local_48._0_8_ = null;
		local_48._8_8_ = &local_68;
		pSVar7 = &local_68;
		if (__this_00 == null) {
			while (true) {
				local_48._8_8_ = pSVar7;
				bVar8 = local_68.MoveNext();
				pIVar6 = local_68._current;
				if (!(bVar8)) break;
				pSVar3 = (Dictionary<object, object>)BuiltinMapPrefabs.VariantToBasePrefab;
				if (pSVar3 == null) {
	label_05d5f6a4: ;
					throw new NullReferenceException();
				}
				bVar8 = pSVar3.ContainsKey(pIVar6);
				pSVar7 = (System_Collections_Generic_List_Enumerator_object__o)local_48._8_8_;
				if (!bVar8) {
	label_05d5f67b: ;
					throw new NullReferenceException();
				}
			}
		}
		else {
			while (true) {
				bVar8 = local_68.MoveNext();
				pIVar6 = local_68._current;
				if (!(bVar8)) break;
				pSVar3 = (Dictionary<object, object>)BuiltinMapPrefabs.VariantToBasePrefab;
				if (pSVar3 == null) goto label_05d5f6a4;
				bVar8 = pSVar3.ContainsKey(pIVar6);
				if (!bVar8) {
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar4 = __this_00._items;
					if (pSVar4 == null) goto label_05d5f67b;
					uVar2 = __this_00._size;
					if (uVar2 < (uint)pSVar4.Length) {
						__this_00._size = uVar2 + 1;
						pSVar4[(int)uVar2] = (String)pIVar6;
					}
					else {
						__this_00.AddWithResize(pIVar6);
					}
				}
			}
		}
		local_68.Dispose();
		return __this_00;
	}

	[Token(Token = "0x6005181")]
	[Address(RVA = "0x5C5E790", Offset = "0x5C5D790", VA = "0x5C5E790")]
	protected List<string> Filter(List<string> original, string search)
	{
		// Lifted from source/cpp/UI/MapEditorAddObjectPanel.c (UI.MapEditorAddObjectPanel$$Filter): 12 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		String[] pSVar3;
		object item;
		System_Collections_Generic_List_Enumerator_object__o pSVar5;
		bool bVar6;
		List<string> __this_00;
		String value;
		String pSVar7;
		System_Collections_Generic_List_Enumerator_object__o local_68;
		byte[] local_48 = new byte[16];
		String local_38;

		local_68._list = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._current = null;
		__this_00 = new List<string>();
		bVar6 = (search == (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (bVar6) {
			__this_00 = original;
		}
		else {
			if ((search == null) ||(value = search.ToLower(), original == null)) {
				throw new NullReferenceException();
			}
			local_48.GetEnumerator((List<object>)original);
			local_68._current = (object)local_38;
			local_68._list = (List<T>)local_48._0_8_;
			local_68._index = local_48._8_4_;
			local_68._version = local_48._12_4_;
			local_48._0_8_ = null;
			local_48._8_8_ = &local_68;
			pSVar5 = &local_68;
			if (__this_00 == null) {
				do {
					local_48._8_8_ = pSVar5;
					bVar6 = local_68.MoveNext();
					if (!bVar6) goto label_05d5e9cc;
					if ((String)local_68._current == null) goto label_05d5e9f0;
					pSVar7 = local_68._current.ToLower();
					if (pSVar7 == null) goto label_05d5e9f5;
					bVar6 = pSVar7.Contains(value);
					pSVar5 = (System_Collections_Generic_List_Enumerator_object__o)local_48._8_8_;
				} while (!bVar6);
	label_05d5e9c7: ;
				throw new NullReferenceException();
			}
			while (true) {
				bVar6 = local_68.MoveNext();
				item = local_68._current;
				if (!(bVar6)) break;
				if ((String)local_68._current == null) {
	label_05d5e9f0: ;
					throw new NullReferenceException();
				}
				pSVar7 = local_68._current.ToLower();
				if (pSVar7 == null) {
	label_05d5e9f5: ;
					throw new NullReferenceException();
				}
				bVar6 = pSVar7.Contains(value);
				if (bVar6) {
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar3 = __this_00._items;
					if (pSVar3 == null) goto label_05d5e9c7;
					uVar2 = __this_00._size;
					if (uVar2 < (uint)pSVar3.Length) {
						__this_00._size = uVar2 + 1;
						pSVar3[(int)uVar2] = (String)item;
					}
					else {
						__this_00.AddWithResize(item);
					}
				}
			}
	label_05d5e9cc: ;
			local_68.Dispose();
		}
		return __this_00;
	}

	[Token(Token = "0x6005182")]
	[Address(RVA = "0x5C5EA70", Offset = "0x5C5DA70", VA = "0x5C5EA70")]
	protected void CreateRow(List<string> items)
	{
		// Lifted from source/cpp/UI/MapEditorAddObjectPanel.c (UI.MapEditorAddObjectPanel$$CreateRow): 10 lines keep C-only constructs
		UnityEvent __this_00;
		String path;
		bool bVar1;
		GameObject pUVar2;
		MapEditorAddObjectPanel.c__DisplayClass13_0 pUVar3;
		Transform pUVar4;
		Button pUVar5;
		UnityAction __this_01;
		String pSVar6;
		Texture value;
		RawImage pUVar7;
		Text pUVar8;
		MapEditorAddObjectPanel.c__DisplayClass13_0 targetAddress;
		float spacing;
		Color UVar9;
		System_Collections_Generic_List_Enumerator_object__o local_68;
		byte[] local_50 = new byte[16];
		String local_40;
		GameObject local_38;

		local_68._list = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._current = null;
		pUVar4 = this.SinglePanel;
		spacing = this.get_VerticalSpacing();
		pUVar2 = ElementFactory.CreateHorizontalGroup(pUVar4, spacing, 3);
		if (items == null) {
			throw new NullReferenceException();
		}
		local_50.GetEnumerator((List<object>)items);
		local_68._current = (object)local_40;
		local_68._list = (List<T>)local_50._0_8_;
		local_68._index = local_50._8_4_;
		local_68._version = local_50._12_4_;
		local_50._0_8_ = null;
		local_50._8_8_ = &local_68;
		local_38 = pUVar2;
		if (pUVar2 == null) {
			local_50._8_8_ = &local_68;
			bVar1 = local_68.MoveNext();
			if (bVar1) {
				pUVar3 = new MapEditorAddObjectPanel.c__DisplayClass13_0();
				if (pUVar3 != null) {
					pUVar3.__4__this = this;
					pUVar3.item = (String)local_68._current;
					throw new NullReferenceException();
				}
	label_05d5f070: ;
				throw new NullReferenceException();
			}
		}
		else {
			while(true) {
				bVar1 = local_68.MoveNext();
				if (!bVar1) break;
				pUVar3 = new MapEditorAddObjectPanel.c__DisplayClass13_0();
				if (pUVar3 == null) goto label_05d5f070;
				pUVar3.__4__this = this;
				targetAddress = &pUVar3.fields;
				pUVar3.item = (String)local_68._current;
				pUVar4 = local_38.transform;
				pUVar2 = ElementFactory.InstantiateAndBind(pUVar4, "Prefabs/Misc/MapEditorObjectButton");
				if (pUVar2 == null) {
					throw new NullReferenceException();
				}
				pUVar5 = pUVar2.GetComponent<Button>();
				if (pUVar5 == null) {
					throw new NullReferenceException();
				}
				__this_00 = (UnityEvent)pUVar5.m_OnClick;
				__this_01 = new UnityAction((object)pUVar3, (intptr_t)MethodInfo_UI_MapEditorAddObjectPanel_c__DisplayClass13_0_CreateRow_b__0);
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.AddListener(__this_01);
				pSVar6 = this.GetPreviewName(targetAddress.item);
				path = ResourcePaths.Map;
				pSVar6 = String.Concat("Previews/", pSVar6);
				value = (Texture)ResourceManager.LoadAsset(path, pSVar6, false, false);
				bVar1 = ((Object)value != null);
				if (bVar1) {
					pUVar4 = pUVar2.transform;
					if (pUVar4 == null) {
						throw new NullReferenceException();
					}
					pUVar4 = pUVar4.Find("Icon");
					if (pUVar4 == null) {
						throw new NullReferenceException();
					}
					pUVar7 = pUVar4.GetComponent<RawImage>();
					if (pUVar7 == null) {
						throw new NullReferenceException();
					}
					if ((value != null) &&(value.klass != (Texture)typeof(Texture2D))) {
						throw new InvalidCastException();
					}
					pUVar7.texture = value;
				}
				else {
					pUVar4 = pUVar2.transform;
					if (pUVar4 == null) {
						throw new NullReferenceException();
					}
					pUVar4 = pUVar4.Find("Icon");
					if (pUVar4 == null) {
						throw new NullReferenceException();
					}
					pUVar7 = pUVar4.GetComponent<RawImage>();
					if (pUVar7 == null) {
						throw new NullReferenceException();
					}
					UVar9.b = 0.32;
					UVar9.a = 1.0;
					UVar9.r = 0.32;
					UVar9.g = 0.32;
					pUVar7.set_color(UVar9);
				}
				pUVar4 = pUVar2.transform;
				if (pUVar4 == null) {
					throw new NullReferenceException();
				}
				pUVar4 = pUVar4.Find("Text");
				if (pUVar4 == null) {
					throw new NullReferenceException();
				}
				pUVar8 = pUVar4.GetComponent<Text>();
				if (pUVar8 == null) {
					throw new NullReferenceException();
				}
				pUVar8.set_text(targetAddress.item);
				pUVar4 = pUVar2.transform;
				if (pUVar4 == null) {
					throw new NullReferenceException();
				}
				pUVar4 = pUVar4.Find("Text");
				if (pUVar4 == null) {
					throw new NullReferenceException();
				}
				pUVar8 = pUVar4.GetComponent<Text>();
				UVar9 = UIManager.GetThemeColor("DefaultPanel", "DefaultLabel", "TextColor", "DefaultPanel");
				if (pUVar8 == null) {
					throw new NullReferenceException();
				}
				pUVar8.set_color(UVar9);
			}
		}
		local_68.Dispose();
		return;
	}

	[Token(Token = "0x6005183")]
	[Address(RVA = "0x5C5F730", Offset = "0x5C5E730", VA = "0x5C5F730", Slot = "36")]
	protected virtual string GetPreviewName(string item)
	{
		// Lifted from source/cpp/UI/MapEditorAddObjectPanel.c (UI.MapEditorAddObjectPanel$$GetPreviewName): clean
		Dictionary<object, object> pSVar1;
		bool bVar2;
		String pSVar3;

		if (Il2CppMethodInitialized_07547f6d == false) {
			Il2CppMethodInitialized_07547f6d = true;
			if ((typeof(BuiltinMapPrefabs)._2).cctor_finished_or_no_cctor == 0) goto label_05d5f7b2;
	label_05d5f753: ;
			pSVar1 = (Dictionary<object, object>)BuiltinMapPrefabs.PrefabPreviews;
		}
		else {
			if ((typeof(BuiltinMapPrefabs)._2).cctor_finished_or_no_cctor != 0) goto label_05d5f753;
	label_05d5f7b2: ;
			pSVar1 = (Dictionary<object, object>)BuiltinMapPrefabs.PrefabPreviews;
		}
		if (pSVar1 == null) {
	label_05d5f834: ;
			throw new NullReferenceException();
		}
		bVar2 = pSVar1.ContainsKey((object)item);
		if (bVar2) {
			pSVar1 = (Dictionary<object, object>)BuiltinMapPrefabs.PrefabPreviews;
			if (pSVar1 == null) goto label_05d5f834;
			item = pSVar1.get_Item((object)item);
		}
		pSVar3 = String.Concat(item, "Preview");
		return pSVar3;
	}

	[Token(Token = "0x6005184")]
	[Address(RVA = "0x5C5F840", Offset = "0x5C5E840", VA = "0x5C5F840", Slot = "37")]
	protected virtual void OnSelectObject(string name)
	{
		// Lifted from source/cpp/UI/MapEditorAddObjectPanel.c (UI.MapEditorAddObjectPanel$$OnSelectObject): 5 lines keep C-only constructs
		byte bVar1;
		MapEditorBrushPanel pUVar2;
		Dictionary<object, object> pSVar3;
		MapEditorAddVariantPopup __this_00;
		bool bVar4;
		BasePanel pUVar5;
		MapEditorMenu __this_01;

		__this_01 = (MapEditorMenu)SceneLoader.CurrentGameManager;
		if (__this_01 == null) goto label_05d5faf4;
		bVar1 = (typeof(MapEditorGameManager)._2).typeHierarchyDepth;
		if (((((MapEditorGameManager)__this_01.klass)._2).typeHierarchyDepth < bVar1) ||((((MapEditorGameManager)__this_01.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(MapEditorGameManager))) goto label_05d5fafc;
		pUVar2 = __this_01.BrushPanel;
		if ((pUVar2 == null) ||(*(bool)((long)&pUVar2.m_CachedPtr + 1) == false)) {
			pSVar3 = (Dictionary<object, object>)BuiltinMapPrefabs.PrefabVariants;
			if (pSVar3 == null) goto label_05d5faf4;
			bVar4 = pSVar3.ContainsKey((object)name);
			if (!bVar4) {
				__this_01.AddObject(name);
				pUVar5 = this.Parent;
				if (pUVar5 == null) goto label_05d5faf4;
				goto label_05d5fac0;
			}
	label_05d5fa4e: ;
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
			}
			__this_01 = (MapEditorMenu)UIManager.CurrentMenu;
			if (__this_01 == null) goto label_05d5faf4;
			bVar1 = (typeof(MapEditorMenu)._2).typeHierarchyDepth;
			if (((((MapEditorGameManager)__this_01.klass)._2).typeHierarchyDepth < bVar1) ||((((MapEditorGameManager)__this_01.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(MapEditorMenu))) {
	label_05d5fafc: ;
				throw new InvalidCastException();
			}
			__this_00 = __this_01.AddVariantPopup;
			if (__this_00 == null) goto label_05d5faf4;
			__this_00.Show(name);
			pUVar5 = this.Parent;
		}
		else {
			pSVar3 = (Dictionary<object, object>)BuiltinMapPrefabs.PrefabVariants;
			if (pSVar3 == null) goto label_05d5faf4;
			bVar4 = pSVar3.ContainsKey((object)name);
			if (bVar4) goto label_05d5fa4e;
			pUVar2 = __this_01.BrushPanel;
			if (pUVar2 == null) goto label_05d5faf4;
			pUVar2.AddEntry(name);
			pUVar2 = __this_01.BrushPanel;
			if (pUVar2 == null) goto label_05d5faf4;
			*(bool)((long)&pUVar2.m_CachedPtr + 1) = false;
			__this_01 = (MapEditorMenu)UIManager.CurrentMenu;
			if (__this_01 == null) goto label_05d5faf4;
			bVar1 = (typeof(MapEditorMenu)._2).typeHierarchyDepth;
			if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(MapEditorMenu))) goto label_05d5fafc;
			__this_01.SyncBrushPanel();
			pUVar5 = this.Parent;
		}
		if (pUVar5 != null) {
	label_05d5fac0: ;
			pUVar5.Hide();
			return;
		}
	label_05d5faf4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005185")]
	[Address(RVA = "0x5C5FFB0", Offset = "0x5C5EFB0", VA = "0x5C5FFB0")]
	public MapEditorAddObjectPanel()
	{
		// Lifted from source/cpp/UI/MapEditorAddObjectPanel.c (UI.MapEditorAddObjectPanel$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MapEditorAddObjectPanel.c.

	// UI.MapEditorAddObjectPanel.<>c__DisplayClass13_0$$.ctor: clean
	private void c__DisplayClass13_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorAddObjectPanel.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new MapEditorAddObjectPanel.c();
		MapEditorAddObjectPanel.c.__9 = (MapEditorAddObjectPanel.c)__this;
		return;
	}

	// UI.MapEditorAddObjectPanel.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorAddObjectPanel.<>c$$<GetItems>b__10_0: clean
	private String c__GetItems_b__10_0(MapScriptBaseObject x)
	{
		if (x == null) {
			throw new NullReferenceException();
		}
		return x.Name;
	}

	// UI.MapEditorAddObjectPanel.<>c__DisplayClass13_0$$<CreateRow>b__0: clean
	private void c__DisplayClass13_0__CreateRow_b__0()
	{
		MapEditorAddObjectPanel pUVar1;

		pUVar1 = this.__4__this;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.OnSelectObject(this.item);
		return;
	}
}
