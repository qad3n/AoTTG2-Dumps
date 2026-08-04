// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgChangeEmoteTextDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200019E")]
[AottgDialog("profile-change-emote-text")]
public sealed class AottgChangeEmoteTextDialog : AottgDialog
{
	[Token(Token = "0x4000915")]
	public const string Id = "profile-change-emote-text";

	[Token(Token = "0x4000916")]
	public const string InputId = "profile-change-emote-text-input";

	[Token(Token = "0x17000148")]
	protected override string Title
	{
		[Token(Token = "0x60009CD")]
		[Address(RVA = "0x4417F40", Offset = "0x4417F40", VA = "0x4417F40", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000149")]
	protected override string TitleIcon
	{
		[Token(Token = "0x60009CE")]
		[Address(RVA = "0x4417F70", Offset = "0x4417F70", VA = "0x4417F70", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014A")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60009CF")]
		[Address(RVA = "0x4417FA0", Offset = "0x4417FA0", VA = "0x4417FA0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009D0")]
	[Address(RVA = "0x4418070", Offset = "0x4418070", VA = "0x4418070", Slot = "19")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x60009D1")]
	[Address(RVA = "0x44182D0", Offset = "0x44182D0", VA = "0x44182D0", Slot = "20")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x60009D2")]
	[Address(RVA = "0x44181F0", Offset = "0x44181F0", VA = "0x44181F0")]
	private static string TextValue(int index)
	{
		return null;
	}

	[Token(Token = "0x60009D3")]
	[Address(RVA = "0x4418360", Offset = "0x4418360", VA = "0x4418360")]
	public AottgChangeEmoteTextDialog()
	{
	}
}
