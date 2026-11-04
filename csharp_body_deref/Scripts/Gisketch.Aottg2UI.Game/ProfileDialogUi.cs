// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.ProfileDialogUi
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/ProfileDialogUi.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002BB")]
internal static class ProfileDialogUi
{
	[Token(Token = "0x4000E0A")]
	internal const float PickerPanelWidth = 630f;

	[Token(Token = "0x4000E0B")]
	internal const float PreviewPanelWidth = 480f;

	[Token(Token = "0x4000E0C")]
	internal const string AvatarDraftKey = "profile-avatar-key";

	[Token(Token = "0x4000E0D")]
	internal const string BannerDraftKey = "profile-banner-key";

	[Token(Token = "0x4000E0E")]
	private const float SplitGap = 24f;

	[Token(Token = "0x4000E0F")]
	private const float PanelMotionSeconds = 0.16f;

	[Token(Token = "0x170001EB")]
	public static GisketchLayoutDefinition SplitRootLayout
	{
		[Token(Token = "0x6001109")]
		[Address(RVA = "0x1E221E0", Offset = "0x1E207E0", VA = "0x181E221E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001EC")]
	public static GisketchLayoutDefinition SplitBodyLayout
	{
		[Token(Token = "0x600110A")]
		[Address(RVA = "0x1E220F0", Offset = "0x1E206F0", VA = "0x181E220F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600110B")]
	[Address(RVA = "0x1E215D0", Offset = "0x1E1FBD0", VA = "0x181E215D0")]
	public static GisketchGridPickerItem[] GridItems(AottgProfilePreset[] presets)
	{
		return null;
	}

	[Token(Token = "0x600110C")]
	[Address(RVA = "0x1E21D00", Offset = "0x1E20300", VA = "0x181E21D00")]
	public static void SelectAvatar(GisketchActionContext context, GisketchGridPickerItem item)
	{
	}

	[Token(Token = "0x600110D")]
	[Address(RVA = "0x1E21DC0", Offset = "0x1E203C0", VA = "0x181E21DC0")]
	public static void SelectBanner(GisketchActionContext context, GisketchGridPickerItem item)
	{
	}

	[Token(Token = "0x600110E")]
	[Address(RVA = "0x1E21E80", Offset = "0x1E20480", VA = "0x181E21E80")]
	private static void UpdatePreviewImage(GisketchActionContext context, string imageId, string sprite)
	{
	}

	[Token(Token = "0x600110F")]
	private static T Find<T>(Transform root, string id) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6001110")]
	[Address(RVA = "0x1E21820", Offset = "0x1E1FE20", VA = "0x181E21820")]
	public static GisketchMotionDefinition PanelEnterMotion()
	{
		return null;
	}

	[Token(Token = "0x6001111")]
	[Address(RVA = "0x1E21870", Offset = "0x1E1FE70", VA = "0x181E21870")]
	public static GisketchMotionDefinition PanelExitMotion()
	{
		return null;
	}

	[Token(Token = "0x6001112")]
	[Address(RVA = "0x1E218C0", Offset = "0x1E1FEC0", VA = "0x181E218C0")]
	public static GisketchMotionDefinition PreviewEnterMotion()
	{
		return null;
	}

	[Token(Token = "0x6001113")]
	[Address(RVA = "0x1E21920", Offset = "0x1E1FF20", VA = "0x181E21920")]
	public static GisketchMotionDefinition PreviewExitMotion()
	{
		return null;
	}

	[Token(Token = "0x6001114")]
	[Address(RVA = "0x1E21980", Offset = "0x1E1FF80", VA = "0x181E21980")]
	public static void SaveCallout(AottgUi ui)
	{
	}

	[Token(Token = "0x6001115")]
	[Address(RVA = "0x1E21A60", Offset = "0x1E20060", VA = "0x181E21A60")]
	public static void SaveFooter(AottgDialogFooter footer, string actionId)
	{
	}

	[Token(Token = "0x6001116")]
	[Address(RVA = "0x1E21B90", Offset = "0x1E20190", VA = "0x181E21B90")]
	internal static void SaveFooter(AottgUi footer, string actionId)
	{
	}
}
