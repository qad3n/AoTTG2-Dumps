// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsMatrixRows.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000192")]
internal sealed class AottgSettingsMatrixRows : AottgComponent, IAottgSettingsSearchable, IAottgSettingsStateSync, IAottgSettingsVirtualItemSource
{
	[Token(Token = "0x40008E7")]
	internal const float ColumnGap = 72f;

	[Token(Token = "0x40008E8")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40008E9")]
	[FieldOffset(Offset = "0x18")]
	private readonly AottgComponent[] _rows;

	[Token(Token = "0x60008C7")]
	[Address(RVA = "0x5D472A0", Offset = "0x5D462A0", VA = "0x5D472A0")]
	public AottgSettingsMatrixRows(string id, params AottgComponent[] rows)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsMatrixRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$.ctor): clean
		base();
		this._id = id;
		if (rows == null) {
			rows = (AottgComponent[])new AottgComponent[0];
		}
		this._rows = rows;
		this.ApplyCompactLayout();
		return;
	}

	[Token(Token = "0x60008C8")]
	[Address(RVA = "0x5D47420", Offset = "0x5D46420", VA = "0x5D47420", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsMatrixRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$Build): 1 lines keep C-only constructs
		String id;
		Action<AottgUi> __this_00;
		GisketchLayoutDefinition layout;

		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_Build_b__4_0);
		id = this._id;
		layout = AottgSettingsMatrixRows.MatrixLayout();
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Panel("clear", __this_00, id, layout, null);
		return;
	}

	[Token(Token = "0x60008C9")]
	[Address(RVA = "0x5D475A0", Offset = "0x5D465A0", VA = "0x5D475A0", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsMatrixRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$ApplySearchContext): 4 lines keep C-only constructs
		uint uVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		VirtualInvokeData pVVar4;
		AottgComponent[] pGVar5;
		object obj;
		ulong uVar6;
		ulong uVar7;
		long lVar8;

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
				obj = ((object)pGVar5[uVar7] as IAottgSettingsSearchable);
				if (obj != null) {
					pIVar2 = obj.klass;
					uVar6 = (ulong)(pIVar2._2).interface_offsets_count;
					if (uVar6 != 0) {
						pIVar3 = (pIVar2._1).interfaceOffsets;
						lVar8 = 0;
						do {
							if (*(IAottgSettingsSearchable*)((long)&pIVar3.interfaceType + lVar8) == typeof(IAottgSettingsSearchable)) {
								pVVar4 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar8);
								goto label_05e475fa;
							}
							lVar8 = lVar8 + 0x10;
						} while (uVar6 * 0x10 != lVar8);
					}
					pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IAottgSettingsSearchable), 0);
	label_05e475fa: ;
					(*pVVar4.methodPtr)(obj,context,pVVar4.method);
				}
				uVar7 = uVar7 + 1;
				pGVar5 = this._rows;
			} while (pGVar5 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60008CA")]
	[Address(RVA = "0x5D476C0", Offset = "0x5D466C0", VA = "0x5D476C0", Slot = "6")]
	public void SyncState(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsMatrixRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$SyncState): 4 lines keep C-only constructs
		uint uVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		VirtualInvokeData pVVar4;
		AottgComponent[] pGVar5;
		object obj;
		ulong uVar6;
		ulong uVar7;
		long lVar8;

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
				obj = ((object)pGVar5[uVar7] as IAottgSettingsStateSync);
				if (obj != null) {
					pIVar2 = obj.klass;
					uVar6 = (ulong)(pIVar2._2).interface_offsets_count;
					if (uVar6 != 0) {
						pIVar3 = (pIVar2._1).interfaceOffsets;
						lVar8 = 0;
						do {
							if (*(IAottgSettingsStateSync*)((long)&pIVar3.interfaceType + lVar8) == typeof(IAottgSettingsStateSync)) {
								pVVar4 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar8);
								goto label_05e4771a;
							}
							lVar8 = lVar8 + 0x10;
						} while (uVar6 * 0x10 != lVar8);
					}
					pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IAottgSettingsStateSync), 0);
	label_05e4771a: ;
					(*pVVar4.methodPtr)(obj,root,pVVar4.method);
				}
				uVar7 = uVar7 + 1;
				pGVar5 = this._rows;
			} while (pGVar5 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60008CB")]
	[Address(RVA = "0x5D477C0", Offset = "0x5D467C0", VA = "0x5D477C0", Slot = "7")]
	public void AddVirtualScrollItems(List<GisketchNodeDefinition> items, AottgUi owner, AottgSettingsSearchContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsMatrixRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$AddVirtualScrollItems): 6 lines keep C-only constructs
		int piVar1;
		int iVar2;
		uint uVar3;
		GisketchNodeDefinition item;
		int iVar4;
		AottgSettingsMatrixRows.c__DisplayClass7_0 __this_00;
		String str2;
		String pSVar5;
		GisketchNodeDefinition[] pGVar6;
		Action<AottgUi> __this_01;
		AottgComponent[] pGVar7;
		Action<AottgUi>* targetAddress;
		int local_3c;
		AottgUi local_38;

		local_38 = owner;
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSettingsMatrixRows.c__DisplayClass7_0)) ;
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			if ((items == null) ||(local_38 == null)) {
				return;
			}
			this.ApplySearchContext(context);
			__this_00.i = 0;
			pGVar7 = this._rows;
			if (pGVar7 != null) {
				targetAddress = &__this_00.__9__0;
				iVar4 = 0;
				do {
					iVar2 = (int)pGVar7.Length;
					if ((iVar2 - (iVar2 + 1 >> 0x1f)) + 1 >> 1 <= iVar4) {
						return;
					}
					__this_01 = *targetAddress;
					if (__this_01 == null) {
						__this_01 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_c__DisplayClass7_0_AddVirtualScrollItem);
						__this_00.__9__0 = __this_01;
						iVar4 = __this_00.i;
					}
					local_3c = iVar4;
					pSVar5 = this._id;
					str2 = local_3c.ToString();
					pSVar5 = String.Concat(pSVar5, "-pair-", str2);
					pGVar6 = local_38.BuildDetached(__this_01, pSVar5);
					if (pGVar6 == null) break;
					if (pGVar6.Length != 0) {
						if ((int)pGVar6.Length == 0) {
							throw new IndexOutOfRangeException();
						}
						item = pGVar6[0];
						piVar1 = &items._version;
						*piVar1 = *piVar1 + 1;
						pGVar6 = items._items;
						if (pGVar6 == null) break;
						uVar3 = items._size;
						if (uVar3 < (uint)pGVar6.Length) {
							items._size = uVar3 + 1;
							pGVar6[(int)uVar3] = item;
						}
						else {
							items.AddWithResize((object)item);
						}
					}
					iVar4 = __this_00.i + 1;
					__this_00.i = iVar4;
					pGVar7 = this._rows;
				} while (pGVar7 != null);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60008CC")]
	[Address(RVA = "0x5D47320", Offset = "0x5D46320", VA = "0x5D47320")]
	private void ApplyCompactLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsMatrixRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$ApplyCompactLayout): 4 lines keep C-only constructs
		uint uVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		VirtualInvokeData pVVar4;
		AottgComponent[] pGVar5;
		object obj;
		ulong uVar6;
		ulong uVar7;
		long lVar8;

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
								goto label_05e4736a;
							}
							lVar8 = lVar8 + 0x10;
						} while (uVar6 * 0x10 != lVar8);
					}
					pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IAottgSettingRowLayoutAware), 0);
	label_05e4736a: ;
					(*pVVar4.methodPtr)(obj,1,pVVar4.method);
				}
				uVar7 = uVar7 + 1;
				pGVar5 = this._rows;
			} while (pGVar5 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60008CD")]
	[Address(RVA = "0x5D47AB0", Offset = "0x5D46AB0", VA = "0x5D47AB0")]
	private int RowsPerColumn()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsMatrixRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$RowsPerColumn): clean
		int iVar1;
		AottgComponent[] pGVar2;

		pGVar2 = this._rows;
		if (pGVar2 == null) {
			throw new NullReferenceException();
		}
		iVar1 = (int)pGVar2.Length;
		return (iVar1 - (iVar1 + 1 >> 0x1f)) + 1 >> 1;
	}

	[Token(Token = "0x60008CE")]
	[Address(RVA = "0x5D47AE0", Offset = "0x5D46AE0", VA = "0x5D47AE0")]
	private void BuildPair(AottgUi ui, int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsMatrixRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$BuildPair): 2 lines keep C-only constructs
		int iVar1;
		AottgComponent[] pGVar2;
		AottgSettingsMatrixRows.c__DisplayClass10_0 __this_00;
		Action<AottgUi> __this_01;
		String pSVar3;
		GisketchLayoutDefinition layout;
		MethodInfo method_00;
		int local_24;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSettingsMatrixRows.c__DisplayClass10_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			__this_00.index = index;
			pGVar2 = this._rows;
			if (pGVar2 != null) {
				iVar1 = (int)pGVar2.Length;
				__this_00.rightIndex = ((iVar1 - (iVar1 + 1 >> 0x1f)) + 1 >> 1) + index;
				__this_01 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_c__DisplayClass10_0_BuildPair_b__0);
				local_24 = __this_00.index;
				method_00 = (MethodInfo)this._id;
				pSVar3 = local_24.ToString();
				pSVar3 = String.Concat((String)method_00, "-pair-", pSVar3);
				layout = AottgSettingsMatrixRows.PairLayout();
				if (ui != null) {
					ui.Panel("clear", __this_01, pSVar3, layout, null);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60008CF")]
	[Address(RVA = "0x5D47D40", Offset = "0x5D46D40", VA = "0x5D47D40")]
	private void BuildCell(AottgUi pair, int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsMatrixRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$BuildCell): 2 lines keep C-only constructs
		AottgSettingsMatrixRows.c__DisplayClass11_0 __this_00;
		Action<AottgUi> __this_01;
		String pSVar1;
		GisketchLayoutDefinition layout;
		MethodInfo method_00;
		int iStack_24;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSettingsMatrixRows.c__DisplayClass11_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			__this_00.index = index;
			__this_01 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_c__DisplayClass11_0_BuildCell_b__0);
			iStack_24 = __this_00.index;
			method_00 = (MethodInfo)this._id;
			pSVar1 = iStack_24.ToString();
			pSVar1 = String.Concat((String)method_00, "-cell-", pSVar1);
			layout = AottgSettingsMatrixRows.CellLayout();
			if (pair != null) {
				pair.Panel("clear", __this_01, pSVar1, layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60008D0")]
	[Address(RVA = "0x5D47FC0", Offset = "0x5D46FC0", VA = "0x5D47FC0")]
	private void BuildSpacer(AottgUi pair, int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsMatrixRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$BuildSpacer): clean
		String pSVar1;
		GisketchLayoutDefinition layout;
		MethodInfo method_00;
		int iStack_1c;

		iStack_1c = index;
		method_00 = (MethodInfo)this._id;
		pSVar1 = iStack_1c.ToString();
		pSVar1 = String.Concat((String)method_00, "-spacer-", pSVar1);
		layout = AottgSettingsMatrixRows.CellLayout();
		if (pair == null) {
			throw new NullReferenceException();
		}
		pair.Panel("clear", null, pSVar1, layout, null);
		return;
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x5D47A50", Offset = "0x5D46A50", VA = "0x5D47A50")]
	private string PairId(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsMatrixRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$PairId): clean
		String str2;
		String pSVar1;
		int local_c;

		local_c = index;
		pSVar1 = this._id;
		str2 = local_c.ToString();
		pSVar1 = String.Concat(pSVar1, "-pair-", str2);
		return pSVar1;
	}

	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x5D47EA0", Offset = "0x5D46EA0", VA = "0x5D47EA0")]
	private string CellId(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsMatrixRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$CellId): clean
		String str2;
		String pSVar1;
		int local_c;

		local_c = index;
		pSVar1 = this._id;
		str2 = local_c.ToString();
		pSVar1 = String.Concat(pSVar1, "-cell-", str2);
		return pSVar1;
	}

	[Token(Token = "0x60008D3")]
	[Address(RVA = "0x5D48080", Offset = "0x5D47080", VA = "0x5D48080")]
	private string SpacerId(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsMatrixRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$SpacerId): clean
		String str2;
		String pSVar1;
		int local_c;

		local_c = index;
		pSVar1 = this._id;
		str2 = local_c.ToString();
		pSVar1 = String.Concat(pSVar1, "-spacer-", str2);
		return pSVar1;
	}

	[Token(Token = "0x60008D4")]
	[Address(RVA = "0x5D474D0", Offset = "0x5D464D0", VA = "0x5D474D0")]
	private static GisketchLayoutDefinition MatrixLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsMatrixRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$MatrixLayout): clean
		GisketchLength width;
		GisketchLayoutDefinition pGVar1;

		width = AottgUi.Percent(100.0);
		pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 6.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		return pGVar1;
	}

	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x5D47C60", Offset = "0x5D46C60", VA = "0x5D47C60")]
	private static GisketchLayoutDefinition PairLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsMatrixRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$PairLayout): clean
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar1;

		width = AottgUi.Percent(100.0);
		height = AottgUi.Points(72.0);
		pGVar1 = AottgUi.Layout("Row", null, "Stretch", null, null, 72.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		return pGVar1;
	}

	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x5D47F00", Offset = "0x5D46F00", VA = "0x5D47F00")]
	private static GisketchLayoutDefinition CellLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsMatrixRows.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$CellLayout): clean
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar1;

		width = AottgUi.Points(0.0);
		height = AottgUi.Percent(100.0);
		pGVar1 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
		return pGVar1;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsMatrixRows.c.

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows.<>c__DisplayClass7_0$$.ctor: clean
	private void c__DisplayClass7_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows.<>c__DisplayClass10_0$$.ctor: clean
	private void c__DisplayClass10_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows.<>c__DisplayClass11_0$$.ctor: clean
	private void c__DisplayClass11_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$<Build>b__4_0: clean
	private void Build_b__4_0(AottgUi matrix)
	{
		int iVar1;
		AottgComponent[] pGVar2;
		uint uVar3;
		int index;

		pGVar2 = this._rows;
		if (pGVar2 != null) {
			index = 0;
			do {
				iVar1 = (int)pGVar2.Length;
				uVar3 = -(iVar1 + 1 >> 0x1f);
				if ((int)(iVar1 + uVar3 + 1) >> 1 <= index) {
					return;
				}
				this.BuildPair(matrix, index);
				index = index + 1;
				pGVar2 = this._rows;
			} while (pGVar2 != null);
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows.<>c__DisplayClass10_0$$<BuildPair>b__0: clean
	private void c__DisplayClass10_0__BuildPair_b__0(AottgUi pair)
	{
		int index;
		AottgSettingsMatrixRows pGVar1;
		AottgComponent[] pGVar2;

		pGVar1 = this.__4__this;
		if (pGVar1 != null) {
			pGVar1.BuildCell(pair, this.index);
			pGVar1 = this.__4__this;
			if ((pGVar1 != null) &&(pGVar2 = pGVar1._rows, pGVar2 != null)) {
				index = this.rightIndex;
				if (index < (int)pGVar2.Length) {
					pGVar1.BuildCell(pair, index);
					return;
				}
				pGVar1.BuildSpacer(pair, this.index);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows.<>c__DisplayClass11_0$$<BuildCell>b__0: clean
	private void c__DisplayClass11_0__BuildCell_b__0(AottgUi cell)
	{
		uint uVar1;
		AottgSettingsMatrixRows pGVar2;
		AottgComponent[] pGVar3;
		AottgComponent pGVar4;

		pGVar2 = this.__4__this;
		if ((pGVar2 != null) &&(pGVar3 = pGVar2._rows, pGVar3 != null)) {
			uVar1 = this.index;
			if ((uint)pGVar3.Length <= uVar1) {
				throw new IndexOutOfRangeException();
			}
			if (cell != null) {
				pGVar4 = pGVar3[(int)uVar1];
				if (pGVar4 == null) {
					return;
				}
				pGVar4.Build(cell);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows.<>c__DisplayClass7_0$$<AddVirtualScrollItems>b__0: clean
	private void c__DisplayClass7_0__AddVirtualScrollItems_b__0(AottgUi pair)
	{
		AottgSettingsMatrixRows __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.BuildPair(pair, this.i);
		return;
	}
}
