// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardMuteDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
			return null;
		}
	}

	[Token(Token = "0x170001A5")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000F9E")]
		[Address(RVA = "0x57B5400", Offset = "0x57B4400", VA = "0x57B5400", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A6")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000F9F")]
		[Address(RVA = "0x57B5410", Offset = "0x57B4410", VA = "0x57B5410", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FA0")]
	[Address(RVA = "0x57B54D0", Offset = "0x57B44D0", VA = "0x57B54D0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000FA1")]
	[Address(RVA = "0x57B5630", Offset = "0x57B4630", VA = "0x57B5630")]
	private static void MuteRow(AottgUi body, string id, string key)
	{
	}

	[Token(Token = "0x6000FA2")]
	[Address(RVA = "0x57B57F0", Offset = "0x57B47F0", VA = "0x57B57F0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000FA3")]
	[Address(RVA = "0x57B5880", Offset = "0x57B4880", VA = "0x57B5880")]
	public AottgScoreboardMuteDialog()
	{
	}
}
