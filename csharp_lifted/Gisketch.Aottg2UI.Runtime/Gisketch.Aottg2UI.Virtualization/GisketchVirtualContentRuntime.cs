// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Gisketch.Aottg2UI.Actions;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Virtualization;

[Token(Token = "0x200000B")]
public sealed class GisketchVirtualContentRuntime : MonoBehaviour, IGisketchSearchTargetMaterializer
{
	[Token(Token = "0x200000C")]
	private sealed class Slot
	{
		[Token(Token = "0x4000047")]
		[FieldOffset(Offset = "0x10")]
		public readonly GameObject Root;

		[Token(Token = "0x4000048")]
		[FieldOffset(Offset = "0x18")]
		public int ItemIndex;

		[Token(Token = "0x6000071")]
		[Address(RVA = "0x5220260", Offset = "0x521F260", VA = "0x5220260")]
		public Slot(GameObject root)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime.Slot$$.ctor): clean
			this.ItemIndex = -1;
			base();
			this.Root = root;
			return;
		}
	}

	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<Slot> _slots;

	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0x28")]
	private IGisketchVirtualContentSource _source;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x30")]
	private ScrollRect _scroll;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x38")]
	private UnityAction<Vector2> _scrollChanged;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x40")]
	private LayoutElement _layout;

	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x48")]
	private GisketchVirtualRange _range;

	[Token(Token = "0x1700000D")]
	public bool IsVirtualized
	{
		[Token(Token = "0x600005A")]
		[Address(RVA = "0x521E7D0", Offset = "0x521D7D0", VA = "0x521E7D0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$get_IsVirtualized): 8 lines keep C-only constructs
			object pIVar1;
			Il2CppClass pIVar2;
			Il2CppRuntimeInterfaceOffsetPair pIVar3;
			bool bVar4;
			int iVar5;
			VirtualInvokeData pVVar6;
			ulong uVar7;
			long lVar8;
			GisketchVirtualContentMetrics local_40;

			pIVar1 = (object)this._source;
			if (pIVar1 == null) {
			}
			else {
				pIVar2 = pIVar1.klass;
				uVar7 = (ulong)(pIVar2._2).interface_offsets_count;
				if (uVar7 != 0) {
					pIVar3 = (pIVar2._1).interfaceOffsets;
					lVar8 = 0;
					do {
						if (*(IGisketchVirtualContentSource*)((long)&pIVar3.interfaceType + lVar8) == typeof(IGisketchVirtualContentSource)) {
							pVVar6 = pIVar2.vtable + (*(int)((long)&pIVar3.offset + lVar8) + 1);
							goto label_0531e86b;
						}
						lVar8 = lVar8 + 0x10;
					} while (uVar7 * 0x10 != lVar8);
				}
				pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar1, (Il2CppClass)typeof(IGisketchVirtualContentSource), 1);
		label_0531e86b: ;
				(*pVVar6.methodPtr)(&local_40,pIVar1,pVVar6.method);
				pIVar1 = (object)this._source;
				if (pIVar1 == null) {
					throw new NullReferenceException();
				}
				pIVar2 = pIVar1.klass;
				uVar7 = (ulong)(pIVar2._2).interface_offsets_count;
				if (uVar7 != 0) {
					pIVar3 = (pIVar2._1).interfaceOffsets;
					lVar8 = 0;
					do {
						if (*(IGisketchVirtualContentSource*)((long)&pIVar3.interfaceType + lVar8) == typeof(IGisketchVirtualContentSource)) {
							pVVar6 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar8);
							goto label_0531e8e1;
						}
						lVar8 = lVar8 + 0x10;
					} while (uVar7 * 0x10 != lVar8);
				}
				pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar1, (Il2CppClass)typeof(IGisketchVirtualContentSource), 0);
		label_0531e8e1: ;
				iVar5 = (*pVVar6.methodPtr)(pIVar1,pVVar6.method);
				bVar4 = local_40.VirtualizationThreshold <= iVar5;
			}
			return bVar4;
		}
	}

	[Token(Token = "0x1700000E")]
	public int LiveSlotCount
	{
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x521E900", Offset = "0x521D900", VA = "0x521E900")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$get_LiveSlotCount): clean
			List<GisketchVirtualContentRuntime.Slot> pSVar1;

			pSVar1 = this._slots;
			if (pSVar1 == null) {
				throw new NullReferenceException();
			}
			return pSVar1._size;
		}
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x521E940", Offset = "0x521D940", VA = "0x521E940")]
	public void Setup(IGisketchVirtualContentSource source)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$Setup): 7 lines keep C-only constructs
		ScrollRect* targetAddress;
		UnityAction<Vector2>* targetAddress_00;
		ScrollRect pUVar1;
		UnityAction<T0> call;
		UnityEngine_Events_UnityEvent_Vector2__o pUVar2;
		bool bVar3;
		ScrollRect pUVar4;
		GameObject pUVar5;
		LayoutElement pUVar6;
		UnityAction<Vector2> __this_00;

		this._source = source;
		pUVar4 = this.GetComponentInParent<ScrollRect>();
		pUVar1 = this._scroll;
		targetAddress = &this._scroll;
		bVar3 = ((Object)pUVar1 != null);
		if ((bVar3) &&(call = (UnityAction<T0>)this._scrollChanged, call != null)) {
			if ((*targetAddress == null) ||(pUVar2 = (UnityEngine_Events_UnityEvent_Vector2__o)((*targetAddress).fields).m_OnValueChanged, pUVar2 == null)) goto label_0531eb60;
			pUVar2.RemoveListener(call);
		}
		this._scroll = pUVar4;
		pUVar5 = this.gameObject;
		if (pUVar5 != null) {
			pUVar6 = pUVar5.GetComponent<LayoutElement>();
			if (pUVar6 == null) {
				pUVar5 = this.gameObject;
				if (pUVar5 == null) goto label_0531eb60;
				pUVar6 = pUVar5.AddComponent<LayoutElement>();
			}
			this._layout = pUVar6;
			this.Refresh(true);
			pUVar1 = this._scroll;
			bVar3 = ((Object)pUVar1 != null);
			if (!bVar3) {
				return;
			}
			targetAddress_00 = &this._scrollChanged;
			if (this._scrollChanged == null) {
				__this_00 = new UnityAction<Vector2>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Virtualization_GisketchVirtualContentRuntime_Setup_b__10_0);
				this._scrollChanged = __this_00;
			}
			if ((*targetAddress != null) &&(pUVar2 = (UnityEngine_Events_UnityEvent_Vector2__o)((*targetAddress).fields).m_OnValueChanged, pUVar2 != null)) {
				pUVar2.AddListener((UnityAction<T0>)*targetAddress_00);
				return;
			}
		}
	label_0531eb60: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x521EF20", Offset = "0x521DF20", VA = "0x521EF20")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$OnDestroy): 2 lines keep C-only constructs
		ScrollRect pUVar1;
		UnityAction<T0> call;
		UnityEngine_Events_UnityEvent_Vector2__o __this_00;
		bool bVar2;

		pUVar1 = this._scroll;
		bVar2 = ((Object)pUVar1 != null);
		if ((bVar2) &&(call = (UnityAction<T0>)this._scrollChanged, call != null)) {
			pUVar1 = this._scroll;
			if ((pUVar1 == null) ||(__this_00 = (UnityEngine_Events_UnityEvent_Vector2__o)pUVar1.m_OnValueChanged, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.RemoveListener(call);
			return;
		}
		return;
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x521EB70", Offset = "0x521DB70", VA = "0x521EB70")]
	public void Refresh(bool force)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$Refresh): 15 lines keep C-only constructs
		object pIVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		LayoutElement pUVar4;
		ulong uVar5;
		bool bVar6;
		int iVar7;
		int iVar8;
		uint itemCount;
		VirtualInvokeData pVVar9;
		MethodInfo pMVar10;
		GisketchVirtualRange range;
		GisketchVirtualContentRuntime.Slot pGVar11;
		ulong uVar12;
		int iVar13;
		MethodInfo pMVar14;
		long lVar15;
		float fVar16;
		float viewportHeight;
		GisketchVirtualContentMetrics local_78;
		GisketchVirtualContentMetrics local_50;

		pIVar1 = (object)this._source;
		if (pIVar1 == null) {
			return;
		}
		pIVar2 = pIVar1.klass;
		uVar12 = (ulong)(pIVar2._2).interface_offsets_count;
		if (uVar12 != 0) {
			pIVar3 = (pIVar2._1).interfaceOffsets;
			lVar15 = 0;
			do {
				if (*(IGisketchVirtualContentSource*)((long)&pIVar3.interfaceType + lVar15) == typeof(IGisketchVirtualContentSource)) {
					pVVar9 = pIVar2.vtable + (*(int)((long)&pIVar3.offset + lVar15) + 1);
					goto label_0531ec14;
				}
				lVar15 = lVar15 + 0x10;
			} while (uVar12 * 0x10 != lVar15);
		}
		pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar1, (Il2CppClass)typeof(IGisketchVirtualContentSource), 1);
	label_0531ec14: ;
		(*pVVar9.methodPtr)((GisketchVirtualContentMetrics)&local_50,pIVar1, pVVar9.method);
		local_78.Gap = local_50.Gap;
		local_78.ViewportHeight = local_50.ViewportHeight;
		local_78.VirtualizationThreshold = local_50.VirtualizationThreshold;
		local_78.OverscanRows = local_50.OverscanRows;
		local_78.Mode = local_50.Mode;
		local_78.Columns = local_50.Columns;
		uVar5 = local_78._0_8_;
		local_78.ItemWidth = local_50.ItemWidth;
		local_78.ItemHeight = local_50.ItemHeight;
		pUVar4 = this._layout;
		local_78.Mode = local_50.Mode;
		if (local_78.Mode == 0) {
			fVar16 = -1.0;
		}
		else {
			local_78.Columns = local_50.Columns;
			iVar8 = 0;
			if (0 < local_78.Columns + -1) {
				iVar8 = local_78.Columns + -1;
			}
			fVar16 = (float)iVar8 * local_78.Gap + (float)local_78.Columns * local_78.ItemWidth;
		}
		local_78._0_8_ = uVar5;
		if (pUVar4 != null) {
			pUVar4.set_preferredWidth(fVar16);
			pIVar1 = (object)this._source;
			if (pIVar1 != null) {
				pUVar4 = this._layout;
				pIVar2 = pIVar1.klass;
				uVar12 = (ulong)(pIVar2._2).interface_offsets_count;
				if (uVar12 != 0) {
					pIVar3 = (pIVar2._1).interfaceOffsets;
					lVar15 = 0;
					do {
						if (*(IGisketchVirtualContentSource*)((long)&pIVar3.interfaceType + lVar15) == typeof(IGisketchVirtualContentSource)) {
							pVVar9 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar15);
							goto label_0531ed01;
						}
						lVar15 = lVar15 + 0x10;
					} while (uVar12 * 0x10 != lVar15);
				}
				pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar1, (Il2CppClass)typeof(IGisketchVirtualContentSource), 0);
	label_0531ed01: ;
				iVar7 = (*pVVar9.methodPtr)(pIVar1,pVVar9.method);
				if (iVar7 < 1) {
					iVar8 = 0;
				}
				else {
					fVar16 = (float)local_78.Columns;
					fVar16 = ceilf((float)iVar7 / fVar16);
					iVar8 = (int)fVar16;
				}
				if (pUVar4 != null) {
					iVar13 = 0;
					if (0 < iVar8 + -1) {
						iVar13 = iVar8 + -1;
					}
					pMVar10 = (pUVar4.klass.vtable)._38_set_preferredHeight.method;
					pUVar4.set_preferredHeight((float)iVar13 * local_78.Gap + (float)iVar8 * local_78.ItemHeight);
					bVar6 = this.IsVirtualized;
					if (bVar6) {
						pIVar1 = (object)this._source;
						if (pIVar1 == null) goto label_0531ef17;
						pIVar2 = pIVar1.klass;
						uVar12 = (ulong)(pIVar2._2).interface_offsets_count;
						if (uVar12 != 0) {
							pIVar3 = (pIVar2._1).interfaceOffsets;
							lVar15 = 0;
							do {
								if (*(IGisketchVirtualContentSource*)((long)&pIVar3.interfaceType + lVar15) == typeof(IGisketchVirtualContentSource)) {
									pMVar10 = (MethodInfo)(pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar15));
									goto label_0531ee5e;
								}
								lVar15 = lVar15 + 0x10;
							} while (uVar12 * 0x10 != lVar15);
						}
						pMVar10 = (MethodInfo)GetInterfaceInvokeDataFromVTableSlowPath(pIVar1, (Il2CppClass)typeof(IGisketchVirtualContentSource), 0);
	label_0531ee5e: ;
						pMVar14 = (MethodInfo)pMVar10.virtualMethodPointer;
						itemCount = (*pMVar10.methodPointer)(pIVar1,pMVar14);
						fVar16 = this.ScrollOffset();
						viewportHeight = this.ViewportHeight();
						pMVar14 = (MethodInfo)(ulong)itemCount;
						range = (GisketchVirtualRange)local_78.RangeFor(itemCount, fVar16, viewportHeight);
						iVar8 = range.End;
						iVar13 = range.Start;
						if ((iVar8 < iVar13) || ((iVar8 - iVar13) + 1 < 1)) {
							this.UnbindAll();
						}
						else {
							pMVar14 = (MethodInfo)(ulong)(uint)range.Start;
							if (((!force) && (this._range.Start == iVar13)) &&(this._range.End == iVar8)) {
								return;
							}
							this.RecycleOutside((GisketchVirtualRange)range);
							do {
								iVar13 = (int)pMVar14;
								pGVar11 = this.SlotFor(iVar13);
								if (pGVar11 == null) {
									pGVar11 = this.FreeSlot();
									this.Bind(pGVar11, iVar13);
								}
								pMVar14 = (MethodInfo)(ulong)(iVar13 + 1U);
							} while ((int)(iVar13 + 1U) <= iVar8);
						}
						this._range = range;
					}
					else {
						this.RefreshStatic();
					}
					return;
				}
			}
		}
	label_0531ef17: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x521FCC0", Offset = "0x521ECC0", VA = "0x521FCC0")]
	public bool MaterializeItem(int itemIndex)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$MaterializeItem): 4 lines keep C-only constructs
		object obj;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		int iVar3;
		MethodInfo method_00;
		GisketchVirtualContentRuntime.Slot pGVar4;
		ulong uVar5;
		bool bVar6;
		long lVar7;

		if ((-1 < itemIndex) && (obj = (object)this._source, obj != null)) {
			pIVar1 = obj.klass;
			uVar5 = (ulong)(pIVar1._2).interface_offsets_count;
			if (uVar5 != 0) {
				pIVar2 = (pIVar1._1).interfaceOffsets;
				lVar7 = 0;
				do {
					if (*(IGisketchVirtualContentSource*)((long)&pIVar2.interfaceType + lVar7) == typeof(IGisketchVirtualContentSource)) {
						method_00 = (MethodInfo)(pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar7));
						goto label_0531fd61;
					}
					lVar7 = lVar7 + 0x10;
				} while (uVar5 * 0x10 != lVar7);
			}
			method_00 = (MethodInfo)GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IGisketchVirtualContentSource), 0);
	label_0531fd61: ;
			iVar3 = (*method_00.methodPointer)(obj,(MethodInfo)method_00.virtualMethodPointer);
			if (itemIndex < iVar3) {
				pGVar4 = this.SlotFor(itemIndex);
				if (pGVar4 == null) {
					pGVar4 = this.FreeSlot();
					this.Bind(pGVar4, itemIndex);
				}
			}
			else {
			}
		}
		return bVar6;
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x521FE60", Offset = "0x521EE60", VA = "0x521FE60", Slot = "4")]
	public bool TryMaterializeSearchTarget(string targetId, out GameObject target)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$TryMaterializeSearchTarget): 5 lines keep C-only constructs
		object obj;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		IGisketchVirtualContentSource pGVar3;
		Object x;
		bool bVar4;
		sbyte cVar5;
		VirtualInvokeData pVVar6;
		GisketchVirtualContentRuntime.Slot pGVar7;
		ulong uVar8;
		long lVar9;
		int iStack_34;

		iStack_34 = 0;
		*target = null;
		if ((this._source != null) &&(bVar4 = String.IsNullOrEmpty(targetId), !bVar4)) {
			obj = (object)this._source;
			if (obj == null) {
	label_0531ffea: ;
				throw new NullReferenceException();
			}
			pIVar1 = obj.klass;
			uVar8 = (ulong)(pIVar1._2).interface_offsets_count;
			if (uVar8 != 0) {
				pIVar2 = (pIVar1._1).interfaceOffsets;
				lVar9 = 0;
				do {
					if (*(IGisketchVirtualContentSource*)((long)&pIVar2.interfaceType + lVar9) == typeof(IGisketchVirtualContentSource)) {
						pVVar6 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar9) + 7);
						goto label_0531ff4a;
					}
					lVar9 = lVar9 + 0x10;
				} while (uVar8 * 0x10 != lVar9);
			}
			pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IGisketchVirtualContentSource), 7);
	label_0531ff4a: ;
			bVar4 = (*pVVar6.methodPtr)(obj,targetId,&iStack_34,pVVar6.method);
			if (((bVar4) &&(bVar4 = this.MaterializeItem(iStack_34))) &&(pGVar7 = this.SlotFor(iStack_34), pGVar7 != null)) {
				pGVar3 = this._source;
				if (pGVar3 == null) goto label_0531ffea;
				cVar5 = il2cpp_runtime_helper_02d49f70(8, typeof(IGisketchVirtualContentSource), pGVar3, targetId, iStack_34, pGVar7.Root, target);
				if (cVar5 != false) {
					x = (Object)*target;
					bVar4 = (x != null);
					return bVar4;
				}
			}
		}
		return false;
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x521EFC0", Offset = "0x521DFC0", VA = "0x521EFC0")]
	private void RefreshStatic()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$RefreshStatic): 8 lines keep C-only constructs
		object pIVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		GameObject slot;
		bool bVar4;
		uint uVar5;
		MethodInfo method_00;
		GisketchVirtualContentRuntime.Slot pGVar6;
		VirtualInvokeData pVVar7;
		ulong uVar8;
		uint itemIndex;
		int index;
		long lVar9;
		List<GisketchVirtualContentRuntime.Slot> __this_00;

		pIVar1 = (object)this._source;
		if (pIVar1 != null) {
			pIVar2 = pIVar1.klass;
			uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
			if (uVar8 != 0) {
				pIVar3 = (pIVar2._1).interfaceOffsets;
				lVar9 = 0;
				do {
					if (*(IGisketchVirtualContentSource*)((long)&pIVar3.interfaceType + lVar9) == typeof(IGisketchVirtualContentSource)) {
						method_00 = (MethodInfo)(pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar9));
						goto label_0531f071;
					}
					lVar9 = lVar9 + 0x10;
				} while (uVar8 * 0x10 != lVar9);
			}
			method_00 = (MethodInfo)GetInterfaceInvokeDataFromVTableSlowPath(pIVar1, (Il2CppClass)typeof(IGisketchVirtualContentSource), 0);
	label_0531f071: ;
			uVar5 = (*method_00.methodPointer)(pIVar1,(MethodInfo)method_00.virtualMethodPointer);
			if (0 < (int)uVar5) {
				itemIndex = 0;
				do {
					pGVar6 = this.SlotFor(itemIndex);
					if (pGVar6 == null) {
						pGVar6 = this.FreeSlot();
						this.Bind(pGVar6, itemIndex);
					}
					itemIndex = itemIndex + 1;
				} while (uVar5 != itemIndex);
			}
			__this_00 = this._slots;
			if (__this_00 != null) {
				index = 0;
				do {
					if (__this_00._size <= index) {
						return;
					}
					pGVar6 = (GisketchVirtualContentRuntime.Slot)__this_00.get_Item(index);
					if (pGVar6 == null) break;
					if ((int)uVar5 <= pGVar6.ItemIndex) {
						pIVar1 = (object)this._source;
						if (pIVar1 == null) break;
						slot = pGVar6.Root;
						pIVar2 = pIVar1.klass;
						uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
						if (uVar8 != 0) {
							pIVar3 = (pIVar2._1).interfaceOffsets;
							lVar9 = 0;
							do {
								if (*(IGisketchVirtualContentSource*)((long)&pIVar3.interfaceType + lVar9) == typeof(IGisketchVirtualContentSource)) {
									pVVar7 = pIVar2.vtable + (*(int)((long)&pIVar3.offset + lVar9) + 6);
									goto label_0531f189;
								}
								lVar9 = lVar9 + 0x10;
							} while (uVar8 * 0x10 != lVar9);
						}
						pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar1, (Il2CppClass)typeof(IGisketchVirtualContentSource), 6);
	label_0531f189: ;
						bVar4 = (*pVVar7.methodPtr)(pIVar1,slot,pVVar7.method);
						if (bVar4) {
							this.Unbind(pGVar6);
						}
					}
					index = index + 1;
					__this_00 = this._slots;
				} while (__this_00 != null);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x521F6F0", Offset = "0x521E6F0", VA = "0x521F6F0")]
	private void RecycleOutside(GisketchVirtualRange range)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$RecycleOutside): 4 lines keep C-only constructs
		int iVar1;
		object obj;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		bool bVar4;
		GisketchVirtualContentRuntime.Slot slot;
		VirtualInvokeData pVVar5;
		ulong uVar6;
		int index;
		MethodInfo method_01;
		List<GisketchVirtualContentRuntime.Slot> __this_00;
		long lVar7;
		int local_38;

		__this_00 = this._slots;
		if (__this_00 != null) {
			index = 0;
			do {
				if (__this_00._size <= index) {
					return;
				}
				slot = (GisketchVirtualContentRuntime.Slot)__this_00.get_Item(index);
				if (slot == null) break;
				iVar1 = slot.ItemIndex;
				if ((-1 < iVar1) && ((iVar1 < range.Start || (local_38 = range.End, local_38 < iVar1)))) {
					obj = (object)this._source;
					if (obj == null) break;
					method_01 = (MethodInfo)slot.Root;
					pIVar2 = obj.klass;
					uVar6 = (ulong)(pIVar2._2).interface_offsets_count;
					if (uVar6 != 0) {
						pIVar3 = (pIVar2._1).interfaceOffsets;
						lVar7 = 0;
						do {
							if (*(IGisketchVirtualContentSource*)((long)&pIVar3.interfaceType + lVar7) == typeof(IGisketchVirtualContentSource)) {
								pVVar5 = pIVar2.vtable + (*(int)((long)&pIVar3.offset + lVar7) + 6);
								goto label_0531f829;
							}
							lVar7 = lVar7 + 0x10;
						} while (uVar6 * 0x10 != lVar7);
					}
					pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IGisketchVirtualContentSource), 6);
	label_0531f829: ;
					bVar4 = (*pVVar5.methodPtr)(obj,(GameObject)method_01,pVVar5.method);
					if (bVar4) {
						bVar4 = GisketchVirtualContentRuntime.HasFocusedChild(slot.Root);
						if (!bVar4) {
							this.Unbind(slot);
						}
					}
				}
				index = index + 1;
				__this_00 = this._slots;
			} while (__this_00 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x521F890", Offset = "0x521E890", VA = "0x521F890")]
	private Slot FreeSlot()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$FreeSlot): 8 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Il2CppClass pIVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		GisketchVirtualContentRuntime.Slot[] pGVar5;
		bool bVar7;
		object pIVar8;
		Transform parent;
		VirtualInvokeData pVVar9;
		GisketchVirtualContentRuntime.Slot pGVar10;
		Object x;
		LayoutElement pUVar11;
		ulong uVar12;
		int iVar13;
		List<GisketchVirtualContentRuntime.Slot> pSVar14;
		long lVar15;

		pSVar14 = this._slots;
		if (pSVar14 != null) {
			iVar13 = 0;
			do {
				if (pSVar14._size <= iVar13) {
					pIVar8 = (object)this._source;
					parent = this.transform;
					pSVar14 = this._slots;
					if ((pSVar14 != null) &&(pIVar8 != null)) {
						iVar13 = pSVar14._size;
						pIVar3 = pIVar8.klass;
						uVar12 = (ulong)(pIVar3._2).interface_offsets_count;
						if (uVar12 == 0) goto label_0531f9cf;
						pIVar4 = (pIVar3._1).interfaceOffsets;
						lVar15 = 0;
						goto label_0531f9c0;
					}
					break;
				}
				pIVar8 = pSVar14.get_Item(iVar13);
				if (pIVar8 == null) break;
				if (*(int)&pIVar8[1].monitor < 0) {
					pSVar14 = this._slots;
					if (pSVar14 != null) {
						pGVar10 = (GisketchVirtualContentRuntime.Slot)pSVar14.get_Item(iVar13);
						return pGVar10;
					}
					break;
				}
				iVar13 = iVar13 + 1;
				pSVar14 = this._slots;
			} while (pSVar14 != null);
		}
		goto label_0531fb55;
		while (true) {
			lVar15 = lVar15 + 0x10;
			if (!(uVar12 * 0x10 != lVar15)) break;
	label_0531f9c0: ;
			if (*(IGisketchVirtualContentSource*)((long)&pIVar4.interfaceType + lVar15) == typeof(IGisketchVirtualContentSource)) {
				pVVar9 = pIVar3.vtable + (*(int)((long)&pIVar4.offset + lVar15) + 3);
				goto label_0531fa1f;
			}
		}
	label_0531f9cf: ;
		pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar8, (Il2CppClass)typeof(IGisketchVirtualContentSource), 3);
	label_0531fa1f: ;
		x = (Object)(*pVVar9.methodPtr)(pIVar8,parent,iVar13,pVVar9.method);
		bVar7 = (x == null);
		if (bVar7) {
			return null;
		}
		if ((x != null) &&((pUVar11 = x.GetComponent<LayoutElement>(), pUVar11 != null ||(pUVar11 = x.AddComponent<LayoutElement>(), pUVar11 != null)))) {
			pUVar11.set_ignoreLayout(true);
			pGVar10 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchVirtualContentRuntime.Slot));
			pGVar10.ItemIndex = -1;
			pGVar10 = new Object();
			pGVar10.Root = (GameObject)x;
			pSVar14 = this._slots;
			if (pSVar14 != null) {
				piVar1 = &pSVar14._version;
				*piVar1 = *piVar1 + 1;
				pGVar5 = pSVar14._items;
				if (pGVar5 != null) {
					uVar2 = pSVar14._size;
					if (uVar2 < (uint)pGVar5.Length) {
						pSVar14._size = uVar2 + 1;
						pGVar5[(int)uVar2] = pGVar10;
						return pGVar10;
					}
					pSVar14.AddWithResize((object)pGVar10);
					return pGVar10;
				}
			}
		}
	label_0531fb55: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x521FB60", Offset = "0x521EB60", VA = "0x521FB60")]
	private void Bind(Slot slot, int itemIndex)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$Bind): 4 lines keep C-only constructs
		Object x;
		GameObject pUVar1;
		object obj;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		bool bVar4;
		RectTransform rect;
		VirtualInvokeData pVVar5;
		ulong uVar6;
		long lVar7;

		if (slot != null) {
			x = (Object)slot.Root;
			bVar4 = (x == null);
			if (!bVar4) {
				slot.ItemIndex = itemIndex;
				pUVar1 = slot.Root;
				if (pUVar1 != null) {
					rect = pUVar1.GetComponent<RectTransform>();
					this.Position(rect, itemIndex) ;
					pUVar1 = slot.Root;
					if (pUVar1 != null) {
						pUVar1.SetActive(true);
						obj = (object)this._source;
						if (obj != null) {
							pUVar1 = slot.Root;
							pIVar2 = obj.klass;
							uVar6 = (ulong)(pIVar2._2).interface_offsets_count;
							if (uVar6 != 0) {
								pIVar3 = (pIVar2._1).interfaceOffsets;
								lVar7 = 0;
								do {
									if (*(IGisketchVirtualContentSource*)((long)&pIVar3.interfaceType + lVar7) == typeof(IGisketchVirtualContentSource)) {
										pVVar5 = pIVar2.vtable + (*(int)((long)&pIVar3.offset + lVar7) + 4);
										goto label_0531fc95;
									}
									lVar7 = lVar7 + 0x10;
								} while (uVar6 * 0x10 != lVar7);
							}
							pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IGisketchVirtualContentSource), 4) ;
	label_0531fc95: ;
							(*pVVar5.methodPtr)(obj,pUVar1,itemIndex,pVVar5.method);
							this.PrepareBoundSlot(slot.Root);
							return;
						}
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x521FFF0", Offset = "0x521EFF0", VA = "0x521FFF0")]
	private void Unbind(Slot slot)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$Unbind): 4 lines keep C-only constructs
		Object x;
		object obj;
		GameObject pUVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		bool bVar4;
		VirtualInvokeData pVVar5;
		ulong uVar6;
		long lVar7;

		if (slot != null) {
			x = (Object)slot.Root;
			bVar4 = (x == null);
			if (!bVar4) {
				obj = (object)this._source;
				if (obj != null) {
					pUVar1 = slot.Root;
					pIVar2 = obj.klass;
					uVar6 = (ulong)(pIVar2._2).interface_offsets_count;
					if (uVar6 != 0) {
						pIVar3 = (pIVar2._1).interfaceOffsets;
						lVar7 = 0;
						do {
							if (*(IGisketchVirtualContentSource*)((long)&pIVar3.interfaceType + lVar7) == typeof(IGisketchVirtualContentSource)) {
								pVVar5 = pIVar2.vtable + (*(int)((long)&pIVar3.offset + lVar7) + 5);
								goto label_053200d5;
							}
							lVar7 = lVar7 + 0x10;
						} while (uVar6 * 0x10 != lVar7);
					}
					pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IGisketchVirtualContentSource), 5);
	label_053200d5: ;
					(*pVVar5.methodPtr)(obj,pUVar1,pVVar5.method);
					slot.ItemIndex = -1;
					pUVar1 = slot.Root;
					if (pUVar1 != null) {
						pUVar1.SetActive(false);
						return;
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x521F560", Offset = "0x521E560", VA = "0x521F560")]
	private void UnbindAll()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$UnbindAll): 6 lines keep C-only constructs
		Il2CppClass slot;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		bool bVar3;
		object pIVar4;
		object pIVar5;
		VirtualInvokeData pVVar6;
		GisketchVirtualContentRuntime.Slot slot_00;
		ulong uVar7;
		int index;
		List<GisketchVirtualContentRuntime.Slot> pSVar8;
		long lVar9;

		pSVar8 = this._slots;
		if (pSVar8 != null) {
			index = 0;
			do {
				if (pSVar8._size <= index) {
					return;
				}
				pIVar4 = pSVar8.get_Item(index);
				if (pIVar4 == null) break;
				if (-1 < *(int)&pIVar4[1].monitor) {
					pSVar8 = this._slots;
					if (pSVar8 == null) break;
					pIVar4 = (object)this._source;
					pIVar5 = pSVar8.get_Item(index);
					if ((pIVar5 == null) || (pIVar4 == null)) break;
					slot = pIVar5[1].klass;
					pIVar1 = pIVar4.klass;
					uVar7 = (ulong)(pIVar1._2).interface_offsets_count;
					if (uVar7 != 0) {
						pIVar2 = (pIVar1._1).interfaceOffsets;
						lVar9 = 0;
						do {
							if (*(IGisketchVirtualContentSource*)((long)&pIVar2.interfaceType + lVar9) == typeof(IGisketchVirtualContentSource)) {
								pVVar6 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar9) + 6);
								goto label_0531f699;
							}
							lVar9 = lVar9 + 0x10;
						} while (uVar7 * 0x10 != lVar9);
					}
					pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar4, (Il2CppClass)typeof(IGisketchVirtualContentSource), 6);
	label_0531f699: ;
					bVar3 = (*pVVar6.methodPtr)(pIVar4,(GameObject)slot,pVVar6.method);
					if (bVar3) {
						pSVar8 = this._slots;
						if (pSVar8 == null) break;
						slot_00 = (GisketchVirtualContentRuntime.Slot)pSVar8.get_Item(index);
						this.Unbind(slot_00);
					}
				}
				index = index + 1;
				pSVar8 = this._slots;
			} while (pSVar8 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x521F880", Offset = "0x521E880", VA = "0x521F880")]
	private bool IsBound(int itemIndex)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$IsBound): clean
		GisketchVirtualContentRuntime.Slot pGVar1;

		pGVar1 = this.SlotFor(itemIndex);
		return pGVar1 != null;
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x521FDB0", Offset = "0x521EDB0", VA = "0x521FDB0")]
	private Slot SlotFor(int itemIndex)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$SlotFor): 1 lines keep C-only constructs
		object pIVar1;
		GisketchVirtualContentRuntime.Slot pGVar2;
		int index;
		List<GisketchVirtualContentRuntime.Slot> pSVar3;

		pSVar3 = this._slots;
		if (pSVar3 != null) {
			index = 0;
			do {
				if (pSVar3._size <= index) {
					return null;
				}
				pIVar1 = pSVar3.get_Item(index);
				if (pIVar1 == null) break;
				if (*(int)&pIVar1[1].monitor == itemIndex) {
					pSVar3 = this._slots;
					if (pSVar3 != null) {
						pGVar2 = (GisketchVirtualContentRuntime.Slot)pSVar3.get_Item(index);
						return pGVar2;
					}
					break;
				}
				index = index + 1;
				pSVar3 = this._slots;
			} while (pSVar3 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x52202A0", Offset = "0x521F2A0", VA = "0x52202A0")]
	private void Position(RectTransform rect, int itemIndex)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$Position): 7 lines keep C-only constructs
		object obj;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		Vector2 value;
		bool bVar3;
		VirtualInvokeData pVVar4;
		ulong uVar5;
		long lVar6;
		Vector2 value_00;
		Vector2 value_01;
		float local_78;
		float fStack_74;
		GisketchVirtualContentMetrics local_68;
		float local_48;
		byte[] local_38 = new byte[16];

		bVar3 = ((Object)rect == null);
		if ((!bVar3) && (obj = (object)this._source, obj != null)) {
			pIVar1 = obj.klass;
			uVar5 = (ulong)(pIVar1._2).interface_offsets_count;
			if (uVar5 != 0) {
				pIVar2 = (pIVar1._1).interfaceOffsets;
				lVar6 = 0;
				do {
					if (*(IGisketchVirtualContentSource*)((long)&pIVar2.interfaceType + lVar6) == typeof(IGisketchVirtualContentSource)) {
						pVVar4 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar6) + 1);
						goto label_05320374;
					}
					lVar6 = lVar6 + 0x10;
				} while (uVar5 * 0x10 != lVar6);
			}
			pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IGisketchVirtualContentSource), 1);
	label_05320374: ;
			(*pVVar4.methodPtr)(&local_68,obj,pVVar4.method);
			if (rect == null) {
				throw new NullReferenceException();
			}
			local_38 = ZEXT416((uint)local_68.Gap);
			rect.anchorMin = (Vector2)0x3f80000000000000 ;
			if (local_68.Mode == 0) {
				value_00.x = 1.0;
				value_00.y = 1.0;
				local_48 = 0.0;
			}
			else {
				value_00.x = 0.0;
				value_00.y = 1.0;
			}
			rect.anchorMax = (Vector2)value_00;
			rect.pivot = (Vector2)0x3f80000000000000;
			fStack_74 = local_68.ItemHeight;
			value.y = fStack_74;
			value.x = local_48;
			rect.sizeDelta = value;
			local_78 = local_68.ItemWidth;
			value_01.x = (float)(itemIndex % local_68.Columns) * ((float)local_38._0_4_ + local_78);
			value_01.y = (float)-(itemIndex / local_68.Columns) * ((float)local_38._0_4_ + fStack_74);
			rect.anchoredPosition = value_01;
		}
		return;
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x5220460", Offset = "0x521F460", VA = "0x5220460")]
	private void PrepareBoundSlot(GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$PrepareBoundSlot): 4 lines keep C-only constructs
		object obj;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		bool bVar3;
		VirtualInvokeData pVVar4;
		Transform root_00;
		ulong uVar5;
		long lVar6;
		GisketchVirtualContentMetrics GStack_30;

		bVar3 = ((Object)root == null);
		if ((!bVar3) && (obj = (object)this._source, obj != null)) {
			pIVar1 = obj.klass;
			uVar5 = (ulong)(pIVar1._2).interface_offsets_count;
			if (uVar5 != 0) {
				pIVar2 = (pIVar1._1).interfaceOffsets;
				lVar6 = 0;
				do {
					if (*(IGisketchVirtualContentSource*)((long)&pIVar2.interfaceType + lVar6) == typeof(IGisketchVirtualContentSource)) {
						pVVar4 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar6) + 1);
						goto label_05320534;
					}
					lVar6 = lVar6 + 0x10;
				} while (uVar5 * 0x10 != lVar6);
			}
			pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IGisketchVirtualContentSource), 1);
	label_05320534: ;
			(*pVVar4.methodPtr)(&GStack_30,obj,pVVar4.method);
			if (GStack_30.Mode == 0) {
				if (root == null) {
					throw new NullReferenceException();
				}
				root_00 = root.transform;
				GisketchVirtualContentRuntime.StretchDirectChildren(root_00) ;
				GisketchScreenBuilder.SettleLayout(root, 1);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x52205A0", Offset = "0x521F5A0", VA = "0x52205A0")]
	private static void StretchDirectChildren(Transform root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$StretchDirectChildren): clean
		bool bVar1;
		int iVar2;
		Transform __this;
		RectTransform __this_00;
		int index;

		bVar1 = ((Object)root == null);
		if (!bVar1) {
			if (root == null) {
	label_0532076c: ;
				throw new NullReferenceException();
			}
			index = 0;
			iVar2 = root.childCount;
			if (0 < iVar2) {
				do {
					__this = root.GetChild(index);
					if (__this == null) goto label_0532076c;
					__this_00 = __this.GetComponent<RectTransform>();
					bVar1 = ((Object)__this_00 == null);
					if (!bVar1) {
						if (__this_00 == null) goto label_0532076c;
						__this_00.anchorMin = (Vector2)(Vector2.zeroVector);
						__this_00.anchorMax = (Vector2)(Vector2.oneVector);
						__this_00.offsetMin = (Vector2)(Vector2.zeroVector);
						__this_00.offsetMax = (Vector2)(Vector2.zeroVector);
					}
					index = index + 1;
					iVar2 = root.childCount;
				} while (index < iVar2);
			}
		}
		return;
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x521F1D0", Offset = "0x521E1D0", VA = "0x521F1D0")]
	private float ScrollOffset()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$ScrollOffset): clean
		ScrollRect pUVar1;
		RectTransform pUVar2;
		bool bVar3;
		float fVar4;
		float fVar5;
		Rect UVar6;
		Rect UVar7;
		float fStack_24;

		pUVar1 = this._scroll;
		bVar3 = ((Object)pUVar1 == null);
		if (bVar3) {
			return 0.0;
		}
		pUVar1 = this._scroll;
		if (pUVar1 != null) {
			pUVar2 = pUVar1.m_Content;
			bVar3 = ((Object)pUVar2 == null);
			if (bVar3) {
				return 0.0;
			}
			pUVar1 = this._scroll;
			if (pUVar1 != null) {
				pUVar2 = pUVar1.m_Viewport;
				bVar3 = ((Object)pUVar2 == null);
				if (bVar3) {
					return 0.0;
				}
				pUVar1 = this._scroll;
				if ((pUVar1 != null) &&(pUVar2 = pUVar1.m_Content, pUVar2 != null)) {
					UVar6 = pUVar2.rect;
					pUVar1 = this._scroll;
					if ((pUVar1 != null) &&(pUVar2 = pUVar1.m_Viewport, pUVar2 != null)) {
						UVar7 = pUVar2.rect;
						pUVar1 = this._scroll;
						if (pUVar1 != null) {
							fStack_24 = UVar6.m_Height;
							fStack_24 = fStack_24 - UVar7.m_Height;
							fVar5 = 0.0;
							if (0.0 <= fStack_24) {
								fVar5 = fStack_24;
							}
							fVar4 = pUVar1.verticalNormalizedPosition;
							return (1.0 - fVar4) * fVar5;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x521F350", Offset = "0x521E350", VA = "0x521F350")]
	private float ViewportHeight()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$ViewportHeight): 4 lines keep C-only constructs
		ScrollRect pUVar1;
		RectTransform pUVar2;
		object obj;
		Il2CppClass pIVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		bool bVar5;
		VirtualInvokeData pVVar6;
		ulong uVar7;
		long lVar8;
		Rect UVar9;
		GisketchVirtualContentMetrics local_38;

		pUVar1 = this._scroll;
		bVar5 = ((Object)pUVar1 != null);
		if (bVar5) {
			pUVar1 = this._scroll;
			if (pUVar1 != null) {
				pUVar2 = pUVar1.m_Viewport;
				bVar5 = ((Object)pUVar2 != null);
				if (!bVar5) goto label_0531f497;
				pUVar1 = this._scroll;
				if ((pUVar1 != null) &&(pUVar2 = pUVar1.m_Viewport, pUVar2 != null)) {
					UVar9 = pUVar2.rect;
					if (UVar9.m_Height <= 1.0) goto label_0531f497;
					pUVar1 = this._scroll;
					if ((pUVar1 != null) &&(pUVar2 = pUVar1.m_Viewport, pUVar2 != null)) {
						UVar9 = pUVar2.rect;
						return UVar9.m_Height;
					}
				}
			}
			throw new NullReferenceException();
		}
	label_0531f497: ;
		obj = (object)this._source;
		if (obj == null) {
			local_38.ViewportHeight = 1.0;
		}
		else {
			pIVar3 = obj.klass;
			uVar7 = (ulong)(pIVar3._2).interface_offsets_count;
			if (uVar7 != 0) {
				pIVar4 = (pIVar3._1).interfaceOffsets;
				lVar8 = 0;
				do {
					if (*(IGisketchVirtualContentSource*)((long)&pIVar4.interfaceType + lVar8) == typeof(IGisketchVirtualContentSource)) {
						pVVar6 = pIVar3.vtable + (*(int)((long)&pIVar4.offset + lVar8) + 1);
						goto label_0531f50e;
					}
					lVar8 = lVar8 + 0x10;
				} while (uVar7 * 0x10 != lVar8);
			}
			pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IGisketchVirtualContentSource), 1);
	label_0531f50e: ;
			(*pVVar6.methodPtr)(&local_38,obj,pVVar6.method);
		}
		return local_38.ViewportHeight;
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x5220120", Offset = "0x521F120", VA = "0x5220120")]
	private static bool HasFocusedChild(GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$HasFocusedChild): clean
		bool bVar1;
		EventSystem pUVar2;
		Transform __this;
		Transform parent;
		Object x;

		pUVar2 = EventSystem.current;
		x = null;
		bVar1 = ((Object)pUVar2 != null);
		if (bVar1) {
			pUVar2 = EventSystem.current;
			if (pUVar2 == null) goto label_05320255;
			x = (Object)pUVar2.m_CurrentSelected;
		}
		bVar1 = (x != null);
		if (bVar1) {
			bVar1 = ((Object)root != null);
			if (bVar1) {
				if (x != null) {
					__this = x.transform;
					if (root != null) {
						parent = root.transform;
						if (__this != null) {
							bVar1 = __this.IsChildOf(parent);
							return bVar1;
						}
					}
				}
	label_05320255: ;
				throw new NullReferenceException();
			}
		}
		return false;
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x5220780", Offset = "0x521F780", VA = "0x5220780")]
	public GisketchVirtualContentRuntime()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$.ctor): 1 lines keep C-only constructs
		List<GisketchVirtualContentRuntime.Slot> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<GisketchVirtualContentRuntime.Slot>));
		__this_00 = new List<object>();
		this._slots = __this_00;
		this._range =(GisketchVirtualRange)0xffffffffffffffff;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualContentRuntime.c.

	// Gisketch.Aottg2UI.Virtualization.GisketchVirtualContentRuntime$$<Setup>b__10_0: clean
	private void Setup_b__10_0(Vector2 __)
	{


		this.Refresh(false);
		return;
	}
}
