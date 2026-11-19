// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using DG.Tweening;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Overlays;

[Token(Token = "0x2000059")]
public sealed class GisketchTooltipTrigger : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, IPointerMoveHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x40001B8")]
	public const string OverflowLabelMode = "OverflowLabel";

	[Token(Token = "0x40001B9")]
	private const float MaxWidth = 420f;

	[Token(Token = "0x40001BA")]
	private const float DefaultPadding = 12f;

	[Token(Token = "0x40001BB")]
	private const float AnchorGap = 8f;

	[Token(Token = "0x40001BC")]
	private const int TooltipSortingOrder = 950;

	[Token(Token = "0x40001BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Vector2 PointerOffset;

	[Token(Token = "0x40001BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly List<GisketchTooltipTrigger> Showing;

	[Token(Token = "0x40001BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string _text;

	[Token(Token = "0x40001C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private GisketchTheme _theme;

	[Token(Token = "0x40001C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private GameObject _tooltip;

	[Token(Token = "0x40001C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private RectTransform _tooltipRect;

	[Token(Token = "0x40001C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private CanvasGroup _group;

	[Token(Token = "0x40001C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private Tween _tween;

	[Token(Token = "0x40001C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private Vector2 _tooltipSize;

	[Token(Token = "0x40001C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private Canvas _placementCanvas;

	[Token(Token = "0x40001C7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private string _mode;

	[Token(Token = "0x17000049")]
	private bool IsOverflowLabel
	{
		[Token(Token = "0x6000338")]
		[Address(RVA = "0x525E340", Offset = "0x525D340", VA = "0x525E340")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c (Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$get_IsOverflowLabel): clean
			bool bVar1;

			bVar1 = String.Equals(this._mode, "OverflowLabel", 4);
			return bVar1;
		}
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x525D720", Offset = "0x525C720", VA = "0x525D720")]
	public void Setup(string text, [Optional] GisketchTheme theme, [Optional] string mode)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c (Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$Setup): clean
		this._text = text;
		if (theme == null) {
			theme = GisketchTheme.Default;
		}
		this._theme = theme;
		this._mode = mode;
		return;
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x525D7C0", Offset = "0x525C7C0", VA = "0x525D7C0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c (Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnPointerEnter): clean
		bool bVar1;
		MethodInfo method_02;

		GisketchFocusInputMode.SetPointer();
		bVar1 = this.CanShowTooltip();
		if (!bVar1) {
			return;
		}
		this.ShowTooltip();
		method_02 = (MethodInfo *)"OverflowLabel";
		bVar1 = String.Equals(this._mode, "OverflowLabel", 4);
		if (bVar1) {
			this.MoveTooltipToTarget();
			return;
		}
		this.MoveTooltip(eventData);
		return;
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x525E710", Offset = "0x525D710", VA = "0x525E710", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c (Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnPointerExit): clean
		this.PlayExit();
		return;
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x525EA30", Offset = "0x525DA30", VA = "0x525EA30", Slot = "6")]
	public void OnPointerMove(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c (Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnPointerMove): clean
		bool bVar1;
		MethodInfo method_01;

		GisketchFocusInputMode.SetPointer();
		method_01 = (MethodInfo *)"OverflowLabel";
		bVar1 = String.Equals(this._mode, "OverflowLabel", 4);
		if (bVar1) {
			this.MoveTooltipToTarget();
			return;
		}
		this.MoveTooltip(eventData);
		return;
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x525EAA0", Offset = "0x525DAA0", VA = "0x525EAA0", Slot = "7")]
	public void OnSelect(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c (Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnSelect): clean
		bool bVar1;

		bVar1 = GisketchFocusInputMode.IsNavigation;
		if (bVar1) {
			bVar1 = this.CanShowTooltip();
			if (bVar1) {
				this.ShowTooltip();
				this.MoveTooltipToTarget();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x525EAD0", Offset = "0x525DAD0", VA = "0x525EAD0", Slot = "8")]
	public void OnDeselect(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c (Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnDeselect): clean
		this.PlayExit();
		return;
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x525D900", Offset = "0x525C900", VA = "0x525D900")]
	private void ShowTooltip()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c (Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$ShowTooltip): 26 lines keep C-only constructs
		Canvas* targetAddress;
		GameObject* targetAddress_00;
		int piVar1;
		CanvasGroup* targetAddress_01;
		uint uVar2;
		Object x;
		List<GisketchTooltipTrigger> __this_00;
		GisketchTooltipTrigger[] pGVar3;
		Vector2 value;
		Vector2 UVar4;
		Vector2 UVar5;
		Il2CppType handle;
		bool bVar6;
		int weight;
		TMP_Text x_00;
		String pSVar7;
		Canvas __this_01;
		Canvas x_01;
		Type[] pSVar8;
		Type pSVar9;
		object pIVar10;
		GameObject pUVar11;
		Transform pUVar12;
		Transform pUVar13;
		RectTransform pUVar14;
		CanvasGroup pUVar15;
		Image pUVar16;
		TextMeshProUGUI __this_02;
		TMP_FontAsset value_00;
		String* ppSVar17;
		GisketchTheme pGVar19;
		float fVar20;
		float fVar21;
		Color UVar22;
		Color fallback;
		GisketchStyleDefinition local_68;
		GisketchStyleDefinition local_60;
		float local_58;
		float fStack_54;
		float local_48;

		local_60 = null;
		local_68 = null;
		bVar6 = String.Equals(this._mode, "OverflowLabel", 4);
		if (bVar6) {
			x_00 = this.GetComponent<TMP_Text>();
			bVar6 = ((Object)x_00 != null);
			if (bVar6) {
				if (x_00 == null) goto label_0535e31b;
				pSVar7 = x_00.get_text() ;
				this._text = pSVar7;
			}
		}
		bVar6 = String.IsNullOrEmpty(this._text);
		if (bVar6) {
			return;
		}
		x = (Object)this._tooltip;
		bVar6 = (x != null);
		if (bVar6) {
			return;
		}
		__this_01 = this.GetComponentInParent<Canvas>();
		bVar6 = ((Object)__this_01 == null);
		if (bVar6) {
			return;
		}
		if (__this_01 != null) {
			x_01 = __this_01.rootCanvas;
			bVar6 = ((Object)x_01 != null);
			if (bVar6) {
				__this_01 = __this_01.rootCanvas;
			}
			targetAddress = &this._placementCanvas;
			this._placementCanvas = __this_01;
			pSVar8 = (Type[])new Type[1];
			handle = TypeRef_UnityEngine_RectTransform;
			pSVar9 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			if (pSVar8 != null) {
				if ((pSVar9 != null) &&(pIVar10 = il2cpp_vm_Object_IsInst((object)pSVar9, (((pSVar8.obj).klass)._1).element_class), pIVar10 == null)) {
	label_0535e325: ;
					pIVar10 = new ArrayTypeMismatchException();
					throw pIVar10;
				}
				if ((int)pSVar8.Length == 0) {
	label_0535e320: ;
					throw new IndexOutOfRangeException();
				}
				targetAddress_00 = &this._tooltip;
				pSVar8[0] = pSVar9;
				pUVar11 = new GameObject("AoTTG Tooltip", pSVar8);
				*targetAddress_00 = pUVar11;
				__this_00 = GisketchTooltipTrigger.Showing;
				if (__this_00 != null) {
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pGVar3 = __this_00._items;
					if (pGVar3 != null) {
						uVar2 = __this_00._size;
						if (uVar2 < (uint)pGVar3.Length) {
							__this_00._size = uVar2 + 1;
							pGVar3[(int)uVar2] = this;
						}
						else {
							__this_00.AddWithResize((object)this);
						}
						if (*targetAddress_00 != null) {
							pUVar12 = (*targetAddress_00).transform;
							if ((*targetAddress != null) &&(pUVar13 = (*targetAddress).transform, pUVar12 != null)) {
								pUVar12.SetParent(pUVar13, false);
								if (*targetAddress_00 != null) {
									pUVar14 = (*targetAddress_00).GetComponent<RectTransform>();
									this._tooltipRect = pUVar14;
									pUVar14 = this._tooltipRect;
									if (pUVar14 != null) {
										pUVar14.pivot = (Vector2)0x3f80000000000000;
										GisketchTooltipTrigger.PromoteTooltip(*targetAddress_00, *targetAddress);
										if (*targetAddress_00 != null) {
											pUVar15 = (*targetAddress_00).AddComponent<CanvasGroup>();
											targetAddress_01 = &this._group;
											this._group = pUVar15;
											pUVar15 = this._group;
											if (pUVar15 != null) {
												pUVar15.blocksRaycasts = false;
												pUVar15 = *targetAddress_01;
												if (pUVar15 != null) {
													pUVar15.interactable = false;
													if ((*targetAddress_00 != null) &&(pUVar16 = (*targetAddress_00).AddComponent<Image>(), pUVar16 != null)) {
														pUVar16.set_raycastTarget(false);
														pSVar7 = "tooltip";
														pGVar19 = this._theme;
														if (pGVar19 == null) {
															if ((typeof(GisketchTheme)._2). cctor_finished_or_no_cctor == 0) {
															}
															pGVar19 = GisketchTheme.Default ;
															if (pGVar19 == null) goto label_0535e31b;
														}
														pGVar19.TryGetStyle(pSVar7, ref local_60);
														this.ApplyShadow(this._tooltip, local_60);
														pSVar8 = (Type[])new Type[1];
														pSVar9 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_RectTransform);
														if (pSVar8 != null) {
															if ((pSVar9 != null) &&(pIVar10 = il2cpp_vm_Object_IsInst((object)pSVar9, (((pSVar8.obj).klass)._1).element_class), pIVar10 == null)) goto label_0535e325;
															if ((int)pSVar8.Length == 0) goto label_0535e320;
															pSVar8[0] = pSVar9;
															pUVar11 = new GameObject("AoTTG Tooltip Label", pSVar8);
															if ((pUVar11 != null) &&(__this_02 = pUVar11.AddComponent<TextMeshProUGUI>(), __this_02 != null)) {
																pUVar12 = __this_02.transform;
																if ((*targetAddress_00 != null) &&(pUVar13 = (*targetAddress_00).transform, pUVar12 != null)) {
																	pUVar12.SetParent(pUVar13, false);
																	pUVar14 = __this_02.GetComponent<RectTransform>();
																	if (pUVar14 != null) {
																		pUVar14.anchorMin = (Vector2)(Vector2.zeroVector) ;
																		pUVar14.anchorMax = (Vector2)(Vector2.oneVector). fields;
																		local_58 = 12.0;
																		if ((local_60 != null) &&(local_60.padding.hasValue != false)) {
																			local_58 = (local_60.padding).Value;
																		}
																		UVar4.y = local_58;
																		UVar4.x = local_58;
																		fStack_54 = local_58;
																		local_48 = local_58;
																		pUVar14.offsetMin = UVar4;
																		pUVar14.offsetMax = (Vector2)(CONCAT44(fStack_54, local_58) ^ 0x8000000080000000);
																		pSVar7 = "tooltipText";
																		pGVar19 = this._theme;
																		if (pGVar19 == null) {
																			if ((typeof(GisketchTheme)._2). cctor_finished_or_no_cctor == 0) {
																			}
																			pGVar19 = typeof(GisketchTheme).static_fields .Default;
																			if (pGVar19 == null) goto label_0535e31b;
																		}
																		pGVar19.TryGetStyle(pSVar7, ref local_68);
																		fVar20 = 18.0;
																		if ((local_68 != null) &&(0.0 < local_68.fontSize.value)) {
																			fVar20 = (local_68.fontSize).Value;
																		}
																		__this_02.fontSize = fVar20;
																		if (local_68 == null) {
																			weight = 400;
																			pSVar7 = "text";
																		}
																		else {
																			pSVar7 = local_68.fontFamily;
																			weight = (local_68.fontWeight).GetValueOrDefault(400);
																		}
																		value_00 = GisketchTypography.Resolve(pSVar7, weight, this._text);
																		__this_02.font = value_00;
																		__this_02.set_text(this._text);
																		pGVar19 = this._theme;
																		if (pGVar19 != null) {
																			if (local_68 == null) {
																				ppSVar17 = &"ink";
																			}
																			else {
																				ppSVar17 = &local_68.textColor;
																			}
																			pSVar7 = null;
																			UVar22.b = 1.0;
																			UVar22.a = 1.0;
																			UVar22.r = 1.0;
																			UVar22.g = 1.0;
																			UVar22 = pGVar19.GetColor(*ppSVar17, UVar22);
																			__this_02.set_color(UVar22);
																			__this_02.set_raycastTarget(false);
																			__this_02.enableWordWrapping = true;
																			pGVar19 = this._theme;
																			if (local_60 != null) {
																				pSVar7 = local_60.background;
																			}
																			if (pGVar19 != null) {
																				fallback.b = 0.07;
																				fallback.a = 0.96;
																				fallback.r = 0.05;
																				fallback.g = 0.05;
																				UVar22 = pGVar19.GetColor(pSVar7, fallback);
																				pUVar16.set_color(UVar22) ;
																				if ((typeof(GisketchTooltipTrigger)._2). cctor_finished_or_no_cctor == 0) {
																					il2cpp_codegen_runtime_class_init((Il2CppClass)typeof(GisketchTooltipTrigger)) ;
																				}
																				local_48 = local_48 + local_48;
																				local_58 = 420.0 - local_48;
																				pSVar7 = __this_02.get_text();
																				UVar4 = __this_02.GetPreferredValues(pSVar7, local_58, 0.0);
																				fVar21 = local_48 + UVar4.x;
																				fVar20 = 420.0;
																				if (fVar21 <= 420.0) {
																					fVar20 = fVar21;
																				}
																				fVar21 = UVar4.y + local_48;
																				UVar5.y = fVar21;
																				UVar5.x = fVar20;
																				this._tooltipSize = UVar5;
																				pUVar14 = this._tooltipRect;
																				if (pUVar14 != null) {
																					value.y = fVar21;
																					value.x = fVar20;
																					pUVar14.sizeDelta = value;
																					this.PlayEnter();
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
							}
						}
					}
				}
			}
		}
	label_0535e31b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x525EB60", Offset = "0x525DB60", VA = "0x525EB60")]
	private bool Style(string name, out GisketchStyleDefinition style)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c (Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$Style): clean
		bool bVar1;
		GisketchTheme __this_00;

		__this_00 = this._theme;
		if (__this_00 == null) {
			__this_00 = GisketchTheme.Default;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
		}
		bVar1 = __this_00.TryGetStyle(name, style);
		return bVar1;
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x525EAE0", Offset = "0x525DAE0", VA = "0x525EAE0")]
	private static void PromoteTooltip(GameObject tooltip, Canvas parentCanvas)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c (Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$PromoteTooltip): clean
		int iVar1;
		Canvas __this;

		if (tooltip != null) {
			__this = tooltip.AddComponent<Canvas>();
			if (__this != null) {
				__this.overrideSorting = true;
				iVar1 = GisketchCanvasSorting.EffectiveSortingOrder(parentCanvas) ;
				__this.sortingOrder = iVar1 + 0x3b6;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x525EBE0", Offset = "0x525DBE0", VA = "0x525EBE0")]
	private void ApplyShadow(GameObject go, GisketchStyleDefinition style)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c (Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$ApplyShadow): 1 lines keep C-only constructs
		GisketchTheme __this_00;
		GisketchDropShadow __this_01;
		Color color;

		if ((style == null) ||(style.shadow.value == false)) {
			return;
		}
		if (go != null) {
			__this_01 = go.AddComponent<GisketchDropShadow>();
			__this_00 = this._theme;
			if (__this_00 != null) {
				color = __this_00.GetColor("shadow", (Color)(ZEXT816(0x3ea3d70a00000000) << 0x40));
				if (__this_01 != null) {
					__this_01.Setup(color);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x525E5E0", Offset = "0x525D5E0", VA = "0x525E5E0")]
	private void MoveTooltip(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c (Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$MoveTooltip): 1 lines keep C-only constructs
		Vector2 screenPosition;
		Vector2 size;
		RectTransform pUVar1;
		Canvas pUVar2;
		bool bVar3;
		UnityEngine_Vector2_StaticFields pUVar5;

		pUVar1 = this._tooltipRect;
		bVar3 = ((Object)pUVar1 == null);
		if (!bVar3) {
			pUVar2 = this._placementCanvas;
			bVar3 = ((Object)pUVar2 != null);
			if (bVar3) {
				pUVar2 = this._placementCanvas;
				if (eventData == null) {
					pUVar5 = typeof(Vector2).static_fields;
				}
				else {
					pUVar5 = (UnityEngine_Vector2_StaticFields)&eventData._position_k__BackingField;
				}
				screenPosition = (pUVar5.zeroVector);
				size = this._tooltipSize;
				pUVar1 = this._tooltipRect;
				if ((typeof(GisketchTooltipTrigger)._2).cctor_finished_or_no_cctor == 0) {
				}
				GisketchTooltipTrigger.PlaceTooltip(pUVar2, (Vector2)screenPosition, (Vector2)size, pUVar1);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x525E380", Offset = "0x525D380", VA = "0x525E380")]
	private void MoveTooltipToTarget()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c (Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$MoveTooltipToTarget): 1 lines keep C-only constructs
		Vector2 size;
		Canvas pUVar1;
		Vector2 screenPosition;
		bool bVar2;
		RectTransform pUVar3;
		Camera cam;
		RectTransform pUVar4;
		Rect UVar5;
		Vector3 UVar6;

		pUVar4 = this._tooltipRect;
		bVar2 = ((Object)pUVar4 == null);
		if (!bVar2) {
			pUVar3 = (RectTransform)this.transform;
			pUVar4 = null;
			if ((pUVar3 != null) &&(pUVar4 = null, pUVar3.klass == typeof(RectTransform))) {
				pUVar4 = pUVar3;
			}
			bVar2 = ((Object)pUVar4 == null);
			if (!bVar2) {
				pUVar1 = this._placementCanvas;
				bVar2 = ((Object)pUVar1 == null);
				if (!bVar2) {
					bVar2 = String.Equals(this._mode, "OverflowLabel", 4);
					if (bVar2) {
						this.PlaceAnchoredTooltip(this._placementCanvas, pUVar4, (Vector2)this._tooltipSize, this._tooltipRect);
						return;
					}
					if (pUVar4 != null) {
						UVar5 = pUVar4.rect;
						UVar6.x = UVar5.m_XMin + UVar5.m_Width * 0.5;
						UVar6.y = UVar5.m_YMin + UVar5.m_Height * 0.5;
						UVar6.z = 0.0;
						UVar6 = pUVar4.TransformPoint(UVar6);
						pUVar1 = this._placementCanvas;
						if (pUVar1 != null) {
							cam = pUVar1.worldCamera;
							screenPosition = RectTransformUtility.WorldToScreenPoint(cam, UVar6) ;
							pUVar1 = this._placementCanvas;
							size = this._tooltipSize;
							pUVar4 = this._tooltipRect;
							if ((typeof(GisketchTooltipTrigger)._2).cctor_finished_or_no_cctor == 0) {
							}
							GisketchTooltipTrigger.PlaceTooltip(pUVar1, screenPosition, (Vector2)size, pUVar4);
							return;
						}
					}
					throw new NullReferenceException();
				}
			}
		}
		return;
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x525EC90", Offset = "0x525DC90", VA = "0x525EC90")]
	private static Vector2 TooltipSize(TextMeshProUGUI label, float padding)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c (Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$TooltipSize): clean
		String text;
		float fVar1;
		Vector2 UVar2;
		float fVar3;
		float fVar4;

		if (label == null) {
			throw new NullReferenceException();
		}
		fVar1 = padding + padding;
		text = label.get_text();
		UVar2 = label.GetPreferredValues(text, 420.0 - fVar1, 0.0);
		fVar3 = fVar1 + UVar2.x;
		fVar4 = 420.0;
		if (fVar3 <= 420.0) {
			fVar4 = fVar3;
		}
		UVar2.y = UVar2.y + fVar1;
		UVar2.x = fVar4;
		return (Vector2)UVar2;
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x525D850", Offset = "0x525C850", VA = "0x525D850")]
	private bool CanShowTooltip()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c (Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$CanShowTooltip): clean
		bool bVar1;
		TMP_Text text;

		bVar1 = String.Equals(this._mode, "OverflowLabel", 4);
		if (bVar1) {
			text = this.GetComponent<TMP_Text>();
			if ((typeof(GisketchTooltipTrigger)._2).cctor_finished_or_no_cctor == 0) {
				bVar1 = GisketchTooltipTrigger.IsOverflowing(text);
				return bVar1;
			}
			bVar1 = GisketchTooltipTrigger.IsOverflowing(text);
			return bVar1;
		}
		return true;
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x525F540", Offset = "0x525E540", VA = "0x525F540")]
	internal static bool IsOverflowing(TMP_Text text)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c (Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$IsOverflowing): clean
		uint uVar1;
		Vector2 UVar2;
		bool bVar3;
		RectTransform pUVar4;
		String text_00;
		byte bVar5;
		Rect UVar6;
		float fStack_38;

		bVar5 = 0;
		bVar3 = ((Object)text == null);
		if (!bVar3) {
			if (text == null) {
	label_0535f6cd: ;
				throw new NullReferenceException();
			}
			pUVar4 = text.rectTransform;
			bVar5 = 0;
			bVar3 = ((Object)pUVar4 == null);
			if (!bVar3) {
				text.ForceMeshUpdate(false, false);
				text_00 = text.get_text();
				UVar2 = text.GetPreferredValues(text_00);
				pUVar4 = text.rectTransform;
				if (pUVar4 == null) goto label_0535f6cd;
				UVar6 = pUVar4.rect;
				if ((typeof(Rect)._2).cctor_finished_or_no_cctor == 0) {
					uVar1 = (typeof(GisketchTooltipTrigger)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar1 = (typeof(GisketchTooltipTrigger)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				fStack_38 = UVar2.x;
				bVar5 = -(UVar6.m_Width + 0.5 < fStack_38) & -(0.0 < UVar6.m_Width);
			}
		}
		return (bool)(bVar5 & 1);
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x525F6E0", Offset = "0x525E6E0", VA = "0x525F6E0")]
	internal static bool IsOverflowing(float preferredWidth, float availableWidth)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c (Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$IsOverflowing): clean
		return (bool)(-(availableWidth + 0.5 < preferredWidth) & -(0.0 < availableWidth) & 1);
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x525ED20", Offset = "0x525DD20", VA = "0x525ED20")]
	private void PlayEnter()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c (Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$PlayEnter): 2 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		RectTransform pUVar3;
		CanvasGroup pUVar4;
		bool bVar6;
		Sequence pDVar7;
		DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o t;
		Tween pDVar8;
		TweenCallback<float> __this_00;
		Tweener t_00;
		Vector3 value;

		pUVar3 = this._tooltipRect;
		bVar6 = ((Object)pUVar3 == null);
		if (!bVar6) {
			pUVar4 = this._group;
			bVar6 = ((Object)pUVar4 == null);
			if (!bVar6) {
				if ((typeof(Application)._2).cctor_finished_or_no_cctor == 0) {
					bVar6 = Application.isPlaying;
				}
				else {
					bVar6 = Application.isPlaying;
				}
				if (bVar6) {
					pDVar8 = this._tween;
					if (pDVar8 != null) {
						TweenExtensions.Kill(pDVar8, false);
					}
					pUVar3 = this._tooltipRect;
					if (pUVar3 != null) {
						value.z = (Vector3.oneVector).z * 0.84;
						uVar1 = (Vector3.oneVector).x;
						uVar2 = (Vector3.oneVector).y;
						value.x = (float)uVar1 * (float)0x3f570a3d;
						value.y = (float)uVar2 * (float)0x3f570a3d;
						pUVar3.localScale = value;
						pUVar4 = this._group;
						if (pUVar4 != null) {
							pUVar4.alpha = 0.0;
							pDVar7 = DOTween.Sequence();
							pUVar3 = this._tooltipRect;
							t = ShortcutExtensions.DOScale((Transform)pUVar3, (Vector3)(Vector3.oneVector), 0.14);
							pDVar8 = (Tween)TweenSettingsExtensions.SetEase<TweenerCore<Vector3, Vector3, VectorOptions>>((object)t, 0x1b, 1.04);
							pDVar7 = TweenSettingsExtensions.Join(pDVar7, pDVar8);
							__this_00 = new TweenCallback<float>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_PlayEnter_b__34_0);
							t_00 = DOVirtual.Float(0.0, 1.0, 0.1, __this_00);
							pDVar7 = TweenSettingsExtensions.Join(pDVar7, (Tween)t_00);
							pDVar7 = TweenSettingsExtensions.SetUpdate<Sequence>((object)pDVar7, true);
							this._tween = (Tween)pDVar7;
							return;
						}
					}
					throw new NullReferenceException();
				}
			}
		}
		return;
	}

	[Token(Token = "0x600033D")]
	[Address(RVA = "0x525E720", Offset = "0x525D720", VA = "0x525E720")]
	private void PlayExit()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c (Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$PlayExit): 3 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		Object x;
		RectTransform pUVar3;
		CanvasGroup pUVar4;
		bool bVar6;
		Sequence pDVar7;
		DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o t;
		Tween pDVar8;
		TweenCallback<float> __this_00;
		Tweener t_00;
		TweenCallback __this_01;
		float from;
		Vector3 endValue;

		x = (Object)this._tooltip;
		bVar6 = (x == null);
		if (bVar6) {
			return;
		}
		pDVar8 = this._tween;
		if (pDVar8 != null) {
			TweenExtensions.Kill(pDVar8, false);
		}
		pUVar3 = this._tooltipRect;
		bVar6 = ((Object)pUVar3 == null);
		if (!bVar6) {
			pUVar4 = this._group;
			bVar6 = ((Object)pUVar4 == null);
			if (!bVar6) {
				if ((typeof(Application)._2).cctor_finished_or_no_cctor == 0) {
					bVar6 = Application.isPlaying;
				}
				else {
					bVar6 = Application.isPlaying;
				}
				if (bVar6) {
					if (((typeof(DOTween))._2).cctor_finished_or_no_cctor == 0) {
					}
					pDVar7 = DOTween.Sequence();
					pUVar3 = this._tooltipRect;
					uVar1 = (Vector3.oneVector).x;
					uVar2 = (Vector3.oneVector).y;
					endValue.x = (float)uVar1 * (float)0x3f666666;
					endValue.y = (float)uVar2 * (float)0x3f666666;
					endValue.z = (Vector3.oneVector).z * 0.9;
					t = ShortcutExtensions.DOScale((Transform)pUVar3, endValue, 0.1);
					pDVar8 = (Tween)TweenSettingsExtensions.SetEase<TweenerCore<Vector3, Vector3, VectorOptions>>((object)t, 8);
					pDVar7 = TweenSettingsExtensions.Join(pDVar7, pDVar8);
					pUVar4 = this._group;
					if (pUVar4 == null) {
						throw new NullReferenceException();
					}
					from = pUVar4.alpha;
					__this_00 = new TweenCallback<float>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_PlayExit_b__35_0);
					t_00 = DOVirtual.Float(from, 0.0, 0.08, __this_00);
					pDVar7 = TweenSettingsExtensions.Join(pDVar7, (Tween)t_00);
					__this_01 = new TweenCallback((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_DestroyTooltip);
					pDVar7 = TweenSettingsExtensions.OnComplete<Sequence>((object)pDVar7, __this_01);
					pDVar7 = TweenSettingsExtensions.SetUpdate<Sequence>((object)pDVar7, true);
					this._tween = (Tween)pDVar7;
					return;
				}
			}
		}
		this.DestroyTooltip();
		return;
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x525F8F0", Offset = "0x525E8F0", VA = "0x525F8F0")]
	public static void HideWithin(Transform root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c (Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$HideWithin): clean
		uint uVar1;
		uint index;
		List<GisketchTooltipTrigger> pSVar2;
		bool bVar3;
		GisketchTooltipTrigger pGVar4;
		Transform __this;

		if (Il2CppMethodInitialized_0754299e == false) {
			Il2CppMethodInitialized_0754299e = true;
			uVar1 = (typeof(GisketchTooltipTrigger)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(GisketchTooltipTrigger)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = GisketchTooltipTrigger.Showing;
		}
		else {
			pSVar2 = *(List<GisketchTooltipTrigger>*)((long)(typeof(GisketchTooltipTrigger)). static_fields + 8);
		}
		if (pSVar2 != null) {
			index = pSVar2._size;
			while(true) {
				do {
					index = index - 1;
					if ((int)index < 0) {
						return;
					}
					if (((typeof(GisketchTooltipTrigger))._2). cctor_finished_or_no_cctor == 0) {
					}
					pSVar2 = GisketchTooltipTrigger.Showing;
					if (((pSVar2 == null) ||(pGVar4 = pSVar2.get_Item(index), pGVar4 == null)) ||(__this = pGVar4.transform , __this == null)) goto label_0535fa46;
					bVar3 = __this.IsChildOf(root);
				} while (!bVar3);
				pSVar2 = GisketchTooltipTrigger.Showing;
				if (pSVar2 == null) break;
				pGVar4 = pSVar2.get_Item(index);
				if (pGVar4 == null) break;
				pGVar4.DestroyTooltip();
			}
		}
	label_0535fa46: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x525F710", Offset = "0x525E710", VA = "0x525F710")]
	private void DestroyTooltip()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c (Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$DestroyTooltip): 4 lines keep C-only constructs
		GameObject* targetAddress;
		uint uVar1;
		List<GisketchTooltipTrigger> __this_00;
		Tween t;
		Object pUVar2;
		bool bVar3;

		if (Il2CppMethodInitialized_0754299f == false) {
			Il2CppMethodInitialized_0754299f = true;
			if ((typeof(GisketchTooltipTrigger)._2).cctor_finished_or_no_cctor == 0) goto label_0535f796;
	label_0535f737: ;
			__this_00 = GisketchTooltipTrigger.Showing;
		}
		else {
			if ((typeof(GisketchTooltipTrigger)._2).cctor_finished_or_no_cctor != 0) goto label_0535f737;
	label_0535f796: ;
			__this_00 = GisketchTooltipTrigger.Showing;
		}
		if (__this_00 == null) {
	label_0535f8e3: ;
			throw new NullReferenceException();
		}
		__this_00.Remove((object)this);
		t = this._tween;
		this._tween = null;
		if (t != null) {
			TweenExtensions.Kill(t, false);
		}
		pUVar2 = (Object)this._tooltip;
		targetAddress = &this._tooltip;
		bVar3 = (pUVar2 != null);
		if (bVar3) {
			if (*targetAddress == null) goto label_0535f8e3;
			(*targetAddress).SetActive(false);
			bVar3 = Application.isPlaying;
			pUVar2 = (Object)*targetAddress;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
			if (bVar3) {
				if (uVar1 == 0) {
				}
				Object.Destroy(pUVar2);
			}
			else {
				if (uVar1 == 0) {
				}
				Object.DestroyImmediate(pUVar2);
			}
		}
		this._tooltip = null;
		this._tooltipRect = null;
		this._group = null;
		this._placementCanvas = null;
		return;
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x525EFE0", Offset = "0x525DFE0", VA = "0x525EFE0")]
	private static void PlaceTooltip(Canvas canvas, Vector2 screenPosition, Vector2 size, RectTransform tooltip)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c (Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$PlaceTooltip): 46 lines keep C-only constructs
		bool bVar1;
		RectTransform pUVar2;
		Camera cam;
		RectTransform rect;
		uint uVar3;
		float fVar4;
		uint extraout_XMM0_Dc;
		ulong in_XMM0_Qb;
		uint extraout_XMM0_Dd;
		byte[] auVar5 = new byte[16];
		float fVar6;
		float fVar7;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		uint uVar12;
		uint uVar13;
		float fVar14;
		float fVar15;
		float fVar16;
		uint uVar17;
		uint uVar18;
		Rect UVar19;
		Vector2 UStack_68;
		float fStack_5c;
		Vector2 UStack_58;
		ulong uStack_50;
		byte[] auStack_48 = new byte[8];
		uint uStack_40;
		uint uStack_3c;
		byte[] auStack_38 = new byte[8];
		uint uStack_30;
		uint uStack_2c;
		byte[] auStack_28 = new byte[16];

		auStack_28._8_4_ = in_XMM1_Dc;
		auStack_28._0_8_ = size;
		auStack_28._12_4_ = in_XMM1_Dd;
		UStack_58 = screenPosition;
		uStack_50 = in_XMM0_Qb;
		UStack_68.x = 0.0;
		UStack_68.y = 0.0;
		if (canvas != null) {
			pUVar2 = (RectTransform)canvas.transform;
			rect = null;
			if ((pUVar2 != null) &&(rect = null, pUVar2.klass == typeof(RectTransform))) {
				rect = pUVar2;
			}
			bVar1 = ((Object)rect == null);
			if (bVar1) {
				return;
			}
			cam = canvas.worldCamera;
			RectTransformUtility.ScreenPointToLocalPointInRectangle(rect, UStack_58, cam, ref UStack_68);
			if (rect != null) {
				UVar19 = rect.rect;
				fVar4 = UVar19.m_Width;
				fVar7 = UVar19.m_Height;
				fVar14 = UVar19.m_XMin;
				fVar16 = UVar19.m_YMin;
				uVar17 = extraout_XMM0_Dc;
				uVar18 = extraout_XMM0_Dd;
				fVar10 = UStack_68.x;
				fVar11 = 0.0;
				uVar12 = 0;
				uVar13 = 0;
				if ((typeof(GisketchTooltipTrigger)._2).cctor_finished_or_no_cctor == 0) {
					UStack_58.x = UStack_68.x;
					UStack_58.y = 0.0;
					uStack_50 = 0;
					uStack_30 = in_XMM1_Dc;
					auStack_38 = (byte[])UVar19._8_8_;
					uStack_2c = in_XMM1_Dd;
					uStack_40 = extraout_XMM0_Dc;
					auStack_48 = (byte[])UVar19._0_8_;
					uStack_3c = extraout_XMM0_Dd;
					fVar4 = (float)auStack_38._0_4_;
					fVar7 = (float)auStack_38._4_4_;
					in_XMM1_Dc = uStack_30;
					in_XMM1_Dd = uStack_2c;
					fVar14 = (float)auStack_48._0_4_;
					fVar16 = (float)auStack_48._4_4_;
					uVar17 = uStack_40;
					uVar18 = uStack_3c;
					fVar10 = UStack_58.x;
					fVar11 = UStack_58.y;
					uVar12 = (undefined4)uStack_50;
					uVar13 = uStack_50._4_4_;
				}
				fVar6 = (GisketchTooltipTrigger.PointerOffset). fields.x;
				if ((typeof(Rect)._2).cctor_finished_or_no_cctor == 0) {
					UStack_58.y = fVar11;
					UStack_58.x = fVar10;
					uStack_50 = CONCAT44(uVar13, uVar12);
					auStack_38._4_4_ = fVar7;
					auStack_38._0_4_ = fVar4;
					uStack_30 = in_XMM1_Dc;
					uStack_2c = in_XMM1_Dd;
					auStack_48._4_4_ = fVar16;
					auStack_48._0_4_ = fVar14;
					uStack_40 = uVar17;
					uStack_3c = uVar18;
					fStack_5c = fVar6;
					fVar4 = (float)auStack_38._0_4_;
					fVar7 = (float)auStack_38._4_4_;
					fVar14 = (float)auStack_48._0_4_;
					fVar16 = (float)auStack_48._4_4_;
					fVar6 = fStack_5c;
					fVar10 = UStack_58.x;
					fVar11 = UStack_58.y;
				}
				if (tooltip != null) {
					fVar10 = fVar10 + fVar6;
					fVar7 = fVar7 + fVar16;
					fVar4 = (fVar4 + fVar14) - auStack_28._0_4_;
					if (fVar10 <= fVar4) {
						fVar4 = fVar10;
					}
					fVar15 = fVar16 + auStack_28._4_4_;
					fVar9 = UStack_68.y;
					fVar8 = fVar9 + (GisketchTooltipTrigger. PointerOffset).y;
					fVar6 = fVar7;
					if (fVar8 <= fVar7) {
						fVar6 = fVar8;
					}
					uVar3 = -(uint)(fVar15 <= fVar8);
					auVar5._0_4_ = UStack_68.x -(float)(~-(uint)(fVar14 <= fVar10) & (uint)fVar14 |(uint)fVar4 & -(uint)(fVar14 <= fVar10));
					auVar5._4_4_ = fVar9 - ((float)(~uVar3 & (uint)fVar15 | (uint)fVar6 & uVar3) - auStack_28._4_4_);
					auVar5._8_4_ = 0.0 - (float)(~(uint)fVar11 & (uint)fVar16 | (uint)fVar7 & (uint)fVar11);
					auVar5._12_4_ = 0.0 - (float)(~(uint)fVar9 & (uint)fVar16 | (uint)fVar7 & (uint)fVar9);
					auVar5 = divps(auVar5, auStack_28);
					tooltip.pivot = (Vector2)auVar5._0_8_;
					tooltip.anchoredPosition = (Vector2)UStack_68;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x525F230", Offset = "0x525E230", VA = "0x525F230")]
	private void PlaceAnchoredTooltip(Canvas canvas, RectTransform target, Vector2 size, RectTransform tooltip)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c (Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$PlaceAnchoredTooltip): 29 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		RectTransform x;
		Vector2 value;
		bool bVar10;
		RectTransform pUVar11;
		ScrollRect x_00;
		Vector3[] fourCornersArray;
		RectTransform canvas_00;
		uint in_XMM0_Dc;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint in_XMM0_Dd;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		Vector3 UVar13;
		Vector3 position;
		Rect UVar14;
		bool bStack_89;
		byte[] auStack_88 = new byte[16];
		byte[] auStack_78 = new byte[16];
		byte[] auStack_68 = new byte[16];
		byte[] auStack_58 = new byte[16];
		byte[] auStack_48 = new byte[16];

		auStack_48._8_4_ = in_XMM0_Dc;
		auStack_48._0_8_ = size;
		auStack_48._12_4_ = in_XMM0_Dd;
		bStack_89 = false;
		bVar10 = ((Object)canvas != null);
		canvas_00 = null;
		if (bVar10) {
			if (canvas == null) goto label_0535f532;
			pUVar11 = (RectTransform)canvas.transform;
			canvas_00 = null;
			if ((pUVar11 != null) &&(canvas_00 = null, pUVar11.klass == typeof(RectTransform))) {
				canvas_00 = pUVar11;
			}
		}
		bVar10 = ((Object)canvas_00 == null);
		if (bVar10) {
			return;
		}
		bVar10 = ((Object)target == null);
		if (bVar10) {
			return;
		}
		bVar10 = ((Object)tooltip == null);
		if (bVar10) {
			return;
		}
		x_00 = this.GetComponentInParent<ScrollRect>();
		bVar10 = ((Object)x_00 != null);
		pUVar11 = canvas_00;
		if (bVar10) {
			if (x_00 == null) goto label_0535f532;
			x = x_00.m_Viewport;
			bVar10 = ((Object)x != null);
			if (bVar10) {
				pUVar11 = x_00.m_Viewport;
			}
		}
		if ((typeof(GisketchTooltipTrigger)._2).cctor_finished_or_no_cctor == 0) {
		}
		UVar14 = GisketchTooltipTrigger.LocalRect(canvas_00, pUVar11);
		auStack_58._8_4_ = extraout_XMM0_Dc;
		auStack_58._0_8_ = UVar14._0_8_;
		auStack_58._12_4_ = extraout_XMM0_Dd;
		auStack_68._8_4_ = in_XMM1_Dc;
		auStack_68._0_8_ = UVar14._8_8_;
		auStack_68._12_4_ = in_XMM1_Dd;
		fourCornersArray = (Vector3[])new Vector3[4];
		if ((target != null) &&(target.GetWorldCorners(fourCornersArray), fourCornersArray != null)) {
			uVar9 = (uint)fourCornersArray.Length;
			if ((uVar9 < 2) || (uVar9 == 2)) {
	label_0535f537: ;
				throw new IndexOutOfRangeException();
			}
			if (canvas_00 != null) {
				UVar13.z = (fourCornersArray[1].z + fourCornersArray[2].z) * 0.5;
				uVar1 = fourCornersArray[1].x;
				uVar5 = fourCornersArray[1].y;
				uVar2 = fourCornersArray[2].x;
				uVar6 = fourCornersArray[2].y;
				UVar13.x = ((float)uVar2 + (float)uVar1) * 0.5;
				UVar13.y = ((float)uVar6 + (float)uVar5) * 0.5;
				UVar13 = canvas_00.InverseTransformPoint(UVar13);
				uVar9 = (uint)fourCornersArray.Length;
				if ((uVar9 == 0) ||(auStack_78._8_4_ = extraout_XMM0_Dc_00, auStack_78._0_8_ = UVar13._0_8_, auStack_78._12_4_ = extraout_XMM0_Dd_00, uVar9 < 4)) goto label_0535f537;
				uVar3 = fourCornersArray[0].x;
				uVar7 = fourCornersArray[0].y;
				uVar4 = fourCornersArray[3].x;
				uVar8 = fourCornersArray[3].y;
				position.x = ((float)uVar4 + (float)uVar3) * 0.5;
				position.y = ((float)uVar8 + (float)uVar7) * 0.5;
				position.z =(fourCornersArray[0].z + fourCornersArray[3].z) * 0.5;
				UVar13 = canvas_00.InverseTransformPoint(position);
				auStack_88._8_4_ = extraout_XMM0_Dc_01;
				auStack_88._0_8_ = UVar13._0_8_;
				auStack_88._12_4_ = extraout_XMM0_Dd_01;
				if (tooltip != null) {
					tooltip.pivot = (Vector2)0x3f0000003f000000;
					UVar14.m_Width = (float)auStack_68._0_4_;
					UVar14.m_Height = (float)auStack_68._4_4_;
					UVar14.m_XMin = (float)auStack_58._0_4_;
					UVar14.m_YMin = (float)auStack_58._4_4_;
					value = GisketchTooltipTrigger.AnchoredPosition(UVar14, (Vector2)auStack_78._0_8_, (Vector2)auStack_88._0_8_, (Vector2)auStack_48._0_8_, ref bStack_89);
					tooltip.anchoredPosition = value;
					return;
				}
			}
		}
	label_0535f532: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x525FA50", Offset = "0x525EA50", VA = "0x525FA50")]
	private static Rect LocalRect(RectTransform canvas, RectTransform target)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c (Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$LocalRect): clean
		bool bVar1;
		Vector3[] fourCornersArray;
		float fVar2;
		float fVar3;
		Rect UVar4;
		Vector3 UVar5;
		Vector3 UVar6;
		float local_28;
		float fStack_24;

		bVar1 = ((Object)canvas == null);
		local_28 = 0.0;
		fStack_24 = 0.0;
		if (bVar1) {
			fVar2 = 0.0;
			fVar3 = 0.0;
		}
		else {
			bVar1 = ((Object)target == null);
			fVar2 = 0.0;
			fVar3 = 0.0;
			local_28 = 0.0;
			fStack_24 = 0.0;
			if (!bVar1) {
				fourCornersArray = (Vector3[])new Vector3[4];
				if (target != null) {
					target.GetWorldCorners(fourCornersArray);
					if (fourCornersArray != null) {
						if ((int)fourCornersArray.Length != 0) {
							if (canvas == null) goto label_0535fb96;
							UVar5 = canvas.InverseTransformPoint((Vector3)fourCornersArray[0]);
							if (2 < (uint)fourCornersArray.Length) {
								UVar6 = canvas.InverseTransformPoint((Vector3)fourCornersArray[2]) ;
								local_28 = UVar5.x;
								fStack_24 = UVar5.y;
								fVar2 = UVar6.x - local_28;
								fVar3 = UVar6.y - fStack_24;
								goto label_0535fb8c;
							}
						}
						throw new IndexOutOfRangeException();
					}
				}
	label_0535fb96: ;
				throw new NullReferenceException();
			}
		}
	label_0535fb8c: ;
		UVar4.m_YMin = fStack_24;
		UVar4.m_XMin = local_28;
		UVar4.m_Height = fVar3;
		UVar4.m_Width = fVar2;
		return (Rect)UVar4;
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x525FBA0", Offset = "0x525EBA0", VA = "0x525FBA0")]
	internal static Vector2 AnchoredPosition(Rect bounds, Vector2 targetTop, Vector2 targetBottom, Vector2 size, out bool placedBelow)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c (Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$AnchoredPosition): clean
		uint uVar1;
		uint uVar2;
		Vector2 UVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float local_88;
		float fStack_54;
		float local_48;
		float fStack_44;

		fVar7 = bounds.m_Width;
		fVar5 = bounds.m_Height;
		local_88 = size.x;
		fStack_44 = bounds.m_YMin;
		fVar6 = targetTop.y;
		if (0.0 < fVar7) {
			fVar4 = local_88 * 0.5;
			if (fVar7 * 0.5 <= local_88 * 0.5) {
				fVar4 = fVar7 * 0.5;
			}
			local_48 = bounds.m_XMin;
			fVar7 = (local_48 + fVar7) - fVar4;
			fVar8 = targetTop.x;
			if (fVar8 <= fVar7) {
				fVar7 = fVar8;
			}
			uVar2 = -(uint)(local_48 + fVar4 <= fVar8);
			targetTop.y = 0.0;
			targetTop.x = (float)(uVar2 & (uint)fVar7 | ~uVar2 & (uint)(local_48 + fVar4));
		}
		fVar7 = size.y * 0.5;
		fVar8 = fStack_44 + fVar5;
		fVar6 = fVar6 + 8.0;
		fVar4 = fVar6 + size.y;
		*placedBelow = fVar8 < fVar4;
		if (fVar8 < fVar4) {
			fStack_54 = targetBottom.y;
			fVar6 = (fStack_54 + -8.0) - fVar7;
			uVar1 = (typeof(Rect)._2).cctor_finished_or_no_cctor;
		}
		else {
			fVar6 = fVar6 + fVar7;
			uVar1 = (typeof(Rect)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (0.0 < fVar5) {
			if (fVar5 * 0.5 <= fVar7) {
				fVar7 = fVar5 * 0.5;
			}
			if (((typeof(Rect))._2).cctor_finished_or_no_cctor == 0) {
			}
			fVar5 = fVar8 - fVar7;
			if (fVar6 <= fVar8 - fVar7) {
				fVar5 = fVar6;
			}
			uVar2 = -(uint)(fStack_44 + fVar7 <= fVar6);
			fVar6 = (float)(~uVar2 & (uint)(fStack_44 + fVar7) | (uint)fVar5 & uVar2);
		}
		UVar3.x = targetTop.x;
		UVar3.y = fVar6;
		return (Vector2)UVar3;
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x525FE20", Offset = "0x525EE20", VA = "0x525FE20")]
	private void OnDisable()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c (Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnDisable): clean
		this.DestroyTooltip();
		return;
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x525FE30", Offset = "0x525EE30", VA = "0x525FE30")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c (Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnDestroy): clean
		this.DestroyTooltip();
		return;
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x525FE40", Offset = "0x525EE40", VA = "0x525FE40")]
	public GisketchTooltipTrigger()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c (Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c.

	// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$.cctor: clean
	static GisketchTooltipTrigger()
	{
		List<GisketchTooltipTrigger> __this;

		(GisketchTooltipTrigger.PointerOffset) =(Vector2)0x41c0000041c00000;
		__this = new List<GisketchTooltipTrigger>();
		GisketchTooltipTrigger.Showing = __this;
		return;
	}

	// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$<PlayEnter>b__34_0: clean
	private void PlayEnter_b__34_0(float value)
	{
		CanvasGroup __this_00;

		__this_00 = this._group;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.alpha = value;
		return;
	}

	// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$<PlayExit>b__35_0: clean
	private void PlayExit_b__35_0(float value)
	{
		CanvasGroup __this_00;

		__this_00 = this._group;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.alpha = value;
		return;
	}
}
