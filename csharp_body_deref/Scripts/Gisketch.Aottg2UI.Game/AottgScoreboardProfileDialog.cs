// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgScoreboardProfileDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardProfileDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000269")]
[AottgDialog("ingame-scoreboard-profile")]
public sealed class AottgScoreboardProfileDialog : AottgDialog
{
	[Token(Token = "0x4000C66")]
	public const string Id = "ingame-scoreboard-profile";

	[Token(Token = "0x4000C67")]
	public const string ContentId = "ingame-scoreboard-profile-content";

	[Token(Token = "0x17000197")]
	protected override string Title
	{
		[Token(Token = "0x6000E89")]
		[Address(RVA = "0x1DE77A0", Offset = "0x1DE5DA0", VA = "0x181DE77A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000198")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000E8A")]
		[Address(RVA = "0x1DE7690", Offset = "0x1DE5C90", VA = "0x181DE7690", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E8B")]
	[Address(RVA = "0x1DE74C0", Offset = "0x1DE5AC0", VA = "0x181DE74C0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000E8C")]
	[Address(RVA = "0x1DE7610", Offset = "0x1DE5C10", VA = "0x181DE7610", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000E8D")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgScoreboardProfileDialog()
	{
	}
}
