// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRowBlock.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200019A")]
internal sealed class AottgSettingsRowBlock : IAottgSettingsStateSync
{
	[Token(Token = "0x40008FB")]
	[FieldOffset(Offset = "0x10")]
	private readonly AottgComponent[] _rows;

	[Token(Token = "0x40008FC")]
	[FieldOffset(Offset = "0x18")]
	private AottgSettingsGroupLayoutMode _layoutMode;

	[Token(Token = "0x17000111")]
	internal AottgSettingsGroupLayoutMode LayoutMode
	{
		[Token(Token = "0x60008ED")]
		[Address(RVA = "0x5D49A30", Offset = "0x5D48A30", VA = "0x5D49A30")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRowBlock.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$get_LayoutMode): clean
			return this._layoutMode;
		}
	}

	[Token(Token = "0x60008EA")]
	[Address(RVA = "0x5D499B0", Offset = "0x5D489B0", VA = "0x5D499B0")]
	private AottgSettingsRowBlock(AottgSettingsGroupLayoutMode layoutMode, AottgComponent[] rows)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRowBlock.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$.ctor): clean


		base();
		if (rows == null) {
			rows = (AottgComponent[])new AottgComponent[0];
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		this._rows = rows;
		this.SetLayoutMode(layoutMode);
		return;
	}

	[Token(Token = "0x60008EB")]
	[Address(RVA = "0x5D48ED0", Offset = "0x5D47ED0", VA = "0x5D48ED0")]
	internal static AottgSettingsRowBlock SingleColumn(params AottgComponent[] rows)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRowBlock.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$SingleColumn): clean
		AottgSettingsRowBlock __this;

		__this = new AottgSettingsRowBlock();
		if (rows == null) {
			rows = (AottgComponent[])new AottgComponent[0];
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this._rows = rows;
		__this.SetLayoutMode(1);
		return __this;
	}

	[Token(Token = "0x60008EC")]
	[Address(RVA = "0x5D40CA0", Offset = "0x5D3FCA0", VA = "0x5D40CA0")]
	internal static AottgSettingsRowBlock TwoColumn(params AottgComponent[] rows)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRowBlock.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$TwoColumn): clean
		AottgSettingsRowBlock __this;

		__this = new AottgSettingsRowBlock();
		if (rows == null) {
			rows = (AottgComponent[])new AottgComponent[0];
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this._rows = rows;
		__this.SetLayoutMode(0);
		return __this;
	}

	[Token(Token = "0x60008EE")]
	[Address(RVA = "0x5D41270", Offset = "0x5D40270", VA = "0x5D41270")]
	internal void SetLayoutMode(AottgSettingsGroupLayoutMode layoutMode)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRowBlock.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$SetLayoutMode): 4 lines keep C-only constructs
		uint uVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		VirtualInvokeData pVVar4;
		AottgComponent[] pGVar5;
		object obj;
		ulong uVar6;
		ulong uVar7;
		long lVar8;

		this._layoutMode = layoutMode;
		pGVar5 = this._rows;
		if (pGVar5 != null) {
			uVar7 = 0;
			do {
				uVar1 = (uint)pGVar5.Length;
				if ((long)(int)uVar1 <= (long)uVar7) {
					return;
				}
				if (uVar1 <= uVar7) {
					throw new IndexOutOfRangeException();
				}
				obj = ((object)pGVar5[uVar7] as IAottgSettingRowLayoutAware);
				if (obj != null) {
					pIVar2 = obj.klass;
					uVar6 = (ulong)(pIVar2._2).interface_offsets_count;
					if (uVar6 != 0) {
						pIVar3 = (pIVar2._1).interfaceOffsets;
						lVar8 = 0;
						do {
							if (*(IAottgSettingRowLayoutAware*)((long)&pIVar3.interfaceType + lVar8) == typeof(IAottgSettingRowLayoutAware)) {
								pVVar4 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar8);
								goto label_05e412ca;
							}
							lVar8 = lVar8 + 0x10;
						} while (uVar6 * 0x10 != lVar8);
					}
					pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IAottgSettingRowLayoutAware), 0);
	label_05e412ca: ;
					(*pVVar4.methodPtr)(obj,(uint)(layoutMode == 0),pVVar4.method);
				}
				uVar7 = uVar7 + 1;
				pGVar5 = this._rows;
			} while (pGVar5 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60008EF")]
	[Address(RVA = "0x5D426E0", Offset = "0x5D416E0", VA = "0x5D426E0")]
	internal void Build(AottgUi ui, string id, AottgSettingsSearchContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRowBlock.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$Build): 2 lines keep C-only constructs
		AottgSettingsRowBlock.c__DisplayClass8_0 __this_00;
		Action<AottgUi> __this_01;
		String id_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSettingsRowBlock.c__DisplayClass8_0));
		__this_00 = new Object();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		__this_00.id = id;
		__this_00.context.GroupTitle = context.GroupTitle;
		__this_00.context.CategoryTitle = context.CategoryTitle;
		__this_00.context.GroupId = context.GroupId;
		__this_00.context.ScreenTitle = context.ScreenTitle;
		__this_00.context.CategoryId = context.CategoryId;
		if (ui != null) {
			__this_01 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_c__DisplayClass8_0_Build_b__0);
			id_00 = String.Concat(__this_00.id, "-rows");
			width = AottgUi.Percent(100.0);
			layout = AottgUi.Layout("Column", null, "Stretch", null, null, 6.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			ui.Panel("clear", __this_01, id_00, layout, null);
		}
		return;
	}

	[Token(Token = "0x60008F0")]
	[Address(RVA = "0x5D421D0", Offset = "0x5D411D0", VA = "0x5D421D0")]
	internal void AddVirtualScrollItems(List<GisketchNodeDefinition> items, AottgUi owner, string id, AottgSettingsSearchContext context, bool separateFromPreviousBlock)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRowBlock.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$AddVirtualScrollItems): 2 lines keep C-only constructs
		int index;
		AottgSettingsMatrixRows __this_00;
		GisketchNodeDefinition pGVar1;
		String id_00;
		undefined3 in_register_00000081;
		uint uVar2;

		uVar2 = CONCAT31(in_register_00000081, separateFromPreviousBlock);
		if ((items != null) &&(owner != null)) {
			index = items._size;
			if (this._layoutMode == 0) {
				__this_00 = this.MatrixRows(id);
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.AddVirtualScrollItems(items, owner, context);
			}
			else {
				this.AddSingleColumnItems(items, owner, id, context);
			}
			if ((separateFromPreviousBlock) && (index < items._size)) {
				pGVar1 = items.get_Item(index);
				id_00 = String.Concat(id, "-start");
				pGVar1 = AottgSettingsRowBlock.SpacedItem(pGVar1, id_00);
				items.set_Item(index, (object)pGVar1);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60008F1")]
	[Address(RVA = "0x5D419D0", Offset = "0x5D409D0", VA = "0x5D419D0", Slot = "4")]
	public void SyncState(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRowBlock.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$SyncState): 4 lines keep C-only constructs
		uint uVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		bool bVar4;
		VirtualInvokeData pVVar5;
		AottgComponent[] pGVar6;
		object obj;
		ulong uVar7;
		ulong uVar8;
		long lVar9;

		bVar4 = ((Object)root == null);
		if (bVar4) {
			return;
		}
		pGVar6 = this._rows;
		if (pGVar6 != null) {
			uVar8 = 0;
			do {
				uVar1 = (uint)pGVar6.Length;
				if ((long)(int)uVar1 <= (long)uVar8) {
					return;
				}
				if (uVar1 <= uVar8) {
					throw new IndexOutOfRangeException();
				}
				obj = ((object)pGVar6[uVar8] as IAottgSettingsStateSync);
				if (obj != null) {
					pIVar2 = obj.klass;
					uVar7 = (ulong)(pIVar2._2).interface_offsets_count;
					if (uVar7 != 0) {
						pIVar3 = (pIVar2._1).interfaceOffsets;
						lVar9 = 0;
						do {
							if (*(IAottgSettingsStateSync*)((long)&pIVar3.interfaceType + lVar9) == typeof(IAottgSettingsStateSync)) {
								pVVar5 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar9);
								goto label_05e41a6a;
							}
							lVar9 = lVar9 + 0x10;
						} while (uVar7 * 0x10 != lVar9);
					}
					pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IAottgSettingsStateSync), 0);
	label_05e41a6a: ;
					(*pVVar5.methodPtr)(obj,root,pVVar5.method);
				}
				uVar8 = uVar8 + 1;
				pGVar6 = this._rows;
			} while (pGVar6 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60008F2")]
	[Address(RVA = "0x5D49B30", Offset = "0x5D48B30", VA = "0x5D49B30")]
	private void AddSingleColumnItems(List<GisketchNodeDefinition> items, AottgUi owner, string id, AottgSettingsSearchContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRowBlock.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$AddSingleColumnItems): 14 lines keep C-only constructs
		int __this_00;
		uint uVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		AottgSettingsRowBlock.c__DisplayClass11_0 __this_01;
		VirtualInvokeData pVVar4;
		AottgComponent[] pGVar5;
		object pIVar6;
		Action<AottgUi> __this_02;
		String pSVar7;
		GisketchNodeDefinition[] nodes;
		uint uVar8;
		Action<AottgUi>* targetAddress;
		ulong uVar9;
		long lVar10;

		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSettingsRowBlock.c__DisplayClass11_0));
		__this_01 = new Object();
		if (__this_01 != null) {
			__this_01.__4__this = this;
			__this_01.i = 0;
			pGVar5 = this._rows;
			if (pGVar5 != null) {
				__this_00 = &__this_01.i;
				targetAddress = &__this_01.__9__0;
				uVar8 = 0;
				do {
					uVar1 = (uint)pGVar5.Length;
					if ((int)uVar1 <= (int)uVar8) {
						return;
					}
					if (uVar1 <= uVar8) {
	label_05e49ec2: ;
						throw new IndexOutOfRangeException();
					}
					if ((object)pGVar5[(int)uVar8] != null) {
						pIVar6 = ((object)pGVar5[(int)uVar8] as IAottgSettingsVirtualItemSource);
						if (pIVar6 == null) {
							pGVar5 = this._rows;
							if (pGVar5 == null) break;
							if ((uint)pGVar5.Length <= (uint)*__this_00) goto label_05e49ec2;
							pIVar6 = ((object)pGVar5[*__this_00] as IAottgSettingsSearchable);
							if (pIVar6 != null) {
								pIVar2 = pIVar6.klass;
								uVar9 = (ulong)(pIVar2._2).interface_offsets_count;
								if (uVar9 != 0) {
									pIVar3 = (pIVar2._1).interfaceOffsets;
									lVar10 = 0;
									do {
										if (*(IAottgSettingsSearchable*)((long)&pIVar3.interfaceType + lVar10) == typeof(IAottgSettingsSearchable)) {
											pVVar4 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar10);
											goto label_05e49dc4;
										}
										lVar10 = lVar10 + 0x10;
									} while (uVar9 * 0x10 != lVar10);
								}
								pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar6, (Il2CppClass)typeof(IAottgSettingsSearchable), 0) ;
	label_05e49dc4: ;
								(*pVVar4.methodPtr)(pIVar6,context,pVVar4.method);
							}
							__this_02 = *targetAddress;
							if (__this_02 == null) {
								__this_02 = new Action<AottgUi>((object)__this_01, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_c__DisplayClass11_0_AddSingleColumnItems);
								__this_01.__9__0 = __this_02;
							}
							pSVar7 = __this_00.ToString();
							pSVar7 = String.Concat(id, "-row-", pSVar7);
							if (owner == null) break;
							nodes = owner.BuildDetached(__this_02, pSVar7);
							pSVar7 = __this_00.ToString();
							pSVar7 = String.Concat(id, "-virtual-row-", pSVar7);
							AottgSettingsRowBlock.AddItemNodes(items, nodes, pSVar7) ;
						}
						else {
							pIVar2 = pIVar6.klass;
							uVar9 = (ulong)(pIVar2._2).interface_offsets_count;
							if (uVar9 != 0) {
								pIVar3 = (pIVar2._1).interfaceOffsets;
								lVar10 = 0;
								do {
									if (*(IAottgSettingsVirtualItemSource*)((long)&pIVar3.interfaceType + lVar10) == typeof(IAottgSettingsVirtualItemSource)) {
										pVVar4 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar10);
										goto label_05e49c2a;
									}
									lVar10 = lVar10 + 0x10;
								} while (uVar9 * 0x10 != lVar10);
							}
							pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar6, (Il2CppClass)typeof(IAottgSettingsVirtualItemSource), 0);
	label_05e49c2a: ;
							(*pVVar4.methodPtr)(pIVar6,items,owner,context,pVVar4.method);
						}
					}
					uVar8 = *__this_00 + 1;
					*__this_00 = uVar8;
					pGVar5 = this._rows;
				} while (pGVar5 != null);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60008F3")]
	[Address(RVA = "0x5D49A50", Offset = "0x5D48A50", VA = "0x5D49A50")]
	private AottgSettingsMatrixRows MatrixRows(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRowBlock.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$MatrixRows): clean
		String pSVar1;
		AottgSettingsMatrixRows __this_00;
		AottgComponent[] method_00;

		pSVar1 = String.Concat(id, "-matrix");
		method_00 = this._rows;
		__this_00 = new AottgSettingsMatrixRows();
		__this_00._id = pSVar1;
		if (method_00 == null) {
			method_00 = (AottgComponent[])new AottgComponent[0];
		}
		__this_00._rows = method_00;
		__this_00.ApplyCompactLayout();
		return __this_00;
	}

	[Token(Token = "0x60008F4")]
	[Address(RVA = "0x5D49ED0", Offset = "0x5D48ED0", VA = "0x5D49ED0")]
	private static GisketchNodeDefinition SpacedItem(GisketchNodeDefinition item, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRowBlock.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$SpacedItem): clean
		GisketchNodeDefinition __this;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar1;
		GisketchNodeDefinition[] pGVar2;

		__this = new GisketchNodeDefinition();
		if (__this != null) {
			__this.type = "Panel";
			__this.id = id;
			__this.style = "clear";
			__this.value = "SettingsSpacingBefore";
			width = AottgUi.Percent(100.0);
			height = AottgUi.Points(72.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			__this.layout = pGVar1;
			pGVar2 = (GisketchNodeDefinition[])new GisketchNodeDefinition[1];
			if (pGVar2 != null) {
				if ((int)pGVar2.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				pGVar2[0] = item;
				__this.children = pGVar2;
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60008F5")]
	[Address(RVA = "0x5D4A100", Offset = "0x5D49100", VA = "0x5D4A100")]
	private static void AddItemNodes(List<GisketchNodeDefinition> items, GisketchNodeDefinition[] nodes, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRowBlock.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$AddItemNodes): 9 lines keep C-only constructs
		int piVar1;
		GisketchNodeDefinition* ppGVar2;
		uint uVar3;
		GisketchNodeDefinition[] pGVar4;
		GisketchNodeDefinition __this;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar5;
		MethodInfo pMVar6;

		pMVar6 = MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add;
		if ((nodes == null) || (nodes.Length == 0)) {
			return;
		}
		if ((int)nodes.Length == 1) {
			if (items != null) {
				__this = nodes[0];
				piVar1 = &items._version;
				*piVar1 = *piVar1 + 1;
				pGVar4 = items._items;
				if (pGVar4 != null) {
					uVar3 = items._size;
					if ((uint)pGVar4.Length <= uVar3) {
						pMVar6 = pMVar6.klass.rgctx_data[0xe].method;
	label_05e4a380: ;
						items.AddWithResize((object)__this);
						return;
					}
					items._size = uVar3 + 1;
					ppGVar2 = pGVar4.m_Items + (long)(int)uVar3 + -4;
					pGVar4[(int)uVar3] = __this;
	label_05e4a347: ;
					return;
				}
			}
		}
		else {
			__this = new GisketchNodeDefinition();
			if (__this != null) {
				__this.type = "Panel";
				__this.id = id;
				__this.style = "clear";
				width = AottgUi.Percent(100.0);
				height = AottgUi.Points(72.0);
				pGVar5 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
				__this.layout = pGVar5;
				__this.children = nodes;
				pMVar6 = MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add;
				if (items != null) {
					piVar1 = &items._version;
					*piVar1 = *piVar1 + 1;
					pGVar4 = items._items;
					if (pGVar4 != null) {
						uVar3 = items._size;
						if ((uint)pGVar4.Length <= uVar3) {
							pMVar6 = pMVar6.klass.rgctx_data[0xe].method;
							goto label_05e4a380;
						}
						items._size = uVar3 + 1;
						ppGVar2 = pGVar4.m_Items + (long)(int)uVar3 + -4;
						pGVar4[(int)uVar3] = __this;
						goto label_05e4a347;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRowBlock.c.

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock.<>c__DisplayClass8_0$$.ctor: clean
	private void c__DisplayClass8_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock.<>c__DisplayClass11_0$$.ctor: clean
	private void c__DisplayClass11_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock.<>c__DisplayClass11_0$$<AddSingleColumnItems>b__0: clean
	private void c__DisplayClass11_0__AddSingleColumnItems_b__0(AottgUi row)
	{
		uint uVar1;
		AottgSettingsRowBlock pGVar2;
		AottgComponent[] pGVar3;

		pGVar2 = this.__4__this;
		if ((pGVar2 != null) &&(pGVar3 = pGVar2._rows, pGVar3 != null)) {
			uVar1 = this.i;
			if ((uint)pGVar3.Length <= uVar1) {
				throw new IndexOutOfRangeException();
			}
			if (row != null) {
				row.Component(pGVar3[(int)uVar1]);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock.<>c__DisplayClass8_0$$<Build>b__0: 4 lines keep C-only constructs
	private void c__DisplayClass8_0__Build_b__0(AottgUi block)
	{
		uint uVar1;
		AottgComponent[] pGVar2;
		Il2CppClass pIVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		AottgSettingsSearchContext context;
		object obj;
		VirtualInvokeData pVVar5;
		AottgSettingsMatrixRows __this_00;
		ulong uVar6;
		ulong uVar7;
		MethodInfo method_00;
		AottgSettingsRowBlock pGVar8;
		long lVar9;

		pGVar8 = this.__4__this;
		if (pGVar8 != null) {
			if (pGVar8._layoutMode == 0) {
				method_00 = (MethodInfo)this.id;
				__this_00 = pGVar8.MatrixRows((String)method_00);
				if ((__this_00 != null) &&(__this_00.ApplySearchContext((AottgSettingsSearchContext)this.context), block != null)) {
					block.Component((AottgComponent)__this_00);
					return;
				}
			}
			else {
				uVar7 = 0;
				while (true) {
					pGVar2 = pGVar8._rows;
					if (!(pGVar2 != null)) break;
					uVar1 = (uint)pGVar2.Length;
					if ((long)(int)uVar1 <= (long)uVar7) {
						return;
					}
					if (uVar1 <= uVar7) {
	label_05e4a5cc: ;
						throw new IndexOutOfRangeException();
					}
					obj = ((object)pGVar2[uVar7] as IAottgSettingsSearchable);
					if (obj != null) {
						context = this.context;
						pIVar3 = obj.klass;
						uVar6 = (ulong)(pIVar3._2).interface_offsets_count;
						if (uVar6 != 0) {
							pIVar4 = (pIVar3._1).interfaceOffsets;
							lVar9 = 0;
							do {
								if (*(IAottgSettingsSearchable*)((long)&pIVar4.interfaceType + lVar9) == typeof(IAottgSettingsSearchable)) {
									pVVar5 = pIVar3.vtable + *(int)((long)&pIVar4.offset + lVar9);
									goto label_05e4a4ed;
								}
								lVar9 = lVar9 + 0x10;
							} while (uVar6 * 0x10 != lVar9);
						}
						pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IAottgSettingsSearchable), 0);
	label_05e4a4ed: ;
						(*pVVar5.methodPtr)(obj,(AottgSettingsSearchContext)context,pVVar5.method );
					}
					pGVar8 = this.__4__this;
					if ((pGVar8 == null) ||(pGVar2 = pGVar8._rows, pGVar2 == null)) break;
					if ((uint)pGVar2.Length <= uVar7) goto label_05e4a5cc;
					if (block == null) break;
					block.Component(pGVar2[uVar7]);
					uVar7 = uVar7 + 1;
					pGVar8 = this.__4__this;
					if (pGVar8 == null) break;
				}
			}
		}
		throw new NullReferenceException();
	}
}
