// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorAddComponentPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorAddComponentPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorAddComponentPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200088D")]
internal class MapEditorAddComponentPanel : CategoryPanel
{
	[Token(Token = "0x4002B23")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected GameObject _noItemsLabel;

	[Token(Token = "0x4002B24")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	protected List<GameObject> _itemButtons;

	[Token(Token = "0x17000E3F")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6005156")]
		[Address(RVA = "0x5C5C2E0", Offset = "0x5C5B2E0", VA = "0x5C5C2E0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddComponentPanel.c (UI.MapEditorAddComponentPanel$$get_ScrollBar): clean
			return true;
		}
	}

	[Token(Token = "0x17000E40")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6005157")]
		[Address(RVA = "0x5C5C2F0", Offset = "0x5C5B2F0", VA = "0x5C5C2F0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddComponentPanel.c (UI.MapEditorAddComponentPanel$$get_HorizontalPadding): clean
			return 0;
		}
	}

	[Token(Token = "0x17000E41")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6005158")]
		[Address(RVA = "0x5C5C300", Offset = "0x5C5B300", VA = "0x5C5C300", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddComponentPanel.c (UI.MapEditorAddComponentPanel$$get_VerticalPadding): clean
			return 5;
		}
	}

	[Token(Token = "0x17000E42")]
	protected virtual float ItemButtonWidth
	{
		[Token(Token = "0x6005159")]
		[Address(RVA = "0x5C5C310", Offset = "0x5C5B310", VA = "0x5C5C310", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddComponentPanel.c (UI.MapEditorAddComponentPanel$$get_ItemButtonWidth): clean
			return 450.0;
		}
	}

	[Token(Token = "0x17000E43")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600515A")]
		[Address(RVA = "0x5C5C320", Offset = "0x5C5B320", VA = "0x5C5C320", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddComponentPanel.c (UI.MapEditorAddComponentPanel$$get_VerticalSpacing): clean
			return 5.0;
		}
	}

	[Token(Token = "0x17000E44")]
	protected virtual int ItemFontSize
	{
		[Token(Token = "0x600515B")]
		[Address(RVA = "0x5C5C330", Offset = "0x5C5B330", VA = "0x5C5C330", Slot = "36")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddComponentPanel.c (UI.MapEditorAddComponentPanel$$get_ItemFontSize): clean
			return 0x12;
		}
	}

	[Token(Token = "0x17000E45")]
	protected virtual float DeleteButtonSize
	{
		[Token(Token = "0x600515C")]
		[Address(RVA = "0x5C5C340", Offset = "0x5C5B340", VA = "0x5C5C340", Slot = "37")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddComponentPanel.c (UI.MapEditorAddComponentPanel$$get_DeleteButtonSize): clean
			return 20.0;
		}
	}

	[Token(Token = "0x17000E46")]
	protected override string ThemePanel
	{
		[Token(Token = "0x600515D")]
		[Address(RVA = "0x5C5C350", Offset = "0x5C5B350", VA = "0x5C5C350", Slot = "4")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorAddComponentPanel.c (UI.MapEditorAddComponentPanel$$get_ThemePanel): clean
			return "SelectListPopup";
		}
	}

	[Token(Token = "0x600515E")]
	[Address(RVA = "0x5C5C380", Offset = "0x5C5B380", VA = "0x5C5C380", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/MapEditorAddComponentPanel.c (UI.MapEditorAddComponentPanel$$Setup): 2 lines keep C-only constructs
		byte bVar1;
		MapEditorAddComponentPanel a;
		Transform parent_00;
		bool bVar2;
		String pSVar3;
		String pSVar4;
		ElementStyle __this_00;
		GameObject pUVar5;
		List<string> original;
		MethodInfo method_00;
		MapEditorAddComponentPanel __this_01;

		this.Setup(parent);
		if (parent != null) {
			bVar1 = (typeof(MapEditorAddComponentPopup)._2).typeHierarchyDepth;
			if (((parent.klass._2).typeHierarchyDepth < bVar1) ||((parent.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(MapEditorAddComponentPopup))) {
	label_05d5c60a: ;
				throw new InvalidCastException();
			}
			pSVar3 = parent.GetCurrentCategoryName();
			pUVar5 = (*(ulong)((sbyte)parent + 0xa8));
			if (pUVar5 != null) {
				a = (*(ulong)((sbyte)pUVar5 + 0x20));
				parent_00 = this.SinglePanel;
				pSVar4 = this.get_ThemePanel();
				__this_00 = new ElementStyle(0x18, 120.0, 20.0, pSVar4);
				pSVar4 = UIManager.GetLocale("Common", "NoItemsFound", "", "", "");
				pUVar5 = ElementFactory.CreateDefaultLabel(parent_00, __this_00, pSVar4, 0, 4);
				this._noItemsLabel = pUVar5;
				parent = (BasePanel)SceneLoader.CurrentGameManager;
				if (parent != null) {
					bVar1 = (typeof(MapEditorGameManager)._2).typeHierarchyDepth;
					method_00 = (MethodInfo)(ulong)bVar1;
					if ((bVar1 <= (((BaseGameManager)parent.klass)._2).typeHierarchyDepth) &&((((BaseGameManager)parent.klass)._2).typeHierarchy [(long)&method_00[-1].field_0x57] == typeof(MapEditorGameManager))) {
						if (parent.DoublePanelRight == null) {
							return;
						}
						original = this.GetItems(pSVar3);
						__this_01 = a;
						bVar2 = ((String)a != (String)**(ulong*)(g_data_07556758 + 0xb8));
						if (bVar2) {
							original = __this_01.Filter(original, (String)a);
						}
						this.CreateList(original);
						return;
					}
					goto label_05d5c60a;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600515F")]
	[Address(RVA = "0x5C5D0A0", Offset = "0x5C5C0A0", VA = "0x5C5D0A0", Slot = "38")]
	protected virtual List<string> GetItems(string category)
	{
		// Lifted from source/cpp/UI/MapEditorAddComponentPanel.c (UI.MapEditorAddComponentPanel$$GetItems): 28 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		BaseGameManager pGVar4;
		HashSet<object> pSVar5;
		String[] pSVar6;
		object pIVar8;
		System_Collections_Generic_List_Enumerator_object__o pSVar9;
		bool bVar10;
		List<string> __this_00;
		List<string> __this_01;
		System_Collections_Generic_List_Enumerator_object__o SStack_78;
		byte[] auStack_58 = new byte[16];
		String pSStack_48;

		if (Il2CppMethodInitialized_07547f5a == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_07547f5a = true;
		}
		SStack_78._list = null;
		SStack_78._index = 0;
		SStack_78._version = 0;
		SStack_78._current = null;
		pGVar4 = SceneLoader.CurrentGameManager;
		__this_00 = new List<string>();
		if (pGVar4 != null) {
			bVar2 = (typeof(MapEditorGameManager)._2).typeHierarchyDepth;
			if (((pGVar4.klass._2).typeHierarchyDepth < bVar2) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(MapEditorGameManager))) {
				throw new InvalidCastException();
			}
			if (((*(ulong)((sbyte)pGVar4 + 0x30)) != null) &&(__this_01 = ((*(ulong)((sbyte)pGVar4 + 0x30))).GetComponentNames(), __this_01 != null)) {
				__this_01.Sort();
				bVar10 = (category == "All");
				if (bVar10) {
					__this_00 = __this_01;
				}
				else {
					bVar10 = (category == "General");
					if (bVar10) {
						auStack_58.GetEnumerator((List<object>)__this_01);
						SStack_78._current = (object)pSStack_48;
						SStack_78._list = (List<T>)auStack_58._0_8_;
						SStack_78._index = auStack_58._8_4_;
						SStack_78._version = auStack_58._12_4_;
						auStack_58._0_8_ = null;
						auStack_58._8_8_ = &SStack_78;
						pSVar9 = &SStack_78;
						if (__this_00 == null) {
							while (true) {
								auStack_58._8_8_ = pSVar9;
								bVar10 = SStack_78.MoveNext();
								pIVar8 = SStack_78._current;
								if (!(bVar10)) break;
								pSVar5 = (HashSet<object>)CustomLogicManager.GeneralComponents;
								if (pSVar5 == null) {
	label_05d5d40b: ;
									throw new NullReferenceException();
								}
								bVar10 = pSVar5.Contains(pIVar8);
								pSVar9 = (System_Collections_Generic_List_Enumerator_object__o)auStack_58._8_8_;
								if (bVar10) {
	label_05d5d410: ;
									throw new NullReferenceException();
								}
							}
						}
						else {
							while (true) {
								bVar10 = SStack_78.MoveNext();
								pIVar8 = SStack_78._current;
								if (!(bVar10)) break;
								pSVar5 = (HashSet<object>)CustomLogicManager.GeneralComponents;
								if (pSVar5 == null) goto label_05d5d40b;
								bVar10 = pSVar5.Contains(pIVar8);
								if (bVar10) {
									piVar1 = &__this_00._version;
									*piVar1 = *piVar1 + 1;
									pSVar6 = __this_00._items;
									if (pSVar6 == null) goto label_05d5d410;
									uVar3 = __this_00._size;
									if (uVar3 < (uint)pSVar6.Length) {
										__this_00._size = uVar3 + 1;
										pSVar6[(int)uVar3] = (String)pIVar8;
									}
									else {
										__this_00.AddWithResize(pIVar8);
									}
								}
							}
						}
					}
					else {
						bVar10 = (category == "Internal");
						if (bVar10) {
							auStack_58.GetEnumerator((List<object>)__this_01);
							SStack_78._current = (object)pSStack_48;
							SStack_78._list = (List<T>)auStack_58._0_8_;
							SStack_78._index = auStack_58._8_4_;
							SStack_78._version = auStack_58._12_4_;
							auStack_58._0_8_ = null;
							auStack_58._8_8_ = &SStack_78;
	label_05d5d50a: ;
							bVar10 = SStack_78.MoveNext();
							pIVar8 = SStack_78._current;
							if (bVar10) {
								pSVar5 = (HashSet<object>)CustomLogicManager.InternalComponents;
								if (pSVar5 == null) {
									throw new NullReferenceException();
								}
								bVar10 = pSVar5.Contains(pIVar8);
								if (bVar10) {
									if (__this_00 != null) {
										piVar1 = &__this_00._version;
										*piVar1 = *piVar1 + 1;
										pSVar6 = __this_00._items;
										if (pSVar6 != null) {
											uVar3 = __this_00._size;
											if (uVar3 < (uint)pSVar6.Length) {
												__this_00._size = uVar3 + 1;
												pSVar6[(int)uVar3] = (String)pIVar8;
											}
											else {
												__this_00.AddWithResize(pIVar8);
											}
											goto label_05d5d50a;
										}
									}
									throw new NullReferenceException();
								}
								goto label_05d5d50a;
							}
						}
						else {
							bVar10 = (category == "Custom");
							if (!bVar10) {
								return __this_00;
							}
							auStack_58.GetEnumerator((List<object>)__this_01);
							SStack_78._current = (object)pSStack_48;
							SStack_78._list = (List<T>)auStack_58._0_8_;
							SStack_78._index = auStack_58._8_4_;
							SStack_78._version = auStack_58._12_4_;
							auStack_58._0_8_ = null;
							auStack_58._8_8_ = &SStack_78;
	label_05d5d6a0: ;
							bVar10 = SStack_78.MoveNext();
							pIVar8 = SStack_78._current;
							if (bVar10) {
								pSVar5 = (HashSet<object>)CustomLogicManager.InternalComponents;
								if (pSVar5 == null) {
									throw new NullReferenceException();
								}
								bVar10 = pSVar5.Contains(pIVar8);
								if (!bVar10) {
									pSVar5 = (HashSet<object>)CustomLogicManager.GeneralComponents;
									if (pSVar5 == null) {
										throw new NullReferenceException();
									}
									bVar10 = pSVar5.Contains(pIVar8);
									if (!bVar10) {
										if (__this_00 != null) {
											piVar1 = &__this_00._version;
											*piVar1 = *piVar1 + 1;
											pSVar6 = __this_00._items;
											if (pSVar6 != null) {
												uVar3 = __this_00._size;
												if (uVar3 < (uint)pSVar6.Length) {
													__this_00._size = uVar3 + 1;
													pSVar6[(int)uVar3] = (String)pIVar8;
												}
												else {
													__this_00.AddWithResize(pIVar8);
												}
												goto label_05d5d6a0;
											}
										}
										throw new NullReferenceException();
									}
								}
								goto label_05d5d6a0;
							}
						}
					}
					SStack_78.Dispose() ;
				}
				return __this_00;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005160")]
	[Address(RVA = "0x5C5C610", Offset = "0x5C5B610", VA = "0x5C5C610")]
	protected List<string> Filter(List<string> original, string search)
	{
		// Lifted from source/cpp/UI/MapEditorAddComponentPanel.c (UI.MapEditorAddComponentPanel$$Filter): 12 lines keep C-only constructs
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
					if (!bVar6) goto label_05d5c84c;
					if ((String)local_68._current == null) goto label_05d5c870;
					pSVar7 = local_68._current.ToLower();
					if (pSVar7 == null) goto label_05d5c875;
					bVar6 = pSVar7.Contains(value);
					pSVar5 = (System_Collections_Generic_List_Enumerator_object__o)local_48._8_8_;
				} while (!bVar6);
	label_05d5c847: ;
				throw new NullReferenceException();
			}
			while (true) {
				bVar6 = local_68.MoveNext();
				item = local_68._current;
				if (!(bVar6)) break;
				if ((String)local_68._current == null) {
	label_05d5c870: ;
					throw new NullReferenceException();
				}
				pSVar7 = local_68._current.ToLower();
				if (pSVar7 == null) {
	label_05d5c875: ;
					throw new NullReferenceException();
				}
				bVar6 = pSVar7.Contains(value);
				if (bVar6) {
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar3 = __this_00._items;
					if (pSVar3 == null) goto label_05d5c847;
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
	label_05d5c84c: ;
			local_68.Dispose();
		}
		return __this_00;
	}

	[Token(Token = "0x6005161")]
	[Address(RVA = "0x5C5C8F0", Offset = "0x5C5B8F0", VA = "0x5C5C8F0")]
	protected void CreateList(List<string> items)
	{
		// Lifted from source/cpp/UI/MapEditorAddComponentPanel.c (UI.MapEditorAddComponentPanel$$CreateList): 16 lines keep C-only constructs
		UnityEvent __this_00;
		ColorBlock value;
		Button __this_01;
		bool bVar1;
		int value_00;
		MapEditorAddComponentPanel.c__DisplayClass21_0 __this_02;
		GameObject pUVar2;
		Transform pUVar3;
		Button __this_03;
		UnityAction __this_04;
		Text pUVar4;
		String pSVar5;
		LayoutElement pUVar6;
		float fVar7;
		float fVar8;
		Color UVar9;
		System_Collections_Generic_List_Enumerator_object__o local_128;
		List<string> local_108;
		Button local_100;
		System_Collections_Generic_List_Enumerator_object__o local_f0;
		Color local_c8;
		Color local_b8;
		Color[] local_a8 = new Color[2];
		byte[] local_88 = new byte[32];
		Color local_68;
		Color local_58;
		Color local_48;
		float local_38;
		float fStack_34;

		local_128._list = null;
		local_128._index = 0;
		local_128._version = 0;
		local_128._current = null;
		if (items != null) {
			local_108 = items;
			local_88.GetEnumerator((List<object>)items);
			local_128._current = (object)local_88._16_8_;
			local_128._list = (List<T>)local_88._0_8_;
			local_128._index = local_88._8_4_;
			local_128._version = local_88._12_4_;
			local_f0 = &local_128;
			while(true) {
				bVar1 = local_128.MoveNext();
				if (!bVar1) break;
				__this_02 = new MapEditorAddComponentPanel.c__DisplayClass21_0();
				if (__this_02 == null) {
					throw new NullReferenceException();
				}
				__this_02.__4__this = this;
				__this_02.item = (String)local_128._current;
				pUVar2 = ElementFactory.InstantiateAndBind(this.SinglePanel, "Prefabs/Misc/SelectListButton");
				if (pUVar2 == null) {
					throw new NullReferenceException();
				}
				pUVar3 = pUVar2.transform;
				if (pUVar3 == null) {
					throw new NullReferenceException();
				}
				pUVar3 = pUVar3.Find("ItemButton");
				if (pUVar3 == null) {
					throw new NullReferenceException();
				}
				__this_03 = pUVar3.GetComponent<Button>();
				pUVar3 = pUVar2.transform;
				if (pUVar3 == null) {
					throw new NullReferenceException();
				}
				pUVar3 = pUVar3.Find("DeleteButton");
				if (pUVar3 == null) {
					throw new NullReferenceException();
				}
				local_100 = pUVar3.GetComponent<Button>();
				if (__this_03 == null) {
					throw new NullReferenceException();
				}
				__this_00 = (UnityEvent)__this_03.m_OnClick;
				__this_04 = new UnityAction((object)__this_02, (intptr_t)MethodInfo_UI_MapEditorAddComponentPanel_c__DisplayClass21_0_CreateList_b__0);
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.AddListener(__this_04);
				pUVar3 = __this_03.transform;
				if (pUVar3 == null) {
					throw new NullReferenceException();
				}
				pUVar3 = pUVar3.Find("Text");
				if (pUVar3 == null) {
					throw new NullReferenceException();
				}
				pUVar4 = pUVar3.GetComponent<Text>();
				if (pUVar4 == null) {
					throw new NullReferenceException();
				}
				pUVar4.set_text(__this_02.item);
				pUVar3 = __this_03.transform;
				if (pUVar3 == null) {
					throw new NullReferenceException();
				}
				pUVar3 = pUVar3.Find("Text");
				if (pUVar3 == null) {
					throw new NullReferenceException();
				}
				pUVar4 = pUVar3.GetComponent<Text>();
				value_00 = this.get_ItemFontSize();
				if (pUVar4 == null) {
					throw new NullReferenceException();
				}
				pUVar4.fontSize = value_00;
				pSVar5 = this.get_ThemePanel();
				UIManager.GetThemeColorBlock((ColorBlock)local_88, pSVar5, "ItemButton", "", "DefaultPanel");
				local_a8[1].r = local_38;
				local_a8[1].g = fStack_34;
				local_a8[0].r = local_48.r;
				local_a8[0].g = local_48.g;
				local_a8[0].b = local_48.b;
				local_a8[0].a = local_48.a;
				local_b8.r = local_58.r;
				local_b8.g = local_58.g;
				local_b8.b = local_58.b;
				local_b8.a = local_58.a;
				local_c8.r = local_68.r;
				local_c8.g = local_68.g;
				local_c8.b = local_68.b;
				local_c8.a = local_68.a;
				value.m_NormalColor.b = (float)local_88._8_4_;
				value.m_NormalColor.a = (float)local_88._12_4_;
				value.m_NormalColor.r = (float)local_88._0_4_;
				value.m_NormalColor.g = (float)local_88._4_4_;
				value.m_HighlightedColor.r = (float)local_88._16_4_;
				value.m_HighlightedColor.g = (float)local_88._20_4_;
				value.m_HighlightedColor.b = (float)local_88._24_4_;
				value.m_HighlightedColor.a = (float)local_88._28_4_;
				value.m_PressedColor.r = local_68.r;
				value.m_PressedColor.g = local_68.g;
				value.m_PressedColor.b = local_68.b;
				value.m_PressedColor.a = local_68.a;
				value.m_SelectedColor.r = local_58.r;
				value.m_SelectedColor.g = local_58.g;
				value.m_SelectedColor.b = local_58.b;
				value.m_SelectedColor.a = local_58.a;
				value.m_DisabledColor.r = local_48.r;
				value.m_DisabledColor.g = local_48.g;
				value.m_DisabledColor.b = local_48.b;
				value.m_DisabledColor.a = local_48.a;
				value.m_ColorMultiplier = local_38;
				value.m_FadeDuration = fStack_34;
				__this_03.colors = value;
				pUVar3 = __this_03.transform;
				if (pUVar3 == null) {
					throw new NullReferenceException();
				}
				pUVar3 = pUVar3.Find("Text");
				if (pUVar3 == null) {
					throw new NullReferenceException();
				}
				pUVar4 = pUVar3.GetComponent<Text>();
				pSVar5 = this.get_ThemePanel();
				__this_01 = local_100;
				UVar9 = UIManager.GetThemeColor(pSVar5, "ItemButton", "TextColor", "DefaultPanel");
				if (pUVar4 == null) {
					throw new NullReferenceException();
				}
				pUVar4.set_color(UVar9);
				pUVar6 = __this_03.GetComponent<LayoutElement>();
				fVar7 = this.get_ItemButtonWidth();
				fVar8 = this.get_DeleteButtonSize();
				if (pUVar6 == null) {
	label_05d5cf5f: ;
					throw new NullReferenceException();
				}
				pUVar6.set_preferredWidth(fVar7 + fVar8 + 10.0);
				if (__this_01 == null) goto label_05d5cf5f;
				pUVar2 = __this_01.gameObject;
				if (pUVar2 == null) {
					throw new NullReferenceException();
				}
				pUVar2.SetActive(false);
			}
			local_128.Dispose();
			pUVar2 = this._noItemsLabel;
			if (pUVar2 != null) {
				pUVar2.SetActive(local_108._size < 1);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005162")]
	[Address(RVA = "0x5C5D820", Offset = "0x5C5C820", VA = "0x5C5D820")]
	private void OnItemClick(string name)
	{
		// Lifted from source/cpp/UI/MapEditorAddComponentPanel.c (UI.MapEditorAddComponentPanel$$OnItemClick): 5 lines keep C-only constructs
		byte bVar1;
		BasePanel pUVar2;
		Dictionary<string, Type> __this_00;
		RawImage pUVar3;
		ulong uVar4;
		ulong uVar5;

		pUVar2 = this.Parent;
		if (pUVar2 != null) {
			bVar1 = (typeof(MapEditorAddComponentPopup)._2).typeHierarchyDepth;
			if (((pUVar2.klass._2).typeHierarchyDepth < bVar1) ||((pUVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(MapEditorAddComponentPopup))) {
				throw new InvalidCastException();
			}
			__this_00 = (*(ulong)((sbyte)pUVar2 + 0xb8));
			if (__this_00 != null) {
				__this_00.Value = (object)name;
				pUVar3 = (*(ulong)((sbyte)pUVar2 + 0xc0));
				if (pUVar3 != null) {
					uVar4._0_4_ = pUVar3.m_Color.r;
					uVar4._4_4_ = pUVar3.m_Color.g;
					uVar5._0_4_ = pUVar3.m_RaycastPadding.y;
					uVar5._4_4_ = pUVar3.m_RaycastPadding.z;
					(*(code)pUVar3.m_CancellationTokenSource)(uVar5,uVar4);
					pUVar2.Hide();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005163")]
	[Address(RVA = "0x5C5D980", Offset = "0x5C5C980", VA = "0x5C5D980")]
	public MapEditorAddComponentPanel()
	{
		// Lifted from source/cpp/UI/MapEditorAddComponentPanel.c (UI.MapEditorAddComponentPanel$$.ctor): clean
		List<GameObject> __this_00;

		__this_00 = new List<GameObject>();
		this._itemButtons = __this_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MapEditorAddComponentPanel.c.

	// UI.MapEditorAddComponentPanel.<>c__DisplayClass21_0$$.ctor: clean
	private void c__DisplayClass21_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorAddComponentPanel.<>c__DisplayClass21_0$$<CreateList>b__0: clean
	private void c__DisplayClass21_0__CreateList_b__0()
	{
		MapEditorAddComponentPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnItemClick(this.item);
		return;
	}
}
