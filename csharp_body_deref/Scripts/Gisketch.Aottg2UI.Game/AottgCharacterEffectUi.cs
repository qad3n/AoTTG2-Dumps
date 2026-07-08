using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000154")]
internal static class AottgCharacterEffectUi
{
	[Token(Token = "0x40007B7")]
	public const string ColorMode = "Color";

	[Token(Token = "0x40007B8")]
	public const string ColorModeText = "Custom Color";

	[Token(Token = "0x40007B9")]
	public const string TwoColorGradientMode = "TwoColorGradient";

	[Token(Token = "0x40007BA")]
	public const string TwoColorGradientText = "Two-Color Gradient";

	[Token(Token = "0x40007BB")]
	public const string FourColorGradientMode = "FourColorGradient";

	[Token(Token = "0x40007BC")]
	public const string FourColorGradientText = "Four-Color Gradient";

	[Token(Token = "0x40007BD")]
	public const string SupporterTooltipKey = "MainMenu.Profile.SupporterOnlyFeature";

	[Token(Token = "0x40007BE")]
	public const string SupporterTooltip = "This feature is only available for supporters.";

	[Token(Token = "0x6000742")]
	[Address(RVA = "0x40CB360", Offset = "0x40CB360", VA = "0x40CB360")]
	public static GisketchChoiceOptionDefinition[] Options(bool hasAccess)
	{
		return null;
	}

	[Token(Token = "0x6000743")]
	[Address(RVA = "0x40CB830", Offset = "0x40CB830", VA = "0x40CB830")]
	public static bool IsTextColorMode(string type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000744")]
	[Address(RVA = "0x40CB8C0", Offset = "0x40CB8C0", VA = "0x40CB8C0")]
	public static int GradientStops(string type)
	{
		return default(int);
	}

	[Token(Token = "0x6000745")]
	[Address(RVA = "0x40CB930", Offset = "0x40CB930", VA = "0x40CB930")]
	public static string SelectValue(bool hasAccess, bool enabled, string type)
	{
		return null;
	}

	[Token(Token = "0x6000746")]
	[Address(RVA = "0x40CB9D0", Offset = "0x40CB9D0", VA = "0x40CB9D0")]
	public static bool IsEffect(bool enabled, string type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000747")]
	[Address(RVA = "0x40CBA30", Offset = "0x40CBA30", VA = "0x40CBA30")]
	public static string[] PresetColors(string type)
	{
		return null;
	}

	[Token(Token = "0x6000748")]
	[Address(RVA = "0x40CBD00", Offset = "0x40CBD00", VA = "0x40CBD00")]
	private static string Hex(Color color)
	{
		return null;
	}
}
