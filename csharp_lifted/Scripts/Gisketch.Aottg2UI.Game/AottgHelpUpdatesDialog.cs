// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgHelpUpdatesDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001F2")]
[AottgDialog("help-updates")]
public sealed class AottgHelpUpdatesDialog : AottgDialog
{
	[Token(Token = "0x4000A79")]
	public const string Id = "help-updates";

	[Token(Token = "0x1700014B")]
	protected override string Title
	{
		[Token(Token = "0x6000B8A")]
		[Address(RVA = "0x5D7AC80", Offset = "0x5D79C80", VA = "0x5D7AC80", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHelpUpdatesDialog.c (Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("Changelog.HelpUpdates");
			return pSVar1;
		}
	}

	[Token(Token = "0x1700014C")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000B8B")]
		[Address(RVA = "0x5D7ACE0", Offset = "0x5D79CE0", VA = "0x5D7ACE0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHelpUpdatesDialog.c (Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$get_TitleIcon): clean
			return "question";
		}
	}

	[Token(Token = "0x1700014D")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000B8C")]
		[Address(RVA = "0x5D7AD10", Offset = "0x5D79D10", VA = "0x5D7AD10", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHelpUpdatesDialog.c (Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$get_Variant): clean
			return 1;
		}
	}

	[Token(Token = "0x1700014E")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000B8D")]
		[Address(RVA = "0x5D7AD20", Offset = "0x5D79D20", VA = "0x5D7AD20", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHelpUpdatesDialog.c (Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLength maxWidth;
			GisketchLength maxHeight;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(920.0);
			maxWidth = AottgUi.Percent(94.0);
			maxHeight = AottgUi.Percent(86.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, maxWidth, maxHeight, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x1700014F")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000B8E")]
		[Address(RVA = "0x5D7AE10", Offset = "0x5D79E10", VA = "0x5D7AE10", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHelpUpdatesDialog.c (Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$get_BodyLayout): clean
			GisketchLayoutDefinition pGVar1;

			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 10.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6000B8F")]
	[Address(RVA = "0x5D7AEC0", Offset = "0x5D79EC0", VA = "0x5D7AEC0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHelpUpdatesDialog.c (Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildBody): clean
		String str0;
		MethodInfo pMVar1;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;

		str0 = Aottg2GisketchLocale.Text("Changelog.CurrentVersion");
		pMVar1 = (MethodInfo)String.Concat(str0, ": v11.15.2026");
		if (body == null) {
			throw new NullReferenceException();
		}
		body.Text((String)pMVar1, "stateMetaText", "help-updates-current-version", null, null);
		AottgHelpUpdatesDialog.BuildLatestCard(body);
		width = AottgUi.Percent(100.0);
		height = AottgUi.Points(8.0);
		layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		pMVar1 = null;
		body.Panel(null, null, "help-updates-section-gap", layout, null);
		AottgHelpUpdatesDialog.BuildHelp(body);
		return;
	}

	[Token(Token = "0x6000B90")]
	[Address(RVA = "0x5D7B500", Offset = "0x5D7A500", VA = "0x5D7B500", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHelpUpdatesDialog.c (Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildFooter): clean
		if (footer == null) {
			throw new NullReferenceException();
		}
		footer.QuietKey("Common.Close", "overlay.close");
		return;
	}

	[Token(Token = "0x6000B91")]
	[Address(RVA = "0x5D7B080", Offset = "0x5D7A080", VA = "0x5D7B080")]
	private static void BuildLatestCard(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHelpUpdatesDialog.c (Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildLatestCard): 2 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_StaticFields pGVar1;
		Action<AottgUi> __this;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		if (body == null) {
			throw new NullReferenceException();
		}
		body.TextKey("Changelog.SectionChangelogs", "changelogSectionHeader", "help-updates-latest-title", null, null);
		if ((typeof(AottgHelpUpdatesDialog.c)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgHelpUpdatesDialog.c)) ;
		}
		style = "row";
		pGVar1 = typeof(AottgHelpUpdatesDialog.c).static_fields;
		__this = pGVar1.__9__13_0;
		if (__this == null) {
			if ((typeof(AottgHelpUpdatesDialog.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgHelpUpdatesDialog.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c_BuildLatestCard_b__13_0);
			pGVar1 = typeof(AottgHelpUpdatesDialog.c).static_fields;
			pGVar1.__9__13_0 = __this;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 12.0, width, null, null, null, null, null, 14.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		body.Panel(style, __this, "help-updates-latest-card", layout, null);
		return;
	}

	[Token(Token = "0x6000B92")]
	[Address(RVA = "0x5D7B560", Offset = "0x5D7A560", VA = "0x5D7B560")]
	private static void BuildLatestReady(AottgUi card)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHelpUpdatesDialog.c (Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildLatestReady): 2 lines keep C-only constructs
		uint uVar1;
		object @object;
		Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_StaticFields pGVar2;
		Action<AottgUi> __this;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar3;
		GisketchUIBindingDefinition __this_00;

		if (Il2CppMethodInitialized_075487f7 == false) {
			Il2CppMethodInitialized_075487f7 = true;
			uVar1 = (typeof(AottgHelpUpdatesDialog.c)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgHelpUpdatesDialog.c)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgHelpUpdatesDialog.c)) ;
			pGVar2 = typeof(AottgHelpUpdatesDialog.c).static_fields;
			__this = pGVar2.__9__14_0;
		}
		else {
			pGVar2 = (typeof(AottgHelpUpdatesDialog.c)).static_fields;
			__this = pGVar2.__9__14_0;
		}
		if (__this == null) {
			if (((typeof(AottgHelpUpdatesDialog.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar2 = typeof(AottgHelpUpdatesDialog.c).static_fields;
			}
			@object = (object)pGVar2.__9;
			__this = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c_BuildLatestReady_b__14_0);
			pGVar2 = typeof(AottgHelpUpdatesDialog.c).static_fields;
			pGVar2.__9__14_0 = __this;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 8.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (card != null) {
			pGVar3 = card.Panel(null, __this, "help-updates-latest-ready", layout, null);
			__this_00 = new GisketchUIBindingDefinition();
			if (__this_00 != null) {
				__this_00.visible = "changelog.hub.ready";
				if (pGVar3 != null) {
					pGVar3.bind = __this_00;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000B93")]
	[Address(RVA = "0x5D7B7D0", Offset = "0x5D7A7D0", VA = "0x5D7B7D0")]
	private static void BuildLatestLoading(AottgUi card)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHelpUpdatesDialog.c (Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildLatestLoading): 2 lines keep C-only constructs
		uint uVar1;
		object @object;
		Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_StaticFields pGVar2;
		Action<AottgUi> __this;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar3;
		GisketchUIBindingDefinition __this_00;

		if (Il2CppMethodInitialized_075487f8 == false) {
			Il2CppMethodInitialized_075487f8 = true;
			uVar1 = (typeof(AottgHelpUpdatesDialog.c)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgHelpUpdatesDialog.c)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgHelpUpdatesDialog.c)) ;
			pGVar2 = typeof(AottgHelpUpdatesDialog.c).static_fields;
			__this = pGVar2.__9__15_0;
		}
		else {
			pGVar2 = (typeof(AottgHelpUpdatesDialog.c)).static_fields;
			__this = pGVar2.__9__15_0;
		}
		if (__this == null) {
			if (((typeof(AottgHelpUpdatesDialog.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar2 = typeof(AottgHelpUpdatesDialog.c).static_fields;
			}
			@object = (object)pGVar2.__9;
			__this = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c_BuildLatestLoading_b__15_0);
			pGVar2 = typeof(AottgHelpUpdatesDialog.c).static_fields;
			pGVar2.__9__15_0 = __this;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 9.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (card != null) {
			pGVar3 = card.Panel(null, __this, "help-updates-latest-loading", layout, null);
			__this_00 = new GisketchUIBindingDefinition();
			if (__this_00 != null) {
				__this_00.visible = "changelog.hub.loading";
				if (pGVar3 != null) {
					pGVar3.bind = __this_00;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000B94")]
	[Address(RVA = "0x5D7BA40", Offset = "0x5D7AA40", VA = "0x5D7BA40")]
	private static void BuildPreviewSkeleton(AottgUi ui, string idPrefix)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHelpUpdatesDialog.c (Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildPreviewSkeleton): clean
		String pSVar1;
		GisketchLength pGVar2;
		GisketchLength pGVar3;
		GisketchLayoutDefinition pGVar4;

		pSVar1 = String.Concat(idPrefix, "-version");
		pGVar2 = AottgUi.Percent(28.0);
		pGVar3 = AottgUi.Points(24.0);
		pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar2, pGVar3, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Skeleton(pSVar1, pGVar4, "skeleton", null, null, null);
		pSVar1 = String.Concat(idPrefix, "-line-0");
		pGVar2 = AottgUi.Percent(100.0);
		pGVar3 = AottgUi.Points(20.0);
		pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar2, pGVar3, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		ui.Skeleton(pSVar1, pGVar4, "skeleton", null, null, null);
		pSVar1 = String.Concat(idPrefix, "-line-1");
		pGVar2 = AottgUi.Percent(92.0);
		pGVar3 = AottgUi.Points(20.0);
		pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar2, pGVar3, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		ui.Skeleton(pSVar1, pGVar4, "skeleton", null, null, null);
		pSVar1 = String.Concat(idPrefix, "-line-2");
		pGVar2 = AottgUi.Percent(78.0);
		pGVar3 = AottgUi.Points(20.0);
		pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar2, pGVar3, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		ui.Skeleton(pSVar1, pGVar4, "skeleton", null, null, null);
		pSVar1 = String.Concat(idPrefix, "-line-3");
		pGVar2 = AottgUi.Percent(54.0);
		pGVar3 = AottgUi.Points(20.0);
		pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar2, pGVar3, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		ui.Skeleton(pSVar1, pGVar4, "skeleton", null, null, null);
		return;
	}

	[Token(Token = "0x6000B95")]
	[Address(RVA = "0x5D7BED0", Offset = "0x5D7AED0", VA = "0x5D7BED0")]
	private static void BuildLatestError(AottgUi card)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHelpUpdatesDialog.c (Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildLatestError): 2 lines keep C-only constructs
		uint uVar1;
		object @object;
		Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_StaticFields pGVar2;
		Action<AottgUi> __this;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar3;
		GisketchUIBindingDefinition __this_00;

		if (Il2CppMethodInitialized_075487fa == false) {
			Il2CppMethodInitialized_075487fa = true;
			uVar1 = (typeof(AottgHelpUpdatesDialog.c)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgHelpUpdatesDialog.c)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgHelpUpdatesDialog.c)) ;
			pGVar2 = typeof(AottgHelpUpdatesDialog.c).static_fields;
			__this = pGVar2.__9__17_0;
		}
		else {
			pGVar2 = (typeof(AottgHelpUpdatesDialog.c)).static_fields;
			__this = pGVar2.__9__17_0;
		}
		if (__this == null) {
			if (((typeof(AottgHelpUpdatesDialog.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar2 = typeof(AottgHelpUpdatesDialog.c).static_fields;
			}
			@object = (object)pGVar2.__9;
			__this = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c_BuildLatestError_b__17_0);
			pGVar2 = typeof(AottgHelpUpdatesDialog.c).static_fields;
			pGVar2.__9__17_0 = __this;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, "FlexStart", null, null, 8.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (card != null) {
			pGVar3 = card.Panel(null, __this, "help-updates-latest-failed", layout, null);
			__this_00 = new GisketchUIBindingDefinition();
			if (__this_00 != null) {
				__this_00.visible = "changelog.hub.failed";
				if (pGVar3 != null) {
					pGVar3.bind = __this_00;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000B96")]
	[Address(RVA = "0x5D7C140", Offset = "0x5D7B140", VA = "0x5D7C140")]
	private static void BuildLatestState(AottgUi card, string visibleKey, string textKey, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHelpUpdatesDialog.c (Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildLatestState): 2 lines keep C-only constructs
		String id_00;
		AottgHelpUpdatesDialog.c__DisplayClass18_0 __this;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar1;
		GisketchUIBindingDefinition __this_01;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgHelpUpdatesDialog.c__DisplayClass18_0));
		__this = new Object();
		if (__this != null) {
			__this.textKey = textKey;
			__this.id = id;
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c__DisplayClass18_0_BuildLatestState_b__0);
			id_00 = __this.id;
			width = AottgUi.Percent(100.0);
			layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (card != null) {
				pGVar1 = card.Panel(null, __this_00, id_00, layout, null);
				__this_01 = new GisketchUIBindingDefinition();
				if (__this_01 != null) {
					__this_01.visible = visibleKey;
					if (pGVar1 != null) {
						pGVar1.bind = __this_01;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000B97")]
	[Address(RVA = "0x5D7B2C0", Offset = "0x5D7A2C0", VA = "0x5D7B2C0")]
	private static void BuildHelp(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHelpUpdatesDialog.c (Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildHelp): 2 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_StaticFields pGVar1;
		Action<AottgUi> __this;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		if (body == null) {
			throw new NullReferenceException();
		}
		body.TextKey("Changelog.SectionHelp", "changelogSectionHeader", "help-updates-help-title", null, null);
		if ((typeof(AottgHelpUpdatesDialog.c)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgHelpUpdatesDialog.c)) ;
		}
		style = "row";
		pGVar1 = typeof(AottgHelpUpdatesDialog.c).static_fields;
		__this = pGVar1.__9__19_0;
		if (__this == null) {
			if ((typeof(AottgHelpUpdatesDialog.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgHelpUpdatesDialog.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c_BuildHelp_b__19_0);
			pGVar1 = typeof(AottgHelpUpdatesDialog.c).static_fields;
			pGVar1.__9__19_0 = __this;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 10.0, width, null, null, null, null, null, 14.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		body.Panel(style, __this, "help-updates-help", layout, null);
		return;
	}

	[Token(Token = "0x6000B98")]
	[Address(RVA = "0x5D7C350", Offset = "0x5D7B350", VA = "0x5D7C350")]
	private static void BuildHelpLink(AottgUi help, JSONNode node, int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHelpUpdatesDialog.c (Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildHelpLink): clean
		bool bVar1;
		JSONNode pSVar2;
		String value;
		MethodInfo method_00;
		String id;
		String icon;
		int local_1c;

		local_1c = index;
		bVar1 = (node != null);
		if (bVar1) {
			if (node == null) goto label_05e7c4df;
			pSVar2 = node.get_Item("Title");
			if (pSVar2 == null) goto label_05e7c4df;
			value = pSVar2.get_Value();
		}
		else {
			value = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		bVar1 = String.IsNullOrWhiteSpace(value);
		if (bVar1) {
			value = Aottg2GisketchLocale.Text("Changelog.HelpLink") ;
		}
		method_00 = (MethodInfo)local_1c.ToString();
		id = String.Concat("help-updates-link-", (String)method_00);
		icon = AottgHelpUpdatesDialog.HelpIcon(value);
		if (help != null) {
			help.Button(3, value, "changelog.openHelpLink", id, null, null, icon);
			return;
		}
	label_05e7c4df: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000B99")]
	[Address(RVA = "0x5D7C4F0", Offset = "0x5D7B4F0", VA = "0x5D7C4F0")]
	private static string HelpIcon(string title)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHelpUpdatesDialog.c (Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$HelpIcon): 1 lines keep C-only constructs
		bool bVar1;
		String __this;
		String* ppSVar2;

		if (title == null) {
			__this = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			__this = title.ToLowerInvariant();
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		bVar1 = __this.Contains("map");
		if (bVar1) {
			ppSVar2 = &"Icons/material-icons/map";
		}
		else {
			bVar1 = __this.Contains("logic");
			ppSVar2 = &"Icons/material-icons/integration_instructions";
			if (!bVar1) {
				__this.Contains("code");
			}
		}
		return *ppSVar2;
	}

	[Token(Token = "0x6000B9A")]
	[Address(RVA = "0x5D7C5E0", Offset = "0x5D7B5E0", VA = "0x5D7C5E0")]
	public AottgHelpUpdatesDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHelpUpdatesDialog.c (Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHelpUpdatesDialog.c.

	// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c__DisplayClass18_0$$.ctor: clean
	private void c__DisplayClass18_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgHelpUpdatesDialog.c();
		AottgHelpUpdatesDialog.c.__9 =(AottgHelpUpdatesDialog.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$<BuildLatestCard>b__13_0: clean
	private void c__BuildLatestCard_b__13_0(AottgUi card)
	{
		MethodInfo pMVar1;

		AottgHelpUpdatesDialog.BuildLatestLoading(card);
		pMVar1 = (MethodInfo *)"changelog.hub.empty";
		AottgHelpUpdatesDialog.BuildLatestState(card, "changelog.hub.empty", "Changelog.NonePublished", "help-updates-latest-empty");
		AottgHelpUpdatesDialog.BuildLatestError(card);
		AottgHelpUpdatesDialog.BuildLatestReady(card);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$<BuildLatestReady>b__14_0: 1 lines keep C-only constructs
	private void c__BuildLatestReady_b__14_0(AottgUi ready)
	{
		object @object;
		bool bVar1;
		String pSVar2;
		AottgChangelogMarkdownRenderer __this_00;
		GisketchNodeDefinition pGVar3;
		GisketchUIBindingDefinition __this_01;
		Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_StaticFields pGVar4;
		Action<AottgUi> __this_02;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		ChangelogEntryResponse pAVar5;
		String value;

		if (Il2CppMethodInitialized_07548801 == false) {
			Il2CppMethodInitialized_07548801 = true;
			if ((typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor == 0) goto label_05e7c9f0;
	label_05e7c722: ;
			if (g_data_0754887c != false) goto label_05e7c72f;
	label_05e7ca02: ;
			g_data_0754887c = true;
			if ((typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor == 0) goto label_05e7ca25;
	label_05e7c73f: ;
			pAVar5 = AottgChangelogDialogState. _LatestPreviewEntry_k__BackingField;
			if (pAVar5 != null) goto label_05e7c753;
	label_05e7ca41: ;
			AottgHelpUpdatesDialog.BuildPreviewSkeleton(ready, "help-updates-latest-ready-skeleton");
			if (ready == null) goto label_05e7cc57;
		}
		else {
			if ((typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor != 0) goto label_05e7c722;
	label_05e7c9f0: ;
			if (g_data_0754887c == false) goto label_05e7ca02;
	label_05e7c72f: ;
			if ((typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor != 0) goto label_05e7c73f;
	label_05e7ca25: ;
			pAVar5 = AottgChangelogDialogState. _LatestPreviewEntry_k__BackingField;
			if (pAVar5 == null) goto label_05e7ca41;
	label_05e7c753: ;
			pSVar2 = String.Concat("v", pAVar5._Version_k__BackingField);
			if (ready == null) goto label_05e7cc57;
			ready.Text(pSVar2, "changelogPreviewVersion", "help-updates-latest-version", null, null);
			ready.Text((String)**(ulong*)(g_data_07556758 + 0xb8), "changelogPreviewMeta", "help-updates-latest-status", "changelog.hub.status", null);
			ready.Text((String)**(ulong*)(g_data_07556758 + 0xb8), "changelogPreviewMeta", "help-updates-latest-date", "changelog.hub.date", null);
			pSVar2 = pAVar5._ContentMarkdown_k__BackingField;
			value = "help-updates-latest-markdown-preview";
			__this_00 = new AottgChangelogMarkdownRenderer();
			__this_00._markdown = pSVar2;
			bVar1 = String.IsNullOrEmpty(value);
			if (bVar1) {
				value = "changelog-markdown";
			}
			__this_00._id = value;
			__this_00._maxLines = 5;
			ready.Component((AottgComponent)__this_00);
		}
		pGVar3 = ready.TextKey("Common.Refreshing", "changelogPreviewMeta", "help-updates-latest-refreshing", null, null);
		__this_01 = new GisketchUIBindingDefinition();
		if (__this_01 != null) {
			__this_01.visible = "changelog.hub.refreshing";
			if (pGVar3 != null) {
				pGVar3.bind = __this_01;
				if ((typeof(AottgHelpUpdatesDialog.c)._2).cctor_finished_or_no_cctor == 0) {
					pGVar4 = typeof(AottgHelpUpdatesDialog.c).static_fields;
					__this_02 = pGVar4.__9__14_1;
				}
				else {
					pGVar4 = typeof(AottgHelpUpdatesDialog.c).static_fields;
					__this_02 = pGVar4.__9__14_1;
				}
				if (__this_02 == null) {
					if (((typeof(AottgHelpUpdatesDialog.c))._2). cctor_finished_or_no_cctor == 0) {
						pGVar4 = typeof(AottgHelpUpdatesDialog.c).static_fields;
					}
					@object = (object)pGVar4.__9;
					__this_02 = new Action<AottgUi>(@object, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c_BuildLatestReady_b__14_1);
					pGVar4 = typeof(AottgHelpUpdatesDialog.c).static_fields;
					pGVar4.__9__14_1 = __this_02;
				}
				width = AottgUi.Percent(100.0);
				layout = AottgUi.Layout("Row", "FlexStart", "Center", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
				ready.Panel(null, __this_02, "help-updates-open-row", layout, null);
				return;
			}
		}
	label_05e7cc57: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$<BuildLatestReady>b__14_1: clean
	private void c__BuildLatestReady_b__14_1(AottgUi row)
	{
		String text;
		GisketchNodeDefinition pGVar1;
		GisketchUIBindingDefinition __this_00;

		text = Aottg2GisketchLocale.Text("Changelog.SeeMore");
		if (row != null) {
			pGVar1 = row.Button(0, text, "changelog.openLatest", "help-updates-open-latest", null, null, "return");
			if (pGVar1 != null) {
				pGVar1.textKey = "Changelog.SeeMore";
				__this_00 = new GisketchUIBindingDefinition();
				if (__this_00 != null) {
					__this_00.enabled = "changelog.hub.open.enabled";
					pGVar1.bind = __this_00;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$<BuildLatestLoading>b__15_0: clean
	private void c__BuildLatestLoading_b__15_0(AottgUi loading)
	{


		AottgHelpUpdatesDialog.BuildPreviewSkeleton(loading, "help-updates-latest-loading-skeleton");
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$<BuildLatestError>b__17_0: clean
	private void c__BuildLatestError_b__17_0(AottgUi failed)
	{
		if (failed == null) {
			throw new NullReferenceException();
		}
		failed.TextKey("Changelog.LatestLoadFailed", "text", "help-updates-latest-error-title", null, null);
		failed.TextKey("Common.TryAgain", "stateMetaText", "help-updates-latest-error", "changelog.hub.error", null);
		failed.ButtonKey(0, "Common.Retry", "changelog.retryLatest", "help-updates-latest-retry", null, null, "return");
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$<BuildHelp>b__19_0: clean
	private void c__BuildHelp_b__19_0(AottgUi help)
	{
		bool bVar1;
		int iVar2;
		JSONNode pSVar3;
		int index;

		pSVar3 = MiscInfo.Help;
		bVar1 = (pSVar3 == null);
		if (!bVar1) {
			pSVar3 = MiscInfo.Help;
			if (pSVar3 == null) goto label_05e7d113;
			bVar1 = pSVar3.get_IsArray();
			if (bVar1) {
				pSVar3 = MiscInfo.Help;
				if (pSVar3 == null) goto label_05e7d113;
				iVar2 = pSVar3.get_Count();
				if (iVar2 != 0) {
					pSVar3 = MiscInfo.Help;
					if (pSVar3 != null) {
						index = 0;
						do {
							iVar2 = pSVar3.get_Count();
							if (iVar2 <= index) {
								return;
							}
							pSVar3 = MiscInfo.Help;
							if (pSVar3 == null) break;
							pSVar3 = pSVar3.get_Item(index);
							AottgHelpUpdatesDialog.BuildHelpLink(help, pSVar3, index);
							index = index + 1;
							pSVar3 = MiscInfo.Help;
						} while (pSVar3 != null);
					}
					goto label_05e7d113;
				}
			}
		}
		if (help != null) {
			help.TextKey("Changelog.HelpUnavailable", "stateMetaText", "help-updates-help-missing", null, null);
			return;
		}
	label_05e7d113: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c__DisplayClass18_0$$<BuildLatestState>b__0: clean
	private void c__DisplayClass18_0__BuildLatestState_b__0(AottgUi state)
	{
		String key;
		String id;

		key = this.textKey;
		id = String.Concat(this.id, "-text");
		if (state == null) {
			throw new NullReferenceException();
		}
		state.TextKey(key, "stateMetaText", id, null, null);
		return;
	}
}
