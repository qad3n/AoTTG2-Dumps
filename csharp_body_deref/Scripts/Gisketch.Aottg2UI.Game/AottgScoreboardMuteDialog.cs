// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardMuteDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200026A")]
[AottgDialog("ingame-scoreboard-mute")]
public sealed class AottgScoreboardMuteDialog : AottgDialog
{
	[Token(Token = "0x4000C68")]
	public const string Id = "ingame-scoreboard-mute";

	[Token(Token = "0x4000C69")]
	public const string EmoteId = "ingame-scoreboard-mute-emote";

	[Token(Token = "0x4000C6A")]
	public const string TextId = "ingame-scoreboard-mute-text";

	[Token(Token = "0x4000C6B")]
	public const string VoiceId = "ingame-scoreboard-mute-voice";

	[Token(Token = "0x4000C6C")]
	public const string VolumeId = "ingame-scoreboard-mute-volume";

	[Token(Token = "0x17000199")]
	protected override string Title
	{
		[Token(Token = "0x6000E8E")]
		[Address(RVA = "0x1DE6CF0", Offset = "0x1DE52F0", VA = "0x181DE6CF0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019A")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000E8F")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019B")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000E90")]
		[Address(RVA = "0x1DE6BF0", Offset = "0x1DE51F0", VA = "0x181DE6BF0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E91")]
	[Address(RVA = "0x1DE6780", Offset = "0x1DE4D80", VA = "0x181DE6780", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000E92")]
	[Address(RVA = "0x1DE6A00", Offset = "0x1DE5000", VA = "0x181DE6A00")]
	private static void MuteRow(AottgUi body, string id, string key, string fallback)
	{
	}

	[Token(Token = "0x6000E93")]
	[Address(RVA = "0x1DE6940", Offset = "0x1DE4F40", VA = "0x181DE6940", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000E94")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgScoreboardMuteDialog()
	{
	}
}
