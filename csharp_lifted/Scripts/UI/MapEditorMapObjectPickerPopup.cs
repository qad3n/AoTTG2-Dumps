// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorMapObjectPickerPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorMapObjectPickerPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x20008C3")]
internal class MapEditorMapObjectPickerPopup : BasePopup
{
	[Token(Token = "0x4002C4F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private readonly StringSetting _search;

	[Token(Token = "0x4002C50")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _searchInput;

	[Token(Token = "0x4002C51")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Action<int> _onSelect;

	[Token(Token = "0x4002C52")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Action<HashSet<int>> _onSelectMultiple;

	[Token(Token = "0x4002C53")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private HashSet<int> _selectedIds;

	[Token(Token = "0x4002C54")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private bool _multiple;

	[Token(Token = "0x4002C55")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private GameObject _applyButton;

	[Token(Token = "0x17000E9C")]
	protected override string Title
	{
		[Token(Token = "0x600538B")]
		[Address(RVA = "0x5C940F0", Offset = "0x5C930F0", VA = "0x5C940F0", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorMapObjectPickerPopup.c (UI.MapEditorMapObjectPickerPopup$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocale("MapEditor", "ObjectPicker", "Title", "", "");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000E9D")]
	protected override float Width
	{
		[Token(Token = "0x600538C")]
		[Address(RVA = "0x5C94560", Offset = "0x5C93560", VA = "0x5C94560", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorMapObjectPickerPopup.c (UI.MapEditorMapObjectPickerPopup$$get_Width): clean
			return 650.0;
		}
	}

	[Token(Token = "0x17000E9E")]
	protected override float Height
	{
		[Token(Token = "0x600538D")]
		[Address(RVA = "0x5C94570", Offset = "0x5C93570", VA = "0x5C94570", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorMapObjectPickerPopup.c (UI.MapEditorMapObjectPickerPopup$$get_Height): clean
			return 700.0;
		}
	}

	[Token(Token = "0x17000E9F")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x600538E")]
		[Address(RVA = "0x5C94580", Offset = "0x5C93580", VA = "0x5C94580", Slot = "15")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorMapObjectPickerPopup.c (UI.MapEditorMapObjectPickerPopup$$get_ScrollBar): clean
			return true;
		}
	}

	[Token(Token = "0x17000EA0")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600538F")]
		[Address(RVA = "0x5C94590", Offset = "0x5C93590", VA = "0x5C94590", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorMapObjectPickerPopup.c (UI.MapEditorMapObjectPickerPopup$$get_VerticalSpacing): clean
			return 8.0;
		}
	}

	[Token(Token = "0x6005390")]
	[Address(RVA = "0x5C945A0", Offset = "0x5C935A0", VA = "0x5C945A0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/MapEditorMapObjectPickerPopup.c (UI.MapEditorMapObjectPickerPopup$$Setup): 4 lines keep C-only constructs
		uint uVar1;
		Transform pUVar2;
		StringSetting setting;
		String pSVar3;
		ElementStyle __this_00;
		UnityAction pUVar4;
		UnityAction __this_01;
		GameObject pUVar5;
		InputSettingElement pUVar6;

		this.Setup(parent);
		pSVar3 = this.get_ThemePanel();
		__this_00 = new ElementStyle(0x14, 70.0, 20.0, pSVar3);
		pUVar2 = this.BottomBar;
		setting = this._search;
		pSVar3 = "Search";
		if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
			pSVar3 = "Search";
		}
		"Search" = pSVar3;
		if (Il2CppMethodInitialized_07548101 == false) {
			Il2CppMethodInitialized_07548101 = true;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(UIManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar3 = UIManager.GetLocale("Common", pSVar3, "", "", "");
		pUVar4 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorMapObjectPickerPopup_RebuildResults);
		__this_01 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorMapObjectPickerPopup_RebuildResults);
		pUVar5 = ElementFactory.CreateInputSetting(pUVar2, __this_00, (BaseSetting)setting, pSVar3, "", 260.0, 40.0, false, pUVar4, __this_01, null, null);
		if (pUVar5 == null) {
			throw new NullReferenceException();
		}
		pUVar6 = pUVar5.GetComponent<InputSettingElement>();
		this._searchInput = pUVar6;
		pSVar3 = "Apply";
		pUVar2 = this.BottomBar;
		pSVar3 = UIManager.GetLocale("Common", pSVar3, "", "", "");
		pUVar4 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorMapObjectPickerPopup_ApplySelection);
		pUVar5 = ElementFactory.CreateTextButton(pUVar2, __this_00, pSVar3, 0.0, pUVar4);
		this._applyButton = pUVar5;
		pSVar3 = "Close";
		pUVar2 = this.BottomBar;
		pSVar3 = UIManager.GetLocale("Common", pSVar3, "", "", "");
		pUVar4 = new UnityAction((object)this, (intptr_t)(this.klass.vtable)._22_Hide.method);
		ElementFactory.CreateTextButton(pUVar2, __this_00, pSVar3, 0.0, pUVar4);
		return;
	}

	[Token(Token = "0x6005391")]
	[Address(RVA = "0x5C93760", Offset = "0x5C92760", VA = "0x5C93760")]
	public void Show(Action<int> onSelect)
	{
		// Lifted from source/cpp/UI/MapEditorMapObjectPickerPopup.c (UI.MapEditorMapObjectPickerPopup$$Show): clean


		this._multiple = false;
		this._onSelect = onSelect;
		this._onSelectMultiple = null;
		this.PrepareAndShow();
		return;
	}

	[Token(Token = "0x6005392")]
	[Address(RVA = "0x5C93A10", Offset = "0x5C92A10", VA = "0x5C93A10")]
	public void Show(HashSet<int> selectedIds, Action<HashSet<int>> onSelect)
	{
		// Lifted from source/cpp/UI/MapEditorMapObjectPickerPopup.c (UI.MapEditorMapObjectPickerPopup$$Show): clean
		HashSet<int> __this_00;

		this._multiple = true;
		if (selectedIds == null) {
			selectedIds = new HashSet<int>();
		}
		__this_00 = new HashSet<int>((IEnumerable<T>)selectedIds);
		this._selectedIds = __this_00;
		this._onSelect = null;
		this._onSelectMultiple = onSelect;
		this.PrepareAndShow();
		return;
	}

	[Token(Token = "0x6005393")]
	[Address(RVA = "0x5C949F0", Offset = "0x5C939F0", VA = "0x5C949F0")]
	private void PrepareAndShow()
	{
		// Lifted from source/cpp/UI/MapEditorMapObjectPickerPopup.c (UI.MapEditorMapObjectPickerPopup$$PrepareAndShow): clean
		bool value;
		StringSetting __this_00;
		InputSettingElement pUVar1;
		GameObject __this_01;

		__this_00 = this._search;
		if (__this_00 != null) {
			__this_00.Value = (object)**(ulong*)(g_data_07556758 + 0xb8);
			pUVar1 = this._searchInput;
			if (pUVar1 != null) {
				pUVar1.SyncElement();
				__this_01 = this._applyButton;
				if (__this_01 != null) {
					value = this._multiple;
					__this_01.SetActive(value);
					this.RebuildResults();
					this.Show();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005394")]
	[Address(RVA = "0x5C94AA0", Offset = "0x5C93AA0", VA = "0x5C94AA0")]
	private void RebuildResults()
	{
		// Lifted from source/cpp/UI/MapEditorMapObjectPickerPopup.c (UI.MapEditorMapObjectPickerPopup$$RebuildResults): 19 lines keep C-only constructs
		StringSetting pSVar1;
		Dictionary<int, MapObject> source;
		object @object;
		long lVar2;
		HashSet<int> __this_00;
		int iVar3;
		bool bVar4;
		int index;
		MapEditorMapObjectPickerPopup.c__DisplayClass21_0 __this_01;
		Transform pUVar5;
		Object obj;
		String pSVar6;
		UI_MapEditorMapObjectPickerPopup___c_StaticFields pUVar7;
		Func<T, TResult> pSVar8;
		System_Collections_Generic_IEnumerable_TSource__o pSVar9;
		System_Collections_Generic_List_KeyValuePair_int__object___o __this_02;
		ElementStyle __this_03;
		MapEditorMapObjectPickerPopup.c__DisplayClass21_1 __this_04;
		String pSVar10;
		String[] values;
		String pSVar11;
		UnityAction __this_05;
		String* ppSVar12;
		System_Collections_Generic_List_Enumerator_T__o local_78;
		long lStack_60;
		Transform local_58;
		byte[] local_50 = new byte[16];
		object local_40;
		long lStack_38;

		if (Il2CppMethodInitialized_07548055 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(MapEditorMapObjectPickerPopup.c__DisplayClass21_0)) ;
			il2cpp_codegen_initialize_runtime_metadata(&typeof(MapEditorMapObjectPickerPopup.c__DisplayClass21_1)) ;
			Il2CppMethodInitialized_07548055 = true;
		}
		local_78._current = null;
		lStack_60 = 0;
		local_78._list = null;
		local_78._index = 0;
		local_78._version = 0;
		__this_01 = new MapEditorMapObjectPickerPopup.c__DisplayClass21_0();
		if (__this_01 != null) {
			__this_01.__4__this = this;
			pUVar5 = this.SinglePanel;
			if (pUVar5 != null) {
				index = pUVar5.childCount;
				while (true) {
					index = index + -1;
					if (!(-1 < index)) break;
					pUVar5 = this.SinglePanel;
					if ((pUVar5 == null) ||(pUVar5 = pUVar5.GetChild(index), pUVar5 == null)) goto label_05d95375;
					obj = (Object)pUVar5.gameObject;
					Object.Destroy(obj);
				}
				pSVar1 = this._search;
				if ((pSVar1 != null) &&(pSVar6 = pSVar1._value, pSVar6 != null)) {
					pSVar6 = pSVar6.Trim();
					__this_01.search = pSVar6;
					source = MapLoader.IdToMapObject;
					if ((typeof(MapEditorMapObjectPickerPopup.c)._2).cctor_finished_or_no_cctor == 0) {
						pUVar7 = typeof(MapEditorMapObjectPickerPopup.c).static_fields;
						pSVar8 = (Func<T, TResult>)pUVar7.__9__21_0;
					}
					else {
						pUVar7 = typeof(MapEditorMapObjectPickerPopup.c).static_fields;
						pSVar8 = (Func<T, TResult>)pUVar7.__9__21_0;
					}
					if (pSVar8 == null) {
						if (((typeof(MapEditorMapObjectPickerPopup.c))._2).cctor_finished_or_no_cctor == 0) {
							pUVar7 = typeof(MapEditorMapObjectPickerPopup.c).static_fields;
						}
						@object = (object)pUVar7.__9;
						pSVar8 = new Func<KeyValuePair<int, MapObject>, bool>(@object, (intptr_t)MethodInfo_UI_MapEditorMapObjectPickerPopup_c_RebuildResults_b__21_0);
						pUVar7 = typeof(MapEditorMapObjectPickerPopup.c).static_fields;
						pUVar7.__9__21_0 = (Func<KeyValuePair<int, MapObject>, int>)pSVar8;
					}
					pSVar9 = (System_Collections_Generic_IEnumerable_TSource__o)Enumerable.OrderBy<KeyValuePair<int, MapObject>, int>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TKey__o)pSVar8);
					bVar4 = (__this_01.search != (String)**(ulong*)(g_data_07556758 + 0xb8));
					if (bVar4) {
						pSVar8 = new Func<KeyValuePair<int, MapObject>, bool>((object)__this_01, (intptr_t) MethodInfo_UI_MapEditorMapObjectPickerPopup_c__DisplayClass21_0_RebuildResults_b__1);
						pSVar9 = Enumerable.Where<KeyValuePair<int, MapObject>>(pSVar9, (System_Func_TSource__bool__o)pSVar8);
					}
					pSVar9 = Enumerable.Take<KeyValuePair<int, MapObject>>(pSVar9, 0xfa);
					__this_02 = (System_Collections_Generic_List_KeyValuePair_int__object___o)Enumerable.ToList<KeyValuePair<int, MapObject>>(pSVar9);
					pSVar6 = this.get_ThemePanel();
					__this_03 = new ElementStyle(0x12, 120.0, 20.0, pSVar6);
					if (__this_02 != null) {
						if (__this_02._size == 0) {
							pUVar5 = this.SinglePanel;
							pSVar6 = UIManager.GetLocale("MapEditor", "ObjectPicker", "NoMatches", "", "");
							ElementFactory.CreateDefaultLabel(pUVar5, __this_03, pSVar6, 0, 3);
							return;
						}
						local_50.GetEnumerator(__this_02);
						local_78._current = local_40;
						lStack_60 = lStack_38;
						local_78._list = (List<T>)local_50._0_8_;
						local_78._index = local_50._8_4_;
						local_78._version = local_50._12_4_;
						local_50._0_8_ = null;
						local_50._8_8_ = &local_78;
						do {
							bVar4 = local_78.MoveNext();
							lVar2 = lStack_60;
							if (!bVar4) {
								local_78.Dispose();
								return;
							}
							iVar3 = (int32_t)local_78._current;
							__this_04 = il2cpp_codegen_object_new((Il2CppClass)typeof(MapEditorMapObjectPickerPopup.c__DisplayClass21_1));
							__this_04 = new Object();
							if (__this_04 == null) {
								throw new NullReferenceException();
							}
							__this_04.CS___8__locals1 = __this_01;
							__this_04.id = iVar3;
							if (lVar2 == 0) {
								throw new NullReferenceException();
							}
							if (*(long)(lVar2 + 0x20) == 0) {
								throw new NullReferenceException();
							}
							bVar4 = String.IsNullOrEmpty(*(String*)(*(long)(lVar2 + 0x20) + 0x30));
							if (bVar4) {
								pSVar6 = UIManager.GetLocale("MapEditor", "ObjectPicker", "Unnamed", "", "");
								if (*(long)(lVar2 + 0x20) == 0) {
									throw new NullReferenceException();
								}
								pSVar10 = *(String*)(*(long)(lVar2 + 0x20) + 0x18);
							}
							else {
								lVar2 = *(long)(lVar2 + 0x20);
								if (lVar2 == 0) {
									throw new NullReferenceException();
								}
								pSVar6 = *(String*)(lVar2 + 0x30);
								pSVar10 = *(String*)(lVar2 + 0x18);
							}
							if (pSVar10 == null) {
								pSVar10 = (String)**(ulong*)(g_data_07556758 + 0xb8);
							}
							bVar4 = String.IsNullOrEmpty(pSVar10);
							if ((bVar4) || (bVar4 = (pSVar10 == pSVar6))) {
								pSVar10 = (String)**(ulong*)(g_data_07556758 + 0xb8);
								if (this._multiple != false) goto label_05d95163;
	label_05d95196: ;
								ppSVar12 = *(String**)(g_data_07556758 + 0xb8);
							}
							else {
								pSVar10 = String.Concat(" (", pSVar10, ")");
								if (this._multiple == false) goto label_05d95196;
	label_05d95163: ;
								__this_00 = this._selectedIds;
								if (__this_00 == null) {
									throw new NullReferenceException();
								}
								bVar4 = __this_00.Contains(__this_04.id);
								ppSVar12 = &"[x] ";
								if (!bVar4) goto label_05d95196;
							}
							pSVar11 = *ppSVar12;
							local_58 = this.SinglePanel;
							values = (String[])new string[5];
							if (values == null) {
								throw new NullReferenceException();
							}
							if ((int)values.Length == 0) {
								throw new IndexOutOfRangeException();
							}
							values[0] = pSVar11;
							pSVar11 = (__this_04.id).ToString();
							if ((values.Length & 0xfffffffe) == 0) {
								throw new IndexOutOfRangeException();
							}
							values[1] = pSVar11;
							if ((uint)values.Length < 3) {
								throw new IndexOutOfRangeException();
							}
							values[2] = ": ";
							if ((values.Length & 0xfffffffc) == 0) {
								throw new IndexOutOfRangeException();
							}
							values[3] = pSVar6;
							if ((uint)values.Length < 5) {
								throw new IndexOutOfRangeException();
							}
							values[4] = pSVar10;
							pSVar6 = String.Concat(values);
							__this_05 = new UnityAction((object)__this_04, (intptr_t) MethodInfo_UI_MapEditorMapObjectPickerPopup_c__DisplayClass21_1_RebuildResults_b__2);
							ElementFactory.CreateTextButton(local_58, __this_03, pSVar6, 0.0, __this_05);
						} while(true);
					}
				}
			}
		}
	label_05d95375: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005395")]
	[Address(RVA = "0x5C95470", Offset = "0x5C94470", VA = "0x5C95470")]
	private void Select(int id)
	{
		// Lifted from source/cpp/UI/MapEditorMapObjectPickerPopup.c (UI.MapEditorMapObjectPickerPopup$$Select): clean
		HashSet<int> pSVar1;
		Action<int> pSVar2;
		bool bVar3;
		MethodInfo pMVar4;

		pMVar4 = (MethodInfo)(ulong)(uint)id;
		if (this._multiple == false) {
			pSVar2 = this._onSelect;
			if (pSVar2 != null) {
				(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pMVar4,pSVar2.method);
			}
			this.Hide();
			return;
		}
		pSVar1 = this._selectedIds;
		if (pSVar1 == null) {
	label_05d9552a: ;
			throw new NullReferenceException();
		}
		bVar3 = pSVar1.Add(id);
		if (!bVar3) {
			pSVar1 = this._selectedIds;
			if (pSVar1 == null) goto label_05d9552a;
			pSVar1.Remove(id);
		}
		this.RebuildResults();
		return;
	}

	[Token(Token = "0x6005396")]
	[Address(RVA = "0x5C95530", Offset = "0x5C94530", VA = "0x5C95530")]
	private void ApplySelection()
	{
		// Lifted from source/cpp/UI/MapEditorMapObjectPickerPopup.c (UI.MapEditorMapObjectPickerPopup$$ApplySelection): clean
		Action<HashSet<int>> pSVar1;
		HashSet<int> collection;
		HashSet<int> __this_00;

		if (this._multiple == false) {
			return;
		}
		pSVar1 = this._onSelectMultiple;
		if (pSVar1 != null) {
			collection = this._selectedIds;
			__this_00 = new HashSet<int>((IEnumerable<T>)collection);
			(*(code)pSVar1.invoke_impl)(pSVar1.method_code,__this_00,pSVar1.method);
		}
		this.Hide();
		return;
	}

	[Token(Token = "0x6005397")]
	[Address(RVA = "0x5C955F0", Offset = "0x5C945F0", VA = "0x5C955F0")]
	public MapEditorMapObjectPickerPopup()
	{
		// Lifted from source/cpp/UI/MapEditorMapObjectPickerPopup.c (UI.MapEditorMapObjectPickerPopup$$.ctor): clean
		String defaultValue;
		StringSetting __this_00;
		HashSet<int> __this_01;

		defaultValue = (String)**(ulong*)(g_data_07556758 + 0xb8);
		__this_00 = new StringSetting(defaultValue, 0x7fffffff);
		this._search = __this_00;
		__this_01 = new HashSet<int>();
		this._selectedIds = __this_01;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MapEditorMapObjectPickerPopup.c.

	// UI.MapEditorMapObjectPickerPopup.<>c__DisplayClass21_0$$.ctor: clean
	private void c__DisplayClass21_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorMapObjectPickerPopup.<>c__DisplayClass21_1$$.ctor: clean
	private void c__DisplayClass21_1__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorMapObjectPickerPopup.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new MapEditorMapObjectPickerPopup.c();
		MapEditorMapObjectPickerPopup.c.__9 =(MapEditorMapObjectPickerPopup.c)__this;
		return;
	}

	// UI.MapEditorMapObjectPickerPopup.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorMapObjectPickerPopup.<>c$$<RebuildResults>b__21_0: clean
	private int c__RebuildResults_b__21_0(System_Collections_Generic_KeyValuePair_int__MapObject__o entry)
	{
		return entry.key;
	}

	// UI.MapEditorMapObjectPickerPopup.<>c__DisplayClass21_0$$<RebuildResults>b__1: 4 lines keep C-only constructs
	private bool c__DisplayClass21_0__RebuildResults_b__1(System_Collections_Generic_KeyValuePair_int__MapObject__o entry)
	{
		MapScriptBaseObject pMVar1;
		String __this_00;
		bool bVar2;
		int iVar3;
		ulong in_RAX;
		String __this_01;
		String __this_02;
		bool bVar4;
		ulong uStack_28;

		uStack_28 = in_RAX;
		if ((entry.value != null) &&(pMVar1 = ((entry.value).fields).ScriptObject, pMVar1 != null)) {
			__this_00 = pMVar1.Name;
			if (__this_00 == null) {
				__this_00 = (String)**(ulong*)(g_data_07556758 + 0xb8);
				__this_02 = pMVar1.Asset;
			}
			else {
				__this_02 = pMVar1.Asset;
			}
			if (__this_02 == null) {
				__this_02 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			uStack_28 = CONCAT44(entry.key, (undefined4)uStack_28);
			__this_01 = (((long)&uStack_28 + 4)).ToString();
			if (__this_01 != null) {
				bVar2 = __this_01.Contains(this.search);
				if (!bVar2) {
					if (__this_00 == null) goto label_05d958a2;
					iVar3 = __this_00.IndexOf(this.search, 5);
					if (iVar3 < 0) {
						if (__this_02 == null) goto label_05d958a2;
						iVar3 = __this_02.IndexOf(this.search, 5);
						bVar4 = -1 < iVar3;
					}
				}
				return bVar4;
			}
		}
	label_05d958a2: ;
		throw new NullReferenceException();
	}

	// UI.MapEditorMapObjectPickerPopup.<>c__DisplayClass21_1$$<RebuildResults>b__2: clean
	private void c__DisplayClass21_1__RebuildResults_b__2()
	{
		MapEditorMapObjectPickerPopup.c__DisplayClass21_0 pUVar1;
		MapEditorMapObjectPickerPopup __this_00;

		pUVar1 = this.CS___8__locals1;
		if ((pUVar1 == null) ||(__this_00 = pUVar1.__4__this, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Select(this.id);
		return;
	}
}
