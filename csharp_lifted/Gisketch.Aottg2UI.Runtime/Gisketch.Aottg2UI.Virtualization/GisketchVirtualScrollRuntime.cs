// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Virtualization;

[Token(Token = "0x200000F")]
public sealed class GisketchVirtualScrollRuntime : MonoBehaviour, IGisketchSearchTargetMaterializer
{
	[Token(Token = "0x2000010")]
	private sealed class Slot
	{
		[Token(Token = "0x400005F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly GameObject Root;

		[Token(Token = "0x4000060")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public int ItemIndex;

		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x5224870", Offset = "0x5223870", VA = "0x5224870")]
		public Slot(GameObject root)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime.Slot$$.ctor): clean
			this.ItemIndex = -1;
			base();
			this.Root = root;
			return;
		}
	}

	[Token(Token = "0x4000054")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly List<Slot> _slots;

	[Token(Token = "0x4000055")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private IGisketchVirtualScrollSource _source;

	[Token(Token = "0x4000056")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private ScrollRect _scroll;

	[Token(Token = "0x4000057")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Scrollbar _scrollbar;

	[Token(Token = "0x4000058")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private RectTransform _viewport;

	[Token(Token = "0x4000059")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private RectTransform _content;

	[Token(Token = "0x400005A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private RectTransform _realizedLayer;

	[Token(Token = "0x400005B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private GisketchTheme _theme;

	[Token(Token = "0x400005C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private float _scrollSensitivity;

	[Token(Token = "0x400005D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	private float _lastUiScale;

	[Token(Token = "0x400005E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private GisketchVirtualRange _range;

	[Token(Token = "0x17000012")]
	public ScrollRect ScrollRect
	{
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x5223360", Offset = "0x5222360", VA = "0x5223360")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$get_ScrollRect): clean
			return this._scroll;
		}
	}

	[Token(Token = "0x17000013")]
	public float CurrentScrollOffset
	{
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x5223370", Offset = "0x5222370", VA = "0x5223370")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$get_CurrentScrollOffset): clean
			float fVar1;

			return fVar1;
		}
	}

	[Token(Token = "0x17000014")]
	public GisketchVirtualRange CurrentRange
	{
		[Token(Token = "0x600008F")]
		[Address(RVA = "0x5223380", Offset = "0x5222380", VA = "0x5223380")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$get_CurrentRange): clean
			return (GisketchVirtualRange)this._range;
		}
	}

	[Token(Token = "0x17000015")]
	public int LiveItemCount
	{
		[Token(Token = "0x6000090")]
		[Address(RVA = "0x5223390", Offset = "0x5222390", VA = "0x5223390")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$get_LiveItemCount): clean
			List<GisketchVirtualScrollRuntime.Slot> pSVar1;

			pSVar1 = this._slots;
			if (pSVar1 == null) {
				throw new NullReferenceException();
			}
			return pSVar1._size;
		}
	}

	[Token(Token = "0x17000016")]
	public bool IsVirtualized
	{
		[Token(Token = "0x6000091")]
		[Address(RVA = "0x52233D0", Offset = "0x52223D0", VA = "0x52233D0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$get_IsVirtualized): 8 lines keep C-only constructs
			object pIVar1;
			Il2CppClass pIVar2;
			Il2CppRuntimeInterfaceOffsetPair pIVar3;
			bool bVar4;
			int iVar5;
			VirtualInvokeData pVVar6;
			ulong uVar7;
			long lVar8;
			GisketchVirtualScrollMetrics GStack_48;

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
						if (*(IGisketchVirtualScrollSource*)((long)&pIVar3.interfaceType + lVar8) == typeof(IGisketchVirtualScrollSource)) {
							pVVar6 = pIVar2.vtable + (*(int)((long)&pIVar3.offset + lVar8) + 1);
							goto label_0532346b;
						}
						lVar8 = lVar8 + 0x10;
					} while (uVar7 * 0x10 != lVar8);
				}
				pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar1, (Il2CppClass)typeof(IGisketchVirtualScrollSource), 1);
		label_0532346b: ;
				(*pVVar6.methodPtr)(&GStack_48,pIVar1,pVVar6.method);
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
						if (*(IGisketchVirtualScrollSource*)((long)&pIVar3.interfaceType + lVar8) == typeof(IGisketchVirtualScrollSource)) {
							pVVar6 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar8);
							goto label_053234e1;
						}
						lVar8 = lVar8 + 0x10;
					} while (uVar7 * 0x10 != lVar8);
				}
				pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar1, (Il2CppClass)typeof(IGisketchVirtualScrollSource), 0);
		label_053234e1: ;
				iVar5 = (*pVVar6.methodPtr)(pIVar1,pVVar6.method);
				bVar4 = GStack_48.VirtualizationThreshold <= iVar5;
			}
			return bVar4;
		}
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x5220A70", Offset = "0x521FA70", VA = "0x5220A70")]
	private void EnsureHierarchy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$EnsureHierarchy): 40 lines keep C-only constructs
		ScrollRect* targetAddress;
		RectTransform* targetAddress_00;
		RectTransform* targetAddress_01;
		RectTransform* targetAddress_02;
		float fVar1;
		bool bVar2;
		GameObject pUVar3;
		RectTransform parent;
		ScrollRect pUVar4;
		MethodInfo method_00;
		RectMask2D x;
		Image pUVar5;
		RectTransform pUVar6;
		Scrollbar value;
		GisketchScrollbarVisibility __this_00;
		Vector2 UVar7;
		Color UVar8;

		pUVar3 = this.gameObject;
		if (pUVar3 == null) goto label_053210b3;
		parent = pUVar3.GetComponent<RectTransform>();
		if (parent == null) {
			pUVar3 = this.gameObject;
			if (pUVar3 == null) goto label_053210b3;
			parent = pUVar3.AddComponent<RectTransform>();
		}
		pUVar4 = this._scroll;
		targetAddress = &this._scroll;
		bVar2 = ((Object)pUVar4 == null);
		if (bVar2) {
			pUVar3 = this.gameObject;
			if (pUVar3 == null) goto label_053210b3;
			pUVar4 = pUVar3.GetComponent<ScrollRect>();
			if (pUVar4 == null) {
				pUVar3 = this.gameObject;
				if (pUVar3 == null) goto label_053210b3;
				pUVar4 = pUVar3.AddComponent<ScrollRect>();
			}
			*targetAddress = pUVar4;
		}
		pUVar6 = this._viewport;
		targetAddress_00 = &this._viewport;
		bVar2 = ((Object)pUVar6 == null);
		if (bVar2) {
			method_00 = (MethodInfo)GisketchVirtualScrollRuntime.FindOrCreateChild((Transform)parent, "Viewport");
			*targetAddress_00 = (RectTransform)method_00;
			GisketchVirtualScrollRuntime.Stretch(*targetAddress_00);
			if (*targetAddress_00 == null) goto label_053210b3;
			pUVar3 = (*targetAddress_00).gameObject;
			if (pUVar3 == null) goto label_053210b3;
			x = pUVar3.GetComponent<RectMask2D>();
			bVar2 = ((Object)x == null);
			if (bVar2) {
				if (*targetAddress_00 == null) goto label_053210b3;
				pUVar3 = (*targetAddress_00).gameObject;
				if (pUVar3 == null) goto label_053210b3;
				pUVar3.AddComponent<RectMask2D>();
			}
			if (*targetAddress_00 == null) goto label_053210b3;
			pUVar3 = (*targetAddress_00).gameObject;
			if (pUVar3 == null) goto label_053210b3;
			pUVar5 = pUVar3.GetComponent<Image>();
			if (pUVar5 == null) {
				if (*targetAddress_00 == null) goto label_053210b3;
				pUVar3 = (*targetAddress_00).gameObject;
				if (pUVar3 == null) goto label_053210b3;
				pUVar5 = pUVar3.AddComponent<Image>();
				if (pUVar5 == null) goto label_053210b3;
			}
			UVar8.b = 1.0;
			UVar8.a = 0.0;
			UVar8.r = 1.0;
			UVar8.g = 1.0;
			pUVar5.set_color(UVar8);
			pUVar5.set_raycastTarget(true);
		}
		pUVar6 = this._content;
		targetAddress_01 = &this._content;
		bVar2 = ((Object)pUVar6 == null);
		if (bVar2) {
			pUVar6 = GisketchVirtualScrollRuntime.FindOrCreateChild((Transform)*targetAddress_00, "Content");
			*targetAddress_01 = pUVar6;
			if (*targetAddress_01 == null) goto label_053210b3;
			(*targetAddress_01).anchorMin = (Vector2)0x3f80000000000000;
			if (*targetAddress_01 == null) goto label_053210b3;
			(*targetAddress_01).anchorMax = (Vector2)0x3f8000003f800000;
			if (*targetAddress_01 == null) goto label_053210b3;
			(*targetAddress_01).pivot = (Vector2)0x3f8000003f000000;
			pUVar6 = *targetAddress_01;
			if (pUVar6 == null) goto label_053210b3;
			UVar7 = pUVar6.sizeDelta;
			pUVar6.sizeDelta = (Vector2)((ulong)UVar7 & 0xffffffff00000000);
			pUVar6 = *targetAddress_01;
			if (pUVar6 == null) goto label_053210b3;
			UVar7 = pUVar6.anchoredPosition;
			fVar1 = 0.0;
			if (0.0 <= UVar7.y) {
				fVar1 = UVar7.y;
			}
			pUVar6.anchoredPosition = (Vector2)((ulong)(uint)fVar1 << 0x20);
		}
		pUVar6 = this._realizedLayer;
		bVar2 = ((Object)pUVar6 == null);
		if (bVar2) {
			targetAddress_02 = &this._realizedLayer;
			pUVar6 = GisketchVirtualScrollRuntime.FindOrCreateChild((Transform)*targetAddress_01, "Realized");
			*targetAddress_02 = pUVar6;
			if (*targetAddress_02 == null) goto label_053210b3;
			(*targetAddress_02).anchorMin = (Vector2)0x3f80000000000000;
			if (*targetAddress_02 == null) goto label_053210b3;
			(*targetAddress_02).anchorMax = (Vector2)0x3f8000003f800000;
			if (*targetAddress_02 == null) goto label_053210b3;
			(*targetAddress_02).pivot = (Vector2)0x3f8000003f000000;
			pUVar6 = *targetAddress_02;
			if (pUVar6 == null) goto label_053210b3;
			UVar7 = pUVar6.sizeDelta;
			pUVar6.sizeDelta = (Vector2)((ulong)UVar7 & 0xffffffff00000000);
			pUVar6 = *targetAddress_02;
			if (pUVar6 == null) goto label_053210b3;
			pUVar6.anchoredPosition = (Vector2)(Vector2.zeroVector);
		}
		if (*targetAddress != null) {
			(*targetAddress).viewport = *targetAddress_00;
			pUVar4 = *targetAddress;
			if (pUVar4 != null) {
				pUVar4.m_Content = *targetAddress_01;
				pUVar4 = *targetAddress;
				if (pUVar4 != null) {
					pUVar4.m_Horizontal = false;
					pUVar4.m_Vertical = true;
					value = this.EnsureScrollbar((Transform)parent);
					pUVar4.verticalScrollbar = value;
					pUVar4 = this._scroll;
					if (pUVar4 != null) {
						pUVar4.verticalScrollbarVisibility = 0;
						pUVar4 = *targetAddress;
						if (pUVar4 != null) {
							pUVar4.m_MovementType = 2;
							pUVar4.m_Elasticity = 0.0;
							pUVar4.m_Inertia = true;
							pUVar4.m_ScrollSensitivity = this._scrollSensitivity;
							pUVar3 = this.gameObject;
							if (pUVar3 != null) {
								__this_00 = pUVar3.GetComponent<GisketchScrollbarVisibility>();
								if (__this_00 != null) {
	label_05321098: ;
									__this_00.Setup(*targetAddress);
									return;
								}
								pUVar3 = this.gameObject;
								if (pUVar3 != null) {
									__this_00 = pUVar3.AddComponent<GisketchScrollbarVisibility>();
									if (__this_00 != null) goto label_05321098;
								}
							}
						}
					}
				}
			}
		}
	label_053210b3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x52218B0", Offset = "0x52208B0", VA = "0x52218B0")]
	private void ApplyContentSize(GisketchVirtualScrollMetrics metrics)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$ApplyContentSize): 1 lines keep C-only constructs
		RectTransform pUVar1;
		Vector2 UVar2;
		Vector2 UVar3;
		float size;
		float fStack_34;
		float fStack_14;

		size = this.ContentHeight(metrics);
		pUVar1 = this._content;
		if (pUVar1 != null) {
			pUVar1.SetSizeWithCurrentAnchors(1, size);
			pUVar1 = this._realizedLayer;
			if (pUVar1 != null) {
				pUVar1.SetSizeWithCurrentAnchors(1, size);
				pUVar1 = this._realizedLayer;
				if (pUVar1 != null) {
					UVar2 = pUVar1.offsetMin;
					pUVar1 = this._realizedLayer;
					if (pUVar1 != null) {
						UVar3 = pUVar1.offsetMax;
						pUVar1 = this._realizedLayer;
						if (pUVar1 != null) {
							fStack_34 = UVar2.y;
							UVar2.y = fStack_34;
							UVar2.x = metrics.PaddingLeft;
							pUVar1.offsetMin = UVar2;
							pUVar1 = this._realizedLayer;
							if (pUVar1 != null) {
								fStack_14 = UVar3.y;
								pUVar1.offsetMax = (Vector2)(CONCAT44(fStack_14, metrics.PaddingRight) ^ 0x80000000);
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x5221C10", Offset = "0x5220C10", VA = "0x5221C10")]
	private void Position(RectTransform rect, int itemIndex, GisketchVirtualScrollMetrics metrics)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$Position): clean
		bool bVar1;
		float fVar2;

		bVar1 = ((Object)rect == null);
		if ((bVar1) ||(this._source == null)) {
			return;
		}
		if (rect == null) {
			throw new NullReferenceException();
		}
		rect.anchorMin = (Vector2)0x3f80000000000000;
		rect.anchorMax = (Vector2)0x3f8000003f800000;
		rect.pivot = (Vector2)0x3f80000000000000;
		rect.sizeDelta = (Vector2)((ulong)(uint)metrics.ItemHeight << 0x20);
		fVar2 = this.ItemOffset(itemIndex, metrics);
		rect.anchoredPosition = (Vector2)((ulong)((uint)fVar2 ^ (uint)g_data_01004fa0) << 0x20);
		return;
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x5221F00", Offset = "0x5220F00", VA = "0x5221F00")]
	private void PositionAll(GisketchVirtualScrollMetrics metrics)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$PositionAll): 5 lines keep C-only constructs
		Il2CppClass x;
		bool bVar1;
		RectTransform rect;
		object pIVar2;
		List<GisketchVirtualScrollRuntime.Slot> __this_00;
		int index;

		__this_00 = this._slots;
		if (__this_00 != null) {
			index = 0;
			do {
				if (__this_00._size <= index) {
					return;
				}
				pIVar2 = __this_00.get_Item(index);
				if (pIVar2 == null) break;
				if (-1 < *(int)&pIVar2[1].monitor) {
					x = pIVar2[1].klass;
					bVar1 = ((Object)x != null);
					if (bVar1) {
						if (pIVar2[1].klass == null) break;
						rect = pIVar2[1].klass.GetComponent<RectTransform>();
						this.Position(rect, *(int)&pIVar2[1].monitor, metrics);
					}
				}
				index = index + 1;
				__this_00 = this._slots;
			} while (__this_00 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x5222030", Offset = "0x5221030", VA = "0x5222030")]
	private float ScrollOffset()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$ScrollOffset): clean
		RectTransform pUVar1;
		bool bVar2;
		Vector2 UVar3;
		float fVar4;
		float fVar5;
		Rect UVar6;
		Rect UVar7;
		float fStack_24;

		pUVar1 = this._content;
		bVar2 = ((Object)pUVar1 == null);
		if (!bVar2) {
			pUVar1 = this._viewport;
			bVar2 = ((Object)pUVar1 == null);
			if (!bVar2) {
				pUVar1 = this._content;
				if (pUVar1 != null) {
					UVar6 = pUVar1.rect;
					pUVar1 = this._viewport;
					if (pUVar1 != null) {
						UVar7 = pUVar1.rect;
						pUVar1 = this._content;
						if (pUVar1 != null) {
							fStack_24 = UVar6.m_Height;
							fStack_24 = fStack_24 - UVar7.m_Height;
							fVar5 = 0.0;
							if (0.0 <= fStack_24) {
								fVar5 = fStack_24;
							}
							UVar3 = pUVar1.anchoredPosition;
							fVar4 = UVar3.y;
							if (fVar4 <= fVar5) {
								fVar5 = fVar4;
							}
							return (float)(-(uint)(0.0 <= fVar4) & (uint)fVar5);
						}
					}
				}
				throw new NullReferenceException();
			}
		}
		return 0.0;
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x5222150", Offset = "0x5221150", VA = "0x5222150")]
	private float ViewportHeight()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$ViewportHeight): 4 lines keep C-only constructs
		RectTransform pUVar1;
		object obj;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		bool bVar4;
		VirtualInvokeData pVVar5;
		ulong uVar6;
		long lVar7;
		Rect UVar8;
		GisketchVirtualScrollMetrics local_38;

		pUVar1 = this._viewport;
		bVar4 = ((Object)pUVar1 != null);
		if (bVar4) {
			pUVar1 = this._viewport;
			if (pUVar1 != null) {
				UVar8 = pUVar1.rect;
				if (UVar8.m_Height <= 1.0) goto label_05322248;
				pUVar1 = this._viewport;
				if (pUVar1 != null) {
					UVar8 = pUVar1.rect;
					return UVar8.m_Height;
				}
			}
			throw new NullReferenceException();
		}
	label_05322248: ;
		obj = (object)this._source;
		if (obj == null) {
			return 1.0;
		}
		pIVar2 = obj.klass;
		uVar6 = (ulong)(pIVar2._2).interface_offsets_count;
		if (uVar6 != 0) {
			pIVar3 = (pIVar2._1).interfaceOffsets;
			lVar7 = 0;
			do {
				if (*(IGisketchVirtualScrollSource*)((long)&pIVar3.interfaceType + lVar7) == typeof(IGisketchVirtualScrollSource)) {
					pVVar5 = pIVar2.vtable + (*(int)((long)&pIVar3.offset + lVar7) + 1);
					goto label_053222c4;
				}
				lVar7 = lVar7 + 0x10;
			} while (uVar6 * 0x10 != lVar7);
		}
		pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IGisketchVirtualScrollSource), 1);
	label_053222c4: ;
		(*pVVar5.methodPtr)(&local_38,obj,pVVar5.method);
		return local_38.ViewportHeight;
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x52219B0", Offset = "0x52209B0", VA = "0x52219B0")]
	private float ContentHeight(GisketchVirtualScrollMetrics metrics)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$ContentHeight): 12 lines keep C-only constructs
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		float fVar3;
		int iVar4;
		int iVar5;
		VirtualInvokeData pVVar6;
		object pIVar7;
		ulong uVar8;
		object obj;
		long lVar9;
		float fVar10;
		float fVar11;

		pIVar7 = (object)this._source;
		if (pIVar7 != null) {
			pIVar1 = pIVar7.klass;
			uVar8 = (ulong)(pIVar1._2).interface_offsets_count;
			if (uVar8 != 0) {
				pIVar2 = (pIVar1._1).interfaceOffsets;
				lVar9 = 0;
				do {
					if (*(IGisketchVirtualScrollSource*)((long)&pIVar2.interfaceType + lVar9) == typeof(IGisketchVirtualScrollSource)) {
						pVVar6 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar9);
						goto label_05321a51;
					}
					lVar9 = lVar9 + 0x10;
				} while (uVar8 * 0x10 != lVar9);
			}
			pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar7, (Il2CppClass)typeof(IGisketchVirtualScrollSource), 0);
	label_05321a51: ;
			iVar4 = (*pVVar6.methodPtr)(pIVar7,pVVar6.method);
			if (0 < iVar4) {
				metrics.PaddingTop =(float)(iVar4 + -1) * metrics.Gap + metrics.PaddingTop + (float)iVar4 * metrics.ItemHeight;
			}
			fVar11 = metrics.PaddingTop + metrics.PaddingBottom;
			pIVar7 = ((object)this._source as IGisketchVirtualScrollSpacingSource);
			if (pIVar7 == null) {
				return fVar11;
			}
			obj = (object)this._source;
			if (obj != null) {
				iVar4 = 0;
				do {
					pIVar1 = obj.klass;
					uVar8 = (ulong)(pIVar1._2).interface_offsets_count;
					if (uVar8 != 0) {
						pIVar2 = (pIVar1._1).interfaceOffsets;
						lVar9 = 0;
						do {
							if (*(IGisketchVirtualScrollSource*)((long)&pIVar2.interfaceType + lVar9) == typeof(IGisketchVirtualScrollSource)) {
								pVVar6 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar9);
								goto label_05321b73;
							}
							lVar9 = lVar9 + 0x10;
						} while (uVar8 * 0x10 != lVar9);
					}
					pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IGisketchVirtualScrollSource), 0);
	label_05321b73: ;
					iVar5 = (*pVVar6.methodPtr)(obj,pVVar6.method);
					if (iVar5 <= iVar4) {
						return fVar11;
					}
					pIVar1 = pIVar7.klass;
					uVar8 = (ulong)(pIVar1._2).interface_offsets_count;
					if (uVar8 != 0) {
						pIVar2 = (pIVar1._1).interfaceOffsets;
						lVar9 = 0;
						do {
							if (*(IGisketchVirtualScrollSpacingSource*)((long)&pIVar2.interfaceType + lVar9) == typeof(IGisketchVirtualScrollSpacingSource)) {
								pVVar6 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar9);
								goto label_05321aea;
							}
							lVar9 = lVar9 + 0x10;
						} while (uVar8 * 0x10 != lVar9);
					}
					pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar7, (Il2CppClass)typeof(IGisketchVirtualScrollSpacingSource), 0);
	label_05321aea: ;
					fVar10 = (*pVVar6.methodPtr)(pIVar7,iVar4,pVVar6.method);
					fVar3 = 0.0;
					if (0.0 <= fVar10) {
						fVar3 = fVar10;
					}
					fVar11 = fVar11 + fVar3;
					iVar4 = iVar4 + 1;
					obj = (object)this._source;
				} while (obj != null);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x5221D30", Offset = "0x5220D30", VA = "0x5221D30")]
	private float ItemOffset(int itemIndex, GisketchVirtualScrollMetrics metrics)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$ItemOffset): 8 lines keep C-only constructs
		object obj;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		int iVar3;
		int iVar4;
		object obj_00;
		VirtualInvokeData pVVar5;
		ulong uVar6;
		int itemIndex_00;
		long lVar7;
		float fVar8;
		float fVar9;
		float local_34;

