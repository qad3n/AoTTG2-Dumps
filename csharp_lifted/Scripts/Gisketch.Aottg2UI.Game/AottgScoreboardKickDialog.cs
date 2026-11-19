// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgScoreboardKickDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardKickDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000292")]
[AottgDialog("ingame-scoreboard-kick")]
public sealed class AottgScoreboardKickDialog : AottgDialog
{
	[Token(Token = "0x4000D1F")]
	public const string Id = "ingame-scoreboard-kick";

	[Token(Token = "0x4000D20")]
	public const string MessageId = "ingame-scoreboard-kick-message";

	[Token(Token = "0x170001A7")]
	protected override string Title
	{
		[Token(Token = "0x6000FA6")]
		[Address(RVA = "0x57B59E0", Offset = "0x57B49E0", VA = "0x57B59E0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardKickDialog.c (Gisketch.Aottg2UI.Game.AottgScoreboardKickDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("Common.Confirm");
			return pSVar1;
		}
	}

	[Token(Token = "0x170001A8")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000FA7")]
		[Address(RVA = "0x57B5A40", Offset = "0x57B4A40", VA = "0x57B5A40", Slot = "13")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardKickDialog.c (Gisketch.Aottg2UI.Game.AottgScoreboardKickDialog$$get_BodyScrollable): clean
			return false;
		}
	}

	[Token(Token = "0x170001A9")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000FA8")]
		[Address(RVA = "0x57B5A50", Offset = "0x57B4A50", VA = "0x57B5A50", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardKickDialog.c (Gisketch.Aottg2UI.Game.AottgScoreboardKickDialog$$get_Variant): clean
			return 6;
		}
	}

	[Token(Token = "0x170001AA")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000FA9")]
		[Address(RVA = "0x57B5A60", Offset = "0x57B4A60", VA = "0x57B5A60", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardKickDialog.c (Gisketch.Aottg2UI.Game.AottgScoreboardKickDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(420.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6000FAA")]
	[Address(RVA = "0x57B5B20", Offset = "0x57B4B20", VA = "0x57B5B20", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardKickDialog.c (Gisketch.Aottg2UI.Game.AottgScoreboardKickDialog$$BuildBody): clean
		if (body == null) {
			throw new NullReferenceException();
		}
		body.Text((String)**(ulong*)(g_data_07556758 + 0xb8), "inGameInfo", "ingame-scoreboard-kick-message", null, null);
		return;
	}

	[Token(Token = "0x6000FAB")]
	[Address(RVA = "0x57B5BB0", Offset = "0x57B4BB0", VA = "0x57B5BB0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardKickDialog.c (Gisketch.Aottg2UI.Game.AottgScoreboardKickDialog$$BuildFooter): clean
		if (footer == null) {
			throw new NullReferenceException();
		}
		footer.QuietKey("Common.Cancel", "ingame.popup.back");
		footer.DangerKey("Common.Confirm", "ingame.player.kick.confirm");
		return;
	}

	[Token(Token = "0x6000FAC")]
	[Address(RVA = "0x57B5C40", Offset = "0x57B4C40", VA = "0x57B5C40")]
	public AottgScoreboardKickDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardKickDialog.c (Gisketch.Aottg2UI.Game.AottgScoreboardKickDialog$$.ctor): clean
		base();
		return;
	}
}
