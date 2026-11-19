// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgBatchBanDialog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgBatchBanDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000289")]
[AottgDialog("ingame-moderation-batch-ban")]
public sealed class AottgBatchBanDialog : AottgDialog
{
	[Token(Token = "0x4000D04")]
	public const string Id = "ingame-moderation-batch-ban";

	[Token(Token = "0x4000D05")]
	public const string TargetsId = "ingame-moderation-batch-ban-targets";

	[Token(Token = "0x4000D06")]
	private const string ModerationPrefix = "ScoreboardPopup.Moderation.";

	[Token(Token = "0x4000D07")]
	private const string TargetsKey = "ScoreboardPopup.Moderation.Targets";

	[Token(Token = "0x17000192")]
	protected override string Title
	{
		[Token(Token = "0x6000F78")]
		[Address(RVA = "0x57B3800", Offset = "0x57B2800", VA = "0x57B3800", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBatchBanDialog.c (Gisketch.Aottg2UI.Game.AottgBatchBanDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("ScoreboardPopup.Moderation.BatchBan");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000193")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000F79")]
		[Address(RVA = "0x57B3860", Offset = "0x57B2860", VA = "0x57B3860", Slot = "13")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBatchBanDialog.c (Gisketch.Aottg2UI.Game.AottgBatchBanDialog$$get_BodyScrollable): clean
			return false;
		}
	}

	[Token(Token = "0x17000194")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000F7A")]
		[Address(RVA = "0x57B3870", Offset = "0x57B2870", VA = "0x57B3870", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBatchBanDialog.c (Gisketch.Aottg2UI.Game.AottgBatchBanDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(550.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6000F7B")]
	[Address(RVA = "0x57B3930", Offset = "0x57B2930", VA = "0x57B3930", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBatchBanDialog.c (Gisketch.Aottg2UI.Game.AottgBatchBanDialog$$BuildBody): clean
		String placeholder;
		GisketchLength height;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition node;

		if (body == null) {
			throw new NullReferenceException();
		}
		body.TextKey("ScoreboardPopup.Moderation.BatchBanHint", "inGameInfo", null, null, null);
		placeholder = Aottg2GisketchLocale.Text("ScoreboardPopup.Moderation.Targets");
		height = AottgUi.Points(150.0);
		layout = AottgUi.Layout("Column", null, null, null, null, 0.0, null, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		node = body.TextArea("ingame-moderation-batch-ban-targets", placeholder, "textArea", layout, null, 0);
		Aottg2GisketchLocale.Key(node, "ScoreboardPopup.Moderation.Targets");
		AottgBatchBanDialog.ActionRow(body, "SessionBan", "ingame.moderation.batch.session-ban", "IpBan", "ingame.moderation.batch.ip-ban");
		AottgBatchBanDialog.ActionRow(body, "SessionUnban", "ingame.moderation.batch.session-unban", "IpUnban", "ingame.moderation.batch.ip-unban");
		return;
	}

	[Token(Token = "0x6000F7C")]
	[Address(RVA = "0x57B3BA0", Offset = "0x57B2BA0", VA = "0x57B3BA0")]
	private static void ActionRow(AottgUi body, string firstItem, string firstAction, string secondItem, string secondAction)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBatchBanDialog.c (Gisketch.Aottg2UI.Game.AottgBatchBanDialog$$ActionRow): 1 lines keep C-only constructs
		AottgBatchBanDialog.c__DisplayClass11_0 __this;
		Action<AottgUi> __this_00;
		GisketchLayoutDefinition layout;

		__this = new AottgBatchBanDialog.c__DisplayClass11_0();
		if (__this != null) {
			__this.firstItem = firstItem;
			__this.firstAction = firstAction;
			__this.secondItem = secondItem;
			__this.secondAction = secondAction;
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgBatchBanDialog_c__DisplayClass11_0_ActionRow_b__0);
			layout = AottgUi.Layout("Row", null, null, null, null, 12.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (body != null) {
				body.Panel("clear", __this_00, null, layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000F7D")]
	[Address(RVA = "0x57B3D70", Offset = "0x57B2D70", VA = "0x57B3D70", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBatchBanDialog.c (Gisketch.Aottg2UI.Game.AottgBatchBanDialog$$BuildFooter): clean
		if (footer == null) {
			throw new NullReferenceException();
		}
		footer.QuietKey("Common.Back", "ingame.popup.back");
		return;
	}

	[Token(Token = "0x6000F7E")]
	[Address(RVA = "0x57B3DD0", Offset = "0x57B2DD0", VA = "0x57B3DD0")]
	public AottgBatchBanDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBatchBanDialog.c (Gisketch.Aottg2UI.Game.AottgBatchBanDialog$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBatchBanDialog.c.

	// Gisketch.Aottg2UI.Game.AottgBatchBanDialog.<>c__DisplayClass11_0$$.ctor: clean
	private void c__DisplayClass11_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgBatchBanDialog.<>c__DisplayClass11_0$$<ActionRow>b__0: clean
	private void c__DisplayClass11_0__ActionRow_b__0(AottgUi row)
	{
		String pSVar1;
		GisketchNodeDefinition pGVar2;
		GisketchLayoutDefinition pGVar3;

		pSVar1 = String.Concat("ScoreboardPopup.Moderation.", this.firstItem);
		if (row != null) {
			pGVar2 = row.ButtonKey(3, pSVar1, this.firstAction, null, null, null, null);
			pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
			if (pGVar2 != null) {
				pGVar2.layout = pGVar3;
				pSVar1 = String.Concat("ScoreboardPopup.Moderation.", this.secondItem);
				pGVar2 = row.ButtonKey(3, pSVar1, this.secondAction, null, null, null, null);
				pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
				if (pGVar2 != null) {
					pGVar2.layout = pGVar3;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}
}
