// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgServerSelectMapRuntime
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectMapRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using DG.Tweening;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002E0")]
internal sealed class AottgServerSelectMapRuntime : MonoBehaviour
{
	[Token(Token = "0x4000E82")]
	private const string BrushSprite = "UI/Sprites/Elements/Brush";

	[Token(Token = "0x4000E83")]
	private const string LabelFont = "menuText";

	[Token(Token = "0x4000E84")]
	private const float MapAspect = 1.7297298f;

	[Token(Token = "0x4000E85")]
	private const float MapAlpha = 0.12f;

	[Token(Token = "0x4000E86")]
	private const float HighlightAlpha = 0.85f;

	[Token(Token = "0x4000E87")]
	private const float RegionHitAlpha = 0.5f;

	[Token(Token = "0x4000E88")]
	private const float TransitionSeconds = 0.2f;

	[Token(Token = "0x4000E89")]
	private const float DesignHeight = 1080f;

	[Token(Token = "0x4000E8A")]
	private const float ViewportMargin = 48f;

	[Token(Token = "0x4000E8B")]
	private const float LabelFontSize = 52f;

	[Token(Token = "0x4000E8C")]
	private const float LabelHeight = 76f;

	[Token(Token = "0x4000E8D")]
	private const float LabelPaddingX = 36f;

	[Token(Token = "0x4000E8E")]
	private const float LabelFocusBlend = 0.3f;

	[Token(Token = "0x4000E8F")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _rect;

	[Token(Token = "0x4000E90")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _viewport;

	[Token(Token = "0x4000E91")]
	[FieldOffset(Offset = "0x30")]
	private Image[] _highlights;

	[Token(Token = "0x4000E92")]
	[FieldOffset(Offset = "0x38")]
	private Image[] _labels;

	[Token(Token = "0x4000E93")]
	[FieldOffset(Offset = "0x40")]
	private float[] _fromAlpha;

	[Token(Token = "0x4000E94")]
	[FieldOffset(Offset = "0x48")]
	private Color _highlightColor;

	[Token(Token = "0x4000E95")]
	[FieldOffset(Offset = "0x58")]
	private Color _labelFocusColor;

	[Token(Token = "0x4000E96")]
	[FieldOffset(Offset = "0x68")]
	private Tween _tween;

	[Token(Token = "0x4000E97")]
	[FieldOffset(Offset = "0x70")]
	private int _focused;

	[Token(Token = "0x6001167")]
	[Address(RVA = "0x57D3350", Offset = "0x57D2350", VA = "0x57D3350")]
	public void Setup(Color mapColor, Color highlightColor, Color labelTextColor)
	{
	}

	[Token(Token = "0x6001168")]
	[Address(RVA = "0x57D4310", Offset = "0x57D3310", VA = "0x57D4310")]
	public void Focus(int index)
	{
	}

	[Token(Token = "0x6001169")]
	[Address(RVA = "0x57D44F0", Offset = "0x57D34F0", VA = "0x57D44F0")]
	public void Release(int index)
	{
	}

	[Token(Token = "0x600116A")]
	[Address(RVA = "0x57D4510", Offset = "0x57D3510", VA = "0x57D4510")]
	public void Connect(int index)
	{
	}

	[Token(Token = "0x600116B")]
	[Address(RVA = "0x57D4670", Offset = "0x57D3670", VA = "0x57D4670")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x600116C")]
	[Address(RVA = "0x57D4780", Offset = "0x57D3780", VA = "0x57D4780")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600116D")]
	[Address(RVA = "0x57D4850", Offset = "0x57D3850", VA = "0x57D4850")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600116E")]
	[Address(RVA = "0x57D3BF0", Offset = "0x57D2BF0", VA = "0x57D3BF0")]
	private Image CreateHighlight(RectTransform map, AottgServerRegion region, int index)
	{
		return null;
	}

	[Token(Token = "0x600116F")]
	[Address(RVA = "0x57D3DA0", Offset = "0x57D2DA0", VA = "0x57D3DA0")]
	private Image CreateLabel(RectTransform map, AottgServerRegion region, int index, Color textColor)
	{
		return null;
	}

	[Token(Token = "0x6001170")]
	[Address(RVA = "0x57D4260", Offset = "0x57D3260", VA = "0x57D4260")]
	private void UpdateViewport()
	{
	}

	[Token(Token = "0x6001171")]
	[Address(RVA = "0x57D4320", Offset = "0x57D3320", VA = "0x57D4320")]
	private void AnimateToFocus()
	{
	}

	[Token(Token = "0x6001172")]
	[Address(RVA = "0x57D48B0", Offset = "0x57D38B0", VA = "0x57D48B0")]
	private void ApplyTransition(float t)
	{
	}

	[Token(Token = "0x6001173")]
	[Address(RVA = "0x57D38D0", Offset = "0x57D28D0", VA = "0x57D38D0")]
	private static RectTransform CreateRect(string name, Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6001174")]
	[Address(RVA = "0x57D3B10", Offset = "0x57D2B10", VA = "0x57D3B10")]
	private static Image AddImage(GameObject go, string sprite, Color color)
	{
		return null;
	}

	[Token(Token = "0x6001175")]
	[Address(RVA = "0x57D4840", Offset = "0x57D3840", VA = "0x57D4840")]
	private static Color WithAlpha(Color color, float alpha)
	{
		return default(Color);
	}

	[Token(Token = "0x6001176")]
	[Address(RVA = "0x57D4980", Offset = "0x57D3980", VA = "0x57D4980")]
	public AottgServerSelectMapRuntime()
	{
	}
}