		iVar3 = 0;
		if (0 < itemIndex) {
			iVar3 = itemIndex;
		}
		local_34 = (float)iVar3 * (metrics.ItemHeight + metrics.Gap) + metrics.PaddingTop;
		obj_00 = ((object)this._source as IGisketchVirtualScrollSpacingSource);
		if ((obj_00 != null) && (-1 < itemIndex)) {
			itemIndex_00 = 0;
			do {
				obj = (object)this._source;
				if (obj == null) {
					throw new NullReferenceException();
				}
				pIVar1 = obj.klass;
				uVar6 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar6 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar7 = 0;
					do {
						if (*(IGisketchVirtualScrollSource*)((long)&pIVar2.interfaceType + lVar7) == typeof(IGisketchVirtualScrollSource)) {
							pVVar5 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar7);
							goto label_05321e63;
						}
						lVar7 = lVar7 + 0x10;
					} while (uVar6 * 0x10 != lVar7);
				}
				pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IGisketchVirtualScrollSource), 0);
	label_05321e63: ;
				iVar4 = (*pVVar5.methodPtr)(obj,pVVar5.method);
				if (iVar4 <= itemIndex_00) {
					return local_34;
				}
				pIVar1 = obj_00.klass;
				uVar6 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar6 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar7 = 0;
					do {
						if (*(IGisketchVirtualScrollSpacingSource*)((long)&pIVar2.interfaceType + lVar7) == typeof(IGisketchVirtualScrollSpacingSource)) {
							pVVar5 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar7);
							goto label_05321dca;
						}
						lVar7 = lVar7 + 0x10;
					} while (uVar6 * 0x10 != lVar7);
				}
				pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(obj_00, (Il2CppClass)typeof(IGisketchVirtualScrollSpacingSource), 0);
	label_05321dca: ;
				fVar8 = (*pVVar5.methodPtr)(obj_00,itemIndex_00,pVVar5.method);
				fVar9 = 0.0;
				if (0.0 <= fVar8) {
					fVar9 = fVar8;
				}
				local_34 = local_34 + fVar9;
				itemIndex_00 = itemIndex_00 + 1;
			} while (itemIndex_00 <= itemIndex);
		}
		return local_34;
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x52222F0", Offset = "0x52212F0", VA = "0x52222F0")]
	private GisketchVirtualRange RangeFor(GisketchVirtualScrollMetrics metrics, float offset, float viewportHeight)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$RangeFor): 24 lines keep C-only constructs
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		float fVar3;
		float fVar4;
		int iVar5;
		int iVar6;
		int iVar7;
		object obj;
		VirtualInvokeData pVVar8;
		GisketchVirtualRange GVar9;
		ulong uVar10;
		object pIVar11;
		long lVar12;
		int iVar13;
		int iVar14;
		float fVar15;
		float fVar16;
		float fVar17;
		float fVar18;
		float fVar19;
		float fVar20;

		obj = ((object)this._source as IGisketchVirtualScrollSpacingSource);
		pIVar11 = (object)this._source;
		if (obj == null) {
			if (pIVar11 != null) {
				pIVar1 = pIVar11.klass;
				uVar10 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar10 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar12 = 0;
					do {
						if (*(IGisketchVirtualScrollSource*)((long)&pIVar2.interfaceType + lVar12) == typeof(IGisketchVirtualScrollSource)) {
							pVVar8 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar12);
							goto label_05322680;
						}
						lVar12 = lVar12 + 0x10;
					} while (uVar10 * 0x10 != lVar12);
				}
				pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar11, (Il2CppClass)typeof(IGisketchVirtualScrollSource), 0);
	label_05322680: ;
				iVar5 = (*pVVar8.methodPtr)(pIVar11,pVVar8.method);
				GVar9 = (GisketchVirtualRange)metrics.RangeFor(iVar5, offset, viewportHeight);
				uVar10 = (ulong)GVar9 >> 0x20;
				goto label_05322764;
			}
		}
		else if (pIVar11 != null) {
			pIVar1 = pIVar11.klass;
			uVar10 = (ulong)(pIVar1._2).interface_offsets_count;
			if (uVar10 != 0) {
				pIVar2 = (pIVar1._1).interfaceOffsets;
				lVar12 = 0;
				do {
					if (*(IGisketchVirtualScrollSource*)((long)&pIVar2.interfaceType + lVar12) == typeof(IGisketchVirtualScrollSource)) {
						pVVar8 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar12);
						goto label_05322418;
					}
					lVar12 = lVar12 + 0x10;
				} while (uVar10 * 0x10 != lVar12);
			}
			pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar11, (Il2CppClass)typeof(IGisketchVirtualScrollSource), 0);
	label_05322418: ;
			iVar5 = (*pVVar8.methodPtr)(pIVar11,pVVar8.method);
			fVar4 = metrics.PaddingTop;
			fVar3 = metrics.ItemHeight;
			if (iVar5 == 0) {
				uVar10 = 0xffffffff;
				GVar9.Start = -1;
				GVar9.End = 0;
				goto label_05322764;
			}
			pIVar11 = (object)this._source;
			if (pIVar11 != null) {
				fVar20 = 0.0;
				fVar15 = 0.0;
				if (0.0 <= offset) {
					fVar15 = offset;
				}
				fVar18 = 1.0;
				if (1.0 <= viewportHeight) {
					fVar18 = viewportHeight;
				}
				fVar19 = metrics.Gap + metrics.ItemHeight;
				iVar5 = 0;
				iVar13 = -1;
				iVar14 = -1;
				do {
					pIVar1 = pIVar11.klass;
					uVar10 = (ulong)(pIVar1._2).interface_offsets_count;
					if (uVar10 != 0) {
						pIVar2 = (pIVar1._1).interfaceOffsets;
						lVar12 = 0;
						do {
							if (*(IGisketchVirtualScrollSource*)((long)&pIVar2.interfaceType + lVar12) == typeof(IGisketchVirtualScrollSource)) {
								pVVar8 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar12);
								goto label_05322523;
							}
							lVar12 = lVar12 + 0x10;
						} while (uVar10 * 0x10 != lVar12);
					}
					pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar11, (Il2CppClass)typeof(IGisketchVirtualScrollSource), 0);
	label_05322523: ;
					iVar6 = (*pVVar8.methodPtr)(pIVar11,pVVar8.method);
					if (iVar6 <= iVar5) {
						if (-1 < iVar13) goto label_053226cf;
						pIVar11 = (object)this._source;
						if (pIVar11 != null) {
							pIVar1 = pIVar11.klass;
							uVar10 = (ulong)(pIVar1._2).interface_offsets_count;
							if (uVar10 == 0) goto label_0532264f;
							pIVar2 = (pIVar1._1).interfaceOffsets;
							lVar12 = 0;
							goto label_05322640;
						}
						break;
					}
					pIVar1 = obj.klass;
					uVar10 = (ulong)(pIVar1._2).interface_offsets_count;
					if (uVar10 != 0) {
						pIVar2 = (pIVar1._1).interfaceOffsets;
						lVar12 = 0;
						do {
							if (*(IGisketchVirtualScrollSpacingSource*)((long)&pIVar2.interfaceType + lVar12) == typeof(IGisketchVirtualScrollSpacingSource)) {
								pVVar8 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar12);
								goto label_05322592;
							}
							lVar12 = lVar12 + 0x10;
						} while (uVar10 * 0x10 != lVar12);
					}
					pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IGisketchVirtualScrollSpacingSource), 0);
	label_05322592: ;
					fVar16 = (*pVVar8.methodPtr)(obj,iVar5,pVVar8.method);
					fVar17 = 0.0;
					if (0.0 <= fVar16) {
						fVar17 = fVar16;
					}
					fVar20 = fVar20 + fVar17;
					fVar17 = (float)iVar5 * fVar19 + fVar4 + fVar20;
					iVar7 = iVar5;
					if (fVar3 + fVar17 < offset) {
						iVar7 = iVar13;
					}
					if (-1 < iVar13) {
						iVar7 = iVar13;
					}
					iVar13 = iVar7;
					iVar6 = iVar5;
					if (fVar18 + fVar15 < fVar17) {
						if (-1 < iVar13) goto label_053226cf;
						iVar6 = iVar14;
					}
					iVar5 = iVar5 + 1;
					pIVar11 = (object)this._source;
					iVar14 = iVar6;
				} while (pIVar11 != null);
			}
		}
		goto label_0532277c;
		while (true) {
			lVar12 = lVar12 + 0x10;
			if (!(uVar10 * 0x10 != lVar12)) break;
	label_05322640: ;
			if (*(IGisketchVirtualScrollSource*)((long)&pIVar2.interfaceType + lVar12) == typeof(IGisketchVirtualScrollSource)) {
				pVVar8 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar12);
				goto label_053226c0;
			}
		}
	label_0532264f: ;
		pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar11, (Il2CppClass)typeof(IGisketchVirtualScrollSource), 0);
	label_053226c0: ;
		iVar5 = (*pVVar8.methodPtr)(pIVar11,pVVar8.method);
		iVar13 = iVar5 + -1;
	label_053226cf: ;
		iVar5 = metrics.OverscanRows;
		if (iVar14 <= iVar13) {
			iVar14 = iVar13;
		}
		GVar9.Start = 0;
		GVar9.End = 0;
		if (0 < iVar13 - metrics.OverscanRows) {
			GVar9.End = 0;
			GVar9.Start = iVar13 - metrics.OverscanRows;
		}
		pIVar11 = (object)this._source;
		if (pIVar11 != null) {
			pIVar1 = pIVar11.klass;
			uVar10 = (ulong)(pIVar1._2).interface_offsets_count;
			if (uVar10 != 0) {
				pIVar2 = (pIVar1._1).interfaceOffsets;
				lVar12 = 0;
				do {
					if (*(IGisketchVirtualScrollSource*)((long)&pIVar2.interfaceType + lVar12) == typeof(IGisketchVirtualScrollSource)) {
						pVVar8 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar12);
						goto label_05322751;
					}
					lVar12 = lVar12 + 0x10;
				} while (uVar10 * 0x10 != lVar12);
			}
			pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar11, (Il2CppClass)typeof(IGisketchVirtualScrollSource), 0);
	label_05322751: ;
			iVar6 = (*pVVar8.methodPtr)(pIVar11,pVVar8.method);
			uVar10 = (ulong)(uint)(iVar5 + iVar14);
			if ((int)(iVar6 - 1U) < iVar5 + iVar14) {
				uVar10 = (ulong)(iVar6 - 1U);
			}
	label_05322764: ;
			return (GisketchVirtualRange)((ulong)(uint)GVar9.Start | uVar10 << 0x20);
		}
	label_0532277c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x5222790", Offset = "0x5221790", VA = "0x5222790")]
	private GisketchVirtualScrollMetrics EffectiveMetrics()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$EffectiveMetrics): 29 lines keep C-only constructs
		MethodInfo method_00;
		byte[] auVar6 = new byte[12];
		byte[] auVar7 = new byte[16];
		byte[] auVar8 = new byte[16];
		byte[] auVar9 = new byte[16];
		GisketchVirtualScrollMetrics local_70;
		float local_48;
		float fStack_44;
		float fStack_40;
		float fStack_3c;
		uint local_38;
		uint uStack_34;
		byte[] local_28 = new byte[16];

		method_00 = (MethodInfo)this._source;
		if (method_00 == null) {
			throw new NullReferenceException();
		}
		local_70.get_Metrics((object)method_00);
		auVar6 = ZEXT812(0x3f800000);
		if (auVar6._0_4_ <= local_70.ViewportHeight) {
			auVar6._4_8_ = auVar6._4_8_;
			auVar6._0_4_ = local_70.ViewportHeight;
		}
		auVar8._8_8_ = 0;
		auVar8._0_4_ = local_70.ItemHeight;
		auVar8._4_4_ = local_70.Gap;
		local_28 = maxps(ZEXT816(0x3f800000), auVar8);
		uStack_34 = local_70.OverscanRows & -(uint)(0 < local_70.OverscanRows);
		local_38 = ~-(uint)(1 < local_70.VirtualizationThreshold) & 1 | local_70.VirtualizationThreshold & -(uint)(1 < local_70.VirtualizationThreshold);
		local_48 = local_70.PaddingLeft;
		fStack_44 = local_70.PaddingRight;
		fStack_40 = local_70.PaddingTop;
		fStack_3c = local_70.PaddingBottom;
		auVar7._0_4_ = this.UiScale();
		auVar7._4_4_ = auVar7._0_4_;
		auVar7._8_4_ = auVar7._0_4_;
		auVar7._12_4_ = auVar7._0_4_;
		auVar9._8_4_ = fStack_40;
		auVar9._12_4_ = fStack_3c;
		auVar9._0_4_ = local_48;
		auVar9._4_4_ = fStack_44;
		auVar9 = divps(auVar9, auVar7);
		__return_storage_ptr__.ItemHeight = (float)local_28._0_4_;
		__return_storage_ptr__.Gap = (float)local_28._4_4_;
		__return_storage_ptr__.ViewportHeight = auVar6._0_4_;
		__return_storage_ptr__.VirtualizationThreshold = local_38;
		__return_storage_ptr__.OverscanRows = uStack_34;
		auVar9 = maxps(ZEXT816(0), auVar9);
		__return_storage_ptr__.PaddingLeft = (float)auVar9._0_4_;
		__return_storage_ptr__.PaddingRight = (float)auVar9._4_4_;
		__return_storage_ptr__.PaddingTop = (float)auVar9._8_4_;
		__return_storage_ptr__.PaddingBottom = (float)auVar9._12_4_;
		return __return_storage_ptr__;
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x52228E0", Offset = "0x52218E0", VA = "0x52228E0")]
	private float UiScale()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$UiScale): clean
		uint uVar1;
		bool bVar2;
		GisketchUIRoot x;
		float fVar3;
		float fVar4;

		x = this.GetComponentInParent<GisketchUIRoot>();
		bVar2 = ((Object)x != null);
		if (!bVar2) {
			return 1.0;
		}
		if (x == null) {
			throw new NullReferenceException();
		}
		fVar4 = x._scale;
		if (Il2CppMethodInitialized_075427c6 == false) {
			Il2CppMethodInitialized_075427c6 = true;
			uVar1 = (typeof(AottgUiScale)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgUiScale))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		fVar3 = 1.5;
		if (fVar4 <= 1.5) {
			fVar3 = fVar4;
		}
		fVar3 = (float)(-(uint)(0.5 <= fVar4) & (uint)(fVar3 + -0.5));
		fVar4 = 1.0;
		if (fVar3 <= 1.0) {
			fVar4 = fVar3;
		}
		fVar4 = (float)(-(uint)(0.0 <= fVar3) & (uint)fVar4);
		fVar3 = 0.0;
		if (0.0 <= fVar4) {
			fVar3 = fVar4;
		}
		fVar3 = fVar3 * 0.40000004 + 0.8;
		fVar4 = 0.001;
		if (0.001 <= fVar3) {
			fVar4 = fVar3;
		}
		return fVar4;
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x52210C0", Offset = "0x52200C0", VA = "0x52210C0")]
	private static RectTransform FindOrCreateChild(Transform parent, string name)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$FindOrCreateChild): 1 lines keep C-only constructs
		Il2CppType handle;
		bool bVar1;
		Transform pUVar2;
		RectTransform pUVar3;
		Type[] components;
		Type obj;
		object pIVar4;
		GameObject pUVar5;

		if (parent != null) {
			pUVar2 = parent.Find(name);
			bVar1 = ((Object)pUVar2 != null);
			if (bVar1) {
				if (pUVar2 != null) {
					pUVar3 = pUVar2.GetComponent<RectTransform>() ;
					if (pUVar3 != null) {
						return pUVar3;
					}
					pUVar5 = pUVar2.gameObject;
					if (pUVar5 != null) {
						pUVar3 = pUVar5.AddComponent<RectTransform>();
						return pUVar3;
					}
				}
			}
			else {
				components = (Type[])new Type[1];
				handle = TypeRef_UnityEngine_RectTransform;
				obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
				if (components != null) {
					if (obj != null) {
						pIVar4 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class);
						if (pIVar4 == null) {
							pIVar4 = new ArrayTypeMismatchException();
							throw pIVar4;
						}
					}
					if ((int)components.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					components[0] = obj;
					pUVar5 = new GameObject(name, components);
					if (pUVar5 != null) {
						pUVar2 = pUVar5.transform;
						if (pUVar2 != null) {
							pUVar2.SetParent(parent, false);
							pUVar3 = pUVar5.GetComponent<RectTransform>();
							return pUVar3;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x5221420", Offset = "0x5220420", VA = "0x5221420")]
	private Scrollbar EnsureScrollbar(Transform parent)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$EnsureScrollbar): 11 lines keep C-only constructs
		Scrollbar* targetAddress;
		uint uVar1;
		Vector2 value;
		Il2CppType handle;
		bool bVar2;
		Transform pUVar3;
		GameObject __this_00;
		Type[] components;
		Type obj;
		object pIVar4;
		RectTransform pUVar5;
		Scrollbar pUVar6;
		Image value_00;
		float fVar7;
		Color fallback;

		pUVar6 = this._scrollbar;
		targetAddress = &this._scrollbar;
		bVar2 = ((Object)pUVar6 != null);
		if (bVar2) {
	label_0532187d: ;
			return *targetAddress;
		}
		if (parent != null) {
			pUVar3 = parent.Find("AoTTG Virtual Scrollbar");
			bVar2 = ((Object)pUVar3 != null);
			if (bVar2) {
				if (pUVar3 == null) goto label_05321890;
				__this_00 = pUVar3.gameObject;
				uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
			}
			else {
				components = (Type[])new Type[1];
				handle = TypeRef_UnityEngine_RectTransform;
				obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
				if (components == null) goto label_05321890;
				if ((obj != null) &&(pIVar4 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class), pIVar4 == null)) {
					pIVar4 = new ArrayTypeMismatchException();
					throw pIVar4;
				}
				if ((int)components.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				components[0] = obj;
				__this_00 = new GameObject("AoTTG Virtual Scrollbar", components);
				uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			bVar2 = ((Object)pUVar3 == null);
			if (bVar2) {
				if ((__this_00 == null) ||(pUVar3 = __this_00.transform, pUVar3 == null)) goto label_05321890;
				pUVar3.SetParent(parent, false);
			}
			else if (__this_00 == null) goto label_05321890;
			pUVar5 = __this_00.GetComponent<RectTransform>();
			fVar7 = this.ScrollbarWidth();
			if (pUVar5 != null) {
				pUVar5.anchorMin = (Vector2)0x3f800000;
				pUVar5.anchorMax = (Vector2)(Vector2.oneVector);
				pUVar5.pivot = (Vector2)0x3f0000003f800000 ;
				value.y = 0.0;
				value.x = -fVar7;
				pUVar5.offsetMin = value;
				pUVar5.offsetMax = (Vector2)(Vector2.zeroVector);
				fallback.b = 0.05;
				fallback.a = 0.72;
				fallback.r = 0.04;
				fallback.g = 0.04;
				this.ApplyStyleImage(__this_00, "scrollbar", fallback, false);
				pUVar3 = __this_00.transform;
				pUVar5 = this.EnsureScrollbarThumb(pUVar3);
				pUVar6 = __this_00.GetComponent<Scrollbar>();
				if (pUVar6 == null) {
					pUVar6 = __this_00.AddComponent<Scrollbar>();
				}
				*targetAddress = pUVar6;
				if (*targetAddress != null) {
					(*targetAddress).direction = 2;
					if ((*targetAddress != null) &&((*targetAddress).handleRect = pUVar5, pUVar5 != null)) {
						pUVar6 = *targetAddress;
						value_00 = pUVar5.GetComponent<Image>();
						if (pUVar6 != null) {
							pUVar6.targetGraphic = (Graphic)value_00;
							if (*targetAddress != null) {
								(*targetAddress).transition = 0;
								if (*targetAddress != null) {
									(*targetAddress).navigation = (Navigation)ZEXT840(0);
									goto label_0532187d;
								}
							}
						}
					}
				}
			}
		}
	label_05321890: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x5222DE0", Offset = "0x5221DE0", VA = "0x5222DE0")]
	private RectTransform EnsureScrollbarThumb(Transform track)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$EnsureScrollbarThumb): clean
		RectTransform pUVar1;
		GameObject go;
		MethodInfo pMVar2;
		Color fallback;

		pMVar2 = (MethodInfo *)"AoTTG Virtual Scrollbar Sliding Area";
		pUVar1 = GisketchVirtualScrollRuntime.FindOrCreateChild(track, "AoTTG Virtual Scrollbar Sliding Area");
		GisketchVirtualScrollRuntime.Stretch(pUVar1);
		pMVar2 = (MethodInfo *)"AoTTG Virtual Scrollbar Thumb";
		pUVar1 = GisketchVirtualScrollRuntime.FindOrCreateChild((Transform)pUVar1, "AoTTG Virtual Scrollbar Thumb");
		GisketchVirtualScrollRuntime.Stretch(pUVar1);
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		go = pUVar1.gameObject;
		fallback.b = 0.58;
		fallback.a = 0.95;
		fallback.r = 0.86;
		fallback.g = 0.78;
		this.ApplyStyleImage(go, "scrollbarThumb", fallback, true);
		return pUVar1;
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x5222A70", Offset = "0x5221A70", VA = "0x5222A70")]
	private float ScrollbarWidth()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$ScrollbarWidth): clean
		float fVar1;
		GisketchTheme __this_00;
		GisketchLength pGVar2;
		bool bVar3;
		GisketchStyleDefinition pGVar4;
		float fVar5;

		__this_00 = this._theme;
		if (__this_00 != null) {
			pGVar4 = __this_00.GetStyle("scrollbar");
			if ((pGVar4 == null) ||(pGVar2 = pGVar4.width, pGVar2 == null)) {
				return 12.0;
			}
			bVar3 = String.Equals(pGVar2.unit, "point", 5);
			if (bVar3) {
				pGVar2 = pGVar4.width;
				if (pGVar2 == null) {
					throw new NullReferenceException();
				}
				fVar1 = pGVar2.value;
				if (1.0 <= fVar1) {
				}
			}
		}
		return fVar5;
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x5222B20", Offset = "0x5221B20", VA = "0x5222B20")]
	private void ApplyStyleImage(GameObject go, string styleName, Color fallback, bool reliefGradient = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$ApplyStyleImage): clean
		Nullable<bool> SVar1;
		Nullable<float> stainScaleOverride;
		Image pUVar2;
		GisketchStyleDefinition pGVar3;
		Material material;
		GisketchTheme pGVar6;
		Image graphic;
		bool bVar7;
		bool reliefGradient_00;
		float relief;
		float fVar8;
		float fVar9;
		float fVar10;
		Color UVar11;
		float local_68;
		float fStack_64;
		float local_48;
		float fStack_44;

		if (go == null) goto label_05322dd2;
		pUVar2 = go.GetComponent<Image>();
		if (pUVar2 == null) {
			pUVar2 = go.AddComponent<Image>();
			pGVar6 = this._theme;
			graphic = pUVar2;
			if (pGVar6 != null) goto label_05322bce;
	label_05322d68: ;
			if (pUVar2 == null) {
	label_05322dd2: ;
				throw new NullReferenceException();
			}
			local_48 = fallback.r;
			fStack_44 = fallback.g;
			local_68 = fallback.b;
			fStack_64 = fallback.a;
			graphic = pUVar2;
	label_05322db2: ;
			UVar11.g = fStack_44;
			UVar11.r = local_48;
			UVar11.a = fStack_64;
			UVar11.b = local_68;
			pUVar2.set_color(UVar11);
		}
		else {
			pGVar6 = this._theme;
			graphic = pUVar2;
			if (pGVar6 == null) goto label_05322d68;
	label_05322bce: ;
			pGVar3 = pGVar6.GetStyle(styleName);
			pUVar2 = null;
			if (pGVar3 == null) {
				pUVar2 = graphic;
			}
			pGVar6 = this._theme;
			if (pGVar3 == null) {
				if (pGVar6 == null) goto label_05322dd2;
				UVar11 = pGVar6.GetColor(null, fallback);
				local_68 = UVar11.b;
				fStack_64 = UVar11.a;
				local_48 = UVar11.r;
				fStack_44 = UVar11.g;
				if (pUVar2 == null) goto label_05322dd2;
				goto label_05322db2;
			}
			if ((pGVar6 == null) ||(UVar11 = pGVar6.GetColor(pGVar3.background, fallback), graphic == null)) goto label_05322dd2;
			graphic.set_color(UVar11);
			pGVar6 = this._theme;
			if (pGVar6 == null) goto label_05322dd2;
			relief = pGVar3.relief.value * pGVar6._ReliefIntensity_k__BackingField;
			SVar1 = pGVar3.worn;
			bVar7 = SVar1.hasValue == false;
			fVar8 = ABS(relief);
			if (fVar8 <= 0.0) {
				fVar8 = 0.0;
			}
			fVar10 = Mathf.Epsilon * 8.0;
			fVar9 = fVar8 * 1e-06;
			if (fVar8 * 1e-06 <= fVar10) {
				fVar9 = fVar10;
			}
			if (fVar9 <= ABS(0.0 - relief) || (0xff < (ushort)SVar1 || bVar7)) {
				reliefGradient_00 = true;
				if (!reliefGradient) {
					reliefGradient_00 = pGVar3.reliefGradient.value != false;
				}
				stainScaleOverride = pGVar3.wornStainScale;
				material = GisketchSurfaceMaterial.Instance(relief, reliefGradient_00, 0xff < (ushort)SVar1 || bVar7, (Nullable<float>)stainScaleOverride, false, false);
				goto label_05322dbd;
			}
		}
		material = null;
	label_05322dbd: ;
		GisketchSurfaceMaterialOwner.Assign((Graphic)graphic, material);
		return;
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x52212E0", Offset = "0x52202E0", VA = "0x52212E0")]
	private static void Stretch(RectTransform rect)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$Stretch): clean
		bool bVar1;

		bVar1 = ((Object)rect == null);
		if (bVar1) {
			return;
		}
		if (rect == null) {
			throw new NullReferenceException();
		}
		rect.anchorMin = (Vector2)(Vector2.zeroVector);
		rect.anchorMax = (Vector2)(Vector2.oneVector);
		rect.offsetMin = (Vector2)(Vector2.zeroVector);
		rect.offsetMax = (Vector2)(Vector2.zeroVector);
		return;
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x5223500", Offset = "0x5222500", VA = "0x5223500")]
	public void Setup(IGisketchVirtualScrollSource source, [Optional] GisketchTheme theme, float scrollSensitivity = 48f)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$Setup): clean
		float fVar1;

		this._source = source;
		this._theme = theme;
		fVar1 = 1.0;
		if (1.0 <= scrollSensitivity) {
			fVar1 = scrollSensitivity;
		}
		this._scrollSensitivity = fVar1;
		this.EnsureHierarchy();
		this.Refresh(true);
		return;
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x52237B0", Offset = "0x52227B0", VA = "0x52237B0")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$LateUpdate): clean


		if (this._source == null) {
			return;
		}
		this.Refresh(false);
		return;
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x5223560", Offset = "0x5222560", VA = "0x5223560")]
	public void Refresh(bool force)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$Refresh): 4 lines keep C-only constructs
		GisketchVirtualScrollMetrics metrics;
		GisketchVirtualScrollMetrics metrics_00;
		GisketchVirtualScrollMetrics metrics_01;
		GisketchVirtualScrollMetrics metrics_02;
		GisketchVirtualScrollMetrics metrics_03;
		bool bVar1;
		GisketchVirtualRange range;
		GisketchVirtualScrollRuntime.Slot pGVar2;
		int iVar4;
		MethodInfo method_01;
		int iVar5;
		float fVar6;
		float fVar7;
		GisketchVirtualScrollMetrics local_78;
		float local_50;
		float local_4c;
		float local_48;
		byte[] local_38 = new byte[16];

		local_78.OverscanRows = 0;
		local_78.PaddingLeft = 0.0;
		local_78.PaddingRight = 0.0;
		local_78.PaddingTop = 0.0;
		local_78.ItemHeight = 0.0;
		local_78.Gap = 0.0;
		local_78.ViewportHeight = 0.0;
		local_78.VirtualizationThreshold = 0;
		local_78.PaddingBottom = 0.0;
		if (this._source != null) {
			this.EnsureHierarchy();
			local_78 = this.EffectiveMetrics();
			local_48 = this.UiScale();
			local_38 = ZEXT416((uint)this._lastUiScale);
			local_4c = Mathf.Epsilon;
			this._lastUiScale = local_48;
			metrics.ViewportHeight = local_78.ViewportHeight;
			metrics.VirtualizationThreshold = local_78.VirtualizationThreshold;
			metrics.ItemHeight = local_78.ItemHeight;
			metrics.Gap = local_78.Gap;
			metrics.OverscanRows = local_78.OverscanRows;
			metrics.PaddingLeft = local_78.PaddingLeft;
			metrics.PaddingRight = local_78.PaddingRight;
			metrics.PaddingTop = local_78.PaddingTop;
			metrics.PaddingBottom = local_78.PaddingBottom;
			this.ApplyContentSize(metrics);
			bVar1 = this.IsVirtualized;
			if (bVar1) {
				local_50 = this.ScrollOffset();
				fVar6 = this.ViewportHeight();
				metrics_00.ViewportHeight = local_78.ViewportHeight;
				metrics_00.VirtualizationThreshold = local_78.VirtualizationThreshold;
				metrics_00.ItemHeight = local_78.ItemHeight;
				metrics_00.Gap = local_78.Gap;
				metrics_00.OverscanRows = local_78.OverscanRows;
				metrics_00.PaddingLeft = local_78.PaddingLeft;
				metrics_00.PaddingRight = local_78.PaddingRight;
				metrics_00.PaddingTop = local_78.PaddingTop;
				metrics_00.PaddingBottom = local_78.PaddingBottom;
				range = (GisketchVirtualRange)this.RangeFor(metrics_00, local_50, fVar6);
				iVar5 = range.End;
				iVar4 = range.Start;
				if ((iVar5 < iVar4) || ((iVar5 - iVar4) + 1 < 1)) {
					this.UnbindAll();
				}
				else {
					method_01 = (MethodInfo)(ulong)(uint)range.Start;
					fVar6 = ABS(local_48);
					if (ABS(local_48) <= ABS((float)local_38._0_4_)) {
						fVar6 = ABS((float)local_38._0_4_);
					}
					fVar7 = fVar6 * 1e-06;
					if (fVar6 * 1e-06 <= local_4c * 8.0) {
						fVar7 = local_4c * 8.0;
					}
					if (fVar7 <= ABS((float)local_38._0_4_ - local_48)) {
						metrics_01.ViewportHeight = local_78.ViewportHeight;
						metrics_01.VirtualizationThreshold = local_78.VirtualizationThreshold;
						metrics_01.ItemHeight = local_78.ItemHeight;
						metrics_01.Gap = local_78.Gap;
						metrics_01.OverscanRows = local_78.OverscanRows;
						metrics_01.PaddingLeft = local_78.PaddingLeft;
						metrics_01.PaddingRight = local_78.PaddingRight;
						metrics_01.PaddingTop = local_78.PaddingTop;
						metrics_01.PaddingBottom = local_78.PaddingBottom;
						this.PositionAll(metrics_01);
					}
					if (((!force) && (this._range.Start == iVar4)) &&(this._range.End == iVar5)) {
						return;
					}
					this.RecycleOutside((GisketchVirtualRange)range);
					do {
						iVar4 = (int)method_01;
						pGVar2 = this.SlotFor(iVar4) ;
						if (pGVar2 == null) {
							pGVar2 = this.FreeSlot() ;
							metrics_02.ViewportHeight = local_78.ViewportHeight;
							metrics_02.VirtualizationThreshold = local_78.VirtualizationThreshold;
							metrics_02.ItemHeight = local_78.ItemHeight;
							metrics_02.Gap = local_78.Gap;
							metrics_02.OverscanRows = local_78.OverscanRows;
							metrics_02.PaddingLeft = local_78.PaddingLeft;
							metrics_02.PaddingRight = local_78.PaddingRight;
							metrics_02.PaddingTop = local_78.PaddingTop;
							metrics_02.PaddingBottom = local_78.PaddingBottom;
							this.Bind(pGVar2, iVar4, metrics_02);
						}
						method_01 = (MethodInfo)(ulong)(iVar4 + 1U);
					} while ((int)(iVar4 + 1U) <= iVar5);
				}
				this._range = range;
			}
			else {
				metrics_03.ViewportHeight = local_78.ViewportHeight;
				metrics_03.VirtualizationThreshold = local_78.VirtualizationThreshold;
				metrics_03.ItemHeight = local_78.ItemHeight;
				metrics_03.Gap = local_78.Gap;
				metrics_03.OverscanRows = local_78.OverscanRows;
				metrics_03.PaddingLeft = local_78.PaddingLeft;
				metrics_03.PaddingRight = local_78.PaddingRight;
				metrics_03.PaddingTop = local_78.PaddingTop;
				metrics_03.PaddingBottom = local_78.PaddingBottom;
				this.RefreshStatic(metrics_03);
			}
		}
		return;
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x5224150", Offset = "0x5223150", VA = "0x5224150")]
	public bool MaterializeItem(int itemIndex)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$MaterializeItem): 4 lines keep C-only constructs
		object obj;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		GisketchVirtualScrollMetrics metrics;
		int iVar3;
		VirtualInvokeData pVVar4;
		GisketchVirtualScrollRuntime.Slot pGVar5;
		ulong uVar6;
		long lVar7;
		bool bVar8;
		float offset;
		GisketchVirtualScrollMetrics local_48;

		local_48.OverscanRows = 0;
		local_48.PaddingLeft = 0.0;
		local_48.PaddingRight = 0.0;
		local_48.PaddingTop = 0.0;
		local_48.ItemHeight = 0.0;
		local_48.Gap = 0.0;
		local_48.ViewportHeight = 0.0;
		local_48.VirtualizationThreshold = 0;
		local_48.PaddingBottom = 0.0;
		obj = (object)this._source;
		if ((obj != null) && (-1 < itemIndex)) {
			pIVar1 = obj.klass;
			uVar6 = (ulong)(pIVar1._2).interface_offsets_count;
			if (uVar6 != 0) {
				pIVar2 = (pIVar1._1).interfaceOffsets;
				lVar7 = 0;
				do {
					if (*(IGisketchVirtualScrollSource*)((long)&pIVar2.interfaceType + lVar7) == typeof(IGisketchVirtualScrollSource)) {
						pVVar4 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar7);
						goto label_05324201;
					}
					lVar7 = lVar7 + 0x10;
				} while (uVar6 * 0x10 != lVar7);
			}
			pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IGisketchVirtualScrollSource), 0);
	label_05324201: ;
			iVar3 = (*pVVar4.methodPtr)(obj,pVVar4.method);
			if (itemIndex < iVar3) {
				local_48 = this.EffectiveMetrics();
				metrics.ViewportHeight = local_48.ViewportHeight;
				metrics.VirtualizationThreshold = local_48.VirtualizationThreshold;
				metrics.ItemHeight = local_48.ItemHeight;
				metrics.Gap = local_48.Gap;
				metrics.OverscanRows = local_48.OverscanRows;
				metrics.PaddingLeft = local_48.PaddingLeft;
				metrics.PaddingRight = local_48.PaddingRight;
				metrics.PaddingTop = local_48.PaddingTop;
				metrics.PaddingBottom = local_48.PaddingBottom;
				offset = this.ItemOffset(itemIndex, metrics);
				this.SetScrollOffset(offset);
				this.Refresh(true);
				pGVar5 = this.SlotFor(itemIndex);
				bVar8 = pGVar5 != null;
			}
			else {
			}
		}
		return bVar8;
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x5224480", Offset = "0x5223480", VA = "0x5224480", Slot = "4")]
	public bool TryMaterializeSearchTarget(string targetId, out GameObject target)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$TryMaterializeSearchTarget): 5 lines keep C-only constructs
		object obj;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		IGisketchVirtualScrollSource pGVar3;
		Object x;
		bool bVar4;
		sbyte cVar5;
		VirtualInvokeData pVVar6;
		GisketchVirtualScrollRuntime.Slot pGVar7;
		ulong uVar8;
		long lVar9;
		int iStack_34;

		iStack_34 = 0;
		*target = null;
		if ((this._source != null) &&(bVar4 = String.IsNullOrEmpty(targetId), !bVar4)) {
			obj = (object)this._source;
			if (obj == null) {
	label_0532460a: ;
				throw new NullReferenceException();
			}
			pIVar1 = obj.klass;
			uVar8 = (ulong)(pIVar1._2).interface_offsets_count;
			if (uVar8 != 0) {
				pIVar2 = (pIVar1._1).interfaceOffsets;
				lVar9 = 0;
				do {
					if (*(IGisketchVirtualScrollSource*)((long)&pIVar2.interfaceType + lVar9) == typeof(IGisketchVirtualScrollSource)) {
						pVVar6 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar9) + 7);
						goto label_0532456a;
					}
					lVar9 = lVar9 + 0x10;
				} while (uVar8 * 0x10 != lVar9);
			}
			pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IGisketchVirtualScrollSource), 7);
	label_0532456a: ;
			bVar4 = (*pVVar6.methodPtr)(obj,targetId,&iStack_34,pVVar6.method);
			if (((bVar4) &&(bVar4 = this.MaterializeItem(iStack_34))) &&(pGVar7 = this.SlotFor(iStack_34), pGVar7 != null)) {
				pGVar3 = this._source;
				if (pGVar3 == null) goto label_0532460a;
				cVar5 = il2cpp_runtime_helper_02d49f70(8, typeof(IGisketchVirtualScrollSource), pGVar3, targetId, iStack_34, pGVar7.Root, target);
				if (cVar5 != false) {
					x = (Object)*target;
					bVar4 = (x != null);
					return bVar4;
				}
			}
		}
		return false;
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x5224280", Offset = "0x5223280", VA = "0x5224280")]
	public void SetScrollOffset(float offset)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$SetScrollOffset): clean
		RectTransform pUVar1;
		Vector2 value;
		Vector2 UVar2;
		bool bVar3;
		float fVar4;
		Rect UVar5;
		Rect UVar6;
		float fStack_44;
		float fStack_34;

		this.EnsureHierarchy();
		pUVar1 = this._content;
		bVar3 = ((Object)pUVar1 == null);
		if (!bVar3) {
			pUVar1 = this._viewport;
			bVar3 = ((Object)pUVar1 == null);
			if (!bVar3) {
				pUVar1 = this._content;
				if (pUVar1 != null) {
					UVar5 = pUVar1.rect;
					pUVar1 = this._viewport;
					if (pUVar1 != null) {
						UVar6 = pUVar1.rect;
						pUVar1 = this._content;
						if (pUVar1 != null) {
							UVar2 = pUVar1.anchoredPosition;
							pUVar1 = this._content;
							if (pUVar1 != null) {
								fStack_34 = UVar5.m_Height;
								fStack_44 = UVar6.m_Height;
								fVar4 = 0.0;
								if (0.0 <= fStack_34 - fStack_44) {
									fVar4 = fStack_34 - fStack_44;
								}
								if (offset <= fVar4) {
									fVar4 = offset;
								}
								value.y = (float)(-(uint)(0.0 <= offset) & (uint)fVar4);
								value.x = UVar2.x;
								pUVar1.anchoredPosition = value;
								return;
							}
						}
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x52237C0", Offset = "0x52227C0", VA = "0x52237C0")]
	private void RefreshStatic(GisketchVirtualScrollMetrics metrics)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$RefreshStatic): 8 lines keep C-only constructs
		object pIVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		GameObject item;
		bool bVar4;
		uint uVar5;
		VirtualInvokeData pVVar6;
		GisketchVirtualScrollRuntime.Slot pGVar7;
		ulong uVar8;
		GisketchVirtualRange GVar9;
		int iVar10;
		MethodInfo method_02;
		long lVar11;
		List<GisketchVirtualScrollRuntime.Slot> __this_00;

		pIVar1 = (object)this._source;
		if (pIVar1 != null) {
			pIVar2 = pIVar1.klass;
			uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
			if (uVar8 != 0) {
				pIVar3 = (pIVar2._1).interfaceOffsets;
				lVar11 = 0;
				do {
					if (*(IGisketchVirtualScrollSource*)((long)&pIVar3.interfaceType + lVar11) == typeof(IGisketchVirtualScrollSource)) {
						pVVar6 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar11);
						goto label_05323871;
					}
					lVar11 = lVar11 + 0x10;
				} while (uVar8 * 0x10 != lVar11);
			}
			pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar1, (Il2CppClass)typeof(IGisketchVirtualScrollSource), 0);
	label_05323871: ;
			uVar5 = (*pVVar6.methodPtr)(pIVar1,pVVar6.method);
			if (0 < (int)uVar5) {
				method_02 = null;
				do {
					iVar10 = (int)method_02;
					pGVar7 = this.SlotFor(iVar10);
					if (pGVar7 == null) {
						pGVar7 = this.FreeSlot();
						this.Bind(pGVar7, iVar10, metrics);
					}
					method_02 = (MethodInfo)(ulong)(iVar10 + 1U);
				} while (uVar5 != iVar10 + 1U);
			}
			__this_00 = this._slots;
			if (__this_00 != null) {
				iVar10 = 0;
				do {
					if (__this_00._size <= iVar10) {
						GVar9.Start = -1;
						GVar9.End = -1;
						if (uVar5 != 0) {
							GVar9 = (GisketchVirtualRange)((ulong)(uVar5 - 1) << 0x20) ;
						}
						this._range = GVar9;
						return;
					}
					pGVar7 = (GisketchVirtualScrollRuntime.Slot)__this_00.get_Item(iVar10);
					if (pGVar7 == null) break;
					if ((int)uVar5 <= pGVar7.ItemIndex) {
						pIVar1 = (object)this._source;
						if (pIVar1 == null) break;
						item = pGVar7.Root;
						pIVar2 = pIVar1.klass;
						uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
						if (uVar8 != 0) {
							pIVar3 = (pIVar2._1).interfaceOffsets;
							lVar11 = 0;
							do {
								if (*(IGisketchVirtualScrollSource*)((long)&pIVar3.interfaceType + lVar11) == typeof(IGisketchVirtualScrollSource)) {
									pVVar6 = pIVar2.vtable + (*(int)((long)&pIVar3.offset + lVar11) + 6);
									goto label_053239a9;
								}
								lVar11 = lVar11 + 0x10;
							} while (uVar8 * 0x10 != lVar11);
						}
						pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar1, (Il2CppClass)typeof(IGisketchVirtualScrollSource), 6) ;
	label_053239a9: ;
						bVar4 = (*pVVar6.methodPtr)(pIVar1,item,pVVar6.method);
						if (bVar4) {
							this.Unbind(pGVar7);
						}
					}
					iVar10 = iVar10 + 1;
					__this_00 = this._slots;
				} while (__this_00 != null);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x5223B90", Offset = "0x5222B90", VA = "0x5223B90")]
	private void RecycleOutside(GisketchVirtualRange range)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$RecycleOutside): 4 lines keep C-only constructs
		int iVar1;
		object obj;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		bool bVar4;
		GisketchVirtualScrollRuntime.Slot slot;
		VirtualInvokeData pVVar5;
		ulong uVar6;
		int index;
		MethodInfo method_01;
		List<GisketchVirtualScrollRuntime.Slot> __this_00;
		long lVar7;
		int local_38;

		__this_00 = this._slots;
		if (__this_00 != null) {
			index = 0;
			do {
				if (__this_00._size <= index) {
					return;
				}
				slot = (GisketchVirtualScrollRuntime.Slot)__this_00.get_Item(index) ;
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
							if (*(IGisketchVirtualScrollSource*)((long)&pIVar3.interfaceType + lVar7) == typeof(IGisketchVirtualScrollSource)) {
								pVVar5 = pIVar2.vtable + (*(int)((long)&pIVar3.offset + lVar7) + 6);
								goto label_05323cc9;
							}
							lVar7 = lVar7 + 0x10;
						} while (uVar6 * 0x10 != lVar7);
					}
					pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IGisketchVirtualScrollSource), 6);
	label_05323cc9: ;
					bVar4 = (*pVVar5.methodPtr)(obj,(GameObject)method_01,pVVar5.method);
					if (bVar4) {
						bVar4 = GisketchVirtualScrollRuntime.HasFocusedChild(slot.Root);
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

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x5223D30", Offset = "0x5222D30", VA = "0x5223D30")]
	private Slot FreeSlot()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$FreeSlot): 8 lines keep C-only constructs
		int piVar1;
		int slotIndex;
		uint uVar2;
		RectTransform parent;
		Il2CppClass pIVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		GisketchVirtualScrollRuntime.Slot[] pGVar5;
		bool bVar7;
		object pIVar8;
		VirtualInvokeData pVVar9;
		GisketchVirtualScrollRuntime.Slot pGVar10;
		Object x;
		LayoutElement pUVar11;
		ulong uVar12;
		int index;
		List<GisketchVirtualScrollRuntime.Slot> pSVar13;
		long lVar14;

		pSVar13 = this._slots;
		if (pSVar13 != null) {
			index = 0;
			do {
				slotIndex = pSVar13._size;
				if (slotIndex <= index) {
					pIVar8 = (object)this._source;
					if (pIVar8 != null) {
						parent = this._realizedLayer;
						pIVar3 = pIVar8.klass;
						uVar12 = (ulong)(pIVar3._2).interface_offsets_count;
						if (uVar12 == 0) goto label_05323e4f;
						pIVar4 = (pIVar3._1).interfaceOffsets;
						lVar14 = 0;
						goto label_05323e40;
					}
					break;
				}
				pIVar8 = pSVar13.get_Item(index);
				if (pIVar8 == null) break;
				if (*(int)&pIVar8[1].monitor < 0) {
					pSVar13 = this._slots;
					if (pSVar13 != null) {
						pGVar10 = (GisketchVirtualScrollRuntime.Slot)pSVar13.get_Item(index);
						return pGVar10;
					}
					break;
				}
				index = index + 1;
				pSVar13 = this._slots;
			} while (pSVar13 != null);
		}
		goto label_05323fc9;
		while (true) {
			lVar14 = lVar14 + 0x10;
			if (!(uVar12 * 0x10 != lVar14)) break;
	label_05323e40: ;
			if (*(IGisketchVirtualScrollSource*)((long)&pIVar4.interfaceType + lVar14) == typeof(IGisketchVirtualScrollSource)) {
				pVVar9 = pIVar3.vtable + (*(int)((long)&pIVar4.offset + lVar14) + 3);
				goto label_05323e9a;
			}
		}
	label_05323e4f: ;
		pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar8, (Il2CppClass)typeof(IGisketchVirtualScrollSource), 3);
	label_05323e9a: ;
		x = (Object)(*pVVar9.methodPtr)(pIVar8,(Transform)parent,slotIndex,pVVar9.method);
		bVar7 = (x == null);
		if (bVar7) {
			return null;
		}
		if ((x != null) &&((pUVar11 = x.GetComponent<LayoutElement>(), pUVar11 != null ||(pUVar11 = x.AddComponent<LayoutElement>(), pUVar11 != null)))) {
			pUVar11.set_ignoreLayout(true);
			pGVar10 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchVirtualScrollRuntime.Slot));
			pGVar10.ItemIndex = -1;
			pGVar10 = new Object();
			pGVar10.Root = (GameObject)x;
			pSVar13 = this._slots;
			if (pSVar13 != null) {
				piVar1 = &pSVar13._version;
				*piVar1 = *piVar1 + 1;
				pGVar5 = pSVar13._items;
				if (pGVar5 != null) {
					uVar2 = pSVar13._size;
					if (uVar2 < (uint)pGVar5.Length) {
						pSVar13._size = uVar2 + 1;
						pGVar5[(int)uVar2] = pGVar10;
						return pGVar10;
					}
					pSVar13.AddWithResize((object)pGVar10);
					return pGVar10;
				}
			}
		}
	label_05323fc9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x5223FD0", Offset = "0x5222FD0", VA = "0x5223FD0")]
	private void Bind(Slot slot, int itemIndex, GisketchVirtualScrollMetrics metrics)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$Bind): 4 lines keep C-only constructs
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
					this.Position(rect, itemIndex, metrics);
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
									if (*(IGisketchVirtualScrollSource*)((long)&pIVar3.interfaceType + lVar7) == typeof(IGisketchVirtualScrollSource)) {
										pVVar5 = pIVar2.vtable + (*(int)((long)&pIVar3.offset + lVar7) + 4);
										goto label_05324125;
									}
									lVar7 = lVar7 + 0x10;
								} while (uVar6 * 0x10 != lVar7);
							}
							pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IGisketchVirtualScrollSource), 4);
	label_05324125: ;
							(*pVVar5.methodPtr)(obj,pUVar1,itemIndex,pVVar5.method);
							return;
						}
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x5224610", Offset = "0x5223610", VA = "0x5224610")]
	private void Unbind(Slot slot)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$Unbind): 4 lines keep C-only constructs
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
							if (*(IGisketchVirtualScrollSource*)((long)&pIVar3.interfaceType + lVar7) == typeof(IGisketchVirtualScrollSource)) {
								pVVar5 = pIVar2.vtable + (*(int)((long)&pIVar3.offset + lVar7) + 5);
								goto label_053246f5;
							}
							lVar7 = lVar7 + 0x10;
						} while (uVar6 * 0x10 != lVar7);
					}
					pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IGisketchVirtualScrollSource), 5);
	label_053246f5: ;
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

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x5223A00", Offset = "0x5222A00", VA = "0x5223A00")]
	private void UnbindAll()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$UnbindAll): 6 lines keep C-only constructs
		Il2CppClass item;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		bool bVar3;
		object pIVar4;
		object pIVar5;
		VirtualInvokeData pVVar6;
		GisketchVirtualScrollRuntime.Slot slot;
		ulong uVar7;
		int index;
		List<GisketchVirtualScrollRuntime.Slot> pSVar8;
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
					item = pIVar5[1].klass;
					pIVar1 = pIVar4.klass;
					uVar7 = (ulong)(pIVar1._2).interface_offsets_count;
					if (uVar7 != 0) {
						pIVar2 = (pIVar1._1).interfaceOffsets;
						lVar9 = 0;
						do {
							if (*(IGisketchVirtualScrollSource*)((long)&pIVar2.interfaceType + lVar9) == typeof(IGisketchVirtualScrollSource)) {
								pVVar6 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar9) + 6);
								goto label_05323b39;
							}
							lVar9 = lVar9 + 0x10;
						} while (uVar7 * 0x10 != lVar9);
					}
					pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar4, (Il2CppClass)typeof(IGisketchVirtualScrollSource), 6);
	label_05323b39: ;
					bVar3 = (*pVVar6.methodPtr)(pIVar4,(GameObject)item,pVVar6.method);
					if (bVar3) {
						pSVar8 = this._slots;
						if (pSVar8 == null) break;
						slot = (GisketchVirtualScrollRuntime.Slot)pSVar8.get_Item(index);
						this.Unbind(slot);
					}
				}
				index = index + 1;
				pSVar8 = this._slots;
			} while (pSVar8 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x5223D20", Offset = "0x5222D20", VA = "0x5223D20")]
	private bool IsBound(int itemIndex)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$IsBound): clean
		GisketchVirtualScrollRuntime.Slot pGVar1;

		pGVar1 = this.SlotFor(itemIndex);
		return pGVar1 != null;
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x52243D0", Offset = "0x52233D0", VA = "0x52243D0")]
	private Slot SlotFor(int itemIndex)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$SlotFor): 1 lines keep C-only constructs
		object pIVar1;
		GisketchVirtualScrollRuntime.Slot pGVar2;
		int index;
		List<GisketchVirtualScrollRuntime.Slot> pSVar3;

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
						pGVar2 = (GisketchVirtualScrollRuntime.Slot)pSVar3.get_Item(index);
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

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x5224730", Offset = "0x5223730", VA = "0x5224730")]
	private static bool HasFocusedChild(GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$HasFocusedChild): clean
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
			if (pUVar2 == null) goto label_05324865;
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
	label_05324865: ;
				throw new NullReferenceException();
			}
		}
		return false;
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x52248B0", Offset = "0x52238B0", VA = "0x52248B0")]
	public GisketchVirtualScrollRuntime()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Virtualization/GisketchVirtualScrollRuntime.c (Gisketch.Aottg2UI.Virtualization.GisketchVirtualScrollRuntime$$.ctor): 1 lines keep C-only constructs
		List<GisketchVirtualScrollRuntime.Slot> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<GisketchVirtualScrollRuntime.Slot>));
		__this_00 = new List<object>();
		this._slots = __this_00;
		this._scrollSensitivity = 48.0;
		this._lastUiScale = -1.0;
		this._range =(GisketchVirtualRange)0xffffffffffffffff;
		base();
		return;
	}
}
