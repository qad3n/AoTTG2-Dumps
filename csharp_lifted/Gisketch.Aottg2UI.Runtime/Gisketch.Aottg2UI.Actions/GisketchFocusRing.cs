// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchFocusRing
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusRing.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using DG.Tweening;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000E5")]
public sealed class GisketchFocusRing : MonoBehaviour, ISelectHandler, IEventSystemHandler, IDeselectHandler, IPointerDownHandler
{
	[Token(Token = "0x40004B5")]
	[FieldOffset(Offset = "0x20")]
	private GameObject _ring;

	[Token(Token = "0x40004B6")]
	[FieldOffset(Offset = "0x28")]
	private Tween _pulse;

	[Token(Token = "0x40004B7")]
	[FieldOffset(Offset = "0x30")]
	private bool _selected;

	[Token(Token = "0x600071A")]
	[Address(RVA = "0x52A1FC0", Offset = "0x52A0FC0", VA = "0x52A1FC0")]
	public void Setup(Color color, float thickness = 3f, float gap = 5f, float cornerLength = 14f, bool visible = true)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusRing.c (Gisketch.Aottg2UI.Actions.GisketchFocusRing$$Setup): 11 lines keep C-only constructs
		GameObject* targetAddress;
		Vector2 UVar1;
		Object x;
		Vector2 size;
		Vector2 size_00;
		Vector2 value;
		Vector2 size_01;
		Vector2 size_02;
		Vector2 size_03;
		Vector2 size_04;
		Vector2 size_05;
		Vector2 size_06;
		Il2CppType handle;
		bool bVar2;
		Type[] components;
		Type obj;
		object pIVar3;
		GameObject pUVar4;
		Transform __this_00;
		Transform parent;
		RectTransform __this_01;
		String pSVar5;
		String pSVar6;
		Action __this_02;
		Action pSVar7;
		Delegate value_00;
		Action a;

