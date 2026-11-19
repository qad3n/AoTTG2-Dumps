// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogReaderDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001EE")]
[AottgDialog("changelog-reader")]
public sealed class AottgChangelogReaderDialog : AottgDialog
{
	[Token(Token = "0x4000A5C")]
	public const string Id = "changelog-reader";

	[Token(Token = "0x17000146")]
	protected override string Title
	{
		[Token(Token = "0x6000B76")]
		[Address(RVA = "0x5D79440", Offset = "0x5D78440", VA = "0x5D79440", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000147")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000B77")]
		[Address(RVA = "0x5D794A0", Offset = "0x5D784A0", VA = "0x5D794A0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000148")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000B78")]
		[Address(RVA = "0x5D794D0", Offset = "0x5D784D0", VA = "0x5D794D0", Slot = "14")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x17000149")]
	protected override string HeaderTitleKey
	{
		[Token(Token = "0x6000B79")]
		[Address(RVA = "0x5D794E0", Offset = "0x5D784E0", VA = "0x5D794E0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014A")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000B7A")]
		[Address(RVA = "0x5D79510", Offset = "0x5D78510", VA = "0x5D79510", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B7B")]
	[Address(RVA = "0x5D79600", Offset = "0x5D78600", VA = "0x5D79600", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x5D79EA0", Offset = "0x5D78EA0", VA = "0x5D79EA0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x5D79BA0", Offset = "0x5D78BA0", VA = "0x5D79BA0")]
	private static void BuildReady(AottgUi body)
	{
	}

	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x5D79680", Offset = "0x5D78680", VA = "0x5D79680")]
	private static void BuildLoading(AottgUi body)
	{
	}

	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x5D798E0", Offset = "0x5D788E0", VA = "0x5D798E0")]
	private static void BuildError(AottgUi body)
	{
	}

	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x5D79B40", Offset = "0x5D78B40", VA = "0x5D79B40")]
	private static void BuildEmpty(AottgUi body)
	{
	}

	[Token(Token = "0x6000B81")]
	[Address(RVA = "0x5D7A060", Offset = "0x5D79060", VA = "0x5D7A060")]
	private static void BuildStatePanel(AottgUi body, string visibleKey, string textKey, string id)
	{
	}

	[Token(Token = "0x6000B82")]
	[Address(RVA = "0x5D7A280", Offset = "0x5D79280", VA = "0x5D7A280")]
	public AottgChangelogReaderDialog()
	{
	}
}
