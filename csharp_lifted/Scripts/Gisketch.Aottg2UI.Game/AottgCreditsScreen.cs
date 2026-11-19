// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCreditsScreen
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsScreen.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using ApplicationManagers.Credits;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000202")]
[AottgScreen("credits", TitleKey = "Credits.Title", SearchTitleKey = "Common.Credits", SearchGroup = "main-menu", BackScreenId = "main-menu")]
public sealed class AottgCreditsScreen : AottgScreen
{
	[Token(Token = "0x4000ABA")]
	public const string Id = "credits";

	[Token(Token = "0x4000ABB")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AottgBrushSidePanelOption[] Footer;

	[Token(Token = "0x1700015A")]
	protected override string RootStyle
	{
		[Token(Token = "0x6000BF4")]
		[Address(RVA = "0x5D82120", Offset = "0x5D81120", VA = "0x5D82120", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsScreen.c (Gisketch.Aottg2UI.Game.AottgCreditsScreen$$get_RootStyle): clean
			return "mainMenuOverlay";
		}
	}

	[Token(Token = "0x1700015B")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000BF5")]
		[Address(RVA = "0x5D82150", Offset = "0x5D81150", VA = "0x5D82150", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsScreen.c (Gisketch.Aottg2UI.Game.AottgCreditsScreen$$get_RootLayout): clean
			GisketchLength width;
			GisketchLength height;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Percent(100.0);
			height = AottgUi.Percent(100.0);
			pGVar1 = AottgUi.Layout("Column", "FlexStart", "FlexStart", null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6000BF3")]
	[Address(RVA = "0x5D81E40", Offset = "0x5D80E40", VA = "0x5D81E40")]
	static AottgCreditsScreen()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsScreen.c (Gisketch.Aottg2UI.Game.AottgCreditsScreen$$.cctor): 2 lines keep C-only constructs
		AottgBrushSidePanelOption[] pGVar1;
		AottgBrushSidePanelOption local_58;

		pGVar1 = (AottgBrushSidePanelOption[])new AottgBrushSidePanelOption[1];
		local_58.Searchable = false;
		local_58._49_7_ = 0;
		local_58.Tooltip = null;
		local_58.ActionId = null;
		local_58.Action = null;
		local_58.TextKey = null;
		local_58.Icon = null;
		local_58._text = null;
		local_58.Id = null;
		local_58.StackedOptions = null;
		local_58 = new AottgBrushSidePanelOption("back", "Common.Back", "screen.main-menu", "return", false, null);
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		if ((int)pGVar1.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		pGVar1[0].StackedOptions = local_58.StackedOptions;
		pGVar1[0].Searchable = local_58.Searchable;
		*(undefined7)&pGVar1[0].field_0x31 = local_58._49_7_;
		pGVar1[0].Tooltip = local_58.Tooltip;
		pGVar1[0].ActionId = local_58.ActionId;
		pGVar1[0].Action = local_58.Action;
		pGVar1[0].TextKey = local_58.TextKey;
		pGVar1[0].Icon = local_58.Icon;
		pGVar1[0]._text = local_58._text;
		pGVar1[0].Id = local_58.Id;
		AottgCreditsScreen.Footer = pGVar1;
		AottgPublicProfileHover.RegisterFactory();
		if ((typeof(AottgHoverMarqueeText)._2).cctor_finished_or_no_cctor == 0) {
			AottgHoverMarqueeText.RegisterFactory();
			return;
		}
		AottgHoverMarqueeText.RegisterFactory();
		return;
	}

	[Token(Token = "0x6000BF6")]
	[Address(RVA = "0x5D82220", Offset = "0x5D81220", VA = "0x5D82220", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsScreen.c (Gisketch.Aottg2UI.Game.AottgCreditsScreen$$Build): 1 lines keep C-only constructs
		AottgBrushSidePanelOption[] footerOptions;
		bool deferScrollSections;
		AottgScreenSection[] sections;
		AottgScreenWithBrushSidePanel __this_00;

		if (Il2CppMethodInitialized_0754882f == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgScreenWithBrushSidePanel)) ;
			Il2CppMethodInitialized_0754882f = true;
		}
		sections = AottgCreditsScreen.Sections();
		footerOptions = AottgCreditsScreen.Footer;
		deferScrollSections = AottgCreditsScreenState.HasCategories;
		__this_00 = new AottgScreenWithBrushSidePanel("Common.Credits", sections, 0, footerOptions, "credits-screen", null, deferScrollSections, false, false, 0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Component((AottgComponent)__this_00);
		return;
	}

	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x5D82310", Offset = "0x5D81310", VA = "0x5D82310")]
	private static AottgScreenSection[] Sections()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsScreen.c (Gisketch.Aottg2UI.Game.AottgCreditsScreen$$Sections): 7 lines keep C-only constructs
		AottgCreditsResponse credits;
		object obj;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		int iVar3;
		VirtualInvokeData pVVar4;
		AottgScreenSection[] pGVar5;
		Action<T1, T2> __this;
		ulong uVar6;
		MethodInfo method_00;
		long lVar7;
		AottgScreenSection local_58;

		credits = AottgCreditsScreenState._Credits_k__BackingField;
		if (credits != null) {
			obj = (object)credits._Categories_k__BackingField;
			if (obj == null) goto label_05e82541;
			pIVar1 = obj.klass;
			uVar6 = (ulong)(pIVar1._2).interface_offsets_count;
			if (uVar6 != 0) {
				pIVar2 = (pIVar1._1).interfaceOffsets;
				lVar7 = 0;
				do {
					if (*(IReadOnlyCollection<AottgCreditCategory>*)((long)&pIVar2.interfaceType + lVar7) == typeof(IReadOnlyCollection<AottgCreditCategory>)) {
						pVVar4 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar7);
						goto label_05e82431;
					}
					lVar7 = lVar7 + 0x10;
				} while (uVar6 * 0x10 != lVar7);
			}
			pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IReadOnlyCollection<AottgCreditCategory>), 0);
	label_05e82431: ;
			method_00 = pVVar4.method;
			iVar3 = (*pVVar4.methodPtr)(obj,method_00);
			if (0 < iVar3) {
				pGVar5 = AottgCreditsScreen.CreditSections(credits);
				return pGVar5;
			}
		}
		pGVar5 = (AottgScreenSection[])new AottgScreenSection[1];
		__this = new Action<AottgUi, AottgScreenSectionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_BuildCredits);
		local_58.Keywords = null;
		local_58.AutoAddKeywords = false;
		local_58.HideSearch = false;
		local_58.HideHeader = false;
		local_58._59_5_ = 0;
		local_58.TextKey = null;
		local_58.Icon = null;
		local_58.Id = null;
		local_58.Text = null;
		local_58._buildContent = null;
		local_58._buildHeaderActions = null;
		local_58 = new AottgScreenSection("credits", "Common.Credits", "trophy", (Action<AottgUi, AottgScreenSectionContext>)__this, null, false, null, false, false);
		if (pGVar5 != null) {
			if ((int)pGVar5.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pGVar5[0].Keywords = local_58.Keywords;
			pGVar5[0].AutoAddKeywords = local_58.AutoAddKeywords;
			pGVar5[0].HideSearch = local_58.HideSearch;
			pGVar5[0].HideHeader = local_58.HideHeader;
			*(undefined5)&pGVar5[0].field_0x3b = local_58._59_5_;
			pGVar5[0].TextKey = local_58.TextKey;
			pGVar5[0].Icon = local_58.Icon;
			pGVar5[0].Id = local_58.Id;
			pGVar5[0].Text = local_58.Text;
			pGVar5[0]._buildContent = local_58._buildContent;
			pGVar5[0]._buildHeaderActions = local_58._buildHeaderActions;
			return pGVar5;
		}
	label_05e82541: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000BF8")]
	[Address(RVA = "0x5D82630", Offset = "0x5D81630", VA = "0x5D82630")]
	private static AottgScreenSection[] CreditSections(AottgCreditsResponse credits)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsScreen.c (Gisketch.Aottg2UI.Game.AottgCreditsScreen$$CreditSections): 18 lines keep C-only constructs
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		String text;
		AottgScreenSection pGVar3;
		uint length;
		int iVar4;
		VirtualInvokeData pVVar5;
		AottgScreenSection[] pGVar6;
		AottgCreditsScreen.c__DisplayClass9_0 __this;
		AottgCreditCategory pAVar7;
		String id;
		Action<T1, T2> __this_00;
		ulong uVar8;
		object pIVar9;
		long lVar10;
		ulong uVar11;
		AottgScreenSection GStack_70;

		if ((credits != null) &&(pIVar9 = (object)credits._Categories_k__BackingField, pIVar9 != null)) {
			pIVar1 = pIVar9.klass;
			uVar11 = (ulong)(pIVar1._2).interface_offsets_count;
			if (uVar11 != 0) {
				pIVar2 = (pIVar1._1).interfaceOffsets;
				lVar10 = 0;
				do {
					if (*(IReadOnlyCollection<AottgCreditCategory>*)((long)&pIVar2.interfaceType + lVar10) == typeof(IReadOnlyCollection<AottgCreditCategory>)) {
						pVVar5 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar10);
						goto label_05e82721;
					}
					lVar10 = lVar10 + 0x10;
				} while (uVar11 * 0x10 != lVar10);
			}
			pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar9, (Il2CppClass)typeof(IReadOnlyCollection<AottgCreditCategory>), 0);
	label_05e82721: ;
			length = (*pVVar5.methodPtr)(pIVar9,pVVar5.method);
			pGVar6 = (AottgScreenSection[])new AottgScreenSection[length];
			pIVar9 = (object)credits._Categories_k__BackingField;
			if (pIVar9 != null) {
				uVar11 = 0;
				do {
					pIVar1 = pIVar9.klass;
					uVar8 = (ulong)(pIVar1._2).interface_offsets_count;
					if (uVar8 != 0) {
						pIVar2 = (pIVar1._1).interfaceOffsets;
						lVar10 = 0;
						do {
							if (*(IReadOnlyCollection<AottgCreditCategory>*)((long)&pIVar2.interfaceType + lVar10) == typeof(IReadOnlyCollection<AottgCreditCategory>)) {
								pVVar5 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar10);
								goto label_05e827c3;
							}
							lVar10 = lVar10 + 0x10;
						} while (uVar8 * 0x10 != lVar10);
					}
					pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar9, (Il2CppClass)typeof(IReadOnlyCollection<AottgCreditCategory>), 0);
	label_05e827c3: ;
					iVar4 = (*pVVar5.methodPtr)(pIVar9,pVVar5.method);
					if ((long)iVar4 <= (long)uVar11) {
						return pGVar6;
					}
					__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgCreditsScreen.c__DisplayClass9_0));
					__this = new Object();
					if (__this == null) break;
					__this.index = (int32_t)uVar11;
					pIVar9 = (object)credits._Categories_k__BackingField;
					if (pIVar9 == null) break;
					pIVar1 = pIVar9.klass;
					uVar8 = (ulong)(pIVar1._2).interface_offsets_count;
					if (uVar8 != 0) {
						pIVar2 = (pIVar1._1).interfaceOffsets;
						lVar10 = 0;
						do {
							if (*(IReadOnlyList<AottgCreditCategory>*)((long)&pIVar2.interfaceType + lVar10) == typeof(IReadOnlyList<AottgCreditCategory>)) {
								pVVar5 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar10);
								goto label_05e82873;
							}
							lVar10 = lVar10 + 0x10;
						} while (uVar8 * 0x10 != lVar10);
					}
					pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar9, (Il2CppClass)typeof(IReadOnlyList<AottgCreditCategory>), 0);
	label_05e82873: ;
					pAVar7 = (AottgCreditCategory)(*pVVar5.methodPtr)(pIVar9,(int32_t)uVar11,pVVar5.method);
					__this.category = pAVar7;
					pAVar7 = __this.category;
					if (pAVar7 == null) break;
					id = AottgCreditsRenderer.SectionId(pAVar7._Name_k__BackingField, __this.index);
					pAVar7 = __this.category;
					if (pAVar7 == null) break;
					text = pAVar7._Name_k__BackingField;
					__this_00 = new Action<AottgUi, AottgScreenSectionContext>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c__DisplayClass9_0_CreditSections_b__0);
					GStack_70 = AottgScreenSection.WithText(id, text, "trophy", (Action<AottgUi, AottgScreenSectionContext>)__this_00, null, false, null, true, true);
					if (pGVar6 == null) break;
					if ((uint)pGVar6.Length <= uVar11) {
						throw new IndexOutOfRangeException();
					}
					pGVar3 = &pGVar6[uVar11];
					pGVar3.Keywords = GStack_70.Keywords;
					pGVar3.AutoAddKeywords = GStack_70.AutoAddKeywords;
					pGVar3.HideSearch = GStack_70.HideSearch;
					pGVar3.HideHeader = GStack_70.HideHeader;
					*(undefined5)&pGVar3.field_0x3b = GStack_70._59_5_;
					pGVar3 = &pGVar6[uVar11];
					pGVar3.TextKey = GStack_70.TextKey;
					pGVar3.Icon = GStack_70.Icon;
					pGVar3 = &pGVar6[uVar11];
					pGVar3.Id = GStack_70.Id;
					pGVar3.Text = GStack_70.Text;
					pGVar6[uVar11]._buildContent = GStack_70._buildContent;
					pGVar6[uVar11]._buildHeaderActions = GStack_70._buildHeaderActions;
					uVar11 = uVar11 + 1;
					pIVar9 = (object)credits._Categories_k__BackingField;
				} while (pIVar9 != null);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000BF9")]
	[Address(RVA = "0x5D829B0", Offset = "0x5D819B0", VA = "0x5D829B0")]
	private static void BuildCredits(AottgUi content, AottgScreenSectionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsScreen.c (Gisketch.Aottg2UI.Game.AottgCreditsScreen$$BuildCredits): 1 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_StaticFields pGVar1;
		Action<AottgUi> __this;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchMotionDefinition enter;

		style = "default";
		pGVar1 = typeof(AottgCreditsScreen.c).static_fields;
		__this = pGVar1.__9__10_0;
		if (__this == null) {
			if ((typeof(AottgCreditsScreen.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgCreditsScreen.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c_BuildCredits_b__10_0);
			pGVar1 = typeof(AottgCreditsScreen.c).static_fields;
			pGVar1.__9__10_0 = __this;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 16.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		enter = context.RowMotion(0);
		if (content == null) {
			throw new NullReferenceException();
		}
		content.Panel(style, __this, "credits-content-mount", layout, enter);
		return;
	}

	[Token(Token = "0x6000BFA")]
	[Address(RVA = "0x5D82BB0", Offset = "0x5D81BB0", VA = "0x5D82BB0")]
	private static void BuildLoading(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsScreen.c (Gisketch.Aottg2UI.Game.AottgCreditsScreen$$BuildLoading): 1 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_StaticFields pGVar1;
		Action<AottgUi> __this;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar2;
		GisketchUIBindingDefinition __this_00;

		style = "default";
		pGVar1 = typeof(AottgCreditsScreen.c).static_fields;
		__this = pGVar1.__9__11_0;
		if (__this == null) {
			if ((typeof(AottgCreditsScreen.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgCreditsScreen.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c_BuildLoading_b__11_0);
			pGVar1 = typeof(AottgCreditsScreen.c).static_fields;
			pGVar1.__9__11_0 = __this;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 14.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (ui != null) {
			pGVar2 = ui.Panel(style, __this, "credits-loading", layout, null);
			__this_00 = new GisketchUIBindingDefinition();
			if (__this_00 != null) {
				__this_00.visible = "credits.loading";
				if (pGVar2 != null) {
					pGVar2.bind = __this_00;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x5D82E10", Offset = "0x5D81E10", VA = "0x5D82E10")]
	private static void BuildReadyPlaceholder(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsScreen.c (Gisketch.Aottg2UI.Game.AottgCreditsScreen$$BuildReadyPlaceholder): 1 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_StaticFields pGVar1;
		Action<AottgUi> __this;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar2;
		GisketchUIBindingDefinition __this_00;

		style = "default";
		pGVar1 = typeof(AottgCreditsScreen.c).static_fields;
		__this = pGVar1.__9__12_0;
		if (__this == null) {
			if ((typeof(AottgCreditsScreen.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgCreditsScreen.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c_BuildReadyPlaceholder_b__12_0);
			pGVar1 = typeof(AottgCreditsScreen.c).static_fields;
			pGVar1.__9__12_0 = __this;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 10.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (ui != null) {
			pGVar2 = ui.Panel(style, __this, "credits-ready-placeholder", layout, null);
			__this_00 = new GisketchUIBindingDefinition();
			if (__this_00 != null) {
				__this_00.visible = "credits.ready";
				if (pGVar2 != null) {
					pGVar2.bind = __this_00;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x5D83070", Offset = "0x5D82070", VA = "0x5D83070")]
	private static void BuildEmpty(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsScreen.c (Gisketch.Aottg2UI.Game.AottgCreditsScreen$$BuildEmpty): 1 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_StaticFields pGVar1;
		Action<AottgUi> __this;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar2;
		GisketchUIBindingDefinition __this_00;

		style = "default";
		pGVar1 = typeof(AottgCreditsScreen.c).static_fields;
		__this = pGVar1.__9__13_0;
		if (__this == null) {
			if ((typeof(AottgCreditsScreen.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgCreditsScreen.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c_BuildEmpty_b__13_0);
			pGVar1 = typeof(AottgCreditsScreen.c).static_fields;
			pGVar1.__9__13_0 = __this;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 10.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (ui != null) {
			pGVar2 = ui.Panel(style, __this, "credits-empty", layout, null);
			__this_00 = new GisketchUIBindingDefinition();
			if (__this_00 != null) {
				__this_00.visible = "credits.empty";
				if (pGVar2 != null) {
					pGVar2.bind = __this_00;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x5D832D0", Offset = "0x5D822D0", VA = "0x5D832D0")]
	private static void BuildError(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsScreen.c (Gisketch.Aottg2UI.Game.AottgCreditsScreen$$BuildError): 1 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_StaticFields pGVar1;
		Action<AottgUi> __this;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar2;
		GisketchUIBindingDefinition __this_00;

		style = "default";
		pGVar1 = typeof(AottgCreditsScreen.c).static_fields;
		__this = pGVar1.__9__14_0;
		if (__this == null) {
			if ((typeof(AottgCreditsScreen.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgCreditsScreen.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreen_c_BuildError_b__14_0);
			pGVar1 = typeof(AottgCreditsScreen.c).static_fields;
			pGVar1.__9__14_0 = __this;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, "FlexStart", null, null, 14.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (ui != null) {
			pGVar2 = ui.Panel(style, __this, "credits-error", layout, null);
			__this_00 = new GisketchUIBindingDefinition();
			if (__this_00 != null) {
				__this_00.visible = "credits.failed";
				if (pGVar2 != null) {
					pGVar2.bind = __this_00;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000BFE")]
	[Address(RVA = "0x5D83530", Offset = "0x5D82530", VA = "0x5D83530")]
	public AottgCreditsScreen()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsScreen.c (Gisketch.Aottg2UI.Game.AottgCreditsScreen$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsScreen.c.

	// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c__DisplayClass9_0$$.ctor: clean
	private void c__DisplayClass9_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgCreditsScreen.c();
		AottgCreditsScreen.c.__9 =(AottgCreditsScreen.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$<BuildCredits>b__10_0: clean
	private void c__BuildCredits_b__10_0(AottgUi states)
	{


		AottgCreditsScreen.BuildLoading(states);
		AottgCreditsScreen.BuildReadyPlaceholder(states);
		AottgCreditsScreen.BuildEmpty(states);
		AottgCreditsScreen.BuildError(states);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$<BuildLoading>b__11_0: 2 lines keep C-only constructs
	private void c__BuildLoading_b__11_0(AottgUi loading)
	{
		String pSVar1;
		String id;
		GisketchLength pGVar2;
		GisketchLength pGVar3;
		GisketchLayoutDefinition layout;
		int iStack_34;

		iStack_34 = 0;
		if (loading == null) {
			pSVar1 = iStack_34.ToString();
			String.Concat("credits-loading-row-", pSVar1);
			pSVar1 = "Column";
			pGVar2 = AottgUi.Percent(*(float)(&g_data_0100aee8 +(ulong)(iStack_34 * -0x55555555 + 0x2aaaaaaaU < 0x55555555) * 4));
			pGVar3 = AottgUi.Points(28.0);
			AottgUi.Layout(pSVar1, null, null, null, null, 0.0, pGVar2, pGVar3, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			throw new NullReferenceException();
		}
		do {
			pSVar1 = iStack_34.ToString();
			id = String.Concat("credits-loading-row-", pSVar1);
			pSVar1 = "Column";
			pGVar2 = AottgUi.Percent(*(float)(&g_data_0100aee8 +(ulong)(iStack_34 * -0x55555555 + 0x2aaaaaaaU < 0x55555555) * 4));
			pGVar3 = AottgUi.Points(28.0);
			layout = AottgUi.Layout(pSVar1, null, null, null, null, 0.0, pGVar2, pGVar3, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			loading.Skeleton(id, layout, "skeleton", null, null, null);
			iStack_34 = iStack_34 + 1;
		} while (iStack_34 < 6);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$<BuildReadyPlaceholder>b__12_0: clean
	private void c__BuildReadyPlaceholder_b__12_0(AottgUi ready)
	{
		GisketchNodeDefinition pGVar1;
		GisketchUIBindingDefinition __this_00;

		if (ready != null) {
			ready.TextKey("Credits.Loaded", "text", "credits-ready-text", null, null);
			pGVar1 = ready.TextKey("Credits.Refreshing", "stateMetaText", "credits-refreshing-text", null, null);
			__this_00 = new GisketchUIBindingDefinition();
			if (__this_00 != null) {
				__this_00.visible = "credits.refreshing";
				if (pGVar1 != null) {
					pGVar1.bind = __this_00;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$<BuildEmpty>b__13_0: clean
	private void c__BuildEmpty_b__13_0(AottgUi empty)
	{
		if (empty == null) {
			throw new NullReferenceException();
		}
		empty.TextKey("Credits.Empty", "text", "credits-empty-text", null, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$<BuildError>b__14_0: clean
	private void c__BuildError_b__14_0(AottgUi error)
	{
		GisketchNodeDefinition pGVar1;
		GisketchLayoutDefinition pGVar2;

		if (error != null) {
			error.TextKey("Credits.LoadFailed", "text", "credits-error-title", null, null);
			error.TextKey("Common.TryAgain", "stateMetaText", "credits-error-message", "credits.error", null);
			pGVar1 = error.ButtonKey(0, "Common.Retry", "credits.retry", "credits-retry", null, null, "return");
			pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (pGVar1 != null) {
				pGVar1.layout = pGVar2;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c__DisplayClass9_0$$<CreditSections>b__0: clean
	private void c__DisplayClass9_0__CreditSections_b__0(AottgUi content, AottgScreenSectionContext context)
	{


		AottgCreditsRenderer.BuildCategory(content, this.category, this.index, context);
		return;
	}
}