		if (visible) {
			x = (Object)this._ring;
			bVar2 = (x != null);
			if (!bVar2) {
				components = (Type[])new Type[1];
				handle = TypeRef_UnityEngine_RectTransform;
				obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
				if (components != null) {
					if ((obj != null) &&(pIVar3 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class), pIVar3 == null)) {
						pIVar3 = new ArrayTypeMismatchException();
						throw pIVar3;
					}
					if ((int)components.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					targetAddress = &this._ring;
					components[0] = obj;
					pUVar4 = new GameObject("AoTTG Focus Ring", components);
					*targetAddress = pUVar4;
					if (*targetAddress != null) {
						__this_00 = (*targetAddress).transform;
						parent = this.transform;
						if (__this_00 != null) {
							__this_00.SetParent(parent, false);
							if (*targetAddress != null) {
								__this_01 = (*targetAddress).GetComponent<RectTransform>();
								if (__this_01 != null) {
									__this_01.anchorMin = (Vector2)(Vector2.zeroVector) ;
									__this_01.anchorMax = (Vector2)(Vector2.oneVector);
									__this_01.offsetMin = (Vector2)(CONCAT44(gap, gap) ^ 0x8000000080000000);
									value.y = gap;
									value.x = gap;
									__this_01.offsetMax = value;
									pSVar6 = "Top Left";
									pSVar5 = String.Concat(pSVar6, " Horizontal");
									size.y = thickness;
									size.x = cornerLength;
									this.Segment(pSVar5, color, (Vector2)0x3f80000000000000, (Vector2)0x3f80000000000000, size);
									pSVar6 = String.Concat(pSVar6, " Vertical");
									size_00.y = cornerLength;
									size_00.x = thickness;
									this.Segment(pSVar6, color, (Vector2)0x3f80000000000000, (Vector2)0x3f80000000000000, size_00);
									pSVar6 = "Top Right";
									UVar1 = (Vector2.oneVector);
									pSVar5 = String.Concat(pSVar6, " Horizontal");
									size_01.y = thickness;
									size_01.x = cornerLength;
									this.Segment(pSVar5, color, (Vector2)UVar1, (Vector2)UVar1, size_01);
									pSVar6 = String.Concat(pSVar6, " Vertical");
									size_04.y = cornerLength;
									size_04.x = thickness;
									this.Segment(pSVar6, color, (Vector2)UVar1, (Vector2)UVar1, size_04);
									pSVar6 = "Bottom Left";
									UVar1 = (Vector2.zeroVector);
									pSVar5 = String.Concat(pSVar6, " Horizontal");
									size_02.y = thickness;
									size_02.x = cornerLength;
									this.Segment(pSVar5, color, (Vector2)UVar1, (Vector2)UVar1, size_02);
									pSVar6 = String.Concat(pSVar6, " Vertical");
									size_05.y = cornerLength;
									size_05.x = thickness;
									this.Segment(pSVar6, color, (Vector2)UVar1, (Vector2)UVar1, size_05);
									pSVar6 = "Bottom Right";
									pSVar5 = String.Concat(pSVar6, " Horizontal");
									size_03.y = thickness;
									size_03.x = cornerLength;
									this.Segment(pSVar5, color, (Vector2)0x3f800000, (Vector2)0x3f800000, size_03);
									pSVar6 = String.Concat(pSVar6, " Vertical");
									size_06.y = cornerLength;
									size_06.x = thickness;
									this.Segment(pSVar6, color, (Vector2)0x3f800000, (Vector2)0x3f800000, size_06);
									pUVar4 = this._ring;
									if (pUVar4 != null) {
										pUVar4.SetActive(false);
										__this_02 = new Action((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_GisketchFocusRing_Refresh);
										a = GisketchFocusInputMode.Changed;
										while ((value_00 = Delegate.Combine((Delegate)a, (Delegate)__this_02), value_00 == null ||((Action)value_00.klass == typeof(Action)))) {
											pSVar7 = il2cpp_codegen_interlocked_compare_exchange_ref(&typeof(GisketchFocusInputMode). static_fields.Changed, value_00, a);
											bVar2 = pSVar7 == a;
											a = pSVar7;
											if (bVar2) {
												return;
											}
										}
										throw new InvalidCastException();
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

	[Token(Token = "0x600071B")]
	[Address(RVA = "0x52A2800", Offset = "0x52A1800", VA = "0x52A2800", Slot = "4")]
	public void OnSelect(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusRing.c (Gisketch.Aottg2UI.Actions.GisketchFocusRing$$OnSelect): clean
		this._selected = true;
		this.Refresh();
		return;
	}

	[Token(Token = "0x600071C")]
	[Address(RVA = "0x52A28F0", Offset = "0x52A18F0", VA = "0x52A28F0", Slot = "5")]
	public void OnDeselect(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusRing.c (Gisketch.Aottg2UI.Actions.GisketchFocusRing$$OnDeselect): clean
		this._selected = false;
		this.Refresh();
		return;
	}

	[Token(Token = "0x600071D")]
	[Address(RVA = "0x52A2900", Offset = "0x52A1900", VA = "0x52A2900", Slot = "6")]
	public void OnPointerDown(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusRing.c (Gisketch.Aottg2UI.Actions.GisketchFocusRing$$OnPointerDown): clean
		Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields pGVar1;
		Action pSVar2;

		pGVar1 = typeof(GisketchFocusInputMode).static_fields;
		if (pGVar1._Mode_k__BackingField != 0) {
			if (Il2CppMethodInitialized_07542bea == false) {
				Il2CppMethodInitialized_07542bea = true;
				pGVar1 = typeof(GisketchFocusInputMode).static_fields;
				pGVar1._Mode_k__BackingField = 0;
				pSVar2 = pGVar1.Changed;
			}
			else {
				pGVar1._Mode_k__BackingField = 0;
				pSVar2 = pGVar1.Changed;
			}
			if (pSVar2 != null) {
				(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar2.method);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600071E")]
	[Address(RVA = "0x52A29B0", Offset = "0x52A19B0", VA = "0x52A29B0")]
	public void Pulse()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusRing.c (Gisketch.Aottg2UI.Actions.GisketchFocusRing$$Pulse): 2 lines keep C-only constructs
		Object x;
		GameObject pUVar1;
		bool bVar2;
		Transform pUVar3;
		Sequence pDVar4;
		DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o pDVar5;
		Tween pDVar6;
		TweenCallback __this_00;

		x = (Object)this._ring;
		bVar2 = (x == null);
		if (bVar2) {
			return;
		}
		pDVar6 = this._pulse;
		if (pDVar6 != null) {
			TweenExtensions.Kill(pDVar6, false);
		}
		pUVar1 = this._ring;
		if (pUVar1 != null) {
			pUVar1.SetActive(true);
			pUVar1 = this._ring;
			if (pUVar1 != null) {
				pUVar3 = pUVar1.transform;
				if (pUVar3 != null) {
					pUVar3.SetAsLastSibling();
					pUVar1 = this._ring;
					if (pUVar1 != null) {
						pUVar3 = pUVar1.transform;
						if (pUVar3 != null) {
							pUVar3.localScale = (Vector3)(Vector3.oneVector);
							pDVar4 = DOTween.Sequence();
							pUVar1 = this._ring;
							if (pUVar1 != null) {
								pUVar3 = pUVar1.transform;
								pDVar5 = ShortcutExtensions.DOScale(pUVar3, 1.16, 0.12);
								pDVar6 = (Tween)TweenSettingsExtensions.SetEase<TweenerCore<Vector3, Vector3, VectorOptions>>((object)pDVar5, 9);
								pDVar4 = TweenSettingsExtensions.Append(pDVar4, pDVar6);
								pUVar1 = this._ring;
								if (pUVar1 != null) {
									pUVar3 = pUVar1.transform;
									pDVar5 = ShortcutExtensions.DOScale(pUVar3, 1.0, 0.16);
									pDVar6 = (Tween)TweenSettingsExtensions.SetEase<TweenerCore<Vector3, Vector3, VectorOptions>>((object)pDVar5, 9);
									pDVar4 = TweenSettingsExtensions.Append(pDVar4, pDVar6);
									pDVar4 = TweenSettingsExtensions.SetUpdate<Sequence>((object)pDVar4, true);
									__this_00 = new TweenCallback((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_GisketchFocusRing_Refresh);
									pDVar4 = TweenSettingsExtensions.OnComplete<Sequence>((object)pDVar4, __this_00);
									this._pulse = (Tween)pDVar4;
									pDVar6 = this._pulse;
									GisketchMotionDriver.Track(pDVar6, false);
									return;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600071F")]
	[Address(RVA = "0x52A2C90", Offset = "0x52A1C90", VA = "0x52A2C90")]
	private void OnDisable()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusRing.c (Gisketch.Aottg2UI.Actions.GisketchFocusRing$$OnDisable): clean
		this._selected = false;
		this.Refresh();
		return;
	}

	[Token(Token = "0x6000720")]
	[Address(RVA = "0x52A2CA0", Offset = "0x52A1CA0", VA = "0x52A2CA0")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusRing.c (Gisketch.Aottg2UI.Actions.GisketchFocusRing$$OnDestroy): 3 lines keep C-only constructs
		Tween t;
		Action __this_00;
		Action pSVar1;
		Delegate value;
		Action source;
		bool bVar2;

		t = this._pulse;
		if (t != null) {
			TweenExtensions.Kill(t, false);
		}
		__this_00 = new Action((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_GisketchFocusRing_Refresh);
		source = GisketchFocusInputMode.Changed;
		while(true) {
			value = Delegate.Remove((Delegate)source, (Delegate)__this_00);
			if ((value != null) && ((Action)value.klass != typeof(Action))) break;
			pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&GisketchFocusInputMode.Changed, value, source);
			bVar2 = pSVar1 == source;
			source = pSVar1;
			if (bVar2) {
				return;
			}
		}
		throw new InvalidCastException();
	}

	[Token(Token = "0x6000721")]
	[Address(RVA = "0x52A2810", Offset = "0x52A1810", VA = "0x52A2810")]
	private void Refresh()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusRing.c (Gisketch.Aottg2UI.Actions.GisketchFocusRing$$Refresh): clean
		Object x;
		bool bVar1;
		Transform __this_00;
		GameObject pUVar2;

		x = (Object)this._ring;
		bVar1 = (x != null);
		if (!bVar1) {
			return;
		}
		if (this._selected != false) {
			if (GisketchFocusInputMode._Mode_k__BackingField == 1) {
				pUVar2 = this._ring;
				if (pUVar2 != null) {
					__this_00 = pUVar2.transform;
					if (__this_00 == null) goto label_053a28c3;
					__this_00.SetAsLastSibling();
					bVar1 = true;
					pUVar2 = this._ring;
					if (pUVar2 == null) goto label_053a28c3;
					goto label_053a28db;
				}
				goto label_053a28c3;
			}
		}
		bVar1 = false;
		pUVar2 = this._ring;
		if (pUVar2 != null) {
	label_053a28db: ;
			pUVar2.SetActive(bVar1);
			return;
		}
	label_053a28c3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000722")]
	[Address(RVA = "0x52A2720", Offset = "0x52A1720", VA = "0x52A2720")]
	private void Corner(string name, Color color, Vector2 anchor, Vector2 pivot, float thickness, float length)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusRing.c (Gisketch.Aottg2UI.Actions.GisketchFocusRing$$Corner): clean
		Vector2 size;
		Vector2 size_00;
		String pSVar1;

		pSVar1 = String.Concat(name, " Horizontal");
		size.y = thickness;
		size.x = length;
		this.Segment(pSVar1, color, anchor, pivot, size);
		pSVar1 = String.Concat(name, " Vertical");
		size_00.y = length;
		size_00.x = thickness;
		this.Segment(pSVar1, color, anchor, pivot, size_00);
		return;
	}

	[Token(Token = "0x6000723")]
	[Address(RVA = "0x52A2DA0", Offset = "0x52A1DA0", VA = "0x52A2DA0")]
	private void Segment(string name, Color color, Vector2 anchor, Vector2 pivot, Vector2 size)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusRing.c (Gisketch.Aottg2UI.Actions.GisketchFocusRing$$Segment): 1 lines keep C-only constructs
		GameObject __this_00;
		Il2CppType handle;
		Type[] components;
		Type obj;
		object pIVar1;
		GameObject __this_01;
		Transform __this_02;
		Transform parent;
		RectTransform __this_03;
		Image __this_04;

		components = (Type[])new Type[1];
		handle = TypeRef_UnityEngine_RectTransform;
		obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components != null) {
			if (obj != null) {
				pIVar1 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class);
				if (pIVar1 == null) {
					pIVar1 = new ArrayTypeMismatchException();
					throw pIVar1;
				}
			}
			if ((int)components.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			components[0] = obj;
			__this_01 = new GameObject(name, components);
			if (__this_01 != null) {
				__this_02 = __this_01.transform;
				__this_00 = this._ring;
				if (__this_00 != null) {
					parent = __this_00.transform;
					if (__this_02 != null) {
						__this_02.SetParent(parent, false);
						__this_03 = __this_01.GetComponent<RectTransform>();
						if (__this_03 != null) {
							__this_03.anchorMin = anchor;
							__this_03.anchorMax = anchor;
							__this_03.pivot = pivot;
							__this_03.anchoredPosition = (Vector2)(Vector2.zeroVector);
							__this_03.sizeDelta = size;
							__this_04 = __this_01.AddComponent<Image>() ;
							if (__this_04 != null) {
								__this_04.set_color(color);
								__this_04.set_raycastTarget(false);
								__this_04.maskable = false;
								__this_04.RecalculateClipping();
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000724")]
	[Address(RVA = "0x52A2650", Offset = "0x52A1650", VA = "0x52A2650")]
	private static void Stretch(RectTransform rect, float gap)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusRing.c (Gisketch.Aottg2UI.Actions.GisketchFocusRing$$Stretch): 1 lines keep C-only constructs
		Vector2 value;

		if (rect == null) {
			throw new NullReferenceException();
		}
		rect.anchorMin = (Vector2)(Vector2.zeroVector);
		rect.anchorMax = (Vector2)(Vector2.oneVector);
		rect.offsetMin = (Vector2)(CONCAT44(gap, gap) ^ 0x8000000080000000);
		value.y = gap;
		value.x = gap;
		rect.offsetMax = value;
		return;
	}

	[Token(Token = "0x6000725")]
	[Address(RVA = "0x52A2640", Offset = "0x52A1640", VA = "0x52A2640")]
	private static void MarkPreview(GameObject go)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusRing.c (Gisketch.Aottg2UI.Actions.GisketchFocusRing$$MarkPreview): clean
		return;
	}

	[Token(Token = "0x6000726")]
	[Address(RVA = "0x52A3040", Offset = "0x52A2040", VA = "0x52A3040")]
	public GisketchFocusRing()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusRing.c (Gisketch.Aottg2UI.Actions.GisketchFocusRing$$.ctor): clean
		base();
		return;
	}
}
