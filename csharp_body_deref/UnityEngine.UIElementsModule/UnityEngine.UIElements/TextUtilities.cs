// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TextUtilities
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.TextCore;
using UnityEngine.TextCore.Text;
using UnityEngine.UIElements.UIR;

namespace UnityEngine.UIElements;

[Token(Token = "0x20004AB")]
internal static class TextUtilities
{
	[Token(Token = "0x6002494")]
	[Address(RVA = "0x6B42850", Offset = "0x6B41850", VA = "0x6B42850")]
	private static Vector2 PostProcessMeasuredSize(TextElement te, Vector2 measuredSize, float width, VisualElement.MeasureMode widthMode, float height, VisualElement.MeasureMode heightMode, float pixelsPerPoint)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6002495")]
	[Address(RVA = "0x6B42A10", Offset = "0x6B41A10", VA = "0x6B42A10")]
	internal static Vector2 MeasureVisualElementTextSize(TextElement te, string textToMeasure, float width, VisualElement.MeasureMode widthMode, float height, VisualElement.MeasureMode heightMode, [Optional] float? fontsize)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6002496")]
	[Address(RVA = "0x6B42CE0", Offset = "0x6B41CE0", VA = "0x6B42CE0")]
	internal static Vector2 MeasureVisualElementTextSize(TextElement te, in UnityEngine.TextCore.Text.RenderedText textToMeasure, float width, VisualElement.MeasureMode widthMode, float height, VisualElement.MeasureMode heightMode, [Optional] float? fontsize)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6002497")]
	[Address(RVA = "0x6B42EF0", Offset = "0x6B41EF0", VA = "0x6B42EF0")]
	internal static FontAsset GetFontAsset(VisualElement ve)
	{
		return null;
	}

	[Token(Token = "0x6002498")]
	[Address(RVA = "0x6B42C30", Offset = "0x6B41C30", VA = "0x6B42C30")]
	internal static bool IsFontAssigned(VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002499")]
	[Address(RVA = "0x6B43050", Offset = "0x6B42050", VA = "0x6B43050")]
	internal static TextSettings GetTextSettingsFrom(VisualElement ve)
	{
		return null;
	}

	[Token(Token = "0x600249A")]
	[Address(RVA = "0x6B430E0", Offset = "0x6B420E0", VA = "0x6B430E0")]
	internal static bool IsAdvancedTextEnabledForPanel(IPanel panel)
	{
		return default(bool);
	}

	[Token(Token = "0x600249B")]
	[Address(RVA = "0x6B40D90", Offset = "0x6B3FD90", VA = "0x6B40D90")]
	internal static bool IsAdvancedTextEnabledForElement(VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x600249C")]
	[Address(RVA = "0x6B43190", Offset = "0x6B42190", VA = "0x6B43190")]
	internal static TextCoreSettings GetTextCoreSettingsForElement(VisualElement ve, bool ignoreColors)
	{
		return default(TextCoreSettings);
	}

	[Token(Token = "0x600249D")]
	[Address(RVA = "0x6B43680", Offset = "0x6B42680", VA = "0x6B43680")]
	public static UnityEngine.TextCore.Text.TextWrappingMode toTextWrappingMode(this WhiteSpace whiteSpace, bool isSingleLineInputField)
	{
		return default(UnityEngine.TextCore.Text.TextWrappingMode);
	}

	[Token(Token = "0x600249E")]
	[Address(RVA = "0x6B436C0", Offset = "0x6B426C0", VA = "0x6B436C0")]
	public static UnityEngine.TextCore.TextOverflow toTextCore(this TextOverflow textOverflow, OverflowInternal overflow, TextOverflowPosition position)
	{
		return default(UnityEngine.TextCore.TextOverflow);
	}
}
