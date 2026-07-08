using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200018B")]
internal sealed class AottgProfilePreviewCard : AottgComponent
{
	[Token(Token = "0x40008B5")]
	public const string AvatarImageId = "profile-preview-avatar-image";

	[Token(Token = "0x40008B6")]
	public const string BannerImageId = "profile-preview-banner-image";

	[Token(Token = "0x40008B7")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _avatarSprite;

	[Token(Token = "0x40008B8")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _bannerSprite;

	[Token(Token = "0x6000918")]
	[Address(RVA = "0x40F6440", Offset = "0x40F6440", VA = "0x40F6440")]
	public AottgProfilePreviewCard(string avatarSprite, string bannerSprite)
	{
	}

	[Token(Token = "0x6000919")]
	[Address(RVA = "0x40F6C30", Offset = "0x40F6C30", VA = "0x40F6C30", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}
}
