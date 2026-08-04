// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfilePreviewCard
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePreviewCard.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001BE")]
internal sealed class AottgProfilePreviewCard : AottgComponent
{
	[Token(Token = "0x400097B")]
	public const string AvatarImageId = "profile-preview-avatar-image";

	[Token(Token = "0x400097C")]
	public const string BannerImageId = "profile-preview-banner-image";

	[Token(Token = "0x400097D")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _avatarSprite;

	[Token(Token = "0x400097E")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _bannerSprite;

	[Token(Token = "0x6000A95")]
	[Address(RVA = "0x44288F0", Offset = "0x44288F0", VA = "0x44288F0")]
	public AottgProfilePreviewCard(string avatarSprite, string bannerSprite)
	{
	}

	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x4429240", Offset = "0x4429240", VA = "0x4429240", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}
}
