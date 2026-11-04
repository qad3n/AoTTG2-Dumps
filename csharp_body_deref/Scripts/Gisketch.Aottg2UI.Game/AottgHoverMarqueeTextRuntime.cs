// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgHoverMarqueeTextRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using DG.Tweening;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001EE")]
internal sealed class AottgHoverMarqueeTextRuntime : MonoBehaviour
{
	[Token(Token = "0x4000A57")]
	private const float Gap = 32f;

	[Token(Token = "0x4000A58")]
	private const float PixelsPerSecond = 34f;

	[Token(Token = "0x4000A59")]
	private const float PauseSeconds = 0.45f;

	[Token(Token = "0x4000A5A")]
	[FieldOffset(Offset = "0x20")]
	private TextMeshProUGUI _text;

	[Token(Token = "0x4000A5B")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _textRect;

	[Token(Token = "0x4000A5C")]
	[FieldOffset(Offset = "0x30")]
	private Color _normalColor;

	[Token(Token = "0x4000A5D")]
	[FieldOffset(Offset = "0x40")]
	private Color _activeColor;

	[Token(Token = "0x4000A5E")]
	[FieldOffset(Offset = "0x50")]
	private bool _active;

	[Token(Token = "0x4000A5F")]
	[FieldOffset(Offset = "0x58")]
	private Tween _tween;

	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x23B43D0", Offset = "0x23B29D0", VA = "0x1823B43D0")]
	public void Setup(string value, GisketchStyleDefinition style, GisketchTheme theme, string activeColor)
	{
	}

	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x23B3BD0", Offset = "0x23B21D0", VA = "0x1823B3BD0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x23B3BF0", Offset = "0x23B21F0", VA = "0x1823B3BF0")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000B51")]
	[Address(RVA = "0x23B43C0", Offset = "0x23B29C0", VA = "0x1823B43C0")]
	public void SetActive(bool active)
	{
	}

	[Token(Token = "0x6000B52")]
	[Address(RVA = "0x23B3700", Offset = "0x23B1D00", VA = "0x1823B3700")]
	private void CreateText(GisketchStyleDefinition style, GisketchTheme theme, string activeColor)
	{
	}

	[Token(Token = "0x6000B53")]
	[Address(RVA = "0x23B4190", Offset = "0x23B2790", VA = "0x1823B4190")]
	private void RegisterParent()
	{
	}

	[Token(Token = "0x6000B54")]
	[Address(RVA = "0x23B3C00", Offset = "0x23B2200", VA = "0x1823B3C00")]
	private void RefreshMarquee()
	{
	}

	[Token(Token = "0x6000B55")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AottgHoverMarqueeTextRuntime()
	{
	}
}
