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
	[Token(Token = "0x4000071")]
	private const float BrushSidePanelContentBlurPixels = 52f;

	[Token(Token = "0x4000072")]
	[FieldOffset(Offset = "0x0")]
	public static bool Enabled;

	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0x4")]
	public static float DurationScale;

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x1889020", Offset = "0x1887620", VA = "0x181889020")]
	public static Tween PlayMainMenuPanel(GameObject go, bool enter, float duration)
	{
		return null;
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x1888800", Offset = "0x1886E00", VA = "0x181888800")]
	private static Tween MainMenuTween(GameObject go, string preset, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x18884F0", Offset = "0x1886AF0", VA = "0x1818884F0")]
	private static Tween MainMenuPanel(RectTransform rect, float duration, bool enter, bool resetEnterStart = true)
	{
		return null;
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x1888070", Offset = "0x1886670", VA = "0x181888070")]
	private static Tween MainMenuLogo(RectTransform rect, float duration, bool enter, Vector2 offset)
	{
		return null;
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x1887D20", Offset = "0x1886320", VA = "0x181887D20")]
	private static Tween LogoImpact(RectTransform rect, float duration)
	{
		return null;
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x1886900", Offset = "0x1884F00", VA = "0x181886900")]
	private static Tween BrushIntro(GameObject go, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x1886B60", Offset = "0x1885160", VA = "0x181886B60")]
	private static Tween BrushSidePanelContentIntro(GameObject go, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x1887A40", Offset = "0x1886040", VA = "0x181887A40")]
	private static Tween HorizontalSurfaceBlur(Image image, float duration, float blurPixels)
	{
		return null;
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x1887590", Offset = "0x1885B90", VA = "0x181887590")]
	private static Tween FooterIconIntro(RectTransform rect, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x188A590", Offset = "0x1888B90", VA = "0x18188A590")]
	private static Tween TipPanel(RectTransform rect, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x1889E20", Offset = "0x1888420", VA = "0x181889E20")]
	private static Tween SlideNoFadeWithOffset(RectTransform rect, float duration, bool enter, Vector2 offset)
	{
		return null;
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x1888FE0", Offset = "0x18875E0", VA = "0x181888FE0")]
	private static float OutCubic(float value)
	{
		return default(float);
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x1889720", Offset = "0x1887D20", VA = "0x181889720")]
	public static Tween PlayViewEnter(GisketchView view)
	{
		return null;
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x1889770", Offset = "0x1887D70", VA = "0x181889770")]
	public static Tween PlayViewExit(GisketchView view)
	{
		return null;
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x1889D00", Offset = "0x1888300", VA = "0x181889D00")]
	public static void ResetViewToRest(GisketchView view)
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x1889130", Offset = "0x1887730", VA = "0x181889130")]
	public static Tween PlayNode(GameObject go, GisketchMotionDefinition motion, bool enter, bool blocksInput = false)
	{
		return null;
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x18891D0", Offset = "0x18877D0", VA = "0x1818891D0")]
	private static Tween PlayTargets(GisketchView view, bool enter)
	{
		return null;
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x1886DE0", Offset = "0x18853E0", VA = "0x181886DE0")]
	private static Tween CreateTween(GameObject go, GisketchMotionDefinition motion, bool enter)
	{
		return null;
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x1886510", Offset = "0x1884B10", VA = "0x181886510")]
	private static Tween Balloon(RectTransform rect, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x18897C0", Offset = "0x1887DC0", VA = "0x1818897C0")]
	private static Tween Pop(Transform target, CanvasGroup group, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x1887420", Offset = "0x1885A20", VA = "0x181887420")]
	private static Tween Fade(CanvasGroup group, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x188A4A0", Offset = "0x1888AA0", VA = "0x18188A4A0")]
	private static Tween Slide(RectTransform rect, float duration, bool enter)
	{
		return null;
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x188A0B0", Offset = "0x18886B0", VA = "0x18188A0B0")]
	private static Tween SlideWithOffset(RectTransform rect, float duration, bool enter, Vector2 offset)
	{
		return null;
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x1888CA0", Offset = "0x18872A0", VA = "0x181888CA0")]
	private static Tween MotionOffsetTween(GisketchLayoutOffset layoutOffset, Vector2 start, Vector2 target, float duration, Ease ease)
	{
		return null;
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x1887370", Offset = "0x1885970", VA = "0x181887370")]
	private static CanvasGroup EnsureCanvasGroup(GameObject go)
	{
		return null;
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x1889B20", Offset = "0x1888120", VA = "0x181889B20")]
	private static void ResetTargetToRest(GisketchMotionTarget target)
	{
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x1887350", Offset = "0x1885950", VA = "0x181887350")]
	private static float Delay(GisketchMotionDefinition motion, int index)
	{
		return default(float);
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x1888F20", Offset = "0x1887520", VA = "0x181888F20")]
	private static int NextGroupIndex(Dictionary<string, int> groupIndexes, GisketchMotionDefinition motion)
	{
		return default(int);
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x1888C80", Offset = "0x1887280", VA = "0x181888C80")]
	private static GisketchMotionDefinition MotionFor(GisketchMotionTarget target, bool enter, bool explicitExitOnly)
	{
		return null;
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x1887940", Offset = "0x1885F40", VA = "0x181887940")]
	private static bool HasExplicitExit(List<GisketchMotionTarget> targets)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x1887A10", Offset = "0x1886010", VA = "0x181887A10")]
	private static bool HasMotion(GisketchMotionDefinition motion)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x1888E70", Offset = "0x1887470", VA = "0x181888E70")]
	private static int MotionOrder(GisketchMotionTarget target, bool enter, bool explicitExitOnly)
	{
		return default(int);
	}
}
