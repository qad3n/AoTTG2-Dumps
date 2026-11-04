// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterEffectUi
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterEffectUi.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200028C")]
internal static class AottgCharacterEffectUi
{
	[Token(Token = "0x4000D19")]
	public const string ColorMode = "Color";

	[Token(Token = "0x4000D1A")]
	public const string ColorModeText = "Custom Color";

	[Token(Token = "0x4000D1B")]
	public const string TwoColorGradientMode = "TwoColorGradient";

	[Token(Token = "0x4000D1C")]
	public const string TwoColorGradientText = "Two-Color Gradient";

	[Token(Token = "0x4000D1D")]
	public const string FourColorGradientMode = "FourColorGradient";

	[Token(Token = "0x4000D1E")]
	public const string FourColorGradientText = "Four-Color Gradient";

	[Token(Token = "0x4000D1F")]
	public const string SupporterTooltipKey = "MainMenu.Profile.SupporterOnlyFeature";

	[Token(Token = "0x4000D20")]
	public const string SupporterTooltip = "This feature is only available for supporters.";

	[Token(Token = "0x6000F69")]
	[Address(RVA = "0x1DF1770", Offset = "0x1DEFD70", VA = "0x181DF1770")]
	public static GisketchChoiceOptionDefinition[] Options(bool hasAccess)
	{
		return null;
	}

	[Token(Token = "0x6000F6A")]
	[Address(RVA = "0x1DF16E0", Offset = "0x1DEFCE0", VA = "0x181DF16E0")]
	public static bool IsTextColorMode(string type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F6B")]
	[Address(RVA = "0x1DF1590", Offset = "0x1DEFB90", VA = "0x181DF1590")]
	public static int GradientStops(string type)
	{
		return default(int);
	}

	[Token(Token = "0x6000F6C")]
	[Address(RVA = "0x1DF1DE0", Offset = "0x1DF03E0", VA = "0x181DF1DE0")]
	public static string SelectValue(bool hasAccess, bool enabled, string type)
	{
		return null;
	}

	[Token(Token = "0x6000F6D")]
	[Address(RVA = "0x1DF1670", Offset = "0x1DEFC70", VA = "0x181DF1670")]
	public static bool IsEffect(bool enabled, string type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F6E")]
	[Address(RVA = "0x1DF1B30", Offset = "0x1DF0130", VA = "0x181DF1B30")]
	public static string[] PresetColors(string type)
	{
		return null;
	}

	[Token(Token = "0x6000F6F")]
	[Address(RVA = "0x1DF1610", Offset = "0x1DEFC10", VA = "0x181DF1610")]
	private static string Hex(Color color)
	{
		return null;
	}
}
