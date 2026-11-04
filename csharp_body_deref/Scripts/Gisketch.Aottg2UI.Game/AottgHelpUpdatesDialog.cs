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

[Token(Token = "0x20001DB")]
[AottgDialog("help-updates")]
public sealed class AottgHelpUpdatesDialog : AottgDialog
{
	[Token(Token = "0x4000A06")]
	public const string Id = "help-updates";

	[Token(Token = "0x17000146")]
	protected override string Title
	{
		[Token(Token = "0x6000AD1")]
		[Address(RVA = "0x23B3330", Offset = "0x23B1930", VA = "0x1823B3330", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000147")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000AD2")]
		[Address(RVA = "0x23B3300", Offset = "0x23B1900", VA = "0x1823B3300", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000148")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000AD3")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "14")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x17000149")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000AD4")]
		[Address(RVA = "0x23B31D0", Offset = "0x23B17D0", VA = "0x1823B31D0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014A")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000AD5")]
		[Address(RVA = "0x23B30E0", Offset = "0x23B16E0", VA = "0x1823B30E0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AD6")]
	[Address(RVA = "0x23B1610", Offset = "0x23AFC10", VA = "0x1823B1610", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000AD7")]
	[Address(RVA = "0x23B1830", Offset = "0x23AFE30", VA = "0x1823B1830", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000AD8")]
	[Address(RVA = "0x23B1E00", Offset = "0x23B0400", VA = "0x1823B1E00")]
	private static void BuildLatestCard(AottgUi body)
	{
	}

	[Token(Token = "0x6000AD9")]
	[Address(RVA = "0x23B25C0", Offset = "0x23B0BC0", VA = "0x1823B25C0")]
	private static void BuildLatestReady(AottgUi card)
	{
	}

	[Token(Token = "0x6000ADA")]
	[Address(RVA = "0x23B2340", Offset = "0x23B0940", VA = "0x1823B2340")]
	private static void BuildLatestLoading(AottgUi card)
	{
	}

	[Token(Token = "0x6000ADB")]
	[Address(RVA = "0x23B2A60", Offset = "0x23B1060", VA = "0x1823B2A60")]
	private static void BuildPreviewSkeleton(AottgUi ui, string idPrefix)
	{
	}

	[Token(Token = "0x6000ADC")]
	[Address(RVA = "0x23B20C0", Offset = "0x23B06C0", VA = "0x1823B20C0")]
	private static void BuildLatestError(AottgUi card)
	{
	}

	[Token(Token = "0x6000ADD")]
	[Address(RVA = "0x23B2840", Offset = "0x23B0E40", VA = "0x1823B2840")]
	private static void BuildLatestState(AottgUi card, string visibleKey, string textKey, string text, string id)
	{
	}

	[Token(Token = "0x6000ADE")]
	[Address(RVA = "0x23B1B40", Offset = "0x23B0140", VA = "0x1823B1B40")]
	private static void BuildHelp(AottgUi body)
	{
	}

	[Token(Token = "0x6000ADF")]
	[Address(RVA = "0x23B18B0", Offset = "0x23AFEB0", VA = "0x1823B18B0")]
	private static void BuildHelpLink(AottgUi help, JSONNode node, int index)
	{
	}

	[Token(Token = "0x6000AE0")]
	[Address(RVA = "0x23B3000", Offset = "0x23B1600", VA = "0x1823B3000")]
	private static string HelpIcon(string title)
	{
		return null;
	}

	[Token(Token = "0x6000AE1")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgHelpUpdatesDialog()
	{
	}
}
