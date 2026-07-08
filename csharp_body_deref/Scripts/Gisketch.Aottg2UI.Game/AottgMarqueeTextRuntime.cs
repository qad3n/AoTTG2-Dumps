using DG.Tweening;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.State;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000135")]
internal sealed class AottgMarqueeTextRuntime : MonoBehaviour
{
	[Token(Token = "0x400070F")]
	private const float Gap = 32f;

	[Token(Token = "0x4000710")]
	private const float PixelsPerSecond = 34f;

	[Token(Token = "0x4000711")]
	private const float PauseSeconds = 0.7f;

	[Token(Token = "0x4000712")]
	[FieldOffset(Offset = "0x20")]
	private GisketchUIState _state;

	[Token(Token = "0x4000713")]
	[FieldOffset(Offset = "0x28")]
	private string _stateKey;

	[Token(Token = "0x4000714")]
	[FieldOffset(Offset = "0x30")]
	private TextMeshProUGUI _text;

	[Token(Token = "0x4000715")]
	[FieldOffset(Offset = "0x38")]
	private RectTransform _textRect;

	[Token(Token = "0x4000716")]
	[FieldOffset(Offset = "0x40")]
	private Tween _tween;

	[Token(Token = "0x600067C")]
	[Address(RVA = "0x40751E0", Offset = "0x40751E0", VA = "0x40751E0")]
	public void Setup(GisketchUIState state, string stateKey, GisketchStyleDefinition style, GisketchTheme theme)
	{
	}

	[Token(Token = "0x600067D")]
	[Address(RVA = "0x4075800", Offset = "0x4075800", VA = "0x4075800")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600067E")]
	[Address(RVA = "0x4075890", Offset = "0x4075890", VA = "0x4075890")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x600067F")]
	[Address(RVA = "0x4075D00", Offset = "0x4075D00", VA = "0x4075D00")]
	private void OnStateChanged(string key)
	{
	}

	[Token(Token = "0x6000680")]
	[Address(RVA = "0x40752F0", Offset = "0x40752F0", VA = "0x40752F0")]
	private void CreateText(GisketchStyleDefinition style, GisketchTheme theme)
	{
	}

	[Token(Token = "0x6000681")]
	[Address(RVA = "0x4075750", Offset = "0x4075750", VA = "0x4075750")]
	private void SetText(string value)
	{
	}

	[Token(Token = "0x6000682")]
	[Address(RVA = "0x40758A0", Offset = "0x40758A0", VA = "0x40758A0")]
	private void RefreshMarquee()
	{
	}

	[Token(Token = "0x6000683")]
	[Address(RVA = "0x4075D60", Offset = "0x4075D60", VA = "0x4075D60")]
	public AottgMarqueeTextRuntime()
	{
	}
}
