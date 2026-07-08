using Il2CppDummyDll;
using UnityEngine.TextCore.Text;
using UnityEngine.UIElements.UIR;

namespace UnityEngine.UIElements;

[Token(Token = "0x20003ED")]
internal static class TextUtilities
{
	[Token(Token = "0x60018E2")]
	[Address(RVA = "0x4C2DD30", Offset = "0x4C2DD30", VA = "0x4C2DD30")]
	internal static Vector2 MeasureVisualElementTextSize(TextElement te, string textToMeasure, float width, VisualElement.MeasureMode widthMode, float height, VisualElement.MeasureMode heightMode)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60018E3")]
	[Address(RVA = "0x4C2D450", Offset = "0x4C2D450", VA = "0x4C2D450")]
	internal static FontAsset GetFontAsset(VisualElement ve)
	{
		return null;
	}

	[Token(Token = "0x60018E4")]
	[Address(RVA = "0x4C2DEF0", Offset = "0x4C2DEF0", VA = "0x4C2DEF0")]
	internal static bool IsFontAssigned(VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x60018E5")]
	[Address(RVA = "0x4C2D3C0", Offset = "0x4C2D3C0", VA = "0x4C2D3C0")]
	internal static TextSettings GetTextSettingsFrom(VisualElement ve)
	{
		return null;
	}

	[Token(Token = "0x60018E6")]
	[Address(RVA = "0x4C2DBE0", Offset = "0x4C2DBE0", VA = "0x4C2DBE0")]
	internal static float ConvertPixelUnitsToTextCoreRelativeUnits(VisualElement ve, FontAsset fontAsset)
	{
		return default(float);
	}

	[Token(Token = "0x60018E7")]
	[Address(RVA = "0x4C2DFA0", Offset = "0x4C2DFA0", VA = "0x4C2DFA0")]
	internal static TextCoreSettings GetTextCoreSettingsForElement(VisualElement ve)
	{
		return default(TextCoreSettings);
	}
}
