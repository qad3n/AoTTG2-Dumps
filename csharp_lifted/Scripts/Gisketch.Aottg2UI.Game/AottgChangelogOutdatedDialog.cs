// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgChangelogOutdatedDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogOutdatedDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001EC")]
[AottgDialog("changelog-outdated")]
public sealed class AottgChangelogOutdatedDialog : AottgDialog
{
	[Token(Token = "0x4000A59")]
	public const string Id = "changelog-outdated";

	[Token(Token = "0x17000140")]
	protected override string Title
	{
		[Token(Token = "0x6000B6A")]
		[Address(RVA = "0x5D78C70", Offset = "0x5D77C70", VA = "0x5D78C70", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogOutdatedDialog.c (Gisketch.Aottg2UI.Game.AottgChangelogOutdatedDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("Changelog.UpdateRequired");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000141")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000B6B")]
		[Address(RVA = "0x5D78CD0", Offset = "0x5D77CD0", VA = "0x5D78CD0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogOutdatedDialog.c (Gisketch.Aottg2UI.Game.AottgChangelogOutdatedDialog$$get_TitleIcon): clean
			return "warning";
		}
	}

	[Token(Token = "0x17000142")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000B6C")]
		[Address(RVA = "0x5D78D00", Offset = "0x5D77D00", VA = "0x5D78D00", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogOutdatedDialog.c (Gisketch.Aottg2UI.Game.AottgChangelogOutdatedDialog$$get_Variant): clean
			return 0;
		}
	}

	[Token(Token = "0x17000143")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000B6D")]
		[Address(RVA = "0x5D78D10", Offset = "0x5D77D10", VA = "0x5D78D10", Slot = "13")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogOutdatedDialog.c (Gisketch.Aottg2UI.Game.AottgChangelogOutdatedDialog$$get_BodyScrollable): clean
			return false;
		}
	}

	[Token(Token = "0x17000144")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000B6E")]
		[Address(RVA = "0x5D78D20", Offset = "0x5D77D20", VA = "0x5D78D20", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogOutdatedDialog.c (Gisketch.Aottg2UI.Game.AottgChangelogOutdatedDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLength maxWidth;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(620.0);
			maxWidth = AottgUi.Percent(94.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, maxWidth, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x17000145")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000B6F")]
		[Address(RVA = "0x5D78E00", Offset = "0x5D77E00", VA = "0x5D78E00", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogOutdatedDialog.c (Gisketch.Aottg2UI.Game.AottgChangelogOutdatedDialog$$get_BodyLayout): clean
			GisketchLayoutDefinition pGVar1;

			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 10.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6000B70")]
	[Address(RVA = "0x5D78EB0", Offset = "0x5D77EB0", VA = "0x5D78EB0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogOutdatedDialog.c (Gisketch.Aottg2UI.Game.AottgChangelogOutdatedDialog$$BuildBody): 1 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog___c_StaticFields pGVar1;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		if (body == null) {
			throw new NullReferenceException();
		}
		body.TextKey("Changelog.OutdatedMessage", "text", "changelog-outdated-message", null, null);
		body.TextKey("Changelog.OutdatedDetail", "changelogPreviewMeta", "changelog-outdated-detail", null, null);
		style = "default";
		pGVar1 = typeof(AottgChangelogOutdatedDialog.c).static_fields;
		__this_00 = pGVar1.__9__13_0;
		if (__this_00 == null) {
			if ((typeof(AottgChangelogOutdatedDialog.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgChangelogOutdatedDialog.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this_00 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_c_BuildBody_b__13_0);
			pGVar1 = typeof(AottgChangelogOutdatedDialog.c).static_fields;
			pGVar1.__9__13_0 = __this_00;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 4.0, width, null, null, null, null, null, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		body.Panel(style, __this_00, "changelog-outdated-versions", layout, null);
		return;
	}

	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x5D79150", Offset = "0x5D78150", VA = "0x5D79150", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogOutdatedDialog.c (Gisketch.Aottg2UI.Game.AottgChangelogOutdatedDialog$$BuildFooter): clean
		if (footer == null) {
			throw new NullReferenceException();
		}
		footer.QuietKey("Common.Close", "overlay.close");
		footer.SecondaryKey("Changelog.SeeChangelog", "changelog.outdated.seeChangelog");
		footer.PrimaryKey("Changelog.Download", "changelog.downloadLatest");
		return;
	}

	[Token(Token = "0x6000B72")]
	[Address(RVA = "0x5D79220", Offset = "0x5D78220", VA = "0x5D79220")]
	public AottgChangelogOutdatedDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogOutdatedDialog.c (Gisketch.Aottg2UI.Game.AottgChangelogOutdatedDialog$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogOutdatedDialog.c.

	// Gisketch.Aottg2UI.Game.AottgChangelogOutdatedDialog.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgChangelogOutdatedDialog.c();
		AottgChangelogOutdatedDialog.c.__9 =(AottgChangelogOutdatedDialog.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgChangelogOutdatedDialog.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgChangelogOutdatedDialog.<>c$$<BuildBody>b__13_0: clean
	private void c__BuildBody_b__13_0(AottgUi versions)
	{
		if (versions == null) {
			throw new NullReferenceException();
		}
		versions.TextKey("Changelog.CurrentVersion", "changelogPreviewMeta", "changelog-outdated-current-label", null, null);
		versions.Text("-", "changelogPreviewVersion", "changelog-outdated-current", "changelog.outdated.currentVersion", null);
		versions.TextKey("Changelog.LatestVersion", "changelogPreviewMeta", "changelog-outdated-latest-label", null, null);
		versions.Text("-", "changelogPreviewVersion", "changelog-outdated-latest", "changelog.outdated.latestVersion", null);
		return;
	}
}
