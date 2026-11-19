// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchScreenBuilder
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Gilzoide.FlexUi;
using Gilzoide.FlexUi.Yoga;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Localization;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using TMPro;
using Unity.Profiling;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x20000AF")]
public static class GisketchScreenBuilder
{
	[Token(Token = "0x40003AC")]
	private const string BrushSidePanelDarkTexture = "GisketchUI/Texture/SeamlessGrungeDark";

	[Token(Token = "0x40003AD")]
	private const float DefaultScrollbarWidth = 12f;

	[Token(Token = "0x40003AE")]
	private const float SliderValueWidth = 54f;

	[Token(Token = "0x40003AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker BuildViewMarker;

	[Token(Token = "0x40003B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker SettleLayoutMarker;

	[Token(Token = "0x40003B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static int _settleCalls;

	[Token(Token = "0x40003B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private static int _fullSettleCalls;

	[Token(Token = "0x40003B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static int _targetedSettleCalls;

	[Token(Token = "0x40003B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private static int _measurementSettleCalls;

	[Token(Token = "0x40003B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static int _canvasFlushes;

	[Token(Token = "0x40003B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private static int _flexRefreshes;

	[Token(Token = "0x40003B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static int _scrollbarPasses;

	[Token(Token = "0x1700009A")]
	public static GisketchLayoutSettleCounters LayoutSettleCounters
	{
		[Token(Token = "0x60005A5")]
		[Address(RVA = "0x528D6E0", Offset = "0x528C6E0", VA = "0x528D6E0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$get_LayoutSettleCounters): clean
			int iVar1;
			int iVar3;
			int iVar4;
			int iVar5;

			iVar1 = GisketchScreenBuilder._scrollbarPasses;
			iVar3 = GisketchScreenBuilder._fullSettleCalls;
			iVar4 = GisketchScreenBuilder._targetedSettleCalls;
			iVar5 = GisketchScreenBuilder._measurementSettleCalls;
			__return_storage_ptr__.Calls = GisketchScreenBuilder._settleCalls;
			__return_storage_ptr__.FullCalls = iVar3;
			__return_storage_ptr__.TargetedCalls = iVar4;
			__return_storage_ptr__.MeasurementCalls = iVar5;
			iVar3 = GisketchScreenBuilder._flexRefreshes;
			__return_storage_ptr__.CanvasFlushes = GisketchScreenBuilder._canvasFlushes;
			__return_storage_ptr__.FlexRefreshes = iVar3;
			__return_storage_ptr__.ScrollbarPasses = iVar1;
			return __return_storage_ptr__;
		}
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x527C060", Offset = "0x527B060", VA = "0x527C060")]
	private static void BuildBuiltin(string type, GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildBuiltin): 15 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		GisketchTheme theme;
		String color;
		bool bVar3;
		TextMeshProUGUI text;
		String* ppSVar4;
		GisketchSectionNavigator __this;
		GisketchStyleDefinition extraout_RDX;
		GisketchStyleDefinition extraout_RDX_00;
		GisketchStyleDefinition extraout_RDX_01;
		GisketchStyleDefinition extraout_RDX_02;
		GisketchStyleDefinition extraout_RDX_03;
		GisketchStyleDefinition extraout_RDX_04;
		GisketchStyleDefinition pGVar5;
		MethodInfo method_01;

		method_01 = (MethodInfo)context;
		bVar3 = String.Equals(type, "Text", 5);
		if (bVar3) {
			if (go != null) {
				text = go.AddComponent<TextMeshProUGUI>();
				GisketchScreenBuilder.ApplyText(text, node, style, context);
				return;
			}
	label_0537ca5a: ;
			throw new NullReferenceException();
		}
		bVar3 = String.Equals(type, "Icon", 5);
		uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		if (bVar3) {
			if (uVar1 == 0) {
			}
			GisketchScreenBuilder.BuildIcon(go, node, style, context);
			return;
		}
		if (uVar1 == 0) {
		}
		bVar3 = String.Equals(type, "Button", 5);
		uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		if (bVar3) {
			if (uVar1 == 0) {
			}
			GisketchScreenBuilder.BuildButton(go, node, style, context);
			return;
		}
		if (uVar1 == 0) {
		}
		bVar3 = String.Equals(type, "SpriteButton", 5);
		uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		if (bVar3) {
			if (uVar1 == 0) {
			}
			GisketchScreenBuilder.BuildSpriteButton(go, node, style, context);
			return;
		}
		if (uVar1 == 0) {
		}
		bVar3 = String.Equals(type, "InputField", 5);
		uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		if (bVar3) {
			if (uVar1 == 0) {
			}
			bVar3 = false;
	label_0537c3cc: ;
			GisketchScreenBuilder.BuildInputField(go, node, style, context, bVar3);
			return;
		}
		if (uVar1 == 0) {
		}
		bVar3 = String.Equals(type, "SearchPalette", 5);
		uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		if (bVar3) {
			pGVar5 = extraout_RDX;
			if (uVar1 == 0) {
				pGVar5 = extraout_RDX_00;
			}
			GisketchScreenBuilder.BuildSearchPalette(go, node, pGVar5, context, view);
			return;
		}
		if (uVar1 == 0) {
		}
		bVar3 = String.Equals(type, "TextArea", 5);
		uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		if (bVar3) {
			if (uVar1 == 0) {
			}
			bVar3 = true;
			goto label_0537c3cc;
		}
		if (uVar1 == 0) {
		}
		bVar3 = String.Equals(type, "Slider", 5);
		uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		if (bVar3) {
			if (uVar1 == 0) {
			}
			GisketchScreenBuilder.BuildSlider(go, node, style, context);
			return;
		}
		if (uVar1 == 0) {
		}
		bVar3 = String.Equals(type, "ColorSwatch", 5);
		uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		if (bVar3) {
			if (uVar1 == 0) {
			}
			GisketchScreenBuilder.BuildColorSwatch(go, node, style, context);
			return;
		}
		if (uVar1 == 0) {
		}
		bVar3 = String.Equals(type, "Switch", 5);
		uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		if (bVar3) {
			if (uVar1 == 0) {
			}
			GisketchScreenBuilder.BuildSwitch(go, node, style, context);
			return;
		}
		if (uVar1 == 0) {
		}
		bVar3 = String.Equals(type, "Checkbox", 5);
		if (bVar3) {
	label_0537c5e5: ;
			bVar3 = String.Equals(type, "Radio", 5);
			GisketchScreenBuilder.BuildToggle(go, node, style, context, bVar3);
			return;
		}
		bVar3 = String.Equals(type, "Radio", 5);
		if (bVar3) goto label_0537c5e5;
		bVar3 = String.Equals(type, "Image", 5);
		if (bVar3) {
			if (node == null) goto label_0537ca5a;
			bVar3 = String.IsNullOrEmpty(node.sprite);
			if (!bVar3) {
				GisketchScreenBuilder.BuildStandaloneSpriteImage(go, node, style, context);
				return;
			}
		}
		bVar3 = String.Equals(type, "Image", 5);
		if (!bVar3) {
			bVar3 = String.Equals(type, "Divider", 5);
			if (!bVar3) {
				bVar3 = String.Equals(type, "Skeleton", 5);
				uVar2 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
				if (bVar3) {
					if (uVar2 == 0) {
					}
					GisketchScreenBuilder.BuildSkeleton(go, style, context);
					return;
				}
				if (uVar2 == 0) {
				}
				bVar3 = String.Equals(type, "Stepper", 5);
				uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
				if (bVar3) {
					if (uVar1 == 0) {
					}
					GisketchScreenBuilder.BuildStepper(go, node, style, context, view);
					return;
				}
				if (uVar1 == 0) {
				}
				bVar3 = String.Equals(type, "ScrollView", 5);
				uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
				if (bVar3) {
					if (uVar1 == 0) {
					}
					GisketchScreenBuilder.BuildScrollView(go, node, style, context);
					return;
				}
				if (uVar1 == 0) {
				}
				bVar3 = String.Equals(type, "SectionNavigator", 5);
				if (bVar3) {
					if (go != null) {
						__this = go.AddComponent<GisketchSectionNavigator>();
						if ((node != null) &&(__this != null)) {
							__this.Setup(node.options, node.value, node.text);
							return;
						}
					}
				}
				else {
					bVar3 = String.Equals(type, "ScaleBox", 5);
					uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
					if (bVar3) {
						if (uVar1 == 0) {
						}
						GisketchScreenBuilder.BuildScaleBox(go, node, style, context);
						return;
					}
					if (uVar1 == 0) {
					}
					bVar3 = String.Equals(type, "Dropdown", 5);
					uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
					if (bVar3) {
						pGVar5 = extraout_RDX_01;
						if (uVar1 == 0) {
							pGVar5 = extraout_RDX_02;
						}
						GisketchScreenBuilder.BuildDropdown(go, node, pGVar5, context, (GisketchView)method_01);
						return;
					}
					if (uVar1 == 0) {
					}
					bVar3 = String.Equals(type, "Select", 5);
					uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
					if (bVar3) {
						pGVar5 = extraout_RDX_03;
						if (uVar1 == 0) {
							pGVar5 = extraout_RDX_04;
						}
						GisketchScreenBuilder.BuildSelect(go, node, pGVar5, context, (GisketchView)method_01);
						return;
					}
					if (uVar1 == 0) {
					}
					bVar3 = String.Equals(type, "FormDraft", 5);
					if (!bVar3) {
						bVar3 = String.Equals(type, "Spacer", 5);
						if (!bVar3) {
							bVar3 = String.Equals(type, "Stack", 5);
							if (!bVar3) {
								bVar3 = String.Equals(type, "List", 5);
								if (!bVar3) {
									GisketchScreenBuilder.ApplyPanel(go, node, style, context);
									return;
								}
							}
						}
						return;
					}
					if (go != null) {
						go.SetActive(false);
						return;
					}
				}
				goto label_0537ca5a;
			}
		}
		if (context == null) goto label_0537ca5a;
		theme = context.Theme;
		if (style != null) {
			bVar3 = String.IsNullOrEmpty(style.background);
			if (!bVar3) {
				ppSVar4 = &style.background;
				goto label_0537c7a1;
			}
		}
		ppSVar4 = &"surface";
	label_0537c7a1: ;
		color = *ppSVar4;
		GisketchScreenBuilder.ApplyImage(go, style, theme, color, false);
		return;
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x527D4A0", Offset = "0x527C4A0", VA = "0x527D4A0")]
	private static void BuildButton(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildButton): 59 lines keep C-only constructs
		GisketchScreenBuilder.c__DisplayClass1_0 targetAddress;
		GisketchBuildContext* targetAddress_00;
		Nullable<float> pSVar1;
		GisketchBuildContext pGVar2;
		GisketchTheme pGVar3;
		String pSVar4;
		GisketchNodeDefinition pGVar5;
		Sprite maskSprite;
		GisketchNodeDefinition[] pGVar6;
		GisketchLayoutDefinition pGVar7;
		UnityEvent __this;
		GameObject* ppUVar8;
		Il2CppType handle;
		GisketchStyleDefinition face;
		bool bVar9;
		bool bVar10;
		bool reveal;
		GisketchScreenBuilder.c__DisplayClass1_0 __this_00;
		String* ppSVar11;
		Image pUVar12;
		GisketchButtonInputSource pGVar13;
		GisketchButtonSound pGVar14;
		Button pUVar15;
		Image pUVar16;
		GisketchDisabledSelectableOpacity __this_01;
		ulong extraout_RAX;
		GisketchButtonRelief __this_02;
		GisketchFocusRing __this_03;
		GisketchChildHost pGVar17;
		Type[] components;
		Type obj;
		object pIVar18;
		GameObject pUVar19;
		Transform __this_04;
		RectTransform rect;
		TextMeshProUGUI text;
		GisketchDropdownItemFeedback __this_05;
		GisketchBrushButtonFeedback __this_06;
		GisketchBrushButtonIntroReveal __this_07;
		UnityAction __this_08;
		int value;
		GisketchLength pGVar21;
		GisketchStyleDefinition style_00;
		uint uVar22;
		float fVar23;
		uint uVar24;
		uint uVar25;
		uint uVar26;
		uint uVar27;
		float fVar28;
		float fVar29;
		float fVar30;
		Color fallback;
		Color UVar31;
		RectMask2D pUStack_b8;
		GisketchStyleDefinition pGStack_a8;
		GisketchStyleDefinition pGStack_90;
		ulong uStack_88;
		Button pUStack_80;
		GameObject* ppUStack_78;
		Image pUStack_70;
		RectTransform pUStack_68;
		Nullable<float> SStack_60;

		pUStack_68 = null;
		SStack_60.hasValue = false;
		SStack_60._1_3_ = 0;
		SStack_60.value = 0.0;
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchScreenBuilder.c__DisplayClass1_0));
		__this_00 = new GisketchScreenBuilder.c__DisplayClass1_0();
		if (__this_00 == null) goto label_0537e44c;
		targetAddress = &__this_00.fields;
		__this_00.node = node;
		targetAddress_00 = &__this_00.context;
		__this_00.context = context;
		ppUVar8 = &__this_00.go;
		__this_00.go = go;
		if (style == null) {
			fVar23 = 0.0;
			pGVar2 = *targetAddress_00;
		}
		else {
			fVar23 = style.relief.value;
			pGVar2 = *targetAddress_00;
		}
		if (((pGVar2 == null) ||(pGVar3 = pGVar2.Theme, pGVar3 == null)) ||(targetAddress.node == null)) goto label_0537e44c;
		fVar23 = fVar23 * pGVar3._ReliefIntensity_k__BackingField;
		bVar9 = String.IsNullOrEmpty(targetAddress.node.sprite);
		if (bVar9) {
			fVar28 = ABS(fVar23);
			if (fVar28 <= 0.0) {
				fVar28 = 0.0;
			}
			fVar30 = Mathf.Epsilon * 8.0;
			fVar29 = fVar28 * 1e-06;
			if (fVar28 * 1e-06 <= fVar30) {
				fVar29 = fVar30;
			}
			pGStack_90 = null;
			pUVar19 = *ppUVar8;
			pGVar2 = *targetAddress_00;
			if (ABS(0.0 - fVar23) < fVar29) {
				if (pGVar2 == null) goto label_0537e44c;
				if (style == null) {
					ppSVar11 = &"primary";
				}
				else {
					ppSVar11 = &style.background;
				}
				pGVar3 = pGVar2.Theme;
				pSVar4 = *ppSVar11;
				pUVar12 = GisketchScreenBuilder.ApplyImage(pUVar19, style, pGVar3, pSVar4, false);
				goto label_0537d87f;
			}
			pUVar12 = GisketchScreenBuilder.BuildButtonFace(pUVar19, style, pGVar2, fVar23, (RectTransform*)&pGStack_90);
			if (*ppUVar8 == null) goto label_0537e44c;
			pUStack_b8 = (*ppUVar8).GetComponent<RectMask2D>();
			bVar9 = false;
		}
		else {
			pGStack_90 = null;
			pUVar19 = *ppUVar8;
			pGVar5 = targetAddress.node;
			pGVar2 = *targetAddress_00;
			pUVar12 = GisketchScreenBuilder.BuildSpriteImage(pUVar19, pGVar5, style, pGVar2, false, true);
	label_0537d87f: ;
			pUStack_b8 = null;
			bVar9 = true;
		}
		if (*ppUVar8 == null) goto label_0537e44c;
		pGVar13 = (*ppUVar8).AddComponent<GisketchButtonInputSource>();
		__this_00.inputSource = pGVar13;
		pUVar19 = __this_00.go;
		if (pUVar19 == null) goto label_0537e44c;
		pGVar14 = pUVar19.AddComponent<GisketchButtonSound>();
		__this_00.sound = pGVar14;
		pGVar5 = __this_00.node;
		if ((pGVar5 == null) ||(pGVar14 = __this_00.sound, pGVar14 == null)) goto label_0537e44c;
		pGVar14._action = pGVar5.action;
		if (*ppUVar8 == null) goto label_0537e44c;
		pUVar15 = (*ppUVar8).AddComponent<Button>();
		pUVar16 = pUVar12;
		if (!bVar9) {
			if (*ppUVar8 == null) goto label_0537e44c;
			pUVar16 = (*ppUVar8).GetComponent<Image>();
		}
		if (pUVar15 == null) goto label_0537e44c;
		pUVar15.targetGraphic = (Graphic)pUVar16;
		pUVar15.transition = 0;
		pUStack_80 = pUVar15;
		pUVar15.navigation = (Navigation)ZEXT840(3) ;
		if (style == null) {
	label_0537da59: ;
			if (*ppUVar8 == null) goto label_0537e44c;
			__this_01 = (*ppUVar8).AddComponent<GisketchDisabledSelectableOpacity>();
			if (((*targetAddress_00 == null) ||(pGVar3 = ((*targetAddress_00).fields).Theme, pGVar3 == null)) ||(__this_01 == null)) goto label_0537e44c;
			if (pGVar3._IsDarkMode_k__BackingField == false) {
				uVar26 = 0x3f19999a;
				uVar27 = 0x3f666666;
				uVar24 = 0x3f19999a;
				uVar25 = 0x3f19999a;
			}
			else {
				uVar27 = 0x3e99999a;
				uVar26 = 0x3f800000;
				uVar24 = 0x3f800000;
				uVar25 = 0x3f800000;
			}
			UVar31.g = (float)uVar25;
			UVar31.r = (float)uVar24;
			UVar31.a = (float)uVar27;
			UVar31.b = (float)uVar26;
			__this_01.Setup(UVar31);
			uStack_88 = CONCAT71((int7)((ulong)extraout_RAX >> 8), 1);
		}
		else {
			pSVar4 = style.name;
			uStack_88 = 0;
			bVar10 = String.Equals(pSVar4, "dropdownItem", 5);
			if (!bVar10) {
				pSVar4 = style.name;
				uStack_88 = 0;
				bVar10 = String.Equals(pSVar4, "searchResultItem", 5);
				if (!bVar10) goto label_0537da59;
			}
		}
		pUVar19 = *ppUVar8;
		if (bVar9) {
			if (pUVar19 == null) goto label_0537e44c;
			pGStack_a8 = (GisketchStyleDefinition)pUVar19.GetComponent<RectTransform>();
		}
		else {
			if (pUVar19 == null) goto label_0537e44c;
			__this_02 = pUVar19.AddComponent<GisketchButtonRelief>();
			if (style == null) {
				SStack_60.hasValue = false;
				SStack_60._1_3_ = 0;
				SStack_60.value = 0.0;
				pSVar1 = &SStack_60;
			}
			else {
				pSVar1 = &style.pressDepth;
			}
			if (__this_02 == null) goto label_0537e44c;
			__this_02.Setup(pUVar12, (RectTransform)pGStack_90, fVar23, pUStack_b8, (System_Nullable_float__o)*pSVar1);
			pGStack_a8 = pGStack_90;
		}
		pUStack_70 = pUVar12;
		if (targetAddress.node == null) goto label_0537e44c;
		bVar10 = String.IsNullOrEmpty(targetAddress.node.text);
		uVar22 = 1;
		if (bVar10) {
			if (targetAddress.node == null) goto label_0537e44c;
			bVar10 = String.IsNullOrEmpty(targetAddress.node.textKey);
			uVar22 = (uint)!bVar10;
		}
		pGVar5 = targetAddress.node;
		if (pGVar5 == null) goto label_0537e44c;
		bVar10 = true;
		if (pGVar5.hasIcon == false) {
			bVar10 = String.IsNullOrEmpty(pGVar5.icon);
			bVar10 = !bVar10;
			if (style == null) goto label_0537dc3e;
	label_0537dbe7: ;
			pSVar4 = style.name;
			reveal = GisketchScreenBuilder.IsBrushButtonStyle(pSVar4);
			pGVar2 = *targetAddress_00;
		}
		else {
			if (style != null) goto label_0537dbe7;
	label_0537dc3e: ;
			reveal = false;
			pGVar2 = *targetAddress_00;
		}
		if (pGVar2 == null) goto label_0537e44c;
		pUVar19 = *ppUVar8;
		pGVar3 = pGVar2.Theme;
		ppUStack_78 = ppUVar8;
		if (((typeof(GisketchScreenBuilder))._2). cctor_finished_or_no_cctor == 0) {
		}
		if (pUVar19 == null) goto label_0537e44c;
		__this_03 = pUVar19.AddComponent<GisketchFocusRing>();
		if (pGVar3 == null) goto label_0537e44c;
		fallback.b = 1.0;
		fallback.a = 1.0;
		fallback.r = 1.0;
		fallback.g = 1.0;
		UVar31 = pGVar3.GetColor("primary", fallback);
		UVar31 = pGVar3.GetColor("focusRing", UVar31);
		if (__this_03 == null) goto label_0537e44c;
		__this_03.Setup(UVar31, 3.0, 5.0, 14.0, (bool)(reveal == false & (byte)uStack_88));
		ppUVar8 = ppUStack_78;
		pUStack_68 = null;
		style_00 = pGStack_90;
		if ((uVar22 != 0) && (reveal != false || bVar10)) {
			if (pUStack_70 == null) goto label_0537e44c;
			maskSprite = pUStack_70.m_Sprite;
			pGStack_a8 = (GisketchStyleDefinition)GisketchScreenBuilder.BuildButtonContent((RectTransform)pGStack_a8, style, reveal, maskSprite, ref pUStack_68);
			style_00 = pGStack_90;
		}
		pGStack_90 = style_00;
		if (!bVar9) {
			if (((typeof(Object))._2).cctor_finished_or_no_cctor == 0) {
			}
			bVar9 = ((Object)pGStack_a8 == (Object)style_00);
			face = pGStack_90;
			if (bVar9) {
				if (targetAddress.node == null) goto label_0537e44c;
				pGVar6 = targetAddress.node.children;
				if ((pGVar6 != null) && (pGVar6.Length != 0)) {
					if ((typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor == 0) {
					}
					pGStack_a8 = (GisketchStyleDefinition)GisketchScreenBuilder.BuildButtonFaceContent((RectTransform)face, style_00);
				}
			}
			if ((*ppUVar8 == null) ||(pGVar17 = (*ppUVar8).AddComponent<GisketchChildHost>(), pGVar17 == null)) goto label_0537e44c;
			pGVar17._Parent_k__BackingField = (Transform)pGStack_a8;
		}
		pGVar5 = targetAddress.node;
		pGVar2 = *targetAddress_00;
		pUVar12 = GisketchScreenBuilder.BuildButtonIcon(pGVar5, (RectTransform)pGStack_a8, style, pGVar2, SUB41(uVar22, 0));
		if (uVar22 == 0) {
			text = null;
		}
		else {
			components = (Type[])new Type[1];
			handle = TypeRef_UnityEngine_RectTransform;
			obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			if (components == null) goto label_0537e44c;
			if ((obj != null) &&(pIVar18 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class), pIVar18 == null)) {
				pIVar18 = new ArrayTypeMismatchException();
				throw pIVar18;
			}
			if ((int)components.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			components[0] = obj;
			pUVar19 = new GameObject("AoTTG Button Label", components);
			if ((pUVar19 == null) ||(__this_04 = pUVar19.transform, __this_04 == null)) goto label_0537e44c;
			__this_04.SetParent((Transform)pGStack_a8, false);
			if (!bVar10) {
				rect = pUVar19.GetComponent<RectTransform>();
				GisketchScreenBuilder.Stretch(rect);
			}
			text = pUVar19.AddComponent<TextMeshProUGUI>();
			pGVar5 = targetAddress.node;
			pGVar2 = *targetAddress_00;
			GisketchScreenBuilder.ApplyText(text, pGVar5, style, pGVar2);
			value = 0x1001;
			if (!bVar10) {
				if (style != null) {
					pSVar4 = style.textAlignment;
					bVar9 = String.Equals(pSVar4, "left", 5);
					if (bVar9) goto label_0537e0fc;
				}
				value = 0x202;
			}
	label_0537e0fc: ;
			if (text == null) goto label_0537e44c;
			text.alignment = value;
			text.enableWordWrapping = false;
		}
		pUVar19 = *ppUVar8;
		pGVar5 = targetAddress.node;
		GisketchScreenBuilder.ApplyButtonMeasure(pUVar19, pGVar5, text, style, bVar10) ;
		pUVar15 = pUStack_80;
		if ((byte)uStack_88 == false) {
			pUVar19 = *ppUVar8;
			if ((typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor == 0) {
			}
			GisketchScreenBuilder.AllowButtonTextClipping(pUVar19, text, 0.0);
			if (*ppUVar8 == null) goto label_0537e44c;
			__this_05 = (*ppUVar8).AddComponent<GisketchDropdownItemFeedback>();
			if ((*targetAddress_00 == null) ||(__this_05 == null)) goto label_0537e44c;
			__this_05.Setup(pUStack_70, text, ((*targetAddress_00).fields).Theme, pUVar12);
		}
		else {
			if (targetAddress.node == null) goto label_0537e44c;
			if (targetAddress.node.clip != false) {
				bVar9 = ((Object)text != null);
				if (bVar9) {
					if (targetAddress.node == null) goto label_0537e44c;
					pGVar7 = targetAddress.node.layout;
					if (pGVar7 == null) {
						pGVar21 = null;
					}
					else {
						pGVar21 = pGVar7.minWidth;
					}
					pUVar19 = *ppUVar8;
					if ((typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor == 0) {
					}
					fVar23 = 0.0;
					if (pGVar21 != null) {
						pSVar4 = pGVar21.unit;
						if (((typeof(GisketchScreenBuilder))._2). cctor_finished_or_no_cctor == 0) {
						}
						bVar9 = String.Equals(pSVar4, "point", 5);
						fVar23 = 0.0;
						pUVar15 = pUStack_80;
						if (bVar9) {
							fVar23 = pGVar21.value;
						}
					}
					GisketchScreenBuilder.AllowButtonTextClipping(pUVar19, text, fVar23) ;
					ppUVar8 = ppUStack_78;
					GisketchHoverMarqueeText.Setup(*ppUStack_78, text, true);
				}
			}
		}
		if (reveal != false) {
			if (*ppUVar8 == null) goto label_0537e44c;
			__this_06 = (*ppUVar8).AddComponent<GisketchBrushButtonFeedback>();
			pUVar16 = pUStack_70;
			if ((*targetAddress_00 == null) ||(__this_06 == null)) goto label_0537e44c;
			__this_06.Setup(pUStack_70, text, pUVar12, (RectTransform)pGStack_a8, ((*targetAddress_00).fields).Theme);
			if ((*ppUVar8 == null) ||((__this_07 = (*ppUVar8).AddComponent<GisketchBrushButtonIntroReveal>(), pUVar16 == null ||(__this_07 == null)))) goto label_0537e44c;
			__this_07.Setup(pUStack_68, (RectTransform)pGStack_a8, pUVar16.m_Sprite);
		}
		__this = (UnityEvent)pUVar15.m_OnClick;
		__this_08 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass1_0_BuildButton_b__0);
		if (__this != null) {
			__this.AddListener(__this_08);
			return;
		}
	label_0537e44c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x5282EA0", Offset = "0x5281EA0", VA = "0x5282EA0")]
	private static bool IsBrushButtonStyle(string name)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$IsBrushButtonStyle): clean
		bool bVar1;

		bVar1 = String.Equals(name, "mainMenuBrushButton", 5);
		if (bVar1) {
			return true;
		}
		bVar1 = String.Equals(name, "brushSidePanelBrushButton", 5);
		return bVar1;
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x5282320", Offset = "0x5281320", VA = "0x5282320")]
	private static Image BuildButtonFace(GameObject go, GisketchStyleDefinition style, GisketchBuildContext context, float relief, out RectTransform face)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildButtonFace): 6 lines keep C-only constructs
		GisketchTheme pGVar1;
		String color;
		Il2CppType handle;
		Image pUVar2;
		RectMask2D __this;
		Type[] components;
		Type obj;
		object pIVar3;
		GameObject __this_00;
		Transform __this_01;
		Transform parent;
		MethodInfo method_00;
		String* ppSVar4;
		Material __this_02;
		Color UVar5;

		if (go != null) {
			pUVar2 = go.GetComponent<Image>();
			if (pUVar2 == null) {
				pUVar2 = go.AddComponent<Image>();
			}
			if ((context != null) &&(pGVar1 = context.Theme, pGVar1 != null)) {
				UVar5 = pGVar1.GetColor("shadow", (Color)(ZEXT816(0x3ea3d70a00000000) << 0x40));
				if (pUVar2 != null) {
					pUVar2.set_color(UVar5);
					pUVar2.set_material(null);
					__this = go.AddComponent<RectMask2D>();
					if (__this != null) {
						__this.enabled = false;
						components = (Type[])new Type[1];
						handle = TypeRef_UnityEngine_RectTransform;
						obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
						if (components != null) {
							if (obj != null) {
								pIVar3 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class);
								if (pIVar3 == null) {
									pIVar3 = new ArrayTypeMismatchException();
									throw pIVar3;
								}
							}
							if ((int)components.Length == 0) {
								throw new IndexOutOfRangeException();
							}
							components[0] = obj;
							__this_00 = new GameObject("AoTTG Button Face", components);
							if (__this_00 != null) {
								__this_01 = __this_00.transform;
								parent = go.transform;
								if (__this_01 != null) {
									__this_01.SetParent(parent, false);
									method_00 = (MethodInfo)__this_00.GetComponent<RectTransform>();
									*face = (RectTransform)method_00;
									GisketchScreenBuilder.Stretch(*face);
									if (style == null) {
										ppSVar4 = &"primary";
									}
									else {
										ppSVar4 = &style.background;
									}
									pGVar1 = context.Theme;
									color = *ppSVar4;
									pUVar2 = GisketchScreenBuilder.ApplyImage(__this_00, style, pGVar1, color, true);
									if (pUVar2 != null) {
										__this_02 = pUVar2.get_material();
										if ((typeof(GisketchSurfaceMaterial)._2). cctor_finished_or_no_cctor == 0) {
										}
										if (__this_02 != null) {
											__this_02.SetFloat(GisketchSurfaceMaterial. ReliefId, relief);
											pUVar2.set_raycastTarget(false);
											return pUVar2;
										}
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

	[Token(Token = "0x600054C")]
	[Address(RVA = "0x52834E0", Offset = "0x52824E0", VA = "0x52834E0")]
	private static RectTransform BuildButtonFaceContent(RectTransform face, GisketchStyleDefinition style)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildButtonFaceContent): 1 lines keep C-only constructs
		Il2CppType handle;
		Type[] components;
		Type obj;
		object pIVar1;
		GameObject __this;
		Transform __this_00;
		RectTransform rect;
		FlexLayout flex;
		GisketchLayoutDefinition __this_01;

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
			__this = new GameObject("AoTTG Button Face Content", components);
			if (__this != null) {
				__this_00 = __this.transform;
				if (__this_00 != null) {
					__this_00.SetParent((Transform)face, false);
					rect = __this.GetComponent<RectTransform>();
					GisketchScreenBuilder.Stretch(rect);
					flex = __this.AddComponent<FlexLayout>();
					__this_01 = new GisketchLayoutDefinition();
					if (__this_01 != null) {
						__this_01.justify = "Center";
						__this_01.alignItems = "Center";
						GisketchScreenBuilder.ApplyFlex(flex, __this_01, null);
						return rect;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600054D")]
	[Address(RVA = "0x5281200", Offset = "0x5280200", VA = "0x5281200")]
	private static void BuildStepper(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildStepper): clean
		uint uVar1;
		GisketchStepperStepDefinition[] pGVar2;
		GisketchStepperStepDefinition pGVar3;
		String pSVar4;
		GisketchStepperStepDefinition[] pGVar5;
		GisketchNodeDefinition node_00;
		Transform parent;
		GameObject __this;
		ulong uVar6;
		ulong uVar8;

		GisketchScreenBuilder.ApplyPanel(go, node, style, context);
		if (node == null) {
	label_05381356: ;
			throw new NullReferenceException();
		}
		pGVar2 = node.steps;
		if (((pGVar2 != null) &&(uVar6 = pGVar2.Length, uVar6 != 0)) && (0 < (int)uVar6)) {
			if (go == null) {
				pGVar3 = pGVar2[0];
				pSVar4 = node.style;
				if ((typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor == 0) {
				}
				GisketchScreenBuilder.StepNode(pGVar3, pSVar4);
				throw new NullReferenceException();
			}
			uVar8 = 0;
			do {
				if ((uVar6 & 0xffffffff) <= uVar8) {
	label_0538135b: ;
					throw new IndexOutOfRangeException();
				}
				pGVar3 = pGVar2[uVar8];
				pSVar4 = node.style;
				if ((typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor == 0) {
				}
				node_00 = GisketchScreenBuilder.StepNode(pGVar3, pSVar4);
				parent = go.transform;
				__this = GisketchScreenBuilder.BuildNode(node_00, parent, context, view) ;
				pGVar5 = node.steps;
				if (pGVar5 == null) goto label_05381356;
				if ((int)pGVar5.Length == 0) goto label_0538135b;
				if (__this == null) goto label_05381356;
				__this.SetActive(pGVar3 == pGVar5[0]);
				uVar8 = uVar8 + 1;
				uVar1 = (uint)pGVar2.Length;
				uVar6 = (ulong)uVar1;
			} while ((long)uVar8 < (long)(int)uVar1);
		}
		return;
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x52854B0", Offset = "0x52844B0", VA = "0x52854B0")]
	private static GisketchNodeDefinition StepNode(GisketchStepperStepDefinition step, string style)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$StepNode): 2 lines keep C-only constructs
		bool bVar1;
		GisketchNodeDefinition __this;
		String* ppSVar2;
		GisketchLayoutDefinition __this_00;
		GisketchNodeDefinition[] pGVar3;
		GisketchNodeDefinition __this_01;
		String pSVar4;

		__this = new GisketchNodeDefinition();
		if (__this != null) {
			__this.type = "Panel";
			if (step != null) {
				bVar1 = String.IsNullOrEmpty(step.id);
				if (bVar1) {
					ppSVar2 = &"Step";
				}
				else {
					ppSVar2 = &step.id;
				}
				__this.id = ((GisketchStepperStepDefinition)ppSVar2).id;
				__this.style = style;
				__this_00 = new GisketchLayoutDefinition();
				if (__this_00 != null) {
					__this_00.direction = "Column";
					__this_00.alignItems = "Stretch";
					__this.layout = __this_00;
					pGVar3 = step.children;
					if ((pGVar3 != null) &&(pGVar3.Length != 0)) {
	label_053856dc: ;
						__this.children = pGVar3;
						return __this;
					}
					pGVar3 = (GisketchNodeDefinition[])new GisketchNodeDefinition[1];
					__this_01 = new GisketchNodeDefinition();
					if (__this_01 != null) {
						__this_01.type = "Text";
						pSVar4 = step.text;
						if (pSVar4 == null) {
							pSVar4 = step.title;
						}
						__this_01.text = pSVar4;
						pSVar4 = step.textKey;
						if (pSVar4 == null) {
							pSVar4 = step.titleKey;
						}
						__this_01.textKey = pSVar4;
						if (pGVar3 != null) {
							if ((int)pGVar3.Length == 0) {
								throw new IndexOutOfRangeException();
							}
							pGVar3[0] = __this_01;
							goto label_053856dc;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x5282130", Offset = "0x5281130", VA = "0x5282130")]
	private static void ApplyPanel(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyPanel): 1 lines keep C-only constructs
		GisketchTheme theme;
		String color;
		bool bVar1;
		bool bVar2;
		Image pUVar3;

		if (node == null) {
			bVar2 = false;
		}
		else {
			bVar1 = String.IsNullOrEmpty(node.tooltip);
			bVar2 = true;
			if (bVar1) {
				bVar2 = String.IsNullOrEmpty(node.tooltipKey);
				bVar2 = !bVar2;
			}
			bVar1 = String.IsNullOrEmpty(node.sprite);
			if (!bVar1) {
				GisketchScreenBuilder.BuildSpriteImage(go, node, style, context, false, bVar2);
				return;
			}
		}
		if (((style == null) ||(bVar1 = String.IsNullOrEmpty(style.background))) ||(bVar1 = (style.background == "clear"))) {
			if (bVar2 == false) {
				return;
			}
			if ((go != null) &&((pUVar3 = go.GetComponent<Image>(), pUVar3 != null ||(pUVar3 = go.AddComponent<Image>(), pUVar3 != null)))) {
				pUVar3.set_color((Color)ZEXT816(0));
				pUVar3.set_raycastTarget(true);
				return;
			}
		}
		else if (context != null) {
			theme = context.Theme;
			color = style.background;
			GisketchScreenBuilder.ApplyImage(go, style, theme, color, false);
			return;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x5280D70", Offset = "0x527FD70", VA = "0x5280D70")]
	private static Image ApplyImage(GameObject go, GisketchStyleDefinition style, GisketchTheme theme, string color, bool reliefGradient = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyImage): clean
		Nullable<bool> SVar1;
		Nullable<float> stainScaleOverride;
		Image graphic;
		Material pUVar2;
		bool bVar3;
		bool reliefGradient_00;
		float relief;
		float fVar4;
		float fVar5;
		float fVar6;
		Color UVar7;

		if (go != null) {
			graphic = go.GetComponent<Image>();
			if (graphic == null) {
				graphic = go.AddComponent<Image>();
			}
			if (theme != null) {
				UVar7.b = 0.12;
				UVar7.a = 0.92;
				UVar7.r = 0.08;
				UVar7.g = 0.09;
				UVar7 = theme.GetColor(color, UVar7);
				if (graphic != null) {
					graphic.set_color(UVar7);
					GisketchScreenBuilder.ApplyShadow(go, style, theme);
					if ((style == null) ||(style.textured.value == false)) {
						graphic.set_material(null);
					}
					else {
						relief = style.relief.value * theme._ReliefIntensity_k__BackingField;
						SVar1 = style.worn;
						bVar3 = SVar1.hasValue == false;
						fVar4 = ABS(relief);
						if (fVar4 <= 0.0) {
							fVar4 = 0.0;
						}
						fVar6 = Mathf.Epsilon * 8.0;
						fVar5 = fVar4 * 1e-06;
						if (fVar4 * 1e-06 <= fVar6) {
							fVar5 = fVar6;
						}
						if (ABS(0.0 - relief) < fVar5 && (0xff >= (ushort)SVar1 && !bVar3)) {
							pUVar2 = GisketchSurfaceMaterial.Shared;
							graphic.set_material(pUVar2);
						}
						else {
							reliefGradient_00 = true;
							if (!reliefGradient) {
								reliefGradient_00 = style.reliefGradient.value != false;
							}
							stainScaleOverride = style.wornStainScale;
							pUVar2 = GisketchSurfaceMaterial.Instance(relief, reliefGradient_00, 0xff < (ushort)SVar1 || bVar3, (Nullable<float>)stainScaleOverride, false, false);
							GisketchSurfaceMaterialOwner.Assign((Graphic)graphic, pUVar2);
						}
					}
					return graphic;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x527CB40", Offset = "0x527BB40", VA = "0x527CB40")]
	private static void ApplyText(TextMeshProUGUI text, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyText): clean
		uint uVar1;
		object obj;
		String pSVar4;
		GisketchTheme __this;
		bool bVar5;
		bool bVar6;
		int iVar7;
		TMP_FontAsset value;
		String pSVar9;
		TextMeshProUGUI pTVar11;
		TextMeshProUGUI __this_00;
		int value_00;
		String pSVar13;
		float fVar14;
		Color fallback;
		Color UVar15;
		TextMeshProUGUI local_48;

		if (node == null) goto label_0537d10d;
		bVar5 = String.IsNullOrEmpty(node.textKey);
		if (bVar5) {
	label_0537cc9b: ;
			pSVar9 = node.text;
			if (pSVar9 == null) goto label_0537d142;
	label_0537cca8: ;
			uVar1 = (typeof(GisketchArabicText)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (context == null) goto label_0537d10d;
			obj = (object)context.Localizer;
			if (obj == null) goto label_0537cc9b;
			pSVar9 = node.text;
			pSVar13 = node.textKey;
			pSVar9 = obj.GetText(pSVar13, pSVar9);
			if (pSVar9 != null) goto label_0537cca8;
	label_0537d142: ;
			pSVar9 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			uVar1 = (typeof(GisketchArabicText)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar9 = GisketchArabicText.ToVisual(pSVar9, false);
		bVar5 = String.IsNullOrEmpty(node.tooltip);
		bVar6 = true;
		if (bVar5) {
			bVar6 = String.IsNullOrEmpty(node.tooltipKey);
			bVar6 = !bVar6;
		}
		if (text == null) goto label_0537d10d;
		text.set_raycastTarget(bVar6);
		text.enableWordWrapping = node.clip == false;
		if (node.clip != false) {
			text.overflowMode = 1;
		}
		if (style == null) {
			local_48 = null;
			iVar7 = 400;
			fVar14 = GisketchTypography.FontSize(null, 400, 24.0);
			text.fontSize = fVar14;
			pSVar13 = null;
			pTVar11 = text;
		}
		else {
			pSVar13 = style.name;
			bVar5 = String.Equals(pSVar13, "profileCardSocialText", 5);
			if (bVar5) {
				text.enableWordWrapping = false;
				text.overflowMode = 1;
			}
			pSVar13 = style.name;
			bVar5 = String.Equals(pSVar13, "profileEmoteSlotText", 5);
			if (bVar5) {
				text.overflowMode = 1;
			}
			pSVar13 = style.name;
			bVar5 = String.Equals(pSVar13, "profileHoverBio", 5);
			if (bVar5) {
				text.overflowMode = 1;
			}
			pSVar13 = style.name;
			bVar5 = String.Equals(pSVar13, "settingLabel", 5);
			if (bVar5) {
				text.textWrappingMode = 1;
				text.maxVisibleLines = 2;
				text.overflowMode = 1;
			}
			pSVar13 = style.fontFamily;
			iVar7 = (style.fontWeight).GetValueOrDefault(400);
			if (style.fontSize.value <= 0.0) {
				fVar14 = 24.0;
			}
			else {
				fVar14 = (style.fontSize).Value;
			}
			fVar14 = GisketchTypography.FontSize(pSVar13, iVar7, fVar14);
			text.fontSize = fVar14;
			pSVar4 = style.name;
			bVar5 = String.Equals(pSVar4, "gameCreateChoiceTitle", 5);
			if (bVar5) {
	label_0537cf8a: ;
				text.textWrappingMode = 0;
				text.enableAutoSizing = true;
				text.fontSizeMax = text.m_fontSize;
				text.fontSizeMin = text.m_fontSize * 0.55;
			}
			else {
				pSVar4 = style.name;
				bVar5 = String.Equals(pSVar4, "gameCreateFavoritesTitle", 5);
				if (bVar5) goto label_0537cf8a;
			}
			pTVar11 = null;
			local_48 = text;
		}
		value_00 = 0;
		value = GisketchTypography.Resolve(pSVar13, iVar7, pSVar9);
		text.font = value;
		__this_00 = pTVar11;
		if (style != null) {
			pSVar13 = style.fontStyle;
			bVar5 = String.Equals(pSVar13, "italic", 5);
			value_00 = (uint)bVar5 * 2;
			__this_00 = local_48;
		}
		if (__this_00 != null) {
			__this_00.fontStyle = value_00;
			text.set_text(pSVar9);
			if (style == null) {
				UVar15.b = 1.0;
				UVar15.a = 1.0;
				UVar15.r = 1.0;
				UVar15.g = 1.0;
				local_48 = pTVar11;
			}
			else {
				if ((context == null) ||(__this = context.Theme, __this == null)) goto label_0537d10d;
				fallback.b = 1.0;
				fallback.a = 1.0;
				fallback.r = 1.0;
				fallback.g = 1.0;
				UVar15 = __this.GetColor(style.textColor, fallback);
			}
			if (local_48 != null) {
				local_48.set_color(UVar15);
				iVar7 = GisketchScreenBuilder.TextAlignment(style);
				text.alignment = iVar7;
				return;
			}
		}
	label_0537d10d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x5283DA0", Offset = "0x5282DA0", VA = "0x5283DA0")]
	private static void ApplyButtonMeasure(GameObject go, GisketchNodeDefinition node, TextMeshProUGUI text, GisketchStyleDefinition style, bool hasIcon)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyButtonMeasure): clean
		uint uVar1;
		GisketchLayoutDefinition pGVar2;
		bool bVar3;
		LayoutElement pUVar4;
		String pSVar5;
		GisketchButtonWidthMeasure __this;
		GisketchLength pGVar6;
		GisketchLength pGVar7;
		GisketchLength pGVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		float local_70;
		Vector2 local_68;

		if (go == null) goto label_053845e8;
		pUVar4 = go.GetComponent<LayoutElement>();
		if (pUVar4 == null) {
			pUVar4 = go.AddComponent<LayoutElement>() ;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar3 = ((Object)text != null);
		if (bVar3) {
			if (text == null) goto label_053845e8;
			pSVar5 = text.get_text();
			local_68 = (Vector2)text.GetPreferredValues(pSVar5);
			if (style != null) goto label_05383efa;
	label_05383f52: ;
			fVar9 = 16.0;
		}
		else {
			local_68 = (Vector2.zeroVector);
			if (style == null) goto label_05383f52;
	label_05383efa: ;
			if (style.paddingX.hasValue == false) {
				if (style.padding.hasValue == false) goto label_05383f52;
				fVar9 = style.padding.value;
			}
			else {
				fVar9 = style.paddingX.value;
			}
		}
		local_70 = 0.0;
		if (hasIcon) {
			bVar3 = ((Object)text != null);
			if (bVar3) {
				local_70 = 6.0;
			}
			else {
				local_70 = 0.0;
			}
			if ((style != null) && (bVar3)) {
				if (style.gap.hasValue == false) {
					local_70 = 6.0;
				}
				else {
					local_70 = (style.gap).Value;
				}
			}
			fVar12 = 24.0;
			if ((style != null) &&(fVar12 = 24.0, 0.0 < style.iconSize.value)) {
				fVar12 = (style.iconSize).Value;
			}
			local_70 = local_70 + fVar12;
		}
		if (node == null) goto label_053845e8;
		pGVar2 = node.layout;
		if (pGVar2 == null) {
			pGVar6 = null;
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		else {
			pGVar6 = pGVar2.maxWidth;
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		fVar12 = 0.0;
		if (pGVar6 != null) {
			pSVar5 = *(String*)((long)pGVar6 + 0x18);
			if (((typeof(GisketchScreenBuilder))._2). cctor_finished_or_no_cctor == 0) {
			}
			bVar3 = String.Equals(pSVar5, "point", 5);
			fVar12 = 0.0;
			if (bVar3) {
				fVar12 = *(float)((long)pGVar6 + 0x10);
			}
		}
		fVar9 = fVar9 + fVar9;
		fVar12 = (fVar12 - local_70) - fVar9;
		bVar3 = ((Object)text != null);
		if ((((0.0 < fVar12) && (bVar3)) && (style != null)) &&(fVar12 < local_68.x)) {
			pSVar5 = style.name;
			bVar3 = GisketchScreenBuilder.IsBrushButtonStyle(pSVar5);
			if (bVar3) {
				if (text == null) goto label_053845e8;
				text.fontSize = (fVar12 / local_68.x) * text.m_fontSize ;
				pSVar5 = text.get_text() ;
				local_68 = (Vector2)text.GetPreferredValues(pSVar5) ;
			}
		}
		pGVar2 = node.layout;
		if (pGVar2 == null) {
			pGVar6 = null;
			if (style == null) goto label_053843e2;
	label_05384286: ;
			pGVar7 = style.height;
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		else {
			pGVar6 = pGVar2.height;
			if (style != null) goto label_05384286;
	label_053843e2: ;
			pGVar7 = null;
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (pGVar6 != null) {
			bVar3 = String.IsNullOrEmpty(pGVar6.unit);
			if (!bVar3) {
				pGVar7 = pGVar6;
			}
		}
		fVar12 = local_68.y + fVar9;
		if (pGVar7 != null) {
			pSVar5 = pGVar7.unit;
			bVar3 = String.Equals(pSVar5, "point", 5);
			if (bVar3) {
				fVar12 = pGVar7.value;
			}
		}
		pGVar6 = null;
		bVar3 = ((Object)text == null);
		fVar10 = local_68.x + local_70 + fVar9;
		if (hasIcon) {
			fVar11 = fVar12;
			if (!bVar3) goto label_053843c1;
	label_05384398: ;
			pGVar2 = node.layout;
			fVar10 = fVar11;
		}
		else {
			fVar11 = fVar10;
			if (bVar3) goto label_05384398;
	label_053843c1: ;
			pGVar2 = node.layout;
		}
		pGVar7 = null;
		if (pGVar2 != null) {
			pGVar7 = pGVar2.width;
			pGVar6 = pGVar2.minWidth;
		}
		if (style == null) {
			pGVar8 = null;
		}
		else {
			pGVar8 = style.width;
		}
		if (pGVar7 != null) {
			bVar3 = String.IsNullOrEmpty(pGVar7.unit);
			if (!bVar3) {
				pGVar8 = pGVar7;
			}
		}
		fVar11 = fVar10;
		if (pGVar8 != null) {
			pSVar5 = pGVar8.unit;
			bVar3 = String.Equals(pSVar5, "point", 5);
			if (bVar3) {
				fVar11 = pGVar8.value;
			}
		}
		if (pUVar4 != null) {
			pUVar4.set_preferredWidth(fVar11);
			fVar11 = fVar10;
			if (pGVar6 != null) {
				pSVar5 = pGVar6.unit;
				bVar3 = String.Equals(pSVar5, "point", 5);
				if (bVar3) {
					fVar11 = pGVar6.value;
				}
			}
			if (fVar10 <= fVar11) {
				fVar10 = fVar11;
			}
			pUVar4.set_minWidth(fVar10);
			pUVar4.set_preferredHeight(fVar12);
			__this = go.GetComponent<GisketchButtonWidthMeasure>();
			if ((__this != null) ||(__this = go.AddComponent<GisketchButtonWidthMeasure>(), __this != null)) {
				__this.Setup(fVar11, fVar9 + local_70);
				return;
			}
		}
	label_053845e8: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x52845F0", Offset = "0x52835F0", VA = "0x52845F0")]
	private static void AllowButtonTextClipping(GameObject go, TextMeshProUGUI text, float minWidth)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$AllowButtonTextClipping): clean
		bool bVar1;
		LayoutElement pUVar2;
		GisketchButtonWidthMeasure __this;
		float fVar3;

		bVar1 = ((Object)text != null);
		if (bVar1) {
			if (text == null) goto label_0538476b;
			text.enableWordWrapping = false;
			text.overflowMode = 1;
		}
		if (go != null) {
			pUVar2 = go.GetComponent<LayoutElement>() ;
			if (pUVar2 == null) {
				pUVar2 = go.AddComponent<LayoutElement>();
				if (pUVar2 == null) goto label_0538476b;
			}
			fVar3 = 0.0;
			if (0.0 <= minWidth) {
				fVar3 = minWidth;
			}
			pUVar2.set_minWidth(fVar3);
			pUVar2.set_preferredWidth(fVar3);
			__this = go.GetComponent<GisketchButtonWidthMeasure>();
			bVar1 = ((Object)__this != null);
			if (!bVar1) {
				return;
			}
			if (__this != null) {
				__this.Setup(minWidth, 0.0);
				return;
			}
		}
	label_0538476b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x5283D10", Offset = "0x5282D10", VA = "0x5283D10")]
	private static TextAlignmentOptions ButtonTextAlignment(GisketchStyleDefinition style, bool hasIcon)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ButtonTextAlignment): clean
		String a;
		bool bVar1;
		int iVar2;

		if (!hasIcon) {
			if (style != null) {
				a = style.textAlignment;
				bVar1 = String.Equals(a, "left", 5);
				if (bVar1) {
					return 0x1001;
				}
			}
		}
		return iVar2;
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x5286270", Offset = "0x5285270", VA = "0x5286270")]
	private static TextAlignmentOptions TextAlignment(GisketchStyleDefinition style)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$TextAlignment): clean
		String pSVar1;
		bool bVar2;

		if (style != null) {
			pSVar1 = style.textAlignment;
			bVar2 = String.Equals(pSVar1, "right", 5);
			if (bVar2) {
				return 0x1004;
			}
			pSVar1 = style.textAlignment;
			bVar2 = String.Equals(pSVar1, "center", 5);
			if (bVar2) {
				return 0x202;
			}
		}
		return 0x1001;
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x5284770", Offset = "0x5283770", VA = "0x5284770")]
	private static float PointLength(GisketchLength length, float fallback)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$PointLength): clean
		String a;
		bool bVar1;

		if (length != null) {
			a = length.unit;
			bVar1 = String.Equals(a, "point", 5);
			if (bVar1) {
			}
		}
		return fallback;
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x5282F50", Offset = "0x5281F50", VA = "0x5282F50")]
	private static void AddFocusRing(GameObject go, GisketchTheme theme, bool visible = true)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$AddFocusRing): clean
		GisketchFocusRing __this;
		Color UVar1;

		if (go != null) {
			__this = go.AddComponent<GisketchFocusRing>();
			if (theme != null) {
				UVar1.b = 1.0;
				UVar1.a = 1.0;
				UVar1.r = 1.0;
				UVar1.g = 1.0;
				UVar1 = theme.GetColor("primary", UVar1);
				UVar1 = theme.GetColor("focusRing", UVar1);
				if (__this != null) {
					__this.Setup(UVar1, 3.0, 5.0, 14.0, visible);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x52863D0", Offset = "0x52853D0", VA = "0x52863D0")]
	private static RectTransform BuildButtonContent(RectTransform parent, GisketchStyleDefinition style)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildButtonContent): clean
		RectTransform pUVar1;
		RectTransform pUStack_18;

		pUStack_18 = null;
		pUVar1 = GisketchScreenBuilder.BuildButtonContent(parent, style, false, null, ref pUStack_18);
		return pUVar1;
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x5283020", Offset = "0x5282020", VA = "0x5283020")]
	private static RectTransform BuildButtonContent(RectTransform parent, GisketchStyleDefinition style, bool reveal, Sprite maskSprite, out RectTransform mask)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildButtonContent): 3 lines keep C-only constructs
		String a;
		HorizontalOrVerticalLayoutGroup __this;
		Il2CppType handle;
		bool bVar1;
		Type[] components;
		Type obj;
		object pIVar2;
		GameObject __this_00;
		Transform __this_01;
		RectTransform rect;
		HorizontalLayoutGroup __this_02;
		RectOffset __this_03;
		MethodInfo pMVar3;
		int value;
		MethodInfo method_00;
		float fVar4;
		double x;
		double dVar5;
		Il2CppMethodPointer local_38;

		pMVar3 = (MethodInfo)maskSprite;
		*mask = null;
		if (reveal) {
			parent = GisketchScreenBuilder.BuildBrushRevealMask(parent, maskSprite, mask);
		}
		components = (Type[])new Type[1];
		handle = TypeRef_UnityEngine_RectTransform;
		obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) {
	label_05383377: ;
			throw new NullReferenceException();
		}
		if ((obj != null) &&(pIVar2 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class), pIVar2 == null)) {
			pIVar2 = new ArrayTypeMismatchException();
			throw pIVar2;
		}
		if ((int)components.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		components[0] = obj;
		__this_00 = new GameObject("AoTTG Button Content", components);
		if ((__this_00 == null) ||(__this_01 = __this_00.transform, __this_01 == null)) goto label_05383377;
		__this_01.SetParent((Transform)parent, false);
		pMVar3 = MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform;
		rect = __this_00.GetComponent<RectTransform>();
		GisketchScreenBuilder.Stretch(rect);
		__this_02 = __this_00.AddComponent<HorizontalLayoutGroup>();
		if (style == null) {
			value = 4;
			__this = null;
		}
		else {
			a = style.textAlignment;
			bVar1 = String.Equals(a, "left", 5);
			value = 4 - (uint)bVar1;
			__this = (HorizontalOrVerticalLayoutGroup)__this_02;
		}
		if (__this_02 == null) goto label_05383377;
		__this_02.childAlignment = value;
		__this_02.childControlWidth = true;
		__this_02.childControlHeight = true;
		__this_02.childForceExpandWidth = false;
		__this_02.childForceExpandHeight = false;
		if (style == null) {
			pMVar3 = null;
			__this_02.spacing = 6.0;
			__this = (HorizontalOrVerticalLayoutGroup)__this_02;
		}
		else {
			if (style.gap.hasValue == false) {
				fVar4 = 6.0;
			}
			else {
				fVar4 = (style.gap).Value;
			}
			if (__this == null) goto label_05383377;
			pMVar3 = null;
			__this.spacing = fVar4;
			if (style.paddingX.hasValue != false) {
				fVar4 = style.paddingX.value;
				goto joined_r0x05383366;
			}
			if (style.padding.hasValue != false) {
				fVar4 = style.padding.value;
				goto joined_r0x05383366;
			}
		}
		fVar4 = 16.0;
	joined_r0x05383366: ;
		x = (double)fVar4;
		method_00 = (MethodInfo)&local_38;
		dVar5 = modf(x, (double)method_00, pMVar3);
		if (0.0 <= fVar4) {
			if ((dVar5 != 0.5) || (NAN(dVar5))) {
				local_38 = (Il2CppMethodPointer)floor(x + 0.5, method_00);
			}
			else if (((long)(double)local_38 & 1U) != 0) {
				local_38 = (Il2CppMethodPointer)((double)local_38 + 1.0);
			}
		}
		else if ((dVar5 != -0.5) || (NAN(dVar5))) {
			local_38 = (Il2CppMethodPointer)ceil(x + -0.5, method_00);
		}
		else if (((long)(double)local_38 & 1U) != 0) {
			local_38 = (Il2CppMethodPointer)((double)local_38 + -1.0);
		}
		__this_03 = new RectOffset((int)(double)local_38, (int)(double)local_38, 0, 0);
		__this.padding = __this_03;
		return rect;
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x5286430", Offset = "0x5285430", VA = "0x5286430")]
	private static RectTransform BuildBrushRevealMask(RectTransform parent, Sprite maskSprite, out RectTransform mask)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildBrushRevealMask): 2 lines keep C-only constructs
		Il2CppType handle;
		Type[] components;
		Type obj;
		object pIVar1;
		GameObject __this;
		Transform __this_00;
		MethodInfo method_00;
		Image __this_01;
		Mask __this_02;

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
			__this = new GameObject("AoTTG Brush Reveal Mask", components);
			if (__this != null) {
				__this_00 = __this.transform;
				if (__this_00 != null) {
					__this_00.SetParent((Transform)parent, false);
					method_00 = (MethodInfo)__this.GetComponent<RectTransform>();
					*mask = (RectTransform)method_00;
					GisketchScreenBuilder.Stretch(*mask);
					__this_01 = __this.AddComponent<Image>();
					if (__this_01 != null) {
						__this_01.sprite = maskSprite;
						__this_01.type = 1;
						__this_01.set_raycastTarget(false);
						__this_02 = __this.AddComponent<Mask>();
						if (__this_02 != null) {
							__this_02.showMaskGraphic = false;
							__this_02.enabled = false;
							return *mask;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x52818D0", Offset = "0x52808D0", VA = "0x52818D0")]
	private static void BuildDropdown(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildDropdown): 10 lines keep C-only constructs
		AottgChoiceControl* targetAddress;
		GisketchLayoutDefinition* targetAddress_00;
		uint uVar1;
		String pSVar2;
		String[] options;
		UnityEvent pUVar3;
		bool bVar4;
		GisketchScreenBuilder.c__DisplayClass19_0 __this;
		GisketchLayoutDefinition pGVar5;
		Transform pUVar6;
		GameObject __this_00;
		GameObject arrow;
		AottgChoiceControl pGVar7;
		TextMeshProUGUI label;
		GisketchButtonSound pGVar8;
		AottgChoiceButton pGVar9;
		UnityAction pUVar10;
		Button pUVar11;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchScreenBuilder.c__DisplayClass19_0));
		__this = new GisketchScreenBuilder.c__DisplayClass19_0();
		if (node != null) {
			targetAddress_00 = &node.layout;
			pGVar5 = node.layout;
			pGVar5 = GisketchScreenBuilder.ChoiceLayout(pGVar5);
			*targetAddress_00 = pGVar5;
			if (go != null) {
				pUVar6 = go.transform;
				__this_00 = GisketchScreenBuilder.ChoicePart(pUVar6, node, "buttonQuiet", null, context);
				pUVar6 = go.transform;
				bVar4 = String.IsNullOrEmpty(node.choiceArrowStyle);
				if (bVar4) {
					uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
					pSVar2 = "buttonPrimary";
				}
				else {
					uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
					pSVar2 = node.choiceArrowStyle;
				}
				if (uVar1 == 0) {
				}
				arrow = GisketchScreenBuilder.ChoicePart(pUVar6, node, pSVar2, "down", context);
				pGVar7 = go.AddComponent<AottgChoiceControl>();
				if (__this != null) {
					targetAddress = &__this.control;
					__this.control = pGVar7;
					if (__this_00 != null) {
						pGVar7 = __this.control;
						pSVar2 = node.value;
						options = node.options;
						label = __this_00.GetComponentInChildren<TextMeshProUGUI>();
						if ((context != null) &&(pGVar7 != null)) {
							pGVar7.Setup(node, pSVar2, options, label, node.maxVisibleItems, arrow, context.Actions, context.Localizer);
							pGVar8 = go.AddComponent<GisketchButtonSound>();
							__this.sound = pGVar8;
							pGVar9 = GisketchScreenBuilder.ChoiceButton(go, context.Theme, __this.control, false) ;
							if (pGVar9 != null) {
								pUVar3 = (UnityEvent)pGVar9.m_OnClick;
								pUVar10 = new UnityAction((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass19_0_BuildDropdown_b__0);
								if (pUVar3 != null) {
									pUVar3.AddListener(pUVar10);
									pUVar11 = GisketchScreenBuilder.ChoicePartButton(__this_00, node.action);
									if (pUVar11 != null) {
										pUVar3 = (UnityEvent)pUVar11.m_OnClick;
										pGVar7 = *targetAddress;
										pUVar10 = new UnityAction((object)pGVar7, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_AottgChoiceControl_Open);
										if (pUVar3 != null) {
											pUVar3.AddListener(pUVar10);
											pUVar11 = GisketchScreenBuilder.ChoicePartButton(arrow, node.action);
											if (pUVar11 != null) {
												pUVar3 = (UnityEvent)pUVar11.m_OnClick;
												pGVar7 = *targetAddress;
												pUVar10 = new UnityAction((object)pGVar7, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_AottgChoiceControl_Open);
												if (pUVar3 != null) {
													pUVar3.AddListener(pUVar10);
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x5281C80", Offset = "0x5280C80", VA = "0x5281C80")]
	private static void BuildSelect(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildSelect): 18 lines keep C-only constructs
		AottgChoiceControl* targetAddress;
		GisketchLayoutDefinition* targetAddress_00;
		String value;
		String[] options;
		UnityEvent pUVar1;
		bool bVar2;
		GisketchScreenBuilder.c__DisplayClass20_0 __this;
		GisketchLayoutDefinition pGVar3;
		Transform pUVar4;
		GameObject go_00;
		GameObject __this_00;
		GameObject go_01;
		AottgChoiceControl pGVar5;
		TextMeshProUGUI label;
		GisketchButtonSound pGVar6;
		AottgChoiceButton pGVar7;
		UnityAction pUVar8;
		Button pUVar9;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchScreenBuilder.c__DisplayClass20_0));
		__this = new GisketchScreenBuilder.c__DisplayClass20_0();
		if (node != null) {
			targetAddress_00 = &node.layout;
			pGVar3 = node.layout;
			pGVar3 = GisketchScreenBuilder.ChoiceLayout(pGVar3);
			*targetAddress_00 = pGVar3;
			if (go != null) {
				pUVar4 = go.transform;
				go_00 = GisketchScreenBuilder.ChoicePart(pUVar4, node, "buttonPrimary", "left", context);
				pUVar4 = go.transform;
				__this_00 = GisketchScreenBuilder.ChoicePart(pUVar4, node, "buttonQuiet", null, context);
				pUVar4 = go.transform;
				go_01 = GisketchScreenBuilder.ChoicePart(pUVar4, node, "buttonPrimary", "right", context);
				pGVar5 = go.AddComponent<AottgChoiceControl>();
				if (__this != null) {
					targetAddress = &__this.control;
					__this.control = pGVar5;
					if (__this_00 != null) {
						pGVar5 = __this.control;
						value = node.value;
						options = node.options;
						label = __this_00.GetComponentInChildren<TextMeshProUGUI>();
						if ((context != null) &&(pGVar5 != null)) {
							pGVar5.Setup(node, value, options, label, node.maxVisibleItems, null, context.Actions, context.Localizer);
							pGVar6 = go.AddComponent<GisketchButtonSound>();
							__this.sound = pGVar6;
							pGVar7 = GisketchScreenBuilder.ChoiceButton(go, context.Theme, __this.control, true);
							if (pGVar7 != null) {
								pUVar1 = (UnityEvent)pGVar7.m_OnClick;
								pUVar8 = new UnityAction((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass20_0_BuildSelect_b__0);
								if (pUVar1 != null) {
									pUVar1.AddListener(pUVar8);
									pUVar9 = GisketchScreenBuilder.ChoicePartButton(go_00, node.action);
									if (*targetAddress != null) {
										bVar2 = (*targetAddress).CanStep;
										if (pUVar9 != null) {
											pUVar9.interactable = bVar2;
											if (*targetAddress != null) {
												bVar2 = (*targetAddress).CanStep;
												AottgChoiceOptions.ApplyDisabledArrowVisual(go_00, bVar2);
												pUVar1 = (UnityEvent)pUVar9.m_OnClick;
												pUVar8 = new UnityAction((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass20_0_BuildSelect_b__1);
												if (pUVar1 != null) {
													pUVar1.AddListener(pUVar8);
													pUVar9 = GisketchScreenBuilder.ChoicePartButton(__this_00, node.action);
													if (pUVar9 != null) {
														pUVar1 = (UnityEvent)pUVar9.m_OnClick;
														pGVar5 = *targetAddress;
														pUVar8 = new UnityAction((object)pGVar5, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_AottgChoiceControl_Open);
														if (pUVar1 != null) {
															pUVar1.AddListener(pUVar8);
															pUVar9 = GisketchScreenBuilder.ChoicePartButton(go_01, node.action);
															if (*targetAddress != null) {
																bVar2 = (*targetAddress).CanStep;
																if (pUVar9 != null) {
																	pUVar9.interactable = bVar2;
																	if (*targetAddress != null) {
																		bVar2 = (*targetAddress).CanStep;
																		AottgChoiceOptions.ApplyDisabledArrowVisual(go_01, bVar2);
																		pUVar1 = (UnityEvent)pUVar9.m_OnClick;
																		pUVar8 = new UnityAction((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass20_0_BuildSelect_b__2);
																		if (pUVar1 != null) {
																			pUVar1.AddListener(pUVar8);
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x5287230", Offset = "0x5286230", VA = "0x5287230")]
	private static AottgChoiceButton ChoiceButton(GameObject go, GisketchTheme theme, AottgChoiceControl control, bool selectMode)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ChoiceButton): 2 lines keep C-only constructs
		Image value;
		AottgChoiceButton __this;
		GisketchFocusRing __this_00;
		Color UVar1;

		if ((go != null) &&(value = go.AddComponent<Image>(), value != null)) {
			value.set_color((Color)ZEXT816(0));
			value.set_raycastTarget(true);
			__this = go.AddComponent<AottgChoiceButton>();
			if (__this != null) {
				__this.Setup(control, selectMode);
				__this.targetGraphic = (Graphic)value;
				__this.transition = 0;
				__this.navigation = (Navigation)ZEXT840(3);
				go.AddComponent<GisketchDisabledSelectableOpacity>();
				__this_00 = go.AddComponent<GisketchFocusRing>();
				if (theme != null) {
					UVar1.b = 1.0;
					UVar1.a = 1.0;
					UVar1.r = 1.0;
					UVar1.g = 1.0;
					UVar1 = theme.GetColor("primary", UVar1);
					UVar1 = theme.GetColor("focusRing", UVar1);
					if (__this_00 != null) {
						__this_00.Setup(UVar1, 3.0, 5.0, 14.0, true);
						return __this;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x52867D0", Offset = "0x52857D0", VA = "0x52867D0")]
	private static GameObject ChoicePart(Transform parent, GisketchNodeDefinition owner, string styleName, string icon, GisketchBuildContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ChoicePart): 35 lines keep C-only constructs
		uint uVar1;
		String pSVar2;
		GisketchTheme theme;
		GisketchLayoutDefinition pGVar3;
		Il2CppType pIVar4;
		bool bVar5;
		GisketchNodeDefinition node;
		GisketchStyleDefinition style;
		Type[] pSVar6;
		Type pSVar7;
		object pIVar8;
		GameObject __this;
		Transform pUVar9;
		String* ppSVar10;
		GameObject __this_00;
		RectTransform pUVar11;
		TextMeshProUGUI text;
		GisketchButtonRelief __this_01;
		RectMask2D pressMask;
		FlexLayout flex;
		Nullable<float> pSVar13;
		int value;
		uint uVar14;
		uint uVar15;
		GisketchLength pGVar16;
		float fVar17;
		float fVar18;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		float fVar19;
		Vector4 UVar20;
		RectTransform local_b0;
		byte[] local_a8 = new byte[16];
		Image local_90;
		String local_88;
		Nullable<float> local_80;
		byte[] local_78 = new byte[16];
		RectTransform local_60;
		float local_58;
		uint uStack_54;
		uint uStack_50;
		uint uStack_4c;
		byte[] local_48 = new byte[16];

		local_a8._0_8_ = context;
		local_b0 = null;
		local_80.hasValue = false;
		local_80._1_3_ = 0;
		local_80.value = 0.0;
		node = GisketchScreenBuilder.ButtonNode(owner, styleName, icon);
		if (((local_a8._0_8_ == 0) || (node == null)) ||(*(GisketchTheme*)(local_a8._0_8_ + 0x18) ==null)) goto label_053871ed;
		style = (*(GisketchTheme*)(local_a8._0_8_ + 0x18)).GetStyle(node.style);
		pSVar2 = node.id;
		pSVar6 = (Type[])new Type[1];
		pIVar4 = TypeRef_UnityEngine_RectTransform;
		pSVar7 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar4);
		if (pSVar6 == null) goto label_053871ed;
		if ((pSVar7 != null) &&(pIVar8 = il2cpp_vm_Object_IsInst((object)pSVar7, (((pSVar6.obj).klass)._1).element_class), pIVar8 == null)) goto label_05387215;
		local_88 = icon;
		if ((int)pSVar6.Length == 0) goto label_05387210;
		pSVar6[0] = pSVar7;
		__this = new GameObject(pSVar2, pSVar6);
		if ((__this == null) ||(pUVar9 = __this.transform, pUVar9 == null)) goto label_053871ed;
		pUVar9.SetParent(parent, false);
		local_b0 = null;
		if (style == null) {
			fVar17 = 0.0;
			local_78 = ZEXT816(0);
		}
		else {
			if (*(long)(local_a8._0_8_ + 0x18) == 0) goto label_053871ed;
			fVar17 = style.relief.value * *(float)(*(long)(local_a8._0_8_ + 0x18) + 0x28);
			local_78 = ZEXT416((uint)fVar17);
		}
		uStack_54 = 0;
		uStack_50 = 0;
		uStack_4c = 0;
		if (Il2CppMethodInitialized_0753e7b4 == false) {
			Il2CppMethodInitialized_0753e7b4 = true;
			fVar17 = (float)local_78._0_4_;
			uStack_54 = local_78._4_4_;
			uStack_50 = local_78._8_4_;
			uStack_4c = local_78._12_4_;
		}
		local_58 = ABS(fVar17);
		uStack_54 = uStack_54 & 0x7fffffff;
		uStack_50 = uStack_50 & 0x7fffffff;
		uStack_4c = uStack_4c & 0x7fffffff;
		if (local_58 <= 0.0) {
			local_58 = 0.0;
		}
		local_58 = local_58 * 1e-06;
		fVar19 = Mathf.Epsilon * 8.0;
		fVar18 = local_58;
		if (local_58 <= fVar19) {
			fVar18 = fVar19;
		}
		local_48 = ZEXT416((uint)ABS(0.0 - fVar17));
		if (fVar18 <= ABS(0.0 - fVar17)) {
			if ((typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor == 0) {
				fVar17 = (float)local_78._0_4_;
			}
			local_90 = GisketchScreenBuilder.BuildButtonFace(__this, style, (GisketchBuildContext)local_a8._0_8_, fVar17, ref local_b0);
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
			pUVar11 = local_b0;
		}
		else {
			if (style == null) {
				ppSVar10 = &"primary";
			}
			else {
				ppSVar10 = &style.background;
			}
			theme = *(GisketchTheme*)(local_a8._0_8_ + 0x18);
			pSVar2 = *ppSVar10;
			pUVar11 = null;
			local_90 = GisketchScreenBuilder.ApplyImage(__this, style, theme, pSVar2, false);
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar5 = ((Object)pUVar11 != null);
		if (bVar5) {
			pUVar11 = local_b0;
		}
		else {
			pUVar11 = __this.GetComponent<RectTransform>();
		}
		bVar5 = String.IsNullOrEmpty(node.text);
		uVar15 = 1;
		uVar14 = 1;
		if (bVar5) {
			bVar5 = String.IsNullOrEmpty(node.textKey);
			uVar14 = (uint)!bVar5;
			if (node.hasIcon == false) goto label_05387000;
	label_05386bd5: ;
			if (uVar14 == 0) goto label_05386bdd;
	label_05387019: ;
			local_60 = null;
			pUVar11 = GisketchScreenBuilder.BuildButtonContent(pUVar11, style, false, null, ref local_60);
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (node.hasIcon != false) goto label_05386bd5;
	label_05387000: ;
			bVar5 = String.IsNullOrEmpty(node.icon);
			uVar15 = (uint)!bVar5;
			if ((uVar15 & uVar14) != 0) goto label_05387019;
	label_05386bdd: ;
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		GisketchScreenBuilder.BuildButtonIcon(node, pUVar11, style, (GisketchBuildContext)local_a8._0_8_, SUB41(uVar14, 0));
		if (uVar14 == 0) {
			text = null;
		}
		else {
			pSVar6 = (Type[])new Type[1];
			pIVar4 = TypeRef_UnityEngine_RectTransform;
			pSVar7 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar4);
			if (pSVar6 == null) goto label_053871ed;
			if ((pSVar7 != null) &&(pIVar8 = il2cpp_vm_Object_IsInst((object)pSVar7, (((pSVar6.obj).klass)._1).element_class), pIVar8 == null)) {
	label_05387215: ;
				pIVar8 = new ArrayTypeMismatchException();
				throw pIVar8;
			}
			if ((int)pSVar6.Length == 0) {
	label_05387210: ;
				throw new IndexOutOfRangeException();
			}
			pSVar6[0] = pSVar7;
			__this_00 = new GameObject("AoTTG Button Label", pSVar6);
			if ((__this_00 == null) ||(pUVar9 = __this_00.transform, pUVar9 == null)) goto label_053871ed;
			pUVar9.SetParent((Transform)pUVar11, false);
			if (uVar15 == 0) {
				pUVar11 = __this_00.GetComponent<RectTransform>() ;
				GisketchScreenBuilder.Stretch(pUVar11);
			}
			text = __this_00.AddComponent<TextMeshProUGUI>();
			GisketchScreenBuilder.ApplyText(text, node, style, (GisketchBuildContext)local_a8._0_8_);
			value = 0x1001;
			if (uVar15 == 0) {
				if (style != null) {
					pSVar2 = style.textAlignment;
					bVar5 = String.Equals(pSVar2, "left", 5);
					if (bVar5) goto label_05386e05;
				}
				value = 0x202;
			}
	label_05386e05: ;
			if (text == null) goto label_053871ed;
			text.alignment = value;
			text.enableWordWrapping = false;
			text.overflowMode = 1;
			bVar5 = String.IsNullOrEmpty(local_88);
			if (bVar5) {
				UVar20 = text.get_margin();
				local_a8._8_4_ = extraout_XMM0_Dc;
				local_a8._0_8_ = UVar20._0_8_;
				local_a8._12_4_ = extraout_XMM0_Dd;
				UVar20 = text.get_margin();
				UVar20.z = 12.0;
				UVar20.y = (float)local_a8._4_4_;
				UVar20.x = 12.0;
				text.set_margin(UVar20);
				GisketchHoverMarqueeText.Setup(__this, text, true);
			}
		}
		fVar18 = Mathf.Epsilon * 8.0;
		fVar17 = local_58;
		if (local_58 <= fVar18) {
			fVar17 = fVar18;
		}
		if (fVar17 <= (float)local_48._0_4_) {
			__this_01 = __this.AddComponent<GisketchButtonRelief>();
			pUVar11 = local_b0;
			pressMask = __this.GetComponent<RectMask2D>();
			if (style == null) {
				local_80.hasValue = false;
				local_80._1_3_ = 0;
				local_80.value = 0.0;
				pSVar13 = &local_80;
			}
			else {
				pSVar13 = &style.pressDepth;
			}
			if (__this_01 == null) {
	label_053871ed: ;
				throw new NullReferenceException();
			}
			__this_01.Setup(local_90, pUVar11, (float)local_78._0_4_, pressMask, (System_Nullable_float__o)*pSVar13);
		}
		GisketchScreenBuilder.ApplyButtonMeasure(__this, node, text, style, SUB41(uVar15, 0));
		bVar5 = String.IsNullOrEmpty(local_88);
		if (bVar5) {
			pGVar3 = node.layout;
			if (pGVar3 == null) {
				pGVar16 = null;
				uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
			}
			else {
				pGVar16 = pGVar3.minWidth;
				uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			fVar17 = 0.0;
			if (pGVar16 != null) {
				pSVar2 = pGVar16.unit;
				if (((typeof(GisketchScreenBuilder))._2). cctor_finished_or_no_cctor == 0) {
				}
				bVar5 = String.Equals(pSVar2, "point", 5);
				fVar17 = 0.0;
				if (bVar5) {
					fVar17 = pGVar16.value;
				}
			}
			GisketchScreenBuilder.AllowButtonTextClipping(__this, text, fVar17);
		}
		flex = __this.AddComponent<FlexLayout>();
		pGVar3 = node.layout;
		GisketchScreenBuilder.ApplyFlex(flex, pGVar3, style);
		GisketchScreenBuilder.ApplyAspectRatio(__this, style);
		GisketchScreenBuilder.ApplyLayoutOffset(__this, node.layout);
		return __this;
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x5287480", Offset = "0x5286480", VA = "0x5287480")]
	private static Button ChoicePartButton(GameObject go, string action)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ChoicePartButton): 2 lines keep C-only constructs
		UnityEvent __this;
		GisketchButtonSound @object;
		Button __this_00;
		Image value;
		UnityAction __this_01;

		if (go != null) {
			@object = go.AddComponent<GisketchButtonSound>();
			if (@object != null) {
				@object._action = action;
				__this_00 = go.AddComponent<Button>();
				if (__this_00 != null) {
					__this_00.transition = 0;
					__this_00.navigation = (Navigation)ZEXT840(0);
					value = go.GetComponentInChildren<Image>();
					__this_00.targetGraphic = (Graphic)value;
					go.AddComponent<GisketchDisabledSelectableOpacity>();
					__this = (UnityEvent)__this_00.m_OnClick;
					__this_01 = new UnityAction((object)@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_GisketchButtonSound_PlayClick);
					if (__this != null) {
						__this.AddListener(__this_01);
						return __this_00;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x5287620", Offset = "0x5286620", VA = "0x5287620")]
	private static GisketchNodeDefinition ButtonNode(GisketchNodeDefinition owner, string style, string icon)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ButtonNode): clean
		bool bVar1;
		bool bVar2;
		GisketchNodeDefinition __this;
		String pSVar3;
		GisketchLayoutDefinition __this_00;
		GisketchLength __this_01;
		String pSVar4;

		bVar1 = String.IsNullOrEmpty(icon);
		__this = new GisketchNodeDefinition();
		if (__this != null) {
			__this.type = "Button";
			if (owner != null) {
				pSVar3 = icon;
				if (bVar1) {
					pSVar3 = "value";
				}
				pSVar4 = null;
				pSVar3 = String.Concat(owner.id, "-", pSVar3);
				__this.id = pSVar3;
				if (bVar1) {
					pSVar4 = owner.value;
				}
				__this.text = pSVar4;
				__this.icon = icon;
				__this_00 = null;
				bVar2 = String.IsNullOrEmpty(icon);
				__this.hasIcon = !bVar2;
				__this.style = style;
				if (!bVar1) {
	label_053877fd: ;
					__this.layout = __this_00;
					return __this;
				}
				__this_00 = new GisketchLayoutDefinition();
				if (__this_00 != null) {
					__this_00.grow = 1.0;
					__this_01 = new GisketchLength();
					if (__this_01 != null) {
						__this_01.value = 180.0;
						__this_01.unit = "point";
						__this_00.minWidth = __this_01;
						goto label_053877fd;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x5287B00", Offset = "0x5286B00", VA = "0x5287B00")]
	private static GisketchLayoutDefinition RowLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$RowLayout): clean
		GisketchLayoutDefinition __this;
		GisketchLength __this_00;

		__this = new GisketchLayoutDefinition();
		if (__this != null) {
			__this.direction = "Row";
			__this.alignItems = "Center";
			__this.gap = 0.0;
			__this_00 = new GisketchLength();
			if (__this_00 != null) {
				__this_00.value = 100.0;
				__this_00.unit = "percent";
				__this.width = __this_00;
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x5286690", Offset = "0x5285690", VA = "0x5286690")]
	private static GisketchLayoutDefinition ChoiceLayout(GisketchLayoutDefinition layout)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ChoiceLayout): 4 lines keep C-only constructs
		String* targetAddress;
		GisketchLength* targetAddress_00;
		bool bVar1;
		GisketchLength __this;

		if (layout == null) {
			layout = GisketchScreenBuilder.RowLayout();
			if (layout == null) goto label_053867c0;
		}
		bVar1 = String.IsNullOrEmpty(layout.direction);
		if (bVar1) {
			layout.direction = "Row";
		}
		bVar1 = String.IsNullOrEmpty(layout.alignItems);
		if (bVar1) {
			targetAddress = &layout.alignItems;
			*targetAddress = "Center";
		}
		if (layout.width == null) {
			__this = new GisketchLength();
			if (__this == null) {
	label_053867c0: ;
				throw new NullReferenceException();
			}
			targetAddress_00 = &layout.width;
			__this.value = 100.0;
			__this.unit = "percent";
			*targetAddress_00 = __this;
		}
		return layout;
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x527F970", Offset = "0x527E970", VA = "0x527F970")]
	private static void BuildColorSwatch(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildColorSwatch): 12 lines keep C-only constructs
		uint uVar1;
		GisketchTheme pGVar2;
		String pSVar3;
		String* ppSVar4;
		long plVar5;
		object pIVar6;
		GisketchLength pGVar7;
		bool bVar8;
		float fVar9;
		float in_XMM1_Da;
		Color UStack_68;
		float fStack_58;
		ulong uStack_48;

		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (context == null) goto label_0537fcb6;
		ppSVar4 = &style.background;
		bVar8 = false;
		if (style == null) {
			ppSVar4 = &"surface";
		}
		else {
			bVar8 = style.reliefGradient.value != false;
		}
		pGVar2 = context.Theme;
		pSVar3 = *ppSVar4;
		plVar5 = (long)GisketchScreenBuilder.ApplyImage(go, style, pGVar2, pSVar3);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if ((node == null) ||(uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48), plVar5 == null)) goto label_0537fcb6;
		pSVar3 = node.value;
		uStack_48 = (**(code*)(*plVar5 + 0x298))(plVar5,*(ulong)(*plVar5 + 0x2a0));
		UStack_68.r = 0.0;
		UStack_68.g = 0.0;
		UStack_68.b = 0.0;
		UStack_68.a = 0.0;
		fStack_58 = in_XMM1_Da;
		bVar8 = ColorUtility.TryParseHtmlString(pSVar3, ref UStack_68);
		if (bVar8) {
			fVar9 = UStack_68.r;
			fStack_58 = UStack_68.b;
		}
		else {
			fVar9 = (float)uStack_48;
		}
		(**(code*)(*plVar5 + 0x2a8))(fVar9,fStack_58,plVar5,*(ulong)(*plVar5 + 0x2b0));
		if (go == null) goto label_0537fcb6;
		pIVar6 = go.GetComponent<LayoutElement>();
		if (pIVar6 == null) {
			pIVar6 = go.AddComponent<LayoutElement>() ;
			if (style == null) goto label_0537fc86;
	label_0537faea: ;
			pGVar7 = style.width;
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (style != null) goto label_0537faea;
	label_0537fc86: ;
			pGVar7 = null;
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		fVar9 = 44.0;
		if (pGVar7 != null) {
			pSVar3 = pGVar7.unit;
			if (((typeof(GisketchScreenBuilder))._2). cctor_finished_or_no_cctor == 0) {
			}
			bVar8 = String.Equals(pSVar3, "point", 5);
			fVar9 = 44.0;
			if (bVar8) {
				fVar9 = pGVar7.value;
			}
		}
		if (pIVar6 != null) {
			(*pIVar6.klass.vtable[0x24].methodPtr)(fVar9,pIVar6,pIVar6.klass.vtable[0x24].method);
			if (style == null) {
				pGVar7 = null;
				uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
			}
			else {
				pGVar7 = style.height;
				uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			fVar9 = 44.0;
			if (pGVar7 != null) {
				pSVar3 = pGVar7.unit;
				if (((typeof(GisketchScreenBuilder))._2). cctor_finished_or_no_cctor == 0) {
				}
				bVar8 = String.Equals(pSVar3, "point", 5);
				fVar9 = 44.0;
				if (bVar8) {
					fVar9 = pGVar7.value;
				}
			}
			(*pIVar6.klass.vtable[0x26].methodPtr)(fVar9,pIVar6,pIVar6.klass.vtable[0x26].method);
			return;
		}
	label_0537fcb6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x5287C10", Offset = "0x5286C10", VA = "0x5287C10")]
	private static Color ParseColor(string value, Color fallback)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ParseColor): 14 lines keep C-only constructs
		Color UVar1;
		bool bVar2;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		Color UVar3;
		Color UStack_38;
		byte[] auStack_28 = new byte[16];
		byte[] auStack_18 = new byte[16];

		auStack_18._8_4_ = in_XMM1_Dc;
		auStack_18._0_8_ = fallback._8_8_;
		auStack_18._12_4_ = in_XMM1_Dd;
		auStack_28._8_4_ = in_XMM0_Dc;
		auStack_28._0_8_ = fallback._0_8_;
		auStack_28._12_4_ = in_XMM0_Dd;
		UStack_38.r = 0.0;
		UStack_38.g = 0.0;
		UStack_38.b = 0.0;
		UStack_38.a = 0.0;
		bVar2 = ColorUtility.TryParseHtmlString(value, ref UStack_38);
		if (bVar2) {
			UVar1.b = UStack_38.b;
			UVar1.a = UStack_38.a;
			UVar1.r = UStack_38.r;
			UVar1.g = UStack_38.g;
			return (Color)UVar1;
		}
		UVar3.b = (float)auStack_18._0_4_;
		UVar3.a = (float)auStack_18._4_4_;
		UVar3.r = (float)auStack_28._0_4_;
		UVar3.g = (float)auStack_28._4_4_;
		return (Color)UVar3;
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x527D180", Offset = "0x527C180", VA = "0x527D180")]
	private static void BuildIcon(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildIcon): clean
		uint uVar1;
		GisketchTheme __this;
		bool bVar2;
		bool bVar3;
		Image __this_00;
		Sprite value;
		LayoutElement pUVar4;
		GisketchLength pGVar5;
		String pSVar6;
		float fVar7;
		Color UVar8;

		if (((go != null) &&(__this_00 = go.AddComponent<Image>(), node != null)) &&(value = GisketchIconLoader.Load(node.icon), __this_00 != null)) {
			__this_00.sprite = value;
			__this_00.preserveAspect = true;
			bVar2 = String.IsNullOrEmpty(node.tooltip);
			bVar3 = true;
			if (bVar2) {
				bVar3 = String.IsNullOrEmpty(node.tooltipKey);
				bVar3 = !bVar3;
			}
			__this_00.set_raycastTarget(bVar3);
			if (context != null) {
				__this = context.Theme;
				if (style == null) {
					pSVar6 = null;
				}
				else {
					pSVar6 = style.textColor;
				}
				if (__this != null) {
					pGVar5 = null;
					UVar8.b = 1.0;
					UVar8.a = 1.0;
					UVar8.r = 1.0;
					UVar8.g = 1.0;
					UVar8 = __this.GetColor("text", UVar8);
					UVar8 = __this.GetColor(pSVar6, UVar8);
					__this_00.set_color(UVar8);
					pUVar4 = go.AddComponent<LayoutElement>();
					if (style != null) {
						pGVar5 = style.width;
					}
					fVar7 = 24.0;
					if (pGVar5 != null) {
						pSVar6 = pGVar5.unit;
						if (((typeof(GisketchScreenBuilder))._2). cctor_finished_or_no_cctor == 0) {
						}
						bVar2 = String.Equals(pSVar6, "point", 5);
						fVar7 = 24.0;
						if (bVar2) {
							fVar7 = pGVar5.value;
						}
					}
					if (pUVar4 != null) {
						pUVar4.set_preferredWidth(fVar7);
						if (style == null) {
							pGVar5 = null;
							uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor ;
						}
						else {
							pGVar5 = style.height;
							uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor ;
						}
						if (uVar1 == 0) {
						}
						fVar7 = 24.0;
						if (pGVar5 != null) {
							pSVar6 = pGVar5.unit;
							if (((typeof(GisketchScreenBuilder))._2). cctor_finished_or_no_cctor == 0) {
							}
							bVar2 = String.Equals(pSVar6, "point", 5);
							fVar7 = 24.0;
							if (bVar2) {
								fVar7 = pGVar5.value;
							}
						}
						pUVar4.set_preferredHeight(fVar7);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x5283720", Offset = "0x5282720", VA = "0x5283720")]
	private static Image BuildButtonIcon(GisketchNodeDefinition node, RectTransform parent, GisketchStyleDefinition style, GisketchBuildContext context, bool hasText)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildButtonIcon): 8 lines keep C-only constructs
		GisketchTheme __this;
		Vector2 value;
		Vector2 value_00;
		Vector2 value_01;
		Il2CppType handle;
		bool bVar1;
		Type[] components;
		Type obj;
		object pIVar2;
		GameObject __this_00;
		Transform __this_01;
		RectTransform __this_02;
		LayoutElement pUVar3;
		Image __this_03;
		Sprite value_02;
		String pSVar4;
		float fVar5;
		Color UVar6;
		Color UVar7;

		if (node == null) goto label_05383be5;
		if ((node.hasIcon == false) &&(bVar1 = String.IsNullOrEmpty(node.icon))) {
			return null;
		}
		bVar1 = String.IsNullOrEmpty(node.icon);
		if (!bVar1) {
			bVar1 = ((Object)parent == null);
			if (!bVar1) {
				components = (Type[])new Type[1];
				handle = TypeRef_UnityEngine_RectTransform;
				obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
				if (components != null) {
					if ((obj != null) &&(pIVar2 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class), pIVar2 == null)) {
						pIVar2 = new ArrayTypeMismatchException();
						throw pIVar2;
					}
					if ((int)components.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					components[0] = obj;
					__this_00 = new GameObject("AoTTG Button Icon", components);
					if ((__this_00 != null) &&(__this_01 = __this_00.transform, __this_01 != null)) {
						__this_01.SetParent((Transform)parent, false);
						__this_02 = __this_00.GetComponent<RectTransform>();
						if (__this_02 != null) {
							fVar5 = 0.5;
							if (hasText) {
								fVar5 = 0.0;
							}
							value.y = 0.5;
							value.x = fVar5;
							__this_02.anchorMin = value;
							value_01.y = 0.5;
							value_01.x = fVar5;
							__this_02.anchorMax = value_01;
							__this_02.pivot = (Vector2)0x3f0000003f000000;
							fVar5 = 24.0;
							if ((style != null) &&(fVar5 = 24.0, 0.0 < style.iconSize.value)) {
								fVar5 = (style.iconSize).Value;
							}
							value_00.y = fVar5;
							value_00.x = fVar5;
							__this_02.sizeDelta = value_00;
							__this_02.anchoredPosition = (Vector2)(Vector2.zeroVector);
							pUVar3 = __this_00.AddComponent<LayoutElement>();
							if (pUVar3 != null) {
								pUVar3.set_preferredWidth(fVar5);
								pUVar3.set_preferredHeight(fVar5);
								__this_03 = __this_00.AddComponent<Image>();
								value_02 = GisketchIconLoader.Load(node.icon);
								if (__this_03 != null) {
									__this_03.sprite = value_02;
									__this_03.preserveAspect = true;
									__this_03.set_raycastTarget(false);
									pSVar4 = node.icon;
									if (pSVar4 != null) {
										bVar1 = pSVar4.StartsWith("Icons/");
										fVar5 = (float)g_data_01005870;
										UVar6.g = g_data_01005870._4_4_;
										if (bVar1) {
											UVar6._8_8_ = g_data_01005870;
										}
										else {
											pSVar4 = node.icon;
											if (pSVar4 == null) goto label_05383be5;
											bVar1 = pSVar4.StartsWith("UI/");
											fVar5 = (float)g_data_01005870;
											UVar6.g = g_data_01005870._4_4_;
											UVar6._8_8_ = g_data_01005870;
											if (!bVar1) {
												if (context == null) goto label_05383be5;
												__this = context.Theme;
												if (style == null) {
													pSVar4 = null;
												}
												else {
													pSVar4 = style.textColor;
												}
												if (__this == null) goto label_05383be5;
												UVar6.b = 1.0;
												UVar6.a = 1.0;
												UVar6.r = 1.0;
												UVar6.g = 1.0;
												UVar6 = __this.GetColor(pSVar4, UVar6);
												UVar6._8_8_ = UVar6._8_8_;
												fVar5 = UVar6.r;
												UVar6.g = UVar6.g;
											}
											if (__this_03 == null) goto label_05383be5;
										}
										UVar7.g = UVar6.g;
										UVar7.r = fVar5;
										UVar7.b = (float)(int)UVar6._8_8_;
										UVar7.a = (float)(int)((ulong)UVar6._8_8_ >> 0x20);
										__this_03.set_color(UVar7);
										return __this_03;
									}
								}
							}
						}
					}
				}
	label_05383be5: ;
				throw new NullReferenceException();
			}
		}
		return null;
	}

	[Token(Token = "0x6000567")]
	[Address(RVA = "0x5286340", Offset = "0x5285340", VA = "0x5286340")]
	private static float ButtonIconSize(GisketchStyleDefinition style)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ButtonIconSize): clean
		float fVar1;

		if ((style != null) &&(0.0 < style.iconSize.value)) {
			return fVar1;
		}
		return 24.0;
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x52826C0", Offset = "0x52816C0", VA = "0x52826C0")]
	private static Image BuildSpriteImage(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, bool preserveAspect, bool raycastTarget)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildSpriteImage): 16 lines keep C-only constructs
		Nullable<bool> SVar1;
		uint uVar2;
		Nullable<float> stainScaleOverride;
		GisketchTheme theme;
		bool bVar3;
		object pIVar4;
		String pSVar5;
		Sprite pUVar6;
		Il2CppClass pIVar7;
		MethodInfo pMVar8;
		Mask __this;
		GisketchSidePanelOutlineSkew __this_00;
		object pIVar9;
		Transform __this_01;
		MethodInfo method;
		float fVar10;
		uint uVar11;
		Color UVar12;

		method = param_4;
		if (param_1 == null) goto label_05382e8e;
		pIVar4 = param_1.GetComponent<Image>();
		if (pIVar4 == null) {
			pIVar4 = param_1.AddComponent<Image>();
		}
		pSVar5 = GisketchScreenBuilder.SpritePath(param_2, param_3, (GisketchBuildContext)param_4);
		pUVar6 = GisketchSpriteLoader.Load(pSVar5);
		if (pIVar4 == null) goto label_05382e8e;
		pIVar4.sprite = pUVar6;
		pIVar4.preserveAspect = param_5;
		pMVar8 = (MethodInfo)(param_6 & 0xff);
		(*pIVar4.klass.vtable[0x19].methodPtr)(pIVar4,pMVar8,pIVar4.klass.vtable[0x19].method);
		bVar3 = GisketchScreenBuilder.IsBrushSidePanelTexture(param_3);
		if (bVar3) {
			pIVar4.type = 2;
		}
		if (param_3 == null) {
			pIVar7 = pIVar4.klass;
			pMVar8 = pIVar7.vtable[0x17].method;
			uVar11 = 0x3f800000;
	label_05382a73: ;
			(*pIVar7.vtable[0x17].methodPtr)(uVar11,pIVar4);
		}
		else {
			bVar3 = String.IsNullOrEmpty(param_3.background);
			fVar10 = 1.0;
			if (!bVar3) {
				pSVar5 = param_3.background;
				method = null;
				bVar3 = String.Equals(pSVar5, "clear", 5);
				fVar10 = 1.0;
				if (!bVar3) {
					if ((param_4 == null) ||((GisketchTheme)param_4.name ==null)) goto label_05382e8e;
					UVar12.b = 1.0;
					UVar12.a = 1.0;
					UVar12.r = 1.0;
					UVar12.g = 1.0;
					UVar12 = (param_4.name).GetColor(param_3.background, UVar12);
					fVar10 = UVar12.r;
				}
			}
			pMVar8 = pIVar4.klass.vtable[0x17].method;
			(*pIVar4.klass.vtable[0x17].methodPtr)(fVar10,pIVar4);
			if (param_3 != null) {
				pSVar5 = param_3.name;
				method = null;
				pMVar8 = (MethodInfo *)"brushSidePanelContentFooterTexture";
				bVar3 = String.Equals(pSVar5, "brushSidePanelContentFooterTexture", 5);
				if (bVar3) {
					uVar11 = (*pIVar4.klass.vtable[0x16].methodPtr)(pIVar4,pIVar4.klass.vtable[0x16].method);
					(*pIVar4.klass.vtable[0x16].methodPtr)(pIVar4,pIVar4.klass.vtable[0x16].method);
					(*pIVar4.klass.vtable[0x16].methodPtr)(pIVar4,pIVar4.klass.vtable[0x16].method);
					if ((param_4 == null) ||((GisketchTheme)param_4.name ==null)) goto label_05382e8e;
					method = (MethodInfo)(ulong)((((GisketchTheme)param_4.name).fields). _IsDarkMode_k__BackingField == false);
					pIVar7 = pIVar4.klass;
					pMVar8 = pIVar7.vtable[0x17].method;
					goto label_05382a73;
				}
			}
		}
		if ((typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor == 0) {
			bVar3 = GisketchScreenBuilder.IsUntintedSpriteStyle(param_3);
			if (!bVar3) goto label_05382a91;
	label_05382aac: ;
			(*pIVar4.klass.vtable[0x17].methodPtr)(pIVar4);
			if (param_3 == null) goto label_05382c56;
	label_05382ad3: ;
			if (param_3.textured.value == false) goto label_05382c56;
			pSVar5 = param_3.name;
			bVar3 = String.Equals(pSVar5, "mainMenuBrushButton", 5);
			method = (MethodInfo)0x1;
			if (!bVar3) {
				pSVar5 = param_3.name;
				bVar3 = String.Equals(pSVar5, "brushSidePanelHeader", 5);
				if (!bVar3) {
					pSVar5 = param_3.name;
					bVar3 = String.Equals(pSVar5, "brushSidePanelBrushButton", 5);
					if (!bVar3) {
						pSVar5 = param_3.name;
						bVar3 = String.Equals(pSVar5, "creditsCategoryBrush", 5);
						method = (MethodInfo)(ulong)bVar3;
					}
				}
			}
			pSVar5 = param_3.name;
			bVar3 = String.Equals(pSVar5, "brushSidePanel", 5);
			SVar1 = param_3.worn;
			stainScaleOverride = param_3.wornStainScale;
			pMVar8 = (MethodInfo)GisketchSurfaceMaterial.Instance(0.0, false, 0xff < (ushort)SVar1 || SVar1.hasValue == false, (Nullable<float>)stainScaleOverride, SUB81(method, 0), bVar3);
			GisketchSurfaceMaterialOwner.Assign(pIVar4, pMVar8);
			uVar2 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		else {
			bVar3 = GisketchScreenBuilder.IsUntintedSpriteStyle(param_3);
			if (bVar3) goto label_05382aac;
	label_05382a91: ;
			if (param_3 != null) goto label_05382ad3;
	label_05382c56: ;
			pMVar8 = null;
			(*pIVar4.klass.vtable[0x21].methodPtr)(pIVar4,0,pIVar4.klass.vtable[0x21].method);
			uVar2 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		bVar3 = GisketchScreenBuilder.IsUntintedSpriteStyle(param_3);
		if (bVar3) {
			(*pIVar4.klass.vtable[0x21].methodPtr)(pIVar4,0,pIVar4.klass.vtable[0x21].method);
		}
		if (param_4 == null) {
	label_05382e8e: ;
			throw new NullReferenceException();
		}
		theme = (GisketchTheme)param_4.name;
		if (((typeof(GisketchScreenBuilder))._2). cctor_finished_or_no_cctor == 0) {
		}
		GisketchScreenBuilder.ApplyShadow(param_1, param_3, theme);
		if (param_3 != null) {
			pSVar5 = param_3.name;
			bVar3 = String.Equals(pSVar5, "brushSidePanel", 5);
			if (bVar3) {
				__this = (Mask)param_1.GetComponent<Mask>();
				if ((__this == null) &&(__this = (Mask)param_1.AddComponent<Mask>(), __this == null)) goto label_05382e8e;
				__this.showMaskGraphic = true;
			}
			pSVar5 = param_3.name;
			bVar3 = String.Equals(pSVar5, "brushSidePanelOutline", 5);
			if (bVar3) {
				__this_00 = (GisketchSidePanelOutlineSkew)param_1.AddComponent<GisketchSidePanelOutlineSkew>();
				if (__this_00 == null) goto label_05382e8e;
				__this_00.Setup(54.0);
			}
			pSVar5 = param_3.name;
			bVar3 = String.Equals(pSVar5, "mainMenuLogo", 5);
			if (bVar3) {
				pIVar9 = param_1.AddComponent<GisketchLogoMotionBlur>();
				if (pIVar9 == null) goto label_05382e8e;
				pIVar9.Setup(pIVar4);
			}
			pSVar5 = param_3.name;
			bVar3 = String.Equals(pSVar5, "mainMenuTipBackground", 5);
			if (bVar3) {
				pIVar4.preserveAspect = 0;
				__this_01 = (Transform)UnityEngine_UI_Graphic__get_rectTransform(pIVar4);
				if (__this_01 == null) goto label_05382e8e;
				__this_01.localEulerAngles = (Vector3)ZEXT812(0x4334000000000000);
			}
		}
		return pIVar4;
	}

	[Token(Token = "0x6000569")]
	[Address(RVA = "0x5287C60", Offset = "0x5286C60", VA = "0x5287C60")]
	private static string SpritePath(GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SpritePath): 2 lines keep C-only constructs
		GisketchTheme pGVar1;
		bool bVar2;
		String* ppSVar3;

		if (Il2CppMethodInitialized_07542ad6 == false) {
			Il2CppMethodInitialized_07542ad6 = true;
			if ((typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor != 0) goto label_05387c8a;
	label_05387cca: ;
			bVar2 = GisketchScreenBuilder.IsBrushSidePanelTexture(style);
			if (bVar2) {
	label_05387cdb: ;
				if ((context == null) ||(pGVar1 = context.Theme, pGVar1 == null)) goto label_05387d0a;
				if (pGVar1._IsDarkMode_k__BackingField != false) {
					ppSVar3 = &"GisketchUI/Texture/SeamlessGrungeDark";
					goto label_05387d01;
				}
			}
		}
		else {
			if ((typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor == 0) goto label_05387cca;
	label_05387c8a: ;
			bVar2 = GisketchScreenBuilder.IsBrushSidePanelTexture(style);
			if (bVar2) goto label_05387cdb;
		}
		if (node != null) {
			ppSVar3 = &node.sprite;
	label_05387d01: ;
			return *ppSVar3;
		}
	label_05387d0a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x5287D10", Offset = "0x5286D10", VA = "0x5287D10")]
	private static bool IsBrushSidePanelTexture(GisketchStyleDefinition style)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$IsBrushSidePanelTexture): clean
		String pSVar1;
		bool bVar2;
		bool bVar3;

		if (style == null) {
		}
		else {
			pSVar1 = style.name;
			bVar2 = String.Equals(pSVar1, "brushSidePanelTexture", 5);
			if (!bVar2) {
				pSVar1 = style.name;
				bVar3 = String.Equals(pSVar1, "brushSidePanelContentFooterTexture", 5);
				return bVar3;
			}
		}
		return bVar3;
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x5280800", Offset = "0x527F800", VA = "0x5280800")]
	private static void BuildStandaloneSpriteImage(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildStandaloneSpriteImage): 3 lines keep C-only constructs
		uint uVar1;
		Object pUVar2;
		Sprite __this;
		GisketchLayoutDefinition pGVar3;
		String pSVar4;
		bool bVar5;
		bool bVar6;
		Image pUVar7;
		LayoutElement pUVar8;
		GisketchLength pGVar9;
		GisketchLength pGVar10;
		float fVar11;
		Rect UVar12;
		ulong uStack_48;

		if (Il2CppMethodInitialized_07542ad8 == false) {
			Il2CppMethodInitialized_07542ad8 = true;
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (style != null) {
			pSVar4 = style.name;
			if (((typeof(GisketchScreenBuilder))._2). cctor_finished_or_no_cctor == 0) {
			}
			bVar6 = String.Equals(pSVar4, "profilePreviewBanner", 5);
			if (bVar6) {
				GisketchScreenBuilder.BuildRectTransformCoverSpriteImage(go, node, style, context);
				return;
			}
		}
		bVar6 = false;
		pUVar7 = GisketchScreenBuilder.BuildSpriteImage(go, node, style, context, true, false);
		if (node != null) {
			bVar5 = String.IsNullOrEmpty(node.tooltip);
			bVar6 = true;
			if (bVar5) {
				bVar6 = String.IsNullOrEmpty(node.tooltipKey);
				bVar6 = !bVar6;
			}
		}
		if (pUVar7 == null) goto label_05380d66;
		pUVar7.set_raycastTarget(bVar6);
		if (style == null) {
			pUVar2 = (Object)pUVar7.m_Sprite;
			bVar6 = (pUVar2 == null);
			if (bVar6) {
				return;
			}
		}
		if (go == null) goto label_05380d66;
		pUVar8 = go.GetComponent<LayoutElement>();
		if (pUVar8 == null) {
			pUVar8 = go.AddComponent<LayoutElement>() ;
		}
		pUVar2 = (Object)pUVar7.m_Sprite;
		bVar6 = (pUVar2 != null);
		if (bVar6) {
			__this = pUVar7.m_Sprite;
			if (__this == null) goto label_05380d66;
			UVar12 = __this.rect;
			uStack_48 = UVar12._8_8_;
		}
		else {
			uStack_48 = 0x4280000042800000;
		}
		if (node == null) goto label_05380d66;
		pGVar3 = node.layout;
		if (pGVar3 == null) {
			pGVar9 = null;
			if (style != null) goto label_05380acd;
	label_05380b7d: ;
			pGVar10 = null;
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		else {
			pGVar9 = pGVar3.width;
			if (style == null) goto label_05380b7d;
	label_05380acd: ;
			pGVar10 = style.width;
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (pGVar9 != null) {
			bVar6 = String.IsNullOrEmpty(pGVar9.unit);
			if (!bVar6) {
				pGVar10 = pGVar9;
			}
		}
		fVar11 = (float)uStack_48;
		if (pGVar10 != null) {
			pSVar4 = pGVar10.unit;
			bVar6 = String.Equals(pSVar4, "point", 5);
			if (bVar6) {
				fVar11 = pGVar10.value;
			}
		}
		if (pUVar8 != null) {
			pUVar8.set_preferredWidth(fVar11);
			pGVar3 = node.layout;
			if (pGVar3 == null) {
				pGVar9 = null;
			}
			else {
				pGVar9 = pGVar3.height;
			}
			if (style == null) {
				pGVar10 = null;
				uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
			}
			else {
				pGVar10 = style.height;
				uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			if (pGVar9 != null) {
				bVar6 = String.IsNullOrEmpty(pGVar9.unit);
				if (!bVar6) {
					pGVar10 = pGVar9;
				}
			}
			if (pGVar10 != null) {
				pSVar4 = pGVar10.unit;
				bVar6 = String.Equals(pSVar4, "point", 5);
				if (bVar6) {
					uStack_48._4_4_ = pGVar10.value;
				}
			}
			pUVar8.set_preferredHeight(uStack_48._4_4_);
			if (style != null) {
				pSVar4 = style.name;
				bVar6 = String.Equals(pSVar4, "profileCardBannerImage", 5);
				if (bVar6) {
					go.AddComponent<GisketchSpriteCover>();
					return;
				}
			}
			return;
		}
	label_05380d66: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x5287F90", Offset = "0x5286F90", VA = "0x5287F90")]
	private static void BuildRectTransformCoverSpriteImage(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildRectTransformCoverSpriteImage): 4 lines keep C-only constructs
		uint uVar1;
		Object x;
		Sprite __this;
		GisketchLayoutDefinition pGVar2;
		Il2CppType handle;
		bool bVar3;
		String pSVar4;
		String value;
		Type[] components;
		Type obj;
		object pIVar5;
		GameObject __this_00;
		Transform __this_01;
		Transform parent;
		Image pUVar6;
		LayoutElement pUVar7;
		GisketchLength pGVar8;
		GisketchLength pGVar9;
		float fVar10;
		Rect UVar11;
		ulong local_48;

		if (go == null) goto label_05388463;
		pSVar4 = go.name;
		value = String.Concat(pSVar4, "-cover");
		go.name = value;
		components = (Type[])new Type[1];
		handle = TypeRef_UnityEngine_RectTransform;
		obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) goto label_05388463;
		if ((obj != null) &&(pIVar5 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class), pIVar5 == null)) {
			pIVar5 = new ArrayTypeMismatchException();
			throw pIVar5;
		}
		if ((int)components.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		components[0] = obj;
		__this_00 = new GameObject(pSVar4, components);
		if (__this_00 == null) goto label_05388463;
		__this_01 = __this_00.transform;
		parent = go.transform;
		if (__this_01 == null) goto label_05388463;
		__this_01.SetParent(parent, false);
		pUVar6 = GisketchScreenBuilder.BuildSpriteImage(__this_00, node, style, context, true, false);
		__this_00.AddComponent<GisketchRectTransformSpriteCover>();
		pUVar7 = go.GetComponent<LayoutElement>();
		if (pUVar7 == null) {
			pUVar7 = go.AddComponent<LayoutElement>() ;
		}
		if (pUVar6 == null) goto label_05388463;
		x = (Object)pUVar6.m_Sprite;
		bVar3 = (x != null);
		if (bVar3) {
			__this = pUVar6.m_Sprite;
			if (__this == null) goto label_05388463;
			UVar11 = __this.rect;
			local_48 = UVar11._8_8_;
		}
		else {
			local_48 = 0x4280000042800000;
		}
		if (node == null) goto label_05388463;
		pGVar2 = node.layout;
		if (pGVar2 == null) {
			pGVar8 = null;
			if (style == null) goto label_05388318;
	label_05388275: ;
			pGVar9 = style.width;
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		else {
			pGVar8 = pGVar2.width;
			if (style != null) goto label_05388275;
	label_05388318: ;
			pGVar9 = null;
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (pGVar8 != null) {
			bVar3 = String.IsNullOrEmpty(pGVar8.unit);
			if (!bVar3) {
				pGVar9 = pGVar8;
			}
		}
		fVar10 = (float)local_48;
		if (pGVar9 != null) {
			pSVar4 = pGVar9.unit;
			bVar3 = String.Equals(pSVar4, "point", 5);
			if (bVar3) {
				fVar10 = pGVar9.value;
			}
		}
		if (pUVar7 != null) {
			pUVar7.set_preferredWidth(fVar10);
			pGVar2 = node.layout;
			if (pGVar2 == null) {
				pGVar8 = null;
			}
			else {
				pGVar8 = pGVar2.height;
			}
			if (style == null) {
				pGVar9 = null;
				uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
			}
			else {
				pGVar9 = style.height;
				uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			if (pGVar8 != null) {
				bVar3 = String.IsNullOrEmpty(pGVar8.unit);
				if (!bVar3) {
					pGVar9 = pGVar8;
				}
			}
			if (pGVar9 != null) {
				pSVar4 = pGVar9.unit;
				bVar3 = String.Equals(pSVar4, "point", 5);
				if (bVar3) {
					local_48._4_4_ = pGVar9.value;
				}
			}
			pUVar7.set_preferredHeight(local_48._4_4_);
			return;
		}
	label_05388463: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x5287DD0", Offset = "0x5286DD0", VA = "0x5287DD0")]
	private static bool IsUntintedSpriteStyle(GisketchStyleDefinition style)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$IsUntintedSpriteStyle): clean
		String pSVar1;
		bool bVar2;
		bool bVar3;

		if (style == null) {
		}
		else {
			pSVar1 = style.name;
			bVar2 = String.Equals(pSVar1, "gridPickerThumbnail", 5);
			if (!bVar2) {
				pSVar1 = style.name;
				bVar2 = String.Equals(pSVar1, "profileGridItemThumbnail", 5);
				if (!bVar2) {
					pSVar1 = style.name;
					bVar2 = String.Equals(pSVar1, "profilePreviewBanner", 5);
					if (!bVar2) {
						pSVar1 = style.name;
						bVar3 = String.Equals(pSVar1, "profileCardBannerImage", 5);
						return bVar3;
					}
				}
			}
		}
		return bVar3;
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x5288480", Offset = "0x5287480", VA = "0x5288480")]
	private static bool IsCoverSpriteStyle(GisketchStyleDefinition style)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$IsCoverSpriteStyle): clean
		String a;
		bool bVar1;

		if (style == null) {
			return false;
		}
		a = style.name;
		bVar1 = String.Equals(a, "profileCardBannerImage", 5);
		return bVar1;
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x5287F20", Offset = "0x5286F20", VA = "0x5287F20")]
	private static bool IsRectTransformCoverSpriteStyle(GisketchStyleDefinition style)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$IsRectTransformCoverSpriteStyle): clean
		String a;
		bool bVar1;

		if (style == null) {
			return false;
		}
		a = style.name;
		bVar1 = String.Equals(a, "profilePreviewBanner", 5);
		return bVar1;
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x527EA70", Offset = "0x527DA70", VA = "0x527EA70")]
	private static void BuildInputField(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, bool multiline)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildInputField): 9 lines keep C-only constructs
		GisketchTheme pGVar1;
		GisketchNodeDefinition pGVar2;
		TMP_Text __this;
		IGisketchActionHandler actions;
		uint value;
		bool bVar3;
		bool bVar4;
		int value_00;
		GisketchScreenBuilder.c__DisplayClass41_0 __this_00;
		String* ppSVar5;
		Image value_01;
		TMP_InputField __this_01;
		TMP_InputField.OnValidateInput __this_02;
		TMP_InputField.OnValidateInput pTVar6;
		Transform parent;
		RectTransform value_02;
		TextMeshProUGUI pTVar7;
		GisketchFocusRing __this_03;
		GisketchDebouncedInputAction __this_04;
		int value_03;
		String pSVar8;
		GisketchScreenBuilder.c__DisplayClass41_0 targetAddress;
		float fVar9;
		float fVar10;
		float fVar11;
		Color UVar12;
		Color value_04;
		Color fallback;
		Color value_05;
		Color fallback_00;

		if (Il2CppMethodInitialized_07542add == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_TMP_InputField) ;
			Il2CppMethodInitialized_07542add = true;
		}
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchScreenBuilder.c__DisplayClass41_0));
		__this_00 = new GisketchScreenBuilder.c__DisplayClass41_0();
		if (__this_00 != null) {
			targetAddress = &__this_00.fields;
			__this_00.node = node;
			__this_00.multiline = multiline;
			if (context == null) goto label_0537f115;
			if (style == null) {
				ppSVar5 = &"inputBg";
			}
			else {
				ppSVar5 = &style.background;
			}
			pGVar1 = context.Theme;
			pSVar8 = *ppSVar5;
			value_01 = GisketchScreenBuilder.ApplyImage(go, style, pGVar1, pSVar8, false);
			if (go == null) goto label_0537f115;
			go.AddComponent<GisketchFocusInputSource>();
			bVar4 = Application.isPlaying;
			bVar3 = true;
			if ((bVar4) && (bVar4 = go.activeSelf)) {
				bVar3 = false;
				go.SetActive(false);
			}
			__this_01 = go.AddComponent<TMP_InputField>();
			if (__this_01 == null) goto label_0537f115;
			__this_01.targetGraphic = (Graphic)value_01;
			__this_01.transition = 0;
			__this_01.navigation = (Navigation)ZEXT840(3);
			go.AddComponent<GisketchDisabledSelectableOpacity>();
			value = (uint)__this_00.multiline * 2;
			__this_01.lineType = value;
			pGVar2 = __this_00.node;
			if (pGVar2 == null) goto label_0537f115;
			pSVar8 = pGVar2.inputType;
			value_00 = GisketchScreenBuilder.ContentType(pSVar8);
			__this_01.contentType = value_00;
			if (targetAddress.node == null) goto label_0537f115;
			bVar4 = (targetAddress.node.richText).GetValueOrDefault(true);
			__this_01.richText = bVar4;
			if (targetAddress.node == null) goto label_0537f115;
			value_03 = targetAddress.node.maxCharacters;
			if (value_03 < 1) {
				value_03 = 0;
			}
			__this_01.characterLimit = value_03;
			pTVar6 = __this_01.m_OnValidateInput;
			__this_02 = new TMP_InputField.OnValidateInput((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass41_0_BuildInputField_b__0);
			pTVar6 = (TMP_InputField.OnValidateInput)Delegate.Combine((Delegate)pTVar6, (Delegate)__this_02);
			if ((pTVar6 != null) &&(pTVar6.klass != typeof(TMP_InputField.OnValidateInput))) {
				throw new InvalidCastException();
			}
			__this_01.onValidateInput = pTVar6;
			__this_01.asteriskChar = 0x2022;
			parent = go.transform;
			value_02 = GisketchScreenBuilder.TextArea(parent, style);
			__this_01.textViewport = value_02;
			pTVar7 = GisketchScreenBuilder.Placeholder(__this_01.m_TextViewport, __this_00.node, context, __this_00.multiline);
			__this_01.placeholder = (Graphic)pTVar7;
			pTVar7 = GisketchScreenBuilder.InputText(__this_01.m_TextViewport, __this_00.node, style, context, __this_00.multiline);
			__this_01.textComponent = (TMP_Text)pTVar7;
			__this = __this_01.m_TextComponent;
			if (__this == null) goto label_0537f115;
			__this.richText = __this_01.m_RichText;
			if (targetAddress.node == null) goto label_0537f115;
			pSVar8 = targetAddress.node.value;
			if (pSVar8 == null) {
				pSVar8 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			__this_01.SetTextWithoutNotify(pSVar8);
			__this_01.customCaretColor = true;
			if (style == null) {
				fVar9 = 1.0;
				UVar12.g = 1.0;
				fVar10 = fVar9;
				fVar11 = UVar12.g;
			}
			else {
				pGVar1 = context.Theme;
				if (pGVar1 == null) goto label_0537f115;
				UVar12.b = 1.0;
				UVar12.a = 1.0;
				UVar12.r = 1.0;
				UVar12.g = 1.0;
				UVar12 = pGVar1.GetColor(style.textColor, UVar12);
				fVar9 = UVar12.r;
				UVar12.g = UVar12.g;
				fVar10 = UVar12.b;
				fVar11 = UVar12.a;
			}
			value_04.g = UVar12.g;
			value_04.r = fVar9;
			value_04.a = fVar11;
			value_04.b = fVar10;
			__this_01.caretColor = value_04;
			__this_01.caretWidth = 2;
			pGVar1 = context.Theme;
			if (pGVar1 == null) goto label_0537f115;
			fallback.b = 1.0;
			fallback.a = 1.0;
			fallback.r = 1.0;
			fallback.g = 1.0;
			UVar12 = pGVar1.GetColor("primary", fallback);
			value_05.b = UVar12.b;
			value_05.a = 0.35;
			value_05.r = UVar12.r;
			value_05.g = UVar12.g;
			__this_01.selectionColor = value_05;
			pGVar1 = context.Theme;
			__this_03 = go.AddComponent<GisketchFocusRing>();
			if (pGVar1 == null) goto label_0537f115;
			fallback_00.b = 1.0;
			fallback_00.a = 1.0;
			fallback_00.r = 1.0;
			fallback_00.g = 1.0;
			UVar12 = pGVar1.GetColor("primary", fallback_00);
			UVar12 = pGVar1.GetColor("focusRing", UVar12);
			if (__this_03 == null) goto label_0537f115;
			__this_03.Setup(UVar12, 3.0, 5.0, 14.0, true);
			GisketchScreenBuilder.ApplyInputMeasure(go, style);
			if (targetAddress.node == null) goto label_0537f115;
			bVar4 = String.IsNullOrEmpty(targetAddress.node.action);
			if (bVar4) {
				if (targetAddress.node == null) goto label_0537f115;
				bVar4 = String.IsNullOrEmpty(targetAddress.node.commitAction);
				if (bVar4) goto label_0537f0cb;
			}
			if (context.Actions == null) {
	label_0537f0cb: ;
				if (bVar3) {
					return;
				}
				go.SetActive(true);
				return;
			}
			__this_04 = go.AddComponent<GisketchDebouncedInputAction>();
			pGVar2 = targetAddress.node;
			if (pGVar2 != null) {
				actions = context.Actions;
				fVar9 = (pGVar2.debounceSeconds).GetValueOrDefault(0.2);
				if (__this_04 != null) {
					__this_04.Setup(__this_01, actions, pGVar2, fVar9);
					goto label_0537f0cb;
				}
			}
		}
	label_0537f115: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x52885F0", Offset = "0x52875F0", VA = "0x52885F0")]
	private static RectTransform TextArea(Transform parent, GisketchStyleDefinition style)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$TextArea): 1 lines keep C-only constructs
		Vector2 value;
		Vector2 value_00;
		Il2CppType handle;
		Type[] components;
		Type obj;
		object pIVar1;
		GameObject __this;
		Transform __this_00;
		RectTransform rect;
		float fVar2;

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
			__this = new GameObject("AoTTG Input Text Area", components);
			if (__this != null) {
				__this_00 = __this.transform;
				if (__this_00 != null) {
					__this_00.SetParent(parent, false);
					rect = __this.GetComponent<RectTransform>();
					GisketchScreenBuilder.Stretch(rect);
					fVar2 = 16.0;
					if ((style != null) &&(style.padding.hasValue != false)) {
						fVar2 = (style.padding).Value;
					}
					if (rect != null) {
						value.y = 0.0;
						value.x = fVar2;
						rect.offsetMin = value;
						value_00.y = 0.0;
						value_00.x = -fVar2;
						rect.offsetMax = value_00;
						__this.AddComponent<RectMask2D>();
						return rect;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x52889F0", Offset = "0x52879F0", VA = "0x52889F0")]
	private static TextMeshProUGUI InputText(RectTransform parent, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, bool multiline)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$InputText): 2 lines keep C-only constructs
		GameObject __this;
		TextMeshProUGUI text;
		GisketchNodeDefinition __this_00;
		int value;
		undefined3 in_register_00000081;
		uint uVar1;

		uVar1 = CONCAT31(in_register_00000081, multiline);
		if ((typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor == 0) {
		}
		__this = GisketchScreenBuilder.TextObject("AoTTG Input Text", parent);
		if (__this != null) {
			text = __this.AddComponent<TextMeshProUGUI>();
			__this_00 = new GisketchNodeDefinition();
			if (__this_00 != null) {
				__this_00.text = (String)**(ulong*)(g_data_07556758 + 0xb8);
				if (node != null) {
					__this_00.style = node.style;
					GisketchScreenBuilder.ApplyText(text, __this_00, style, context);
					if (text != null) {
						text.enableWordWrapping = multiline;
						value = 0x1001;
						if (multiline) {
							value = 0x101;
						}
						text.alignment = value;
						text.set_raycastTarget(false);
						return text;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x5288840", Offset = "0x5287840", VA = "0x5288840")]
	private static TextMeshProUGUI Placeholder(RectTransform parent, GisketchNodeDefinition node, GisketchBuildContext context, bool multiline)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$Placeholder): clean
		GisketchTheme __this;
		GameObject __this_00;
		TextMeshProUGUI text;
		GisketchStyleDefinition style;
		GisketchNodeDefinition __this_01;
		int value;

		if ((typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor == 0) {
		}
		__this_00 = GisketchScreenBuilder.TextObject("AoTTG Input Placeholder", parent);
		if (__this_00 != null) {
			text = __this_00.AddComponent<TextMeshProUGUI>();
			if (context != null) {
				__this = context.Theme;
				if (__this != null) {
					style = __this.GetStyle("inputPlaceholder");
					__this_01 = new GisketchNodeDefinition();
					if ((node != null) &&(__this_01 != null)) {
						__this_01.text = node.placeholder;
						__this_01.textKey = node.textKey;
						__this_01.style = "inputPlaceholder";
						GisketchScreenBuilder.ApplyText(text, __this_01, style, context);
						if (text != null) {
							text.enableWordWrapping = true;
							value = 0x1001;
							if (multiline) {
								value = 0x101;
							}
							text.alignment = value;
							text.set_raycastTarget(false);
							return text;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x5288DC0", Offset = "0x5287DC0", VA = "0x5288DC0")]
	private static GameObject TextObject(string name, RectTransform parent)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$TextObject): 1 lines keep C-only constructs
		Il2CppType handle;
		Type[] components;
		Type obj;
		object pIVar1;
		GameObject __this;
		Transform __this_00;
		RectTransform rect;

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
					__this_00.SetParent((Transform)parent, false);
					rect = __this.GetComponent<RectTransform>();
					GisketchScreenBuilder.Stretch(rect);
					return __this;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x52884F0", Offset = "0x52874F0", VA = "0x52884F0")]
	private static TMP_InputField.ContentType ContentType(string type)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ContentType): clean
		bool bVar1;
		int iVar2;

		bVar1 = String.Equals(type, "Integer", 5);
		if (!bVar1) {
			bVar1 = String.Equals(type, "Number", 5);
			if (!bVar1) {
				bVar1 = String.Equals(type, "Password", 5);
				if (!bVar1) {
				}
			}
		}
		return iVar2;
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x5288F50", Offset = "0x5287F50", VA = "0x5288F50")]
	private static char ValidateInput(string type, bool multiline, string text, int charIndex, char addedChar)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ValidateInput): clean
		uint uVar1;
		uint uVar2;
		bool bVar3;
		ushort uVar4;

		if (Il2CppMethodInitialized_07542ae3 == false) {
			Il2CppMethodInitialized_07542ae3 = true;
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (((!multiline) || (0xd < addedChar)) || ((0x2c00U >> (addedChar & 0x1f) & 1) == 0)) {
			bVar3 = Char.IsControl(addedChar);
			if (bVar3) {
				return 0;
			}
		}
		bVar3 = String.Equals(type, "Integer", 5);
		uVar2 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		if (!bVar3) {
			if (uVar2 == 0) {
			}
			bVar3 = String.Equals(type, "Number", 5);
			if (bVar3) {
				uVar4 = GisketchScreenBuilder.ValidateNumber(text, charIndex, addedChar);
				return uVar4;
			}
			return addedChar;
		}
		if (uVar2 == 0) {
		}
		uVar4 = GisketchScreenBuilder.ValidateInteger(text, charIndex, addedChar);
		return uVar4;
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x52890E0", Offset = "0x52880E0", VA = "0x52890E0")]
	private static bool RejectControlCharacter(bool multiline, char addedChar)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$RejectControlCharacter): 2 lines keep C-only constructs
		bool bVar1;
		undefined7 in_register_00000039;

		if ((((int)CONCAT71(in_register_00000039, multiline) != 0) && (addedChar < 0xe)) &&((0x2c00U >> (addedChar & 0x1f) & 1) != 0)) {
			return false;
		}
		if ((g_data_07556750._2).cctor_finished_or_no_cctor == 0) {
			return bVar1;
		}
		return bVar1;
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x5289130", Offset = "0x5288130", VA = "0x5289130")]
	private static char ValidateInteger(string text, int charIndex, char addedChar)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ValidateInteger): clean
		bool bVar1;
		int iVar2;
		ushort uVar3;

		bVar1 = Char.IsDigit(addedChar);
		uVar3 = addedChar;
		if (!bVar1) {
			uVar3 = 0;
			if ((charIndex == 0) && (uVar3 = 0, addedChar == 0x2d)) {
				bVar1 = String.IsNullOrEmpty(text);
				if (!bVar1) {
					if (text == null) {
						throw new NullReferenceException();
					}
					iVar2 = text.IndexOf(0x2d);
					if (-1 < iVar2) {
						return 0;
					}
				}
				uVar3 = 0x2d;
			}
		}
		return uVar3;
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x5289200", Offset = "0x5288200", VA = "0x5289200")]
	private static char ValidateNumber(string text, int charIndex, char addedChar)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ValidateNumber): clean
		bool bVar1;
		int iVar2;
		ushort uVar3;

		bVar1 = Char.IsDigit(addedChar);
		if (bVar1) {
			return addedChar;
		}
		if ((charIndex == 0) && (addedChar == 0x2d)) {
			bVar1 = String.IsNullOrEmpty(text);
			if (bVar1) {
				return 0x2d;
			}
			if (text == null) {
				throw new NullReferenceException();
			}
			iVar2 = text.IndexOf(0x2d);
		}
		else {
			if (addedChar != 0x2e) {
				return 0;
			}
			if (text == null) {
				return 0x2e;
			}
			iVar2 = text.IndexOf(0x2e);
		}
		if (iVar2 < 0) {
			return uVar3;
		}
		return 0;
	}

	[Token(Token = "0x600057A")]
	[Address(RVA = "0x52892E0", Offset = "0x52882E0", VA = "0x52892E0")]
	private static bool IsLeadingMinus(string text, int charIndex, char addedChar)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$IsLeadingMinus): 1 lines keep C-only constructs
		bool bVar1;
		bool bVar2;
		int iVar3;

		if ((charIndex == 0) && (addedChar == 0x2d)) {
			bVar2 = String.IsNullOrEmpty(text);
			if (!bVar2) {
				if (text == null) {
					throw new NullReferenceException();
				}
				iVar3 = text.IndexOf(0x2d);
				bVar1 = SUB41((uint)iVar3 >> 0x1f, 0);
			}
		}
		return bVar1;
	}

	[Token(Token = "0x600057B")]
	[Address(RVA = "0x5288B70", Offset = "0x5287B70", VA = "0x5288B70")]
	private static void ApplyInputMeasure(GameObject go, GisketchStyleDefinition style)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyInputMeasure): clean
		uint uVar1;
		String pSVar2;
		bool bVar3;
		LayoutElement pUVar4;
		GisketchLength pGVar5;
		float fVar6;

		if (go == null) goto label_05388dba;
		pUVar4 = go.GetComponent<LayoutElement>();
		if (pUVar4 == null) {
			pUVar4 = go.AddComponent<LayoutElement>() ;
			if (style != null) goto label_05388be3;
	label_05388d83: ;
			pGVar5 = null;
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (style == null) goto label_05388d83;
	label_05388be3: ;
			pGVar5 = style.width;
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		fVar6 = 280.0;
		if (pGVar5 != null) {
			pSVar2 = pGVar5.unit;
			if (((typeof(GisketchScreenBuilder))._2). cctor_finished_or_no_cctor == 0) {
			}
			bVar3 = String.Equals(pSVar2, "point", 5);
			fVar6 = 280.0;
			if (bVar3) {
				fVar6 = pGVar5.value;
			}
		}
		if (pUVar4 != null) {
			pUVar4.set_preferredWidth(fVar6);
			if (style == null) {
				pGVar5 = null;
				uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
			}
			else {
				pGVar5 = style.height;
				uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			fVar6 = 58.0;
			if (pGVar5 != null) {
				pSVar2 = pGVar5.unit;
				if (((typeof(GisketchScreenBuilder))._2). cctor_finished_or_no_cctor == 0) {
				}
				bVar3 = String.Equals(pSVar2, "point", 5);
				fVar6 = 58.0;
				if (bVar3) {
					fVar6 = pGVar5.value;
				}
			}
			pUVar4.set_preferredHeight(fVar6);
			return;
		}
	label_05388dba: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600057C")]
	[Address(RVA = "0x5284800", Offset = "0x5283800", VA = "0x5284800")]
	private static void ApplyFlex(FlexLayout flex, GisketchLayoutDefinition layout, GisketchStyleDefinition style)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyFlex): 40 lines keep C-only constructs
		uint uVar1;
		FlexLayout __this;
		bool bVar2;
		bool bVar3;
		int iVar4;
		FlexLayout __this_00;
		YGValue GVar5;
		GameObject go;
		LayoutElement x;
		YGValue GVar6;
		YGValue fallback;
		YGValue fallback_00;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		MethodInfo extraout_RDX_03;
		MethodInfo extraout_RDX_04;
		MethodInfo extraout_RDX_05;
		MethodInfo extraout_RDX_06;
		MethodInfo extraout_RDX_07;
		MethodInfo extraout_RDX_08;
		MethodInfo extraout_RDX_09;
		MethodInfo extraout_RDX_10;
		MethodInfo extraout_RDX_11;
		MethodInfo extraout_RDX_12;
		MethodInfo extraout_RDX_13;
		MethodInfo extraout_RDX_14;
		MethodInfo extraout_RDX_15;
		MethodInfo extraout_RDX_16;
		MethodInfo extraout_RDX_17;
		MethodInfo extraout_RDX_18;
		MethodInfo pMVar7;
		GisketchLength pGVar8;
		String pSVar9;
		GisketchLength pGVar10;
		uint uVar11;
		float fVar12;
		float fVar13;
		float value;
		float local_68;

		pSVar9 = null;
		__this_00 = null;
		if (layout == null) {
			__this = null;
			__this_00 = flex;
		}
		else {
			pSVar9 = layout.direction;
			__this = flex;
		}
		iVar4 = GisketchScreenBuilder.ParseEnum<FlexDirection>(pSVar9, 0);
		if (flex == null) goto label_053854aa;
		pSVar9 = null;
		flex.FlexDirection = iVar4;
		if (layout != null) {
			pSVar9 = layout.justify;
		}
		iVar4 = GisketchScreenBuilder.ParseEnum<Justify>(pSVar9, 0);
		flex.JustifyContent = iVar4;
		if (layout == null) {
			bVar2 = false;
			uVar11 = GisketchScreenBuilder.ParseEnum<Align>(null, 4);
			if (__this_00 == null) goto label_053854aa;
			pMVar7 = (MethodInfo)(ulong)uVar11;
			__this_00.AlignItems = uVar11;
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		else {
			pSVar9 = layout.alignItems;
			iVar4 = GisketchScreenBuilder.ParseEnum<Align>(pSVar9, 4);
			__this.AlignItems = iVar4;
			pSVar9 = layout.alignSelf;
			pMVar7 = (MethodInfo *)"Absolute";
			bVar2 = String.Equals(pSVar9, "Absolute", 5);
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar3 = GisketchScreenBuilder.IsFullscreenAbsolute(layout);
		if (bVar2 == false) {
			if (layout == null) {
				pSVar9 = null;
				uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
			}
			else {
				pSVar9 = layout.alignSelf;
				uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			iVar4 = GisketchScreenBuilder.ParseEnum<Align>(pSVar9, 0);
			if (flex == null) goto label_053854aa;
			flex.AlignSelf = iVar4;
			flex.PositionType = 1;
			if (layout != null) goto label_05384ab2;
	label_05385109: ;
			pSVar9 = null;
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		else {
			flex.AlignSelf = 0;
			flex.PositionType = 2;
			GVar5 = ((YGValue)0.0);
			flex.PositionLeft = GVar5;
			GVar5 = ((YGValue)0.0);
			flex.PositionTop = GVar5;
			if (bVar3) {
				GVar5 = ((YGValue)0.0);
				flex.PositionRight = GVar5;
				GVar5 = ((YGValue)0.0);
				flex.PositionBottom = GVar5;
				go = flex.gameObject;
				GisketchFullscreenStretch.Mark(go);
			}
			if (layout == null) goto label_05385109;
	label_05384ab2: ;
			pSVar9 = layout.wrap;
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		iVar4 = GisketchScreenBuilder.ParseEnum<Wrap>(pSVar9, 0);
		flex.FlexWrap = iVar4;
		x = flex.GetComponent<LayoutElement>();
		bVar2 = ((Object)x != null);
		if (bVar2) {
			if (x == null) goto label_053854aa;
			fVar12 = x.get_preferredWidth();
			if (fVar12 <= 0.0) goto label_05384b9b;
			fVar12 = x.get_preferredWidth();
			GVar6 = (YGValue)((YGValue)fVar12);
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
	label_05384b9b: ;
			GVar6 = (YGValue.Auto);
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar2 = ((Object)x != null);
		if (bVar2) {
			if (x == null) goto label_053854aa;
			fVar12 = x.get_preferredHeight();
			if (fVar12 <= 0.0) goto label_05384c5e;
			fVar12 = x.get_preferredHeight();
			fallback = (YGValue)((YGValue)fVar12);
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
	label_05384c5e: ;
			fallback = (YGValue.Auto);
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar2 = ((Object)x != null);
		pMVar7 = extraout_RDX;
		if (bVar2) {
			if (x == null) goto label_053854aa;
			fVar12 = x.get_minWidth();
			pMVar7 = extraout_RDX_00;
			if (fVar12 <= 0.0) goto label_05384e0b;
			fVar12 = x.get_minWidth();
			fallback_00 = (YGValue)((YGValue)fVar12);
			pMVar7 = extraout_RDX_01;
			if (!bVar3) goto label_05384d30;
	label_05384e43: ;
			flex.Width = (YGValue)(YGValue.Auto);
			GVar6 = (YGValue.Auto);
		}
		else {
	label_05384e0b: ;
			if ((typeof(YGValue)._2).cctor_finished_or_no_cctor == 0) {
				pMVar7 = extraout_RDX_07;
			}
			fallback_00 = (YGValue.Undefined);
			if (bVar3) goto label_05384e43;
	label_05384d30: ;
			if (layout == null) {
				pGVar8 = null;
				if (style != null) goto label_05384d4e;
	label_0538544e: ;
				pGVar10 = null;
				uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
			}
			else {
				pGVar8 = layout.width;
				if (style == null) goto label_0538544e;
	label_05384d4e: ;
				pGVar10 = style.width;
				uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pMVar7 = extraout_RDX_02;
			}
			if ((pGVar8 != null) &&(bVar2 = String.IsNullOrEmpty(pGVar8.unit), pMVar7 = extraout_RDX_03, !bVar2)) {
				pGVar10 = pGVar8;
			}
			GVar5 = GisketchScreenBuilder.Length(pGVar10, (YGValue)GVar6);
			pGVar8 = null;
			flex.Width = GVar5;
			if (layout != null) {
				pGVar8 = layout.height;
			}
			if (style == null) {
				pGVar10 = null;
				uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
			}
			else {
				pGVar10 = style.height;
				uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
			}
			pMVar7 = extraout_RDX_04;
			if (uVar1 == 0) {
				pMVar7 = extraout_RDX_05;
			}
			if ((pGVar8 != null) &&(bVar2 = String.IsNullOrEmpty(pGVar8.unit), pMVar7 = extraout_RDX_06, !bVar2)) {
				pGVar10 = pGVar8;
			}
			GVar6 = (YGValue)GisketchScreenBuilder.Length(pGVar10, (YGValue)fallback);
		}
		pGVar8 = null;
		flex.Height = (YGValue)GVar6;
		if (layout != null) {
			pGVar8 = layout.minWidth;
		}
		pMVar7 = extraout_RDX_08;
		if ((typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor == 0) {
			pMVar7 = extraout_RDX_09;
		}
		GVar5 = GisketchScreenBuilder.Length(pGVar8, (YGValue)fallback_00);
		pGVar8 = null;
		flex.MinWidth = GVar5;
		if (layout != null) {
			pGVar8 = layout.minHeight;
		}
		pMVar7 = extraout_RDX_10;
		if ((typeof(YGValue)._2).cctor_finished_or_no_cctor == 0) {
			pMVar7 = extraout_RDX_11;
		}
		GVar6 = (YGValue.Undefined);
		if ((typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor == 0) {
			pMVar7 = extraout_RDX_12;
		}
		GVar5 = GisketchScreenBuilder.Length(pGVar8, (YGValue)GVar6);
		pGVar8 = null;
		flex.MinHeight = GVar5;
		if (layout != null) {
			pGVar8 = layout.maxWidth;
		}
		pMVar7 = extraout_RDX_13;
		if ((typeof(YGValue)._2).cctor_finished_or_no_cctor == 0) {
			pMVar7 = extraout_RDX_14;
		}
		GVar6 = (YGValue.Undefined);
		if ((typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor == 0) {
			pMVar7 = extraout_RDX_15;
		}
		GVar5 = GisketchScreenBuilder.Length(pGVar8, (YGValue)GVar6);
		pGVar8 = null;
		flex.MaxWidth = GVar5;
		if (layout != null) {
			pGVar8 = layout.maxHeight;
		}
		pMVar7 = extraout_RDX_16;
		if ((typeof(YGValue)._2).cctor_finished_or_no_cctor == 0) {
			pMVar7 = extraout_RDX_17;
		}
		GVar6 = (YGValue.Undefined);
		if ((typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor == 0) {
			pMVar7 = extraout_RDX_18;
		}
		GVar5 = GisketchScreenBuilder.Length(pGVar8, (YGValue)GVar6);
		flex.MaxHeight = GVar5;
		if (layout == null) {
			if (__this_00 == null) goto label_053854aa;
			flex.FlexGrow = 0.0;
			__this_00.FlexShrink = 1.0;
	joined_r0x05385158: ;
			fVar12 = 0.0;
			if ((style != null) &&(fVar12 = 0.0, style.gap.hasValue != false)) {
				fVar12 = (style.gap).Value;
			}
			if (layout != null) goto label_0538517c;
			if (__this_00 == null) {
	label_053854aa: ;
				throw new NullReferenceException();
			}
			__this_00.GapColumn = fVar12;
			__this_00.GapRow = fVar12;
	joined_r0x0538520e: ;
			fVar12 = 0.0;
			if ((style != null) &&(fVar12 = 0.0, style.padding.hasValue != false)) {
				fVar12 = (style.padding).Value;
			}
			if (layout != null) goto label_05385232;
	label_05385243: ;
			fVar13 = fVar12;
			if ((style != null) &&(style.paddingX.hasValue != false)) {
				fVar13 = (style.paddingX).Value;
			}
			if (layout != null) goto label_0538527c;
	label_05385293: ;
			if ((style != null) &&(style.paddingY.hasValue != false)) {
				fVar12 = (style.paddingY).Value;
			}
			value = fVar13;
			local_68 = fVar12;
			if (layout == null) goto label_053852e6;
		}
		else {
			__this.FlexGrow = layout.grow;
			__this.FlexShrink = layout.shrink;
			fVar12 = layout.gap;
			if (fVar12 <= 0.0) goto joined_r0x05385158;
	label_0538517c: ;
			fVar13 = layout.gapColumn;
			uVar11 = -(uint)(0.0 < fVar13);
			flex.GapColumn = (float)(~uVar11 & (uint)fVar12 | (uint)fVar13 & uVar11);
			fVar13 = layout.gapRow;
			uVar11 = -(uint)(0.0 < fVar13);
			__this.GapRow = (float)(~uVar11 & (uint)fVar12 | (uint)fVar13 & uVar11);
			fVar12 = layout.padding;
			if (fVar12 <= 0.0) goto joined_r0x0538520e;
	label_05385232: ;
			fVar13 = layout.paddingX;
			if (fVar13 <= 0.0) goto label_05385243;
	label_0538527c: ;
			local_68 = layout.paddingY;
			if (local_68 <= 0.0) goto label_05385293;
		}
		value = layout.paddingLeft;
		if (value <= 0.0) {
			value = fVar13;
		}
	label_053852e6: ;
		GVar5 = ((YGValue)value);
		flex.PaddingLeft = GVar5;
		if (layout == null) {
			uVar1 = (typeof(YGValue)._2).cctor_finished_or_no_cctor;
		}
		else {
			fVar12 = layout.paddingRight;
			if (0.0 < fVar12) {
				fVar13 = fVar12;
			}
			uVar1 = (typeof(YGValue)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		GVar5 = ((YGValue)fVar13);
		flex.PaddingRight = GVar5;
		fVar12 = local_68;
		if ((layout != null) &&(fVar13 = layout.paddingTop, 0.0 < fVar13)) {
			fVar12 = fVar13;
		}
		GVar5 = ((YGValue)fVar12);
		flex.PaddingTop = GVar5;
		if ((layout != null) &&(fVar12 = layout.paddingBottom, 0.0 < fVar12)) {
			local_68 = fVar12;
		}
		GVar5 = ((YGValue)local_68);
		flex.PaddingBottom = GVar5;
		return;
	}

	[Token(Token = "0x600057D")]
	[Address(RVA = "0x5289320", Offset = "0x5288320", VA = "0x5289320")]
	private static bool IsFullscreenAbsolute(GisketchLayoutDefinition layout)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$IsFullscreenAbsolute): clean
		float fVar1;
		String a;
		GisketchLength pGVar2;
		bool bVar3;
		MethodInfo method_00;
		float fVar4;
		float fVar5;
		float fVar6;

		if (layout != null) {
			a = layout.alignSelf;
			method_00 = (MethodInfo *)"Absolute";
			bVar3 = String.Equals(a, "Absolute", 5);
			if (!bVar3) {
				return false;
			}
			pGVar2 = layout.width;
			if ((typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor == 0) {
				bVar3 = GisketchScreenBuilder.IsPercent100(pGVar2);
			}
			else {
				bVar3 = GisketchScreenBuilder.IsPercent100(pGVar2);
			}
			if (bVar3) {
				pGVar2 = layout.height;
				if (((typeof(GisketchScreenBuilder))._2). cctor_finished_or_no_cctor == 0) {
					bVar3 = GisketchScreenBuilder.IsPercent100(pGVar2);
				}
				else {
					bVar3 = GisketchScreenBuilder.IsPercent100(pGVar2);
				}
				if (bVar3) {
					fVar1 = layout.offsetX;
					fVar6 = ABS(fVar1);
					if (fVar6 <= 0.0) {
						fVar6 = 0.0;
					}
					fVar4 = Mathf.Epsilon * 8.0;
					fVar5 = fVar6 * 1e-06;
					if (fVar6 * 1e-06 <= fVar4) {
						fVar5 = fVar4;
					}
					if (ABS(0.0 - fVar1) < fVar5) {
						fVar1 = layout.offsetY;
						fVar6 = ABS(fVar1);
						if (fVar6 <= 0.0) {
							fVar6 = 0.0;
						}
						fVar5 = fVar6 * 1e-06;
						if (fVar6 * 1e-06 <= fVar4) {
							fVar5 = fVar4;
						}
						return ABS(0.0 - fVar1) < fVar5;
					}
				}
			}
		}
		return false;
	}

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x5289650", Offset = "0x5288650", VA = "0x5289650")]
	private static bool IsPercent100(GisketchLength length)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$IsPercent100): clean
		float fVar1;
		String a;
		bool bVar2;
		bool bVar3;
		float fVar4;
		float fVar5;
		float fVar6;

		if (length == null) {
		}
		else {
			a = length.unit;
			bVar2 = String.Equals(a, "percent", 5);
			if (bVar2) {
				fVar1 = length.value;
				fVar5 = ABS(fVar1);
				if (fVar5 <= 100.0) {
					fVar5 = 100.0;
				}
				fVar4 = Mathf.Epsilon * 8.0;
				fVar6 = fVar5 * 1e-06;
				if (fVar5 * 1e-06 <= fVar4) {
					fVar6 = fVar4;
				}
				bVar3 = ABS(100.0 - fVar1) < fVar6;
			}
		}
		return bVar3;
	}

	[Token(Token = "0x600057F")]
	[Address(RVA = "0x52894D0", Offset = "0x52884D0", VA = "0x52894D0")]
	private static YGValue Length(GisketchLength length, YGValue fallback)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$Length): clean
		float fVar1;
		String pSVar2;
		bool bVar3;
		YGValue GVar4;

		if (length != null) {
			bVar3 = String.IsNullOrEmpty(length.unit);
			if (!bVar3) {
				pSVar2 = length.unit;
				bVar3 = String.Equals(pSVar2, "percent", 5);
				if (bVar3) {
					fVar1 = length.value;
					GVar4 = YGValue.Percent(fVar1);
					return (YGValue)GVar4;
				}
				pSVar2 = length.unit;
				bVar3 = String.Equals(pSVar2, "auto", 5);
				if (!bVar3) {
					fVar1 = length.value;
					GVar4 = ((YGValue)fVar1);
					return (YGValue)GVar4;
				}
				fallback = (YGValue.Auto);
			}
		}
		return (YGValue)fallback;
	}

	[Token(Token = "0x6000580")]
	[Address(RVA = "0x52863A0", Offset = "0x52853A0", VA = "0x52863A0")]
	private static GisketchLength PreferLayout(GisketchLength layout, GisketchLength style)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$PreferLayout): clean
		bool bVar1;

		if (layout != null) {
			bVar1 = String.IsNullOrEmpty(layout.unit);
			if (!bVar1) {
			}
		}
		return style;
	}

	[Token(Token = "0x6000581")]
	private static T ParseEnum<T>(string value, T fallback) where T : struct
	{
		return (T)null;
	}

	[Token(Token = "0x6000582")]
	[Address(RVA = "0x5289760", Offset = "0x5288760", VA = "0x5289760")]
	private static string ResolveTooltip(string tooltip, string tooltipKey, GisketchBuildContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ResolveTooltip): 3 lines keep C-only constructs
		GisketchManifestDefinition __this;
		bool bVar3;
		GisketchTooltipDefinition pGVar4;
		VirtualInvokeData pVVar5;
		String pSVar6;
		MethodInfo pMVar8;
		object obj;
		Il2CppMethodPointer vtableDispatch;

		bVar3 = String.IsNullOrEmpty(tooltipKey);
		if (bVar3) {
			if (context == null) {
	label_053898ec: ;
				throw new NullReferenceException();
			}
		}
		else {
			if (context == null) goto label_053898ec;
			obj = (object)context.Localizer;
			if (obj != null) {
				vtableDispatch = pVVar5.methodPtr;
				pMVar8 = pVVar5.method;
				goto label_053898d8;
			}
		}
		__this = context.Manifest;
		if ((__this != null) &&(pGVar4 = __this.FindTooltip(tooltip), pGVar4 != null)) {
			bVar3 = String.IsNullOrEmpty(pGVar4.textKey);
			if ((!bVar3) && (obj = (object)context.Localizer, obj != null)) {
				tooltip = pGVar4.text;
				tooltipKey = pGVar4.textKey;
				vtableDispatch = pVVar5.methodPtr;
				pMVar8 = pVVar5.method;
	label_053898d8: ;
				pSVar6 = (String)(*vtableDispatch)(obj,tooltipKey,tooltip,pMVar8,vtableDispatch);
				return pSVar6;
			}
			tooltip = pGVar4.text;
		}
		return tooltip;
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x5289900", Offset = "0x5288900", VA = "0x5289900")]
	private static GisketchMotionDefinition StyleMotion(GisketchStyleDefinition style, GisketchTheme theme)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$StyleMotion): clean
		bool bVar1;
		GisketchMotionDefinition __this;
		String pSVar2;
		float fVar3;

		if ((style == null) ||(bVar1 = String.IsNullOrEmpty(style.motion))) {
			return null;
		}
		__this = new GisketchMotionDefinition();
		if ((theme == null) ||(pSVar2 = theme.GetMotionPreset(style.motion), __this == null)) {
			throw new NullReferenceException();
		}
		__this.preset = pSVar2;
		fVar3 = theme.GetMotionDuration(style.motion, 0.16);
		__this.duration = fVar3;
		return __this;
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x5283C10", Offset = "0x5282C10", VA = "0x5283C10")]
	private static void Stretch(RectTransform rect)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$Stretch): clean
		if (rect == null) {
			throw new NullReferenceException();
		}
		rect.anchorMin = (Vector2)(Vector2.zeroVector);
		rect.anchorMax = (Vector2)(Vector2.oneVector);
		rect.offsetMin = (Vector2)(Vector2.zeroVector);
		rect.offsetMax = (Vector2)(Vector2.zeroVector);
		return;
	}

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x5287830", Offset = "0x5286830", VA = "0x5287830")]
	private static void ApplyAspectRatio(GameObject go, GisketchStyleDefinition style)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyAspectRatio): 1 lines keep C-only constructs
		RectTransform __this;
		AspectRatioFitter __this_00;
		Nullable<float> __this_01;
		float fVar1;
		Vector2 UVar2;

		if ((style != null) &&(style.aspectRatio.hasValue != false)) {
			__this_01 = &style.aspectRatio;
			fVar1 = __this_01.Value;
			if (0.0 < fVar1) {
				if (go != null) {
					__this = go.GetComponent<RectTransform>();
					if (__this != null) {
						UVar2 = __this.pivot;
						__this.pivot = (Vector2)((ulong)UVar2 & 0xffffffff00000000);
						__this_00 = go.GetComponent<AspectRatioFitter>();
						if (__this_00 == null) {
							__this_00 = go.AddComponent<AspectRatioFitter>();
							if (__this_00 == null) goto label_0538797c;
						}
						__this_00.aspectMode = 2;
						fVar1 = __this_01.Value;
						__this_00.aspectRatio = fVar1;
						return;
					}
				}
	label_0538797c: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6000586")]
	[Address(RVA = "0x5287990", Offset = "0x5286990", VA = "0x5287990")]
	private static void ApplyLayoutOffset(GameObject go, GisketchLayoutDefinition layout)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyLayoutOffset): 1 lines keep C-only constructs
		float fVar1;
		Vector2 UVar2;
		GisketchLayoutOffset __this;
		MethodInfo method_00;
		float fVar3;
		float fVar4;
		float fVar5;

		if (layout == null) {
			return;
		}
		fVar1 = layout.offsetX;
		fVar5 = ABS(fVar1);
		if (fVar5 <= 0.0) {
			fVar5 = 0.0;
		}
		fVar3 = Mathf.Epsilon * 8.0;
		fVar4 = fVar5 * 1e-06;
		if (fVar5 * 1e-06 <= fVar3) {
			fVar4 = fVar3;
		}
		if (ABS(0.0 - fVar1) < fVar4) {
			fVar1 = layout.offsetY;
			fVar5 = ABS(fVar1);
			if (fVar5 <= 0.0) {
				fVar5 = 0.0;
			}
			fVar4 = fVar5 * 1e-06;
			if (fVar5 * 1e-06 <= fVar3) {
				fVar4 = fVar3;
			}
			if (ABS(0.0 - fVar1) < fVar4) {
				return;
			}
		}
		if ((go == null) ||(__this = go.AddComponent<GisketchLayoutOffset>(), __this == null)) {
			throw new NullReferenceException();
		}
		UVar2 = *(Vector2)&layout.offsetX;
		__this._layoutOffset = UVar2;
		method_00 = (MethodInfo)__this.GetComponent<RectTransform>();
		__this._rect = (RectTransform)method_00;
		__this.Apply();
		return;
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x52815C0", Offset = "0x52805C0", VA = "0x52815C0")]
	private static void BuildScaleBox(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildScaleBox): 8 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		Il2CppType handle;
		Type[] components;
		Type obj;
		object pIVar3;
		GameObject __this;
		Transform pUVar4;
		Transform parent;
		FlexLayout flex;
		GisketchScaleToParent __this_00;
		MethodInfo pMVar5;
		RectTransform pUVar6;
		GisketchChildHost pGVar7;
		byte[] auVar8 = new byte[16];

		GisketchScreenBuilder.ApplyPanel(go, node, style, context);
		components = (Type[])new Type[1];
		handle = TypeRef_UnityEngine_RectTransform;
		obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components != null) {
			if (obj != null) {
				pIVar3 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class);
				if (pIVar3 == null) {
					pIVar3 = new ArrayTypeMismatchException();
					throw pIVar3;
				}
			}
			if ((int)components.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			components[0] = obj;
			__this = new GameObject("AoTTG Scale Content", components);
			if (__this != null) {
				pUVar4 = __this.transform;
				if (go != null) {
					parent = go.transform;
					if (pUVar4 != null) {
						pMVar5 = null;
						pUVar4.SetParent(parent, false);
						flex = __this.AddComponent<FlexLayout>();
						if (node != null) {
							GisketchScreenBuilder.ApplyFlex(flex, node.contentLayout, null);
							uVar1 = node.referenceWidth;
							uVar2 = node.referenceHeight;
							__this_00 = go.AddComponent<GisketchScaleToParent>();
							pMVar5 = (MethodInfo)__this.GetComponent<RectTransform>();
							if (__this_00 != null) {
								pUVar6 = __this_00.GetComponent<RectTransform>();
								__this_00._root = pUVar6;
								__this_00._content = (RectTransform)pMVar5;
								auVar8._4_4_ = ~-(uint)(0.0 < (float)uVar2) & 0x44870000 | uVar2 & -(uint)(0.0 < (float)uVar2);
								auVar8._0_4_ = ~-(uint)(0.0 < (float)uVar1) & 0x44f00000 | uVar1 & -(uint)(0.0 < (float)uVar1);
								auVar8._8_8_ = 0;
								auVar8 = maxps(_DAT_01005870, auVar8);
								__this_00._referenceWidth = (float)auVar8._0_4_;
								__this_00._referenceHeight = (float)auVar8._4_4_;
								__this_00.Apply();
								pGVar7 = go.AddComponent<GisketchChildHost>();
								pUVar4 = __this.transform;
								if (pGVar7 != null) {
									pGVar7._Parent_k__BackingField = pUVar4;
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

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x5281390", Offset = "0x5280390", VA = "0x5281390")]
	private static void BuildScrollView(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildScrollView): clean
		GisketchTheme theme;
		bool leftAligned;
		Transform pUVar1;
		GameObject __this;
		GameObject __this_00;
		Scrollbar value;
		GisketchScrollRect __this_01;
		RectTransform pUVar2;
		GisketchScrollbarVisibility __this_02;
		GisketchChildHost pGVar3;

		GisketchScreenBuilder.ApplyPanel(go, node, style, context);
		if (go != null) {
			pUVar1 = go.transform;
			__this = GisketchScreenBuilder.CreateViewport(pUVar1);
			if (__this != null) {
				pUVar1 = __this.transform;
				if (node != null) {
					__this_00 = GisketchScreenBuilder.CreateContent(pUVar1, node.contentLayout);
					pUVar1 = go.transform;
					if (context != null) {
						theme = context.Theme;
						leftAligned = (node.value == "scrollbar-left");
						value = GisketchScreenBuilder.CreateScrollbar(pUVar1, theme, leftAligned);
						__this_01 = go.AddComponent<GisketchScrollRect>();
						if (__this_01 != null) {
							__this_01.m_Horizontal = false;
							__this_01.m_Vertical = true;
							pUVar2 = __this.GetComponent<RectTransform>();
							__this_01.viewport = pUVar2;
							if (__this_00 != null) {
								pUVar2 = __this_00.GetComponent<RectTransform>();
								__this_01.m_Content = pUVar2;
								__this_01.verticalScrollbar = value;
								__this_01.verticalScrollbarVisibility = 0;
								__this_01.m_MovementType = 2;
								__this_01.m_Elasticity = 0.0;
								__this_01.m_ScrollSensitivity = 28.0;
								__this_02 = go.AddComponent<GisketchScrollbarVisibility>();
								if (__this_02 != null) {
									__this_02.Setup((ScrollRect)__this_01);
									pGVar3 = go.AddComponent<GisketchChildHost>();
									pUVar1 = __this_00.transform;
									if (pGVar3 != null) {
										pGVar3._Parent_k__BackingField = pUVar1;
										return;
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

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x52899C0", Offset = "0x52889C0", VA = "0x52899C0")]
	private static GameObject CreateViewport(Transform parent)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$CreateViewport): 2 lines keep C-only constructs
		Il2CppType handle;
		Type[] components;
		Type obj;
		object pIVar1;
		MethodInfo __this;
		Transform __this_00;
		RectTransform rect;
		Image pUVar2;
		FlexLayout flex;
		GisketchLayoutDefinition layout;

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
			__this = new GameObject("AoTTG Scroll Viewport", components);
			if (__this != null) {
				__this_00 = __this.transform;
				if (__this_00 != null) {
					__this_00.SetParent(parent, false);
					rect = __this.GetComponent<RectTransform>();
					GisketchScreenBuilder.Stretch(rect);
					pUVar2 = __this.AddComponent<Image>();
					if (pUVar2 != null) {
						pUVar2.set_color((Color)ZEXT816(0));
						pUVar2.set_raycastTarget(true);
						__this.AddComponent<RectMask2D>();
						flex = __this.AddComponent<FlexLayout>();
						layout = GisketchScreenBuilder.FillLayout(1.0);
						GisketchScreenBuilder.ApplyFlex(flex, layout, null);
						return (GameObject)__this;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600058A")]
	[Address(RVA = "0x5289C20", Offset = "0x5288C20", VA = "0x5289C20")]
	private static GameObject CreateContent(Transform parent, GisketchLayoutDefinition layout)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$CreateContent): 1 lines keep C-only constructs
		Il2CppType handle;
		Type[] components;
		Type obj;
		object pIVar1;
		GameObject __this;
		Transform __this_00;
		RectTransform __this_01;
		GisketchScrollContentLayout flex;
		GisketchLayoutDefinition layout_00;

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
			__this = new GameObject("AoTTG Scroll Content", components);
			if (__this != null) {
				__this_00 = __this.transform;
				if (__this_00 != null) {
					__this_00.SetParent(parent, false);
					__this_01 = __this.GetComponent<RectTransform>();
					if (__this_01 != null) {
						__this_01.anchorMin = (Vector2)(Vector2.zeroVector);
						__this_01.anchorMax = (Vector2)(Vector2.zeroVector);
						__this_01.pivot = (Vector2)0x3f80000000000000;
						flex = __this.AddComponent<GisketchScrollContentLayout>() ;
						layout_00 = GisketchScreenBuilder.ScrollContentLayout(layout);
						GisketchScreenBuilder.ApplyFlex((FlexLayout)flex, layout_00, null);
						return __this;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x5289E80", Offset = "0x5288E80", VA = "0x5289E80")]
	private static Scrollbar CreateScrollbar(Transform parent, GisketchTheme theme, bool leftAligned)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$CreateScrollbar): 2 lines keep C-only constructs
		Vector2 UVar1;
		GisketchLength pGVar2;
		String pSVar3;
		Vector2 value;
		Vector2 value_00;
		Il2CppType handle;
		bool bVar4;
		GisketchStyleDefinition style;
		Type[] components;
		Type obj;
		object pIVar5;
		GameObject __this;
		Transform pUVar6;
		RectTransform pUVar7;
		Scrollbar __this_00;
		Image value_01;
		float fVar8;
		float fVar9;

		if ((theme != null) &&(style = theme.GetStyle("scrollbar") , style != null)) {
			pGVar2 = style.width;
			fVar8 = 12.0;
			if (pGVar2 != null) {
				fVar8 = 12.0;
				pSVar3 = pGVar2.unit;
				if (((typeof(GisketchScreenBuilder))._2). cctor_finished_or_no_cctor == 0) {
				}
				bVar4 = String.Equals(pSVar3, "point", 5);
				if (bVar4) {
					fVar8 = pGVar2.value;
				}
			}
			components = (Type[])new Type[1];
			handle = TypeRef_UnityEngine_RectTransform;
			obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			if (components != null) {
				if ((obj != null) &&(pIVar5 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class), pIVar5 == null)) {
					pIVar5 = new ArrayTypeMismatchException();
					throw pIVar5;
				}
				if ((int)components.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				components[0] = obj;
				__this = new GameObject("AoTTG Scrollbar", components);
				if ((__this != null) &&(pUVar6 = __this.transform, pUVar6 != null)) {
					pUVar6.SetParent(parent, false);
					pUVar7 = __this.GetComponent<RectTransform>();
					if (leftAligned) {
						if (pUVar7 == null) goto label_0538a362;
						pUVar7.anchorMin = (Vector2)(Vector2.zeroVector);
						pUVar7.anchorMax = (Vector2)0x3f80000000000000;
						pUVar7.pivot = (Vector2)0x3f00000000000000;
						pUVar7.offsetMin = (Vector2)(Vector2.zeroVector);
						fVar9 = 0.0;
					}
					else {
						if (pUVar7 == null) goto label_0538a362;
						pUVar7.anchorMin = (Vector2)0x3f800000 ;
						pUVar7.anchorMax = (Vector2)(Vector2.oneVector) ;
						pUVar7.pivot = (Vector2)0x3f0000003f800000;
						value.y = 0.0;
						value.x = -fVar8;
						pUVar7.offsetMin = value;
						UVar1 = (Vector2.zeroVector);
						fVar8 = UVar1.x;
						fVar9 = UVar1.y;
					}
					value_00.y = fVar9;
					value_00.x = fVar8;
					pUVar7.offsetMax = value_00;
					pSVar3 = style.background;
					GisketchScreenBuilder.ApplyImage(__this, style, theme, pSVar3, false);
					pUVar6 = __this.transform;
					pUVar7 = GisketchScreenBuilder.CreateScrollbarThumb(pUVar6, theme);
					__this_00 = __this.AddComponent<Scrollbar>();
					if (__this_00 != null) {
						__this_00.direction = 2;
						__this_00.handleRect = pUVar7;
						if (pUVar7 != null) {
							value_01 = pUVar7.GetComponent<Image>();
							__this_00.targetGraphic = (Graphic)value_01;
							__this_00.transition = 0;
							__this_00.navigation = (Navigation)ZEXT840(0);
							return __this_00;
						}
					}
				}
			}
		}
	label_0538a362: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x528A770", Offset = "0x5289770", VA = "0x528A770")]
	private static RectTransform CreateScrollbarThumb(Transform parent, GisketchTheme theme)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$CreateScrollbarThumb): 2 lines keep C-only constructs
		Il2CppType handle;
		Type[] pSVar1;
		Type pSVar2;
		object pIVar3;
		GameObject __this;
		Transform pUVar4;
		RectTransform pUVar5;
		GameObject __this_00;
		Transform parent_00;
		GisketchStyleDefinition style;

		pSVar1 = (Type[])new Type[1];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (pSVar1 != null) {
			if (pSVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((pSVar1.obj).klass)._1).element_class);
				if (pIVar3 == null) goto label_0538aa3b;
			}
			if ((int)pSVar1.Length == 0) {
	label_0538aa36: ;
				throw new IndexOutOfRangeException();
			}
			pSVar1[0] = pSVar2;
			__this = new GameObject("AoTTG Scrollbar Sliding Area", pSVar1);
			if (__this != null) {
				pUVar4 = __this.transform;
				if (pUVar4 != null) {
					pUVar4.SetParent(parent, false);
					pUVar5 = __this.GetComponent<RectTransform>();
					GisketchScreenBuilder.Stretch(pUVar5);
					pSVar1 = (Type[])new Type[1];
					pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_RectTransform);
					if (pSVar1 != null) {
						if (pSVar2 != null) {
							pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((pSVar1.obj).klass)._1).element_class) ;
							if (pIVar3 == null) {
	label_0538aa3b: ;
								pIVar3 = new ArrayTypeMismatchException();
								throw pIVar3;
							}
						}
						if ((int)pSVar1.Length == 0) goto label_0538aa36;
						pSVar1[0] = pSVar2;
						__this_00 = new GameObject("AoTTG Scrollbar Thumb", pSVar1);
						if (__this_00 != null) {
							pUVar4 = __this_00.transform;
							parent_00 = __this.transform;
							if (pUVar4 != null) {
								pUVar4.SetParent(parent_00, false);
								pUVar5 = __this_00.GetComponent<RectTransform>();
								GisketchScreenBuilder.Stretch(pUVar5);
								if (theme != null) {
									style = theme.GetStyle("scrollbarThumb");
									if (style != null) {
										GisketchScreenBuilder.ApplyImage(__this_00, style, theme, style.background, true);
										pUVar5 = __this_00.GetComponent<RectTransform>();
										return pUVar5;
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

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x528A380", Offset = "0x5289380", VA = "0x528A380")]
	private static GisketchLayoutDefinition FillLayout(float grow = 0f)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$FillLayout): clean
		GisketchLayoutDefinition __this;
		GisketchLength pGVar1;

		__this = new GisketchLayoutDefinition();
		if (__this != null) {
			__this.direction = "Column";
			__this.alignItems = "Stretch";
			pGVar1 = new GisketchLength();
			if (pGVar1 != null) {
				pGVar1.value = 100.0;
				pGVar1.unit = "percent";
				__this.width = pGVar1;
				pGVar1 = new GisketchLength();
				if (pGVar1 != null) {
					pGVar1.value = 100.0;
					pGVar1.unit = "percent";
					__this.height = pGVar1;
					__this.grow = grow;
					__this.shrink = 0.0;
					return __this;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x528A500", Offset = "0x5289500", VA = "0x528A500")]
	private static GisketchLayoutDefinition ScrollContentLayout(GisketchLayoutDefinition layout)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ScrollContentLayout): 2 lines keep C-only constructs
		float fVar1;
		float fVar2;
		GisketchLayoutDefinition __this;
		String* ppSVar3;
		GisketchLength pGVar4;
		GisketchLayoutDefinition pGVar5;
		float fVar6;

		__this = new GisketchLayoutDefinition();
		if (__this == null) goto label_0538a75e;
		if (layout == null) {
			ppSVar3 = &"Column";
		}
		else {
			ppSVar3 = &layout.direction;
		}
		__this.direction = ((GisketchLayoutDefinition)ppSVar3).direction;
		if (layout == null) {
			__this.justify = null;
			__this.alignItems = "Stretch";
			__this.alignSelf = null;
			__this.wrap = null;
	label_0538a64f: ;
			pGVar4 = new GisketchLength();
			if (pGVar4 == null) goto label_0538a75e;
			pGVar4.value = 100.0;
			pGVar4.unit = "percent";
			__this.width = pGVar4;
			if (layout != null) goto label_0538a6ab;
			__this.minWidth = null;
			pGVar5 = null;
			pGVar4 = null;
		}
		else {
			__this.justify = layout.justify;
			__this.alignItems = layout.alignItems;
			__this.alignSelf = layout.alignSelf;
			__this.wrap = layout.wrap;
			pGVar4 = layout.width;
			if (pGVar4 == null) goto label_0538a64f;
			__this.width = pGVar4;
	label_0538a6ab: ;
			__this.minWidth = layout.minWidth;
			pGVar4 = layout.maxWidth;
			pGVar5 = __this;
		}
		__this.maxWidth = pGVar4;
		__this.grow = 0.0;
		__this.shrink = 0.0;
		if (layout == null) {
			__this.paddingX = 0.0;
			__this.paddingY = 0.0;
			__this.paddingLeft = 0.0;
			__this.paddingRight = 0.0;
			__this.gap = 0.0;
			__this.gapRow = 0.0;
			__this.gapColumn = 0.0;
			__this.padding = 0.0;
			__this.paddingTop = 0.0;
			fVar6 = 0.0;
		}
		else {
			if (pGVar5 == null) {
	label_0538a75e: ;
				throw new NullReferenceException();
			}
			fVar6 = layout.gapRow;
			fVar1 = layout.gapColumn;
			fVar2 = layout.padding;
			pGVar5.gap = layout.gap;
			pGVar5.gapRow = fVar6;
			pGVar5.gapColumn = fVar1;
			pGVar5.padding = fVar2;
			fVar6 = layout.paddingY;
			fVar1 = layout.paddingLeft;
			fVar2 = layout.paddingRight;
			pGVar5.paddingX = layout.paddingX;
			pGVar5.paddingY = fVar6;
			pGVar5.paddingLeft = fVar1;
			pGVar5.paddingRight = fVar2;
			pGVar5.paddingTop = layout.paddingTop;
			fVar6 = layout.paddingBottom;
		}
		__this.paddingBottom = fVar6;
		return __this;
	}

	[Token(Token = "0x600058F")]
	[Address(RVA = "0x527F130", Offset = "0x527E130", VA = "0x527F130")]
	private static void BuildSearchPalette(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildSearchPalette): 8 lines keep C-only constructs
		String id;
		String placeholder;
		bool bVar1;
		GisketchLayoutDefinition __this;
		GisketchLength __this_00;
		String* ppSVar2;
		GisketchNodeDefinition pGVar3;
		MethodInfo pMVar4;
		GameObject __this_01;
		Transform parent;
		GameObject __this_02;
		AottgSearchPaletteControl __this_03;
		TMP_InputField input;
		Button submit;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;

		if (Il2CppMethodInitialized_07542af7 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField) ;
			Il2CppMethodInitialized_07542af7 = true;
		}
		if (node == null) goto label_0537f3d0;
		__this = node.layout;
		if (__this == null) {
			__this = new GisketchLayoutDefinition();
			if (__this == null) goto label_0537f3d0;
			__this.direction = "Row";
			__this.alignItems = "Center";
			__this.gap = 8.0;
			__this_00 = new GisketchLength();
			if (__this_00 == null) goto label_0537f3d0;
			__this_00.value = 100.0;
			__this_00.unit = "percent";
			__this.width = __this_00;
		}
		node.layout = __this;
		bVar1 = String.IsNullOrEmpty(node.id);
		if (bVar1) {
			ppSVar2 = &"search-palette";
		}
		else {
			ppSVar2 = &node.id;
		}
		id = *ppSVar2;
		placeholder = node.placeholder;
		pMVar4 = extraout_RDX;
		if ((typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor == 0) {
			pMVar4 = extraout_RDX_00;
		}
		pGVar3 = GisketchScreenBuilder.InputNode(id, placeholder);
		if (go != null) {
			pMVar4 = (MethodInfo)go.transform;
			__this_01 = GisketchScreenBuilder.BuildNode(pGVar3, (Transform)pMVar4, context, view);
			pGVar3 = GisketchScreenBuilder.SearchButtonNode(id);
			parent = go.transform;
			__this_02 = GisketchScreenBuilder.BuildNode(pGVar3, parent, context, view);
			__this_03 = go.AddComponent<AottgSearchPaletteControl>();
			if (__this_01 != null) {
				input = __this_01.GetComponent<TMP_InputField>();
				if (__this_02 != null) {
					submit = __this_02.GetComponent<Button>();
					if (__this_03 != null) {
						__this_03.Setup(input, submit, node.searchScopeScreenId, node.searchShowFullPath, node.searchScopeScreenIds);
						return;
					}
				}
			}
		}
	label_0537f3d0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x528AA50", Offset = "0x5289A50", VA = "0x528AA50")]
	private static GisketchNodeDefinition InputNode(string id, string placeholder)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$InputNode): clean
		bool bVar1;
		GisketchNodeDefinition __this;
		String pSVar2;
		GisketchSearchDefinition __this_00;
		GisketchLayoutDefinition __this_01;
		GisketchLength __this_02;

		__this = new GisketchNodeDefinition();
		if (__this != null) {
			__this.type = "InputField";
			pSVar2 = String.Concat(id, "-input");
			__this.id = pSVar2;
			bVar1 = String.IsNullOrEmpty(placeholder);
			if (bVar1) {
				placeholder = "Search current screen";
			}
			__this.placeholder = placeholder;
			__this.style = "inputField";
			__this_00 = new GisketchSearchDefinition();
			if (__this_00 != null) {
				__this_00.hidden = true;
				__this.search = __this_00;
				__this_01 = new GisketchLayoutDefinition();
				if (__this_01 != null) {
					__this_01.grow = 1.0;
					__this_02 = new GisketchLength();
					if (__this_02 != null) {
						__this_02.value = 100.0;
						__this_02.unit = "percent";
						__this_01.width = __this_02;
						__this.layout = __this_01;
						return __this;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000591")]
	[Address(RVA = "0x528AC80", Offset = "0x5289C80", VA = "0x528AC80")]
	private static GisketchNodeDefinition SearchButtonNode(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SearchButtonNode): clean
		GisketchNodeDefinition __this;
		String pSVar1;
		GisketchSearchDefinition __this_00;

		__this = new GisketchNodeDefinition();
		if (__this != null) {
			__this.type = "Button";
			pSVar1 = String.Concat(id, "-submit");
			__this.id = pSVar1;
			__this.icon = "zoom";
			__this.hasIcon = true;
			__this.style = "buttonPrimary";
			__this_00 = new GisketchSearchDefinition();
			if (__this_00 != null) {
				__this_00.hidden = true;
				__this.search = __this_00;
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000592")]
	[Address(RVA = "0x5285FD0", Offset = "0x5284FD0", VA = "0x5285FD0")]
	private static void ApplyShadow(GameObject go, GisketchStyleDefinition style, GisketchTheme theme)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyShadow): 4 lines keep C-only constructs
		String pSVar1;
		byte[] auVar2 = new byte[16];
		bool bVar3;
		GisketchDropShadow __this;
		int layers;
		Vector2 offset;
		float grain;
		Color UVar4;
		float local_48;
		float fStack_44;
		float local_38;
		float fStack_34;

		if ((style == null) ||(style.shadow.value == false)) {
			return;
		}
		if (go != null) {
			__this = go.GetComponent<GisketchDropShadow>();
			if (__this == null) {
				__this = go.AddComponent<GisketchDropShadow>();
			}
			if (theme != null) {
				auVar2._8_8_ = 0;
				auVar2._0_8_ = (ulong)g_data_01006650;
				UVar4 = theme.GetColor("shadow", (Color)(auVar2 << 0x40));
				pSVar1 = style.name;
				bVar3 = String.Equals(pSVar1, "mainMenuPanel", 5);
				local_48 = UVar4.r;
				fStack_44 = UVar4.g;
				local_38 = UVar4.b;
				fStack_34 = UVar4.a;
				if (bVar3) {
					if (__this != null) {
						offset.x = 22.0;
						offset.y = -3.0;
						grain = 2.4;
						layers = 8;
	label_0538622c: ;
						UVar4.g = fStack_44;
						UVar4.r = local_48;
						UVar4.a = fStack_34;
						UVar4.b = local_38;
						__this.Setup(UVar4, (Vector2)offset, layers, grain, false);
						return;
					}
				}
				else {
					pSVar1 = style.name;
					bVar3 = String.Equals(pSVar1, "brushSidePanel", 5);
					if (bVar3) {
						if (__this != null) {
							offset.x = 34.0;
							offset.y = -2.0;
							grain = 2.6;
							layers = 10;
							goto label_0538622c;
						}
					}
					else {
						pSVar1 = style.name;
						bVar3 = String.Equals(pSVar1, "brushSidePanelContentFooterTopShadow", 5);
						if (bVar3) {
							if (__this != null) {
								offset = (Vector2.zeroVector);
								local_38 = 0.0;
								fStack_34 = 0.3;
								grain = 1.8;
								local_48 = 0.0;
								fStack_44 = 0.0;
								layers = 0xc;
								goto label_0538622c;
							}
						}
						else if (__this != null) {
							__this.Setup(UVar4);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000593")]
	[Address(RVA = "0x5281010", Offset = "0x5280010", VA = "0x5281010")]
	private static void BuildSkeleton(GameObject go, GisketchStyleDefinition style, GisketchBuildContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildSkeleton): 2 lines keep C-only constructs
		GisketchTheme pGVar1;
		Image image;
		GisketchSkeletonPulse __this;
		String token;
		String token_00;
		Color UVar2;
		Color UVar3;

		if (context != null) {
			pGVar1 = context.Theme;
			if (style == null) {
				token = null;
			}
			else {
				token = style.background;
			}
			if (pGVar1 != null) {
				token_00 = null;
				UVar2.b = (float)(int)g_data_01005000;
				UVar2.a = (float)g_data_01005000._4_4_;
				UVar2.r = 0.72;
				UVar2.g = 0.72;
				UVar2 = pGVar1.GetColor("skeletonBase", UVar2);
				UVar2 = pGVar1.GetColor(token, UVar2);
				pGVar1 = context.Theme;
				if (style != null) {
					token_00 = style.textColor;
				}
				if (pGVar1 != null) {
					UVar3.b = (float)(int)g_data_010073c0;
					UVar3.a = (float)g_data_010073c0._4_4_;
					UVar3.r = 0.82;
					UVar3.g = 0.82;
					UVar3 = pGVar1.GetColor("skeletonPulse", UVar3);
					UVar3 = pGVar1.GetColor(token_00, UVar3);
					if ((go != null) &&(image = go.AddComponent<Image>(), image != null)) {
						image.set_color(UVar2);
						image.set_raycastTarget(false);
						image.set_material(null);
						go.AddComponent<CanvasGroup>();
						__this = go.AddComponent<GisketchSkeletonPulse>();
						if (__this != null) {
							__this.Setup(image, UVar2, UVar3);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000594")]
	[Address(RVA = "0x527F3E0", Offset = "0x527E3E0", VA = "0x527F3E0")]
	private static void BuildSlider(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildSlider): 3 lines keep C-only constructs
		GisketchTheme pGVar1;
		GisketchLength pGVar2;
		String pSVar3;
		bool bVar4;
		GisketchStyleDefinition style_00;
		GisketchStyleDefinition style_01;
		Transform pUVar5;
		RectTransform track;
		RectTransform fill;
		RectTransform thumb;
		Image pUVar6;
		AottgSliderControl __this;
		GisketchFocusRing __this_00;
		TextMeshProUGUI label;
		float height;
		float right;
		Color UVar7;
		float fStack_90;
		RectTransform pUStack_70;
		Image pUStack_68;
		GisketchStyleDefinition pGStack_60;

		pUStack_68 = null;
		pUStack_70 = null;
		if ((context != null) &&(pGVar1 = context.Theme, pGVar1 != null)) {
			style_00 = pGVar1.GetStyle("sliderTrack");
			pGVar1 = context.Theme;
			if ((pGVar1 != null) &&(style_01 = pGVar1.GetStyle("sliderFill"), style_00 != null)) {
				pGVar2 = style_00.height;
				if (Il2CppMethodInitialized_07542ac4 == false) {
					il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchScreenBuilder)) ;
					Il2CppMethodInitialized_07542ac4 = true;
				}
				height = 10.0;
				if (pGVar2 != null) {
					pSVar3 = pGVar2.unit;
					if (((typeof(GisketchScreenBuilder))._2). cctor_finished_or_no_cctor == 0) {
					}
					bVar4 = String.Equals(pSVar3, "point", 5);
					height = 10.0;
					if (bVar4) {
						height = pGVar2.value;
					}
				}
				if (style_01 != null) {
					pGVar2 = style_01.height;
					fStack_90 = 10.0;
					if (pGVar2 != null) {
						pSVar3 = pGVar2.unit;
						bVar4 = String.Equals(pSVar3, "point", 5);
						if (bVar4) {
							fStack_90 = pGVar2.value;
						}
					}
					if ((go != null) &&(pUVar5 = go.transform, pSVar3 = "AoTTG Slider Track", node != null)) {
						right = 0.0;
						if (node.showValue != false) {
							right = 54.0;
						}
						if (height <= fStack_90) {
							height = fStack_90;
						}
						pGVar1 = context.Theme;
						pGStack_60 = style;
						track = GisketchScreenBuilder.SliderPart(pUVar5, pSVar3, style_00, pGVar1, 0.0, right, height);
						fill = GisketchScreenBuilder.SliderPart((Transform)track, "AoTTG Slider Fill", style_01, context.Theme, 0.0, 0.0, height);
						thumb = GisketchScreenBuilder.SliderThumb((Transform)track, context.Theme, ref pUStack_68, ref pUStack_70);
						pUVar6 = go.AddComponent<Image>();
						if (pUVar6 != null) {
							pUVar6.set_color((Color)ZEXT816(0));
							pUVar6.set_raycastTarget(true);
							__this = go.AddComponent<AottgSliderControl>();
							if (__this != null) {
								__this.targetGraphic = (Graphic)pUStack_68;
								__this.transition = 0;
								__this.navigation = (Navigation)ZEXT840(3);
								go.AddComponent<GisketchDisabledSelectableOpacity>();
								pGVar1 = context.Theme;
								__this_00 = go.AddComponent<GisketchFocusRing>();
								if (pGVar1 != null) {
									UVar7.b = 1.0;
									UVar7.a = 1.0;
									UVar7.r = 1.0;
									UVar7.g = 1.0;
									UVar7 = pGVar1.GetColor("primary", UVar7);
									UVar7 = pGVar1.GetColor("focusRing", UVar7);
									if (__this_00 != null) {
										label = null;
										__this_00.Setup(UVar7, 3.0, 5.0, 14.0, true);
										GisketchScreenBuilder.ApplySliderMeasure(go, pGStack_60);
										if (node.showValue != false) {
											pUVar5 = go.transform;
											pGVar1 = context.Theme;
											if ((typeof(GisketchScreenBuilder)._2). cctor_finished_or_no_cctor == 0) {
											}
											label = GisketchScreenBuilder.SliderValueLabel(pUVar5, pGVar1);
										}
										__this.Setup(track, fill, thumb, pUStack_70, label, node, context.Actions, go, height);
										return;
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

	[Token(Token = "0x6000595")]
	[Address(RVA = "0x528ADC0", Offset = "0x5289DC0", VA = "0x528ADC0")]
	private static RectTransform SliderPart(Transform parent, string name, GisketchStyleDefinition style, GisketchTheme theme, float left, float right, float height)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SliderPart): 5 lines keep C-only constructs
		String color;
		Vector2 value;
		Il2CppType handle;
		Type[] components;
		Type obj;
		object pIVar1;
		GameObject __this;
		Transform __this_00;
		RectTransform __this_01;
		String* ppSVar2;
		bool reliefGradient;

		components = (Type[])new Type[1];
		handle = TypeRef_UnityEngine_RectTransform;
		obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components != null) {
			if ((obj != null) &&(pIVar1 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class), pIVar1 == null)) {
				pIVar1 = new ArrayTypeMismatchException();
				throw pIVar1;
			}
			if ((int)components.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			components[0] = obj;
			__this = new GameObject(name, components);
			if ((__this != null) &&(__this_00 = __this.transform, __this_00 != null)) {
				__this_00.SetParent(parent, false);
				__this_01 = __this.GetComponent<RectTransform>();
				if (__this_01 != null) {
					reliefGradient = false;
					__this_01.anchorMin = (Vector2)0x3f00000000000000;
					__this_01.anchorMax = (Vector2)0x3f0000003f800000;
					value.y = height * -0.5;
					value.x = left;
					__this_01.offsetMin = value;
					__this_01.offsetMax = (Vector2)(CONCAT44(height * 0.5, right) ^ 0x80000000);
					ppSVar2 = &style.background;
					if (style == null) {
						ppSVar2 = &"surface";
					}
					else {
						reliefGradient = style.reliefGradient.value != false;
					}
					color = *ppSVar2;
					GisketchScreenBuilder.ApplyImage(__this, style, theme, color, reliefGradient);
					return __this_01;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000596")]
	[Address(RVA = "0x528B050", Offset = "0x528A050", VA = "0x528B050")]
	private static RectTransform SliderThumb(Transform parent, GisketchTheme theme, out Image image, out RectTransform faceRect)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SliderThumb): 16 lines keep C-only constructs
		GisketchLength pGVar1;
		String pSVar2;
		Il2CppType handle;
		bool bVar3;
		GisketchStyleDefinition style;
		Type[] pSVar4;
		Type pSVar5;
		object pIVar6;
		GameObject __this;
		Transform pUVar7;
		RectTransform __this_00;
		GameObject __this_01;
		Transform parent_00;
		RectTransform pUVar8;
		Image pUVar9;
		byte[] auVar10 = new byte[16];
		Vector2 local_78;

		if ((theme != null) &&(style = theme.GetStyle("sliderThumb") , style != null)) {
			pGVar1 = style.width;
			local_78.x = 24.0;
			if (pGVar1 != null) {
				local_78.x = 24.0;
				pSVar2 = pGVar1.unit;
				if (((typeof(GisketchScreenBuilder))._2). cctor_finished_or_no_cctor == 0) {
				}
				bVar3 = String.Equals(pSVar2, "point", 5);
				if (bVar3) {
					local_78.x = pGVar1.value;
				}
			}
			pGVar1 = style.height;
			local_78.y = 14.0;
			if (pGVar1 != null) {
				pSVar2 = pGVar1.unit;
				bVar3 = String.Equals(pSVar2, "point", 5);
				if (bVar3) {
					local_78.y = pGVar1.value;
				}
			}
			pSVar4 = (Type[])new Type[1];
			handle = TypeRef_UnityEngine_RectTransform;
			pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			if (pSVar4 != null) {
				if ((pSVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class), pIVar6 == null)) {
	label_0538b523: ;
					pIVar6 = new ArrayTypeMismatchException();
					throw pIVar6;
				}
				if ((int)pSVar4.Length == 0) {
	label_0538b51e: ;
					throw new IndexOutOfRangeException();
				}
				pSVar4[0] = pSVar5;
				__this = new GameObject("AoTTG Slider Thumb", pSVar4);
				if ((__this != null) &&(pUVar7 = __this.transform, pUVar7 != null)) {
					pUVar7.SetParent(parent, false);
					__this_00 = __this.GetComponent<RectTransform>();
					if (__this_00 != null) {
						__this_00.anchorMin = (Vector2)0x3f00000000000000;
						__this_00.anchorMax = (Vector2)0x3f00000000000000;
						__this_00.pivot = (Vector2)0x3f0000003f000000;
						auVar10._4_4_ = local_78.y;
						auVar10._0_4_ = local_78.x;
						auVar10._8_8_ = 0;
						auVar10 = maxps(_DAT_010079b0, auVar10);
						__this_00.sizeDelta = (Vector2)auVar10._0_8_;
						pSVar4 = (Type[])new Type[1];
						pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_RectTransform) ;
						if (pSVar4 != null) {
							if ((pSVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar5, (((pSVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_0538b523;
							if ((int)pSVar4.Length == 0) goto label_0538b51e;
							pSVar4[0] = pSVar5;
							__this_01 = new GameObject("AoTTG Slider Thumb Face", pSVar4);
							if (__this_01 != null) {
								pUVar7 = __this_01.transform;
								parent_00 = __this.transform;
								if (pUVar7 != null) {
									pUVar7.SetParent(parent_00, false);
									pUVar8 = __this_01.GetComponent<RectTransform>();
									*faceRect = pUVar8;
									if (*faceRect != null) {
										(*faceRect).anchorMin = (Vector2)0x3f0000003f000000;
										if (*faceRect != null) {
											(*faceRect).anchorMax = (Vector2)0x3f0000003f000000;
											if (*faceRect != null) {
												(*faceRect).pivot = (Vector2)0x3f0000003f000000;
												if (*faceRect != null) {
													(*faceRect).sizeDelta = local_78;
													pUVar9 = GisketchScreenBuilder.ApplyImage(__this_01, style, theme, style.background, style.reliefGradient.value);
													*image = pUVar9;
													return __this_00;
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000597")]
	[Address(RVA = "0x528B790", Offset = "0x528A790", VA = "0x528B790")]
	private static TextMeshProUGUI SliderValueLabel(Transform parent, GisketchTheme theme)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SliderValueLabel): 1 lines keep C-only constructs
		Il2CppType handle;
		Type[] components;
		Type obj;
		object pIVar1;
		GameObject __this;
		Transform __this_00;
		RectTransform __this_01;
		TextMeshProUGUI text;
		GisketchNodeDefinition __this_02;
		GisketchStyleDefinition style;
		GisketchBuildContext __this_03;

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
			__this = new GameObject("AoTTG Slider Value", components);
			if (__this != null) {
				__this_00 = __this.transform;
				if (__this_00 != null) {
					__this_00.SetParent(parent, false);
					__this_01 = __this.GetComponent<RectTransform>();
					if (__this_01 != null) {
						__this_01.anchorMin = (Vector2)0x3f800000;
						__this_01.anchorMax = (Vector2)(Vector2.oneVector);
						__this_01.offsetMin = (Vector2)0xc2380000;
						__this_01.offsetMax = (Vector2)(Vector2.zeroVector);
						text = __this.AddComponent<TextMeshProUGUI>();
						__this_02 = new GisketchNodeDefinition();
						if (__this_02 != null) {
							__this_02.text = "0%";
							__this_02.style = "sliderValue";
							if (theme != null) {
								style = theme.GetStyle("sliderValue");
								__this_03 = new GisketchBuildContext(null, theme, null, null, null, null, null);
								GisketchScreenBuilder.ApplyText(text, __this_02, style, __this_03);
								if (text != null) {
									text.alignment = 0x1004;
									return text;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000598")]
	[Address(RVA = "0x528B540", Offset = "0x528A540", VA = "0x528B540")]
	private static void ApplySliderMeasure(GameObject go, GisketchStyleDefinition style)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplySliderMeasure): clean
		uint uVar1;
		String pSVar2;
		bool bVar3;
		LayoutElement pUVar4;
		GisketchLength pGVar5;
		float fVar6;

		if (go == null) goto label_0538b78a;
		pUVar4 = go.GetComponent<LayoutElement>();
		if (pUVar4 == null) {
			pUVar4 = go.AddComponent<LayoutElement>() ;
			if (style != null) goto label_0538b5b3;
	label_0538b753: ;
			pGVar5 = null;
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (style == null) goto label_0538b753;
	label_0538b5b3: ;
			pGVar5 = style.width;
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		fVar6 = 280.0;
		if (pGVar5 != null) {
			pSVar2 = pGVar5.unit;
			if (((typeof(GisketchScreenBuilder))._2). cctor_finished_or_no_cctor == 0) {
			}
			bVar3 = String.Equals(pSVar2, "point", 5);
			fVar6 = 280.0;
			if (bVar3) {
				fVar6 = pGVar5.value;
			}
		}
		if (pUVar4 != null) {
			pUVar4.set_preferredWidth(fVar6);
			if (style == null) {
				pGVar5 = null;
				uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
			}
			else {
				pGVar5 = style.height;
				uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			fVar6 = 42.0;
			if (pGVar5 != null) {
				pSVar2 = pGVar5.unit;
				if (((typeof(GisketchScreenBuilder))._2). cctor_finished_or_no_cctor == 0) {
				}
				bVar3 = String.Equals(pSVar2, "point", 5);
				fVar6 = 42.0;
				if (bVar3) {
					fVar6 = pGVar5.value;
				}
			}
			pUVar4.set_preferredHeight(fVar6);
			return;
		}
	label_0538b78a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000599")]
	[Address(RVA = "0x527E470", Offset = "0x527D470", VA = "0x527E470")]
	private static void BuildSpriteButton(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildSpriteButton): 31 lines keep C-only constructs
		GisketchNodeDefinition* targetAddress;
		GisketchBuildContext* targetAddress_00;
		GameObject* targetAddress_01;
		GisketchNodeDefinition pGVar1;
		GisketchTheme __this;
		UnityEvent __this_00;
		Il2CppType handle;
		GisketchScreenBuilder.c__DisplayClass84_0 __this_01;
		Type[] components;
		Type obj;
		object pIVar2;
		GameObject pUVar3;
		Transform __this_02;
		Transform parent;
		RectTransform rect;
		Image value;
		Image image;
		GisketchButtonInputSource pGVar4;
		GisketchButtonSound pGVar5;
		Button __this_03;
		GisketchFocusRing __this_04;
		GisketchSpriteButtonFeedback __this_05;
		UnityAction __this_06;
		MethodInfo pMVar6;
		Color UVar7;

		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchScreenBuilder.c__DisplayClass84_0));
		__this_01 = new GisketchScreenBuilder.c__DisplayClass84_0();
		if (__this_01 != null) {
			targetAddress = &__this_01.node;
			__this_01.node = node;
			targetAddress_00 = &__this_01.context;
			__this_01.context = context;
			targetAddress_01 = &__this_01.go;
			__this_01.go = go;
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
				pUVar3 = new GameObject("AoTTG Sprite Button Face", components);
				if (pUVar3 != null) {
					__this_02 = pUVar3.transform;
					if (*targetAddress_01 != null) {
						parent = (*targetAddress_01).transform;
						if (__this_02 != null) {
							__this_02.SetParent(parent, false);
							pMVar6 = MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform;
							rect = pUVar3.GetComponent<RectTransform>();
							GisketchScreenBuilder.Stretch(rect);
							if (*targetAddress_01 != null) {
								value = (*targetAddress_01).GetComponent<Image>();
								if (value == null) {
									if (*targetAddress_01 == null) goto label_0537ea56;
									value = (*targetAddress_01).AddComponent<Image>() ;
									if (value == null) goto label_0537ea56;
								}
								value.set_color((Color)ZEXT816(0));
								value.set_raycastTarget(true);
								pGVar1 = *targetAddress;
								pMVar6 = (MethodInfo)*targetAddress_00;
								image = GisketchScreenBuilder.BuildSpriteImage(pUVar3, pGVar1, style, (GisketchBuildContext)pMVar6, true, false);
								if (*targetAddress_01 != null) {
									pGVar4 = (*targetAddress_01).AddComponent<GisketchButtonInputSource>();
									__this_01.inputSource = pGVar4;
									pUVar3 = __this_01.go;
									if (pUVar3 != null) {
										pGVar5 = pUVar3.AddComponent<GisketchButtonSound>();
										__this_01.sound = pGVar5;
										pGVar1 = __this_01.node;
										if ((pGVar1 != null) &&(pGVar5 = __this_01.sound, pGVar5 != null)) {
											pGVar5._action = pGVar1.action;
											if (*targetAddress_01 != null) {
												__this_03 = (*targetAddress_01).AddComponent<Button>();
												if (__this_03 != null) {
													__this_03.targetGraphic = (Graphic)value;
													__this_03.transition = 0;
													__this_03.navigation = (Navigation)ZEXT840(3);
													if (*targetAddress_01 != null) {
														(*targetAddress_01).AddComponent<GisketchDisabledSelectableOpacity>();
														if (*targetAddress_00 != null) {
															pUVar3 = *targetAddress_01;
															__this = ((*targetAddress_00).fields).Theme;
															if (pUVar3 != null) {
																__this_04 = pUVar3.AddComponent<GisketchFocusRing>();
																if (__this != null) {
																	UVar7.b = 1.0;
																	UVar7.a = 1.0;
																	UVar7.r = 1.0;
																	UVar7.g = 1.0;
																	UVar7 = __this.GetColor("primary", UVar7);
																	UVar7 = __this.GetColor("focusRing", UVar7);
																	if (__this_04 != null) {
																		__this_04.Setup(UVar7, 3.0, 5.0, 14.0, true);
																		if (*targetAddress_01 != null) {
																			__this_05 = (*targetAddress_01).AddComponent<GisketchSpriteButtonFeedback>();
																			if (__this_05 !=null) {
																				__this_05.Setup(rect);
																				GisketchScreenBuilder.ApplySpriteButtonMeasure(__this_01.go, image, style);
																				__this_00 = (UnityEvent)__this_03.m_OnClick;
																				__this_06 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																				__this_06 = new UnityAction((object)__this_01, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass84_0_BuildSpriteButton_b__0);
																				if (__this_00 != null) {
																					__this_00.AddListener(__this_06);
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
	label_0537ea56: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600059A")]
	[Address(RVA = "0x528BAF0", Offset = "0x528AAF0", VA = "0x528BAF0")]
	private static void ApplySpriteButtonMeasure(GameObject go, Image image, GisketchStyleDefinition style)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplySpriteButtonMeasure): 3 lines keep C-only constructs
		uint uVar1;
		Object x;
		Sprite __this;
		String pSVar2;
		bool bVar3;
		LayoutElement pUVar4;
		GisketchLength pGVar5;
		float fVar6;
		Rect UVar7;
		ulong local_38;

		bVar3 = ((Object)image != null);
		local_38 = 0x4240000042400000;
		if (bVar3) {
			if (image == null) goto label_0538bdd7;
			x = (Object)image.m_Sprite;
			bVar3 = (x != null);
			if (bVar3) {
				__this = image.m_Sprite;
				if (__this == null) goto label_0538bdd7;
				UVar7 = __this.rect;
				local_38 = UVar7._8_8_;
			}
		}
		if (go == null) goto label_0538bdd7;
		pUVar4 = go.GetComponent<LayoutElement>();
		if (pUVar4 == null) {
			pUVar4 = go.AddComponent<LayoutElement>() ;
			if (style != null) goto label_0538bc1b;
	label_0538bcf5: ;
			pGVar5 = null;
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (style == null) goto label_0538bcf5;
	label_0538bc1b: ;
			pGVar5 = style.width;
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		fVar6 = (float)local_38;
		if (Il2CppMethodInitialized_07542ac4 == false) {
			Il2CppMethodInitialized_07542ac4 = true;
			if (pGVar5 != null) goto label_0538bc46;
		}
		else if (pGVar5 != null) {
	label_0538bc46: ;
			pSVar2 = pGVar5.unit;
			bVar3 = String.Equals(pSVar2, "point", 5);
			if (bVar3) {
				fVar6 = pGVar5.value;
			}
		}
		if (pUVar4 != null) {
			pUVar4.set_preferredWidth(fVar6);
			if (style == null) {
				pGVar5 = null;
			}
			else {
				pGVar5 = style.height;
			}
			if (pGVar5 != null) {
				pSVar2 = pGVar5.unit;
				if (((typeof(GisketchScreenBuilder))._2). cctor_finished_or_no_cctor == 0) {
				}
				bVar3 = String.Equals(pSVar2, "point", 5);
				if (bVar3) {
					local_38._4_4_ = pGVar5.value;
				}
			}
			pUVar4.set_preferredHeight(local_38._4_4_);
			return;
		}
	label_0538bdd7: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600059B")]
	[Address(RVA = "0x5280170", Offset = "0x527F170", VA = "0x5280170")]
	private static void BuildToggle(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context, bool radio)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildToggle): 43 lines keep C-only constructs
		GisketchScreenBuilder.c__DisplayClass86_0 targetAddress;
		GisketchBuildContext* targetAddress_00;
		GameObject* targetAddress_01;
		GameObject pUVar1;
		GisketchTheme pGVar2;
		GisketchNodeDefinition pGVar3;
		GisketchBuildContext context_00;
		UnityEngine_Events_UnityEvent_bool__o __this;
		bool bVar4;
		bool bVar5;
		GisketchScreenBuilder.c__DisplayClass86_0 __this_00;
		Image pUVar6;
		Toggle pUVar7;
		Transform pUVar8;
		RectTransform parent;
		RectTransform __this_01;
		GisketchToggleFeedback __this_02;
		GisketchFocusRing __this_03;
		UnityAction<T0> call;
		Toggle* targetAddress_02;
		undefined7 in_register_00000081;
		MethodInfo method_00;
		Color UVar10;
		TextMeshProUGUI pTStack_98;
		RectTransform pUStack_78;

		method_00 = (MethodInfo)CONCAT71(in_register_00000081, radio);
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchScreenBuilder.c__DisplayClass86_0));
		__this_00 = new GisketchScreenBuilder.c__DisplayClass86_0();
		if (__this_00 != null) {
			targetAddress = &__this_00.fields;
			__this_00.node = node;
			targetAddress_00 = &__this_00.context;
			__this_00.context = context;
			targetAddress_01 = &__this_00.go;
			__this_00.go = go;
			pUVar1 = __this_00.go;
			if ((pUVar1 != null) &&(pUVar6 = pUVar1.AddComponent<Image>() , pUVar6 != null)) {
				pUVar6.set_color((Color)ZEXT816(0));
				pUVar6.set_raycastTarget(true);
				if (*targetAddress_01 != null) {
					pUVar7 = (*targetAddress_01).AddComponent<Toggle>();
					targetAddress_02 = &__this_00.toggle;
					__this_00.toggle = pUVar7;
					pUVar7 = __this_00.toggle;
					if (pUVar7 != null) {
						pUVar7.transition = 0 ;
						if (*targetAddress_02 != null) {
							(*targetAddress_02).navigation = (Navigation)ZEXT840(3);
							if (*targetAddress_01 != null) {
								(*targetAddress_01).AddComponent<GisketchDisabledSelectableOpacity>();
								if (*targetAddress_01 != null) {
									pUVar8 = (*targetAddress_01).transform;
									if (*targetAddress_00 != null) {
										pGVar2 = ((*targetAddress_00).fields).Theme;
										if ((typeof(GisketchScreenBuilder)._2). cctor_finished_or_no_cctor == 0) {
										}
										parent = GisketchScreenBuilder.ToggleBox(pUVar8, pGVar2, radio);
										if (*targetAddress_00 != null) {
											__this_01 = GisketchScreenBuilder.ToggleMark(parent, ((*targetAddress_00).fields).Theme, radio);
											if (targetAddress.node != null) {
												pUStack_78 = null;
												bVar4 = String.IsNullOrEmpty(targetAddress.node.icon);
												if (!bVar4) {
													if (*targetAddress_01 == null) goto label_053807ec;
													pUVar8 = (*targetAddress_01).transform;
													pGVar3 = targetAddress.node;
													if ((typeof(GisketchScreenBuilder)._2). cctor_finished_or_no_cctor == 0) {
														il2cpp_codegen_runtime_class_init(typeof(GisketchScreenBuilder)) ;
													}
													pUStack_78 = GisketchScreenBuilder.ToggleIcon(pUVar8, pGVar3);
												}
												if (targetAddress.node != null) {
													pTStack_98 = null;
													bVar5 = String.IsNullOrEmpty(targetAddress.node.text);
													if (!bVar5 || bVar4) {
														if (*targetAddress_01 == null) goto label_053807ec;
														pUVar8 = (*targetAddress_01).transform;
														pGVar3 = targetAddress.node;
														context_00 = *targetAddress_00;
														if ((typeof(GisketchScreenBuilder)._2). cctor_finished_or_no_cctor == 0) {
														}
														pTStack_98 = GisketchScreenBuilder.ToggleLabel(pUVar8, pGVar3, context_00, !bVar4);
													}
													if (parent != null) {
														pUVar7 = *targetAddress_02;
														pUVar6 = parent.GetComponent<Image>();
														if ((pUVar7 != null) &&(pUVar7.targetGraphic = (Graphic)pUVar6, __this_01 != null)) {
															pUVar7 = *targetAddress_02;
															pUVar6 = __this_01.GetComponent<Image>();
															if (pUVar7 != null) {
																pUVar7.graphic = (Graphic)pUVar6;
																if (targetAddress.node !=null) {
																	pUVar7 = *targetAddress_02;
																	bVar4 = String.Equals(targetAddress.node.value, "true", 5);
																	if (pUVar7 != null) {
																		pUVar7.isOn = bVar4;
																		if ((*targetAddress_01 != null) &&(__this_02 = (*targetAddress_01).AddComponent<GisketchToggleFeedback>(), __this_02 != null)) {
																			__this_02.Setup(*targetAddress_02, pTStack_98, null, null, null);
																			if (*targetAddress_00 !=null) {
																				pUVar1 = *targetAddress_01;
																				pGVar2 = ((*targetAddress_00).fields).Theme;
																				if ((typeof(GisketchScreenBuilder)._2). cctor_finished_or_no_cctor == 0) {
																				}
																				if ((pUVar1 != null) &&(__this_03 = pUVar1.AddComponent<GisketchFocusRing>(), pGVar2 != null)) {
																					UVar10.b = 1.0;
																					UVar10.a = 1.0;
																					UVar10.r = 1.0;
																					UVar10.g = 1.0;
																					UVar10 = pGVar2.GetColor("primary", UVar10);
																					UVar10 = pGVar2.GetColor("focusRing", UVar10);
																					if (__this_03 != null) {
																						__this_03.Setup(UVar10, 3.0, 5.0, 14.0, true);
																						pUVar1 = *targetAddress_01;
																						bVar4 = ((Object)pUStack_78 != null);
																						GisketchScreenBuilder.ApplyToggleMeasure(pUVar1, style, pTStack_98, bVar4);
																						if (*targetAddress_02 != null) {
																							__this = (UnityEngine_Events_UnityEvent_bool__o)((*targetAddress_02).fields).onValueChanged;
																							call = (UnityAction<T0>)il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction<bool>));
																							call = new UnityAction<bool>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass86_0_BuildToggle_b__0);
																							if (__this != null) {
																								__this.AddListener(call);
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
				}
			}
		}
	label_053807ec: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x527FCC0", Offset = "0x527ECC0", VA = "0x527FCC0")]
	private static void BuildSwitch(GameObject go, GisketchNodeDefinition node, GisketchStyleDefinition style, GisketchBuildContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildSwitch): 37 lines keep C-only constructs
		GisketchBuildContext* targetAddress;
		GameObject* targetAddress_00;
		GameObject pUVar1;
		GisketchNodeDefinition pGVar2;
		GisketchTheme pGVar3;
		UnityEngine_Events_UnityEvent_bool__o __this;
		bool value;
		GisketchScreenBuilder.c__DisplayClass87_0 __this_00;
		Image pUVar4;
		Toggle pUVar5;
		Transform parent;
		RectTransform parent_00;
		RectTransform switchThumb;
		GisketchToggleFeedback __this_01;
		GisketchFocusRing __this_02;
		UnityAction<T0> call;
		Toggle* targetAddress_01;
		Color UVar6;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchScreenBuilder.c__DisplayClass87_0));
		__this_00 = new GisketchScreenBuilder.c__DisplayClass87_0();
		if (__this_00 != null) {
			__this_00.node = node;
			targetAddress = &__this_00.context;
			__this_00.context = context;
			targetAddress_00 = &__this_00.go;
			__this_00.go = go;
			pUVar1 = __this_00.go;
			if (pUVar1 != null) {
				pUVar4 = pUVar1.AddComponent<Image>();
				if (pUVar4 != null) {
					pUVar4.set_color((Color)ZEXT816(0));
					pUVar4.set_raycastTarget(true);
					if (*targetAddress_00 != null) {
						pUVar5 = (*targetAddress_00).AddComponent<Toggle>();
						targetAddress_01 = &__this_00.toggle;
						__this_00.toggle = pUVar5;
						pUVar5 = __this_00.toggle;
						if (pUVar5 != null) {
							pUVar5.transition = 0;
							if (*targetAddress_01 != null) {
								(*targetAddress_01).navigation = (Navigation)ZEXT840(3);
								if (*targetAddress_00 != null) {
									(*targetAddress_00).AddComponent<GisketchDisabledSelectableOpacity>();
									pGVar2 = __this_00.node;
									if (pGVar2 != null) {
										pUVar5 = *targetAddress_01;
										value = String.Equals(pGVar2.value, "true", 5);
										if (pUVar5 != null) {
											pUVar5.isOn = value;
											if (*targetAddress_00 != null) {
												parent = (*targetAddress_00).transform;
												if (*targetAddress != null) {
													pGVar3 = ((*targetAddress).fields).Theme;
													if ((typeof(GisketchScreenBuilder)._2). cctor_finished_or_no_cctor == 0) {
														il2cpp_codegen_runtime_class_init(typeof(GisketchScreenBuilder)) ;
													}
													parent_00 = GisketchScreenBuilder.SwitchTrack(parent, pGVar3);
													if (*targetAddress != null) {
														switchThumb = GisketchScreenBuilder.SwitchThumb(parent_00, ((*targetAddress).fields).Theme);
														if (parent_00 != null) {
															pUVar4 = parent_00.GetComponent<Image>();
															if (*targetAddress_01 != null) {
																(*targetAddress_01).targetGraphic = (Graphic)pUVar4;
																if (*targetAddress_00 != null) {
																	__this_01 = (*targetAddress_00).AddComponent<GisketchToggleFeedback>();
																	if ((*targetAddress !=null) &&(__this_01 != null)) {
																		__this_01.Setup(*targetAddress_01, null, pUVar4, switchThumb, ((*targetAddress).fields).Theme);
																		if (*targetAddress !=null) {
																			pUVar1 = *targetAddress_00;
																			pGVar3 = ((*targetAddress).fields).Theme;
																			if (pUVar1 != null) {
																				__this_02 = pUVar1.AddComponent<GisketchFocusRing>();
																				if (pGVar3 != null) {
																					UVar6.b = 1.0;
																					UVar6.a = 1.0;
																					UVar6.r = 1.0;
																					UVar6.g = 1.0;
																					UVar6 = pGVar3.GetColor("primary", UVar6);
																					UVar6 = pGVar3.GetColor("focusRing", UVar6);
																					if (__this_02 != null) {
																						__this_02.Setup(UVar6, 3.0, 5.0, 14.0, true);
																						GisketchScreenBuilder.ApplySwitchMeasure(*targetAddress_00, style);
																						if (*targetAddress_01 != null) {
																							__this = (UnityEngine_Events_UnityEvent_bool__o)((*targetAddress_01).fields).onValueChanged;
																							call = (UnityAction<T0>)il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction<bool>));
																							call = new UnityAction<bool>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass87_0_BuildSwitch_b__0);
																							if (__this != null) {
																								__this.AddListener(call);
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
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x528BDE0", Offset = "0x528ADE0", VA = "0x528BDE0")]
	private static RectTransform ToggleBox(Transform parent, GisketchTheme theme, bool radio)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ToggleBox): 3 lines keep C-only constructs
		float fVar1;
		String pSVar2;
		GisketchLength pGVar3;
		Vector2 value;
		Il2CppType handle;
		bool bVar4;
		GisketchStyleDefinition style;
		String* ppSVar5;
		Type[] components;
		Type obj;
		object pIVar6;
		GameObject __this;
		Transform __this_00;
		RectTransform __this_01;

		if (theme != null) {
			style = theme.GetStyle("checkBox");
			if (radio) {
				ppSVar5 = &"AoTTG Radio Box";
			}
			else {
				ppSVar5 = &"AoTTG Check Box";
			}
			pSVar2 = *ppSVar5;
			components = (Type[])new Type[1];
			handle = TypeRef_UnityEngine_RectTransform;
			obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			if (components != null) {
				if (obj != null) {
					pIVar6 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class);
					if (pIVar6 == null) {
						pIVar6 = new ArrayTypeMismatchException();
						throw pIVar6;
					}
				}
				if ((int)components.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				components[0] = obj;
				__this = new GameObject(pSVar2, components);
				if (__this != null) {
					__this_00 = __this.transform;
					if (__this_00 != null) {
						__this_00.SetParent(parent, false);
						__this_01 = __this.GetComponent<RectTransform>();
						if (style != null) {
							pGVar3 = style.height;
							fVar1 = 26.0;
							if (pGVar3 != null) {
								pSVar2 = pGVar3.unit;
								bVar4 = String.Equals(pSVar2, "point", 5);
								if (bVar4) {
									fVar1 = pGVar3.value;
								}
							}
							if (__this_01 != null) {
								__this_01.anchorMin = (Vector2)0x3f00000000000000;
								__this_01.anchorMax = (Vector2)0x3f00000000000000;
								__this_01.pivot = (Vector2)0x3f00000000000000;
								value.y = fVar1;
								value.x = fVar1;
								__this_01.sizeDelta = value;
								GisketchScreenBuilder.ApplyImage(__this, style, theme, style.background, false);
								return __this_01;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x528C0D0", Offset = "0x528B0D0", VA = "0x528C0D0")]
	private static RectTransform ToggleMark(RectTransform parent, GisketchTheme theme, bool radio)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ToggleMark): 3 lines keep C-only constructs
		float fVar1;
		String pSVar2;
		GisketchLength pGVar3;
		Vector2 value;
		Il2CppType handle;
		bool bVar4;
		GisketchStyleDefinition style;
		String* ppSVar5;
		Type[] components;
		Type obj;
		object pIVar6;
		GameObject __this;
		Transform __this_00;
		RectTransform __this_01;

		if (theme != null) {
			style = theme.GetStyle("checkMark");
			if (radio) {
				ppSVar5 = &"AoTTG Radio Mark";
			}
			else {
				ppSVar5 = &"AoTTG Check Mark";
			}
			pSVar2 = *ppSVar5;
			components = (Type[])new Type[1];
			handle = TypeRef_UnityEngine_RectTransform;
			obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			if (components != null) {
				if (obj != null) {
					pIVar6 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class);
					if (pIVar6 == null) {
						pIVar6 = new ArrayTypeMismatchException();
						throw pIVar6;
					}
				}
				if ((int)components.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				components[0] = obj;
				__this = new GameObject(pSVar2, components);
				if (__this != null) {
					__this_00 = __this.transform;
					if (__this_00 != null) {
						__this_00.SetParent((Transform)parent, false);
						__this_01 = __this.GetComponent<RectTransform>();
						if (style != null) {
							pGVar3 = style.height;
							fVar1 = 16.0;
							if (pGVar3 != null) {
								pSVar2 = pGVar3.unit;
								bVar4 = String.Equals(pSVar2, "point", 5);
								if (bVar4) {
									fVar1 = pGVar3.value;
								}
							}
							if (__this_01 != null) {
								__this_01.anchorMin = (Vector2)0x3f0000003f000000;
								__this_01.anchorMax = (Vector2)0x3f0000003f000000;
								value.y = fVar1;
								value.x = fVar1;
								__this_01.sizeDelta = value;
								GisketchScreenBuilder.ApplyImage(__this, style, theme, style.background, false);
								return __this_01;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x528C3B0", Offset = "0x528B3B0", VA = "0x528C3B0")]
	private static RectTransform ToggleIcon(Transform parent, GisketchNodeDefinition node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ToggleIcon): 3 lines keep C-only constructs
		String resourcePath;
		Il2CppType handle;
		Type[] components;
		Type pSVar1;
		object pIVar2;
		GameObject __this;
		Transform __this_00;
		RectTransform __this_01;
		Image __this_02;
		Sprite value;
		Color UVar3;

		components = (Type[])new Type[3];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) {
	label_0538c6f7: ;
			throw new NullReferenceException();
		}
		if (pSVar1 != null) {
			pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class);
			if (pIVar2 == null) goto label_0538c701;
		}
		if ((int)components.Length != 0) {
			components[0] = pSVar1;
			pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_CanvasRenderer);
			if (pSVar1 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class);
				if (pIVar2 == null) goto label_0538c701;
			}
			if ((components.Length & 0xfffffffe) != 0) {
				components[1] = pSVar1;
				pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Image);
				if (pSVar1 != null) {
					pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class) ;
					if (pIVar2 == null) {
	label_0538c701: ;
						pIVar2 = new ArrayTypeMismatchException();
						throw pIVar2;
					}
				}
				if (2 < (uint)components.Length) {
					components[2] = pSVar1;
					__this = new GameObject("AoTTG Toggle Icon", components);
					if (__this != null) {
						__this_00 = __this.transform;
						if (__this_00 != null) {
							__this_00.SetParent(parent, false);
							__this_01 = __this.GetComponent<RectTransform>();
							if (__this_01 != null) {
								__this_01.anchorMin = (Vector2)0x3f00000000000000;
								__this_01.anchorMax = (Vector2)0x3f00000000000000;
								__this_01.pivot = (Vector2)0x3f00000000000000;
								__this_01.anchoredPosition = (Vector2)0x42080000;
								__this_01.sizeDelta = (Vector2)0x41f0000041f00000;
								__this_02 = __this.GetComponent<Image>();
								if (node != null) {
									resourcePath = node.icon;
									value = GisketchSpriteLoader.Load(resourcePath);
									if (__this_02 != null) {
										__this_02.sprite = value;
										__this_02.preserveAspect = true;
										__this_02.set_raycastTarget(false);
										UVar3.b = 1.0;
										UVar3.a = 1.0;
										UVar3.r = 1.0;
										UVar3.g = 1.0;
										__this_02.set_color(UVar3);
										return __this_01;
									}
								}
							}
						}
					}
					goto label_0538c6f7;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x528C710", Offset = "0x528B710", VA = "0x528C710")]
	private static TextMeshProUGUI ToggleLabel(Transform parent, GisketchNodeDefinition node, GisketchBuildContext context, bool hasIcon)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ToggleLabel): 1 lines keep C-only constructs
		GisketchTheme __this;
		Il2CppType handle;
		Type[] components;
		Type obj;
		object pIVar1;
		GameObject __this_00;
		Transform __this_01;
		RectTransform __this_02;
		TextMeshProUGUI text;
		GisketchNodeDefinition __this_03;
		GisketchStyleDefinition style;
		Vector2 value;
		uint uVar2;

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
			__this_00 = new GameObject("AoTTG Toggle Label", components);
			if (__this_00 != null) {
				__this_01 = __this_00.transform;
				if (__this_01 != null) {
					__this_01.SetParent(parent, false);
					__this_02 = __this_00.GetComponent<RectTransform>();
					if (__this_02 != null) {
						__this_02.anchorMin = (Vector2)0x0;
						__this_02.anchorMax = (Vector2)(Vector2.oneVector);
						if (hasIcon) {
							uVar2 = 0x428c0000;
						}
						else {
							uVar2 = 0x42080000;
						}
						value.y = 0.0;
						value.x = (float)uVar2;
						__this_02.offsetMin = value;
						__this_02.offsetMax = (Vector2)(Vector2.zeroVector);
						text = __this_00.AddComponent<TextMeshProUGUI>();
						__this_03 = new GisketchNodeDefinition();
						if ((node != null) &&(__this_03 != null)) {
							__this_03.text = node.text;
							__this_03.style = "controlLabel";
							if ((context != null) &&(__this = context.Theme, __this != null)) {
								style = __this.GetStyle("controlLabel");
								GisketchScreenBuilder.ApplyText(text, __this_03, style, context) ;
								if (text != null) {
									text.set_raycastTarget(false);
									return text;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x528CE00", Offset = "0x528BE00", VA = "0x528CE00")]
	private static RectTransform SwitchTrack(Transform parent, GisketchTheme theme)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SwitchTrack): 1 lines keep C-only constructs
		float fVar1;
		GisketchLength pGVar2;
		String pSVar3;
		Vector2 value;
		Il2CppType handle;
		bool bVar4;
		GisketchStyleDefinition style;
		Type[] components;
		Type obj;
		object pIVar5;
		GameObject __this;
		Transform __this_00;
		RectTransform __this_01;
		float fVar6;

		if (theme != null) {
			style = theme.GetStyle("switchTrack");
			components = (Type[])new Type[1];
			handle = TypeRef_UnityEngine_RectTransform;
			obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			if (components != null) {
				if (obj != null) {
					pIVar5 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class);
					if (pIVar5 == null) {
						pIVar5 = new ArrayTypeMismatchException();
						throw pIVar5;
					}
				}
				if ((int)components.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				components[0] = obj;
				__this = new GameObject("AoTTG Switch Track", components);
				if (__this != null) {
					__this_00 = __this.transform;
					if (__this_00 != null) {
						__this_00.SetParent(parent, false);
						__this_01 = __this.GetComponent<RectTransform>();
						if (__this_01 != null) {
							__this_01.anchorMin = (Vector2)0x3f00000000000000;
							__this_01.anchorMax = (Vector2)0x3f00000000000000;
							__this_01.pivot = (Vector2)0x3f00000000000000;
							if (style != null) {
								pGVar2 = style.width;
								fVar1 = 52.0;
								if (pGVar2 != null) {
									pSVar3 = pGVar2.unit;
									bVar4 = String.Equals(pSVar3, "point", 5);
									if (bVar4) {
										fVar1 = pGVar2.value;
									}
								}
								pGVar2 = style.height;
								fVar6 = 26.0;
								if (pGVar2 != null) {
									pSVar3 = pGVar2.unit;
									bVar4 = String.Equals(pSVar3, "point", 5);
									fVar6 = 26.0;
									if (bVar4) {
										fVar6 = pGVar2.value;
									}
								}
								value.y = fVar6;
								value.x = fVar1;
								__this_01.sizeDelta = value;
								GisketchScreenBuilder.ApplyImage(__this, style, theme, style.background, false);
								return __this_01;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x528D140", Offset = "0x528C140", VA = "0x528D140")]
	private static RectTransform SwitchThumb(RectTransform parent, GisketchTheme theme)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SwitchThumb): 1 lines keep C-only constructs
		GisketchLength pGVar1;
		String pSVar2;
		Vector2 value;
		Il2CppType handle;
		bool bVar3;
		GisketchStyleDefinition style;
		Type[] components;
		Type obj;
		object pIVar4;
		GameObject __this;
		Transform __this_00;
		RectTransform __this_01;
		float fVar5;
		float fVar6;

		if (theme != null) {
			style = theme.GetStyle("switchThumb");
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
				__this = new GameObject("AoTTG Switch Thumb", components);
				if (__this != null) {
					__this_00 = __this.transform;
					if (__this_00 != null) {
						__this_00.SetParent((Transform)parent, false);
						__this_01 = __this.GetComponent<RectTransform>();
						if (style != null) {
							pGVar1 = style.height;
							fVar5 = 22.0;
							if (pGVar1 != null) {
								pSVar2 = pGVar1.unit;
								bVar3 = String.Equals(pSVar2, "point", 5);
								fVar5 = 22.0;
								if (bVar3) {
									fVar5 = pGVar1.value;
								}
							}
							if (__this_01 != null) {
								__this_01.anchorMin = (Vector2)0x3f00000000000000;
								__this_01.anchorMax = (Vector2)0x3f00000000000000;
								__this_01.pivot = (Vector2)0x3f00000000000000;
								pGVar1 = style.width;
								fVar6 = fVar5;
								if (pGVar1 != null) {
									pSVar2 = pGVar1.unit;
									bVar3 = String.Equals(pSVar2, "point", 5);
									if (bVar3) {
										fVar6 = pGVar1.value;
									}
								}
								value.y = fVar5;
								value.x = fVar6;
								__this_01.sizeDelta = value;
								GisketchScreenBuilder.ApplyImage(__this, style, theme, style.background, style.reliefGradient.value);
								return __this_01;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x528CA60", Offset = "0x528BA60", VA = "0x528CA60")]
	private static void ApplyToggleMeasure(GameObject go, GisketchStyleDefinition style, TextMeshProUGUI label, bool hasIcon)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyToggleMeasure): clean
		uint uVar1;
		Vector2 UVar2;
		bool bVar3;
		LayoutElement pUVar4;
		String pSVar5;
		GisketchLength pGVar6;
		float fVar7;
		float local_4c;

		if (go == null) goto label_0538cdf9;
		pUVar4 = go.GetComponent<LayoutElement>();
		if (pUVar4 == null) {
			pUVar4 = go.AddComponent<LayoutElement>() ;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar3 = ((Object)label != null);
		if (bVar3) {
			if (label == null) goto label_0538cdf9;
			pSVar5 = label.get_text();
			UVar2 = label.GetPreferredValues(pSVar5);
			fVar7 = UVar2.x;
			if (!hasIcon) goto label_0538cb3d;
	label_0538cb8c: ;
			bVar3 = ((Object)label != null);
			local_4c = 72.0;
			if (bVar3) {
				if (label == null) goto label_0538cdf9;
				pSVar5 = label.get_text();
				bVar3 = String.IsNullOrEmpty(pSVar5);
				if (!bVar3) {
					local_4c = fVar7 + 80.0;
				}
			}
		}
		else {
			fVar7 = (Vector2.zeroVector).x;
			if (hasIcon) goto label_0538cb8c;
	label_0538cb3d: ;
			local_4c = fVar7 + 44.0;
		}
		if (style == null) {
			pGVar6 = null;
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		else {
			pGVar6 = style.width;
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (pGVar6 != null) {
			pSVar5 = pGVar6.unit;
			if (((typeof(GisketchScreenBuilder))._2). cctor_finished_or_no_cctor == 0) {
			}
			bVar3 = String.Equals(pSVar5, "point", 5);
			if (bVar3) {
				local_4c = pGVar6.value;
			}
		}
		if (pUVar4 != null) {
			pUVar4.set_preferredWidth(local_4c);
			if (style == null) {
				pGVar6 = null;
				uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
			}
			else {
				pGVar6 = style.height;
				uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			fVar7 = 42.0;
			if (pGVar6 != null) {
				pSVar5 = pGVar6.unit;
				if (((typeof(GisketchScreenBuilder))._2). cctor_finished_or_no_cctor == 0) {
				}
				bVar3 = String.Equals(pSVar5, "point", 5);
				fVar7 = 42.0;
				if (bVar3) {
					fVar7 = pGVar6.value;
				}
			}
			pUVar4.set_preferredHeight(fVar7);
			return;
		}
	label_0538cdf9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x528D490", Offset = "0x528C490", VA = "0x528D490")]
	private static void ApplySwitchMeasure(GameObject go, GisketchStyleDefinition style)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplySwitchMeasure): clean
		uint uVar1;
		String pSVar2;
		bool bVar3;
		LayoutElement pUVar4;
		GisketchLength pGVar5;
		float fVar6;

		if (go == null) goto label_0538d6da;
		pUVar4 = go.GetComponent<LayoutElement>();
		if (pUVar4 == null) {
			pUVar4 = go.AddComponent<LayoutElement>() ;
			if (style != null) goto label_0538d503;
	label_0538d6a3: ;
			pGVar5 = null;
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (style == null) goto label_0538d6a3;
	label_0538d503: ;
			pGVar5 = style.width;
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		fVar6 = 58.0;
		if (pGVar5 != null) {
			pSVar2 = pGVar5.unit;
			if (((typeof(GisketchScreenBuilder))._2). cctor_finished_or_no_cctor == 0) {
			}
			bVar3 = String.Equals(pSVar2, "point", 5);
			fVar6 = 58.0;
			if (bVar3) {
				fVar6 = pGVar5.value;
			}
		}
		if (pUVar4 != null) {
			pUVar4.set_preferredWidth(fVar6);
			if (style == null) {
				pGVar5 = null;
				uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
			}
			else {
				pGVar5 = style.height;
				uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			fVar6 = 42.0;
			if (pGVar5 != null) {
				pSVar2 = pGVar5.unit;
				if (((typeof(GisketchScreenBuilder))._2). cctor_finished_or_no_cctor == 0) {
				}
				bVar3 = String.Equals(pSVar2, "point", 5);
				fVar6 = 42.0;
				if (bVar3) {
					fVar6 = pGVar5.value;
				}
			}
			pUVar4.set_preferredHeight(fVar6);
			return;
		}
	label_0538d6da: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x528D750", Offset = "0x528C750", VA = "0x528D750")]
	public static void ResetLayoutSettleCounters()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ResetLayoutSettleCounters): clean

		GisketchScreenBuilder._measurementSettleCalls = 0;
		GisketchScreenBuilder._canvasFlushes = 0;
		GisketchScreenBuilder._flexRefreshes = 0;
		GisketchScreenBuilder._scrollbarPasses = 0;
		GisketchScreenBuilder._settleCalls = 0;
		GisketchScreenBuilder._fullSettleCalls = 0;
		GisketchScreenBuilder._targetedSettleCalls = 0;
		GisketchScreenBuilder._measurementSettleCalls = 0;
		return;
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x528D7A0", Offset = "0x528C7A0", VA = "0x528D7A0")]
	public static GameObject Build(GisketchScreenDefinition screen, GisketchTheme theme, Transform parent, IGisketchLocalizer localizer, IGisketchActionHandler actions)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$Build): clean
		GisketchUIState __this;
		GisketchBuildContext __this_00;
		GisketchView pGVar1;

		__this = new GisketchUIState();
		__this_00 = new GisketchBuildContext(null, theme, localizer, actions, __this, null, null);
		pGVar1 = GisketchScreenBuilder.BuildView(screen, parent, __this_00);
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		return pGVar1._Root_k__BackingField;
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x528D890", Offset = "0x528C890", VA = "0x528D890")]
	public static GisketchView BuildView(GisketchScreenDefinition screen, Transform parent, GisketchBuildContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildView): 16 lines keep C-only constructs
		ProfilerMarker markerPtr;
		GisketchNodeDefinition pGVar1;
		GisketchNodeDefinition[] pGVar2;
		bool bVar3;
		String pSVar4;
		GisketchView __this;
		Object __this_00;
		RectTransform rect;
		Il2CppClass klass;
		ArgumentException __this_01;
		MethodInfo pMVar5;
		GisketchScreenDefinition pGVar6;
		int local_94;
		ProfilerMarker local_90;
		ProfilerMarker local_80;
		GisketchUiPerfLog.Scope local_78;
		GisketchUiPerfLog.Scope local_58;

		local_90.m_Ptr = (ProfilerMarker)0;
		local_58._startMs._0_4_ = 0;
		local_58._startMs._4_2_ = 0;
		local_58._startMs._6_2_ = 0;
		local_58._enabled = false;
		local_58._hotLoop = false;
		local_58._26_6_ = 0;
		local_58._area = null;
		local_58._detail = null;
		local_94 = 0;
		markerPtr.m_Ptr =(ProfilerMarker)(GisketchScreenBuilder.BuildViewMarker). m_Ptr;
		if (markerPtr.m_Ptr != 0) {
			ProfilerUnsafeUtility.BeginSample((intptr_t)markerPtr.m_Ptr);
		}
		local_80 = &local_90;
		local_90.m_Ptr = markerPtr.m_Ptr;
		if (screen == null) {
			pGVar6 = (GisketchScreenDefinition)&"null";
		}
		else {
			bVar3 = String.IsNullOrEmpty(screen.id);
			pGVar6 = &screen.fields;
			if (bVar3) {
				pGVar6 = (GisketchScreenDefinition)&screen.title;
			}
		}
		pSVar4 = pGVar6.id;
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		local_78 = GisketchUiPerfLog.Time("ScreenBuilder.BuildView", pSVar4);
		local_58._startMs = local_78._startMs;
		local_58._enabled = local_78._enabled;
		local_58._hotLoop = local_78._hotLoop;
		local_58._26_6_ = local_78._26_6_;
		local_58._area = local_78._area;
		local_58._detail = local_78._detail;
		local_78._area = null;
		local_78._detail = (String)&local_58;
		if ((screen == null) ||(pGVar1 = screen.root, pGVar1 == null)) {
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this_01 = (ArgumentException)il2cpp_codegen_object_new(klass);
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Gisketch screen must have a root node.");
			__this_01 = new ArgumentException(pSVar4);
			pMVar5 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_BuildView);
			throw (object)__this_01;
		}
		pGVar2 = pGVar1.children;
		if (pGVar2 == null) {
			local_94 = 0;
		}
		else {
			local_94 = (int32_t)pGVar2.Length;
		}
		pSVar4 = local_94.ToString();
		pSVar4 = String.Concat("root build start children=", pSVar4);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		GisketchUiPerfLog.Mark("ScreenBuilder.BuildView", pSVar4);
		__this = new GisketchView();
		__this_00 = (Object)GisketchScreenBuilder.BuildNode(screen.root, parent, context, __this);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pSVar4 = __this_00.name;
		pSVar4 = String.Concat("stretch root=", pSVar4);
		GisketchUiPerfLog.Mark("ScreenBuilder.BuildView", pSVar4);
		rect = __this_00.GetComponent<RectTransform>();
		GisketchScreenBuilder.Stretch(rect);
		GisketchScreenBuilder.EnsureScreenCanvas((GameObject)__this_00);
		GisketchScreenBuilder.SettleLayout((GameObject)__this_00, 0);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.MarkLayoutSettled();
		__this.SetRoot((GameObject)__this_00);
		pSVar4 = __this_00.name;
		pSVar4 = String.Concat("view ready root=", pSVar4);
		GisketchUiPerfLog.Mark("ScreenBuilder.BuildView", pSVar4);
		local_58.Dispose();
		if (local_90.m_Ptr != 0) {
			ProfilerUnsafeUtility.EndSample((intptr_t)local_90.m_Ptr);
		}
		return __this;
	}

	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x528E3F0", Offset = "0x528D3F0", VA = "0x528E3F0")]
	public static GisketchView BuildOverlay(GisketchOverlayDefinition overlay, Transform parent, GisketchBuildContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildOverlay): 12 lines keep C-only constructs
		GisketchNodeDefinition node;
		bool bVar1;
		GisketchView __this;
		GameObject root;
		Il2CppClass klass;
		ArgumentException __this_00;
		String pSVar2;
		MethodInfo lastManagedFrame;
		GisketchOverlayDefinition pGVar3;
		GisketchUiPerfLog.Scope local_68;
		GisketchUiPerfLog.Scope local_48;

		local_68._startMs = 0;
		local_68._enabled = false;
		local_68._hotLoop = false;
		local_68._26_6_ = 0;
		local_68._area = null;
		local_68._detail = null;
		if (overlay == null) {
			pGVar3 = (GisketchOverlayDefinition)&"null";
		}
		else {
			bVar1 = String.IsNullOrEmpty(overlay.id);
			pGVar3 = &overlay.fields;
			if (bVar1) {
				pGVar3 = (GisketchOverlayDefinition)&overlay.title;
			}
		}
		pSVar2 = pGVar3.id;
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		local_48 = GisketchUiPerfLog.Time("ScreenBuilder.BuildOverlay", pSVar2);
		local_68._startMs = local_48._startMs;
		local_68._enabled = local_48._enabled;
		local_68._hotLoop = local_48._hotLoop;
		local_68._26_6_ = local_48._26_6_;
		local_68._area = local_48._area;
		local_68._detail = local_48._detail;
		local_48._area = null;
		if ((overlay == null) ||(overlay.root == null)) {
			local_48._detail = (String)&local_68;
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
			pSVar2 = il2cpp_codegen_get_runtime_metadata(&"Gisketch overlay must have a root node.");
			__this_00 = new ArgumentException(pSVar2);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_BuildOverlay);
			throw (object)__this_00;
		}
		local_48._detail = (String)&local_68;
		__this = new GisketchView();
		node = overlay.root;
		root = GisketchScreenBuilder.BuildNode(node, parent, context, __this);
		GisketchScreenBuilder.SettleLayout(root, 1);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.MarkLayoutSettled();
		__this.SetRoot(root);
		local_68.Dispose();
		return __this;
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x528E6D0", Offset = "0x528D6D0", VA = "0x528E6D0")]
	public static GameObject BuildNodeInto(GisketchNodeDefinition node, Transform parent, GisketchBuildContext context, [Optional] GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildNodeInto): 7 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		GameObject pUVar3;
		Il2CppClass pIVar4;
		ArgumentException __this;
		String message;
		MethodInfo lastManagedFrame;
		String* metadataPointer;

		if (node == null) {
			pIVar4 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this = (ArgumentException)il2cpp_codegen_object_new(pIVar4);
			metadataPointer = &"Gisketch node must not be null.";
		}
		else {
			bVar2 = ((Object)parent == null);
			if (!bVar2) {
				if (view == null) {
					view = new GisketchView();
					uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				pUVar3 = GisketchScreenBuilder.BuildNode(node, parent, context, view);
				return pUVar3;
			}
			pIVar4 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this = (ArgumentException)il2cpp_codegen_object_new(pIVar4);
			metadataPointer = &"Gisketch node parent must not be null.";
		}
		message = il2cpp_codegen_get_runtime_metadata(metadataPointer);
		__this = new ArgumentException(message);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_BuildNodeInto);
		throw (object)__this;
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x528E820", Offset = "0x528D820", VA = "0x528E820")]
	public static void SettleLayout(GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SettleLayout): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07542b13 == false) {
			Il2CppMethodInitialized_07542b13 = true;
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			GisketchScreenBuilder.SettleLayout(root, 0);
			return;
		}
		GisketchScreenBuilder.SettleLayout(root, 0);
		return;
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x528DEB0", Offset = "0x528CEB0", VA = "0x528DEB0")]
	public static void SettleLayout(GameObject root, GisketchLayoutSettleMode mode)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SettleLayout): 9 lines keep C-only constructs
		uint uVar1;
		ProfilerMarker markerPtr;
		bool bVar2;
		String pSVar3;
		String str2;
		FlexLayout flex;
		MethodInfo pMVar4;
		MethodInfo pMVar5;
		bool local_a1;
		ProfilerMarker local_a0;
		ProfilerMarker local_90;
		GisketchUiPerfLog.Scope local_88;
		GisketchUiPerfLog.Scope local_68;
		Enum local_48;

		local_68._startMs._0_4_ = 0;
		local_68._startMs._4_2_ = 0;
		local_68._startMs._6_2_ = 0;
		local_68._enabled = false;
		local_68._hotLoop = false;
		local_68._26_6_ = 0;
		local_68._area = null;
		local_68._detail = null;
		local_a1 = false;
		markerPtr.m_Ptr =(ProfilerMarker)(GisketchScreenBuilder.SettleLayoutMarker). m_Ptr;
		if (markerPtr.m_Ptr != 0) {
			ProfilerUnsafeUtility.BeginSample((intptr_t)markerPtr.m_Ptr);
		}
		local_90 = &local_a0;
		local_48.klass = (Enum)typeof(GisketchLayoutSettleMode);
		local_48.monitor = (IntPtr)0xffffffffffffffff;
		local_a0.m_Ptr = markerPtr.m_Ptr;
		pSVar3 = local_48.ToString();
		bVar2 = ((Object)root != null);
		if (bVar2) {
			if (root == null) {
				throw new NullReferenceException();
			}
			str2 = root.name;
		}
		else {
			str2 = "null";
		}
		pSVar3 = String.Concat(pSVar3, " ", str2);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		local_88 = GisketchUiPerfLog.Time("ScreenBuilder.SettleLayout", pSVar3);
		local_68._startMs = local_88._startMs;
		local_68._enabled = local_88._enabled;
		local_68._hotLoop = local_88._hotLoop;
		local_68._26_6_ = local_88._26_6_;
		local_68._area = local_88._area;
		local_68._detail = local_88._detail;
		local_88._area = null;
		local_88._detail = (String)&local_68;
		bVar2 = ((Object)root == null);
		if (!bVar2) {
			GisketchScreenBuilder.CountSettle(mode);
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
			if (mode == 0) {
				if (uVar1 == 0) {
				}
				GisketchScreenBuilder.ForceCanvases("full #1");
				bVar2 = ((Object)root != null);
				if (bVar2) {
					if (root == null) {
						throw new NullReferenceException();
					}
					flex = root.GetComponent<FlexLayout>();
					uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					flex = null;
					uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				bVar2 = ((Object)flex != null);
				if (bVar2) {
					if ((typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor == 0) {
					}
					pMVar5 = (MethodInfo *)"full #1";
					GisketchScreenBuilder.RefreshFlex(flex, "full #1");
				}
				GisketchScreenBuilder.ForceCanvases("full #2");
				local_a1 = GisketchScreenBuilder.UpdateScrollbars(root);
				pSVar3 = local_a1.ToString();
				pSVar3 = String.Concat("UpdateScrollbars changed=", pSVar3);
				GisketchUiPerfLog.Mark("ScreenBuilder.SettleLayout", pSVar3);
				if (local_a1 != false) {
					bVar2 = ((Object)flex != null);
					if (bVar2) {
						if ((typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor == 0) {
						}
						pMVar4 = (MethodInfo *)"full #2";
						GisketchScreenBuilder.RefreshFlex(flex, "full #2");
						GisketchScreenBuilder.ForceCanvases("full #3");
						GisketchScreenBuilder.UpdateScrollbars(root);
					}
				}
				GisketchFullscreenStretch.ApplyAll(root);
			}
			else {
				if (uVar1 == 0) {
				}
				GisketchScreenBuilder.SettleTargeted(root, mode == 2);
			}
		}
		local_68.Dispose();
		if (local_a0.m_Ptr != 0) {
			ProfilerUnsafeUtility.EndSample((intptr_t)local_a0.m_Ptr);
		}
		return;
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x528EE70", Offset = "0x528DE70", VA = "0x528EE70")]
	private static bool UpdateScrollbars(GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$UpdateScrollbars): 3 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		bool bVar3;
		uint uVar4;
		Object[] pSVar5;
		uint uVar6;
		byte bVar7;

		uVar6 = 0;
		bVar3 = ((Object)root == null);
		if (bVar3) {
	label_0538ef5c: ;
			return SUB41(uVar6, 0);
		}
		piVar1 = &GisketchScreenBuilder._scrollbarPasses;
		*piVar1 = *piVar1 + 1;
		if (root != null) {
			pSVar5 = root.GetComponentsInChildren<GisketchScrollbarVisibility>(true) ;
			if (pSVar5 != null) {
				uVar4 = (uint)pSVar5.Length;
				uVar6 = 0;
				if (0 < (int)uVar4) {
					bVar2 = 0;
					do {
						bVar7 = bVar2;
						if (uVar4 <= uVar6) {
							throw new IndexOutOfRangeException();
						}
						if ((GisketchScrollbarVisibility)pSVar5[(int)uVar6] ==null) goto label_0538ef69;
						bVar3 = (pSVar5[(int)uVar6]).UpdateVisibility();
						uVar6 = uVar6 + 1;
						uVar4 = (uint)pSVar5.Length;
						bVar2 = bVar7 | bVar3;
					} while ((int)uVar6 < (int)uVar4);
					uVar6 = (uint)(bVar7 | bVar3);
				}
				goto label_0538ef5c;
			}
		}
	label_0538ef69: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x528E9F0", Offset = "0x528D9F0", VA = "0x528E9F0")]
	private static void SettleTargeted(GameObject root, bool forceCanvasForMeasurement)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SettleTargeted): 8 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		ulong in_RAX;
		FlexLayout flex;
		RectTransform layoutRoot;
		String pSVar3;
		MethodInfo pMVar4;
		undefined7 in_register_00000031;
		ulong uStack_38;

		pMVar4 = (MethodInfo)CONCAT71(in_register_00000031, forceCanvasForMeasurement);
		uStack_38 = in_RAX;
		uStack_38 = uStack_38 & 0xffffffffffffff;
		flex = GisketchScreenBuilder.SettlementFlex(root);
		bVar2 = ((Object)flex != null);
		if (bVar2) {
			if (forceCanvasForMeasurement) {
				uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
				pSVar3 = "measurement";
			}
			else {
				uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
				pSVar3 = "targeted";
			}
			if (uVar1 == 0) {
			}
			GisketchScreenBuilder.RefreshFlex(flex, pSVar3);
		}
		if (root == null) {
			throw new NullReferenceException();
		}
		layoutRoot = root.GetComponent<RectTransform>();
		bVar2 = ((Object)layoutRoot != null);
		if (bVar2) {
			LayoutRebuilder.ForceRebuildLayoutImmediate(layoutRoot);
		}
		bVar2 = GisketchScreenBuilder.UpdateScrollbars(root);
		uStack_38 = CONCAT17(bVar2, (undefined7)uStack_38);
		pSVar3 = (((long)&uStack_38 + 7)).ToString();
		pSVar3 = String.Concat("UpdateScrollbars changed=", pSVar3);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		GisketchUiPerfLog.Mark("ScreenBuilder.SettleLayout", pSVar3);
		if (uStack_38._7_1_ != false) {
			bVar2 = ((Object)flex != null);
			if (bVar2) {
				if ((typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor == 0) {
				}
				GisketchScreenBuilder.RefreshFlex(flex, "targeted scrollbar");
			}
		}
		GisketchFullscreenStretch.ApplyAll(root);
		if (forceCanvasForMeasurement) {
			GisketchScreenBuilder.ForceCanvases("measurement");
		}
		return;
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x528EF70", Offset = "0x528DF70", VA = "0x528EF70")]
	private static FlexLayout SettlementFlex(GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SettlementFlex): clean
		bool bVar1;
		FlexLayout pGVar2;

		pGVar2 = null;
		bVar1 = ((Object)root == null);
		if (!bVar1) {
			if (root == null) {
				throw new NullReferenceException();
			}
			pGVar2 = root.GetComponent<FlexLayout>();
			bVar1 = ((Object)pGVar2 != null);
			if (!bVar1) {
				pGVar2 = root.GetComponentInParent<FlexLayout>();
				return pGVar2;
			}
		}
		return pGVar2;
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x528ECA0", Offset = "0x528DCA0", VA = "0x528ECA0")]
	private static void ForceCanvases(string reason)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ForceCanvases): 3 lines keep C-only constructs
		int piVar1;
		String detail;

		piVar1 = &GisketchScreenBuilder._canvasFlushes;
		*piVar1 = *piVar1 + 1;
		detail = String.Concat("ForceUpdateCanvases ", reason);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		GisketchUiPerfLog.Mark("ScreenBuilder.SettleLayout", detail);
		Canvas.ForceUpdateCanvases();
		return;
	}

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x528ED60", Offset = "0x528DD60", VA = "0x528ED60")]
	private static void RefreshFlex(FlexLayout flex, string reason)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$RefreshFlex): 3 lines keep C-only constructs
		int piVar1;
		bool bVar2;
		String detail;

		bVar2 = ((Object)flex == null);
		if (bVar2) {
			return;
		}
		piVar1 = &GisketchScreenBuilder._flexRefreshes;
		*piVar1 = *piVar1 + 1;
		detail = String.Concat("Flex RefreshRootLayoutImmediate ", reason);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		GisketchUiPerfLog.Mark("ScreenBuilder.SettleLayout", detail);
		if (flex == null) {
			throw new NullReferenceException();
		}
		flex.RefreshRootLayoutImmediate();
		return;
	}

	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x528E910", Offset = "0x528D910", VA = "0x528E910")]
	private static void CountSettle(GisketchLayoutSettleMode mode)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$CountSettle): 9 lines keep C-only constructs
		uint uVar1;
		Il2CppClass klass;
		Gisketch_Aottg2UI_Building_GisketchScreenBuilder_StaticFields pGVar2;

		if (Il2CppMethodInitialized_07542b1a == false) {
			Il2CppMethodInitialized_07542b1a = true;
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
			klass = typeof(GisketchScreenBuilder);
		}
		else {
			uVar1 = (typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor;
			klass = typeof(GisketchScreenBuilder);
		}
		typeof(GisketchScreenBuilder) =(GisketchScreenBuilder)klass;
		if (uVar1 == 0) {
			klass = typeof(GisketchScreenBuilder);
			pGVar2 = typeof(GisketchScreenBuilder).static_fields;
			pGVar2._settleCalls = pGVar2._settleCalls + 1;
		}
		else {
			pGVar2 = klass.static_fields;
			pGVar2._settleCalls = pGVar2._settleCalls + 1;
		}
		if (mode == 2) {
			if ((klass._2).cctor_finished_or_no_cctor == 0) {
				pGVar2 = typeof(GisketchScreenBuilder).static_fields;
			}
			pGVar2._measurementSettleCalls = pGVar2._measurementSettleCalls + 1;
			return;
		}
		if (mode == 0) {
			if ((klass._2).cctor_finished_or_no_cctor == 0) {
				pGVar2 = typeof(GisketchScreenBuilder).static_fields;
			}
			pGVar2._fullSettleCalls = pGVar2._fullSettleCalls + 1;
			return;
		}
		if ((klass._2).cctor_finished_or_no_cctor == 0) {
			pGVar2 = typeof(GisketchScreenBuilder).static_fields;
		}
		pGVar2._targetedSettleCalls = pGVar2._targetedSettleCalls + 1;
		return;
	}

	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x528DD70", Offset = "0x528CD70", VA = "0x528DD70")]
	private static void EnsureScreenCanvas(GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$EnsureScreenCanvas): clean
		bool bVar1;
		Canvas __this;
		GraphicRaycaster x;

		bVar1 = ((Object)root == null);
		if (bVar1) {
			return;
		}
		if (root != null) {
			__this = root.GetComponent<Canvas>();
			bVar1 = ((Object)__this == null);
			if (bVar1) {
				__this = root.AddComponent<Canvas>();
			}
			if (__this != null) {
				__this.overrideSorting = false;
				x = root.GetComponent<GraphicRaycaster>();
				bVar1 = ((Object)x == null);
				if (bVar1) {
					root.AddComponent<GraphicRaycaster>() ;
					return;
				}
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x5285710", Offset = "0x5284710", VA = "0x5285710")]
	private static GameObject BuildNode(GisketchNodeDefinition node, Transform parent, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildNode): 30 lines keep C-only constructs
		GisketchNodeDefinition[] pGVar1;
		GisketchTheme pGVar2;
		GisketchComponentRegistry pGVar3;
		Dictionary<object, object> __this;
		Il2CppType handle;
		bool bVar4;
		sbyte cVar5;
		String* ppSVar6;
		String pSVar7;
		String pSVar8;
		Type[] components;
		Type obj;
		object pIVar9;
		GameObject __this_00;
		Transform pUVar10;
		GisketchStyleDefinition style;
		FlexLayout flex;
		GisketchUIBinding __this_01;
		GisketchTooltipTrigger __this_02;
		String pSVar11;
		GisketchMotionDefinition styleMotion;
		GisketchStyleDefinition method_00;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		MethodInfo pMVar12;
		MethodInfo extraout_RDX_03;
		int iVar13;
		GisketchLayoutDefinition pGVar14;
		String* local_98;
		int local_8c;
		object local_88;
		Transform local_80;
		GisketchUiPerfLog.Scope local_78;
		GisketchUiPerfLog.Scope local_50;

		local_78._startMs._0_4_ = 0;
		local_78._startMs._4_2_ = 0;
		local_78._startMs._6_2_ = 0;
		local_78._enabled = false;
		local_78._hotLoop = false;
		local_78._26_6_ = 0;
		local_78._area = null;
		local_78._detail = null;
		if (node == null) {
			throw new NullReferenceException();
		}
		bVar4 = String.IsNullOrEmpty(node.type);
		if (bVar4) {
			ppSVar6 = &"Panel";
		}
		else {
			ppSVar6 = &node.type;
		}
		pSVar11 = ((GisketchNodeDefinition)ppSVar6).type;
		local_80 = parent;
		local_98 = &node.id;
		iVar13 = 0;
		bVar4 = String.IsNullOrEmpty(node.id);
		ppSVar6 = local_98;
		if (bVar4) {
			ppSVar6 = &"(no-id)";
		}
		pSVar7 = String.Concat(*ppSVar6, " type=", pSVar11);
		pGVar1 = node.children;
		if (pGVar1 != null) {
			iVar13 = (int32_t)pGVar1.Length;
		}
		local_8c = iVar13;
		pSVar8 = local_8c.ToString();
		pSVar7 = String.Concat(pSVar7, " children=", pSVar8);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		local_50 = GisketchUiPerfLog.Time("ScreenBuilder.BuildNode", pSVar7);
		local_78._startMs = local_50._startMs;
		local_78._enabled = local_50._enabled;
		local_78._hotLoop = local_50._hotLoop;
		local_78._26_6_ = local_50._26_6_;
		local_78._area = local_50._area;
		local_78._detail = local_50._detail;
		local_50._area = null;
		local_50._detail = (String)&local_78;
		bVar4 = String.IsNullOrEmpty(*local_98);
		if (bVar4) {
			pSVar7 = String.Concat("AoTTG ", pSVar11);
		}
		else {
			pSVar7 = *local_98;
		}
		components = (Type[])new Type[1];
		handle = TypeRef_UnityEngine_RectTransform;
		obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) {
			throw new NullReferenceException();
		}
		if ((obj != null) &&(pIVar9 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class), pIVar9 == null)) {
			pIVar9 = new ArrayTypeMismatchException();
			throw pIVar9;
		}
		if ((int)components.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		components[0] = obj;
		__this_00 = new GameObject(pSVar7, components);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pUVar10 = __this_00.transform;
		if (pUVar10 == null) {
			throw new NullReferenceException();
		}
		pUVar10.SetParent(local_80, false);
		__this_00.SetActive(node.active);
		if (context == null) {
			throw new NullReferenceException();
		}
		pGVar2 = context.Theme;
		if (pGVar2 == null) {
			throw new NullReferenceException();
		}
		style = pGVar2.GetStyle(node.style);
		bVar4 = String.IsNullOrEmpty(*local_98);
		if (bVar4) {
			local_98 = &"(no-id)";
		}
		pSVar8 = String.Concat(*local_98, " type=", pSVar11);
		pSVar7 = "ScreenBuilder.BuildNode";
		if (style == null) {
			ppSVar6 = &"null";
		}
		else {
			ppSVar6 = &style.name;
		}
		pSVar8 = String.Concat("build builtin/registry ", pSVar8, " style=", ((GisketchStyleDefinition)ppSVar6).name);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		GisketchUiPerfLog.Mark(pSVar7, pSVar8);
		pGVar3 = context.Registry;
		if (pGVar3 == null) {
			throw new NullReferenceException();
		}
		local_88 = null;
		bVar4 = String.IsNullOrEmpty(pSVar11);
		if (!bVar4) {
			__this = (Dictionary<object, object>)pGVar3._factories;
			if (__this == null) {
	label_05385f03: ;
				throw new NullReferenceException();
			}
			bVar4 = __this.TryGetValue((object)pSVar11, ref local_88);
			if (bVar4) {
				if (local_88 == null) goto label_05385f03;
				method_00 = (GisketchStyleDefinition)context;
				cVar5 = (*local_88[1].monitor)(local_88[4].klass,__this_00,node);
				if (cVar5 != false) goto label_05385c72;
			}
		}
		method_00 = style;
		GisketchScreenBuilder.BuildBuiltin(pSVar11, __this_00, node, style, context, view);
	label_05385c72: ;
		GisketchFormField.Attach(__this_00, node);
		flex = __this_00.AddComponent<FlexLayout>() ;
		pGVar14 = node.layout;
		GisketchScreenBuilder.ApplyFlex(flex, pGVar14, style);
		GisketchScreenBuilder.ApplyAspectRatio(__this_00, style);
		pGVar14 = node.layout;
		GisketchScreenBuilder.ApplyLayoutOffset(__this_00, pGVar14);
		if (node.clip != false) {
			GisketchScreenBuilder.EnsureRectMask(__this_00);
		}
		if (node.enabled.hasValue != false) {
			bVar4 = (node.enabled).Value;
			pMVar12 = extraout_RDX;
			if ((typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor == 0) {
				pMVar12 = extraout_RDX_00;
			}
			GisketchScreenBuilder.SetInteractable(__this_00, bVar4);
		}
		if ((node.bind != null) &&(context.State != null)) {
			__this_01 = __this_00.AddComponent<GisketchUIBinding>();
			if (__this_01 == null) {
				throw new NullReferenceException();
			}
			method_00 = (GisketchStyleDefinition)node.enter;
			__this_01.Setup(node.bind, context.State, (GisketchMotionDefinition)method_00, node.exit);
		}
		bVar4 = String.IsNullOrEmpty(node.tooltip);
		if ((!bVar4) ||(bVar4 = String.IsNullOrEmpty(node.tooltipKey), pMVar12 = extraout_RDX_01, !bVar4)) {
			__this_02 = __this_00.AddComponent<GisketchTooltipTrigger>();
			pSVar11 = node.tooltip;
			pSVar7 = node.tooltipKey;
			pSVar11 = GisketchScreenBuilder.ResolveTooltip(pSVar11, pSVar7, context);
			if (__this_02 == null) {
				throw new NullReferenceException();
			}
			__this_02.Setup(pSVar11, context.Theme, node.tooltipMode);
			pMVar12 = extraout_RDX_02;
		}
		pGVar2 = context.Theme;
		if ((typeof(GisketchScreenBuilder)._2).cctor_finished_or_no_cctor == 0) {
			pMVar12 = extraout_RDX_03;
		}
		styleMotion = GisketchScreenBuilder.StyleMotion(style, pGVar2);
		if (view == null) {
			throw new NullReferenceException();
		}
		pMVar12 = null;
		view.Register(node, __this_00, styleMotion);
		pUVar10 = GisketchScreenBuilder.ChildParent(__this_00);
		GisketchScreenBuilder.BuildChildren(node, pUVar10, context, view);
		local_78.Dispose();
		return __this_00;
	}

	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x528F0D0", Offset = "0x528E0D0", VA = "0x528F0D0")]
	private static RectMask2D EnsureRectMask(GameObject go)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$EnsureRectMask): clean
		bool bVar1;
		RectMask2D pUVar2;

		if (go == null) {
			throw new NullReferenceException();
		}
		pUVar2 = go.GetComponent<RectMask2D>();
		bVar1 = ((Object)pUVar2 != null);
		if (bVar1) {
			return pUVar2;
		}
		pUVar2 = go.AddComponent<RectMask2D>();
		return pUVar2;
	}

	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x528F180", Offset = "0x528E180", VA = "0x528F180")]
	private static void SetInteractable(GameObject go, bool interactable)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SetInteractable): clean
		uint uVar1;
		Object[] pSVar2;
		uint uVar3;

		if (go != null) {
			pSVar2 = go.GetComponentsInChildren<Selectable>(true);
			if (pSVar2 != null) {
				uVar1 = (uint)pSVar2.Length;
				if (0 < (int)uVar1) {
					uVar3 = 0;
					do {
						if (uVar1 <= uVar3) {
							throw new IndexOutOfRangeException();
						}
						if ((Selectable)pSVar2[(int)uVar3] == null ) goto label_0538f20e;
						(pSVar2[(int)uVar3]).interactable = interactable;
						uVar3 = uVar3 + 1;
						uVar1 = (uint)pSVar2.Length;
					} while ((int)uVar3 < (int)uVar1);
				}
				return;
			}
		}
	label_0538f20e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x528F220", Offset = "0x528E220", VA = "0x528F220")]
	private static Transform ChildParent(GameObject go)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ChildParent): clean
		bool bVar1;
		GisketchChildHost x;
		Transform pUVar2;

		if (go == null) {
	label_0538f2ea: ;
			throw new NullReferenceException();
		}
		x = go.GetComponent<GisketchChildHost>();
		bVar1 = ((Object)x != null);
		if (bVar1) {
			if (x == null) goto label_0538f2ea;
			pUVar2 = x._Parent_k__BackingField;
			bVar1 = ((Object)pUVar2 != null);
			if (bVar1) {
				return x._Parent_k__BackingField;
			}
		}
		pUVar2 = go.transform;
		return pUVar2;
	}

	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x528F2F0", Offset = "0x528E2F0", VA = "0x528F2F0")]
	private static void BuildChildren(GisketchNodeDefinition node, Transform parent, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildChildren): clean
		GisketchNodeDefinition[] pGVar1;
		GisketchNodeDefinition node_00;
		ulong uVar2;
		ulong uVar3;

		if (node == null) {
			throw new NullReferenceException();
		}
		pGVar1 = node.children;
		if ((pGVar1 != null) && (0 < (int)pGVar1.Length)) {
			uVar2 = pGVar1.Length & 0xffffffff;
			uVar3 = 0;
			do {
				if (uVar2 <= uVar3) {
					throw new IndexOutOfRangeException();
				}
				node_00 = pGVar1[uVar3];
				if (node_00 != null) {
					GisketchScreenBuilder.BuildNode(node_00, parent, context, view);
					uVar2 = (ulong)(uint)pGVar1.Length;
				}
				uVar3 = uVar3 + 1;
			} while ((long)uVar3 < (long)(int)uVar2);
		}
		return;
	}

	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x527CB30", Offset = "0x527BB30", VA = "0x527CB30")]
	private static bool EqualsType(string a, string b)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$EqualsType): clean
		bool bVar1;

		bVar1 = String.Equals(a, b, 5);
		return bVar1;
	}

	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x528DCF0", Offset = "0x528CCF0", VA = "0x528DCF0")]
	private static string ScreenLabel(GisketchScreenDefinition screen)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ScreenLabel): 2 lines keep C-only constructs
		bool bVar1;
		GisketchScreenDefinition pGVar2;

		if (screen == null) {
			pGVar2 = (GisketchScreenDefinition)&"null";
		}
		else {
			bVar1 = String.IsNullOrEmpty(screen.id);
			pGVar2 = (GisketchScreenDefinition)&screen.title;
			if (!bVar1) {
				pGVar2 = &screen.fields;
			}
		}
		return pGVar2.id;
	}

	[Token(Token = "0x60005BB")]
	[Address(RVA = "0x528E670", Offset = "0x528D670", VA = "0x528E670")]
	private static string OverlayLabel(GisketchOverlayDefinition overlay)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$OverlayLabel): 2 lines keep C-only constructs
		bool bVar1;
		GisketchOverlayDefinition pGVar2;

		if (overlay == null) {
			pGVar2 = (GisketchOverlayDefinition)&"null";
		}
		else {
			bVar1 = String.IsNullOrEmpty(overlay.id);
			pGVar2 = (GisketchOverlayDefinition)&overlay.title;
			if (!bVar1) {
				pGVar2 = &overlay.fields;
			}
		}
		return pGVar2.id;
	}

	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x528E890", Offset = "0x528D890", VA = "0x528E890")]
	private static string RootLabel(GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$RootLabel): clean
		bool bVar1;
		String pSVar2;

		bVar1 = ((Object)root != null);
		if (bVar1) {
			if (root == null) {
				throw new NullReferenceException();
			}
			return pSVar2;
		}
		return "null";
	}

	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x528F040", Offset = "0x528E040", VA = "0x528F040")]
	private static string NodeLabel(GisketchNodeDefinition node, string type)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$NodeLabel): 3 lines keep C-only constructs
		bool bVar1;
		String pSVar2;
		String* ppSVar3;

		if (node == null) {
			return "null";
		}
		bVar1 = String.IsNullOrEmpty(node.id);
		if (bVar1) {
			ppSVar3 = &"(no-id)";
		}
		else {
			ppSVar3 = &node.id;
		}
		pSVar2 = String.Concat(*ppSVar3, " type=", type);
		return pSVar2;
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x528DD50", Offset = "0x528CD50", VA = "0x528DD50")]
	private static int ChildCount(GisketchNodeDefinition node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ChildCount): clean
		GisketchNodeDefinition[] pGVar1;
		int iVar2;

		if ((node != null) &&(pGVar1 = node.children, pGVar1 != null)) {
		}
		return iVar2;
	}

	[Token(Token = "0x60005BF")]
	[Address(RVA = "0x5283C00", Offset = "0x5282C00", VA = "0x5283C00")]
	private static void MarkEditorPreview(GameObject go)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c (Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$MarkEditorPreview): clean
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScreenBuilder.c.

	// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ParseEnum<Int32Enum>: 1 lines keep C-only constructs
	private static int ParseEnum_Int32Enum(String value, int fallback)
	{
		bool bVar1;
		int local_1c;

		if (method.rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
		}
		local_1c = 0;
		bVar1 = String.IsNullOrEmpty(value);
		if (!bVar1) {
			bVar1 = Enum.TryParse<Int32Enum>(value, true, ref local_1c);
			if (bVar1) {
			}
		}
		return fallback;
	}

	// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ParseEnum<__Il2CppFullySharedGenericStructType>: 14 lines keep C-only constructs
	private static __Il2CppFullySharedGenericStructType ParseEnum___Il2CppFullySharedGenericStructType(String value, __Il2CppFullySharedGenericStructType fallback)
	{
		Il2CppMethodPointer pIVar1;
		long lVar2;
		__Il2CppFullySharedGenericStructType __src;
		bool bVar3;
		sbyte cVar4;
		Il2CppRGCTXData pIVar5;
		__Il2CppFullySharedGenericStructType UVar6;
		MethodInfo in_RCX;
		ulong __n;
		byte puVar7;
		IntPtr __s;
		__Il2CppFullySharedGenericStructType local_38;

		pIVar5 = (in_RCX.field7_0x38).rgctx_data;
		local_38 = (__Il2CppFullySharedGenericStructType)(__Il2CppFullySharedGenericStructType)fallback._tail;
		if (pIVar5 == null) {
			il2cpp_codegen_rgctx_method_init(in_RCX);
			pIVar5 = (in_RCX.field7_0x38).rgctx_data;
		}
		__n = (ulong)((pIVar5[2].klass)._2).stack_slot_size;
		lVar2 = -(__n + 0xf & 0xfffffffffffffff0);
		__s = (IntPtr)((long)&local_38 + lVar2);
		*(ulong)((long)&local_38 + lVar2 + -8) = 0x363cbb8;
		memset(__s, 0, __n);
		*(ulong)((long)&local_38 + lVar2 + -8) = 0x363cbc2;
		bVar3 = String.IsNullOrEmpty(value);
		puVar7 = (byte)((long)&local_38 + lVar2);
		if (!bVar3) {
			puVar7 = (byte)((long)&local_38 + lVar2);
			if ((g_data_07556760._2).cctor_finished_or_no_cctor == 0) {
				*(ulong)((long)&local_38 + lVar2 + -8) = 0x363cbe2;
				puVar7 = (byte)((long)&local_38 + lVar2);
			}
			pIVar1 = ((in_RCX.field7_0x38).rgctx_data).method.methodPointer;
			*(ulong)(puVar7 + -8) = 0x363cbf6;
			cVar4 = (*pIVar1)(value,1,__s);
			if (cVar4 != false) {
				*(ulong)(puVar7 + -8) = 0x363cc08;
				UVar6._tail = (byte[])memcpy(method, __s, __n);
				return (__Il2CppFullySharedGenericStructType)(__Il2CppFullySharedGenericStructType)UVar6._tail;
			}
		}
		__src._tail = local_38._tail;
		*(ulong)(puVar7 + -8) = 0x363cc19;
		UVar6._tail = (byte[])memmove(method, (IntPtr)__src._tail, __n);
		return (__Il2CppFullySharedGenericStructType)(__Il2CppFullySharedGenericStructType)UVar6._tail;
	}

	// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$.cctor: clean
	static GisketchScreenBuilder()
	{
		IntPtr iVar1;

		iVar1 = ProfilerUnsafeUtility.CreateMarker("Gisketch.ScreenBuilder.BuildView", 1, 0, 0);
		(GisketchScreenBuilder.BuildViewMarker).m_Ptr = iVar1;
		iVar1 = ProfilerUnsafeUtility.CreateMarker("Gisketch.ScreenBuilder.SettleLayout", 1, 0, 0);
		(GisketchScreenBuilder.SettleLayoutMarker).m_Ptr = iVar1;
		return;
	}

	// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass19_0$$.ctor: clean
	private void c__DisplayClass19_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass19_0$$<BuildDropdown>b__0: clean
	private void c__DisplayClass19_0__BuildDropdown_b__0()
	{
		GisketchButtonSound pGVar1;
		AottgChoiceControl __this_00;
		bool bVar2;

		pGVar1 = this.sound;
		if (pGVar1 != null) {
			bVar2 = (pGVar1._action == "overlay.close");
			GisketchUiSounds.Play((uint)bVar2);
			__this_00 = this.control;
			if (__this_00 != null) {
				__this_00.Open();
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass1_0$$.ctor: clean
	private void c__DisplayClass1_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass1_0$$<BuildButton>b__0: 7 lines keep C-only constructs
	private void c__DisplayClass1_0__BuildButton_b__0()
	{
		GisketchNodeDefinition pGVar1;
		GisketchButtonSound pGVar2;
		GisketchBuildContext pGVar3;
		object obj;
		GisketchButtonInputSource pGVar4;
		GisketchActionContext context;
		bool bVar7;
		String pSVar8;
		GisketchUiPerfLog.Scope local_88;
		GisketchUiPerfLog.Scope local_68;
		GisketchActionContext local_48;

		local_88._startMs = 0;
		local_88._enabled = false;
		local_88._hotLoop = false;
		local_88._26_6_ = 0;
		local_88._area = null;
		local_88._detail = null;
		pGVar1 = this.node;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		pSVar8 = String.Concat(pGVar1.id, " action=", pGVar1.action);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		local_68 = GisketchUiPerfLog.Time("Button.Click", pSVar8);
		local_88._startMs = local_68._startMs;
		local_88._enabled = local_68._enabled;
		local_88._hotLoop = local_68._hotLoop;
		local_88._26_6_ = local_68._26_6_;
		local_88._area = local_68._area;
		local_88._detail = local_68._detail;
		if ((typeof(GisketchMotionDriver)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchMotionDriver)) ;
		}
		bVar7 = GisketchMotionDriver.HasActive;
		if (bVar7) {
			pGVar1 = this.node;
			if (pGVar1 == null) {
				throw new NullReferenceException();
			}
			pSVar8 = String.Concat("ignored motion active ", pGVar1.id);
			GisketchUiPerfLog.Mark("Button.Click", pSVar8);
		}
		else {
			pGVar2 = this.sound;
			if (pGVar2 == null) {
				throw new NullReferenceException();
			}
			bVar7 = (pGVar2._action == "overlay.close");
			GisketchUiSounds.Play((uint)bVar7);
			pGVar1 = this.node;
			if (pGVar1 == null) {
				throw new NullReferenceException();
			}
			bVar7 = String.IsNullOrEmpty(pGVar1.action);
			if (!bVar7) {
				pGVar3 = this.context;
				if (pGVar3 == null) {
					throw new NullReferenceException();
				}
				obj = (object)pGVar3.Actions;
				if (obj != null) {
					pGVar1 = this.node;
					if (pGVar1 == null) {
						throw new NullReferenceException();
					}
					pGVar4 = this.inputSource;
					if (pGVar4 == null) {
						throw new NullReferenceException();
					}
					pSVar8 = pGVar1.action;
					local_48.Node = null;
					local_48._24_8_ = 0;
					local_48.ElementId = null;
					local_48.GameObject = null;
					local_48 = new GisketchActionContext(pGVar1.id, this.go, pGVar1, pGVar4._Source_k__BackingField);
					local_68._startMs = (int64_t)local_48.Node;
					local_68._24_8_ = local_48._24_8_;
					local_68._area = local_48.ElementId;
					local_68._detail = (String)local_48.GameObject;
					context.GameObject = (GameObject)local_68._detail;
					context.ElementId = local_68._area;
					context.Node = (GisketchNodeDefinition)local_68._startMs;
					context._24_8_ = local_68._24_8_;
					obj.HandleAction(pSVar8, context);
				}
			}
		}
		local_88.Dispose();
		return;
	}

	// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass20_0$$.ctor: clean
	private void c__DisplayClass20_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass20_0$$<BuildSelect>b__0: clean
	private void c__DisplayClass20_0__BuildSelect_b__0()
	{
		GisketchButtonSound pGVar1;
		AottgChoiceControl __this_00;
		bool bVar2;

		pGVar1 = this.sound;
		if (pGVar1 != null) {
			bVar2 = (pGVar1._action == "overlay.close");
			GisketchUiSounds.Play((uint)bVar2);
			__this_00 = this.control;
			if (__this_00 != null) {
				__this_00.Open();
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass20_0$$<BuildSelect>b__1: clean
	private void c__DisplayClass20_0__BuildSelect_b__1()
	{
		AottgChoiceControl __this_00;

		__this_00 = this.control;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Previous(1);
		return;
	}

	// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass20_0$$<BuildSelect>b__2: clean
	private void c__DisplayClass20_0__BuildSelect_b__2()
	{
		AottgChoiceControl __this_00;

		__this_00 = this.control;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Next(1);
		return;
	}

	// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass41_0$$.ctor: clean
	private void c__DisplayClass41_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass41_0$$<BuildInputField>b__0: clean
	private ushort c__DisplayClass41_0__BuildInputField_b__0(String text, int charIndex, ushort addedChar)
	{
		bool multiline;
		GisketchNodeDefinition pGVar1;
		String type;
		ushort uVar2;

		pGVar1 = this.node;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		type = pGVar1.inputType;
		multiline = this.multiline;
		uVar2 = GisketchScreenBuilder.ValidateInput(type, multiline, text, charIndex, addedChar);
		return uVar2;
	}

	// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass84_0$$.ctor: clean
	private void c__DisplayClass84_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass84_0$$<BuildSpriteButton>b__0: 4 lines keep C-only constructs
	private void c__DisplayClass84_0__BuildSpriteButton_b__0()
	{
		GisketchButtonSound pGVar1;
		GisketchNodeDefinition pGVar2;
		GisketchBuildContext pGVar3;
		object obj;
		GisketchButtonInputSource pGVar4;
		String actionId;
		GisketchActionContext context;
		bool bVar7;
		GisketchActionContext local_68;
		String local_48;
		GameObject pUStack_40;
		GisketchNodeDefinition local_38;
		int iStack_30;
		uint uStack_2c;

		if (Il2CppMethodInitialized_07542b28 == false) {
			Il2CppMethodInitialized_07542b28 = true;
			if ((typeof(GisketchMotionDriver)._2).cctor_finished_or_no_cctor == 0) goto label_0538fffc;
	label_0538ffba: ;
			bVar7 = GisketchMotionDriver.HasActive;
			if (bVar7) {
				return;
			}
		}
		else {
			if ((typeof(GisketchMotionDriver)._2).cctor_finished_or_no_cctor != 0) goto label_0538ffba;
	label_0538fffc: ;
			il2cpp_codegen_runtime_class_init(typeof(GisketchMotionDriver)) ;
			bVar7 = GisketchMotionDriver.HasActive;
			if (bVar7) {
				return;
			}
		}
		pGVar1 = this.sound;
		if (pGVar1 != null) {
			bVar7 = (pGVar1._action == "overlay.close");
			GisketchUiSounds.Play((uint)bVar7);
			pGVar2 = this.node;
			if (pGVar2 != null) {
				bVar7 = String.IsNullOrEmpty(pGVar2.action);
				if (!bVar7) {
					pGVar3 = this.context;
					if (pGVar3 == null) goto label_05390198;
					obj = (object)pGVar3.Actions;
					if (obj != null) {
						pGVar2 = this.node;
						if ((pGVar2 == null) ||(pGVar4 = this.inputSource, pGVar4 == null)) goto label_05390198;
						actionId = pGVar2.action;
						local_68.Node = null;
						local_68.InputSource = 0;
						local_68._28_4_ = 0;
						local_68.ElementId = null;
						local_68.GameObject = null;
						local_68 = new GisketchActionContext(pGVar2.id, this.go, pGVar2, pGVar4._Source_k__BackingField);
						local_38 = local_68.Node;
						iStack_30 = local_68.InputSource;
						uStack_2c = local_68._28_4_;
						local_48 = local_68.ElementId;
						pUStack_40 = local_68.GameObject;
						context.GameObject = pUStack_40;
						context.ElementId = local_48;
						context.Node = local_38;
						context.InputSource = iStack_30;
						context._28_4_ = uStack_2c;
						obj.HandleAction(actionId, context);
					}
				}
				return;
			}
		}
	label_05390198: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass86_0$$.ctor: clean
	private void c__DisplayClass86_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass86_0$$<BuildToggle>b__0: 5 lines keep C-only constructs
	private void c__DisplayClass86_0__BuildToggle_b__0(bool __)
	{
		Toggle pUVar1;
		GisketchNodeDefinition pGVar2;
		GisketchBuildContext pGVar3;
		object obj;
		String actionId;
		GisketchActionContext context;
		bool bVar6;
		String* ppSVar7;
		GisketchActionContext local_58;
		String local_38;
		GameObject pUStack_30;
		GisketchNodeDefinition local_28;
		int iStack_20;
		uint uStack_1c;

		pUVar1 = this.toggle;
		if ((pUVar1 != null) &&(pGVar2 = this.node, pGVar2 != null)) {
			if (pUVar1.m_IsOn == false) {
				ppSVar7 = &"false";
			}
			else {
				ppSVar7 = &"true";
			}
			pGVar2.value = *ppSVar7;
			pGVar2 = this.node;
			if (pGVar2 != null) {
				bVar6 = String.IsNullOrEmpty(pGVar2.action);
				if (!bVar6) {
					pGVar3 = this.context;
					if (pGVar3 == null) goto label_05390336;
					obj = (object)pGVar3.Actions;
					if (obj != null) {
						pGVar2 = this.node;
						if (pGVar2 == null) goto label_05390336;
						actionId = pGVar2.action;
						local_58.Node = null;
						local_58.InputSource = 0;
						local_58._28_4_ = 0;
						local_58.ElementId = null;
						local_58.GameObject = null;
						local_58 = new GisketchActionContext(pGVar2.id, this.go, pGVar2);
						local_28 = local_58.Node;
						iStack_20 = local_58.InputSource;
						uStack_1c = local_58._28_4_;
						local_38 = local_58.ElementId;
						pUStack_30 = local_58.GameObject;
						context.GameObject = pUStack_30;
						context.ElementId = local_38;
						context.Node = local_28;
						context.InputSource = iStack_20;
						context._28_4_ = uStack_1c;
						obj.HandleAction(actionId, context);
					}
				}
				return;
			}
		}
	label_05390336: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass87_0$$.ctor: clean
	private void c__DisplayClass87_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass87_0$$<BuildSwitch>b__0: 5 lines keep C-only constructs
	private void c__DisplayClass87_0__BuildSwitch_b__0(bool __)
	{
		Toggle pUVar1;
		GisketchNodeDefinition pGVar2;
		GisketchBuildContext pGVar3;
		object obj;
		String actionId;
		GisketchActionContext context;
		bool bVar6;
		String* ppSVar7;
		GisketchActionContext local_58;
		String local_38;
		GameObject pUStack_30;
		GisketchNodeDefinition local_28;
		int iStack_20;
		uint uStack_1c;

		pUVar1 = this.toggle;
		if ((pUVar1 != null) &&(pGVar2 = this.node, pGVar2 != null)) {
			if (pUVar1.m_IsOn == false) {
				ppSVar7 = &"false";
			}
			else {
				ppSVar7 = &"true";
			}
			pGVar2.value = *ppSVar7;
			pGVar2 = this.node;
			if (pGVar2 != null) {
				bVar6 = String.IsNullOrEmpty(pGVar2.action);
				if (!bVar6) {
					pGVar3 = this.context;
					if (pGVar3 == null) goto label_053904d6;
					obj = (object)pGVar3.Actions;
					if (obj != null) {
						pGVar2 = this.node;
						if (pGVar2 == null) goto label_053904d6;
						actionId = pGVar2.action;
						local_58.Node = null;
						local_58.InputSource = 0;
						local_58._28_4_ = 0;
						local_58.ElementId = null;
						local_58.GameObject = null;
						local_58 = new GisketchActionContext(pGVar2.id, this.go, pGVar2);
						local_28 = local_58.Node;
						iStack_20 = local_58.InputSource;
						uStack_1c = local_58._28_4_;
						local_38 = local_58.ElementId;
						pUStack_30 = local_58.GameObject;
						context.GameObject = pUStack_30;
						context.ElementId = local_38;
						context.Node = local_28;
						context.InputSource = iStack_20;
						context._28_4_ = uStack_1c;
						obj.HandleAction(actionId, context);
					}
				}
				return;
			}
		}
	label_053904d6: ;
		throw new NullReferenceException();
	}
}
