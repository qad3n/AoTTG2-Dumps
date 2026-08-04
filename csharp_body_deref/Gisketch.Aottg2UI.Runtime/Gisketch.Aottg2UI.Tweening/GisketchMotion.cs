// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Tweening.GisketchMotion
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[FieldOffset(Offset = "0x0")]
	public static bool Enabled;

	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x4")]
	public static float DurationScale;

	[Token(Token = "0x4000049")]
	private const float BrushSidePanelContentBlurPixels = 52f;

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x3A2F630", Offset = "0x3A2F630", VA = "0x3A2F630")]
	public static Tween PlayViewEnter(GisketchView view)
	{
		return null;
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x3A2FBB0", Offset = "0x3A2FBB0", VA = "0x3A2FBB0")]
	public static Tween PlayViewExit(GisketchView view)
	{
		return null;
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x3A2FC20", Offset = "0x3A2FC20", VA = "0x3A2FC20")]
	public static void ResetViewToRest(GisketchView view)
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x3A2FF10", Offset = "0x3A2FF10", VA = "0x3A2FF10")]
	public static Tween PlayNode(GameObject go, GisketchMotionDefinition motion, bool enter, bool blocksInput = false)
	{
		return null;
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x3A2F6A0", Offset = "0x3A2F6A0", VA = "0x3A2F6A0")]
	private static Tween PlayTargets(GisketchView view, bool enter)
	{
		return null;
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x3A2FFB0", Offset = "0x3A2FFB0", VA = "0x3A2FFB0")]
	private static Tween CreateTween(GameObject go, GisketchMotionDefinition motion, bool enter)
	{
		return null;
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x3A311B0", Offset = "0x3A311B0", VA = "0x3A311B0")]
	private static Tween Balloon(RectTransform rect, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x3A31530", Offset = "0x3A31530", VA = "0x3A31530")]
	private static Tween Pop(Transform target, CanvasGroup group, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x3A31040", Offset = "0x3A31040", VA = "0x3A31040")]
	private static Tween Fade(CanvasGroup group, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x3A30EF0", Offset = "0x3A30EF0", VA = "0x3A30EF0")]
	private static Tween Slide(RectTransform rect, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x3A30CB0", Offset = "0x3A30CB0", VA = "0x3A30CB0")]
	private static Tween SlideWithOffset(RectTransform rect, float duration, bool enter, Vector2 offset)
	{
		return null;
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x3A31860", Offset = "0x3A31860", VA = "0x3A31860")]
	private static Tween MotionOffsetTween(GisketchLayoutOffset layoutOffset, Vector2 start, Vector2 target, float duration, Ease ease)
	{
		return null;
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x3A30F90", Offset = "0x3A30F90", VA = "0x3A30F90")]
	private static CanvasGroup EnsureCanvasGroup(GameObject go)
	{
		return null;
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x3A2FD40", Offset = "0x3A2FD40", VA = "0x3A2FD40")]
	private static void ResetTargetToRest(GisketchMotionTarget target)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x3A308D0", Offset = "0x3A308D0", VA = "0x3A308D0")]
	private static float Delay(GisketchMotionDefinition motion, int index)
	{
		return default(float);
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x3A30810", Offset = "0x3A30810", VA = "0x3A30810")]
	private static int NextGroupIndex(Dictionary<string, int> groupIndexes, GisketchMotionDefinition motion)
	{
		return default(int);
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x3A307F0", Offset = "0x3A307F0", VA = "0x3A307F0")]
	private static GisketchMotionDefinition MotionFor(GisketchMotionTarget target, bool enter, bool explicitExitOnly)
	{
		return null;
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x3A30700", Offset = "0x3A30700", VA = "0x3A30700")]
	private static bool HasExplicitExit(List<GisketchMotionTarget> targets)
	{
		return default(bool);
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x3A31A10", Offset = "0x3A31A10", VA = "0x3A31A10")]
	private static bool HasMotion(GisketchMotionDefinition motion)
	{
		return default(bool);
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x3A31A30", Offset = "0x3A31A30", VA = "0x3A31A30")]
	private static int MotionOrder(GisketchMotionTarget target, bool enter, bool explicitExitOnly)
	{
		return default(int);
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x3A31AC0", Offset = "0x3A31AC0", VA = "0x3A31AC0")]
	public static Tween PlayMainMenuPanel(GameObject go, bool enter, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x3A308F0", Offset = "0x3A308F0", VA = "0x3A308F0")]
	private static Tween MainMenuTween(GameObject go, string preset, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x3A31BC0", Offset = "0x3A31BC0", VA = "0x3A31BC0")]
	private static Tween MainMenuPanel(RectTransform rect, float duration, bool enter, bool resetEnterStart = true)
	{
		return null;
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x3A31EE0", Offset = "0x3A31EE0", VA = "0x3A31EE0")]
	private static Tween MainMenuLogo(RectTransform rect, float duration, bool enter, Vector2 offset)
	{
		return null;
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x3A322C0", Offset = "0x3A322C0", VA = "0x3A322C0")]
	private static Tween LogoImpact(RectTransform rect, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x3A32C30", Offset = "0x3A32C30", VA = "0x3A32C30")]
	private static Tween BrushIntro(GameObject go, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x3A32A10", Offset = "0x3A32A10", VA = "0x3A32A10")]
	private static Tween BrushSidePanelContentIntro(GameObject go, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x3A33260", Offset = "0x3A33260", VA = "0x3A33260")]
	private static Tween HorizontalSurfaceBlur(Image image, float duration, float blurPixels)
	{
		return null;
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x3A325F0", Offset = "0x3A325F0", VA = "0x3A325F0")]
	private static Tween FooterIconIntro(RectTransform rect, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x3A32930", Offset = "0x3A32930", VA = "0x3A32930")]
	private static Tween TipPanel(RectTransform rect, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x3A32FE0", Offset = "0x3A32FE0", VA = "0x3A32FE0")]
	private static Tween SlideNoFadeWithOffset(RectTransform rect, float duration, bool enter, Vector2 offset)
	{
		return null;
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x3A33550", Offset = "0x3A33550", VA = "0x3A33550")]
	private static float OutCubic(float value)
	{
		return default(float);
	}
}
