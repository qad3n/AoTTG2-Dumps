// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgModerationReasonDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgModerationReasonDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200028C")]
[AottgDialog("ingame-moderation-reason")]
public sealed class AottgModerationReasonDialog : AottgDialog
{
	[Token(Token = "0x4000D11")]
	public const string Id = "ingame-moderation-reason";

	[Token(Token = "0x4000D12")]
	public const string TitleKey = "ingame-moderation-reason-title";

	[Token(Token = "0x4000D13")]
	public const string ReasonId = "ingame-moderation-reason-reason";

	[Token(Token = "0x17000199")]
	protected override string Title
	{
		[Token(Token = "0x6000F88")]
		[Address(RVA = "0x57B43A0", Offset = "0x57B33A0", VA = "0x57B43A0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgModerationReasonDialog.c (Gisketch.Aottg2UI.Game.AottgModerationReasonDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("ScoreboardPopup.Moderation.ReasonTitle");
			return pSVar1;
		}
	}

	[Token(Token = "0x1700019A")]
	protected override string HeaderTitleKey
	{
		[Token(Token = "0x6000F89")]
		[Address(RVA = "0x57B4400", Offset = "0x57B3400", VA = "0x57B4400", Slot = "11")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgModerationReasonDialog.c (Gisketch.Aottg2UI.Game.AottgModerationReasonDialog$$get_HeaderTitleKey): clean
			return "ingame-moderation-reason-title";
		}
	}

	[Token(Token = "0x1700019B")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000F8A")]
		[Address(RVA = "0x57B4430", Offset = "0x57B3430", VA = "0x57B4430", Slot = "13")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgModerationReasonDialog.c (Gisketch.Aottg2UI.Game.AottgModerationReasonDialog$$get_BodyScrollable): clean
			return false;
		}
	}

	[Token(Token = "0x1700019C")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000F8B")]
		[Address(RVA = "0x57B4440", Offset = "0x57B3440", VA = "0x57B4440", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgModerationReasonDialog.c (Gisketch.Aottg2UI.Game.AottgModerationReasonDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(520.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6000F8C")]
	[Address(RVA = "0x57B4500", Offset = "0x57B3500", VA = "0x57B4500", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgModerationReasonDialog.c (Gisketch.Aottg2UI.Game.AottgModerationReasonDialog$$BuildBody): clean
		if (body == null) {
			throw new NullReferenceException();
		}
		body.TextKey("ScoreboardPopup.Moderation.ReasonOptional", "inGameInfo", null, null, null);
		body.InputFieldKey("ingame-moderation-reason-reason", "ScoreboardPopup.Moderation.ReasonTitle", 0, "inputField", null, null, null, 0.2, 0, null);
		return;
	}

	[Token(Token = "0x6000F8D")]
	[Address(RVA = "0x57B45E0", Offset = "0x57B35E0", VA = "0x57B45E0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgModerationReasonDialog.c (Gisketch.Aottg2UI.Game.AottgModerationReasonDialog$$BuildFooter): clean
		if (footer == null) {
			throw new NullReferenceException();
		}
		footer.QuietKey("Common.Cancel", "ingame.popup.back");
		footer.PrimaryKey("Common.Confirm", "ingame.moderation.reason.confirm");
		return;
	}

	[Token(Token = "0x6000F8E")]
	[Address(RVA = "0x57B4670", Offset = "0x57B3670", VA = "0x57B4670")]
	public AottgModerationReasonDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgModerationReasonDialog.c (Gisketch.Aottg2UI.Game.AottgModerationReasonDialog$$.ctor): clean
		base();
		return;
	}
}
