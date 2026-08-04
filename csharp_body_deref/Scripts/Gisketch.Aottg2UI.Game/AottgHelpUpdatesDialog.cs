// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgHelpUpdatesDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000151")]
[AottgDialog("help-updates")]
public sealed class AottgHelpUpdatesDialog : AottgDialog
{
	[Token(Token = "0x4000788")]
	public const string Id = "help-updates";

	[Token(Token = "0x17000111")]
	protected override string Title
	{
		[Token(Token = "0x6000767")]
		[Address(RVA = "0x43E39A0", Offset = "0x43E39A0", VA = "0x43E39A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000112")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000768")]
		[Address(RVA = "0x43E39D0", Offset = "0x43E39D0", VA = "0x43E39D0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000113")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000769")]
		[Address(RVA = "0x43E3A00", Offset = "0x43E3A00", VA = "0x43E3A00", Slot = "13")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x17000114")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x600076A")]
		[Address(RVA = "0x43E3A10", Offset = "0x43E3A10", VA = "0x43E3A10", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000115")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x600076B")]
		[Address(RVA = "0x43E3B10", Offset = "0x43E3B10", VA = "0x43E3B10", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x43E3BD0", Offset = "0x43E3BD0", VA = "0x43E3BD0", Slot = "19")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x43E4170", Offset = "0x43E4170", VA = "0x43E4170", Slot = "20")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x43E3CF0", Offset = "0x43E3CF0", VA = "0x43E3CF0")]
	private static void BuildLatestCard(AottgUi body)
	{
	}

	[Token(Token = "0x600076F")]
	[Address(RVA = "0x43E41D0", Offset = "0x43E41D0", VA = "0x43E41D0")]
	private static void BuildLatestReady(AottgUi card)
	{
	}

	[Token(Token = "0x6000770")]
	[Address(RVA = "0x43E4450", Offset = "0x43E4450", VA = "0x43E4450")]
	private static void BuildLatestLoading(AottgUi card)
	{
	}

	[Token(Token = "0x6000771")]
	[Address(RVA = "0x43E46D0", Offset = "0x43E46D0", VA = "0x43E46D0")]
	private static void BuildPreviewSkeleton(AottgUi ui, string idPrefix)
	{
	}

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x43E4B70", Offset = "0x43E4B70", VA = "0x43E4B70")]
	private static void BuildLatestError(AottgUi card)
	{
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x43E4DF0", Offset = "0x43E4DF0", VA = "0x43E4DF0")]
	private static void BuildLatestState(AottgUi card, string visibleKey, string text, string id)
	{
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x43E3F30", Offset = "0x43E3F30", VA = "0x43E3F30")]
	private static void BuildHelp(AottgUi body)
	{
	}

	[Token(Token = "0x6000775")]
	[Address(RVA = "0x43E5000", Offset = "0x43E5000", VA = "0x43E5000")]
	private static void BuildHelpLink(AottgUi help, JSONNode node, int index)
	{
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x43E5170", Offset = "0x43E5170", VA = "0x43E5170")]
	private static string HelpIcon(string title)
	{
		return null;
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x43E5260", Offset = "0x43E5260", VA = "0x43E5260")]
	public AottgHelpUpdatesDialog()
	{
	}
}
