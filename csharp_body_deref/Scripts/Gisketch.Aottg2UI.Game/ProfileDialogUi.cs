// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.ProfileDialogUi
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000318")]
internal static class ProfileDialogUi
{
	[Token(Token = "0x4000F9B")]
	internal const float PickerPanelWidth = 630f;

	[Token(Token = "0x4000F9C")]
	internal const float PreviewPanelWidth = 480f;

	[Token(Token = "0x4000F9D")]
	internal const string AvatarDraftKey = "profile-avatar-key";

	[Token(Token = "0x4000F9E")]
	internal const string BannerDraftKey = "profile-banner-key";

	[Token(Token = "0x4000F9F")]
	private const float SplitGap = 24f;

	[Token(Token = "0x4000FA0")]
	private const float PanelMotionSeconds = 0.16f;

	[Token(Token = "0x17000228")]
	public static GisketchLayoutDefinition SplitRootLayout
	{
		[Token(Token = "0x600135A")]
		[Address(RVA = "0x57FB670", Offset = "0x57FA670", VA = "0x57FB670")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000229")]
	public static GisketchLayoutDefinition SplitBodyLayout
	{
		[Token(Token = "0x600135B")]
		[Address(RVA = "0x57FB7E0", Offset = "0x57FA7E0", VA = "0x57FB7E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600135C")]
	[Address(RVA = "0x57FBDB0", Offset = "0x57FADB0", VA = "0x57FBDB0")]
	public static GisketchGridPickerItem[] GridItems(AottgProfilePreset[] presets)
	{
		return null;
	}

	[Token(Token = "0x600135D")]
	[Address(RVA = "0x57FEB00", Offset = "0x57FDB00", VA = "0x57FEB00")]
	public static void SelectAvatar(GisketchActionContext context, GisketchGridPickerItem item)
	{
	}

	[Token(Token = "0x600135E")]
	[Address(RVA = "0x57FEE70", Offset = "0x57FDE70", VA = "0x57FEE70")]
	public static void SelectBanner(GisketchActionContext context, GisketchGridPickerItem item)
	{
	}

	[Token(Token = "0x600135F")]
	[Address(RVA = "0x57FEBA0", Offset = "0x57FDBA0", VA = "0x57FEBA0")]
	private static void UpdatePreviewImage(GisketchActionContext context, string imageId, string sprite)
	{
	}

	[Token(Token = "0x6001360")]
	private static T Find<T>(Transform root, string id) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6001361")]
	[Address(RVA = "0x57FEF10", Offset = "0x57FDF10", VA = "0x57FEF10")]
	public static GisketchMotionDefinition PanelEnterMotion()
	{
		return null;
	}

	[Token(Token = "0x6001362")]
	[Address(RVA = "0x57FEF60", Offset = "0x57FDF60", VA = "0x57FEF60")]
	public static GisketchMotionDefinition PanelExitMotion()
	{
		return null;
	}

	[Token(Token = "0x6001363")]
	[Address(RVA = "0x57FEFB0", Offset = "0x57FDFB0", VA = "0x57FEFB0")]
	public static GisketchMotionDefinition PreviewEnterMotion()
	{
		return null;
	}

	[Token(Token = "0x6001364")]
	[Address(RVA = "0x57FF000", Offset = "0x57FE000", VA = "0x57FF000")]
	public static GisketchMotionDefinition PreviewExitMotion()
	{
		return null;
	}

	[Token(Token = "0x6001365")]
	[Address(RVA = "0x57FDDF0", Offset = "0x57FCDF0", VA = "0x57FDDF0")]
	public static void SaveCallout(AottgUi ui)
	{
	}

	[Token(Token = "0x6001366")]
	[Address(RVA = "0x57FE600", Offset = "0x57FD600", VA = "0x57FE600")]
	public static void SaveFooter(AottgDialogFooter footer, string actionId)
	{
	}

	[Token(Token = "0x6001367")]
	[Address(RVA = "0x57FF050", Offset = "0x57FE050", VA = "0x57FF050")]
	internal static void SaveFooter(AottgUi footer, string actionId)
	{
	}
}
