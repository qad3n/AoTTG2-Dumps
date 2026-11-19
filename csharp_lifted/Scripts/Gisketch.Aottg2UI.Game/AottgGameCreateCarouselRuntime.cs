// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000216")]
internal sealed class AottgGameCreateCarouselRuntime : MonoBehaviour
{
	[Token(Token = "0x2000217")]
	[CompilerGenerated]
	private sealed class _003CStart_003Ed__10 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000B1D")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000B1E")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000B1F")]
		[FieldOffset(Offset = "0x20")]
		public AottgGameCreateCarouselRuntime _003C_003E4__this;

		[Token(Token = "0x17000164")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000C7D")]
			[Address(RVA = "0x5D8CA80", Offset = "0x5D8BA80", VA = "0x5D8CA80", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime.<Start>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000165")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000C7F")]
			[Address(RVA = "0x5D8CAD0", Offset = "0x5D8BAD0", VA = "0x5D8CAD0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime.<Start>d__10$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6000C7A")]
		[Address(RVA = "0x5D8B5C0", Offset = "0x5D8A5C0", VA = "0x5D8B5C0")]
		[DebuggerHidden]
		public _003CStart_003Ed__10(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime.<Start>d__10$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6000C7B")]
		[Address(RVA = "0x5D8C660", Offset = "0x5D8B660", VA = "0x5D8C660", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime.<Start>d__10$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6000C7C")]
		[Address(RVA = "0x5D8C670", Offset = "0x5D8B670", VA = "0x5D8C670", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime.<Start>d__10$$MoveNext): 8 lines keep C-only constructs
			RectTransform[]* targetAddress;
			int iVar1;
			MethodInfo __this_00;
			Il2CppClass pIVar2;
			Component pUVar3;
			bool bVar4;
			uint uVar5;
			int iVar6;
			RectTransform[] pUVar7;
			CanvasGroup[] pUVar8;
			Transform pUVar9;
			RectTransform pUVar10;
			CanvasGroup x;
			GameObject pUVar11;
			Object[] pSVar12;
			AottgGameCreateCarouselFocus pGVar13;
			uint uVar14;
			long lVar15;
			MethodInfo method_01;
			uint uVar16;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				this.__2__current = null;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				__this_00 = (MethodInfo)this.__4__this;
				this.__1__state = -1;
				if (((__this_00 != null) && (__this_00.klass != null)) &&(pUVar10 = (__this_00.klass._1).byval_arg.data, pUVar10 != null)) {
					uVar5 = pUVar10.childCount;
					pUVar7 = (RectTransform[])new RectTransform[uVar5];
					targetAddress = (RectTransform[]*)&__this_00.return_type;
					__this_00.return_type = (Il2CppType)pUVar7;
					if ((RectTransform[])__this_00.return_type != null) {
						pUVar8 = (CanvasGroup[])new CanvasGroup[(uint32_t)((RectTransform[])__this_00.return_type).Length] ;
						__this_00.parameters = (Il2CppType*)pUVar8;
						pUVar7 = (RectTransform[])__this_00.return_type;
						if (pUVar7 != null) {
							uVar16 = 0;
							lVar15 = 0x20;
							while (true) {
								pIVar2 = __this_00.klass;
								if (!((int)uVar16 < (int)pUVar7.Length)) break;
								if (((pIVar2 == null) ||(pUVar10 = (pIVar2._1).byval_arg.data, pUVar10 == null)) ||(pUVar9 = pUVar10.GetChild(uVar16), pUVar9 == null)) goto label_05e8ca71;
								pUVar10 = pUVar9.GetComponent<RectTransform>();
								if ((uint)pUVar7.Length <= uVar16) goto label_05e8ca76;
								*(RectTransform*)((long)pUVar7.m_Items + lVar15 + -0x20) = pUVar10;
								pUVar7 = *targetAddress;
								if (pUVar7 == null) goto label_05e8ca71;
								if ((uint)pUVar7.Length <= uVar16) goto label_05e8ca76;
								pUVar3 = *(Component*)((long)pUVar7.m_Items + lVar15 + -0x20);
								if (pUVar3 == null) goto label_05e8ca71;
								x = pUVar3.GetComponent<CanvasGroup>();
								bVar4 = ((Object)x == null);
								if (bVar4) {
									pUVar7 = *targetAddress;
									if (pUVar7 == null) goto label_05e8ca71;
									if ((uint)pUVar7.Length <= uVar16) goto label_05e8ca76;
									pUVar3 = *(Component*)((long)pUVar7.m_Items + lVar15 + -0x20);
									if ((pUVar3 == null) ||(pUVar11 = pUVar3.gameObject, pUVar11 == null)) goto label_05e8ca71;
									x = pUVar11.AddComponent<CanvasGroup>();
								}
								pUVar8 = (CanvasGroup[])__this_00.parameters;
								if (pUVar8 == null) goto label_05e8ca71;
								if ((uint)pUVar8.Length <= uVar16) goto label_05e8ca76;
								*(CanvasGroup*)((long)pUVar8.m_Items + lVar15 + -0x20) = x;
								uVar16 = uVar16 + 1;
								pUVar7 = *targetAddress;
								lVar15 = lVar15 + 8;
								if (pUVar7 == null) goto label_05e8ca71;
							}
							if ((pIVar2 != null) &&(pUVar10 = (pIVar2._1).byval_arg.data, pUVar10 != null)) {
								method_01 = (MethodInfo)0x1;
								pSVar12 = pUVar10.GetComponentsInChildren<Button>(true);
								if (pSVar12 != null) {
									uVar16 = (uint)pSVar12.Length;
									if ((int)uVar16 < 1) goto label_05e8c9c9;
									uVar14 = 0;
									goto label_05e8c970;
								}
							}
						}
					}
				}
				goto label_05e8ca71;
			}
			goto label_05e8ca5d;
			while(true) {
				pGVar13._carousel = (AottgGameCreateCarouselRuntime)__this_00;
				method_01 = __this_00;
				uVar14 = uVar14 + 1;
				uVar16 = (uint)pSVar12.Length;
				if ((int)uVar16 <= (int)uVar14) break;
		label_05e8c970: ;
				if (uVar16 <= uVar14) {
		label_05e8ca76: ;
					throw new IndexOutOfRangeException();
				}
				if ((((Component)pSVar12[(int)uVar14] == null) ||(pUVar11 = (pSVar12[(int)uVar14]).gameObject, pUVar11 == null)) ||(pGVar13 = pUVar11.AddComponent<AottgGameCreateCarouselFocus>(), pGVar13 == null)) goto label_05e8ca71;
			}
		label_05e8c9c9: ;
			uVar5 = __this_00.token;
			if (-1 < (int)uVar5) {
				if ((__this_00.klass == null) ||(pUVar10 = (__this_00.klass._1).byval_arg.data, pUVar10 == null)) {
		label_05e8ca71: ;
					throw new NullReferenceException();
				}
				method_01 = null;
				iVar6 = pUVar10.childCount;
				if ((int)uVar5 < iVar6) {
					if (((__this_00.klass == null) ||(pUVar10 = (__this_00.klass._1).byval_arg.data, pUVar10 == null)) ||(pUVar9 = pUVar10.GetChild(__this_00.token), pUVar9 == null)) goto label_05e8ca71;
					method_01 = (MethodInfo)pUVar9.GetComponent<RectTransform>();
					__this_00.Reveal((RectTransform)method_01);
				}
			}
			__this_00.UpdateEdges();
		label_05e8ca5d: ;
			return iVar1 == 0;
		}

		[Token(Token = "0x6000C7E")]
		[Address(RVA = "0x5D8CA90", Offset = "0x5D8BA90", VA = "0x5D8CA90", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime.<Start>d__10$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_Start_d__10_System_Collections_IEnumerator);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4000B15")]
	private const float EdgeWidth = 160f;

	[Token(Token = "0x4000B16")]
	private const float EdgeFadeDistance = 40f;

	[Token(Token = "0x4000B17")]
	[FieldOffset(Offset = "0x20")]
	private ScrollRect _scroll;

	[Token(Token = "0x4000B18")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform[] _items;

	[Token(Token = "0x4000B19")]
	[FieldOffset(Offset = "0x30")]
	private CanvasGroup[] _itemFades;

	[Token(Token = "0x4000B1A")]
	[FieldOffset(Offset = "0x38")]
	private AottgGameCreateCarouselEdge _leftEdge;

	[Token(Token = "0x4000B1B")]
	[FieldOffset(Offset = "0x40")]
	private AottgGameCreateCarouselEdge _rightEdge;

	[Token(Token = "0x4000B1C")]
	[FieldOffset(Offset = "0x48")]
	private int _selectedIndex;

	[Token(Token = "0x6000C6E")]
	[Address(RVA = "0x5D8B0E0", Offset = "0x5D8A0E0", VA = "0x5D8B0E0")]
	public void Setup(ScrollRect scroll, int selectedIndex)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$Setup): 3 lines keep C-only constructs
		Scrollbar __this_00;
		UnityEngine_Events_UnityEvent_Vector2__o __this_01;
		GameObject __this_02;
		AottgGameCreateCarouselEdge pGVar1;
		UnityAction<T0> call;

		this._scroll = scroll;
		this._selectedIndex = selectedIndex;
		if (scroll != null) {
			scroll.m_Horizontal = true;
			scroll.m_Vertical = false;
			scroll.m_ScrollSensitivity = 168.0;
			__this_00 = scroll.m_VerticalScrollbar;
			if (__this_00 != null) {
				__this_02 = __this_00.gameObject;
				if (__this_02 != null) {
					__this_02.SetActive(false);
					scroll.verticalScrollbar = null;
					pGVar1 = this.CreateEdge(false);
					this._leftEdge = pGVar1;
					pGVar1 = this.CreateEdge(true);
					this._rightEdge = pGVar1;
					__this_01 = (UnityEngine_Events_UnityEvent_Vector2__o)scroll.m_OnValueChanged;
					call = new UnityAction<Vector2>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_OnScroll);
					if (__this_01 != null) {
						__this_01.AddListener(call);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000C6F")]
	[Address(RVA = "0x5D8B210", Offset = "0x5D8A210", VA = "0x5D8B210")]
	private AottgGameCreateCarouselEdge CreateEdge(bool right)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$CreateEdge): 5 lines keep C-only constructs
		String name;
		ScrollRect pUVar1;
		Il2CppType handle;
		String* ppSVar2;
		Type[] components;
		Type pSVar3;
		object pIVar4;
		GameObject __this_00;
		Transform __this_01;
		RectTransform __this_02;
		AottgGameCreateCarouselEdge pGVar5;
		Vector2 value;
		Vector2 value_00;
		Vector2 value_01;
		float fVar6;

		if (right) {
			ppSVar2 = &"Carousel Right Fade";
		}
		else {
			ppSVar2 = &"Carousel Left Fade";
		}
		name = *ppSVar2;
		components = (Type[])new Type[2];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) {
	label_05e8b4db: ;
			throw new NullReferenceException();
		}
		if (pSVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((components.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05e8b4e5;
		}
		if ((int)components.Length != 0) {
			components[0] = pSVar3;
			pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_CanvasRenderer);
			if (pSVar3 != null) {
				pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((components.obj).klass)._1).element_class);
				if (pIVar4 == null) {
	label_05e8b4e5: ;
					pIVar4 = new ArrayTypeMismatchException();
					throw pIVar4;
				}
			}
			if ((components.Length & 0xfffffffe) != 0) {
				components[1] = pSVar3;
				__this_00 = new GameObject(name, components);
				if (__this_00 != null) {
					__this_01 = __this_00.transform;
					pUVar1 = this._scroll;
					if ((pUVar1 != null) && (__this_01 != null)) {
						__this_01.SetParent((Transform)pUVar1.m_Viewport, false) ;
						__this_02 = __this_00.GetComponent<RectTransform>();
						if (__this_02 != null) {
							if (right) {
								fVar6 = 1.0;
							}
							else {
								fVar6 = 0.0;
							}
							value.y = 0.0;
							value.x = fVar6;
							__this_02.anchorMin = value;
							value_00.y = 1.0;
							value_00.x = fVar6;
							__this_02.anchorMax = value_00;
							value_01.y = 0.5;
							value_01.x = fVar6;
							__this_02.pivot = value_01;
							__this_02.sizeDelta = (Vector2)0x43200000;
							pGVar5 = __this_00.AddComponent<AottgGameCreateCarouselEdge>();
							if (pGVar5 != null) {
								pGVar5._right = right;
								pGVar5.set_raycastTarget(false);
								pGVar5.set_color((Color)ZEXT816(0));
								pGVar5.SetVerticesDirty();
								return pGVar5;
							}
						}
					}
				}
				goto label_05e8b4db;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6000C70")]
	[Address(RVA = "0x5D8B550", Offset = "0x5D8A550", VA = "0x5D8B550")]
	[IteratorStateMachine(typeof(_003CStart_003Ed__10))]
	private IEnumerator Start()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$Start): 1 lines keep C-only constructs
		AottgGameCreateCarouselRuntime.d__10<Start> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateCarouselRuntime.d__10<Start>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6000C71")]
	[Address(RVA = "0x5D8B5E0", Offset = "0x5D8A5E0", VA = "0x5D8B5E0")]
	private void OnRectTransformDimensionsChange()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$OnRectTransformDimensionsChange): clean
		ScrollRect x;
		bool bVar1;

		x = this._scroll;
		bVar1 = ((Object)x != null);
		if (bVar1) {
			this.UpdateEdges();
			return;
		}
		return;
	}

	[Token(Token = "0x6000C72")]
	[Address(RVA = "0x5D8BF90", Offset = "0x5D8AF90", VA = "0x5D8BF90")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$OnDestroy): 3 lines keep C-only constructs
		ScrollRect pUVar1;
		UnityEngine_Events_UnityEvent_Vector2__o __this_00;
		bool bVar2;
		UnityAction<T0> call;

		pUVar1 = this._scroll;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._scroll;
			if (pUVar1 != null) {
				__this_00 = (UnityEngine_Events_UnityEvent_Vector2__o)pUVar1.m_OnValueChanged;
				call = new UnityAction<Vector2>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRuntime_OnScroll);
				if (__this_00 != null) {
					__this_00.RemoveListener(call);
					return;
				}
			}
			throw new NullReferenceException();
		}
		return;
	}

	[Token(Token = "0x6000C73")]
	[Address(RVA = "0x5D8C070", Offset = "0x5D8B070", VA = "0x5D8C070")]
	public void Reveal(RectTransform target)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$Reveal): clean
		ScrollRect pUVar1;
		RectTransform pUVar2;
		Vector2 UVar3;
		float fVar4;
		float fVar5;
		Rect UVar6;
		Bounds local_30;

		pUVar1 = this._scroll;
		if (pUVar1 == null) goto label_05e8c299;
		pUVar2 = pUVar1.m_Viewport;
		local_30 = RectTransformUtility.CalculateRelativeRectTransformBounds((Transform)pUVar2, (Transform)target);
		pUVar1 = this._scroll;
		if ((pUVar1 == null) ||(pUVar2 = pUVar1.m_Viewport, pUVar2 == null)) goto label_05e8c299;
		UVar6 = pUVar2.rect;
		fVar4 = UVar6.m_XMin;
		fVar5 = local_30.m_Center.x - local_30.m_Extents.x;
		if ((typeof(Rect)._2).cctor_finished_or_no_cctor == 0) {
			if (fVar5 < fVar4) goto label_05e8c142;
	label_05e8c1b5: ;
			if (local_30.m_Center.x + local_30.m_Extents.x <= UVar6.m_Width + fVar4 ) {
				return;
			}
			if (((typeof(Rect))._2).cctor_finished_or_no_cctor == 0) {
			}
			fVar5 = (local_30.m_Center.x + local_30.m_Extents.x) -(UVar6.m_Width + fVar4);
		}
		else {
			if (fVar4 <= fVar5) goto label_05e8c1b5;
	label_05e8c142: ;
			fVar5 = fVar5 - fVar4;
		}
		if (0.01 < ABS(fVar5)) {
			pUVar1 = this._scroll;
			if ((pUVar1 == null) ||(pUVar2 = pUVar1.m_Content, pUVar2 == null)) {
	label_05e8c299: ;
				throw new NullReferenceException();
			}
			UVar3 = pUVar2.anchoredPosition;
			this.SetOffset(fVar5 - UVar3.x);
		}
		return;
	}

	[Token(Token = "0x6000C74")]
	[Address(RVA = "0x5D8C2A0", Offset = "0x5D8B2A0", VA = "0x5D8C2A0")]
	private void SetOffset(float offset)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$SetOffset): clean
		ScrollRect pUVar1;
		RectTransform pUVar2;
		float fVar3;
		float fVar4;
		Rect UVar5;
		Rect UVar6;
		float local_28;

		pUVar1 = this._scroll;
		if ((pUVar1 != null) &&(pUVar2 = pUVar1.m_Content, pUVar2 != null)) {
			UVar5 = pUVar2.rect;
			pUVar1 = this._scroll;
			if ((pUVar1 != null) &&(pUVar2 = pUVar1.m_Viewport, pUVar2 != null)) {
				UVar6 = pUVar2.rect;
				pUVar1 = this._scroll;
				if (pUVar1 != null) {
					local_28 = UVar5.m_Width;
					local_28 = local_28 - UVar6.m_Width;
					fVar4 = 0.0;
					if (0.0 <= local_28) {
						fVar4 = local_28;
					}
					pUVar1.StopMovement();
					fVar3 = 0.0;
					pUVar1 = this._scroll;
					if (0.0 < fVar4) {
						fVar4 = offset / fVar4;
						fVar3 = 1.0;
						if (fVar4 <= 1.0) {
							fVar3 = fVar4;
						}
						fVar3 = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar3);
					}
					if (pUVar1 != null) {
						pUVar1.horizontalNormalizedPosition = fVar3;
						if (Il2CppMethodInitialized_0753ecc8 == false) {
							Il2CppMethodInitialized_0753ecc8 = true;
							this.UpdateEdges();
							return;
						}
						this.UpdateEdges();
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000C75")]
	[Address(RVA = "0x5D8C3E0", Offset = "0x5D8B3E0", VA = "0x5D8C3E0")]
	private void OnScroll(Vector2 position)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$OnScroll): clean
		this.UpdateEdges();
		return;
	}

	[Token(Token = "0x6000C76")]
	[Address(RVA = "0x5D8B650", Offset = "0x5D8A650", VA = "0x5D8B650")]
	private void UpdateEdges()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$UpdateEdges): 86 lines keep C-only constructs
		AottgGameCreateCarouselEdge pGVar1;
		ScrollRect pUVar2;
		RectTransform pUVar3;
		CanvasGroup[] pUVar4;
		CanvasGroup x;
		bool bVar5;
		uint extraout_EAX;
		uint extraout_EAX_00;
		uint uVar6;
		RectTransform[] pUVar7;
		ulong extraout_RAX;
		ulong extraout_RAX_00;
		ulong uVar8;
		ulong uVar9;
		uint in_ECX;
		uint uVar10;
		ulong uVar11;
		int iVar12;
		int iVar13;
		float fVar14;
		float fVar15;
		float fVar20;
		ulong extraout_XMM0_Qb;
		byte[] auVar16 = new byte[16];
		byte[] auVar17 = new byte[16];
		byte[] auVar18 = new byte[16];
		byte[] auVar19 = new byte[16];
		ulong extraout_XMM1_Qa;
		byte[] auVar21 = new byte[12];
		byte[] auVar22 = new byte[16];
		ulong extraout_XMM1_Qb;
		byte[] auVar23 = new byte[16];
		byte[] auVar24 = new byte[16];
		byte[] auVar25 = new byte[16];
		float fVar27;
		byte[] auVar26 = new byte[16];
		byte[] auVar28 = new byte[16];
		float fVar29;
		Rect UVar30;
		Rect UVar31;
		Color UVar32;
		Vector3 UVar33;
		Vector3 UVar34;
		float local_108;
		float local_f0;
		float local_ec;
		float local_d8;
		float local_c8;
		float fStack_c4;
		float local_b8;
		float fStack_b0;
		float fStack_ac;
		float local_a8;
		float fStack_a0;
		float fStack_9c;
		float local_98;
		float fStack_94;
		float local_88;
		Matrix4x4 local_70;

		pGVar1 = this._leftEdge;
		bVar5 = ((Object)pGVar1 == null);
		if (!bVar5) {
			pGVar1 = this._rightEdge;
			bVar5 = ((Object)pGVar1 == null);
			if (!bVar5) {
				pUVar2 = this._scroll;
				if ((pUVar2 != null) &&(pUVar3 = pUVar2.m_Content, pUVar3 != null)) {
					UVar30 = pUVar3.rect;
					pUVar2 = this._scroll;
					if ((pUVar2 != null) &&(pUVar3 = pUVar2.m_Viewport, pUVar3 != null)) {
						UVar31 = pUVar3.rect;
						pUVar2 = this._scroll;
						if (pUVar2 != null) {
							fVar14 = pUVar2.horizontalNormalizedPosition;
							pGVar1 = this._leftEdge;
							if (pGVar1 != null) {
								local_108 = UVar30.m_Width;
								local_d8 = UVar31.m_Width;
								auVar21 = ZEXT812(0x3f800000);
								if (fVar14 <= auVar21._0_4_) {
									auVar21._4_8_ = auVar21._4_8_;
									auVar21._0_4_ = fVar14;
								}
								fVar27 = 0.0;
								if (0.0 <= local_108 - local_d8) {
									fVar27 = local_108 - local_d8;
								}
								fVar14 = (float)(-(uint)(0.0 <= fVar14) & auVar21._0_4_) * fVar27;
								auVar22._0_4_ = fVar27 - fVar14;
								auVar22._4_4_ = fVar14;
								auVar22._8_8_ = 0;
								auVar26 = divps(auVar22, _DAT_01005920);
								auVar22 = minps(_DAT_01005870, auVar26);
								fVar14 = (float)(-(uint)(0.0 <= auVar26._0_4_) & auVar22._0_4_);
								fVar27 = (float)(-(uint)(0.0 <= auVar26._4_4_) & auVar22._4_4_);
								UVar32 = pGVar1.get_color();
								fVar29 = ABS(UVar32.a);
								if (fVar29 <= ABS(fVar27)) {
									fVar29 = ABS(fVar27);
								}
								fVar20 = Mathf.Epsilon * 8.0;
								fVar15 = fVar29 * 1e-06;
								if (fVar29 * 1e-06 <= fVar20) {
									fVar15 = fVar20;
								}
								if (fVar15 <= ABS(fVar27 - UVar32.a)) {
									pGVar1.set_color((Color)(ZEXT416((uint)fVar27) << 0x60));
								}
								pGVar1 = this._rightEdge;
								if (pGVar1 != null) {
									UVar32 = pGVar1.get_color();
									fVar29 = ABS(UVar32.a);
									if (fVar29 <= ABS(fVar14)) {
										fVar29 = ABS(fVar14);
									}
									fVar20 = Mathf.Epsilon * 8.0;
									auVar26 = ZEXT416((uint)fVar20);
									fVar15 = fVar29 * 1e-06;
									if (fVar29 * 1e-06 <= fVar20) {
										fVar15 = fVar20;
									}
									if (fVar15 <= ABS(fVar14 - UVar32.a)) {
										pGVar1.set_color((Color)(ZEXT416((uint)fVar14) << 0x60));
										auVar26._8_8_ = extraout_XMM1_Qb;
										auVar26._0_8_ = extraout_XMM1_Qa;
									}
									if (this._items == null) {
										return;
									}
									pUVar2 = this._scroll;
									if ((pUVar2 != null) &&(pUVar3 = pUVar2.m_Viewport, pUVar3 != null)) {
										UVar30 = pUVar3.rect;
										pUVar2 = this._scroll;
										if ((pUVar2 != null) &&(pUVar3 = pUVar2.m_Viewport, pUVar3 != null)) {
											local_70 = pUVar3.worldToLocalMatrix;
											pUVar7 = this._items;
											if (pUVar7 != null) {
												iVar12 = -(uint)(fVar14 < 0.0);
												iVar13 = -(uint)(fVar27 < 0.0);
												auVar24._4_4_ = iVar13;
												auVar24._0_4_ = iVar12;
												auVar24._8_4_ = iVar13;
												auVar24._12_4_ = iVar13;
												auVar23._8_8_ = auVar24._8_8_;
												auVar23._4_4_ = iVar12;
												auVar23._0_4_ = iVar12;
												uVar10 = movmskpd(in_ECX, auVar23);
												local_ec = 0.0;
												local_f0 = 0.0;
												if ((uVar10 & 2) == 0) {
													local_f0 = fVar27;
												}
												if ((uVar10 & 1) == 0) {
													local_ec = fVar14;
												}
												local_b8 = UVar30.m_XMin;
												fStack_b0 = (float)extraout_XMM0_Qb;
												fStack_ac = (float)((ulong)extraout_XMM0_Qb >> 0x20);
												local_a8 = UVar30.m_Width;
												fStack_a0 = auVar26._8_4_;
												fStack_9c = auVar26._12_4_;
												uVar11 = 0;
												do {
													uVar10 = (uint)pUVar7.Length;
													if ((long)(int)uVar10 <= (long)uVar11) {
														return;
													}
													if (uVar10 <= uVar11) goto label_05e8bf83;
													pUVar3 = pUVar7[uVar11];
													bVar5 = ((Object)pUVar3 == null);
													if (!bVar5) {
														pUVar4 = this._itemFades;
														if (pUVar4 == null) break;
														if ((uint)pUVar4.Length <= uVar11) goto label_05e8bf83;
														x = pUVar4[uVar11];
														bVar5 = ((Object)x == null);
														if (bVar5) goto label_05e8ba40;
														pUVar7 = this._items;
														if (pUVar7 == null) break;
														if ((uint)pUVar7.Length <= uVar11) goto label_05e8bf83;
														if (pUVar7[uVar11] == null) break;
														UVar30 = (pUVar7[uVar11]).rect;
														pUVar7 = this._items;
														if (pUVar7 == null) break;
														if ((uint)pUVar7.Length <= uVar11) goto label_05e8bf83;
														pUVar3 = pUVar7[uVar11];
														if (pUVar3 == null) break;
														fVar14 = UVar30.m_YMin + UVar30.m_Height * 0.5;
														UVar33.y = fVar14;
														UVar33.x = UVar30.m_XMin;
														UVar33.z = 0.0;
														UVar33 = pUVar3.TransformPoint(UVar33);
														pUVar7 = this._items;
														if (pUVar7 == null) break;
														uVar10 = (uint)pUVar7.Length;
														if (uVar10 <= uVar11) goto label_05e8bf83;
														local_108 = UVar30.m_Width;
														if (pUVar7[uVar11] == null) break;
														UVar34.x = local_108 + UVar30.m_XMin;
														UVar34.y = fVar14;
														UVar34.z = 0.0;
														UVar34 = (pUVar7[uVar11]).TransformPoint(UVar34);
														uVar8 = extraout_RAX;
														if (Il2CppMethodInitialized_07548890 == 0) {
															Il2CppMethodInitialized_07548890 = 1;
															uVar8 = extraout_RAX_00;
														}
														uVar9 = CONCAT71((int7)((ulong)uVar8 >> 8), 1);
														if ((typeof(Rect)._2).cctor_finished_or_no_cctor == 0) {
															uVar9 = (ulong)Il2CppMethodInitialized_07548890;
														}
														uVar6 = (undefined4)uVar9;
														local_98 = UVar33.x;
														fStack_94 = UVar33.y;
														fVar14 = UVar33.z * local_70.m02 + fStack_94 * local_70.m01 + local_70.m00 * local_98 + local_70.m03;
														auVar28._0_4_ = (local_a8 + local_b8) - fVar14;
														auVar28._4_4_ = fVar14 - local_b8;
														auVar28._8_4_ = (fStack_a0 + fStack_b0) - local_b8;
														auVar28._12_4_ = (fStack_9c + fStack_ac) - local_b8;
														auVar26 = divps(auVar28, _DAT_01009340);
														auVar22 = minps(_DAT_01005870, auVar26);
														fVar14 = (float)(-(uint)(0.0 <= auVar26._0_4_) & auVar22._0_4_);
														local_88 = (float)(-(uint)(0.0 <= auVar26._4_4_) & auVar22._4_4_);
														iVar12 = -(uint)(0.5 < fVar14);
														iVar13 = -(uint)(0.5 < local_88);
														auVar17._4_4_ = iVar13;
														auVar17._0_4_ = iVar12;
														auVar17._8_4_ = iVar13;
														auVar17._12_4_ = iVar13;
														auVar16._8_8_ = auVar17._8_8_;
														auVar16._4_4_ = iVar12;
														auVar16._0_4_ = iVar12;
														uVar10 = movmskpd(uVar10, auVar16);
														if ((uVar10 & 2) == 0) {
															local_88 = local_88 * 0.5;
															if ((uVar10 & 1) == 0) goto label_05e8bcf7;
	label_05e8bcaf: ;
															fVar14 = (fVar14 + -0.5) * 1.5 + 0.25;
														}
														else {
															local_88 = (local_88 + -0.5) * 1.5 + 0.25;
															if ((uVar10 & 1) != 0) goto label_05e8bcaf;
	label_05e8bcf7: ;
															fVar14 = fVar14 * 0.5;
														}
														if ((uVar9 & 1) == 0) {
															Il2CppMethodInitialized_07548890 = 1;
															uVar6 = extraout_EAX;
														}
														if ((typeof(Rect)._2).cctor_finished_or_no_cctor == 0) {
															uVar6 = extraout_EAX_00;
														}
														local_c8 = UVar34.x;
														fStack_c4 = UVar34.y;
														fVar27 = UVar34.z * local_70.m02 + fStack_c4 * local_70.m01 + local_70.m00 * local_c8 + local_70.m03;
														auVar25._0_4_ = (local_a8 + local_b8) - fVar27;
														auVar25._4_4_ = fVar27 - local_b8;
														auVar25._8_4_ = (fStack_a0 + fStack_b0) - local_b8;
														auVar25._12_4_ = (fStack_9c + fStack_ac) - local_b8;
														auVar26 = divps(auVar25, _DAT_01009340);
														auVar22 = minps(_DAT_01005870, auVar26);
														fVar27 = (float)(-(uint)(0.0 <= auVar26._0_4_) & auVar22._0_4_);
														fVar29 = (float)(-(uint)(0.0 <= auVar26._4_4_) & auVar22._4_4_);
														iVar12 = -(uint)(0.5 < fVar27);
														iVar13 = -(uint)(0.5 < fVar29);
														auVar19._4_4_ = iVar13;
														auVar19._0_4_ = iVar12;
														auVar19._8_4_ = iVar13;
														auVar19._12_4_ = iVar13;
														auVar18._8_8_ = auVar19._8_8_;
														auVar18._4_4_ = iVar12;
														auVar18._0_4_ = iVar12;
														uVar10 = movmskpd(uVar6, auVar18);
														if ((uVar10 & 2) == 0) {
															fVar29 = fVar29 * 0.5;
															if ((uVar10 & 1) == 0) goto label_05e8bdee;
	label_05e8bdb8: ;
															fVar27 = (fVar27 + -0.5) * 1.5 + 0.25;
														}
														else {
															fVar29 = (fVar29 + -0.5) * 1.5 + 0.25;
															if ((uVar10 & 1) != 0) goto label_05e8bdb8;
	label_05e8bdee: ;
															fVar27 = fVar27 * 0.5;
														}
														pUVar4 = this._itemFades;
														if (pUVar4 == null) break;
														if ((uint)pUVar4.Length <= uVar11) {
	label_05e8bf83: ;
															throw new IndexOutOfRangeException();
														}
														if (pUVar4[uVar11] == null) break;
														fVar15 = (pUVar4[uVar11]).alpha;
														fVar27 = (((fVar27 + -1.0) * local_ec + 1.0) * ((fVar29 + -1.0) * local_f0 + 1.0) +((fVar14 + -1.0) * local_ec + 1.0) * ((local_88 + -1.0) * local_f0 + 1.0)) * 0.5;
														fVar14 = ABS(fVar15);
														if (ABS(fVar15) <= ABS(fVar27)) {
															fVar14 = ABS(fVar27);
														}
														fVar20 = Mathf.Epsilon * 8.0;
														fVar29 = fVar14 * 1e-06;
														if (fVar14 * 1e-06 <= fVar20) {
															fVar29 = fVar20;
														}
														if (fVar29 <= ABS(fVar27 - fVar15)) {
															pUVar4 = this._itemFades;
															if (pUVar4 == null) break;
															if ((uint)pUVar4.Length <= uVar11) goto label_05e8bf83;
															if (pUVar4[uVar11] == null) break;
															(pUVar4[uVar11]).alpha = fVar27;
														}
														pUVar4 = this._itemFades;
														if (pUVar4 == null) break;
														if ((uint)pUVar4.Length <= uVar11) goto label_05e8bf83;
														if (pUVar4[uVar11] == null) break;
														(pUVar4[uVar11]).blocksRaycasts = 0.01 < fVar27;
													}
	label_05e8ba40: ;
													uVar11 = uVar11 + 1;
													pUVar7 = this._items;
												} while (pUVar7 != null);
											}
										}
									}
								}
							}
						}
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6000C77")]
	[Address(RVA = "0x5D8C4C0", Offset = "0x5D8B4C0", VA = "0x5D8C4C0")]
	private static float VisibilityAt(float position, Rect viewport, float leftOpacity, float rightOpacity)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$VisibilityAt): 21 lines keep C-only constructs
		float in_XMM0_Db;
		float in_XMM1_Dc;
		float in_XMM1_Dd;
		uint in_XMM3_Db;
		uint in_XMM4_Db;
		byte[] auVar1 = new byte[16];
		float fVar2;
		float fVar4;
		byte[] auVar3 = new byte[16];

		auVar3._0_4_ = position - viewport.m_XMin;
		auVar3._4_4_ = (viewport.m_Width + viewport.m_XMin) - position;
		auVar3._8_4_ = in_XMM0_Db - in_XMM1_Dc;
		auVar3._12_4_ = (viewport.m_Height + viewport.m_YMin) - in_XMM1_Dd;
		auVar3 = divps(auVar3, _DAT_01009340);
		auVar1 = minps(_DAT_01005870, auVar3);
		fVar2 = (float)(-(uint)(0.0 <= auVar3._0_4_) & auVar1._0_4_);
		fVar4 = (float)(-(uint)(0.0 <= auVar3._4_4_) & auVar1._4_4_);
		auVar1._4_4_ = rightOpacity;
		auVar1._0_4_ = leftOpacity;
		auVar1._8_4_ = in_XMM3_Db;
		auVar1._12_4_ = in_XMM4_Db;
		auVar1 = minps(_DAT_01005870, auVar1);
		return (((float)(~-(uint)(0.5 < fVar4) & (uint)(fVar4 * 0.5) |(uint)((fVar4 + -0.5) * 1.5 + 0.25) & -(uint)(0.5 < fVar4)) + -1.0) *(float)(auVar1._4_4_ & -(uint)(0.0 <= rightOpacity)) + g_data_01005870._4_4_) *(((float)(~-(uint)(0.5 < fVar2) & (uint)(fVar2 * 0.5) |(uint)((fVar2 + -0.5) * 1.5 + 0.25) & -(uint)(0.5 < fVar2)) + -1.0) *(float)(auVar1._0_4_ & -(uint)(0.0 <= leftOpacity)) + (float)g_data_01005870);
	}

	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x5D8C5F0", Offset = "0x5D8B5F0", VA = "0x5D8C5F0")]
	private static float EdgeVisibility(float distance)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$EdgeVisibility): clean
		float fVar1;
		float fVar2;

		fVar1 = distance / 160.0;
		fVar2 = 1.0;
		if (fVar1 <= 1.0) {
			fVar2 = fVar1;
		}
		fVar2 = (float)(-(uint)(0.0 <= fVar1) & (uint)fVar2);
		return (float)(-(uint)(0.5 < fVar2) & (uint)((fVar2 + -0.5) * 1.5 + 0.25) | ~-(uint)(0.5 < fVar2) & (uint)(fVar2 * 0.5));
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x5D8C650", Offset = "0x5D8B650", VA = "0x5D8C650")]
	public AottgGameCreateCarouselRuntime()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselRuntime.c (Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime$$.ctor): clean
		base();
		return;
	}
}
