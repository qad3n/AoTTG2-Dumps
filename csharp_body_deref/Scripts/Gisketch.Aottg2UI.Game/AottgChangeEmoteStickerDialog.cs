using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200016D")]
[AottgDialog("profile-change-emote-sticker")]
public sealed class AottgChangeEmoteStickerDialog : AottgDialog
{
	[Token(Token = "0x4000853")]
	public const string Id = "profile-change-emote-sticker";

	[Token(Token = "0x170000F5")]
	protected override string Title
	{
		[Token(Token = "0x600085E")]
		[Address(RVA = "0x40E7370", Offset = "0x40E7370", VA = "0x40E7370", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F6")]
	protected override string TitleIcon
	{
		[Token(Token = "0x600085F")]
		[Address(RVA = "0x40E73A0", Offset = "0x40E73A0", VA = "0x40E73A0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F7")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000860")]
		[Address(RVA = "0x40E73D0", Offset = "0x40E73D0", VA = "0x40E73D0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000861")]
	[Address(RVA = "0x40E74D0", Offset = "0x40E74D0", VA = "0x40E74D0", Slot = "18")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000862")]
	[Address(RVA = "0x40E7930", Offset = "0x40E7930", VA = "0x40E7930")]
	public AottgChangeEmoteStickerDialog()
	{
	}
}
