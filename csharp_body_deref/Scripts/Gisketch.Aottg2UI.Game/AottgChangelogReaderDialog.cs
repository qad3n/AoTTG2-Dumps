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

[Token(Token = "0x20001D7")]
[AottgDialog("changelog-reader")]
public sealed class AottgChangelogReaderDialog : AottgDialog
{
	[Token(Token = "0x40009E8")]
	public const string Id = "changelog-reader";

	[Token(Token = "0x17000141")]
	protected override string Title
	{
		[Token(Token = "0x6000ABD")]
		[Address(RVA = "0x23A83A0", Offset = "0x23A69A0", VA = "0x1823A83A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000142")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000ABE")]
		[Address(RVA = "0x23A8370", Offset = "0x23A6970", VA = "0x1823A8370", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000143")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000ABF")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "14")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x17000144")]
	protected override string HeaderTitleKey
	{
		[Token(Token = "0x6000AC0")]
		[Address(RVA = "0x23A8210", Offset = "0x23A6810", VA = "0x1823A8210", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000145")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000AC1")]
		[Address(RVA = "0x23A8240", Offset = "0x23A6840", VA = "0x1823A8240", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AC2")]
	[Address(RVA = "0x23A73E0", Offset = "0x23A59E0", VA = "0x1823A73E0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000AC3")]
	[Address(RVA = "0x23A77B0", Offset = "0x23A5DB0", VA = "0x1823A77B0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000AC4")]
	[Address(RVA = "0x23A7C60", Offset = "0x23A6260", VA = "0x1823A7C60")]
	private static void BuildReady(AottgUi body)
	{
	}

	[Token(Token = "0x6000AC5")]
	[Address(RVA = "0x23A79B0", Offset = "0x23A5FB0", VA = "0x1823A79B0")]
	private static void BuildLoading(AottgUi body)
	{
	}

	[Token(Token = "0x6000AC6")]
	[Address(RVA = "0x23A7510", Offset = "0x23A5B10", VA = "0x1823A7510")]
	private static void BuildError(AottgUi body)
	{
	}

	[Token(Token = "0x6000AC7")]
	[Address(RVA = "0x23A7480", Offset = "0x23A5A80", VA = "0x1823A7480")]
	private static void BuildEmpty(AottgUi body)
	{
	}

	[Token(Token = "0x6000AC8")]
	[Address(RVA = "0x23A7FE0", Offset = "0x23A65E0", VA = "0x1823A7FE0")]
	private static void BuildStatePanel(AottgUi body, string visibleKey, string textKey, string text, string id)
	{
	}

	[Token(Token = "0x6000AC9")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgChangelogReaderDialog()
	{
	}
}
