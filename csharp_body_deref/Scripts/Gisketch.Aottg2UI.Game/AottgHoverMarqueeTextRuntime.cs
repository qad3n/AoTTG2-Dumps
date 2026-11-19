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

[Token(Token = "0x2000208")]
internal sealed class AottgHoverMarqueeTextRuntime : MonoBehaviour
{
	[Token(Token = "0x4000ACF")]
	private const float Gap = 32f;

	[Token(Token = "0x4000AD0")]
	private const float PixelsPerSecond = 34f;

	[Token(Token = "0x4000AD1")]
	private const float PauseSeconds = 0.45f;

	[Token(Token = "0x4000AD2")]
	[FieldOffset(Offset = "0x20")]
	private TextMeshProUGUI _text;

	[Token(Token = "0x4000AD3")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _textRect;

	[Token(Token = "0x4000AD4")]
	[FieldOffset(Offset = "0x30")]
	private Color _normalColor;

	[Token(Token = "0x4000AD5")]
	[FieldOffset(Offset = "0x40")]
	private Color _activeColor;

	[Token(Token = "0x4000AD6")]
	[FieldOffset(Offset = "0x50")]
	private bool _active;

	[Token(Token = "0x4000AD7")]
	[FieldOffset(Offset = "0x58")]
	private Tween _tween;

	[Token(Token = "0x6000C12")]
	[Address(RVA = "0x5D84130", Offset = "0x5D83130", VA = "0x5D84130")]
	public void Setup(string value, GisketchStyleDefinition style, GisketchTheme theme, string activeColor)
	{
	}

	[Token(Token = "0x6000C13")]
	[Address(RVA = "0x5D84CD0", Offset = "0x5D83CD0", VA = "0x5D84CD0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000C14")]
	[Address(RVA = "0x5D84CF0", Offset = "0x5D83CF0", VA = "0x5D84CF0")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x5D84D00", Offset = "0x5D83D00", VA = "0x5D84D00")]
	public void SetActive(bool active)
	{
	}

	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x5D841A0", Offset = "0x5D831A0", VA = "0x5D841A0")]
	private void CreateText(GisketchStyleDefinition style, GisketchTheme theme, string activeColor)
	{
	}

	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x5D84640", Offset = "0x5D83640", VA = "0x5D84640")]
	private void RegisterParent()
	{
	}

	[Token(Token = "0x6000C18")]
	[Address(RVA = "0x5D84760", Offset = "0x5D83760", VA = "0x5D84760")]
	private void RefreshMarquee()
	{
	}

	[Token(Token = "0x6000C19")]
	[Address(RVA = "0x5D84E40", Offset = "0x5D83E40", VA = "0x5D84E40")]
	public AottgHoverMarqueeTextRuntime()
	{
	}
}
