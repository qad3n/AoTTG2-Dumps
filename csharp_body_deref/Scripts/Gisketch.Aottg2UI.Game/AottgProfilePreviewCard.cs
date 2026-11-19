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

[Token(Token = "0x2000321")]
internal sealed class AottgProfilePreviewCard : AottgComponent
{
	[Token(Token = "0x4000FB7")]
	public const string AvatarImageId = "profile-preview-avatar-image";

	[Token(Token = "0x4000FB8")]
	public const string BannerImageId = "profile-preview-banner-image";

	[Token(Token = "0x4000FB9")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _avatarSprite;

	[Token(Token = "0x4000FBA")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _bannerSprite;

	[Token(Token = "0x60013A6")]
	[Address(RVA = "0x5804820", Offset = "0x5803820", VA = "0x5804820")]
	public AottgProfilePreviewCard(string avatarSprite, string bannerSprite)
	{
	}

	[Token(Token = "0x60013A7")]
	[Address(RVA = "0x5805030", Offset = "0x5804030", VA = "0x5805030", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}
}
