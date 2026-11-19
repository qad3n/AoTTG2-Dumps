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

[Token(Token = "0x2000016")]
public static class GisketchMotion
{
	[Token(Token = "0x4000072")]
	private const float BrushSidePanelContentBlurPixels = 52f;

	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0x0")]
	public static bool Enabled;

	[Token(Token = "0x4000074")]
	[FieldOffset(Offset = "0x4")]
	public static float DurationScale;

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x5226340", Offset = "0x5225340", VA = "0x5226340")]
	public static Tween PlayMainMenuPanel(GameObject go, bool enter, float duration)
	{
		return null;
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x5226960", Offset = "0x5225960", VA = "0x5226960")]
	private static Tween MainMenuTween(GameObject go, string preset, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x5226440", Offset = "0x5225440", VA = "0x5226440")]
	private static Tween MainMenuPanel(RectTransform rect, float duration, bool enter, bool resetEnterStart = true)
	{
		return null;
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x5226D20", Offset = "0x5225D20", VA = "0x5226D20")]
	private static Tween MainMenuLogo(RectTransform rect, float duration, bool enter, Vector2 offset)
	{
		return null;
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x5227110", Offset = "0x5226110", VA = "0x5227110")]
	private static Tween LogoImpact(RectTransform rect, float duration)
	{
		return null;
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x5227AD0", Offset = "0x5226AD0", VA = "0x5227AD0")]
	private static Tween BrushIntro(GameObject go, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x5227890", Offset = "0x5226890", VA = "0x5227890")]
	private static Tween BrushSidePanelContentIntro(GameObject go, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x5228350", Offset = "0x5227350", VA = "0x5228350")]
	private static Tween HorizontalSurfaceBlur(Image image, float duration, float blurPixels)
	{
		return null;
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x5227430", Offset = "0x5226430", VA = "0x5227430")]
	private static Tween FooterIconIntro(RectTransform rect, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x5227770", Offset = "0x5226770", VA = "0x5227770")]
	private static Tween TipPanel(RectTransform rect, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x5227F50", Offset = "0x5226F50", VA = "0x5227F50")]
	private static Tween SlideNoFadeWithOffset(RectTransform rect, float duration, bool enter, Vector2 offset)
	{
		return null;
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x5228640", Offset = "0x5227640", VA = "0x5228640")]
	private static float OutCubic(float value)
	{
		return default(float);
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x5228670", Offset = "0x5227670", VA = "0x5228670")]
	public static Tween PlayViewEnter(GisketchView view)
	{
		return null;
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x5228BC0", Offset = "0x5227BC0", VA = "0x5228BC0")]
	public static Tween PlayViewExit(GisketchView view)
	{
		return null;
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x5228C30", Offset = "0x5227C30", VA = "0x5228C30")]
	public static void ResetViewToRest(GisketchView view)
	{
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x5228EE0", Offset = "0x5227EE0", VA = "0x5228EE0")]
	public static Tween PlayNode(GameObject go, GisketchMotionDefinition motion, bool enter, bool blocksInput = false)
	{
		return null;
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x52286E0", Offset = "0x52276E0", VA = "0x52286E0")]
	private static Tween PlayTargets(GisketchView view, bool enter)
	{
		return null;
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x5228F80", Offset = "0x5227F80", VA = "0x5228F80")]
	private static Tween CreateTween(GameObject go, GisketchMotionDefinition motion, bool enter)
	{
		return null;
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x52299E0", Offset = "0x52289E0", VA = "0x52299E0")]
	private static Tween Balloon(RectTransform rect, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x5229D50", Offset = "0x5228D50", VA = "0x5229D50")]
	private static Tween Pop(Transform target, CanvasGroup group, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x52281E0", Offset = "0x52271E0", VA = "0x52281E0")]
	private static Tween Fade(CanvasGroup group, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x5229940", Offset = "0x5228940", VA = "0x5229940")]
	private static Tween Slide(RectTransform rect, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x52296E0", Offset = "0x52286E0", VA = "0x52296E0")]
	private static Tween SlideWithOffset(RectTransform rect, float duration, bool enter, Vector2 offset)
	{
		return null;
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x522A070", Offset = "0x5229070", VA = "0x522A070")]
	private static Tween MotionOffsetTween(GisketchLayoutOffset layoutOffset, Vector2 start, Vector2 target, float duration, Ease ease)
	{
		return null;
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x5227D20", Offset = "0x5226D20", VA = "0x5227D20")]
	private static CanvasGroup EnsureCanvasGroup(GameObject go)
	{
		return null;
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x5228D10", Offset = "0x5227D10", VA = "0x5228D10")]
	private static void ResetTargetToRest(GisketchMotionTarget target)
	{
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x52296C0", Offset = "0x52286C0", VA = "0x52296C0")]
	private static float Delay(GisketchMotionDefinition motion, int index)
	{
		return default(float);
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x5229600", Offset = "0x5228600", VA = "0x5229600")]
	private static int NextGroupIndex(Dictionary<string, int> groupIndexes, GisketchMotionDefinition motion)
	{
		return default(int);
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x52295E0", Offset = "0x52285E0", VA = "0x52295E0")]
	private static GisketchMotionDefinition MotionFor(GisketchMotionTarget target, bool enter, bool explicitExitOnly)
	{
		return null;
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x52294F0", Offset = "0x52284F0", VA = "0x52294F0")]
	private static bool HasExplicitExit(List<GisketchMotionTarget> targets)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x522A220", Offset = "0x5229220", VA = "0x522A220")]
	private static bool HasMotion(GisketchMotionDefinition motion)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x522A240", Offset = "0x5229240", VA = "0x522A240")]
	private static int MotionOrder(GisketchMotionTarget target, bool enter, bool explicitExitOnly)
	{
		return default(int);
	}
}
