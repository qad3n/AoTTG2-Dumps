// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchScrollFocus
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchScrollFocus.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000E5")]
public static class GisketchScrollFocus
{
	[Token(Token = "0x400049C")]
	private const float DefaultMargin = 12f;

	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x1904370", Offset = "0x1902970", VA = "0x181904370")]
	public static void Reveal(GameObject focused, float margin = 12f)
	{
	}

	[Token(Token = "0x60006FB")]
	[Address(RVA = "0x1904040", Offset = "0x1902640", VA = "0x181904040")]
	public static void RevealAtCenter(GameObject focused)
	{
	}

	[Token(Token = "0x60006FC")]
	[Address(RVA = "0x1903D70", Offset = "0x1902370", VA = "0x181903D70")]
	public static bool IsVisible(GameObject focused)
	{
		return default(bool);
	}

	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x1903C60", Offset = "0x1902260", VA = "0x181903C60")]
	private static bool CanScroll(RectTransform target, ScrollRect scroll)
	{
		return default(bool);
	}

	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x1904780", Offset = "0x1902D80", VA = "0x181904780")]
	private static float VisibilityOffset(RectTransform target, RectTransform viewport, float margin)
	{
		return default(float);
	}

	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x1903FA0", Offset = "0x19025A0", VA = "0x181903FA0")]
	private static float MaxScrollY(ScrollRect scroll)
	{
		return default(float);
	}
}
