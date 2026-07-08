using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000187")]
internal sealed class AottgProfilePreviewPanel : AottgComponent
{
	[Token(Token = "0x40008AC")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _avatarSprite;

	[Token(Token = "0x40008AD")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _bannerSprite;

	[Token(Token = "0x6000907")]
	[Address(RVA = "0x40EE340", Offset = "0x40EE340", VA = "0x40EE340")]
	public AottgProfilePreviewPanel(string avatarSprite, string bannerSprite)
	{
	}

	[Token(Token = "0x6000908")]
	[Address(RVA = "0x40F5EA0", Offset = "0x40F5EA0", VA = "0x40F5EA0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}
}
