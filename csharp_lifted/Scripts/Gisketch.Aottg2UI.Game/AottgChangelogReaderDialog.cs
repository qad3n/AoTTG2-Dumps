// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogReaderDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001EE")]
[AottgDialog("changelog-reader")]
public sealed class AottgChangelogReaderDialog : AottgDialog
{
	[Token(Token = "0x4000A5C")]
	public const string Id = "changelog-reader";

	[Token(Token = "0x17000146")]
	protected override string Title
	{
		[Token(Token = "0x6000B76")]
		[Address(RVA = "0x5D79440", Offset = "0x5D78440", VA = "0x5D79440", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogReaderDialog.c (Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("Changelog.Title");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000147")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000B77")]
		[Address(RVA = "0x5D794A0", Offset = "0x5D784A0", VA = "0x5D794A0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogReaderDialog.c (Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$get_TitleIcon): clean
			return "Icons/material-icons/description";
		}
	}

	[Token(Token = "0x17000148")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000B78")]
		[Address(RVA = "0x5D794D0", Offset = "0x5D784D0", VA = "0x5D794D0", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogReaderDialog.c (Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$get_Variant): clean
			return 1;
		}
	}

	[Token(Token = "0x17000149")]
	protected override string HeaderTitleKey
	{
		[Token(Token = "0x6000B79")]
		[Address(RVA = "0x5D794E0", Offset = "0x5D784E0", VA = "0x5D794E0", Slot = "11")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogReaderDialog.c (Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$get_HeaderTitleKey): clean
			return "changelog.reader.title";
		}
	}

	[Token(Token = "0x1700014A")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000B7A")]
		[Address(RVA = "0x5D79510", Offset = "0x5D78510", VA = "0x5D79510", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogReaderDialog.c (Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLength maxWidth;
			GisketchLength maxHeight;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(980.0);
			maxWidth = AottgUi.Percent(94.0);
			maxHeight = AottgUi.Percent(88.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, maxWidth, maxHeight, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6000B7B")]
	[Address(RVA = "0x5D79600", Offset = "0x5D78600", VA = "0x5D79600", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogReaderDialog.c (Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$BuildBody): clean
		MethodInfo pMVar1;

		AottgChangelogReaderDialog.BuildLoading(body);
		AottgChangelogReaderDialog.BuildError(body);
		pMVar1 = (MethodInfo *)"changelog.reader.empty";
		AottgChangelogReaderDialog.BuildStatePanel(body, "changelog.reader.empty", "Changelog.NotFound", "changelog-reader-empty");
		AottgChangelogReaderDialog.BuildReady(body);
		return;
	}

	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x5D79EA0", Offset = "0x5D78EA0", VA = "0x5D79EA0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogReaderDialog.c (Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$BuildFooter): clean
		GisketchNodeDefinition pGVar1;
		GisketchUIBindingDefinition pGVar2;

		if (footer != null) {
			pGVar1 = footer.PrimaryKey("Common.Previous", "changelog.previous");
			pGVar2 = new GisketchUIBindingDefinition();
			if (pGVar2 != null) {
				pGVar2.enabled = "changelog.reader.previous.enabled";
				if (pGVar1 != null) {
					pGVar1.bind = pGVar2;
					pGVar1 = footer.PrimaryKey("Common.Next", "changelog.next");
					pGVar2 = new GisketchUIBindingDefinition();
					if (pGVar2 != null) {
						pGVar2.enabled = "changelog.reader.next.enabled";
						if (pGVar1 != null) {
							pGVar1.bind = pGVar2;
							footer.QuietKey("Common.Close", "overlay.close");
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x5D79BA0", Offset = "0x5D78BA0", VA = "0x5D79BA0")]
	private static void BuildReady(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogReaderDialog.c (Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$BuildReady): 1 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_StaticFields pGVar1;
		Action<AottgUi> __this;
		GisketchLength pGVar2;
		GisketchLength height;
		GisketchLayoutDefinition layout;
		GisketchLayoutDefinition contentLayout;
		GisketchNodeDefinition pGVar3;
		GisketchUIBindingDefinition __this_00;

		style = "default";
		pGVar1 = typeof(AottgChangelogReaderDialog.c).static_fields;
		__this = pGVar1.__9__13_0;
		if (__this == null) {
			if ((typeof(AottgChangelogReaderDialog.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgChangelogReaderDialog.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c_BuildReady_b__13_0);
			pGVar1 = typeof(AottgChangelogReaderDialog.c).static_fields;
			pGVar1.__9__13_0 = __this;
		}
		pGVar2 = AottgUi.Percent(100.0);
		height = AottgUi.Points(430.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, pGVar2, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		pGVar2 = AottgUi.Percent(100.0);
		contentLayout = AottgUi.Layout("Column", null, "Stretch", null, null, 8.0, pGVar2, null, null, null, null, null, 16.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (body != null) {
			pGVar3 = body.ScrollView(style, __this, "changelog-reader-ready", layout, contentLayout, null);
			__this_00 = new GisketchUIBindingDefinition();
			if (__this_00 != null) {
				__this_00.visible = "changelog.reader.ready";
				if (pGVar3 != null) {
					pGVar3.bind = __this_00;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x5D79680", Offset = "0x5D78680", VA = "0x5D79680")]
	private static void BuildLoading(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogReaderDialog.c (Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$BuildLoading): 1 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_StaticFields pGVar1;
		Action<AottgUi> __this;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar2;
		GisketchUIBindingDefinition __this_00;

		style = "default";
		pGVar1 = typeof(AottgChangelogReaderDialog.c).static_fields;
		__this = pGVar1.__9__14_0;
		if (__this == null) {
			if ((typeof(AottgChangelogReaderDialog.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgChangelogReaderDialog.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c_BuildLoading_b__14_0);
			pGVar1 = typeof(AottgChangelogReaderDialog.c).static_fields;
			pGVar1.__9__14_0 = __this;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 10.0, width, null, null, null, null, null, 16.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (body != null) {
			pGVar2 = body.Panel(style, __this, "changelog-reader-loading", layout, null);
			__this_00 = new GisketchUIBindingDefinition();
			if (__this_00 != null) {
				__this_00.visible = "changelog.reader.loading";
				if (pGVar2 != null) {
					pGVar2.bind = __this_00;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x5D798E0", Offset = "0x5D788E0", VA = "0x5D798E0")]
	private static void BuildError(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogReaderDialog.c (Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$BuildError): 1 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_StaticFields pGVar1;
		Action<AottgUi> __this;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar2;
		GisketchUIBindingDefinition __this_00;

		style = "default";
		pGVar1 = typeof(AottgChangelogReaderDialog.c).static_fields;
		__this = pGVar1.__9__15_0;
		if (__this == null) {
			if ((typeof(AottgChangelogReaderDialog.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgChangelogReaderDialog.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c_BuildError_b__15_0);
			pGVar1 = typeof(AottgChangelogReaderDialog.c).static_fields;
			pGVar1.__9__15_0 = __this;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, "FlexStart", null, null, 10.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (body != null) {
			pGVar2 = body.Panel(style, __this, "changelog-reader-failed", layout, null);
			__this_00 = new GisketchUIBindingDefinition();
			if (__this_00 != null) {
				__this_00.visible = "changelog.reader.failed";
				if (pGVar2 != null) {
					pGVar2.bind = __this_00;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x5D79B40", Offset = "0x5D78B40", VA = "0x5D79B40")]
	private static void BuildEmpty(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogReaderDialog.c (Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$BuildEmpty): clean


		AottgChangelogReaderDialog.BuildStatePanel(body, "changelog.reader.empty", "Changelog.NotFound", "changelog-reader-empty");
		return;
	}

	[Token(Token = "0x6000B81")]
	[Address(RVA = "0x5D7A060", Offset = "0x5D79060", VA = "0x5D7A060")]
	private static void BuildStatePanel(AottgUi body, string visibleKey, string textKey, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogReaderDialog.c (Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$BuildStatePanel): 2 lines keep C-only constructs
		String id_00;
		AottgChangelogReaderDialog.c__DisplayClass17_0 __this;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar1;
		GisketchUIBindingDefinition __this_01;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgChangelogReaderDialog.c__DisplayClass17_0));
		__this = new Object();
		if (__this != null) {
			__this.textKey = textKey;
			__this.id = id;
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c__DisplayClass17_0_BuildStatePanel_b__0);
			id_00 = __this.id;
			width = AottgUi.Percent(100.0);
			layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (body != null) {
				pGVar1 = body.Panel("default", __this_00, id_00, layout, null);
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

	[Token(Token = "0x6000B82")]
	[Address(RVA = "0x5D7A280", Offset = "0x5D79280", VA = "0x5D7A280")]
	public AottgChangelogReaderDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogReaderDialog.c (Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogReaderDialog.c.

	// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog.<>c__DisplayClass17_0$$.ctor: clean
	private void c__DisplayClass17_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog.<>c$$.cctor: 1 lines keep C-only constructs
	private static void c__cctor()
	{
		object __this;

		__this = new AottgChangelogReaderDialog.c();
		AottgChangelogReaderDialog.c.__9 =(AottgChangelogReaderDialog.c)__this;
		Il2CppCodeGenWriteBarrier(&AottgChangelogReaderDialog.c.__9) ;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog.<>c$$<BuildReady>b__13_0: clean
	private void c__BuildReady_b__13_0(AottgUi ready)
	{
		String pSVar1;
		bool bVar2;
		ChangelogEntryResponse pAVar3;
		AottgChangelogMarkdownRenderer __this_00;
		GisketchNodeDefinition pGVar4;
		GisketchUIBindingDefinition __this_01;
		String value;

		if (Il2CppMethodInitialized_075487ec == false) {
			Il2CppMethodInitialized_075487ec = true;
			if ((typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor == 0) goto label_05e7a491;
	label_05e7a33f: ;
			if (g_data_0754878a != false) goto label_05e7a34c;
	label_05e7a4a3: ;
			g_data_0754878a = true;
			if ((typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor == 0) goto label_05e7a4c6;
	label_05e7a35c: ;
			pAVar3 = AottgChangelogDialogState. _ReaderEntry_k__BackingField;
			if (pAVar3 != null) goto label_05e7a370;
	label_05e7a4e2: ;
			if (ready == null) goto label_05e7a586;
		}
		else {
			if ((typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor != 0) goto label_05e7a33f;
	label_05e7a491: ;
			if (g_data_0754878a == false) goto label_05e7a4a3;
	label_05e7a34c: ;
			if ((typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor != 0) goto label_05e7a35c;
	label_05e7a4c6: ;
			pAVar3 = AottgChangelogDialogState. _ReaderEntry_k__BackingField;
			if (pAVar3 == null) goto label_05e7a4e2;
	label_05e7a370: ;
			pSVar1 = pAVar3._ContentMarkdown_k__BackingField;
			value = "changelog-reader-markdown";
			__this_00 = new AottgChangelogMarkdownRenderer();
			__this_00._markdown = pSVar1;
			bVar2 = String.IsNullOrEmpty(value);
			if (bVar2) {
				value = "changelog-markdown";
			}
			__this_00._id = value;
			__this_00._maxLines = 0;
			if (ready == null) goto label_05e7a586;
			ready.Component((AottgComponent)__this_00);
		}
		pGVar4 = ready.TextKey("Common.Refreshing", "stateMetaText", "changelog-reader-refreshing", null, null);
		__this_01 = new GisketchUIBindingDefinition();
		if (__this_01 != null) {
			__this_01.visible = "changelog.reader.refreshing";
			if (pGVar4 != null) {
				pGVar4.bind = __this_01;
				return;
			}
		}
	label_05e7a586: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog.<>c$$<BuildLoading>b__14_0: clean
	private void c__BuildLoading_b__14_0(AottgUi loading)
	{
		GisketchLength pGVar1;
		GisketchLength pGVar2;
		GisketchLayoutDefinition pGVar3;

		pGVar1 = AottgUi.Percent(48.0);
		pGVar2 = AottgUi.Points(30.0);
		pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar1, pGVar2, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (loading == null) {
			throw new NullReferenceException();
		}
		loading.Skeleton("changelog-reader-loading-title", pGVar3, "skeleton", null, null, null);
		pGVar1 = AottgUi.Percent(100.0);
		pGVar2 = AottgUi.Points(22.0);
		pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar1, pGVar2, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		loading.Skeleton("changelog-reader-loading-line-0", pGVar3, "skeleton", null, null, null);
		pGVar1 = AottgUi.Percent(96.0);
		pGVar2 = AottgUi.Points(22.0);
		pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar1, pGVar2, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		loading.Skeleton("changelog-reader-loading-line-1", pGVar3, "skeleton", null, null, null);
		pGVar1 = AottgUi.Percent(88.0);
		pGVar2 = AottgUi.Points(22.0);
		pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar1, pGVar2, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		loading.Skeleton("changelog-reader-loading-line-2", pGVar3, "skeleton", null, null, null);
		pGVar1 = AottgUi.Percent(76.0);
		pGVar2 = AottgUi.Points(22.0);
		pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar1, pGVar2, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		loading.Skeleton("changelog-reader-loading-line-3", pGVar3, "skeleton", null, null, null);
		pGVar1 = AottgUi.Percent(58.0);
		pGVar2 = AottgUi.Points(22.0);
		pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar1, pGVar2, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		loading.Skeleton("changelog-reader-loading-line-4", pGVar3, "skeleton", null, null, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog.<>c$$<BuildError>b__15_0: clean
	private void c__BuildError_b__15_0(AottgUi failed)
	{
		if (failed == null) {
			throw new NullReferenceException();
		}
		failed.TextKey("Changelog.LoadFailed", "text", "changelog-reader-error-title", null, null);
		failed.TextKey("Common.TryAgain", "stateMetaText", "changelog-reader-error", "changelog.reader.error", null);
		failed.ButtonKey(0, "Common.Retry", "changelog.retryReader", "changelog-reader-retry", null, null, "return");
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog.<>c__DisplayClass17_0$$<BuildStatePanel>b__0: clean
	private void c__DisplayClass17_0__BuildStatePanel_b__0(AottgUi state)
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
