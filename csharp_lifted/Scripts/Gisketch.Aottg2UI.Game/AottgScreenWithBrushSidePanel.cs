// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgScreenWithBrushSidePanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200034E")]
public sealed class AottgScreenWithBrushSidePanel : AottgComponent
{
	[Token(Token = "0x4001098")]
	private const string FooterTexture = "GisketchUI/Texture/SeamlessGrunge";

	[Token(Token = "0x4001099")]
	internal const float ContentPadding = 56f;

	[Token(Token = "0x400109A")]
	internal const float ContentTopPadding = 98f;

	[Token(Token = "0x400109B")]
	internal const float ContentFooterHeight = 132f;

	[Token(Token = "0x400109C")]
	internal const float SidePanelOverlapPadding = 526f;

	[Token(Token = "0x400109D")]
	private const float SectionHeaderGap = 12f;

	[Token(Token = "0x400109E")]
	private const float SectionGap = 48f;

	[Token(Token = "0x400109F")]
	private const float SectionContentMaxWidth = 1120f;

	[Token(Token = "0x40010A0")]
	private const float ContentIntroDuration = 0.28f;

	[Token(Token = "0x40010A1")]
	private const float SectionEnterDuration = 0.15f;

	[Token(Token = "0x40010A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40010A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _titleKey;

	[Token(Token = "0x40010A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly AottgScreenSection[] _sections;

	[Token(Token = "0x40010A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly AottgSidePanelLayoutMode _layoutMode;

	[Token(Token = "0x40010A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly AottgBrushSidePanelOption[] _footerOptions;

	[Token(Token = "0x40010A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly Action<AottgUi> _buildContentFooter;

	[Token(Token = "0x40010A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly AottgBrushSidePanel _sidePanel;

	[Token(Token = "0x40010A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly Action<AottgUi> _buildContent;

	[Token(Token = "0x40010AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly bool _deferScrollSections;

	[Token(Token = "0x40010AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x51")]
	private readonly bool _lazySections;

	[Token(Token = "0x40010AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x52")]
	private readonly bool _hideSectionChrome;

	[Token(Token = "0x40010AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	private readonly AottgSidePanelContentScrollMode _contentScrollMode;

	[Token(Token = "0x60014B1")]
	[Address(RVA = "0x5816540", Offset = "0x5815540", VA = "0x5816540")]
	static AottgScreenWithBrushSidePanel()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenWithBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$.cctor): clean
		AottgDeferredSidePanelSectionsRuntime.RegisterFactory();
		AottgLazySidePanelSectionsRuntime.RegisterFactory();
		return;
	}

	[Token(Token = "0x60014B2")]
	[Address(RVA = "0x5816550", Offset = "0x5815550", VA = "0x5816550")]
	public AottgScreenWithBrushSidePanel(AottgBrushSidePanel sidePanel, Action<AottgUi> buildContent, [Optional] Action<AottgUi> buildContentFooter, AottgSidePanelContentScrollMode contentScrollMode = AottgSidePanelContentScrollMode.OuterScroll)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenWithBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$.ctor): clean
		base();
		this._id = "brush-side-panel";
		this._sidePanel = sidePanel;
		this._buildContent = buildContent;
		this._buildContentFooter = buildContentFooter;
		this._contentScrollMode = contentScrollMode;
		return;
	}

	[Token(Token = "0x60014B3")]
	[Address(RVA = "0x58165F0", Offset = "0x58155F0", VA = "0x58165F0")]
	public AottgScreenWithBrushSidePanel(string titleKey, AottgScreenSection[] sections, AottgSidePanelLayoutMode layoutMode, [Optional] AottgBrushSidePanelOption[] footerOptions, [Optional][DefaultParameterValue("brush-side-panel")] string id, [Optional] Action<AottgUi> buildContentFooter, bool deferScrollSections = false, bool lazySections = false, bool hideSectionChrome = false, AottgSidePanelContentScrollMode contentScrollMode = AottgSidePanelContentScrollMode.OuterScroll)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenWithBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$.ctor): clean
		bool bVar1;

		base();
		bVar1 = String.IsNullOrEmpty(id);
		if (this == null) {
			throw new NullReferenceException();
		}
		if (bVar1) {
			id = "brush-side-panel";
		}
		this._id = id;
		this._titleKey = titleKey;
		if (sections == null) {
			sections = (AottgScreenSection[])new AottgScreenSection[0];
		}
		this._sections = sections;
		this._layoutMode = layoutMode;
		this._footerOptions = footerOptions;
		this._buildContentFooter = buildContentFooter;
		this._deferScrollSections = deferScrollSections;
		this._lazySections = lazySections;
		this._hideSectionChrome = hideSectionChrome;
		this._contentScrollMode = contentScrollMode;
		return;
	}

	[Token(Token = "0x60014B4")]
	[Address(RVA = "0x5816710", Offset = "0x5815710", VA = "0x5816710", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenWithBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$Build): clean
		if (this._sections == null) {
			this.BuildLegacy(ui);
			return;
		}
		this.BuildSectioned(ui);
		return;
	}

	[Token(Token = "0x60014B5")]
	[Address(RVA = "0x5816830", Offset = "0x5815830", VA = "0x5816830")]
	private void BuildSectioned(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenWithBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$BuildSectioned): 5 lines keep C-only constructs
		AottgScreenSection[] pGVar1;
		bool bVar2;
		AottgScreenWithBrushSidePanel.c__DisplayClass26_0 __this_00;
		String[] pSVar3;
		AottgBrushSidePanelOption[] method_00;
		Action<AottgUi> pSVar4;
		GisketchLayoutDefinition pGVar5;
		GisketchNodeDefinition __this_01;
		String pSVar6;
		GisketchLength width;
		GisketchLength height;
		Enum SStack_48;

		if (Il2CppMethodInitialized_075456f8 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgScreenWithBrushSidePanel)) ;
			Il2CppMethodInitialized_075456f8 = true;
		}
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgScreenWithBrushSidePanel.c__DisplayClass26_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			pSVar3 = this.SectionIds();
			if ((this._lazySections == false) || (this._layoutMode != 1)) {
				bVar2 = false;
			}
			else {
				pGVar1 = this._sections;
				if (pGVar1 == null) goto label_05916bca;
				bVar2 = 1 < (int)pGVar1.Length;
			}
			__this_00.lazySections = bVar2;
			method_00 = this.SectionOptions(bVar2);
			__this_00.options = method_00;
			bVar2 = this.ShouldDeferSections();
			__this_00.deferSections = bVar2;
			pSVar4 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass26_0_BuildSectioned_b__0);
			this.BuildContentLayer(ui, pSVar4, this._buildContentFooter);
			pSVar4 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass26_0_BuildSectioned_b__1);
			pGVar5 = AottgScreenWithBrushSidePanel.FullScreenAbsolute() ;
			if (ui != null) {
				ui.Panel("default", pSVar4, "brush-side-panel-layer", pGVar5, null);
				__this_01 = new GisketchNodeDefinition();
				if (__this_01 != null) {
					__this_01.type = "SectionNavigator";
					pSVar6 = String.Concat(this._id, "-section-navigator");
					__this_01.id = pSVar6;
					__this_01.text = this._id;
					SStack_48.klass = (Enum)typeof(AottgSidePanelLayoutMode);
					SStack_48.monitor = (IntPtr)0xffffffffffffffff;
					pSVar6 = SStack_48.ToString();
					__this_01.value = pSVar6;
					__this_01.options = pSVar3;
					width = AottgUi.Points(0.0);
					height = AottgUi.Points(0.0);
					pGVar5 = AottgUi.Layout("Column", null, null, "Absolute", null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
					__this_01.layout = pGVar5;
					ui.Add(__this_01);
					return;
				}
			}
		}
	label_05916bca: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60014B6")]
	[Address(RVA = "0x5816730", Offset = "0x5815730", VA = "0x5816730")]
	private void BuildLegacy(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenWithBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$BuildLegacy): 2 lines keep C-only constructs
		Action<AottgUi> __this_00;
		GisketchLayoutDefinition layout;

		if (Il2CppMethodInitialized_075456f9 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgScreenWithBrushSidePanel)) ;
			Il2CppMethodInitialized_075456f9 = true;
		}
		this.BuildContentLayer(ui, this._buildContent, this._buildContentFooter);
		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_BuildLegacy_b__27_0);
		layout = AottgScreenWithBrushSidePanel.FullScreenAbsolute();
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Panel("default", __this_00, "brush-side-panel-layer", layout, null);
		return;
	}

	[Token(Token = "0x60014B7")]
	[Address(RVA = "0x58170B0", Offset = "0x58160B0", VA = "0x58170B0")]
	private void BuildContentLayer(AottgUi ui, Action<AottgUi> build, Action<AottgUi> buildFooter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenWithBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$BuildContentLayer): 3 lines keep C-only constructs
		AottgScreenWithBrushSidePanel.c__DisplayClass28_0 __this_00;
		Action<AottgUi> __this_01;
		String id;
		GisketchLayoutDefinition layout;
		GisketchMotionDefinition pGVar1;
		GisketchNodeDefinition pGVar2;

		if (Il2CppMethodInitialized_075456fa == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgScreenWithBrushSidePanel)) ;
			Il2CppMethodInitialized_075456fa = true;
		}
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgScreenWithBrushSidePanel.c__DisplayClass28_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			__this_00.build = build;
			__this_00.buildFooter = buildFooter;
			__this_01 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass28_0_BuildContentLayer_b__0);
			id = String.Concat(this._id, "-content");
			layout = AottgScreenWithBrushSidePanel.FullScreenAbsolute() ;
			pGVar1 = AottgUi.Motion("brushSidePanelContentIntro", null, 0.28, 0.0, 0.0, 0);
			if (ui != null) {
				pGVar2 = ui.Panel("brushSidePanelScreenContent", __this_01, id, layout, pGVar1);
				pGVar1 = AottgUi.Motion("brushSidePanelContentIntro", null, 0.28, 0.0, 0.0, 0);
				if (pGVar2 != null) {
					pGVar2.exit = pGVar1;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60014B8")]
	[Address(RVA = "0x5817370", Offset = "0x5816370", VA = "0x5817370")]
	private static GisketchLayoutDefinition ContentLayerLayout(Action<AottgUi> buildFooter, bool fillsHeight)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenWithBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$ContentLayerLayout): 1 lines keep C-only constructs
		String alignItems;
		String direction;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar1;

		height = null;
		width = AottgUi.Percent(100.0);
		direction = "Column";
		alignItems = "Center";
		if (fillsHeight) {
			height = AottgUi.Percent(100.0);
		}
		pGVar1 = AottgUi.Layout(direction, null, alignItems, null, null, 48.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 582.0, 56.0, 98.0, *(float)(&g_data_0100ae40 + (ulong)(buildFooter == null) * 4), 0.0, 0.0, 0.0, 1.0);
		return pGVar1;
	}

	[Token(Token = "0x60014B9")]
	[Address(RVA = "0x5817490", Offset = "0x5816490", VA = "0x5817490")]
	private static GisketchLayoutDefinition SectionOwnedContentLayerLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenWithBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$SectionOwnedContentLayerLayout): clean
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar1;

