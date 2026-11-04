// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime
// Update status: CHANGED in this game update
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

[Token(Token = "0x20001F6")]
internal sealed class AottgMarqueeTextRuntime : MonoBehaviour
{
	[Token(Token = "0x4000A73")]
	private const float Gap = 32f;

	[Token(Token = "0x4000A74")]
	private const float PixelsPerSecond = 34f;

	[Token(Token = "0x4000A75")]
	private const float PauseSeconds = 0.7f;

	[Token(Token = "0x4000A76")]
	[FieldOffset(Offset = "0x20")]
	private GisketchUIState _state;

	[Token(Token = "0x4000A77")]
	[FieldOffset(Offset = "0x28")]
	private string _stateKey;

	[Token(Token = "0x4000A78")]
	[FieldOffset(Offset = "0x30")]
	private string _fallback;

	[Token(Token = "0x4000A79")]
	[FieldOffset(Offset = "0x38")]
	private TextMeshProUGUI _text;

	[Token(Token = "0x4000A7A")]
	[FieldOffset(Offset = "0x40")]
	private RectTransform _textRect;

	[Token(Token = "0x4000A7B")]
	[FieldOffset(Offset = "0x48")]
	private Tween _tween;

	[Token(Token = "0x6000B84")]
	[Address(RVA = "0x23B55A0", Offset = "0x23B3BA0", VA = "0x1823B55A0")]
	public void Setup(GisketchUIState state, string stateKey, string fallback, GisketchStyleDefinition style, GisketchTheme theme)
	{
	}

	[Token(Token = "0x6000B85")]
	[Address(RVA = "0x23B4F00", Offset = "0x23B3500", VA = "0x1823B4F00")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000B86")]
	[Address(RVA = "0x23B4FA0", Offset = "0x23B35A0", VA = "0x1823B4FA0")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000B87")]
	[Address(RVA = "0x23B4FB0", Offset = "0x23B35B0", VA = "0x1823B4FB0")]
	private void OnStateChanged(string key)
	{
	}

	[Token(Token = "0x6000B88")]
	[Address(RVA = "0x23B4A40", Offset = "0x23B3040", VA = "0x1823B4A40")]
	private void CreateText(GisketchStyleDefinition style, GisketchTheme theme)
	{
	}

	[Token(Token = "0x6000B89")]
	[Address(RVA = "0x23B54F0", Offset = "0x23B3AF0", VA = "0x1823B54F0")]
	private void SetText(string value)
	{
	}

	[Token(Token = "0x6000B8A")]
	[Address(RVA = "0x23B5020", Offset = "0x23B3620", VA = "0x1823B5020")]
	private void RefreshMarquee()
	{
	}

	[Token(Token = "0x6000B8B")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AottgMarqueeTextRuntime()
	{
	}
}
