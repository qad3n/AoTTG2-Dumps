using DG.Tweening;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200012D")]
internal sealed class AottgHoverMarqueeTextRuntime : MonoBehaviour
{
	[Token(Token = "0x40006F4")]
	private const float Gap = 32f;

	[Token(Token = "0x40006F5")]
	private const float PixelsPerSecond = 34f;

	[Token(Token = "0x40006F6")]
	private const float PauseSeconds = 0.45f;

	[Token(Token = "0x40006F7")]
	[FieldOffset(Offset = "0x20")]
	private TextMeshProUGUI _text;

	[Token(Token = "0x40006F8")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _textRect;

	[Token(Token = "0x40006F9")]
	[FieldOffset(Offset = "0x30")]
	private Color _normalColor;

	[Token(Token = "0x40006FA")]
	[FieldOffset(Offset = "0x40")]
	private Color _activeColor;

	[Token(Token = "0x40006FB")]
	[FieldOffset(Offset = "0x50")]
	private bool _active;

	[Token(Token = "0x40006FC")]
	[FieldOffset(Offset = "0x58")]
	private Tween _tween;

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x40728C0", Offset = "0x40728C0", VA = "0x40728C0")]
	public void Setup(string value, GisketchStyleDefinition style, GisketchTheme theme, string activeColor)
	{
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x4073420", Offset = "0x4073420", VA = "0x4073420")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x4073440", Offset = "0x4073440", VA = "0x4073440")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x4073450", Offset = "0x4073450", VA = "0x4073450")]
	public void SetActive(bool active)
	{
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x4072930", Offset = "0x4072930", VA = "0x4072930")]
	private void CreateText(GisketchStyleDefinition style, GisketchTheme theme, string activeColor)
	{
	}

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x4072DD0", Offset = "0x4072DD0", VA = "0x4072DD0")]
	private void RegisterParent()
	{
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x4072EF0", Offset = "0x4072EF0", VA = "0x4072EF0")]
	private void RefreshMarquee()
	{
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x4073590", Offset = "0x4073590", VA = "0x4073590")]
	public AottgHoverMarqueeTextRuntime()
	{
	}
}
