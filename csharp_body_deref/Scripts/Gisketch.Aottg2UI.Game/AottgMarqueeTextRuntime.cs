// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgMarqueeTextRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using DG.Tweening;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.State;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000167")]
internal sealed class AottgMarqueeTextRuntime : MonoBehaviour
{
	[Token(Token = "0x40007CE")]
	private const float Gap = 32f;

	[Token(Token = "0x40007CF")]
	private const float PixelsPerSecond = 34f;

	[Token(Token = "0x40007D0")]
	private const float PauseSeconds = 0.7f;

	[Token(Token = "0x40007D1")]
	[FieldOffset(Offset = "0x20")]
	private GisketchUIState _state;

	[Token(Token = "0x40007D2")]
	[FieldOffset(Offset = "0x28")]
	private string _stateKey;

	[Token(Token = "0x40007D3")]
	[FieldOffset(Offset = "0x30")]
	private TextMeshProUGUI _text;

	[Token(Token = "0x40007D4")]
	[FieldOffset(Offset = "0x38")]
	private RectTransform _textRect;

	[Token(Token = "0x40007D5")]
	[FieldOffset(Offset = "0x40")]
	private Tween _tween;

	[Token(Token = "0x60007E9")]
	[Address(RVA = "0x43ECA80", Offset = "0x43ECA80", VA = "0x43ECA80")]
	public void Setup(GisketchUIState state, string stateKey, GisketchStyleDefinition style, GisketchTheme theme)
	{
	}

	[Token(Token = "0x60007EA")]
	[Address(RVA = "0x43ED0A0", Offset = "0x43ED0A0", VA = "0x43ED0A0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60007EB")]
	[Address(RVA = "0x43ED130", Offset = "0x43ED130", VA = "0x43ED130")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x60007EC")]
	[Address(RVA = "0x43ED5A0", Offset = "0x43ED5A0", VA = "0x43ED5A0")]
	private void OnStateChanged(string key)
	{
	}

	[Token(Token = "0x60007ED")]
	[Address(RVA = "0x43ECB90", Offset = "0x43ECB90", VA = "0x43ECB90")]
	private void CreateText(GisketchStyleDefinition style, GisketchTheme theme)
	{
	}

	[Token(Token = "0x60007EE")]
	[Address(RVA = "0x43ECFF0", Offset = "0x43ECFF0", VA = "0x43ECFF0")]
	private void SetText(string value)
	{
	}

	[Token(Token = "0x60007EF")]
	[Address(RVA = "0x43ED140", Offset = "0x43ED140", VA = "0x43ED140")]
	private void RefreshMarquee()
	{
	}

	[Token(Token = "0x60007F0")]
	[Address(RVA = "0x43ED600", Offset = "0x43ED600", VA = "0x43ED600")]
	public AottgMarqueeTextRuntime()
	{
	}
}
