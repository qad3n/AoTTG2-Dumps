using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000BB")]
public static class GisketchScrollFocus
{
	[Token(Token = "0x40003A8")]
	private const float DefaultMargin = 12f;

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x3A20AF0", Offset = "0x3A20AF0", VA = "0x3A20AF0")]
	public static void Reveal(GameObject focused, float margin = 12f)
	{
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x3A29C20", Offset = "0x3A29C20", VA = "0x3A29C20")]
	public static bool IsVisible(GameObject focused)
	{
		return default(bool);
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x3A2AE80", Offset = "0x3A2AE80", VA = "0x3A2AE80")]
	private static bool CanScroll(RectTransform target, ScrollRect scroll)
	{
		return default(bool);
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x3A2AFC0", Offset = "0x3A2AFC0", VA = "0x3A2AFC0")]
	private static float VisibilityOffset(RectTransform target, RectTransform viewport, float margin)
	{
		return default(float);
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x3A2B0B0", Offset = "0x3A2B0B0", VA = "0x3A2B0B0")]
	private static float MaxScrollY(ScrollRect scroll)
	{
		return default(float);
	}
}
