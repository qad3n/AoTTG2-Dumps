// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterEffectUi
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterEffectUi.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002E8")]
internal static class AottgCharacterEffectUi
{
	[Token(Token = "0x4000EB5")]
	public const string ColorMode = "Color";

	[Token(Token = "0x4000EB6")]
	public const string TwoColorGradientMode = "TwoColorGradient";

	[Token(Token = "0x4000EB7")]
	public const string FourColorGradientMode = "FourColorGradient";

	[Token(Token = "0x4000EB8")]
	private const string EffectKeyPrefix = "MainMenu.Profile.Effect.";

	[Token(Token = "0x4000EB9")]
	public const string SupporterTooltipKey = "MainMenu.Profile.SupporterOnlyFeature";

	[Token(Token = "0x60011B7")]
	[Address(RVA = "0x57D8B90", Offset = "0x57D7B90", VA = "0x57D8B90")]
	public static GisketchChoiceOptionDefinition[] Options(bool hasAccess)
	{
		return null;
	}

	[Token(Token = "0x60011B8")]
	[Address(RVA = "0x57D8FA0", Offset = "0x57D7FA0", VA = "0x57D8FA0")]
	private static GisketchChoiceOptionDefinition Option(string value)
	{
		return null;
	}

	[Token(Token = "0x60011B9")]
	[Address(RVA = "0x57D9020", Offset = "0x57D8020", VA = "0x57D9020")]
	private static GisketchChoiceOptionDefinition Option(string value, string text)
	{
		return null;
	}

	[Token(Token = "0x60011BA")]
	[Address(RVA = "0x57D90D0", Offset = "0x57D80D0", VA = "0x57D90D0")]
	public static bool IsTextColorMode(string type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011BB")]
	[Address(RVA = "0x57D9160", Offset = "0x57D8160", VA = "0x57D9160")]
	public static int GradientStops(string type)
	{
		return default(int);
	}

	[Token(Token = "0x60011BC")]
	[Address(RVA = "0x57D91D0", Offset = "0x57D81D0", VA = "0x57D91D0")]
	public static string SelectValue(bool hasAccess, bool enabled, string type)
	{
		return null;
	}

	[Token(Token = "0x60011BD")]
	[Address(RVA = "0x57D9270", Offset = "0x57D8270", VA = "0x57D9270")]
	public static bool IsEffect(bool enabled, string type)
	{
		return default(bool);
	}

	[Token(Token = "0x60011BE")]
	[Address(RVA = "0x57D92D0", Offset = "0x57D82D0", VA = "0x57D92D0")]
	public static string[] PresetColors(string type)
	{
		return null;
	}

	[Token(Token = "0x60011BF")]
	[Address(RVA = "0x57D95E0", Offset = "0x57D85E0", VA = "0x57D95E0")]
	private static string Hex(Color color)
	{
		return null;
	}
}
