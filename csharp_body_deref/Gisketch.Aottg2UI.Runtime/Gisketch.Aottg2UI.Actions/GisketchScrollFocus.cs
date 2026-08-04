// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchScrollFocus
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchScrollFocus.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000C0")]
public static class GisketchScrollFocus
{
	[Token(Token = "0x40003D9")]
	private const float DefaultMargin = 12f;

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x3A8CCB0", Offset = "0x3A8CCB0", VA = "0x3A8CCB0")]
	public static void Reveal(GameObject focused, float margin = 12f)
	{
	}

	[Token(Token = "0x600058A")]
	[Address(RVA = "0x3A96640", Offset = "0x3A96640", VA = "0x3A96640")]
	public static bool IsVisible(GameObject focused)
	{
		return default(bool);
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x3A979B0", Offset = "0x3A979B0", VA = "0x3A979B0")]
	private static bool CanScroll(RectTransform target, ScrollRect scroll)
	{
		return default(bool);
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x3A97AF0", Offset = "0x3A97AF0", VA = "0x3A97AF0")]
	private static float VisibilityOffset(RectTransform target, RectTransform viewport, float margin)
	{
		return default(float);
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x3A97BE0", Offset = "0x3A97BE0", VA = "0x3A97BE0")]
	private static float MaxScrollY(ScrollRect scroll)
	{
		return default(float);
	}
}
