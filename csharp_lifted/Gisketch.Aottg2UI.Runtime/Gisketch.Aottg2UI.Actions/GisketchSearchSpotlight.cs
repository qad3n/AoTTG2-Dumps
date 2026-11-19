// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchSpotlight.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000F3")]
public static class GisketchSearchSpotlight
{
	[Token(Token = "0x40004DD")]
	private const float Padding = 10f;

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x52A5BB0", Offset = "0x52A4BB0", VA = "0x52A5BB0")]
	public static void Play(GameObject target)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchSpotlight.c (Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight$$Play): 14 lines keep C-only constructs
		GisketchSearchSpotlight.c__DisplayClass1_0 targetAddress;
		Il2CppType handle;
		bool bVar1;
		int value;
		GisketchSearchSpotlight.c__DisplayClass1_0 __this;
		RectTransform target_00;
		Canvas canvas;
		RectTransform root;
		Type[] components;
		Type obj;
		object pIVar2;
		GameObject pUVar3;
		Transform pUVar4;
		Transform parent;
		RectTransform rect;
		Canvas __this_00;
		CanvasGroup pUVar5;
		TweenCallback __this_01;
		Sequence pDVar6;
		TweenCallback<float> pDVar7;
		Tweener pDVar8;
		CanvasGroup* targetAddress_00;
		float fVar10;
		Rect UVar11;
		Rect UVar12;
		Rect rect_00;
		Rect rect_01;
		float local_a8;
		float fStack_a4;
		float local_98;
		float fStack_94;
		float local_88;
		float fStack_84;
		float local_78;
		float fStack_74;

