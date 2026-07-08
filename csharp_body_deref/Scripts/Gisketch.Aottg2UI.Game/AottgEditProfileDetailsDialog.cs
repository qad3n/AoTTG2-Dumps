using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000180")]
[AottgDialog("profile-edit-details")]
public sealed class AottgEditProfileDetailsDialog : AottgDialog
{
	[Token(Token = "0x4000897")]
	public const string Id = "profile-edit-details";

	[Token(Token = "0x17000108")]
	protected override string Title
	{
		[Token(Token = "0x60008C5")]
		[Address(RVA = "0x40F0140", Offset = "0x40F0140", VA = "0x40F0140", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000109")]
	protected override string TitleIcon
	{
		[Token(Token = "0x60008C6")]
		[Address(RVA = "0x40F0170", Offset = "0x40F0170", VA = "0x40F0170", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010A")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60008C7")]
		[Address(RVA = "0x40F01A0", Offset = "0x40F01A0", VA = "0x40F01A0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008C8")]
	[Address(RVA = "0x40F0270", Offset = "0x40F0270", VA = "0x40F0270", Slot = "18")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x60008C9")]
	[Address(RVA = "0x40F0930", Offset = "0x40F0930", VA = "0x40F0930", Slot = "19")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x60008CA")]
	[Address(RVA = "0x40F04A0", Offset = "0x40F04A0", VA = "0x40F04A0")]
	private static void AccountNameInput(AottgUi ui)
	{
	}

	[Token(Token = "0x60008CB")]
	[Address(RVA = "0x40F0750", Offset = "0x40F0750", VA = "0x40F0750")]
	private static void LabeledTextArea(AottgUi ui, string label, string id, string placeholder)
	{
	}

	[Token(Token = "0x60008CC")]
	[Address(RVA = "0x40F0A70", Offset = "0x40F0A70", VA = "0x40F0A70")]
	public AottgEditProfileDetailsDialog()
	{
	}
}
