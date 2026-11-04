// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgScoreboardKickDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardKickDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200026C")]
[AottgDialog("ingame-scoreboard-kick")]
public sealed class AottgScoreboardKickDialog : AottgDialog
{
	[Token(Token = "0x4000C70")]
	public const string Id = "ingame-scoreboard-kick";

	[Token(Token = "0x4000C71")]
	public const string MessageId = "ingame-scoreboard-kick-message";

	[Token(Token = "0x1700019C")]
	protected override string Title
	{
		[Token(Token = "0x6000E97")]
		[Address(RVA = "0x1DE6710", Offset = "0x1DE4D10", VA = "0x181DE6710", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019D")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000E98")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019E")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000E99")]
		[Address(RVA = "0x868060", Offset = "0x866660", VA = "0x180868060", Slot = "14")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x1700019F")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000E9A")]
		[Address(RVA = "0x1DE6610", Offset = "0x1DE4C10", VA = "0x181DE6610", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E9B")]
	[Address(RVA = "0x1DE64D0", Offset = "0x1DE4AD0", VA = "0x181DE64D0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000E9C")]
	[Address(RVA = "0x1DE6550", Offset = "0x1DE4B50", VA = "0x181DE6550", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000E9D")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgScoreboardKickDialog()
	{
	}
}
