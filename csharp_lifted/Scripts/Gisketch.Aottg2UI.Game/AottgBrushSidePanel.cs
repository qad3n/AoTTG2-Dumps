// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgBrushSidePanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgBrushSidePanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000341")]
public sealed class AottgBrushSidePanel : AottgComponent
{
	[Token(Token = "0x400103F")]
	public const float RenderedWidthAt1080 = 414f;

	[Token(Token = "0x4001040")]
	private const string Panel = "GisketchUI/Elements/SidePanelBase";

	[Token(Token = "0x4001041")]
	private const string PanelTexture = "GisketchUI/Texture/SeamlessGrunge";

	[Token(Token = "0x4001042")]
	private const string HeaderBrush = "GisketchUI/Elements/brushStroke_02";

	[Token(Token = "0x4001043")]
	private const float PanelWidth = 920f;

	[Token(Token = "0x4001044")]
	private const float PanelHeight = 2400f;

	[Token(Token = "0x4001045")]
	private const float HeaderX = -360f;

	[Token(Token = "0x4001046")]
	private const float HeaderY = 150f;

	[Token(Token = "0x4001047")]
	private const float HeaderWidth = 1380f;

	[Token(Token = "0x4001048")]
	private const float HeaderHeight = 270f;

	[Token(Token = "0x4001049")]
	private const float ButtonListX = -120f;

	[Token(Token = "0x400104A")]
	private const float ButtonStartY = 540f;

	[Token(Token = "0x400104B")]
	private const float FooterStartY = 1880f;

	[Token(Token = "0x400104C")]
	private const float SingleFooterBottomPadding = 64f;

	[Token(Token = "0x400104D")]
	private const float ButtonHeight = 236f;

	[Token(Token = "0x400104E")]
	private const float ButtonPitch = 148f;

	[Token(Token = "0x400104F")]
	private const float BrushGlyphWidth = 74f;

	[Token(Token = "0x4001050")]
	private const float BrushHorizontalPadding = 64f;

	[Token(Token = "0x4001051")]
	private const float LabelRightEdge = 820f;

	[Token(Token = "0x4001052")]
	private const float BrushButtonPaddingX = 224f;

	[Token(Token = "0x4001053")]
	private const float MaxButtonWidth = 1164f;

	[Token(Token = "0x4001054")]
	private const float ContentShiftY = 75f;

	[Token(Token = "0x4001055")]
	private const float OutlineOffsetX = 38f;

	[Token(Token = "0x4001056")]
	private const float IntroTotalSeconds = 1.2f;

	[Token(Token = "0x4001057")]
	private const float IntroScale = 0.6f;

