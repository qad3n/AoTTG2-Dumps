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

[Token(Token = "0x20001B4")]
internal static class ProfileDialogUi
{
	[Token(Token = "0x400095F")]
	internal const float PickerPanelWidth = 630f;

	[Token(Token = "0x4000960")]
	internal const float PreviewPanelWidth = 480f;

	[Token(Token = "0x4000961")]
	private const float SplitGap = 24f;

	[Token(Token = "0x4000962")]
	private const float PanelMotionSeconds = 0.16f;

	[Token(Token = "0x17000161")]
	public static GisketchLayoutDefinition SplitRootLayout
	{
		[Token(Token = "0x6000A48")]
		[Address(RVA = "0x441EE20", Offset = "0x441EE20", VA = "0x441EE20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000162")]
	public static GisketchLayoutDefinition SplitBodyLayout
	{
		[Token(Token = "0x6000A49")]
		[Address(RVA = "0x441EFB0", Offset = "0x441EFB0", VA = "0x441EFB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A4A")]
	[Address(RVA = "0x4418670", Offset = "0x4418670", VA = "0x4418670")]
	public static GisketchGridPickerItem[] GridItems(AottgProfilePreset[] presets)
	{
		return null;
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x4422270", Offset = "0x4422270", VA = "0x4422270")]
	public static void SelectAvatar(GisketchActionContext context, GisketchGridPickerItem item)
	{
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x4422620", Offset = "0x4422620", VA = "0x4422620")]
	public static void SelectBanner(GisketchActionContext context, GisketchGridPickerItem item)
	{
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x44222E0", Offset = "0x44222E0", VA = "0x44222E0")]
	private static void UpdatePreviewImage(GisketchActionContext context, string imageId, string sprite)
	{
	}

	[Token(Token = "0x6000A4E")]
	private static T Find<T>(Transform root, string id) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6000A4F")]
	[Address(RVA = "0x4422690", Offset = "0x4422690", VA = "0x4422690")]
	public static GisketchMotionDefinition PanelEnterMotion()
	{
		return null;
	}

	[Token(Token = "0x6000A50")]
	[Address(RVA = "0x44226E0", Offset = "0x44226E0", VA = "0x44226E0")]
	public static GisketchMotionDefinition PanelExitMotion()
	{
		return null;
	}

	[Token(Token = "0x6000A51")]
	[Address(RVA = "0x4422730", Offset = "0x4422730", VA = "0x4422730")]
	public static GisketchMotionDefinition PreviewEnterMotion()
	{
		return null;
	}

	[Token(Token = "0x6000A52")]
	[Address(RVA = "0x4422780", Offset = "0x4422780", VA = "0x4422780")]
	public static GisketchMotionDefinition PreviewExitMotion()
	{
		return null;
	}

	[Token(Token = "0x6000A53")]
	[Address(RVA = "0x44167B0", Offset = "0x44167B0", VA = "0x44167B0")]
	public static void SaveCallout(AottgUi ui)
	{
	}

	[Token(Token = "0x6000A54")]
	[Address(RVA = "0x4421E80", Offset = "0x4421E80", VA = "0x4421E80")]
	public static void SaveFooter(AottgDialogFooter footer, string actionId)
	{
	}

	[Token(Token = "0x6000A55")]
	[Address(RVA = "0x44227D0", Offset = "0x44227D0", VA = "0x44227D0")]
	internal static void SaveFooter(AottgUi footer, string actionId)
	{
	}
}
