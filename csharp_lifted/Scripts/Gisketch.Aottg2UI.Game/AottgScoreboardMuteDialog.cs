// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardMuteDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000290")]
[AottgDialog("ingame-scoreboard-mute")]
public sealed class AottgScoreboardMuteDialog : AottgDialog
{
	[Token(Token = "0x4000D18")]
	public const string Id = "ingame-scoreboard-mute";

	[Token(Token = "0x4000D19")]
	public const string EmoteId = "ingame-scoreboard-mute-emote";

	[Token(Token = "0x4000D1A")]
	public const string TextId = "ingame-scoreboard-mute-text";

	[Token(Token = "0x4000D1B")]
	public const string VoiceId = "ingame-scoreboard-mute-voice";

	[Token(Token = "0x4000D1C")]
	public const string VolumeId = "ingame-scoreboard-mute-volume";

	[Token(Token = "0x170001A4")]
	protected override string Title
	{
		[Token(Token = "0x6000F9D")]
		[Address(RVA = "0x57B53A0", Offset = "0x57B43A0", VA = "0x57B53A0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardMuteDialog.c (Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("ScoreboardPopup.MutePopup.Title");
			return pSVar1;
		}
	}

	[Token(Token = "0x170001A5")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000F9E")]
		[Address(RVA = "0x57B5400", Offset = "0x57B4400", VA = "0x57B5400", Slot = "13")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardMuteDialog.c (Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog$$get_BodyScrollable): clean
			return false;
		}
	}

	[Token(Token = "0x170001A6")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000F9F")]
		[Address(RVA = "0x57B5410", Offset = "0x57B4410", VA = "0x57B5410", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardMuteDialog.c (Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(440.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6000FA0")]
	[Address(RVA = "0x57B54D0", Offset = "0x57B44D0", VA = "0x57B54D0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardMuteDialog.c (Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog$$BuildBody): clean


		AottgScoreboardMuteDialog.MuteRow(body, "ingame-scoreboard-mute-emote", "MuteEmote");
		AottgScoreboardMuteDialog.MuteRow(body, "ingame-scoreboard-mute-text", "MuteText");
		AottgScoreboardMuteDialog.MuteRow(body, "ingame-scoreboard-mute-voice", "MuteVoice");
		if (body == null) {
			throw new NullReferenceException();
		}
		body.TextKey("ScoreboardPopup.MutePopup.VoiceVolume", "inGameInfo", null, null, null);
		body.Slider("ingame-scoreboard-mute-volume", 1.0, true, null, "slider", 0.0, 1.0, null);
		return;
	}

	[Token(Token = "0x6000FA1")]
	[Address(RVA = "0x57B5630", Offset = "0x57B4630", VA = "0x57B5630")]
	private static void MuteRow(AottgUi body, string id, string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardMuteDialog.c (Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog$$MuteRow): 2 lines keep C-only constructs
		AottgScoreboardMuteDialog.c__DisplayClass12_0 __this;
		Action<AottgUi> __this_00;
		GisketchLength height;
		GisketchLayoutDefinition layout;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgScoreboardMuteDialog.c__DisplayClass12_0));
		__this = new Object();
		if (__this != null) {
			__this.key = key;
			__this.id = id;
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_c__DisplayClass12_0_MuteRow_b__0);
			height = AottgUi.Points(44.0);
			layout = AottgUi.Layout("Row", null, "Center", null, null, 16.0, null, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (body != null) {
				body.Panel("clear", __this_00, null, layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000FA2")]
	[Address(RVA = "0x57B57F0", Offset = "0x57B47F0", VA = "0x57B57F0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardMuteDialog.c (Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog$$BuildFooter): clean
		if (footer == null) {
			throw new NullReferenceException();
		}
		footer.QuietKey("Common.Cancel", "ingame.popup.back");
		footer.PrimaryKey("Common.Confirm", "ingame.player.mute.confirm");
		return;
	}

	[Token(Token = "0x6000FA3")]
	[Address(RVA = "0x57B5880", Offset = "0x57B4880", VA = "0x57B5880")]
	public AottgScoreboardMuteDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardMuteDialog.c (Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardMuteDialog.c.

	// Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog.<>c__DisplayClass12_0$$.ctor: clean
	private void c__DisplayClass12_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog.<>c__DisplayClass12_0$$<MuteRow>b__0: clean
	private void c__DisplayClass12_0__MuteRow_b__0(AottgUi row)
	{
		String key;
		GisketchNodeDefinition pGVar1;
		GisketchLayoutDefinition pGVar2;

		key = String.Concat("ScoreboardPopup.MutePopup.", this.key);
		if (row != null) {
			pGVar1 = row.TextKey(key, "inGameInfo", null, null, null);
			pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
			if (pGVar1 != null) {
				pGVar1.layout = pGVar2;
				row.Switch(this.id, false, null);
				return;
			}
		}
		throw new NullReferenceException();
	}
}