		width = AottgUi.Percent(100.0);
		height = AottgUi.Percent(100.0);
		pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		return pGVar1;
	}

	[Token(Token = "0x60014BA")]
	[Address(RVA = "0x5817560", Offset = "0x5816560", VA = "0x5817560")]
	private void AddContentFooter(AottgUi content, Action<AottgUi> buildFooter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenWithBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$AddContentFooter): 2 lines keep C-only constructs
		AottgScreenWithBrushSidePanel.c__DisplayClass31_0 __this_00;
		Action<AottgUi> __this_01;
		String id;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgScreenWithBrushSidePanel.c__DisplayClass31_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			__this_00.buildFooter = buildFooter;
			__this_01 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass31_0_AddContentFooter_b__0);
			id = String.Concat(this._id, "-content-footer-layer");
			width = AottgUi.Percent(100.0);
			height = AottgUi.Percent(100.0);
			layout = AottgUi.Layout("Column", "FlexEnd", null, "Absolute", null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			if (content != null) {
				content.Panel("default", __this_01, id, layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60014BB")]
	[Address(RVA = "0x5817760", Offset = "0x5816760", VA = "0x5817760")]
	private void AddFooterTopEdge(AottgUi footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenWithBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$AddFooterTopEdge): 1 lines keep C-only constructs
		GisketchNodeDefinition __this_00;
		String pSVar1;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar2;

		__this_00 = il2cpp_codegen_object_new(typeof(GisketchNodeDefinition)) ;
		__this_00 = new GisketchNodeDefinition();
		if (__this_00 != null) {
			__this_00.type = "Divider";
			pSVar1 = String.Concat(this._id, "-content-footer-top-shadow");
			__this_00.id = pSVar1;
			__this_00.style = "brushSidePanelContentFooterTopShadow";
			width = AottgUi.Percent(100.0);
			height = AottgUi.Points(2.0);
			pGVar2 = AottgUi.Layout("Column", null, null, "Absolute", null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			__this_00.layout = pGVar2;
			if (footer != null) {
				footer.Add(__this_00);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60014BC")]
	[Address(RVA = "0x5817920", Offset = "0x5816920", VA = "0x5817920")]
	private void BuildSections(AottgUi content, bool deferSections, bool lazySections)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenWithBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$BuildSections): 5 lines keep C-only constructs
		AottgScreenSection[] pGVar1;
		AottgScreenWithBrushSidePanel.c__DisplayClass33_0 __this_00;
		Action<AottgUi> pSVar2;
		String pSVar3;
		GisketchNodeDefinition[] pGVar4;
		GisketchNodeDefinition __this_01;
		String[] pSVar5;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar6;
		undefined7 in_register_00000009;
		MethodInfo pMVar7;
		int iVar8;

		pMVar7 = (MethodInfo)CONCAT71(in_register_00000009, lazySections);
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgScreenWithBrushSidePanel.c__DisplayClass33_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			if (lazySections) {
				pSVar2 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass33_0_BuildSections_b__1);
				pSVar3 = String.Concat(this._id, "-scroll");
				if (content != null) {
					pGVar4 = content.BuildDetached(pSVar2, pSVar3);
					__this_01 = new GisketchNodeDefinition();
					if (__this_01 != null) {
						__this_01.type = "LazySidePanelSections";
						pSVar3 = String.Concat(this._id, "-lazy-sections") ;
						__this_01.id = pSVar3;
						pMVar7 = (MethodInfo)this._id;
						__this_01.value = (String)pMVar7;
						pSVar5 = this.SectionIds();
						__this_01.options = pSVar5;
	label_05917c20: ;
						__this_01.deferredChildren = pGVar4;
						width = AottgUi.Points(0.0);
						height = AottgUi.Points(0.0);
						pGVar6 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
						__this_01.layout = pGVar6;
						content.Add(__this_01);
						return;
					}
				}
			}
			else {
				if (deferSections) {
					__this_00.immediateCount = 0;
				}
				else {
					pGVar1 = this._sections;
					if (pGVar1 == null) goto label_05917d02;
					iVar8 = (int)pGVar1.Length;
					__this_00.immediateCount = iVar8;
					if (iVar8 < 1) {
						return;
					}
					iVar8 = 0;
					do {
						this.BuildSection(content, iVar8);
						iVar8 = iVar8 + 1;
					} while (iVar8 < __this_00.immediateCount);
					if (!deferSections) {
						return;
					}
				}
				pSVar2 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass33_0_BuildSections_b__0);
				pSVar3 = String.Concat(this._id, "-scroll");
				if (content != null) {
					pGVar4 = content.BuildDetached(pSVar2, pSVar3);
					if ((pGVar4 == null) ||(pGVar4.Length == 0)) {
						return;
					}
					__this_01 = new GisketchNodeDefinition();
					if (__this_01 != null) {
						__this_01.type = "DeferredSidePanelSections";
						pSVar3 = String.Concat(this._id, "-deferred-sections") ;
						__this_01.id = pSVar3;
						__this_01.active = true;
						goto label_05917c20;
					}
				}
			}
		}
	label_05917d02: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60014BD")]
	[Address(RVA = "0x5817D20", Offset = "0x5816D20", VA = "0x5817D20")]
	private void BuildSection(AottgUi content, int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenWithBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$BuildSection): 13 lines keep C-only constructs
		String* ppSVar1;
		uint uVar2;
		AottgScreenSection[] pGVar3;
		String pSVar4;
		String pSVar5;
		Action<AottgUi, AottgScreenSectionContext> pSVar6;
		Action<AottgUi, AottgScreenSectionContext> pSVar7;
		String pSVar8;
		ulong uVar9;
		bool bVar10;
		int iVar11;
		AottgScreenWithBrushSidePanel.c__DisplayClass34_0 __this_00;
		Action<AottgUi> __this_01;
		String pSVar12;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition node;
		GisketchMotionDefinition pGVar13;
		GisketchSearchDefinition pGVar14;
		MethodInfo pMVar15;
		String local_58;
		ulong local_50;
		String pSStack_48;
		String local_40;
		AottgUi local_38;

		if (Il2CppMethodInitialized_07545700 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgScreenWithBrushSidePanel)) ;
			Il2CppMethodInitialized_07545700 = true;
		}
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgScreenWithBrushSidePanel.c__DisplayClass34_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			if (index < 0) {
				return;
			}
			pGVar3 = this._sections;
			if (pGVar3 != null) {
				uVar2 = (uint)pGVar3.Length;
				if ((int)uVar2 <= index) {
					return;
				}
				local_38 = content;
				if (uVar2 <= (uint)index) {
					throw new IndexOutOfRangeException();
				}
				pSVar6 = pGVar3[(uint)index]._buildContent;
				pSVar7 = pGVar3[(uint)index]._buildHeaderActions;
				ppSVar1 = &pGVar3[(uint)index].Id;
				pSVar12 = *ppSVar1;
				pSVar4 = ppSVar1[1];
				ppSVar1 = &pGVar3[(uint)index].TextKey;
				pSVar5 = *ppSVar1;
				pSVar8 = ppSVar1[1];
				ppSVar1 = &pGVar3[(uint)index].Keywords;
				uVar9 = ppSVar1[1];
				__this_00.section.Keywords = *ppSVar1;
				*(ulong)&__this_00.section.AutoAddKeywords = uVar9;
				__this_00.section.TextKey = pSVar5;
				__this_00.section.Icon = pSVar8;
				__this_00.section.Id = pSVar12;
				__this_00.section.Text = pSVar4;
				__this_00.section._buildContent = pSVar6;
				__this_00.section._buildHeaderActions = pSVar7;
				pSVar12 = this._id;
				pSVar4 = __this_00.section.Id;
				pSVar5 = __this_00.section.Text;
				local_50 = 0;
				pSStack_48 = null;
				local_40 = null;
				iVar11 = index * 10 + 0x1e;
				local_58 = String.Concat(pSVar12, "-", pSVar4);
				pSStack_48 = pSVar4;
				bVar10 = String.IsNullOrEmpty(pSVar5);
				local_40 = pSVar5;
				if (bVar10) {
					local_40 = pSVar4;
				}
				local_50 = CONCAT44(local_50._4_4_, iVar11);
				__this_00.context._SectionId_k__BackingField = pSStack_48;
				__this_00.context._SectionTitle_k__BackingField = local_40;
				__this_00.context._group = local_58;
				__this_00.context._order = iVar11;
				*(uint)&__this_00.context.field_0xc = local_50._4_4_;
				__this_01 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass34_0_BuildSection_b__0);
				pSVar12 = __this_00.section.Id;
				pMVar15 = (MethodInfo *)"-section-";
				pSVar12 = String.Concat(this._id, "-section-", pSVar12);
				layout = this.SectionLayout();
				if (local_38 != null) {
					pMVar15 = (MethodInfo *)"default";
					node = local_38.Panel("default", __this_01, pSVar12, layout, null);
					AottgScreenWithBrushSidePanel.ClearSectionEnterMotion(node);
					pGVar13 = AottgUi.Motion("fade", null, 0.15, 0.0, 0.0, index);
					if (node != null) {
						node.enter = pGVar13;
						pSVar12 = __this_00.section.Text;
						pGVar14 = AottgUi.Search(pSVar12, __this_00.section.Keywords, __this_00.section.HideSearch, __this_00.section.Icon, "section", __this_00.section.Id, pSVar12, __this_00.section.AutoAddKeywords);
						node.search = pGVar14;
						node.active = index == 0 || this._layoutMode == 0;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60014BE")]
	[Address(RVA = "0x58180F0", Offset = "0x58170F0", VA = "0x58180F0")]
	private GisketchLayoutDefinition SectionLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenWithBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$SectionLayout): clean
		int iVar1;
		GisketchLength width;
		GisketchLength height;
		GisketchLength maxWidth;
		GisketchLayoutDefinition pGVar2;
		float grow;
		float shrink;

		iVar1 = this._contentScrollMode;
		width = AottgUi.Percent(100.0);
		if (iVar1 == 1) {
			height = AottgUi.Percent(100.0);
			maxWidth = null;
			shrink = 1.0;
			grow = 1.0;
		}
		else {
			maxWidth = AottgUi.Points(1120.0);
			height = null;
			shrink = 0.0;
			grow = 0.0;
		}
		pGVar2 = AottgUi.Layout("Column", null, "Stretch", null, null, 12.0, width, height, null, null, maxWidth, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, grow, shrink);
		return pGVar2;
	}

	[Token(Token = "0x60014BF")]
	[Address(RVA = "0x5818240", Offset = "0x5817240", VA = "0x5818240")]
	private static void ClearSectionEnterMotion(GisketchNodeDefinition node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenWithBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$ClearSectionEnterMotion): 1 lines keep C-only constructs
		GisketchUIBindingDefinition pGVar1;
		GisketchNodeDefinition[] nodes;
		bool bVar2;

		if (Il2CppMethodInitialized_07545702 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgScreenWithBrushSidePanel)) ;
			Il2CppMethodInitialized_07545702 = true;
		}
		if (node == null) {
			return;
		}
		pGVar1 = node.bind;
		if (pGVar1 != null) {
			bVar2 = String.IsNullOrEmpty(pGVar1.visible);
			if (!bVar2) goto label_0591829c;
		}
		node.enter = null;
	label_0591829c: ;
		nodes = node.children;
		AottgScreenWithBrushSidePanel.ClearSectionEnterMotion(nodes);
		AottgScreenWithBrushSidePanel.ClearSectionEnterMotion(node.deferredChildren);
		return;
	}

	[Token(Token = "0x60014C0")]
	[Address(RVA = "0x58182E0", Offset = "0x58172E0", VA = "0x58182E0")]
	private static void ClearSectionEnterMotion(GisketchNodeDefinition[] nodes)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenWithBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$ClearSectionEnterMotion): 1 lines keep C-only constructs
		uint uVar1;
		GisketchNodeDefinition node;
		ulong uVar2;
		ulong uVar3;

		if (Il2CppMethodInitialized_07545703 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgScreenWithBrushSidePanel)) ;
			Il2CppMethodInitialized_07545703 = true;
		}
		if ((nodes != null) && (0 < (int)nodes.Length)) {
			uVar2 = nodes.Length & 0xffffffff;
			uVar3 = 0;
			do {
				if (uVar2 <= uVar3) {
					throw new IndexOutOfRangeException();
				}
				node = nodes[uVar3];
				AottgScreenWithBrushSidePanel.ClearSectionEnterMotion(node);
				uVar3 = uVar3 + 1;
				uVar1 = (uint)nodes.Length;
				uVar2 = (ulong)uVar1;
			} while ((long)uVar3 < (long)(int)uVar1);
		}
		return;
	}

	[Token(Token = "0x60014C1")]
	[Address(RVA = "0x5817010", Offset = "0x5816010", VA = "0x5817010")]
	private bool ShouldDeferSections()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenWithBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$ShouldDeferSections): clean
		AottgScreenSection[] pGVar1;
		bool bVar2;

		if (this._deferScrollSections != false) {
			if ((this._lazySections != false) && (this._layoutMode == 1)) {
				pGVar1 = this._sections;
				if (pGVar1 == null) goto label_059170a1;
				if (1 < (int)pGVar1.Length) {
					return false;
				}
			}
			bVar2 = Application.isPlaying;
			if (!bVar2) {
				return false;
			}
			if (this._layoutMode == 0) {
				pGVar1 = this._sections;
				if (pGVar1 != null) {
					return 1 < (int)pGVar1.Length;
				}
	label_059170a1: ;
				throw new NullReferenceException();
			}
		}
		return false;
	}

	[Token(Token = "0x60014C2")]
	[Address(RVA = "0x5816CA0", Offset = "0x5815CA0", VA = "0x5816CA0")]
	private bool ShouldLazySections()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenWithBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$ShouldLazySections): clean
		AottgScreenSection[] pGVar1;

		if ((this._lazySections == false) || (this._layoutMode != 1)) {
			return false;
		}
		pGVar1 = this._sections;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		return 1 < (int)pGVar1.Length;
	}

	[Token(Token = "0x60014C3")]
	[Address(RVA = "0x5818380", Offset = "0x5817380", VA = "0x5818380")]
	private void AddSectionHeader(AottgUi panel, AottgScreenSection section, AottgScreenSectionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenWithBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$AddSectionHeader): 17 lines keep C-only constructs
		AottgScreenSection targetAddress;
		ulong uVar1;
		AottgScreenSection section_00;
		AottgScreenWithBrushSidePanel.c__DisplayClass40_0 __this_00;
		Action<AottgUi> __this_01;
		String pSVar2;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		AottgScreenSectionContext targetAddress_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgScreenWithBrushSidePanel.c__DisplayClass40_0));
		__this_00 = new Object();
		if (__this_00 == null) {
	label_05918676: ;
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		targetAddress = &__this_00.section;
		__this_00.section.Keywords = section.Keywords;
		__this_00.section.AutoAddKeywords = section.AutoAddKeywords;
		__this_00.section.HideSearch = section.HideSearch;
		__this_00.section.HideHeader = section.HideHeader;
		*(undefined5)&__this_00.section.field_0x3b = section._59_5_;
		__this_00.section.TextKey = section.TextKey;
		__this_00.section.Icon = section.Icon;
		__this_00.section.Id = section.Id;
		__this_00.section.Text = section.Text;
		__this_00.section._buildContent = section._buildContent;
		__this_00.section._buildHeaderActions = section._buildHeaderActions;
		targetAddress_00 = &__this_00.context;
		__this_00.context._SectionId_k__BackingField = context._SectionId_k__BackingField;
		__this_00.context._SectionTitle_k__BackingField = context._SectionTitle_k__BackingField;
		__this_00.context._group = context._group;
		__this_00.context._order = context._order;
		*(uint)&__this_00.context.field_0xc = context._12_4_;
		if (__this_00.section.HideHeader == false) {
			if (__this_00.section._buildHeaderActions ==null) {
				pSVar2 = __this_00.section.Keywords;
				uVar1._0_1_ = __this_00.section.AutoAddKeywords;
				uVar1._1_1_ = __this_00.section.HideSearch;
				uVar1._2_1_ = __this_00.section.HideHeader;
				uVar1._3_5_ = *(undefined5)&__this_00.section.field_0x3b;
				section_00.Icon._4_4_ = (int)((ulong)__this_00.section.Icon >> 0x20);
				__ghidra(@"section_00._0_44_ = *(undefined1 (*) [44])&targetAddress.fields;");
				section_00.Keywords._0_4_ = (int)pSVar2;
				section_00.Keywords._4_4_ = (int)((ulong)pSVar2 >> 0x20);
				section_00.AutoAddKeywords = (bool)(undefined1)uVar1;
				section_00.HideSearch = (bool)(char)((ulong)uVar1 >> 8);
				section_00.HideHeader = (bool)(char)((ulong)uVar1 >> 0x10);
				section_00._59_1_ = (char)((ulong)uVar1 >> 0x18);
				section_00._60_4_ = (int)((uint5)uVar1._3_5_ >> 8);
				this.SectionHeader(panel, section_00, (AottgScreenSectionContext)targetAddress_00.fields);
			}
			else {
				__this_01 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass40_0_AddSectionHeader_b__0);
				pSVar2 = __this_00.section.Id;
				pSVar2 = String.Concat(this._id, "-section-", pSVar2);
				pSVar2 = String.Concat(pSVar2, "-header");
				pSVar2 = String.Concat(pSVar2, "-row");
				width = AottgUi.Percent(100.0);
				layout = AottgUi.Layout("Row", "SpaceBetween", "Center", null, null, 16.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				if (panel == null) goto label_05918676;
				panel.Panel("default", __this_01, pSVar2, layout, null);
			}
		}
		return;
	}

	[Token(Token = "0x60014C4")]
	[Address(RVA = "0x5818690", Offset = "0x5817690", VA = "0x5818690")]
	private GisketchNodeDefinition SectionHeader(AottgUi parent, AottgScreenSection section, AottgScreenSectionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenWithBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$SectionHeader): clean
		String pSVar1;
		GisketchMotionDefinition enter;
		GisketchNodeDefinition pGVar2;

		pSVar1 = String.Concat(this._id, "-section-", section.Id);
		pSVar1 = String.Concat(pSVar1, "-header");
		enter = AottgUi.Motion("slideLeft", context._group, 0.12, 0.01, 0.018, context._order);
		if ((parent == null) ||(pGVar2 = parent.Text(section.Text, "header", pSVar1, null, enter), pGVar2 == null)) {
			throw new NullReferenceException();
		}
		pGVar2.textKey = section.TextKey;
		return pGVar2;
	}

	[Token(Token = "0x60014C5")]
	[Address(RVA = "0x5816BE0", Offset = "0x5815BE0", VA = "0x5816BE0")]
	private string[] SectionIds()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenWithBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$SectionIds): 1 lines keep C-only constructs
		uint uVar1;
		String[] pSVar2;
		AottgScreenSection[] pGVar3;
		ulong uVar4;
		long lVar5;

		pGVar3 = this._sections;
		if (pGVar3 != null) {
			pSVar2 = (String[])new string[(uint32_t)pGVar3.Length];
			pGVar3 = this._sections;
			if (pGVar3 != null) {
				if (pSVar2 == null) {
					if ((int)pGVar3.Length < 1) {
						return null;
					}
				}
				else {
					lVar5 = 0;
					uVar4 = 0;
					do {
						uVar1 = (uint)pGVar3.Length;
						if ((long)(int)uVar1 <= (long)uVar4) {
							return pSVar2;
						}
						if ((uVar1 <= uVar4) || ((uint)pSVar2.Length <= uVar4)) {
							throw new IndexOutOfRangeException();
						}
						pSVar2[uVar4] = (&pGVar3[0].Id)[lVar5];
						uVar4 = uVar4 + 1;
						pGVar3 = this._sections;
						lVar5 = lVar5 + 8;
					} while (pGVar3 != null);
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60014C6")]
	[Address(RVA = "0x5816CD0", Offset = "0x5815CD0", VA = "0x5816CD0")]
	private AottgBrushSidePanelOption[] SectionOptions(bool lazySections)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenWithBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$SectionOptions): 8 lines keep C-only constructs
		ulong puVar1;
		Action<AottgUi, AottgScreenSectionContext> pSVar2;
		Action<AottgUi, AottgScreenSectionContext> pSVar3;
		String pSVar4;
		ulong uVar5;
		bool bVar6;
		AottgScreenWithBrushSidePanel.c__DisplayClass43_0 __this_00;
		AottgBrushSidePanelOption[] pGVar7;
		AottgScreenSection[] pGVar8;
		AottgScreenWithBrushSidePanel.c__DisplayClass43_1 __this_01;
		Action<GisketchActionContext> __this_02;
		String pSVar9;
		String pSVar10;
		AottgBrushSidePanelOption targetAddress;
		long lVar11;
		ulong uVar12;
		String pSVar13;
		AottgBrushSidePanelOption local_d8;
		AottgBrushSidePanelOption[] local_88;
		AottgScreenWithBrushSidePanel.c__DisplayClass43_0 local_80;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgScreenWithBrushSidePanel.c__DisplayClass43_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.lazySections = lazySections;
			pGVar8 = this._sections;
			local_80 = __this_00;
			if (pGVar8 != null) {
				pGVar7 = (AottgBrushSidePanelOption[])new AottgBrushSidePanelOption[(uint32_t)pGVar8.Length];
				pGVar8 = this._sections;
				if (pGVar8 != null) {
					lVar11 = 0x20;
					uVar12 = 0;
					targetAddress = pGVar7.m_Items;
					local_88 = pGVar7;
					do {
						if ((long)(int)pGVar8.Length <= (long)uVar12) {
							return pGVar7;
						}
						__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgScreenWithBrushSidePanel.c__DisplayClass43_1));
						__this_01 = new Object();
						if (__this_01 == null ) break;
						__this_01.CS___8__locals1 = local_80;
						pGVar8 = this._sections;
						if (pGVar8 == null) break;
						if ((uint)pGVar8.Length <= uVar12) {
	label_05916ffc: ;
							throw new IndexOutOfRangeException();
						}
						puVar1 = (ulong)((long)pGVar8.m_Items + lVar11 + -0x20);
						pSVar2 = (Action<AottgUi, AottgScreenSectionContext>)*puVar1;
						pSVar3 = (Action<AottgUi, AottgScreenSectionContext>)puVar1[1];
						puVar1 = (ulong)((long)pGVar8.m_Items + lVar11 + -0x10);
						pSVar9 = (String)*puVar1;
						pSVar13 = (String)puVar1[1];
						puVar1 = (ulong)((long)&pGVar8[0]._buildContent + lVar11);
						pSVar10 = (String)*puVar1;
						pSVar4 = (String)puVar1[1];
						puVar1 = (ulong)((long)&pGVar8[0].Id + lVar11);
						uVar5 = puVar1[1];
						__this_01.section.Keywords = (String)*puVar1;
						__this_01.section.AutoAddKeywords = (bool)(char)uVar5;
						__this_01.section.HideSearch = (bool)(char)((ulong)uVar5 >> 8);
						__this_01.section.HideHeader = (bool)(char)((ulong)uVar5 >> 0x10);
						*(int5)&__this_01.section.field_0x3b = (int5)((ulong)uVar5 >> 0x18);
						__this_01.section.TextKey = pSVar10;
						__this_01.section.Icon = pSVar4;
						__this_01.section.Id = pSVar9;
						__this_01.section.Text = pSVar13;
						__this_01.section._buildContent = pSVar2;
						__this_01.section._buildHeaderActions = pSVar3;
						__this_02 = new Action<GisketchActionContext>((object)__this_01, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass43_1_SectionOptions_b__0);
						bVar6 = String.IsNullOrEmpty(__this_01.section.TextKey);
						if (bVar6) {
							pSVar9 = __this_01.section.Text;
							pSVar13 = __this_01.section.Icon;
							pSVar10 = null;
						}
						else {
							pSVar10 = __this_01.section.TextKey;
							pSVar13 = __this_01.section.Icon;
							pSVar9 = null;
						}
						local_d8.StackedOptions = null;
						local_d8.Tooltip = null;
						local_d8.Searchable = false;
						local_d8._49_7_ = 0;
						local_d8.Action = null;
						local_d8.ActionId = null;
						local_d8.Icon = null;
						local_d8.TextKey = null;
						local_d8.Id = null;
						local_d8._text = null;
						local_d8 = new AottgBrushSidePanelOption(__this_01.section.Id, pSVar10, pSVar9, null, __this_02, pSVar13, false, null, null);
						pGVar7 = local_88;
						if (local_88 == null) break;
						if ((uint)local_88.Length <= uVar12) goto label_05916ffc;
						lVar11 = lVar11 + 0x40;
						uVar12 = uVar12 + 1;
						targetAddress.StackedOptions = local_d8.StackedOptions;
						targetAddress.Searchable = local_d8.Searchable;
						*(undefined7)&targetAddress.field_0x31 = local_d8._49_7_;
						targetAddress.Tooltip = local_d8.Tooltip;
						targetAddress.ActionId = local_d8.ActionId;
						targetAddress.Action = local_d8.Action;
						targetAddress.TextKey = local_d8.TextKey;
						targetAddress.Icon = local_d8.Icon;
						targetAddress._text = local_d8._text;
						targetAddress.Id = local_d8.Id;
						pGVar8 = this._sections;
						targetAddress = targetAddress + 1;
					} while (pGVar8 != null);
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60014C7")]
	[Address(RVA = "0x58180A0", Offset = "0x58170A0", VA = "0x58180A0")]
	private string SectionRootId(string sectionId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenWithBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$SectionRootId): clean
		String pSVar1;

		pSVar1 = String.Concat(this._id, "-section-", sectionId);
		return pSVar1;
	}

	[Token(Token = "0x60014C8")]
	[Address(RVA = "0x5818820", Offset = "0x5817820", VA = "0x5818820")]
	private string SectionHeaderId(string sectionId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenWithBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$SectionHeaderId): clean
		String pSVar1;

		pSVar1 = String.Concat(this._id, "-section-", sectionId);
		pSVar1 = String.Concat(pSVar1, "-header");
		return pSVar1;
	}

	[Token(Token = "0x60014C9")]
	[Address(RVA = "0x58188C0", Offset = "0x58178C0", VA = "0x58188C0")]
	private string SectionBodyId(string sectionId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenWithBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$SectionBodyId): clean
		String pSVar1;

		pSVar1 = String.Concat(this._id, "-section-", sectionId);
		pSVar1 = String.Concat(pSVar1, "-body");
		return pSVar1;
	}

	[Token(Token = "0x60014CA")]
	[Address(RVA = "0x5817290", Offset = "0x5816290", VA = "0x5817290")]
	private static GisketchLayoutDefinition FullScreenAbsolute()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenWithBrushSidePanel.c (Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$FullScreenAbsolute): clean
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar1;

		width = AottgUi.Percent(100.0);
		height = AottgUi.Percent(100.0);
		pGVar1 = AottgUi.Layout("Column", null, null, "Absolute", null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		return pGVar1;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScreenWithBrushSidePanel.c.

	// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass26_0$$.ctor: clean
	private void c__DisplayClass26_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass28_0$$.ctor: clean
	private void c__DisplayClass28_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass31_0$$.ctor: clean
	private void c__DisplayClass31_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass33_0$$.ctor: clean
	private void c__DisplayClass33_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass34_0$$.ctor: clean
	private void c__DisplayClass34_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass40_0$$.ctor: clean
	private void c__DisplayClass40_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass43_0$$.ctor: clean
	private void c__DisplayClass43_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass43_1$$.ctor: clean
	private void c__DisplayClass43_1__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$<BuildLegacy>b__27_0: clean
	private void BuildLegacy_b__27_0(AottgUi panel)
	{
		AottgBrushSidePanel pGVar1;

		if (panel == null) {
			throw new NullReferenceException();
		}
		pGVar1 = this._sidePanel;
		if (pGVar1 == null) {
			return;
		}
		pGVar1.Build(panel);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass26_0$$<BuildSectioned>b__0: clean
	private void c__DisplayClass26_0__BuildSectioned_b__0(AottgUi content)
	{
		AottgScreenWithBrushSidePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.BuildSections(content, this.deferSections, this.lazySections);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass26_0$$<BuildSectioned>b__1: clean
	private void c__DisplayClass26_0__BuildSectioned_b__1(AottgUi panel)
	{
		AottgScreenWithBrushSidePanel pGVar1;
		AottgBrushSidePanelOption[] options;
		String titleKey;
		AottgBrushSidePanelOption[] footerOptions;
		AottgBrushSidePanel __this_00;

		pGVar1 = this.__4__this;
		if (pGVar1 != null) {
			options = this.options;
			titleKey = pGVar1._titleKey;
			footerOptions = pGVar1._footerOptions;
			__this_00 = new AottgBrushSidePanel(titleKey, options, footerOptions, 0.0);
			if (panel != null) {
				panel.Component((AottgComponent)__this_00);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass28_0$$<BuildContentLayer>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass28_0__BuildContentLayer_b__0(AottgUi content)
	{
		AottgScreenWithBrushSidePanel pGVar1;
		Action<AottgUi> pSVar2;
		String str0;
		Action<AottgUi> buildFooter;
		MethodInfo method_00;
		GisketchLayoutDefinition pGVar3;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition contentLayout;

		if (Il2CppMethodInitialized_0754570e == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgScreenWithBrushSidePanel)) ;
			Il2CppMethodInitialized_0754570e = true;
		}
		pGVar1 = this.__4__this;
		if (pGVar1 != null) {
			pSVar2 = this.build;
			str0 = pGVar1._id;
			if (pGVar1._contentScrollMode == 1) {
				method_00 = (MethodInfo)String.Concat(str0, "-section-owned-content");
				pGVar3 = AottgScreenWithBrushSidePanel.SectionOwnedContentLayerLayout();
				if (content == null) goto label_05918c45;
				content.Panel("clear", pSVar2, (String)method_00, pGVar3, null);
				pSVar2 = this.buildFooter;
			}
			else {
				method_00 = (MethodInfo)String.Concat(str0, "-scroll");
				width = AottgUi.Percent(100.0);
				height = AottgUi.Percent(100.0);
				pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				buildFooter = this.buildFooter;
				if ((typeof(AottgScreenWithBrushSidePanel)._2).cctor_finished_or_no_cctor == 0) {
				}
				contentLayout = AottgScreenWithBrushSidePanel.ContentLayerLayout(buildFooter, false);
				if (content == null) goto label_05918c45;
				content.ScrollView("brushSidePanelScreenScroll", pSVar2, (String)method_00, pGVar3, contentLayout, null);
				pSVar2 = this.buildFooter;
			}
			if (pSVar2 == null) {
				return;
			}
			pGVar1 = this.__4__this;
			if (pGVar1 != null) {
				pGVar1.AddContentFooter(content, pSVar2);
				return;
			}
		}
	label_05918c45: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass31_0$$<AddContentFooter>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass31_0__AddContentFooter_b__0(AottgUi layer)
	{
		AottgScreenWithBrushSidePanel pGVar1;
		String style;
		Action<AottgUi> __this_00;
		String id;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;

		style = "brushSidePanelContentFooter";
		__this_00 = this.__9__1;
		if (__this_00 == null) {
			__this_00 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass31_0_AddContentFooter_b__1);
			this.__9__1 = __this_00;
		}
		pGVar1 = this.__4__this;
		if (pGVar1 != null) {
			id = String.Concat(pGVar1._id, "-content-footer");
			width = AottgUi.Percent(100.0);
			height = AottgUi.Points(132.0);
			layout = AottgUi.Layout("Column", "Center", "Stretch", null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			if (layer != null) {
				layer.Panel(style, __this_00, id, layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass31_0$$<AddContentFooter>b__1: clean
	private void c__DisplayClass31_0__AddContentFooter_b__1(AottgUi footer)
	{
		AottgScreenWithBrushSidePanel pGVar1;
		Action<AottgUi> build;
		String pSVar2;
		GisketchLength pGVar3;
		GisketchLength pGVar4;
		GisketchLayoutDefinition pGVar5;

		pGVar1 = this.__4__this;
		if (pGVar1 != null) {
			pSVar2 = String.Concat(pGVar1._id, "-content-footer-texture");
			pGVar3 = AottgUi.Percent(100.0);
			pGVar4 = AottgUi.Percent(100.0);
			pGVar5 = AottgUi.Layout("Column", null, null, "Absolute", null, 0.0, pGVar3, pGVar4, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			if (footer != null) {
				footer.Image("GisketchUI/Texture/SeamlessGrunge", "brushSidePanelContentFooterTexture", pSVar2, pGVar5, null);
				pGVar1 = this.__4__this;
				if (pGVar1 != null) {
					pGVar1.AddFooterTopEdge(footer);
					pGVar1 = this.__4__this;
					if (pGVar1 != null) {
						build = this.buildFooter;
						pSVar2 = String.Concat(pGVar1._id, "-content-footer-actions") ;
						pGVar3 = AottgUi.Percent(100.0);
						pGVar4 = AottgUi.Percent(100.0);
						pGVar5 = AottgUi.Layout("Row", "FlexEnd", "Center", null, null, 12.0, pGVar3, pGVar4, null, null, null, null, 0.0, 0.0, 0.0, 582.0, 56.0, 20.0, 20.0, 0.0, 0.0, 0.0, 1.0);
						footer.Panel("default", build, pSVar2, pGVar5, null);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass33_0$$<BuildSections>b__1: clean
	private void c__DisplayClass33_0__BuildSections_b__1(AottgUi deferredUi)
	{
		AottgScreenSection[] pGVar1;
		int index;
		AottgScreenWithBrushSidePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 != null) {
			index = 0;
			do {
				pGVar1 = __this_00._sections;
				if (pGVar1 == null) break;
				if ((int)pGVar1.Length <= index) {
					return;
				}
				__this_00.BuildSection(deferredUi, index);
				index = index + 1;
				__this_00 = this.__4__this;
			} while (__this_00 != null);
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass33_0$$<BuildSections>b__0: clean
	private void c__DisplayClass33_0__BuildSections_b__0(AottgUi deferredUi)
	{
		AottgScreenSection[] pGVar1;
		int index;
		AottgScreenWithBrushSidePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 != null) {
			index = this.immediateCount;
			do {
				pGVar1 = __this_00._sections;
				if (pGVar1 == null) break;
				if ((int)pGVar1.Length <= index) {
					return;
				}
				__this_00.BuildSection(deferredUi, index);
				index = index + 1;
				__this_00 = this.__4__this;
			} while (__this_00 != null);
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass34_0$$<BuildSection>b__0: 19 lines keep C-only constructs
	private void c__DisplayClass34_0__BuildSection_b__0(AottgUi panel)
	{
		AottgScreenSection pGVar1;
		AottgScreenWithBrushSidePanel pGVar2;
		Action<AottgUi, AottgScreenSectionContext> pSVar3;
		String pSVar4;
		String pSVar5;
		String pSVar6;
		ulong uVar7;
		AottgScreenSection section;
		Action<AottgUi> __this_00;
		String pSVar8;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		pGVar2 = this.__4__this;
		if (pGVar2 != null) {
			pGVar1 = &this.section;
			if (pGVar2._hideSectionChrome != false) {
				pSVar3 = pGVar1._buildContent;
				if (pSVar3 != null) {
					(*(code)pSVar3.invoke_impl)(pSVar3.method_code,panel,pSVar3.method);
				}
				return;
			}
			pSVar4 = this.section.Id;
			pSVar8 = this.section.Text;
			pSVar5 = this.section.Icon;
			pSVar6 = this.section.Keywords;
			uVar7._0_1_ = this.section.AutoAddKeywords;
			uVar7._1_1_ = this.section.HideSearch;
			uVar7._2_1_ = this.section.HideHeader;
			uVar7._3_5_ = *(undefined5)&this.section.field_0x3b;
			section._buildHeaderActions._4_4_ =(int)((ulong)this.section._buildHeaderActions >> 0x20);
			__ghidra(@"section._0_12_ = *(undefined1 (*) [12])&pGVar1.fields;");
			section.Id._0_4_ = (int)pSVar4;
			section.Id._4_4_ = (int)((ulong)pSVar4 >> 0x20);
			section.Text._0_4_ = (int)pSVar8;
			section.Text._4_4_ = (int)((ulong)pSVar8 >> 0x20);
			section.TextKey = this.section.TextKey;
			section.Icon._0_4_ = (int)pSVar5;
			section.Icon._4_4_ = (int)((ulong)pSVar5 >> 0x20);
			section.Keywords._0_4_ = (int)pSVar6;
			section.Keywords._4_4_ = (int)((ulong)pSVar6 >> 0x20);
			section.AutoAddKeywords = (bool)(undefined1)uVar7;
			section.HideSearch = (bool)(char)((ulong)uVar7 >> 8);
			section.HideHeader = (bool)(char)((ulong)uVar7 >> 0x10);
			section._59_1_ = (char)((ulong)uVar7 >> 0x18);
			section._60_4_ = (int)((uint5)uVar7._3_5_ >> 8);
			pGVar2.AddSectionHeader(panel, section, (AottgScreenSectionContext)this.context);
			pSVar4 = "card";
			__this_00 = this.__9__1;
			if (__this_00 == null) {
				__this_00 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass34_0_BuildSection_b__1);
				this.__9__1 = __this_00;
			}
			pGVar2 = this.__4__this;
			if (pGVar2 != null) {
				pSVar8 = this.section.Id;
				pSVar8 = String.Concat(pGVar2._id, "-section-", pSVar8);
				pSVar8 = String.Concat(pSVar8, "-body");
				width = AottgUi.Percent(100.0);
				layout = AottgUi.Layout("Column", null, "Stretch", null, null, 12.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				if (panel != null) {
					panel.Panel(pSVar4, __this_00, pSVar8, layout, null);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass34_0$$<BuildSection>b__1: clean
	private void c__DisplayClass34_0__BuildSection_b__1(AottgUi body)
	{
		Action<AottgUi, AottgScreenSectionContext> pSVar1;

		pSVar1 = this.section._buildContent;
		if (pSVar1 != null) {
			(*(code)pSVar1.invoke_impl)(pSVar1.method_code,body,pSVar1.method);
		}
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass40_0$$<AddSectionHeader>b__0: 17 lines keep C-only constructs
	private void c__DisplayClass40_0__AddSectionHeader_b__0(AottgUi headerRow)
	{
		AottgScreenWithBrushSidePanel __this_00;
		Action<AottgUi, AottgScreenSectionContext> pSVar1;
		String pSVar2;
		String pSVar3;
		String pSVar4;
		String pSVar5;
		ulong uVar6;
		AottgScreenSection section;
		GisketchNodeDefinition pGVar7;
		GisketchLayoutDefinition pGVar8;

		__this_00 = this.__4__this;
		if (__this_00 != null) {
			pSVar2 = this.section.Id;
			pSVar3 = this.section.Text;
			pSVar4 = this.section.Icon;
			pSVar5 = this.section.Keywords;
			uVar6._0_1_ = this.section.AutoAddKeywords;
			uVar6._1_1_ = this.section.HideSearch;
			uVar6._2_1_ = this.section.HideHeader;
			uVar6._3_5_ = *(undefined5)&this.section.field_0x3b;
			section._buildHeaderActions._4_4_ =(int)((ulong)this.section._buildHeaderActions >> 0x20);
			__ghidra(@"section._0_12_ = *(undefined1 (*) [12])&this.section;");
			section.Id._0_4_ = (int)pSVar2;
			section.Id._4_4_ = (int)((ulong)pSVar2 >> 0x20);
			section.Text._0_4_ = (int)pSVar3;
			section.Text._4_4_ = (int)((ulong)pSVar3 >> 0x20);
			section.TextKey = this.section.TextKey;
			section.Icon._0_4_ = (int)pSVar4;
			section.Icon._4_4_ = (int)((ulong)pSVar4 >> 0x20);
			section.Keywords._0_4_ = (int)pSVar5;
			section.Keywords._4_4_ = (int)((ulong)pSVar5 >> 0x20);
			section.AutoAddKeywords = (bool)(undefined1)uVar6;
			section.HideSearch = (bool)(char)((ulong)uVar6 >> 8);
			section.HideHeader = (bool)(char)((ulong)uVar6 >> 0x10);
			section._59_1_ = (char)((ulong)uVar6 >> 0x18);
			section._60_4_ = (int)((uint5)uVar6._3_5_ >> 8);
			pGVar7 = __this_00.SectionHeader(headerRow, section, (AottgScreenSectionContext)this.context);
			pGVar8 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
			if (pGVar7 != null) {
				pGVar7.layout = pGVar8;
				pSVar1 = this.section._buildHeaderActions;
				if (pSVar1 != null) {
					(*(code)pSVar1.invoke_impl)(pSVar1.method_code,headerRow,pSVar1.method);
				}
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass43_1$$<SectionOptions>b__0: clean
	private void c__DisplayClass43_1__SectionOptions_b__0(GisketchActionContext context)
	{
		AottgScreenWithBrushSidePanel.c__DisplayClass43_0 pGVar1;
		String sectionId;
		bool bVar2;

		pGVar1 = this.CS___8__locals1;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		if (pGVar1.lazySections != false) {
			bVar2 = AottgLazySidePanelSectionsRuntime.Select(context.GameObject, this.section.Id);
			if (bVar2) {
				return;
			}
		}
		sectionId = this.section.Id;
		context.GameObject.Select(sectionId, false);
		return;
	}
}
