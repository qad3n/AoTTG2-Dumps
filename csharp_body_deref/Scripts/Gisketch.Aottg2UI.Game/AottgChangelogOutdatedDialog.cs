// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgChangelogOutdatedDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogOutdatedDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001EC")]
[AottgDialog("changelog-outdated")]
public sealed class AottgChangelogOutdatedDialog : AottgDialog
{
	[Token(Token = "0x4000A59")]
	public const string Id = "changelog-outdated";

	[Token(Token = "0x17000140")]
	protected override string Title
	{
		[Token(Token = "0x6000B6A")]
		[Address(RVA = "0x5D78C70", Offset = "0x5D77C70", VA = "0x5D78C70", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000141")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000B6B")]
		[Address(RVA = "0x5D78CD0", Offset = "0x5D77CD0", VA = "0x5D78CD0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000142")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000B6C")]
		[Address(RVA = "0x5D78D00", Offset = "0x5D77D00", VA = "0x5D78D00", Slot = "14")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x17000143")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000B6D")]
		[Address(RVA = "0x5D78D10", Offset = "0x5D77D10", VA = "0x5D78D10", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000144")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000B6E")]
		[Address(RVA = "0x5D78D20", Offset = "0x5D77D20", VA = "0x5D78D20", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000145")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000B6F")]
		[Address(RVA = "0x5D78E00", Offset = "0x5D77E00", VA = "0x5D78E00", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B70")]
	[Address(RVA = "0x5D78EB0", Offset = "0x5D77EB0", VA = "0x5D78EB0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x5D79150", Offset = "0x5D78150", VA = "0x5D79150", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000B72")]
	[Address(RVA = "0x5D79220", Offset = "0x5D78220", VA = "0x5D79220")]
	public AottgChangelogOutdatedDialog()
	{
	}
}
