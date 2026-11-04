// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TextUtilities
// Update status: CHANGED in this game update
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
	[Address(RVA = "0x3142CF0", Offset = "0x31412F0", VA = "0x183142CF0")]
	private static Vector2 PostProcessMeasuredSize(TextElement te, Vector2 measuredSize, float width, VisualElement.MeasureMode widthMode, float height, VisualElement.MeasureMode heightMode, float pixelsPerPoint)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6002495")]
	[Address(RVA = "0x3142AE0", Offset = "0x31410E0", VA = "0x183142AE0")]
	internal static Vector2 MeasureVisualElementTextSize(TextElement te, string textToMeasure, float width, VisualElement.MeasureMode widthMode, float height, VisualElement.MeasureMode heightMode, [Optional] float? fontsize)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6002496")]
	[Address(RVA = "0x31428D0", Offset = "0x3140ED0", VA = "0x1831428D0")]
	internal static Vector2 MeasureVisualElementTextSize(TextElement te, in UnityEngine.TextCore.Text.RenderedText textToMeasure, float width, VisualElement.MeasureMode widthMode, float height, VisualElement.MeasureMode heightMode, [Optional] float? fontsize)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6002497")]
	[Address(RVA = "0x3141F10", Offset = "0x3140510", VA = "0x183141F10")]
	internal static FontAsset GetFontAsset(VisualElement ve)
	{
		return null;
	}

	[Token(Token = "0x6002498")]
	[Address(RVA = "0x3142800", Offset = "0x3140E00", VA = "0x183142800")]
	internal static bool IsFontAssigned(VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002499")]
	[Address(RVA = "0x31425C0", Offset = "0x3140BC0", VA = "0x1831425C0")]
	internal static TextSettings GetTextSettingsFrom(VisualElement ve)
	{
		return null;
	}

	[Token(Token = "0x600249A")]
	[Address(RVA = "0x3142750", Offset = "0x3140D50", VA = "0x183142750")]
	internal static bool IsAdvancedTextEnabledForPanel(IPanel panel)
	{
		return default(bool);
	}

	[Token(Token = "0x600249B")]
	[Address(RVA = "0x3142650", Offset = "0x3140C50", VA = "0x183142650")]
	internal static bool IsAdvancedTextEnabledForElement(VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x600249C")]
	[Address(RVA = "0x3142120", Offset = "0x3140720", VA = "0x183142120")]
	internal static TextCoreSettings GetTextCoreSettingsForElement(VisualElement ve, bool ignoreColors)
	{
		return default(TextCoreSettings);
	}

	[Token(Token = "0x600249D")]
	[Address(RVA = "0x3142EF0", Offset = "0x31414F0", VA = "0x183142EF0")]
	public static UnityEngine.TextCore.Text.TextWrappingMode toTextWrappingMode(this WhiteSpace whiteSpace, bool isSingleLineInputField)
	{
		return default(UnityEngine.TextCore.Text.TextWrappingMode);
	}

	[Token(Token = "0x600249E")]
	[Address(RVA = "0x3142ED0", Offset = "0x31414D0", VA = "0x183142ED0")]
	public static UnityEngine.TextCore.TextOverflow toTextCore(this TextOverflow textOverflow, OverflowInternal overflow, TextOverflowPosition position)
	{
		return default(UnityEngine.TextCore.TextOverflow);
	}
}
