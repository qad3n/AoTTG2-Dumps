// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgChangelogOutdatedDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogOutdatedDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001D5")]
[AottgDialog("changelog-outdated")]
public sealed class AottgChangelogOutdatedDialog : AottgDialog
{
	[Token(Token = "0x40009E5")]
	public const string Id = "changelog-outdated";

	[Token(Token = "0x1700013B")]
	protected override string Title
	{
		[Token(Token = "0x6000AB1")]
		[Address(RVA = "0x23A7370", Offset = "0x23A5970", VA = "0x1823A7370", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013C")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000AB2")]
		[Address(RVA = "0x23A7340", Offset = "0x23A5940", VA = "0x1823A7340", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013D")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000AB3")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "14")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x1700013E")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000AB4")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013F")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000AB5")]
		[Address(RVA = "0x23A7230", Offset = "0x23A5830", VA = "0x1823A7230", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000140")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000AB6")]
		[Address(RVA = "0x23A7140", Offset = "0x23A5740", VA = "0x1823A7140", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AB7")]
	[Address(RVA = "0x23A6D00", Offset = "0x23A5300", VA = "0x1823A6D00", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000AB8")]
	[Address(RVA = "0x23A7030", Offset = "0x23A5630", VA = "0x1823A7030", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000AB9")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgChangelogOutdatedDialog()
	{
	}
}
