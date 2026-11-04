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

[Token(Token = "0x20002C4")]
internal sealed class AottgProfilePreviewCard : AottgComponent
{
	[Token(Token = "0x4000E26")]
	public const string AvatarImageId = "profile-preview-avatar-image";

	[Token(Token = "0x4000E27")]
	public const string BannerImageId = "profile-preview-banner-image";

	[Token(Token = "0x4000E28")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _avatarSprite;

	[Token(Token = "0x4000E29")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _bannerSprite;

	[Token(Token = "0x6001155")]
	[Address(RVA = "0x1A291F0", Offset = "0x1A277F0", VA = "0x181A291F0")]
	public AottgProfilePreviewCard(string avatarSprite, string bannerSprite)
	{
	}

	[Token(Token = "0x6001156")]
	[Address(RVA = "0x1E1B080", Offset = "0x1E19680", VA = "0x181E1B080", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}
}
