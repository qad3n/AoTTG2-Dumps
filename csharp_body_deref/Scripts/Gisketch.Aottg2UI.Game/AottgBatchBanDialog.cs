// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgBatchBanDialog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgBatchBanDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
			return null;
		}
	}

	[Token(Token = "0x17000193")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000F79")]
		[Address(RVA = "0x57B3860", Offset = "0x57B2860", VA = "0x57B3860", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000194")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000F7A")]
		[Address(RVA = "0x57B3870", Offset = "0x57B2870", VA = "0x57B3870", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F7B")]
	[Address(RVA = "0x57B3930", Offset = "0x57B2930", VA = "0x57B3930", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000F7C")]
	[Address(RVA = "0x57B3BA0", Offset = "0x57B2BA0", VA = "0x57B3BA0")]
	private static void ActionRow(AottgUi body, string firstItem, string firstAction, string secondItem, string secondAction)
	{
	}

	[Token(Token = "0x6000F7D")]
	[Address(RVA = "0x57B3D70", Offset = "0x57B2D70", VA = "0x57B3D70", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000F7E")]
	[Address(RVA = "0x57B3DD0", Offset = "0x57B2DD0", VA = "0x57B3DD0")]
	public AottgBatchBanDialog()
	{
	}
}
