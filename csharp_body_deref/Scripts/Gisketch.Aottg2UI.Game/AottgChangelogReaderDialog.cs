// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogReaderDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200014D")]
[AottgDialog("changelog-reader")]
public sealed class AottgChangelogReaderDialog : AottgDialog
{
	[Token(Token = "0x400076D")]
	public const string Id = "changelog-reader";

	[Token(Token = "0x1700010C")]
	protected override string Title
	{
		[Token(Token = "0x6000753")]
		[Address(RVA = "0x43E2150", Offset = "0x43E2150", VA = "0x43E2150", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010D")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000754")]
		[Address(RVA = "0x43E2180", Offset = "0x43E2180", VA = "0x43E2180", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010E")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000755")]
		[Address(RVA = "0x43E21B0", Offset = "0x43E21B0", VA = "0x43E21B0", Slot = "13")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x1700010F")]
	protected override string HeaderTitleKey
	{
		[Token(Token = "0x6000756")]
		[Address(RVA = "0x43E21C0", Offset = "0x43E21C0", VA = "0x43E21C0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000110")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000757")]
		[Address(RVA = "0x43E21F0", Offset = "0x43E21F0", VA = "0x43E21F0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000758")]
	[Address(RVA = "0x43E22F0", Offset = "0x43E22F0", VA = "0x43E22F0", Slot = "19")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000759")]
	[Address(RVA = "0x43E2B90", Offset = "0x43E2B90", VA = "0x43E2B90", Slot = "20")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x600075A")]
	[Address(RVA = "0x43E2890", Offset = "0x43E2890", VA = "0x43E2890")]
	private static void BuildReady(AottgUi body)
	{
	}

	[Token(Token = "0x600075B")]
	[Address(RVA = "0x43E2370", Offset = "0x43E2370", VA = "0x43E2370")]
	private static void BuildLoading(AottgUi body)
	{
	}

	[Token(Token = "0x600075C")]
	[Address(RVA = "0x43E25D0", Offset = "0x43E25D0", VA = "0x43E25D0")]
	private static void BuildError(AottgUi body)
	{
	}

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x43E2830", Offset = "0x43E2830", VA = "0x43E2830")]
	private static void BuildEmpty(AottgUi body)
	{
	}

	[Token(Token = "0x600075E")]
	[Address(RVA = "0x43E2D50", Offset = "0x43E2D50", VA = "0x43E2D50")]
	private static void BuildStatePanel(AottgUi body, string visibleKey, string text, string id)
	{
	}

	[Token(Token = "0x600075F")]
	[Address(RVA = "0x43E2F70", Offset = "0x43E2F70", VA = "0x43E2F70")]
	public AottgChangelogReaderDialog()
	{
	}
}
