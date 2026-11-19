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

[Token(Token = "0x2000210")]
internal sealed class AottgMarqueeTextRuntime : MonoBehaviour
{
	[Token(Token = "0x4000AEB")]
	private const float Gap = 32f;

	[Token(Token = "0x4000AEC")]
	private const float PixelsPerSecond = 34f;

	[Token(Token = "0x4000AED")]
	private const float PauseSeconds = 0.7f;

	[Token(Token = "0x4000AEE")]
	[FieldOffset(Offset = "0x20")]
	private GisketchUIState _state;

	[Token(Token = "0x4000AEF")]
	[FieldOffset(Offset = "0x28")]
	private string _stateKey;

	[Token(Token = "0x4000AF0")]
	[FieldOffset(Offset = "0x30")]
	private string _fallback;

	[Token(Token = "0x4000AF1")]
	[FieldOffset(Offset = "0x38")]
	private TextMeshProUGUI _text;

	[Token(Token = "0x4000AF2")]
	[FieldOffset(Offset = "0x40")]
	private RectTransform _textRect;

	[Token(Token = "0x4000AF3")]
	[FieldOffset(Offset = "0x48")]
	private Tween _tween;

	[Token(Token = "0x6000C48")]
	[Address(RVA = "0x5D86B60", Offset = "0x5D85B60", VA = "0x5D86B60")]
	public void Setup(GisketchUIState state, string stateKey, string fallback, GisketchStyleDefinition style, GisketchTheme theme)
	{
	}

	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x5D87170", Offset = "0x5D86170", VA = "0x5D87170")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x5D87200", Offset = "0x5D86200", VA = "0x5D87200")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x5D876C0", Offset = "0x5D866C0", VA = "0x5D876C0")]
	private void OnStateChanged(string key)
	{
	}

	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x5D86C80", Offset = "0x5D85C80", VA = "0x5D86C80")]
	private void CreateText(GisketchStyleDefinition style, GisketchTheme theme)
	{
	}

	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x5D870C0", Offset = "0x5D860C0", VA = "0x5D870C0")]
	private void SetText(string value)
	{
	}

	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x5D87210", Offset = "0x5D86210", VA = "0x5D87210")]
	private void RefreshMarquee()
	{
	}

	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x5D87720", Offset = "0x5D86720", VA = "0x5D87720")]
	public AottgMarqueeTextRuntime()
	{
	}
}
