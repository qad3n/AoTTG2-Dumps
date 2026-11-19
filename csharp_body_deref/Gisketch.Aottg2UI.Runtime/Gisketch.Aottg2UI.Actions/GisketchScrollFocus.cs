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

[Token(Token = "0x20000EB")]
public static class GisketchScrollFocus
{
	[Token(Token = "0x40004C3")]
	private const float DefaultMargin = 12f;

	[Token(Token = "0x6000748")]
	[Address(RVA = "0x52975C0", Offset = "0x52965C0", VA = "0x52975C0")]
	public static void Reveal(GameObject focused, float margin = 12f)
	{
	}

	[Token(Token = "0x6000749")]
	[Address(RVA = "0x52A4710", Offset = "0x52A3710", VA = "0x52A4710")]
	public static void RevealAtCenter(GameObject focused)
	{
	}

	[Token(Token = "0x600074A")]
	[Address(RVA = "0x52A1D80", Offset = "0x52A0D80", VA = "0x52A1D80")]
	public static bool IsVisible(GameObject focused)
	{
		return default(bool);
	}

	[Token(Token = "0x600074B")]
	[Address(RVA = "0x52A4360", Offset = "0x52A3360", VA = "0x52A4360")]
	private static bool CanScroll(RectTransform target, ScrollRect scroll)
	{
		return default(bool);
	}

	[Token(Token = "0x600074C")]
	[Address(RVA = "0x52A44D0", Offset = "0x52A34D0", VA = "0x52A44D0")]
	private static float VisibilityOffset(RectTransform target, RectTransform viewport, float margin)
	{
		return default(float);
	}

	[Token(Token = "0x600074D")]
	[Address(RVA = "0x52A4680", Offset = "0x52A3680", VA = "0x52A4680")]
	private static float MaxScrollY(ScrollRect scroll)
	{
		return default(float);
	}
}
