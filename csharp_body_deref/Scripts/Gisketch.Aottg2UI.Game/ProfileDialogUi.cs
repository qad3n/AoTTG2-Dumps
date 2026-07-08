using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000182")]
internal static class ProfileDialogUi
{
	[Token(Token = "0x400089B")]
	internal const float PickerPanelWidth = 630f;

	[Token(Token = "0x400089C")]
	internal const float PreviewPanelWidth = 480f;

	[Token(Token = "0x400089D")]
	private const float SplitGap = 24f;

	[Token(Token = "0x400089E")]
	private const float PanelMotionSeconds = 0.16f;

	[Token(Token = "0x1700010B")]
	public static GisketchLayoutDefinition SplitRootLayout
	{
		[Token(Token = "0x60008CF")]
		[Address(RVA = "0x40EDB60", Offset = "0x40EDB60", VA = "0x40EDB60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010C")]
	public static GisketchLayoutDefinition SplitBodyLayout
	{
		[Token(Token = "0x60008D0")]
		[Address(RVA = "0x40EDCF0", Offset = "0x40EDCF0", VA = "0x40EDCF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x40E7670", Offset = "0x40E7670", VA = "0x40E7670")]
	public static GisketchGridPickerItem[] GridItems(AottgProfilePreset[] presets)
	{
		return null;
	}

	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x40F0C40", Offset = "0x40F0C40", VA = "0x40F0C40")]
	public static void SelectAvatar(GisketchActionContext context, GisketchGridPickerItem item)
	{
	}

	[Token(Token = "0x60008D3")]
	[Address(RVA = "0x40F0FF0", Offset = "0x40F0FF0", VA = "0x40F0FF0")]
	public static void SelectBanner(GisketchActionContext context, GisketchGridPickerItem item)
	{
	}

	[Token(Token = "0x60008D4")]
	[Address(RVA = "0x40F0CB0", Offset = "0x40F0CB0", VA = "0x40F0CB0")]
	private static void UpdatePreviewImage(GisketchActionContext context, string imageId, string sprite)
	{
	}

	[Token(Token = "0x60008D5")]
	private static T Find<T>(Transform root, string id) where T : Component
	{
		return null;
	}

	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x40E1A60", Offset = "0x40E1A60", VA = "0x40E1A60")]
	public static GisketchMotionDefinition PanelEnterMotion()
	{
		return null;
	}

	[Token(Token = "0x60008D7")]
	[Address(RVA = "0x40E1AB0", Offset = "0x40E1AB0", VA = "0x40E1AB0")]
	public static GisketchMotionDefinition PanelExitMotion()
	{
		return null;
	}

	[Token(Token = "0x60008D8")]
	[Address(RVA = "0x40F1060", Offset = "0x40F1060", VA = "0x40F1060")]
	public static GisketchMotionDefinition PreviewEnterMotion()
	{
		return null;
	}

	[Token(Token = "0x60008D9")]
	[Address(RVA = "0x40F10B0", Offset = "0x40F10B0", VA = "0x40F10B0")]
	public static GisketchMotionDefinition PreviewExitMotion()
	{
		return null;
	}

	[Token(Token = "0x60008DA")]
	[Address(RVA = "0x40E57C0", Offset = "0x40E57C0", VA = "0x40E57C0")]
	public static void SaveCallout(AottgUi ui)
	{
	}

	[Token(Token = "0x60008DB")]
	[Address(RVA = "0x40F0960", Offset = "0x40F0960", VA = "0x40F0960")]
	public static void SaveFooter(AottgDialogFooter footer, string actionId)
	{
	}

	[Token(Token = "0x60008DC")]
	[Address(RVA = "0x40F1100", Offset = "0x40F1100", VA = "0x40F1100")]
	internal static void SaveFooter(AottgUi footer, string actionId)
	{
	}
}
