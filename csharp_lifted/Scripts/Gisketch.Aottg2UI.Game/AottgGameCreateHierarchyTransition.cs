// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateHierarchyTransition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using DG.Tweening;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000224")]
internal static class AottgGameCreateHierarchyTransition
{
	[Token(Token = "0x4000B66")]
	private const float Duration = 0.1f;

	[Token(Token = "0x4000B67")]
	private const float HandoffDuration = 0.16f;

	[Token(Token = "0x4000B68")]
	private const float HandoffSettleDelay = 0.03f;

	[Token(Token = "0x4000B69")]
	[FieldOffset(Offset = "0x0")]
	private static bool _playing;

	[Token(Token = "0x6000CC7")]
	[Address(RVA = "0x5D93900", Offset = "0x5D92900", VA = "0x5D93900")]
	public static bool Play(GameObject source, string targetId, Action completed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateHierarchyTransition.c (Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$Play): 37 lines keep C-only constructs
		AottgGameCreateHierarchyTransition.c__DisplayClass4_0 targetAddress;
		GisketchLogoMotionBlur* targetAddress_00;
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		UnityEngine_Vector3_StaticFields pUVar5;
		bool bVar6;
		bool bVar7;
		int iVar8;
		AottgGameCreateHierarchyTransition.c__DisplayClass4_0 __this;
		Transform pUVar9;
		RectTransform pUVar10;
		Sequence pDVar11;
		String pSVar12;
		String pSVar13;
		AottgGameCreateHierarchyTransition.c__DisplayClass4_1 __this_00;
		Transform __this_01;
		Object __this_02;
		AottgGameCreateHierarchyTransition.c__DisplayClass4_2 __this_03;
		GisketchLogoMotionBlur pGVar14;
		CanvasGroup pUVar15;
		DOGetter<Vector3> pDVar16;
		DOSetter<Vector3> pDVar17;
		DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o pDVar18;
		Tween pDVar19;
		DOGetter<float> pDVar20;
		DOSetter<float> pDVar21;
		DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o pDVar22;
		GameObject __this_04;
		TweenCallback __this_05;
		RectTransform pUVar23;
		MethodInfo pMVar24;
		CanvasGroup* ppUVar25;
		AottgGameCreateHierarchyTransition.c__DisplayClass4_1 targetAddress_01;
		int index;
		float rise;
		float fVar26;
		Rect UVar27;
		Vector3 endValue;
		Vector3 UVar28;
		Vector3 endValue_00;
		float fStack_84;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateHierarchyTransition.c__DisplayClass4_0));
		__this = new Object();
		if (__this == null) {
	label_05e9476c: ;
			throw new NullReferenceException();
		}
		__this.completed = completed;
		__this.targetId = targetId;
		bVar6 = true;
		if (AottgGameCreateHierarchyTransition._playing == false) {
			pUVar9 = null;
			pMVar24 = null;
			bVar6 = ((Object)source != null);
			if (bVar6) {
				if (source == null) goto label_05e9476c;
				pMVar24 = null;
				pUVar9 = source.transform;
			}
			pUVar10 = AottgGameCreateHierarchyTransition.FindTile(pUVar9);
			targetAddress = &__this.fields;
			__this.selected = pUVar10;
			pUVar10 = __this.selected;
			bVar6 = false;
			bVar7 = ((Object)pUVar10 == null);
			if (!bVar7) {
				if (targetAddress.selected != null) {
					pUVar9 = (targetAddress.selected).parent;
					bVar6 = ((Object)pUVar9 == null);
					if (bVar6) {
						return false;
					}
					AottgGameCreateHierarchyTransition._playing = true;
					if (targetAddress.selected != null) {
						pUVar9 = (targetAddress.selected).root;
						__this.root = pUVar9;
						pUVar10 = __this.selected;
						if (pUVar10 != null) {
							UVar27 = pUVar10.rect;
							pDVar11 = DOTween.Sequence();
							pMVar24 = (MethodInfo)0x1;
							pDVar11 = TweenSettingsExtensions.SetUpdate<Sequence>((object)pDVar11, true);
							AottgGameCreateHierarchyTransition.StartBackgroundBlend(targetAddress.selected);
							if ((targetAddress.selected != null) &&(pUVar9 = (targetAddress.selected).parent, pUVar9 != null)) {
								pSVar12 = pUVar9.name;
								if (targetAddress.selected != null) {
									pSVar13 = (targetAddress.selected).name;
									pSVar13 = String.Concat(pSVar13, "-fade");
									bVar6 = (pSVar12 == pSVar13);
									if ((!bVar6) ||(pUVar9 = pUVar9.parent, pUVar9 != null)) {
										iVar8 = pUVar9.childCount;
										if (0 < iVar8) {
											fStack_84 = UVar27.m_Height;
											rise = 84.0;
											if (84.0 <= fStack_84 * 0.42) {
												rise = fStack_84 * 0.42;
											}
											index = 0;
											do {
												__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateHierarchyTransition.c__DisplayClass4_1));
												__this_00 = new Object();
												pUVar10 = (RectTransform)pUVar9.GetChild(index);
												if (__this_00 ==(AottgGameCreateHierarchyTransition.c__DisplayClass4_1)0x0) goto label_05e9476c;
												if (pUVar10 == null) {
													__this_00.tile = null;
												}
												else {
													pUVar23 = null;
													if (pUVar10.klass == typeof(RectTransform)) {
														pUVar23 = pUVar10;
													}
													__this_00.tile = pUVar23;
												}
												targetAddress_01 = &__this_00.fields;
												pUVar10 = targetAddress_01.tile;
												bVar6 = ((Object)pUVar10 != null);
												if (bVar6) {
													if (targetAddress_01.tile == null) goto label_05e9476c;
													iVar8 = (targetAddress_01.tile).childCount;
													if (iVar8 == 1) {
														if (targetAddress_01.tile == null) goto label_05e9476c;
														pSVar12 = (targetAddress_01.tile).name;
														if ((targetAddress_01.tile == null) ||(__this_01 = (targetAddress_01.tile).GetChild(0), __this_01 == null)) goto label_05e9476c;
														pSVar13 = __this_01.name;
														pSVar13 = String.Concat(pSVar13, "-fade");
														bVar6 = (pSVar12 == pSVar13);
														if (bVar6) {
															if (targetAddress_01.tile == null) goto label_05e9476c;
															pUVar10 = (RectTransform)(targetAddress_01.tile).GetChild(0);
															if (pUVar10 == null) {
																targetAddress_01.tile = null;
															}
															else {
																pUVar23 = null;
																if (pUVar10.klass == typeof(RectTransform)) {
																	pUVar23 = pUVar10;
																}
																targetAddress_01.tile = pUVar23;
															}
														}
													}
												}
												pUVar10 = targetAddress_01.tile;
												bVar6 = ((Object)pUVar10 == null);
												if (!bVar6) {
													if (((targetAddress_01.tile == null) ||(__this_02 = (Object)(targetAddress_01.tile).gameObject, __this_02 == null)) ||(pSVar12 = __this_02.name, pSVar12 == null)) goto label_05e9476c;
													bVar6 = pSVar12.EndsWith("-tile");
													if (bVar6) {
														pUVar10 = targetAddress_01.tile;
														pUVar23 = targetAddress.selected;
														bVar6 = ((Object)pUVar10 == (Object)pUVar23);
														if (bVar6) {
															__this_03 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateHierarchyTransition.c__DisplayClass4_2));
															pMVar24 = null;
															__this_03 = new Object();
															pMVar24 = (MethodInfo)AottgGameCreateHierarchyTransition.FindLabelGroup(targetAddress_01.tile);
															if (__this_03 ==null) goto label_05e9476c;
															__this_03.label = (CanvasGroup)pMVar24;
															pGVar14 = AottgGameCreateHierarchyTransition.FindVisualBlur(targetAddress_01.tile);
															targetAddress_00 = &__this_03.blur;
															__this_03.blur = pGVar14;
															pUVar15 = AottgGameCreateHierarchyTransition.CreateShearVisual(targetAddress_01.tile, rise, pDVar11);
															ppUVar25 = &__this_03.shearVisual;
															__this_03.shearVisual = pUVar15;
															pGVar14 = __this_03.blur;
															bVar6 = ((Object)pGVar14 != null);
															fVar26 = 0.0;
															if (bVar6) {
																if (*targetAddress_00 ==null) goto label_05e9476c;
																fVar26 = (*targetAddress_00).Blur;
															}
															__this_03.startBlur = fVar26;
															pDVar16 = new DOGetter<Vector3>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_1_Play_b__5);
															pDVar17 = new DOSetter<Vector3>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_1_Play_b__6);
															pUVar10 = __this_00.tile;
															if (pUVar10 == null) goto label_05e9476c;
															UVar28 = pUVar10.position;
															pUVar5 = typeof(Vector3).static_fields;
															uVar1 = (pUVar5.upVector).x;
															uVar3 = (pUVar5.upVector).y;
															fVar26 = (pUVar5.upVector).z;
															endValue_00.x = UVar28.x + (float)uVar1 * rise;
															endValue_00.y = UVar28.y + (float)uVar3 * rise;
															endValue_00.z = UVar28.z + fVar26 * rise;
															pDVar18 = DOTween.To(pDVar16, pDVar17, endValue_00, 0.1);
															pDVar19 = (Tween)TweenSettingsExtensions.SetEase<TweenerCore<Vector3, Vector3, VectorOptions>>((object)pDVar18, 10);
															TweenSettingsExtensions.Join(pDVar11, pDVar19);
															AottgGameCreateHierarchyTransition.AddOuterCollapse(pDVar11, targetAddress_01.tile);
															pUVar15 = __this_03.label;
															bVar6 = ((Object)pUVar15 != null);
															if (bVar6) {
																pDVar20 = new DOGetter<float>((object)__this_03, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_2_Play_b__7);
																pDVar21 = new DOSetter<float>((object)__this_03, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_2_Play_b__8);
																if ((typeof(DOTween)._2).cctor_finished_or_no_cctor == 0) {
																	il2cpp_codegen_runtime_class_init(typeof(DOTween)) ;
																}
																pDVar22 = DOTween.To(pDVar20, pDVar21, 0.0, 0.025);
																pDVar19 = (Tween)TweenSettingsExtensions.SetEase<TweenerCore<float, float, FloatOptions>>((object)pDVar22, 6);
																TweenSettingsExtensions.Join(pDVar11, pDVar19);
															}
															pUVar15 = *ppUVar25;
															bVar6 = ((Object)pUVar15 != null);
															if (bVar6) {
																pDVar20 = new DOGetter<float>((object)__this_03, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_2_Play_b__9);
																pDVar21 = new DOSetter<float>((object)__this_03, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_2_Play_b__10);
																if ((typeof(DOTween)._2).cctor_finished_or_no_cctor == 0) {
																	il2cpp_codegen_runtime_class_init(typeof(DOTween)) ;
																}
																pDVar22 = DOTween.To(pDVar20, pDVar21, 0.0, 0.1);
																pDVar19 = (Tween)TweenSettingsExtensions.SetEase<TweenerCore<float, float, FloatOptions>>((object)pDVar22, 5);
																TweenSettingsExtensions.Join(pDVar11, pDVar19);
															}
															pGVar14 = *targetAddress_00;
															bVar6 = ((Object)pGVar14 != null);
															if (!bVar6) goto label_05e93e60;
															pDVar20 = new DOGetter<float>((object)__this_03, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_2_Play_b__11);
															pDVar21 = new DOSetter<float>((object)__this_03, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_2_Play_b__12);
															pDVar22 = DOTween.To(pDVar20, pDVar21, rise * 0.42, 0.1);
															pDVar19 = (Tween)TweenSettingsExtensions.SetEase<TweenerCore<float, float, FloatOptions>>((object)pDVar22, 9);
														}
														else {
															if (targetAddress_01.tile == null) goto label_05e9476c;
															pUVar15 = (targetAddress_01.tile).GetComponent<CanvasGroup>();
															ppUVar25 = &__this_00.group;
															__this_00.group = pUVar15;
															pUVar15 = __this_00.group;
															bVar6 = ((bool)(Object)pUVar15);
															if (!bVar6) {
																if ((targetAddress_01.tile == null) ||(__this_04 = (targetAddress_01.tile).gameObject, __this_04 == null)) goto label_05e9476c;
																pUVar15 = __this_04.AddComponent<CanvasGroup>() ;
																*ppUVar25 = pUVar15;
															}
															if (*ppUVar25 == null) goto label_05e9476c;
															(*ppUVar25).blocksRaycasts = false;
															if (*ppUVar25 == null) goto label_05e9476c;
															(*ppUVar25).interactable = false;
															pDVar16 = new DOGetter<Vector3>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_1_Play_b__1);
															pDVar17 = new DOSetter<Vector3>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_1_Play_b__2);
															pUVar10 = __this_00.tile;
															if (pUVar10 == null) goto label_05e9476c;
															UVar28 = pUVar10.position;
															pUVar5 = typeof(Vector3).static_fields;
															uVar2 = (pUVar5.upVector).x;
															uVar4 = (pUVar5.upVector).y;
															fVar26 = (pUVar5.upVector).z;
															endValue.x = UVar28.x + (float)uVar2 * rise;
															endValue.y = UVar28.y + (float)uVar4 * rise;
															endValue.z = UVar28.z + fVar26 * rise;
															pDVar18 = DOTween.To(pDVar16, pDVar17, endValue, 0.080000006);
															pDVar19 = (Tween)TweenSettingsExtensions.SetEase<TweenerCore<Vector3, Vector3, VectorOptions>>((object)pDVar18, 8);
															TweenSettingsExtensions.Join(pDVar11, pDVar19);
															pDVar20 = new DOGetter<float>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_1_Play_b__3);
															pDVar21 = new DOSetter<float>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_1_Play_b__4);
															pDVar22 = DOTween.To(pDVar20, pDVar21, 0.0, 0.055000003);
															pDVar19 = (Tween)TweenSettingsExtensions.SetEase<TweenerCore<float, float, FloatOptions>>((object)pDVar22, 6);
														}
														TweenSettingsExtensions.Join(pDVar11, pDVar19);
													}
												}
	label_05e93e60: ;
												index = index + 1;
												iVar8 = pUVar9.childCount;
											} while (index < iVar8);
										}
										__this_05 = new TweenCallback((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_0_Play_b__0);
										TweenSettingsExtensions.OnComplete<Sequence>((object)pDVar11, __this_05);
										return true;
									}
								}
							}
						}
					}
				}
				goto label_05e9476c;
			}
		}
		return bVar6;
	}

	[Token(Token = "0x6000CC8")]
	[Address(RVA = "0x5D94790", Offset = "0x5D93790", VA = "0x5D94790")]
	private static RectTransform FindTile(Transform source)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateHierarchyTransition.c (Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$FindTile): 1 lines keep C-only constructs
		bool bVar1;
		String __this;
		RectTransform pUVar2;

		while(true) {
			bVar1 = ((Object)source != null);
			if (!bVar1) break;
			if (((RectTransform)source == null) ||(__this = source.name, __this == null)) {
				throw new NullReferenceException();
			}
			bVar1 = __this.EndsWith("-tile");
			if (bVar1) {
				if (((RectTransform)source).klass == typeof(RectTransform)) {
				}
				return pUVar2;
			}
			source = source.parent;
		}
		return null;
	}

	[Token(Token = "0x6000CC9")]
	[Address(RVA = "0x5D95BE0", Offset = "0x5D94BE0", VA = "0x5D95BE0")]
	private static void ContinueIntoCompactButton(Transform root, string targetId, Vector3 startPosition, GameObject preservedTile)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateHierarchyTransition.c (Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$ContinueIntoCompactButton): 34 lines keep C-only constructs
		GameObject* targetAddress;
		AottgGameCreateHierarchyTransition.c__DisplayClass6_0 targetAddress_00;
		CanvasGroup* targetAddress_01;
		RectTransform* targetAddress_02;
		uint uVar1;
		Object pUVar2;
		Vector2 value;
		bool bVar3;
		AottgGameCreateHierarchyTransition.c__DisplayClass6_0 __this;
		RectTransform pUVar4;
		CanvasGroup pUVar5;
		GameObject __this_00;
		Sequence pDVar6;
		DOGetter<float> pDVar7;
		DOSetter<float> pDVar8;
		DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o pDVar9;
		Tween pDVar10;
		GisketchLogoMotionBlur pGVar11;
		DOGetter<Vector3> __this_01;
		DOSetter<Vector3> __this_02;
		DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o t;
		AottgGameCreateHierarchyTransition.c__DisplayClass6_1 __this_03;
		TweenCallback __this_04;
		RectTransform pUVar12;
		GisketchLogoMotionBlur* targetAddress_03;
		float fVar13;
		Rect UVar14;
		Rect UVar15;
		Vector3 endValue;
		float fStack_78;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateHierarchyTransition.c__DisplayClass6_0));
		__this = new Object();
		if (__this == null) goto label_05e96570;
		targetAddress = &__this.preservedTile;
		__this.preservedTile = preservedTile;
		bVar3 = ((Object)root != null);
		pUVar12 = null;
		if (bVar3) {
			pUVar4 = (RectTransform)AottgGameCreateHierarchyTransition.FindActiveByName(root, targetId);
			if (pUVar4 != null) {
				pUVar12 = null;
				if (pUVar4.klass == typeof(RectTransform)) {
					pUVar12 = pUVar4;
				}
				goto label_05e95dfe;
			}
			pUVar12 = null;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
	label_05e95dfe: ;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar3 = ((Object)pUVar12 == null);
		if (bVar3) {
			pUVar2 = (Object)*targetAddress;
			bVar3 = (pUVar2 != null);
			if (bVar3) {
				pUVar2 = (Object)*targetAddress;
				Object.Destroy(pUVar2);
			}
			AottgGameCreateHierarchyTransition._playing = false;
			return;
		}
		if (pUVar12 != null) {
			endValue = pUVar12.position;
			pUVar5 = pUVar12.GetComponent<CanvasGroup>();
			targetAddress_00 = &__this.fields;
			__this.group = pUVar5;
			pUVar5 = __this.group;
			bVar3 = ((bool)(Object)pUVar5);
			if (!bVar3) {
				__this_00 = pUVar12.gameObject;
				if (__this_00 == null) goto label_05e96570;
				pUVar5 = __this_00.AddComponent<CanvasGroup>();
				targetAddress_00.group = pUVar5;
			}
			if (targetAddress_00.group != null) {
				(targetAddress_00.group).alpha = 0.0;
				if (targetAddress_00.group != null) {
					(targetAddress_00.group).blocksRaycasts = false;
					pDVar6 = DOTween.Sequence();
					pDVar6 = TweenSettingsExtensions.SetUpdate<Sequence>((object)pDVar6, true);
					pDVar7 = new DOGetter<float>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact);
					pDVar8 = new DOSetter<float>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_71b9288);
					pDVar9 = DOTween.To(pDVar7, pDVar8, 1.0, 0.16);
					pDVar10 = (Tween)TweenSettingsExtensions.SetEase<TweenerCore<float, float, FloatOptions>>((object)pDVar9, 6);
					pDVar6 = TweenSettingsExtensions.Join(pDVar6, pDVar10);
					pUVar2 = (Object)__this.preservedTile;
					pUVar5 = null;
					bVar3 = (pUVar2 != null);
					if (bVar3) {
						if (*targetAddress == null) goto label_05e96570;
						pUVar5 = (*targetAddress).GetComponent<CanvasGroup>();
					}
					targetAddress_01 = &__this.preservedGroup;
					__this.preservedGroup = pUVar5;
					pUVar2 = (Object)__this.preservedTile;
					pUVar4 = null;
					bVar3 = (pUVar2 != null);
					if (bVar3) {
						if (*targetAddress == null) goto label_05e96570;
						pUVar4 = (*targetAddress).GetComponent<RectTransform>();
					}
					targetAddress_02 = &__this.preservedRect;
					__this.preservedRect = pUVar4;
					pUVar2 = (Object)__this.preservedTile;
					pGVar11 = null;
					bVar3 = (pUVar2 == null);
					if (!bVar3) {
						if (pUVar2 == null) goto label_05e96570;
						pGVar11 = pUVar2.GetComponentInChildren<GisketchLogoMotionBlur>(true);
					}
					targetAddress_03 = &__this.preservedBlur;
					__this.preservedBlur = pGVar11;
					pUVar4 = __this.preservedRect;
					bVar3 = ((Object)pUVar4 != null);
					if (bVar3) {
						if (*targetAddress_02 == null) goto label_05e96570;
						(*targetAddress_02).position = startPosition;
						pUVar4 = *targetAddress_02;
						UVar14 = pUVar12.rect;
						UVar15 = pUVar12.rect;
						if (pUVar4 == null) goto label_05e96570;
						fStack_78 = UVar14.m_Width;
						value.y = UVar15.m_Height;
						value.x = fStack_78;
						pUVar4.sizeDelta = value;
						pUVar12 = *targetAddress_02;
						if (pUVar12 == null) goto label_05e96570;
						pUVar12.localScale = (Vector3)(Vector3.oneVector);
						__this_01 = new DOGetter<Vector3>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_71b9290);
						__this_02 = new DOSetter<Vector3>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_71b9298);
						t = DOTween.To(__this_01, __this_02, endValue, 0.16);
						pDVar10 = (Tween)TweenSettingsExtensions.SetEase<TweenerCore<Vector3, Vector3, VectorOptions>>((object)t, 9);
						TweenSettingsExtensions.Join(pDVar6, pDVar10);
					}
					pUVar5 = *targetAddress_01;
					bVar3 = ((Object)pUVar5 != null);
					if (bVar3) {
						pDVar7 = new DOGetter<float>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_71b92a0);
						pDVar8 = new DOSetter<float>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_71b92a8);
						pDVar9 = DOTween.To(pDVar7, pDVar8, 0.0, 0.16);
						pDVar10 = (Tween)TweenSettingsExtensions.SetEase<TweenerCore<float, float, FloatOptions>>((object)pDVar9, 5);
						TweenSettingsExtensions.Join(pDVar6, pDVar10);
					}
					pGVar11 = *targetAddress_03;
					bVar3 = ((Object)pGVar11 != null);
					if (bVar3) {
						__this_03 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateHierarchyTransition.c__DisplayClass6_1));
						__this_03 = new Object();
						if ((*targetAddress_03 == null) ||(fVar13 = (*targetAddress_03).Blur, __this_03 ==null)) goto label_05e96570;
						__this_03.startBlur = fVar13;
						pDVar7 = new DOGetter<float>((object)__this_03, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_1_ContinueIntoCompact);
						pDVar8 = new DOSetter<float>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_71b92b8);
						pDVar9 = DOTween.To(pDVar7, pDVar8, 0.0, 0.16);
						pDVar10 = (Tween)TweenSettingsExtensions.SetEase<TweenerCore<float, float, FloatOptions>>((object)pDVar9, 9);
						TweenSettingsExtensions.Join(pDVar6, pDVar10);
					}
					__this_04 = new TweenCallback((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass6_0_ContinueIntoCompact_71b92b0);
					TweenSettingsExtensions.OnComplete<Sequence>((object)pDVar6, __this_04);
					return;
				}
			}
		}
	label_05e96570: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000CCA")]
	[Address(RVA = "0x5D96750", Offset = "0x5D95750", VA = "0x5D96750")]
	private static void HideRebuiltTarget(Transform root, string targetId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateHierarchyTransition.c (Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$HideRebuiltTarget): 1 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		Transform pUVar3;
		CanvasGroup __this;
		GameObject __this_00;
		Transform x;

		pUVar3 = AottgGameCreateHierarchyTransition.FindActiveByName(root, targetId);
		if (pUVar3 == null) {
			x = null;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			x = null;
			if ((RectTransform)pUVar3.klass == typeof(RectTransform)) {
				x = pUVar3;
			}
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar2 = ((Object)x == null);
		if (bVar2) {
			return;
		}
		if (x != null) {
			__this = x.GetComponent<CanvasGroup>();
			bVar2 = ((bool)(Object)__this);
			if (!bVar2) {
				__this_00 = x.gameObject;
				if (__this_00 == null) goto label_05e96892;
				__this = __this_00.AddComponent<CanvasGroup>();
			}
			if (__this != null) {
				__this.alpha = 0.0;
				__this.blocksRaycasts = false;
				return;
			}
		}
	label_05e96892: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000CCB")]
	[Address(RVA = "0x5D968A0", Offset = "0x5D958A0", VA = "0x5D968A0")]
	private static GameObject CreatePreservedTile(RectTransform selected, Transform root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateHierarchyTransition.c (Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$CreatePreservedTile): 2 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		bool bVar3;
		GameObject original;
		Object __this;
		Object pUVar4;
		String pSVar5;
		CanvasGroup __this_00;
		LayoutElement exists;
		Object x;

		bVar3 = ((Object)selected == null);
		if (bVar3) {
			return null;
		}
		bVar3 = ((Object)root == null);
		if (bVar3) {
			return null;
		}
		if (selected == null) goto label_05e96b6f;
		original = selected.gameObject;
		__this = (Object)Object.Instantiate<GameObject>((object)original, root, true);
		pUVar4 = (Object)selected.gameObject;
		if (pUVar4 == null) goto label_05e96b6f;
		pSVar5 = pUVar4.name;
		pSVar5 = String.Concat(pSVar5, "-handoff");
		if (__this == null) goto label_05e96b6f;
		__this.name = pSVar5;
		__this_00 = __this.GetComponent<CanvasGroup>();
		bVar3 = ((bool)(Object)__this_00);
		if (!bVar3) {
			__this_00 = __this.AddComponent<CanvasGroup>();
		}
		if (__this_00 == null) goto label_05e96b6f;
		__this_00.blocksRaycasts = false;
		__this_00.interactable = false;
		exists = __this.GetComponent<LayoutElement>();
		bVar3 = ((bool)(Object)exists);
		if (!bVar3) {
			exists = __this.AddComponent<LayoutElement>();
		}
		if (exists == null) goto label_05e96b6f;
		exists.set_ignoreLayout(true);
		pUVar4 = (Object)__this.GetComponent("FlexLayout");
		if (pUVar4 == null) {
	label_05e96b0c: ;
			x = null;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			bVar1 = (typeof(Behaviour)._2).typeHierarchyDepth;
			if ((pUVar4.klass._2).typeHierarchyDepth < bVar1) goto label_05e96b0c;
			x = null;
			if ((pUVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Behaviour)) {
				x = pUVar4;
			}
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		bVar3 = (x != null);
		if (bVar3) {
			if (x == null) {
	label_05e96b6f: ;
				throw new NullReferenceException();
			}
			x.enabled = false;
		}
		return (GameObject)__this;
	}

	[Token(Token = "0x6000CCC")]
	[Address(RVA = "0x5D966C0", Offset = "0x5D956C0", VA = "0x5D966C0")]
	private static GisketchLogoMotionBlur FindPreservedBlur(GameObject preservedTile)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateHierarchyTransition.c (Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$FindPreservedBlur): clean
		bool bVar1;
		GisketchLogoMotionBlur pGVar2;

		bVar1 = ((Object)preservedTile == null);
		if (bVar1) {
			return null;
		}
		if (preservedTile == null) {
			throw new NullReferenceException();
		}
		pGVar2 = preservedTile.GetComponentInChildren<GisketchLogoMotionBlur>(true);
		return pGVar2;
	}

	[Token(Token = "0x6000CCD")]
	[Address(RVA = "0x5D96590", Offset = "0x5D95590", VA = "0x5D96590")]
	private static Transform FindActiveByName(Transform parent, string name)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateHierarchyTransition.c (Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$FindActiveByName): clean
		bool bVar1;
		int iVar2;
		String a;
		GameObject __this;
		Transform pUVar3;
		int index;

		bVar1 = ((Object)parent == null);
		if (!bVar1) {
			if (parent == null) {
	label_05e966af: ;
				throw new NullReferenceException();
			}
			a = parent.name;
			bVar1 = (a == name);
			if (bVar1) {
				__this = parent.gameObject;
				if (__this == null) goto label_05e966af;
				bVar1 = __this.activeInHierarchy;
				if (bVar1) {
					return parent;
				}
			}
			index = 0;
			iVar2 = parent.childCount;
			if (0 < iVar2) {
				do {
					pUVar3 = parent.GetChild(index);
					pUVar3 = AottgGameCreateHierarchyTransition.FindActiveByName(pUVar3, name);
					bVar1 = ((Object)pUVar3 != null);
					if (bVar1) {
						return pUVar3;
					}
					index = index + 1;
					iVar2 = parent.childCount;
				} while (index < iVar2);
			}
		}
		return null;
	}

	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x5D959E0", Offset = "0x5D949E0", VA = "0x5D959E0")]
	private static void AddOuterCollapse(Sequence sequence, RectTransform tile)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateHierarchyTransition.c (Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$AddOuterCollapse): 5 lines keep C-only constructs
		RectTransform pUVar1;
		uint length;
		AottgGameCreateHierarchyTransition.c__DisplayClass11_0 __this;
		Vector3[] pUVar2;
		Transform __this_00;
		TweenCallback<float> __this_01;
		Tweener pDVar3;
		ulong uVar4;
		long lVar5;
		Vector3[]* targetAddress;
		Vector3 UVar6;
		Vector3 UVar7;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateHierarchyTransition.c__DisplayClass11_0));
		__this = new Object();
		if (__this != null) {
			__this.tile = tile;
			pUVar1 = __this.tile;
			if (pUVar1 != null) {
				UVar6 = (Vector3)pUVar1.localScale;
				__this.tileScale = UVar6;
				pUVar1 = __this.tile;
				if (pUVar1 != null) {
					length = pUVar1.childCount;
					__this.childCount = length;
					pUVar2 = (Vector3[])new Vector3[length];
					targetAddress = &__this.childScales;
					__this.childScales = pUVar2;
					if (0 < __this.childCount) {
						lVar5 = 0x28;
						uVar4 = 0;
						do {
							pUVar1 = __this.tile;
							if (pUVar1 == null) goto label_05e95bd5;
							pUVar2 = *targetAddress;
							__this_00 = pUVar1.GetChild((int32_t)uVar4);
							if (__this_00 == null) goto label_05e95bd5;
							UVar7 = __this_00.localScale;
							if (pUVar2 == null) goto label_05e95bd5;
							if ((uint)pUVar2.Length <= uVar4) {
								throw new IndexOutOfRangeException();
							}
							*(long)((long)pUVar2.m_Items + lVar5 + -0x28) = UVar7._0_8_;
							*(float)((long)pUVar2.m_Items + lVar5 + -0x20) = UVar7.z;
							uVar4 = uVar4 + 1;
							lVar5 = lVar5 + 0xc;
						} while ((long)uVar4 < (long)__this.childCount);
					}
					__this_01 = new TweenCallback<float>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass11_0_AddOuterCollapse_b);
					pDVar3 = DOVirtual.Float(1.0, 0.14, 0.075, __this_01);
					pDVar3 = TweenSettingsExtensions.SetEase<Tweener>((object)pDVar3, 10);
					TweenSettingsExtensions.Insert(sequence, 0.025, (Tween)pDVar3);
					return;
				}
			}
		}
	label_05e95bd5: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000CCF")]
	[Address(RVA = "0x5D94E80", Offset = "0x5D93E80", VA = "0x5D94E80")]
	private static CanvasGroup FindLabelGroup(RectTransform tile)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateHierarchyTransition.c (Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$FindLabelGroup): clean
		bool bVar1;
		int iVar2;
		Transform __this;
		String __this_00;
		CanvasGroup pUVar3;
		GameObject __this_01;
		int index;

		if (tile == null) {
	label_05e94fc7: ;
			throw new NullReferenceException();
		}
		index = 0;
		iVar2 = tile.childCount;
		if (0 < iVar2) {
			do {
				__this = tile.GetChild(index);
				if ((__this == null) ||(__this_00 = __this.name, __this_00 == null)) goto label_05e94fc7;
				bVar1 = __this_00.EndsWith("-label");
				if (bVar1) {
					pUVar3 = __this.GetComponent<CanvasGroup>();
					bVar1 = ((bool)(Object)pUVar3);
					if (bVar1) {
						return pUVar3;
					}
					__this_01 = __this.gameObject ;
					if (__this_01 != null) {
						pUVar3 = __this_01.AddComponent<CanvasGroup>();
						return pUVar3;
					}
					goto label_05e94fc7;
				}
				index = index + 1;
				iVar2 = tile.childCount;
			} while (index < iVar2);
		}
		return null;
	}

	[Token(Token = "0x6000CD0")]
	[Address(RVA = "0x5D94FD0", Offset = "0x5D93FD0", VA = "0x5D94FD0")]
	private static GisketchLogoMotionBlur FindVisualBlur(RectTransform tile)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateHierarchyTransition.c (Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$FindVisualBlur): clean
		bool bVar1;
		Image image;
		GisketchLogoMotionBlur __this;
		GameObject __this_00;

		image = AottgGameCreateHierarchyTransition.FindVisual(tile);
		__this = null;
		bVar1 = ((Object)image == null);
		if (!bVar1) {
			if (image == null) goto label_05e950a0;
			__this = image.GetComponent<GisketchLogoMotionBlur>();
			if (__this == null) {
				__this_00 = image.gameObject;
				if (__this_00 == null) {
	label_05e950a0: ;
					throw new NullReferenceException();
				}
				__this = __this_00.AddComponent<GisketchLogoMotionBlur>();
				if (__this == null) goto label_05e950a0;
			}
			__this.Setup(image);
		}
		return __this;
	}

	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x5D94860", Offset = "0x5D93860", VA = "0x5D94860")]
	private static void StartBackgroundBlend(RectTransform tile)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateHierarchyTransition.c (Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$StartBackgroundBlend): 13 lines keep C-only constructs
		Image* targetAddress;
		Il2CppType handle;
		bool bVar1;
		int iVar2;
		AottgGameCreateHierarchyTransition.c__DisplayClass14_0 __this;
		Image pUVar3;
		Type[] components;
		Type pSVar4;
		object pIVar5;
		GameObject __this_00;
		Transform pUVar6;
		Transform __this_01;
		RectTransform __this_02;
		Sequence pDVar7;
		DOGetter<float> pDVar8;
		DOSetter<float> pDVar9;
		DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o pDVar10;
		Tween pDVar11;
		Color UVar12;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateHierarchyTransition.c__DisplayClass14_0));
		__this = new Object();
		pUVar3 = AottgGameCreateHierarchyTransition.FindVisual(tile);
		if (__this == null) {
	label_05e94e3c: ;
			throw new NullReferenceException();
		}
		targetAddress = &__this.source;
		__this.source = pUVar3;
		pUVar3 = __this.source;
		bVar1 = ((Object)pUVar3 == null);
		if (bVar1) {
			return;
		}
		components = (Type[])new Type[2];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar4 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) goto label_05e94e3c;
		if (pSVar4 != null) {
			pIVar5 = il2cpp_vm_Object_IsInst((object)pSVar4, (((components.obj).klass)._1).element_class);
			if (pIVar5 == null) goto label_05e94e46;
		}
		if ((int)components.Length != 0) {
			components[0] = pSVar4;
			pSVar4 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Image);
			if (pSVar4 != null) {
				pIVar5 = il2cpp_vm_Object_IsInst((object)pSVar4, (((components.obj).klass)._1).element_class);
				if (pIVar5 == null) {
	label_05e94e46: ;
					pIVar5 = new ArrayTypeMismatchException();
					throw pIVar5;
				}
			}
			if ((components.Length & 0xfffffffe) != 0) {
				components[1] = pSVar4;
				__this_00 = new GameObject("Game Create Compact Background Blend", components);
				if (__this_00 != null) {
					pUVar6 = __this_00.transform;
					if (pUVar6 != null) {
						pUVar6.SetParent((Transform)tile, false);
						pUVar6 = __this_00.transform;
						if (*targetAddress != null) {
							__this_01 = (*targetAddress).transform;
							if (__this_01 != null) {
								iVar2 = __this_01.GetSiblingIndex();
								if (pUVar6 != null) {
									pUVar6.SetSiblingIndex(iVar2 + 1);
									__this_02 = __this_00.GetComponent<RectTransform>();
									if (__this_02 != null) {
										__this_02.anchorMin = (Vector2)(Vector2.zeroVector);
										__this_02.anchorMax = (Vector2)(Vector2.oneVector);
										__this_02.offsetMin = (Vector2)(Vector2.zeroVector);
										__this_02.offsetMax = (Vector2)(Vector2.zeroVector);
										pUVar3 = __this_00.GetComponent<Image>();
										__this.image = pUVar3;
										pUVar3 = __this.image;
										if (pUVar3 != null) {
											UVar12.b = 0.09;
											UVar12.a = 0.0;
											UVar12.r = 0.09;
											UVar12.g = 0.09;
											pUVar3.set_color(UVar12);
											pUVar3 = __this.image;
											if (pUVar3 != null) {
												pUVar3.set_raycastTarget(false);
												pUVar3 = *targetAddress;
												if (pUVar3 != null) {
													pUVar3.get_color();
													pDVar7 = DOTween.Sequence();
													pDVar7 = TweenSettingsExtensions.SetUpdate<Sequence>((object)pDVar7, true) ;
													pDVar8 = new DOGetter<float>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass14_0_StartBackgroundBle);
													pDVar9 = new DOSetter<float>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass14_0_StartBackgroundBle_71b91c0);
													pDVar10 = DOTween.To(pDVar8, pDVar9, 1.0, 0.29);
													pDVar11 = (Tween)TweenSettingsExtensions.SetEase<TweenerCore<float, float, FloatOptions>>((object)pDVar10, 1);
													pDVar7 = TweenSettingsExtensions.Join(pDVar7, pDVar11);
													pDVar8 = new DOGetter<float>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass14_0_StartBackgroundBle_71b91c8);
													pDVar9 = new DOSetter<float>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass14_0_StartBackgroundBle_71b91d0);
													pDVar10 = DOTween.To(pDVar8, pDVar9, 0.0, 0.29);
													pDVar11 = (Tween)TweenSettingsExtensions.SetEase<TweenerCore<float, float, FloatOptions>>((object)pDVar10, 1);
													TweenSettingsExtensions.Join(pDVar7, pDVar11);
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
				goto label_05e94e3c;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6000CD2")]
	[Address(RVA = "0x5D950B0", Offset = "0x5D940B0", VA = "0x5D950B0")]
	private static CanvasGroup CreateShearVisual(RectTransform tile, float rise, Sequence sequence)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateHierarchyTransition.c (Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$CreateShearVisual): 30 lines keep C-only constructs
		GameObject* targetAddress;
		AottgGameCreateHierarchyTransition.c__DisplayClass15_0 targetAddress_00;
		uint uVar1;
		uint uVar2;
		Il2CppType handle;
		bool bVar4;
		AottgGameCreateHierarchyTransition.c__DisplayClass15_0 __this;
		Image __this_00;
		Type[] components;
		Type pSVar5;
		object pIVar6;
		GameObject pUVar7;
		RectTransform pUVar8;
		Transform parent;
		RectTransform pUVar9;
		Image __this_01;
		Canvas __this_02;
		CanvasGroup __this_03;
		GisketchLogoMotionBlur pGVar10;
		DOGetter<Vector3> pDVar11;
		DOSetter<Vector3> pDVar12;
		DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o pDVar13;
		Tween pDVar14;
		DOGetter<float> __this_04;
		DOSetter<float> __this_05;
		DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o t;
		TweenCallback __this_06;
		Quaternion value;
		Rect UVar15;
		Color UVar16;
		Vector3 UVar17;
		Vector3 UVar18;
		Vector3 endValue;
		float local_68;
		float fStack_64;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateHierarchyTransition.c__DisplayClass15_0));
		__this = new Object();
		__this_00 = AottgGameCreateHierarchyTransition.FindVisual(tile);
		bVar4 = ((Object)__this_00 == null);
		if (bVar4) {
			return null;
		}
		components = (Type[])new Type[4];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) {
	label_05e959c7: ;
			throw new NullReferenceException();
		}
		if ((pSVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((components.obj).klass)._1).element_class), pIVar6 == null)) {
	label_05e959d1: ;
			pIVar6 = new ArrayTypeMismatchException();
			throw pIVar6;
		}
		if ((int)components.Length != 0) {
			components[0] = pSVar5;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Image);
			if ((pSVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((components.obj).klass)._1).element_class) , pIVar6 == null)) goto label_05e959d1;
			if ((components.Length & 0xfffffffe) != 0) {
				components[1] = pSVar5;
				pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_CanvasGroup);
				if ((pSVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((components.obj).klass)._1).element_class), pIVar6 == null)) goto label_05e959d1;
				if (2 < (uint)components.Length) {
					components[2] = pSVar5;
					pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_Canvas);
					if ((pSVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((components.obj).klass)._1).element_class), pIVar6 == null)) goto label_05e959d1;
					if ((components.Length & 0xfffffffc) != 0) {
						components[3] = pSVar5;
						pUVar7 = new GameObject("Game Create Vertical Shear", components);
						if (__this != (AottgGameCreateHierarchyTransition.c__DisplayClass15_0)0x0) {
							targetAddress = &__this.smear;
							__this.smear = pUVar7;
							pUVar7 = __this.smear;
							if (pUVar7 != null) {
								pUVar8 = pUVar7.GetComponent<RectTransform>();
								targetAddress_00 = &__this.fields;
								__this.rect = pUVar8;
								if (tile != null) {
									pUVar8 = __this.rect;
									parent = tile.root;
									if ((pUVar8 != null) &&(pUVar8.SetParent(parent, true), __this_00 != null)) {
										pUVar8 = targetAddress_00.rect;
										pUVar9 = __this_00.rectTransform;
										if ((pUVar9 != null) &&(UVar17 = pUVar9.position, pUVar8 != null)) {
											pUVar8.position = UVar17;
											pUVar8 = targetAddress_00.rect;
											pUVar9 = __this_00.rectTransform;
											if ((pUVar9 != null) &&(value = pUVar9.rotation, pUVar8 != null)) {
												pUVar8.rotation = value;
												pUVar8 = targetAddress_00.rect;
												pUVar9 = __this_00.rectTransform;
												if (pUVar9 != null) {
													UVar15 = pUVar9.rect;
													if (pUVar8 != null) {
														pUVar8.sizeDelta = (Vector2)UVar15._8_8_;
														if (targetAddress_00.rect != null) {
															UVar17 = (targetAddress_00.rect).localScale;
															if ((*targetAddress != null) &&(__this_01 = (*targetAddress).GetComponent<Image>(), __this_01 != null)) {
																__this_01.sprite = __this_00.m_Sprite;
																__this_01.type = __this_00.m_Type;
																__this_01.preserveAspect = __this_00.m_PreserveAspect;
																UVar16.b = 1.0;
																UVar16.a = 0.9;
																UVar16.r = 1.0;
																UVar16.g = 1.0;
																__this_01.set_color(UVar16);
																if ((*targetAddress != null) &&(__this_02 = (*targetAddress).GetComponent<Canvas>(), __this_02 != null)) {
																	__this_02.overrideSorting = true;
																	__this_02.sortingOrder = 100;
																	if ((*targetAddress != null) &&(__this_03 = (*targetAddress).GetComponent<CanvasGroup>(), __this_03 != null)) {
																		__this_03.blocksRaycasts = false;
																		__this_03.interactable = false ;
																		if (*targetAddress != null) {
																			pGVar10 = (*targetAddress).AddComponent<GisketchLogoMotionBlur>();
																			__this.blur = pGVar10;
																			pGVar10 = __this.blur;
																			if (pGVar10 != null) {
																				pGVar10.Setup(__this_01);
																				pDVar11 = il2cpp_codegen_object_new((Il2CppClass)typeof(DOGetter<Vector3>));
																				pDVar11 = new DOGetter<Vector3>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual);
																				pDVar12 = il2cpp_codegen_object_new((Il2CppClass)typeof(DOSetter<Vector3>));
																				pDVar12 = new DOSetter<Vector3>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_71b91e0);
																				pUVar8 = __this.rect;
																				if (pUVar8 != null) {
																					UVar18 = pUVar8.position;
																					uVar1 = (Vector3.upVector).x;
																					uVar2 = (Vector3.upVector).y;
																					endValue.x = UVar18.x + rise * (float)uVar1 * 1.65;
																					endValue.y = UVar18.y + rise * (float)uVar2 * 1.65;
																					endValue.z = UVar18.z + (Vector3.upVector).z * rise * 1.65;
																					if ((typeof(DOTween)._2).cctor_finished_or_no_cctor == 0 ) {
																					}
																					pDVar13 = DOTween.To(pDVar11, pDVar12, endValue, 0.1);
																					pDVar14 = (Tween)TweenSettingsExtensions.SetEase<TweenerCore<Vector3, Vector3, VectorOptions>>((object)pDVar13, 9);
																					TweenSettingsExtensions.Join(sequence, pDVar14);
																					pDVar11 = il2cpp_codegen_object_new((Il2CppClass)typeof(DOGetter<Vector3>));
																					pDVar11 = new DOGetter<Vector3>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_71b91e8);
																					pDVar12 = il2cpp_codegen_object_new((Il2CppClass)typeof(DOSetter<Vector3>));
																					pDVar12 = new DOSetter<Vector3>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_71b91f0);
																					local_68 = UVar17.x;
																					fStack_64 = UVar17.y;
																					UVar17.x = local_68 * 1.08;
																					UVar17.y = fStack_64 * 5.0;
																					pDVar13 = DOTween.To(pDVar11, pDVar12, UVar17, 0.1);
																					pDVar14 = (Tween)TweenSettingsExtensions.SetEase<TweenerCore<Vector3, Vector3, VectorOptions>>((object)pDVar13, 9);
																					TweenSettingsExtensions.Join(sequence, pDVar14);
																					__this_04 = il2cpp_codegen_object_new((Il2CppClass)typeof(DOGetter<float>));
																					__this_04 = new DOGetter<float>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_71b91f8);
																					__this_05 = il2cpp_codegen_object_new((Il2CppClass)typeof(DOSetter<float>));
																					__this_05 = new DOSetter<float>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_71b9200);
																					t = DOTween.To(__this_04, __this_05, rise * 0.5, 0.1);
																					pDVar14 = (Tween)TweenSettingsExtensions.SetEase<TweenerCore<float, float, FloatOptions>>((object)t, 9);
																					TweenSettingsExtensions.Join(sequence, pDVar14);
																					__this_06 = il2cpp_codegen_object_new((Il2CppClass)typeof(TweenCallback));
																					__this_06 = new TweenCallback((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass15_0_CreateShearVisual_71b9208);
																					DOVirtual.DelayedCall(0.1, __this_06, true);
																					return __this_03;
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
							}
						}
						goto label_05e959c7;
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6000CD3")]
	[Address(RVA = "0x5D96B90", Offset = "0x5D95B90", VA = "0x5D96B90")]
	private static Image FindVisual(RectTransform tile)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateHierarchyTransition.c (Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition$$FindVisual): clean
		Image __this;
		bool bVar1;
		uint uVar2;
		Object[] pSVar3;
		Object pUVar4;
		String pSVar5;
		uint uVar6;

		if ((tile == null) ||(pSVar3 = tile.GetComponentsInChildren<Image>(true), pSVar3 == null)) {
	label_05e96cac: ;
			throw new NullReferenceException();
		}
		uVar2 = (uint)pSVar3.Length;
		if (0 < (int)uVar2) {
			uVar6 = 0;
			do {
				if (uVar2 <= uVar6) {
					throw new IndexOutOfRangeException();
				}
				__this = (Image)pSVar3[(int)uVar6];
				if (((__this == null) ||(pUVar4 = (Object)__this.gameObject , pUVar4 == null)) ||(pSVar5 = pUVar4.name, pSVar5 == null)) goto label_05e96cac;
				bVar1 = pSVar5.EndsWith("-preview");
				if (bVar1) {
					return __this;
				}
				pUVar4 = (Object)__this.gameObject;
				if ((pUVar4 == null) ||(pSVar5 = pUVar4.name, pSVar5 == null)) goto label_05e96cac;
				bVar1 = pSVar5.EndsWith("-background");
				if (bVar1) {
					return __this;
				}
				uVar6 = uVar6 + 1;
				uVar2 = (uint)pSVar3.Length;
			} while ((int)uVar6 < (int)uVar2);
		}
		return null;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateHierarchyTransition.c.

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_0$$.ctor: clean
	private void c__DisplayClass4_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_1$$.ctor: clean
	private void c__DisplayClass4_1__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_2$$.ctor: clean
	private void c__DisplayClass4_2__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_0$$.ctor: clean
	private void c__DisplayClass6_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_1$$.ctor: clean
	private void c__DisplayClass6_1__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass11_0$$.ctor: clean
	private void c__DisplayClass11_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass14_0$$.ctor: clean
	private void c__DisplayClass14_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass15_0$$.ctor: clean
	private void c__DisplayClass15_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass11_0$$<AddOuterCollapse>b__0: clean
	private void c__DisplayClass11_0__AddOuterCollapse_b__0(float scale)
	{
		ulong uVar1;
		RectTransform pUVar2;
		Vector3[] pUVar3;
		Transform __this_00;
		ulong uVar4;
		long lVar5;
		Vector3 value;
		Vector3 value_00;

		pUVar2 = this.tile;
		if (pUVar2 == null) {
	label_05e96d9d: ;
			throw new NullReferenceException();
		}
		value.y = this.tileScale.y * scale;
		value.x = this.tileScale.x;
		value.z = this.tileScale.z;
		pUVar2.localScale = value;
		if (0 < this.childCount) {
			lVar5 = 0x28;
			uVar4 = 0;
			do {
				pUVar2 = this.tile;
				if (pUVar2 == null) goto label_05e96d9d;
				__this_00 = pUVar2.GetChild((int32_t)uVar4);
				pUVar3 = this.childScales;
				if (pUVar3 == null) goto label_05e96d9d;
				if ((uint)pUVar3.Length <= uVar4) {
					throw new IndexOutOfRangeException();
				}
				if (__this_00 == null) goto label_05e96d9d;
				uVar1 = *(ulong)((long)pUVar3.m_Items + lVar5 + -0x28);
				value_00.y = (float)((ulong)uVar1 >> 0x20) / scale;
				value_00.x = (float)(int)uVar1;
				value_00.z = *(float)((long)pUVar3.m_Items + lVar5 + -0x20);
				__this_00.localScale = value_00;
				uVar4 = uVar4 + 1;
				lVar5 = lVar5 + 0xc;
			} while ((long)uVar4 < (long)this.childCount);
		}
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass14_0$$<StartBackgroundBlend>b__0: 2 lines keep C-only constructs
	private float c__DisplayClass14_0__StartBackgroundBlend_b__0()
	{
		Image pUVar1;
		float in_XMM1_Db;

		pUVar1 = this.image;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.get_color();
		return in_XMM1_Db;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass14_0$$<StartBackgroundBlend>b__1: clean
	private void c__DisplayClass14_0__StartBackgroundBlend_b__1(float value)
	{
		Image pUVar1;
		Color UVar2;

		pUVar1 = this.image;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		UVar2.a = value;
		UVar2.b = 0.09;
		UVar2.r = 0.09;
		UVar2.g = 0.09;
		pUVar1.set_color(UVar2);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass14_0$$<StartBackgroundBlend>b__2: 2 lines keep C-only constructs
	private float c__DisplayClass14_0__StartBackgroundBlend_b__2()
	{
		Image pUVar1;
		float in_XMM1_Db;

		pUVar1 = this.source;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.get_color();
		return in_XMM1_Db;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass14_0$$<StartBackgroundBlend>b__3: clean
	private void c__DisplayClass14_0__StartBackgroundBlend_b__3(float value)
	{
		Image pUVar1;
		Image pUVar2;
		Color UVar3;
		Color UVar4;
		Color UVar5;
		float fStack_44;
		float fStack_38;

		pUVar1 = this.source;
		if (pUVar1 != null) {
			UVar3 = pUVar1.get_color();
			pUVar2 = this.source;
			if (pUVar2 != null) {
				UVar4 = pUVar2.get_color();
				pUVar2 = this.source;
				if (pUVar2 != null) {
					UVar5 = pUVar2.get_color();
					fStack_38 = UVar3.r;
					fStack_44 = UVar4.g;
					UVar3.a = value;
					UVar3.b = UVar5.b;
					UVar3.g = fStack_44;
					UVar3.r = fStack_38;
					pUVar1.set_color(UVar3);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass15_0$$<CreateShearVisual>b__0: clean
	private Vector3 c__DisplayClass15_0__CreateShearVisual_b__0()
	{
		RectTransform __this_00;
		Vector3 UVar1;

		__this_00 = this.rect;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		UVar1 = (Vector3)__this_00.position;
		return (Vector3)UVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass15_0$$<CreateShearVisual>b__1: clean
	private void c__DisplayClass15_0__CreateShearVisual_b__1(Vector3 value)
	{
		RectTransform __this_00;

		__this_00 = this.rect;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.position = value;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass15_0$$<CreateShearVisual>b__2: clean
	private Vector3 c__DisplayClass15_0__CreateShearVisual_b__2()
	{
		RectTransform __this_00;
		Vector3 UVar1;

		__this_00 = this.rect;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		UVar1 = (Vector3)__this_00.localScale;
		return (Vector3)UVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass15_0$$<CreateShearVisual>b__3: clean
	private void c__DisplayClass15_0__CreateShearVisual_b__3(Vector3 value)
	{
		RectTransform __this_00;

		__this_00 = this.rect;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.localScale = value;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass15_0$$<CreateShearVisual>b__4: clean
	private float c__DisplayClass15_0__CreateShearVisual_b__4()
	{
		GisketchLogoMotionBlur __this_00;
		float fVar1;

		__this_00 = this.blur;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return fVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass15_0$$<CreateShearVisual>b__5: clean
	private void c__DisplayClass15_0__CreateShearVisual_b__5(float value)
	{
		GisketchLogoMotionBlur __this_00;

		__this_00 = this.blur;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetBlur(value);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass15_0$$<CreateShearVisual>b__6: clean
	private void c__DisplayClass15_0__CreateShearVisual_b__6()
	{
		Object obj;

		obj = (Object)this.smear;
		if ((typeof(Object)._2).cctor_finished_or_no_cctor == 0) {
			Object.Destroy(obj);
			return;
		}
		Object.Destroy(obj);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_0$$<Play>b__0: 2 lines keep C-only constructs
	private void c__DisplayClass4_0__Play_b__0()
	{
		RectTransform pUVar1;
		Transform x;
		Action pSVar2;
		bool bVar3;
		AottgGameCreateHierarchyTransition.c__DisplayClass4_3 __this_00;
		GameObject pUVar4;
		TweenCallback __this_01;
		Vector3 UVar5;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateHierarchyTransition.c__DisplayClass4_3));
		__this_00 = new Object();
		if (__this_00 == null) {
	label_05e971ca: ;
			throw new NullReferenceException();
		}
		__this_00.CS___8__locals1 = this;
		pUVar1 = this.selected;
		bVar3 = ((Object)pUVar1 == null);
		if (!bVar3) {
			x = this.root;
			bVar3 = ((Object)x == null);
			if (!bVar3) {
				pUVar1 = this.selected;
				if (pUVar1 != null) {
					UVar5 = (Vector3)pUVar1.position;
					__this_00.exitPosition = UVar5;
					pUVar4 = AottgGameCreateHierarchyTransition.CreatePreservedTile(this.selected, this.root);
					__this_00.preservedTile = pUVar4;
					pSVar2 = this.completed;
					if (pSVar2 != null) {
						(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar2.method);
					}
					AottgGameCreateHierarchyTransition.HideRebuiltTarget(this.root, this.targetId);
					__this_01 = new TweenCallback((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateHierarchyTransition_c__DisplayClass4_3_Play_b__13);
					DOVirtual.DelayedCall(0.03, __this_01, true);
					return;
				}
				goto label_05e971ca;
			}
		}
		AottgGameCreateHierarchyTransition._playing = false;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_3$$.ctor: clean
	private void c__DisplayClass4_3__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_1$$<Play>b__5: clean
	private Vector3 c__DisplayClass4_1__Play_b__5()
	{
		RectTransform __this_00;
		Vector3 UVar1;

		__this_00 = this.tile;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		UVar1 = (Vector3)__this_00.position;
		return (Vector3)UVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_1$$<Play>b__6: clean
	private void c__DisplayClass4_1__Play_b__6(Vector3 value)
	{
		RectTransform __this_00;

		__this_00 = this.tile;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.position = value;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_1$$<Play>b__1: clean
	private Vector3 c__DisplayClass4_1__Play_b__1()
	{
		RectTransform __this_00;
		Vector3 UVar1;

		__this_00 = this.tile;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		UVar1 = (Vector3)__this_00.position;
		return (Vector3)UVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_1$$<Play>b__2: clean
	private void c__DisplayClass4_1__Play_b__2(Vector3 value)
	{
		RectTransform __this_00;

		__this_00 = this.tile;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.position = value;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_1$$<Play>b__3: clean
	private float c__DisplayClass4_1__Play_b__3()
	{
		CanvasGroup __this_00;
		float fVar1;

		__this_00 = this.group;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return fVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_1$$<Play>b__4: clean
	private void c__DisplayClass4_1__Play_b__4(float value)
	{
		CanvasGroup __this_00;

		__this_00 = this.group;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.alpha = value;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_2$$<Play>b__7: clean
	private float c__DisplayClass4_2__Play_b__7()
	{
		CanvasGroup __this_00;
		float fVar1;

		__this_00 = this.label;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return fVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_2$$<Play>b__8: clean
	private void c__DisplayClass4_2__Play_b__8(float value)
	{
		CanvasGroup __this_00;

		__this_00 = this.label;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.alpha = value;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_2$$<Play>b__9: clean
	private float c__DisplayClass4_2__Play_b__9()
	{
		CanvasGroup __this_00;
		float fVar1;

		__this_00 = this.shearVisual;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return fVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_2$$<Play>b__10: clean
	private void c__DisplayClass4_2__Play_b__10(float value)
	{
		CanvasGroup __this_00;

		__this_00 = this.shearVisual;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.alpha = value;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_2$$<Play>b__11: clean
	private float c__DisplayClass4_2__Play_b__11()
	{
		return this.startBlur;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_2$$<Play>b__12: clean
	private void c__DisplayClass4_2__Play_b__12(float value)
	{
		GisketchLogoMotionBlur __this_00;

		__this_00 = this.blur;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetBlur(value);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass4_3$$<Play>b__13: clean
	private void c__DisplayClass4_3__Play_b__13()
	{
		MethodInfo method_00;

		method_00 = (MethodInfo)this.CS___8__locals1;
		if (method_00 == null) {
			throw new NullReferenceException();
		}
		AottgGameCreateHierarchyTransition.ContinueIntoCompactButton((Transform)method_00.name, (String)method_00.return_type, (Vector3)this.exitPosition, this.preservedTile);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_0$$<ContinueIntoCompactButton>b__0: clean
	private float c__DisplayClass6_0__ContinueIntoCompactButton_b__0()
	{
		CanvasGroup __this_00;
		float fVar1;

		__this_00 = this.group;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return fVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_0$$<ContinueIntoCompactButton>b__1: clean
	private void c__DisplayClass6_0__ContinueIntoCompactButton_b__1(float value)
	{
		CanvasGroup __this_00;

		__this_00 = this.group;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.alpha = value;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_0$$<ContinueIntoCompactButton>b__2: clean
	private Vector3 c__DisplayClass6_0__ContinueIntoCompactButton_b__2()
	{
		RectTransform __this_00;
		Vector3 UVar1;

		__this_00 = this.preservedRect;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		UVar1 = (Vector3)__this_00.position;
		return (Vector3)UVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_0$$<ContinueIntoCompactButton>b__3: clean
	private void c__DisplayClass6_0__ContinueIntoCompactButton_b__3(Vector3 value)
	{
		RectTransform __this_00;

		__this_00 = this.preservedRect;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.position = value;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_0$$<ContinueIntoCompactButton>b__4: clean
	private float c__DisplayClass6_0__ContinueIntoCompactButton_b__4()
	{
		CanvasGroup __this_00;
		float fVar1;

		__this_00 = this.preservedGroup;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return fVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_0$$<ContinueIntoCompactButton>b__5: clean
	private void c__DisplayClass6_0__ContinueIntoCompactButton_b__5(float value)
	{
		CanvasGroup __this_00;

		__this_00 = this.preservedGroup;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.alpha = value;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_0$$<ContinueIntoCompactButton>b__8: clean
	private void c__DisplayClass6_0__ContinueIntoCompactButton_b__8(float value)
	{
		GisketchLogoMotionBlur __this_00;

		__this_00 = this.preservedBlur;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetBlur(value);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_0$$<ContinueIntoCompactButton>b__6: clean
	private void c__DisplayClass6_0__ContinueIntoCompactButton_b__6()
	{
		Object pUVar1;
		CanvasGroup pUVar2;
		bool bVar3;

		AottgGameCreateHierarchyTransition._playing = false;
		pUVar1 = (Object)this.preservedTile;
		bVar3 = (pUVar1 != null);
		if (bVar3) {
			pUVar1 = (Object)this.preservedTile;
			Object.Destroy(pUVar1);
		}
		pUVar2 = this.group;
		bVar3 = ((Object)pUVar2 != null);
		if (bVar3) {
			pUVar2 = this.group;
			if (pUVar2 == null) {
				throw new NullReferenceException();
			}
			pUVar2.blocksRaycasts = true;
			return;
		}
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition.<>c__DisplayClass6_1$$<ContinueIntoCompactButton>b__7: clean
	private float c__DisplayClass6_1__ContinueIntoCompactButton_b__7()
	{
		return this.startBlur;
	}
}
