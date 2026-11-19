// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgHelpUpdatesDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001F2")]
[AottgDialog("help-updates")]
public sealed class AottgHelpUpdatesDialog : AottgDialog
{
	[Token(Token = "0x4000A79")]
	public const string Id = "help-updates";

	[Token(Token = "0x1700014B")]
	protected override string Title
	{
		[Token(Token = "0x6000B8A")]
		[Address(RVA = "0x5D7AC80", Offset = "0x5D79C80", VA = "0x5D7AC80", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014C")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000B8B")]
		[Address(RVA = "0x5D7ACE0", Offset = "0x5D79CE0", VA = "0x5D7ACE0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014D")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000B8C")]
		[Address(RVA = "0x5D7AD10", Offset = "0x5D79D10", VA = "0x5D7AD10", Slot = "14")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x1700014E")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000B8D")]
		[Address(RVA = "0x5D7AD20", Offset = "0x5D79D20", VA = "0x5D7AD20", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014F")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000B8E")]
		[Address(RVA = "0x5D7AE10", Offset = "0x5D79E10", VA = "0x5D7AE10", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B8F")]
	[Address(RVA = "0x5D7AEC0", Offset = "0x5D79EC0", VA = "0x5D7AEC0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000B90")]
	[Address(RVA = "0x5D7B500", Offset = "0x5D7A500", VA = "0x5D7B500", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000B91")]
	[Address(RVA = "0x5D7B080", Offset = "0x5D7A080", VA = "0x5D7B080")]
	private static void BuildLatestCard(AottgUi body)
	{
	}

	[Token(Token = "0x6000B92")]
	[Address(RVA = "0x5D7B560", Offset = "0x5D7A560", VA = "0x5D7B560")]
	private static void BuildLatestReady(AottgUi card)
	{
	}

	[Token(Token = "0x6000B93")]
	[Address(RVA = "0x5D7B7D0", Offset = "0x5D7A7D0", VA = "0x5D7B7D0")]
	private static void BuildLatestLoading(AottgUi card)
	{
	}

	[Token(Token = "0x6000B94")]
	[Address(RVA = "0x5D7BA40", Offset = "0x5D7AA40", VA = "0x5D7BA40")]
	private static void BuildPreviewSkeleton(AottgUi ui, string idPrefix)
	{
	}

	[Token(Token = "0x6000B95")]
	[Address(RVA = "0x5D7BED0", Offset = "0x5D7AED0", VA = "0x5D7BED0")]
	private static void BuildLatestError(AottgUi card)
	{
	}

	[Token(Token = "0x6000B96")]
	[Address(RVA = "0x5D7C140", Offset = "0x5D7B140", VA = "0x5D7C140")]
	private static void BuildLatestState(AottgUi card, string visibleKey, string textKey, string id)
	{
	}

	[Token(Token = "0x6000B97")]
	[Address(RVA = "0x5D7B2C0", Offset = "0x5D7A2C0", VA = "0x5D7B2C0")]
	private static void BuildHelp(AottgUi body)
	{
	}

	[Token(Token = "0x6000B98")]
	[Address(RVA = "0x5D7C350", Offset = "0x5D7B350", VA = "0x5D7C350")]
	private static void BuildHelpLink(AottgUi help, JSONNode node, int index)
	{
	}

	[Token(Token = "0x6000B99")]
	[Address(RVA = "0x5D7C4F0", Offset = "0x5D7B4F0", VA = "0x5D7C4F0")]
	private static string HelpIcon(string title)
	{
		return null;
	}

	[Token(Token = "0x6000B9A")]
	[Address(RVA = "0x5D7C5E0", Offset = "0x5D7B5E0", VA = "0x5D7C5E0")]
	public AottgHelpUpdatesDialog()
	{
	}
}
