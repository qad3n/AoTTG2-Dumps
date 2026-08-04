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

[Token(Token = "0x2000186")]
internal static class AottgCharacterEffectUi
{
	[Token(Token = "0x4000878")]
	public const string ColorMode = "Color";

	[Token(Token = "0x4000879")]
	public const string ColorModeText = "Custom Color";

	[Token(Token = "0x400087A")]
	public const string TwoColorGradientMode = "TwoColorGradient";

	[Token(Token = "0x400087B")]
	public const string TwoColorGradientText = "Two-Color Gradient";

	[Token(Token = "0x400087C")]
	public const string FourColorGradientMode = "FourColorGradient";

	[Token(Token = "0x400087D")]
	public const string FourColorGradientText = "Four-Color Gradient";

	[Token(Token = "0x400087E")]
	public const string SupporterTooltipKey = "MainMenu.Profile.SupporterOnlyFeature";

	[Token(Token = "0x400087F")]
	public const string SupporterTooltip = "This feature is only available for supporters.";

	[Token(Token = "0x60008B5")]
	[Address(RVA = "0x43FC840", Offset = "0x43FC840", VA = "0x43FC840")]
	public static GisketchChoiceOptionDefinition[] Options(bool hasAccess)
	{
		return null;
	}

	[Token(Token = "0x60008B6")]
	[Address(RVA = "0x43FCD10", Offset = "0x43FCD10", VA = "0x43FCD10")]
	public static bool IsTextColorMode(string type)
	{
		return default(bool);
	}

	[Token(Token = "0x60008B7")]
	[Address(RVA = "0x43FCDA0", Offset = "0x43FCDA0", VA = "0x43FCDA0")]
	public static int GradientStops(string type)
	{
		return default(int);
	}

	[Token(Token = "0x60008B8")]
	[Address(RVA = "0x43FCE10", Offset = "0x43FCE10", VA = "0x43FCE10")]
	public static string SelectValue(bool hasAccess, bool enabled, string type)
	{
		return null;
	}

	[Token(Token = "0x60008B9")]
	[Address(RVA = "0x43FCEB0", Offset = "0x43FCEB0", VA = "0x43FCEB0")]
	public static bool IsEffect(bool enabled, string type)
	{
		return default(bool);
	}

	[Token(Token = "0x60008BA")]
	[Address(RVA = "0x43FCF10", Offset = "0x43FCF10", VA = "0x43FCF10")]
	public static string[] PresetColors(string type)
	{
		return null;
	}

	[Token(Token = "0x60008BB")]
	[Address(RVA = "0x43FD1E0", Offset = "0x43FD1E0", VA = "0x43FD1E0")]
	private static string Hex(Color color)
	{
		return null;
	}
}
