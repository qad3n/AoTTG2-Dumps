using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200016C")]
[AottgDialog("profile-change-emote-text")]
public sealed class AottgChangeEmoteTextDialog : AottgDialog
{
	[Token(Token = "0x4000851")]
	public const string Id = "profile-change-emote-text";

	[Token(Token = "0x4000852")]
	public const string InputId = "profile-change-emote-text-input";

	[Token(Token = "0x170000F2")]
	protected override string Title
	{
		[Token(Token = "0x6000857")]
		[Address(RVA = "0x40E6F40", Offset = "0x40E6F40", VA = "0x40E6F40", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F3")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000858")]
		[Address(RVA = "0x40E6F70", Offset = "0x40E6F70", VA = "0x40E6F70", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F4")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000859")]
		[Address(RVA = "0x40E6FA0", Offset = "0x40E6FA0", VA = "0x40E6FA0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600085A")]
	[Address(RVA = "0x40E7070", Offset = "0x40E7070", VA = "0x40E7070", Slot = "18")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x600085B")]
	[Address(RVA = "0x40E72D0", Offset = "0x40E72D0", VA = "0x40E72D0", Slot = "19")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x600085C")]
	[Address(RVA = "0x40E71F0", Offset = "0x40E71F0", VA = "0x40E71F0")]
	private static string TextValue(int index)
	{
		return null;
	}

	[Token(Token = "0x600085D")]
	[Address(RVA = "0x40E7360", Offset = "0x40E7360", VA = "0x40E7360")]
	public AottgChangeEmoteTextDialog()
	{
	}
}