	[Token(Token = "0x4001058")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _titleKey;

	[Token(Token = "0x4001059")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly AottgBrushSidePanelOption[] _options;

	[Token(Token = "0x400105A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly AottgBrushSidePanelOption[] _footerOptions;

	[Token(Token = "0x400105B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly float _contentOffsetY;

	[Token(Token = "0x6001465")]
	[Address(RVA = "0x5812650", Offset = "0x5811650", VA = "0x5812650")]
	public AottgBrushSidePanel(string titleKey, AottgBrushSidePanelOption[] options, [Optional] AottgBrushSidePanelOption[] footerOptions, float contentOffsetY = 0f)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgBrushSidePanel$$.ctor): clean
		base();
		this._titleKey = titleKey;
		if (options == null) {
			options = (AottgBrushSidePanelOption[])new AottgBrushSidePanelOption[0];
		}
		this._options = options;
		if (footerOptions == null) {
			footerOptions =(AottgBrushSidePanelOption[])new AottgBrushSidePanelOption[0];
		}
		this._footerOptions = footerOptions;
		this._contentOffsetY = contentOffsetY;
		return;
	}

	[Token(Token = "0x6001466")]
	[Address(RVA = "0x5812710", Offset = "0x5811710", VA = "0x5812710", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgBrushSidePanel$$Build): 2 lines keep C-only constructs
		AottgBrushSidePanel.c__DisplayClass30_0 __this_00;
		Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array_array groups;
		Action<AottgUi> __this_01;
		GisketchLength height;
		GisketchLayoutDefinition layout;
		GisketchLayoutDefinition contentLayout;
		GisketchMotionDefinition pGVar1;
		GisketchNodeDefinition pGVar2;
		AottgBrushSidePanelOption[] method_00;
		float fVar3;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgBrushSidePanel.c__DisplayClass30_0));
		__this_00 = new AottgBrushSidePanel.c__DisplayClass30_0();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			groups = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array_array)new AottgBrushSidePanelOption[][2];
			if (groups != null) {
				if ((int)groups.Length != 0) {
					groups[0] = this._options;
					if ((groups.Length & 0xfffffffe) != 0) {
						method_00 = this._footerOptions;
						groups[1] = method_00;
						fVar3 = AottgBrushSidePanel.BrushWidth(groups);
						__this_00.brushWidth = fVar3;
						__this_01 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanel_c__DisplayClass30_0_Build_b__0);
						height = AottgUi.Percent(100.0);
						layout = AottgUi.Layout("Column", null, "FlexStart", "FlexStart", null, 0.0, null, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
						contentLayout = AottgUi.Layout("Column", null, "FlexStart", null, null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
						pGVar1 = AottgUi.Motion("mainMenuPanel", null, 0.33600003, 0.0, 0.0, 0);
						if (ui != null) {
							pGVar2 = ui.ScaleBox("brushSidePanelShell", 920.0, 2400.0, __this_01, "brush-side-panel", layout, contentLayout, pGVar1);
							pGVar1 = AottgUi.Motion("mainMenuPanel", null, 0.14, 0.0, 0.0, 0) ;
							if (pGVar2 != null) {
								pGVar2.exit = pGVar1;
								return;
							}
						}
						goto label_05912a27;
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
	label_05912a27: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001467")]
	[Address(RVA = "0x5812CE0", Offset = "0x5811CE0", VA = "0x5812CE0")]
	private static void AddOptionList(AottgUi sidePanel, AottgBrushSidePanelOption[] options, string id, string itemIdPrefix, float startY, float brushWidth, bool hideSearch)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgBrushSidePanel$$AddOptionList): 1 lines keep C-only constructs
		AottgBrushSidePanelOption[] pGVar1;
		String id_00;
		AottgBrushSidePanel.c__DisplayClass31_0 __this;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;

		__this = new AottgBrushSidePanel.c__DisplayClass31_0();
		if (__this != null) {
			__this.options = options;
			__this.id = id;
			__this.itemIdPrefix = itemIdPrefix;
			__this.brushWidth = brushWidth;
			__this.hideSearch = hideSearch;
			pGVar1 = __this.options;
			if (pGVar1 != null) {
				if (pGVar1.Length == 0) {
					return;
				}
				__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanel_c__DisplayClass31_0_AddOptionList_b__0);
				id_00 = __this.id;
				width = AottgUi.Points(__this.brushWidth);
				pGVar1 = __this.options;
				if (pGVar1 != null) {
					height = AottgUi.Points((float)((int)pGVar1.Length + -1) * 148.0 + 236.0);
					layout = AottgUi.Layout("Column", null, "FlexStart", "Absolute", null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -120.0, -(startY + -75.0), 0.0, 1.0);
					if (sidePanel != null) {
						sidePanel.Panel("default", __this_00, id_00, layout, null);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001468")]
	[Address(RVA = "0x5812A40", Offset = "0x5811A40", VA = "0x5812A40")]
	private static float BrushWidth(params AottgBrushSidePanelOption[][] groups)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgBrushSidePanel$$BrushWidth): 10 lines keep C-only constructs
		String* ppSVar1;
		int iVar2;
		AottgBrushSidePanelOption[] pGVar3;
		AottgBrushSidePanelOption[] pGVar4;
		AottgBrushSidePanelOption pGVar5;
		uint uVar6;
		int val1;
		ulong uVar7;
		String pSVar8;
		uint uVar9;
		ulong uVar10;
		AottgBrushSidePanelOption pGVar11;
		ulong uVar12;
		AottgBrushSidePanelOption local_c8;
		AottgBrushSidePanelOption local_78;

		local_78.Searchable = false;
		local_78._49_7_ = 0;
		local_78.Tooltip = null;
		local_78.ActionId = null;
		local_78.Action = null;
		local_78.TextKey = null;
		local_78.Icon = null;
		local_78._text = null;
		local_78.Id = null;
		local_78.StackedOptions = null;
		local_c8.Searchable = false;
		local_c8._49_7_ = 0;
		local_c8.Tooltip = null;
		local_c8.ActionId = null;
		local_c8.Action = null;
		local_c8.TextKey = null;
		local_c8.Icon = null;
		local_c8._text = null;
		local_c8.Id = null;
		local_c8.StackedOptions = null;
		if (groups == null) {
	label_05912cd5: ;
			throw new NullReferenceException();
		}
		uVar6 = (uint)groups.Length;
		if ((int)uVar6 < 1) {
			val1 = 0;
		}
		else {
			uVar9 = 0;
			val1 = 0;
			do {
				if (uVar6 <= uVar9) {
	label_05912cd0: ;
					throw new IndexOutOfRangeException();
				}
				pGVar3 = groups[(int)uVar9];
				if (pGVar3 == null) goto label_05912cd5;
				if (0 < (int)pGVar3.Length) {
					uVar7 = pGVar3.Length & 0xffffffff;
					uVar10 = 0;
					do {
						if (uVar7 <= uVar10) goto label_05912cd0;
						local_78._text = pGVar3[uVar10]._text;
						local_78.Id = pGVar3[uVar10].Id;
						ppSVar1 = &pGVar3[uVar10].TextKey;
						local_78.TextKey = *ppSVar1;
						local_78.Icon = ppSVar1[1];
						ppSVar1 = &pGVar3[uVar10].ActionId;
						local_78.ActionId = *ppSVar1;
						local_78.Action = (Action<GisketchActionContext>)ppSVar1[1];
						pGVar5 = &pGVar3[uVar10];
						local_78.Searchable = pGVar5.Searchable;
						local_78._49_7_ = *(undefined7)&pGVar5.field_0x31;
						local_78.Tooltip = pGVar5.Tooltip;
						pGVar4 = pGVar3[uVar10].StackedOptions;
						local_78.StackedOptions = pGVar4;
						if (pGVar4 == null) {
							pSVar8 = local_78.Text;
							if (pSVar8 == null) goto label_05912cd5;
							iVar2 = pSVar8._stringLength;
							val1 = Math.Max(val1, iVar2);
						}
						else if (0 < (int)pGVar4.Length) {
							uVar7 = pGVar4.Length & 0xffffffff;
							pGVar11 = pGVar4.m_Items;
							uVar12 = 0;
							do {
								if (uVar7 <= uVar12) goto label_05912cd0;
								local_c8._text = pGVar11._text;
								local_c8.Id = pGVar11.Id;
								local_c8.TextKey = pGVar11.TextKey;
								local_c8.Icon = pGVar11.Icon;
								local_c8.ActionId = pGVar11.ActionId;
								local_c8.Action = pGVar11.Action;
								local_c8.Searchable = pGVar11.Searchable;
								local_c8._49_7_ = *(undefined7)&pGVar11.field_0x31;
								local_c8.Tooltip = pGVar11.Tooltip;
								local_c8.StackedOptions = pGVar11.StackedOptions;
								pSVar8 = local_c8.Text ;
								if (pSVar8 == null) goto label_05912cd5;
								iVar2 = pSVar8._stringLength;
								val1 = Math.Max(val1, iVar2);
								uVar12 = uVar12 + 1;
								uVar6 = (uint)pGVar4.Length;
								uVar7 = (ulong)uVar6;
								pGVar11 = pGVar11 + 1;
							} while ((long)uVar12 < (long)(int)uVar6);
						}
						uVar10 = uVar10 + 1;
						uVar6 = (uint)pGVar3.Length;
						uVar7 = (ulong)uVar6;
					} while ((long)uVar10 < (long)(int)uVar6);
				}
				uVar9 = uVar9 + 1;
				uVar6 = (uint)groups.Length;
			} while ((int)uVar9 < (int)uVar6);
		}
		return (float)val1 * 74.0 + 64.0;
	}

	[Token(Token = "0x6001469")]
	[Address(RVA = "0x5812F30", Offset = "0x5811F30", VA = "0x5812F30")]
	private static float Top(float y)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgBrushSidePanel$$Top): clean
		return -(y + -75.0);
	}

	[Token(Token = "0x600146A")]
	[Address(RVA = "0x5812F40", Offset = "0x5811F40", VA = "0x5812F40")]
	private static float FooterStartYFor(AottgBrushSidePanelOption[] options)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgBrushSidePanel$$FooterStartYFor): clean
		int iVar1;
		int iVar2;

		if (options == null) {
			throw new NullReferenceException();
		}
		iVar2 = (int)options.Length;
		if (iVar2 == 1) {
			return 2100.0;
		}
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			iVar2 = (int)options.Length;
		}
		iVar1 = Math.Max(0, iVar2 + -2);
		return (float)iVar1 * -148.0 + 1880.0;
	}

	[Token(Token = "0x600146B")]
	[Address(RVA = "0x5812FC0", Offset = "0x5811FC0", VA = "0x5812FC0")]
	private static void AddButtonRow(AottgUi parent, AottgBrushSidePanelOption option, int index, string motionGroup, string idPrefix, float brushWidth, bool hideSearch)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgBrushSidePanel$$AddButtonRow): 2 lines keep C-only constructs
		AottgBrushSidePanel.c__DisplayClass35_0 __this;
		GisketchMotionDefinition pGVar1;
		String pSVar2;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;

