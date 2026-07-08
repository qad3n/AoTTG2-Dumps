using System.Collections.Generic;
using DG.Tweening;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Tweening;

[Token(Token = "0x200000D")]
public static class GisketchMotion
{
	[Token(Token = "0x4000047")]
	private const float BrushSidePanelContentBlurPixels = 52f;

	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x0")]
	public static bool Enabled;

	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x4")]
	public static float DurationScale;

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x39C6430", Offset = "0x39C6430", VA = "0x39C6430")]
	public static Tween PlayMainMenuPanel(GameObject go, bool enter, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x39C6A30", Offset = "0x39C6A30", VA = "0x39C6A30")]
	private static Tween MainMenuTween(GameObject go, string preset, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x39C6530", Offset = "0x39C6530", VA = "0x39C6530")]
	private static Tween MainMenuPanel(RectTransform rect, float duration, bool enter, bool resetEnterStart = true)
	{
		return null;
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x39C6DF0", Offset = "0x39C6DF0", VA = "0x39C6DF0")]
	private static Tween MainMenuLogo(RectTransform rect, float duration, bool enter, Vector2 offset)
	{
		return null;
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x39C71D0", Offset = "0x39C71D0", VA = "0x39C71D0")]
	private static Tween LogoImpact(RectTransform rect, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x39C7B40", Offset = "0x39C7B40", VA = "0x39C7B40")]
	private static Tween BrushIntro(GameObject go, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x39C7920", Offset = "0x39C7920", VA = "0x39C7920")]
	private static Tween BrushSidePanelContentIntro(GameObject go, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x39C8390", Offset = "0x39C8390", VA = "0x39C8390")]
	private static Tween HorizontalSurfaceBlur(Image image, float duration, float blurPixels)
	{
		return null;
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x39C7500", Offset = "0x39C7500", VA = "0x39C7500")]
	private static Tween FooterIconIntro(RectTransform rect, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x39C7840", Offset = "0x39C7840", VA = "0x39C7840")]
	private static Tween TipPanel(RectTransform rect, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x39C7FA0", Offset = "0x39C7FA0", VA = "0x39C7FA0")]
	private static Tween SlideNoFadeWithOffset(RectTransform rect, float duration, bool enter, Vector2 offset)
	{
		return null;
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x39C8680", Offset = "0x39C8680", VA = "0x39C8680")]
	private static float OutCubic(float value)
	{
		return default(float);
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x39C86B0", Offset = "0x39C86B0", VA = "0x39C86B0")]
	public static Tween PlayViewEnter(GisketchView view)
	{
		return null;
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x39C8C30", Offset = "0x39C8C30", VA = "0x39C8C30")]
	public static Tween PlayViewExit(GisketchView view)
	{
		return null;
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x39C8CA0", Offset = "0x39C8CA0", VA = "0x39C8CA0")]
	public static void ResetViewToRest(GisketchView view)
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x39C8F90", Offset = "0x39C8F90", VA = "0x39C8F90")]
	public static Tween PlayNode(GameObject go, GisketchMotionDefinition motion, bool enter, bool blocksInput = false)
	{
		return null;
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x39C8720", Offset = "0x39C8720", VA = "0x39C8720")]
	private static Tween PlayTargets(GisketchView view, bool enter)
	{
		return null;
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x39C9030", Offset = "0x39C9030", VA = "0x39C9030")]
	private static Tween CreateTween(GameObject go, GisketchMotionDefinition motion, bool enter)
	{
		return null;
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x39C9A70", Offset = "0x39C9A70", VA = "0x39C9A70")]
	private static Tween Balloon(RectTransform rect, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x39C9DF0", Offset = "0x39C9DF0", VA = "0x39C9DF0")]
	private static Tween Pop(Transform target, CanvasGroup group, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x39C8220", Offset = "0x39C8220", VA = "0x39C8220")]
	private static Tween Fade(CanvasGroup group, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x39C99D0", Offset = "0x39C99D0", VA = "0x39C99D0")]
	private static Tween Slide(RectTransform rect, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x39C9790", Offset = "0x39C9790", VA = "0x39C9790")]
	private static Tween SlideWithOffset(RectTransform rect, float duration, bool enter, Vector2 offset)
	{
		return null;
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x39CA120", Offset = "0x39CA120", VA = "0x39CA120")]
	private static Tween MotionOffsetTween(GisketchLayoutOffset layoutOffset, Vector2 start, Vector2 target, float duration, Ease ease)
	{
		return null;
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x39C7D70", Offset = "0x39C7D70", VA = "0x39C7D70")]
	private static CanvasGroup EnsureCanvasGroup(GameObject go)
	{
		return null;
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x39C8DC0", Offset = "0x39C8DC0", VA = "0x39C8DC0")]
	private static void ResetTargetToRest(GisketchMotionTarget target)
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x39C9770", Offset = "0x39C9770", VA = "0x39C9770")]
	private static float Delay(GisketchMotionDefinition motion, int index)
	{
		return default(float);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x39C96B0", Offset = "0x39C96B0", VA = "0x39C96B0")]
	private static int NextGroupIndex(Dictionary<string, int> groupIndexes, GisketchMotionDefinition motion)
	{
		return default(int);
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x39C9690", Offset = "0x39C9690", VA = "0x39C9690")]
	private static GisketchMotionDefinition MotionFor(GisketchMotionTarget target, bool enter, bool explicitExitOnly)
	{
		return null;
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x39C95A0", Offset = "0x39C95A0", VA = "0x39C95A0")]
	private static bool HasExplicitExit(List<GisketchMotionTarget> targets)
	{
		return default(bool);
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x39CA2D0", Offset = "0x39CA2D0", VA = "0x39CA2D0")]
	private static bool HasMotion(GisketchMotionDefinition motion)
	{
		return default(bool);
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x39CA2F0", Offset = "0x39CA2F0", VA = "0x39CA2F0")]
	private static int MotionOrder(GisketchMotionTarget target, bool enter, bool explicitExitOnly)
	{
		return default(int);
	}
}
