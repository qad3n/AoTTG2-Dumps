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

[Token(Token = "0x200015F")]
internal sealed class AottgHoverMarqueeTextRuntime : MonoBehaviour
{
	[Token(Token = "0x40007B3")]
	private const float Gap = 32f;

	[Token(Token = "0x40007B4")]
	private const float PixelsPerSecond = 34f;

	[Token(Token = "0x40007B5")]
	private const float PauseSeconds = 0.45f;

	[Token(Token = "0x40007B6")]
	[FieldOffset(Offset = "0x20")]
	private TextMeshProUGUI _text;

	[Token(Token = "0x40007B7")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _textRect;

	[Token(Token = "0x40007B8")]
	[FieldOffset(Offset = "0x30")]
	private Color _normalColor;

	[Token(Token = "0x40007B9")]
	[FieldOffset(Offset = "0x40")]
	private Color _activeColor;

	[Token(Token = "0x40007BA")]
	[FieldOffset(Offset = "0x50")]
	private bool _active;

	[Token(Token = "0x40007BB")]
	[FieldOffset(Offset = "0x58")]
	private Tween _tween;

	[Token(Token = "0x60007B4")]
	[Address(RVA = "0x43EA150", Offset = "0x43EA150", VA = "0x43EA150")]
	public void Setup(string value, GisketchStyleDefinition style, GisketchTheme theme, string activeColor)
	{
	}

	[Token(Token = "0x60007B5")]
	[Address(RVA = "0x43EACC0", Offset = "0x43EACC0", VA = "0x43EACC0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60007B6")]
	[Address(RVA = "0x43EACE0", Offset = "0x43EACE0", VA = "0x43EACE0")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x60007B7")]
	[Address(RVA = "0x43EACF0", Offset = "0x43EACF0", VA = "0x43EACF0")]
	public void SetActive(bool active)
	{
	}

	[Token(Token = "0x60007B8")]
	[Address(RVA = "0x43EA1C0", Offset = "0x43EA1C0", VA = "0x43EA1C0")]
	private void CreateText(GisketchStyleDefinition style, GisketchTheme theme, string activeColor)
	{
	}

	[Token(Token = "0x60007B9")]
	[Address(RVA = "0x43EA670", Offset = "0x43EA670", VA = "0x43EA670")]
	private void RegisterParent()
	{
	}

	[Token(Token = "0x60007BA")]
	[Address(RVA = "0x43EA790", Offset = "0x43EA790", VA = "0x43EA790")]
	private void RefreshMarquee()
	{
	}

	[Token(Token = "0x60007BB")]
	[Address(RVA = "0x43EAE30", Offset = "0x43EAE30", VA = "0x43EAE30")]
	public AottgHoverMarqueeTextRuntime()
	{
	}
}
