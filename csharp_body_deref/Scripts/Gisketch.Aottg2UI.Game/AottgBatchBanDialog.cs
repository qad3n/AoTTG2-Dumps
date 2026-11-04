// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgBatchBanDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgBatchBanDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000263")]
[AottgDialog("ingame-moderation-batch-ban")]
public sealed class AottgBatchBanDialog : AottgDialog
{
	[Token(Token = "0x4000C56")]
	public const string Id = "ingame-moderation-batch-ban";

	[Token(Token = "0x4000C57")]
	public const string TargetsId = "ingame-moderation-batch-ban-targets";

	[Token(Token = "0x17000187")]
	protected override string Title
	{
		[Token(Token = "0x6000E69")]
		[Address(RVA = "0x1DD8390", Offset = "0x1DD6990", VA = "0x181DD8390", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000188")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000E6A")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000189")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000E6B")]
		[Address(RVA = "0x1DD8290", Offset = "0x1DD6890", VA = "0x181DD8290", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E6C")]
	[Address(RVA = "0x1DD7FB0", Offset = "0x1DD65B0", VA = "0x181DD7FB0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000E6D")]
	[Address(RVA = "0x1DD7DD0", Offset = "0x1DD63D0", VA = "0x181DD7DD0")]
	private static void ActionRow(AottgUi body, string firstLabel, string firstAction, string secondLabel, string secondAction)
	{
	}

	[Token(Token = "0x6000E6E")]
	[Address(RVA = "0x1DD8210", Offset = "0x1DD6810", VA = "0x181DD8210", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000E6F")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgBatchBanDialog()
	{
	}
}