		if (Il2CppMethodInitialized_07542be4 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponentInParent_Canvas) ;
			Il2CppMethodInitialized_07542be4 = true;
		}
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchSearchSpotlight.c__DisplayClass1_0));
		__this = new GisketchSearchSpotlight.c__DisplayClass1_0();
		target_00 = null;
		bVar1 = ((Object)target != null);
		if (bVar1) {
			if (target == null) goto label_053a630d;
			target_00 = target.GetComponent<RectTransform>();
		}
		canvas = null;
		bVar1 = ((Object)target != null);
		if (bVar1) {
			if (target == null) goto label_053a630d;
			canvas = target.GetComponentInParent<Canvas>();
		}
		root = null;
		bVar1 = ((Object)canvas != null);
		if (bVar1) {
			if (canvas == null) goto label_053a630d;
			root = canvas.GetComponent<RectTransform>();
		}
		bVar1 = ((Object)target_00 == null);
		if (!bVar1) {
			bVar1 = ((Object)root == null);
			if (!bVar1) {
				components = (Type[])new Type[1];
				handle = TypeRef_UnityEngine_RectTransform;
				obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
				if (components != null) {
					if (obj != null) {
						pIVar2 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class);
						if (pIVar2 == null) {
							pIVar2 = new ArrayTypeMismatchException();
							throw pIVar2;
						}
					}
					if ((int)components.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					components[0] = obj;
					pUVar3 = new GameObject("AoTTG Search Spotlight", components);
					if (__this != null) {
						targetAddress = &__this.fields;
						__this.overlay = pUVar3;
						pUVar3 = __this.overlay;
						if (pUVar3 != null) {
							pUVar4 = pUVar3.transform;
							if (canvas != null) {
								parent = canvas.transform;
								if (pUVar4 != null) {
									pUVar4.SetParent(parent, false);
									if (targetAddress.overlay != null) {
										rect = (targetAddress.overlay).GetComponent<RectTransform>();
										GisketchSearchSpotlight.Stretch(rect);
										if (targetAddress.overlay != null) {
											__this_00 = (targetAddress.overlay).AddComponent<Canvas>();
											if (__this_00 != null) {
												__this_00.overrideSorting = true;
												value = GisketchCanvasSorting.AboveParent(canvas, 900);
												__this_00.sortingOrder = value;
												if (targetAddress.overlay != null) {
													pUVar5 = (targetAddress.overlay).AddComponent<CanvasGroup>();
													targetAddress_00 = &__this.group;
													__this.group = pUVar5;
													pUVar5 = __this.group;
													if (pUVar5 != null) {
														pUVar5.blocksRaycasts = false;
														pUVar5 = *targetAddress_00;
														if (pUVar5 != null) {
															pUVar5.alpha = 0.0;
															UVar11 = GisketchSearchSpotlight.TargetRect(root, target_00);
															if (targetAddress.overlay != null) {
																pUVar4 = (targetAddress.overlay).transform;
																if (root != null) {
																	UVar12 = root.rect;
																	local_78 = UVar11.m_XMin;
																	fStack_74 = UVar11.m_YMin;
																	local_88 = UVar11.m_Width;
																	fStack_84 = UVar11.m_Height;
																	fStack_84 = fStack_84 + fStack_74;
																	local_98 = UVar12.m_Width;
																	fStack_94 = UVar12.m_Height;
																	local_a8 = UVar12.m_XMin;
																	fStack_a4 = UVar12.m_YMin;
																	fVar10 = (local_98 + local_a8) - local_a8;
																	rect_01.m_Width = (local_98 + local_a8) - (local_88 + local_78);
																	UVar11.m_Height = (fStack_94 + fStack_a4) - fStack_84;
																	UVar11.m_YMin = fStack_84;
																	UVar11.m_XMin = local_a8;
																	UVar11.m_Width = fVar10;
																	GisketchSearchSpotlight.AddPanel(pUVar4, (Color)(ZEXT816(0x3f147ae100000000) << 0x40), UVar11);
																	rect_00.m_Height = fStack_74 - fStack_a4;
																	rect_00.m_Width = fVar10;
																	rect_00.m_XMin = UVar12.m_XMin;
																	rect_00.m_YMin = UVar12.m_YMin;
																	GisketchSearchSpotlight.AddPanel(pUVar4, (Color)(ZEXT816(0x3f147ae100000000) << 0x40), rect_00);
																	UVar12.m_Width = local_78 - local_a8;
																	UVar12.m_YMin = fStack_74;
																	UVar12.m_XMin = local_a8;
																	UVar12.m_Height = fStack_84 - fStack_74;
																	GisketchSearchSpotlight.AddPanel(pUVar4, (Color)(ZEXT816(0x3f147ae100000000) << 0x40), UVar12);
																	rect_01.m_YMin = fStack_74;
																	rect_01.m_XMin = local_88 + local_78;
																	rect_01.m_Height = fStack_84 - fStack_74;
																	GisketchSearchSpotlight.AddPanel(pUVar4, (Color)(ZEXT816(0x3f147ae100000000) << 0x40), rect_01);
																	__this_01 = new TweenCallback((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight_c__DisplayClass1_0_Play_b__0);
																	pDVar6 = DOTween.Sequence();
																	pDVar7 = new TweenCallback<float>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight_c__DisplayClass1_0_Play_b__1);
																	pDVar8 = DOVirtual.Float(0.0, 1.0, 0.14, pDVar7);
																	pDVar6 = TweenSettingsExtensions.Append(pDVar6, (Tween)pDVar8);
																	pDVar6 = TweenSettingsExtensions.AppendInterval(pDVar6, 0.18);
																	pDVar7 = new TweenCallback<float>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight_c__DisplayClass1_0_Play_b__2);
																	pDVar8 = DOVirtual.Float(1.0, 0.0, 0.18, pDVar7);
																	pDVar6 = TweenSettingsExtensions.Append(pDVar6, (Tween)pDVar8);
																	pDVar6 = TweenSettingsExtensions.SetUpdate<Sequence>((object)pDVar6, true);
																	pDVar6 = TweenSettingsExtensions.OnComplete<Sequence>((object)pDVar6, __this_01);
																	pDVar6 = TweenSettingsExtensions.OnKill<Sequence>((object)pDVar6, __this_01);
																	if ((typeof(GisketchMotionDriver)._2). cctor_finished_or_no_cctor == 0) {
																	}
																	GisketchMotionDriver.Track((Tween)pDVar6, false);
																	return;
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
	label_053a630d: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x52A6900", Offset = "0x52A5900", VA = "0x52A6900")]
	private static Rect TargetRect(RectTransform root, RectTransform target)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchSpotlight.c (Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight$$TargetRect): clean
		Rect UVar1;
		Bounds local_28;

		local_28 = RectTransformUtility.CalculateRelativeRectTransformBounds((Transform)root, (Transform)target);
		UVar1.m_XMin = (local_28.m_Center.x - local_28.m_Extents.x) + -10.0;
		UVar1.m_YMin = (local_28.m_Center.y - local_28.m_Extents.y) + -10.0;
		UVar1.m_Width =(local_28.m_Center.x + local_28.m_Extents.x + 10.0) - UVar1.m_XMin;
		UVar1.m_Height =(local_28.m_Center.y + local_28.m_Extents.y + 10.0) - UVar1.m_YMin;
		return (Rect)UVar1;
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x52A69C0", Offset = "0x52A59C0", VA = "0x52A69C0")]
	private static void AddDimPanels(Transform parent, Rect root, Rect cutout)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchSpotlight.c (Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight$$AddDimPanels): 4 lines keep C-only constructs
		float fVar1;
		Rect rect;
		Rect rect_00;
		Rect rect_01;
		Rect rect_02;
		float local_78;
		float fStack_74;
		float local_68;
		float fStack_64;
		float local_58;
		float fStack_54;
		float local_48;
		float fStack_44;

		local_48 = cutout.m_XMin;
		fStack_44 = cutout.m_YMin;
		local_68 = cutout.m_Width;
		fStack_64 = cutout.m_Height;
		fStack_64 = fStack_64 + fStack_44;
		local_58 = root.m_Width;
		fStack_54 = root.m_Height;
		local_78 = root.m_XMin;
		fStack_74 = root.m_YMin;
		fVar1 = (local_58 + local_78) - local_78;
		rect_02.m_Width = (local_58 + local_78) - (local_68 + local_48);
		rect.m_Height = (fStack_54 + fStack_74) - fStack_64;
		rect.m_YMin = fStack_64;
		rect.m_XMin = local_78;
		rect.m_Width = fVar1;
		GisketchSearchSpotlight.AddPanel(parent, (Color)(ZEXT816(0x3f147ae100000000) << 0x40), rect);
		rect_00.m_Height = fStack_44 - fStack_74;
		rect_00.m_Width = fVar1;
		rect_00.m_XMin = root.m_XMin;
		rect_00.m_YMin = root.m_YMin;
		GisketchSearchSpotlight.AddPanel(parent, (Color)(ZEXT816(0x3f147ae100000000) << 0x40), rect_00);
		rect_01.m_Width = local_48 - local_78;
		rect_01.m_YMin = fStack_44;
		rect_01.m_XMin = local_78;
		rect_01.m_Height = fStack_64 - fStack_44;
		GisketchSearchSpotlight.AddPanel(parent, (Color)(ZEXT816(0x3f147ae100000000) << 0x40), rect_01);
		rect_02.m_YMin = fStack_44;
		rect_02.m_XMin = local_68 + local_48;
		rect_02.m_Height = fStack_64 - fStack_44;
		GisketchSearchSpotlight.AddPanel(parent, (Color)(ZEXT816(0x3f147ae100000000) << 0x40), rect_02);
		return;
	}

	[Token(Token = "0x6000775")]
	[Address(RVA = "0x52A6B40", Offset = "0x52A5B40", VA = "0x52A6B40")]
	private static void AddPanel(Transform parent, Color color, Rect rect)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchSpotlight.c (Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight$$AddPanel): clean
		uint uVar1;
		RectTransform __this;
		GameObject __this_00;
		Image pUVar2;

		if (Il2CppMethodInitialized_07542be7 == false) {
			Il2CppMethodInitialized_07542be7 = true;
			uVar1 = (typeof(Rect)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Rect)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (0.0 < rect.m_Width) {
			if (((typeof(Rect))._2).cctor_finished_or_no_cctor == 0) {
			}
			if (0.0 < rect.m_Height) {
				__this = GisketchSearchSpotlight.NewRect(parent, "Panel", rect);
				if (((__this == null) ||(__this_00 = __this.gameObject, __this_00 == null)) ||(pUVar2 = __this_00.AddComponent<Image>(), pUVar2 == null)) {
					throw new NullReferenceException();
				}
				pUVar2.set_color(color);
				pUVar2.set_raycastTarget(false);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x52A6CA0", Offset = "0x52A5CA0", VA = "0x52A6CA0")]
	private static RectTransform NewRect(Transform parent, string name, Rect rect)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchSpotlight.c (Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight$$NewRect): 2 lines keep C-only constructs
		Vector2 value;
		Il2CppType handle;
		Type[] components;
		Type obj;
		object pIVar1;
		GameObject __this;
		Transform __this_00;
		RectTransform __this_01;
		float local_48;
		float fStack_44;
		float local_38;
		float fStack_34;

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
			__this = new GameObject(name, components);
			if (__this != null) {
				__this_00 = __this.transform;
				if (__this_00 != null) {
					__this_00.SetParent(parent, false);
					__this_01 = __this.GetComponent<RectTransform>();
					if (__this_01 != null) {
						__this_01.anchorMin = (Vector2)0x3f0000003f000000;
						__this_01.anchorMax = (Vector2)0x3f0000003f000000;
						__this_01.pivot = (Vector2)0x3f0000003f000000;
						local_48 = rect.m_Width;
						fStack_44 = rect.m_Height;
						local_38 = rect.m_XMin;
						fStack_34 = rect.m_YMin;
						value.y = fStack_44 * 0.5 + fStack_34;
						value.x = local_48 * 0.5 + local_38;
						__this_01.anchoredPosition = value;
						__this_01.sizeDelta = (Vector2)rect._8_8_;
						return __this_01;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x52A6800", Offset = "0x52A5800", VA = "0x52A6800")]
	private static void Stretch(RectTransform rect)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchSpotlight.c (Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight$$Stretch): clean
		if (rect == null) {
			throw new NullReferenceException();
		}
		rect.anchorMin = (Vector2)(Vector2.zeroVector);
		rect.anchorMax = (Vector2)(Vector2.oneVector);
		rect.offsetMin = (Vector2)(Vector2.zeroVector);
		rect.offsetMax = (Vector2)(Vector2.zeroVector);
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchSpotlight.c.

	// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight.<>c__DisplayClass1_0$$.ctor: clean
	private void c__DisplayClass1_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight.<>c__DisplayClass1_0$$<Play>b__0: clean
	private void c__DisplayClass1_0__Play_b__0()
	{
		Object pUVar1;
		bool bVar2;

		pUVar1 = (Object)this.overlay;
		bVar2 = (pUVar1 != null);
		if (bVar2) {
			pUVar1 = (Object)this.overlay;
			Object.Destroy(pUVar1);
			return;
		}
		return;
	}

	// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight.<>c__DisplayClass1_0$$<Play>b__1: clean
	private void c__DisplayClass1_0__Play_b__1(float value)
	{
		CanvasGroup __this_00;

		__this_00 = this.group;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.alpha = value;
		return;
	}

	// Gisketch.Aottg2UI.Actions.GisketchSearchSpotlight.<>c__DisplayClass1_0$$<Play>b__2: clean
	private void c__DisplayClass1_0__Play_b__2(float value)
	{
		CanvasGroup __this_00;

		__this_00 = this.group;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.alpha = value;
		return;
	}
}