		__this = new AottgBrushSidePanel.c__DisplayClass35_0();
		if (__this != null) {
			__this.option.StackedOptions = option.StackedOptions;
			__this.option.Searchable = option.Searchable;
			*(undefined7)&__this.option.field_0x31 = option._49_7_;
			__this.option.Tooltip = option.Tooltip;
			__this.option.ActionId = option.ActionId;
			__this.option.Action = option.Action;
			__this.option.TextKey = option.TextKey;
			__this.option.Icon = option.Icon;
			__this.option._text = option._text;
			__this.option.Id = option.Id;
			__this.hideSearch = hideSearch;
			__this.brushWidth = brushWidth;
			pGVar1 = AottgUi.Motion("mainMenuBrushIntro", motionGroup, 0.120000005, 0.030000001, 0.027000003, index + 10);
			__this.enter = pGVar1;
			pSVar2 = String.Concat(idPrefix, __this.option.Id);
			__this.id = pSVar2;
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanel_c__DisplayClass35_0_AddButtonRow_b__0);
			pSVar2 = __this.id;
			width = AottgUi.Points(__this.brushWidth);
			height = AottgUi.Points(236.0);
			layout = AottgUi.Layout("Column", null, "FlexStart", "Absolute", null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, (float)-index * 148.0, 0.0, 1.0);
			if (parent != null) {
				parent.Panel("default", __this_00, pSVar2, layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBrushSidePanel.c.

	// Gisketch.Aottg2UI.Game.AottgBrushSidePanel.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgBrushSidePanel.c();
		AottgBrushSidePanel.c.__9 =(AottgBrushSidePanel.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgBrushSidePanel.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgBrushSidePanel.<>c$$<Build>b__30_1: clean
	private void c__Build_b__30_1(AottgUi texture)
	{
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;

		width = AottgUi.Points(920.0);
		height = AottgUi.Points(2400.0);
		layout = AottgUi.Layout("Column", null, null, "Absolute", null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (texture == null) {
			throw new NullReferenceException();
		}
		texture.Image("GisketchUI/Texture/SeamlessGrunge", "brushSidePanelTexture", "brush-side-panel-texture", layout, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgBrushSidePanel.<>c__DisplayClass30_0$$.ctor: clean
	private void c__DisplayClass30_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgBrushSidePanel.<>c__DisplayClass30_0$$<Build>b__0: 2 lines keep C-only constructs
	private void c__DisplayClass30_0__Build_b__0(AottgUi sidePanel)
	{
		object @object;
		AottgBrushSidePanel pGVar1;
		AottgBrushSidePanelOption[] options;
		String pSVar2;
		GisketchLength pGVar3;
		GisketchLength pGVar4;
		GisketchLayoutDefinition pGVar5;
		Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c_StaticFields pGVar6;
		Action<AottgUi> pSVar7;
		GisketchNodeDefinition pGVar8;
		float fVar9;

		pGVar3 = AottgUi.Points(954.0);
		pGVar4 = AottgUi.Points(2418.0);
		pGVar5 = AottgUi.Layout("Column", null, null, "Absolute", null, 0.0, pGVar3, pGVar4, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 38.0, 12.0, 0.0, 1.0);
		if (sidePanel != null) {
			sidePanel.Image("GisketchUI/Elements/SidePanelBase", "brushSidePanelOutline", "brush-side-panel-outline", pGVar5, null);
			pSVar2 = "brushSidePanel";
			pGVar6 = typeof(AottgBrushSidePanel.c).static_fields;
			pSVar7 = pGVar6.__9__30_1;
			if (pSVar7 == null) {
				if ((typeof(AottgBrushSidePanel.c)._2).cctor_finished_or_no_cctor == 0) {
					pGVar6 = typeof(AottgBrushSidePanel.c).static_fields;
				}
				@object = (object)pGVar6.__9;
				pSVar7 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanel_c_Build_b__30_1);
				pGVar6 = typeof(AottgBrushSidePanel.c).static_fields;
				pGVar6.__9__30_1 = pSVar7;
			}
			pGVar3 = AottgUi.Points(920.0);
			pGVar4 = AottgUi.Points(2400.0);
			pGVar5 = AottgUi.Layout("Column", null, null, "Absolute", null, 0.0, pGVar3, pGVar4, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			pGVar8 = sidePanel.Panel(pSVar2, pSVar7, "brush-side-panel-base", pGVar5, null);
			if (pGVar8 != null) {
				pGVar8.sprite = "GisketchUI/Elements/SidePanelBase";
				pSVar2 = "brushSidePanelHeader";
				pSVar7 = this.__9__2;
				if (pSVar7 == null) {
					pSVar7 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanel_c__DisplayClass30_0_Build_b__2);
					this.__9__2 = pSVar7;
				}
				pGVar3 = AottgUi.Points(1380.0);
				pGVar4 = AottgUi.Points(270.0);
				pGVar1 = this.__4__this;
				if (pGVar1 != null) {
					fVar9 = AottgBrushSidePanel.Top(pGVar1._contentOffsetY + 150.0);
					pGVar5 = AottgUi.Layout("Column", "Center", "Center", "Absolute", null, 0.0, pGVar3, pGVar4, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -360.0, fVar9, 0.0, 1.0);
					pGVar8 = sidePanel.Panel(pSVar2, pSVar7, "brush-side-panel-header", pGVar5, null);
					if (pGVar8 != null) {
						pGVar8.sprite = "GisketchUI/Elements/brushStroke_02";
						pGVar1 = this.__4__this;
						if (pGVar1 != null) {
							AottgBrushSidePanel.AddOptionList(sidePanel, pGVar1._options, "brush-side-panel-buttons", "brush-side-panel-button-", pGVar1._contentOffsetY + 540.0, this.brushWidth, true);
							pGVar1 = this.__4__this;
							if (pGVar1 != null) {
								options = pGVar1._footerOptions;
								fVar9 = AottgBrushSidePanel.FooterStartYFor(options);
								AottgBrushSidePanel.AddOptionList(sidePanel, options, "brush-side-panel-footer", "brush-side-panel-footer-", fVar9, this.brushWidth, false);
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgBrushSidePanel.<>c__DisplayClass30_0$$<Build>b__2: clean
	private void c__DisplayClass30_0__Build_b__2(AottgUi title)
	{
		AottgBrushSidePanel pGVar1;
		GisketchNodeDefinition pGVar2;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar3;

		pGVar1 = this.__4__this;
		if ((pGVar1 != null) &&(title != null)) {
			pGVar2 = title.TextKey(pGVar1._titleKey, "brushSidePanelHeaderText", "brush-side-panel-title", null, null);
			width = AottgUi.Percent(88.0);
			height = AottgUi.Percent(100.0);
			pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			if (pGVar2 != null) {
				pGVar2.layout = pGVar3;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgBrushSidePanel.<>c__DisplayClass31_0$$.ctor: clean
	private void c__DisplayClass31_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgBrushSidePanel.<>c__DisplayClass31_0$$<AddOptionList>b__0: 5 lines keep C-only constructs
	private void c__DisplayClass31_0__AddOptionList_b__0(AottgUi list)
	{
		ulong puVar1;
		ulong puVar2;
		ulong puVar3;
		uint uVar4;
		AottgBrushSidePanelOption option;
		AottgBrushSidePanelOption[] pGVar5;
		long lVar6;
		ulong uVar7;

		pGVar5 = this.options;
		if (pGVar5 != null) {
			lVar6 = 0x20;
			uVar7 = 0;
			do {
				uVar4 = (uint)pGVar5.Length;
				if ((long)(int)uVar4 <= (long)uVar7) {
					return;
				}
				if (uVar4 <= uVar7) {
					throw new IndexOutOfRangeException();
				}
				puVar1 = (ulong)((long)pGVar5.m_Items + lVar6 + -0x10);
				puVar2 = (ulong)((long)&pGVar5[0]._text + lVar6);
				puVar3 = (ulong)((long)&pGVar5[0].TextKey + lVar6);
				option.TextKey = (String)*puVar1;
				__ghidra(@"option._0_16_ = *(undefined1 (*) [16])((long)pGVar5.m_Items + lVar6 + -0x20);");
				option.Icon = (String)puVar1[1];
				option.ActionId = (String)*puVar2;
				option.Action = (Action<GisketchActionContext>)puVar2[1];
				option._48_8_ = *puVar3;
				option.Tooltip = (String)puVar3[1];
				option.StackedOptions = *(AottgBrushSidePanelOption[]*)((long)&pGVar5[0].ActionId + lVar6);
				AottgBrushSidePanel.AddButtonRow(list, option, (int32_t)uVar7, this.id, this.itemIdPrefix, this.brushWidth, this.hideSearch);
				uVar7 = uVar7 + 1;
				pGVar5 = this.options;
				lVar6 = lVar6 + 0x48;
			} while (pGVar5 != null);
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgBrushSidePanel.<>c__DisplayClass35_0$$.ctor: clean
	private void c__DisplayClass35_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgBrushSidePanel.<>c__DisplayClass35_0$$<AddButtonRow>b__0: 18 lines keep C-only constructs
	private void c__DisplayClass35_0__AddButtonRow_b__0(AottgUi row)
	{
		ulong puVar1;
		bool hideSearch;
		GisketchMotionDefinition enter;
		String pSVar2;
		String pSVar3;
		String pSVar4;
		Action<GisketchActionContext> pSVar5;
		ulong uVar6;
		String pSVar7;
		AottgBrushSidePanelOption option;
		byte[] auVar8 = new byte[44];
		AottgBrushSidePanelOption[] pGVar9;
		AottgBrushSidePanel.c__DisplayClass35_1 __this_00;
		Action<AottgUi> __this_01;
		String pSVar10;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;
		String pSVar11;
		AottgBrushButton __this_02;
		int iVar12;
		long lVar13;
		ulong uVar14;
		float value;

		pGVar9 = this.option.StackedOptions;
		if (pGVar9 == null) {
			pGVar9 = this.option.StackedOptions;
			pSVar5 = this.option.Action;
			__ghidra(@"auVar8 = *(undefined1 (*) [44])&this.option;");
			uVar6 = *(ulong)&this.option.Searchable;
			pSVar10 = this.option.Tooltip;
			hideSearch = this.hideSearch;
			enter = this.enter;
			pSVar11 = String.Concat(this.id, "-button");
			option.Action._4_4_ = (int)((ulong)pSVar5 >> 0x20);
			option._0_44_ = auVar8;
			option._48_4_ = (int)uVar6;
			option._52_4_ = (int)((ulong)uVar6 >> 0x20);
			option.Tooltip._0_4_ = (int)pSVar10;
			option.Tooltip._4_4_ = (int)((ulong)pSVar10 >> 0x20);
			option.StackedOptions._0_4_ = (int)pGVar9;
			option.StackedOptions._4_4_ = (int)((ulong)pGVar9 >> 0x20);
			__this_02 = new AottgBrushButton(option, enter, "brushSidePanelBrushButton", hideSearch, pSVar11, 1164.0);
			if (row != null) {
				row.Component((AottgComponent)__this_02);
				return;
			}
		}
		else {
			value = 236.0 / (float)(int)pGVar9.Length;
			iVar12 = 0;
			lVar13 = 0x20;
			uVar14 = 0;
			do {
				if ((long)(int)pGVar9.Length <= (long)uVar14) {
					return;
				}
				__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgBrushSidePanel.c__DisplayClass35_1));
				__this_00 = new Object();
				if (__this_00 == null) break;
				__this_00.CS___8__locals1 = this;
				pGVar9 = this.option.StackedOptions;
				if (pGVar9 == null) break;
				if ((uint)pGVar9.Length <= uVar14) {
					throw new IndexOutOfRangeException();
				}
				puVar1 = (ulong)((long)pGVar9.m_Items + lVar13 + -0x20);
				pSVar10 = (String)*puVar1;
				pSVar11 = (String)puVar1[1];
				puVar1 = (ulong)((long)pGVar9.m_Items + lVar13 + -0x10);
				pSVar2 = (String)*puVar1;
				pSVar3 = (String)puVar1[1];
				puVar1 = (ulong)((long)&pGVar9[0]._text + lVar13);
				pSVar4 = (String)*puVar1;
				pSVar5 = (Action<GisketchActionContext>)puVar1[1];
				puVar1 = (ulong)((long)&pGVar9[0].TextKey + lVar13);
				uVar6 = *puVar1;
				pSVar7 = (String)puVar1[1];
				__this_00.stackedOption.StackedOptions = *(AottgBrushSidePanelOption[]*)((long)&pGVar9[0].ActionId + lVar13);
				*(ulong)&__this_00.stackedOption.Searchable = uVar6;
				__this_00.stackedOption.Tooltip = pSVar7;
				__this_00.stackedOption.ActionId = pSVar4;
				__this_00.stackedOption.Action = pSVar5;
				__this_00.stackedOption.TextKey = pSVar2;
				__this_00.stackedOption.Icon = pSVar3;
				__this_00.stackedOption._text = pSVar10;
				__this_00.stackedOption.Id = pSVar11;
				__this_01 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanel_c__DisplayClass35_1_AddButtonRow_b__1);
				pSVar10 = String.Concat(this.id, "-", __this_00.stackedOption.Id);
				width = AottgUi.Points(this.brushWidth);
				height = AottgUi.Points(value);
				layout = AottgUi.Layout("Column", null, null, "Absolute", null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, (float)iVar12 * value, 0.0, 1.0);
				if (row == null) break;
				row.Panel("default", __this_01, pSVar10, layout, null);
				uVar14 = uVar14 + 1;
				pGVar9 = this.option.StackedOptions;
				iVar12 = iVar12 + -1;
				lVar13 = lVar13 + 0x48;
			} while (pGVar9 != null);
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgBrushSidePanel.<>c__DisplayClass35_1$$.ctor: clean
	private void c__DisplayClass35_1__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgBrushSidePanel.<>c__DisplayClass35_1$$<AddButtonRow>b__1: clean
	private void c__DisplayClass35_1__AddButtonRow_b__1(AottgUi button)
	{
		bool hideSearch;
		AottgBrushSidePanel.c__DisplayClass35_0 pGVar1;
		GisketchMotionDefinition enter;
		AottgBrushSidePanelOption option;
		String id;
		AottgBrushButton __this_00;

		option = this.stackedOption;
		pGVar1 = this.CS___8__locals1;
		if (pGVar1 != null) {
			hideSearch = pGVar1.hideSearch;
			enter = pGVar1.enter;
			id = String.Concat(pGVar1.id, "-", this.stackedOption.Id, "-button");
			__this_00 = new AottgBrushButton((AottgBrushSidePanelOption)option, enter, "brushSidePanelBrushButton", hideSearch, id, 1164.0);
			if (button != null) {
				button.Component((AottgComponent)__this_00);
				return;
			}
		}
		throw new NullReferenceException();
	}
}
