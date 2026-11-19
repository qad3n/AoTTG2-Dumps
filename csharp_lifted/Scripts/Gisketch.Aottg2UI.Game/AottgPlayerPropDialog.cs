// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgPlayerPropDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgPlayerPropDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200028B")]
[AottgDialog("ingame-moderation-player-prop")]
public sealed class AottgPlayerPropDialog : AottgDialog
{
	[Token(Token = "0x4000D0C")]
	public const string Id = "ingame-moderation-player-prop";

	[Token(Token = "0x4000D0D")]
	public const string TitleKey = "ingame-moderation-player-prop-title";

	[Token(Token = "0x4000D0E")]
	public const string NameId = "ingame-moderation-player-prop-name";

	[Token(Token = "0x4000D0F")]
	public const string ValueId = "ingame-moderation-player-prop-value";

	[Token(Token = "0x4000D10")]
	public const string StatusId = "ingame-moderation-player-prop-status";

	[Token(Token = "0x17000195")]
	protected override string Title
	{
		[Token(Token = "0x6000F81")]
		[Address(RVA = "0x57B3FF0", Offset = "0x57B2FF0", VA = "0x57B3FF0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPlayerPropDialog.c (Gisketch.Aottg2UI.Game.AottgPlayerPropDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("ScoreboardPopup.Moderation.EditProp");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000196")]
	protected override string HeaderTitleKey
	{
		[Token(Token = "0x6000F82")]
		[Address(RVA = "0x57B4050", Offset = "0x57B3050", VA = "0x57B4050", Slot = "11")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPlayerPropDialog.c (Gisketch.Aottg2UI.Game.AottgPlayerPropDialog$$get_HeaderTitleKey): clean
			return "ingame-moderation-player-prop-title";
		}
	}

	[Token(Token = "0x17000197")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000F83")]
		[Address(RVA = "0x57B4080", Offset = "0x57B3080", VA = "0x57B4080", Slot = "13")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPlayerPropDialog.c (Gisketch.Aottg2UI.Game.AottgPlayerPropDialog$$get_BodyScrollable): clean
			return false;
		}
	}

	[Token(Token = "0x17000198")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000F84")]
		[Address(RVA = "0x57B4090", Offset = "0x57B3090", VA = "0x57B4090", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPlayerPropDialog.c (Gisketch.Aottg2UI.Game.AottgPlayerPropDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(480.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6000F85")]
	[Address(RVA = "0x57B4150", Offset = "0x57B3150", VA = "0x57B4150", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPlayerPropDialog.c (Gisketch.Aottg2UI.Game.AottgPlayerPropDialog$$BuildBody): clean
		if (body == null) {
			throw new NullReferenceException();
		}
		body.TextKey("Common.Name", "inGameInfo", null, null, null);
		body.InputFieldKey("ingame-moderation-player-prop-name", "Common.Name", 0, "inputField", null, null, null, 0.2, 0, null);
		body.TextKey("ScoreboardPopup.Moderation.Value", "inGameInfo", null, null, null);
		body.InputFieldKey("ingame-moderation-player-prop-value", "ScoreboardPopup.Moderation.Value", 0, "inputField", null, null, null, 0.2, 0, null);
		body.Text((String)**(ulong*)(g_data_07556758 + 0xb8), "inGameError", "ingame-moderation-player-prop-status", null, null);
		return;
	}

	[Token(Token = "0x6000F86")]
	[Address(RVA = "0x57B4300", Offset = "0x57B3300", VA = "0x57B4300", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPlayerPropDialog.c (Gisketch.Aottg2UI.Game.AottgPlayerPropDialog$$BuildFooter): clean
		if (footer == null) {
			throw new NullReferenceException();
		}
		footer.QuietKey("Common.Cancel", "ingame.popup.back");
		footer.PrimaryKey("Common.Save", "ingame.moderation.player-prop.save");
		return;
	}

	[Token(Token = "0x6000F87")]
	[Address(RVA = "0x57B4390", Offset = "0x57B3390", VA = "0x57B4390")]
	public AottgPlayerPropDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPlayerPropDialog.c (Gisketch.Aottg2UI.Game.AottgPlayerPropDialog$$.ctor): clean
		base();
		return;
	}
}
