// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuPanelHoverSlide.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using DG.Tweening;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200017A")]
public sealed class AottgMainMenuPanelHoverSlide : MonoBehaviour
{
	[Token(Token = "0x4000846")]
	private const float HoverWidthScale = 1f;

	[Token(Token = "0x4000847")]
	private const float SlideSeconds = 0.22f;

	[Token(Token = "0x4000848")]
	[FieldOffset(Offset = "0x20")]
	private GisketchUIRoot _root;

	[Token(Token = "0x4000849")]
	[FieldOffset(Offset = "0x28")]
	private GameObject _panel;

	[Token(Token = "0x400084A")]
	[FieldOffset(Offset = "0x30")]
	private GameObject _visual;

	[Token(Token = "0x400084B")]
	[FieldOffset(Offset = "0x38")]
	private Tween _tween;

	[Token(Token = "0x400084C")]
	[FieldOffset(Offset = "0x40")]
	private bool _shown;

	[Token(Token = "0x6000861")]
	[Address(RVA = "0x43F72F0", Offset = "0x43F72F0", VA = "0x43F72F0")]
	public void Setup(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000862")]
	[Address(RVA = "0x43F7300", Offset = "0x43F7300", VA = "0x43F7300")]
	private void Update()
	{
	}

	[Token(Token = "0x6000863")]
	[Address(RVA = "0x43F75B0", Offset = "0x43F75B0", VA = "0x43F75B0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000864")]
	[Address(RVA = "0x43F73C0", Offset = "0x43F73C0", VA = "0x43F73C0")]
	private bool HoverPanelBand()
	{
		return default(bool);
	}

	[Token(Token = "0x6000865")]
	[Address(RVA = "0x43F75E0", Offset = "0x43F75E0", VA = "0x43F75E0")]
	private RectTransform PanelRect()
	{
		return null;
	}

	[Token(Token = "0x6000866")]
	[Address(RVA = "0x43F74F0", Offset = "0x43F74F0", VA = "0x43F74F0")]
	private void SetShown(bool shown)
	{
	}

	[Token(Token = "0x6000867")]
	[Address(RVA = "0x43F76F0", Offset = "0x43F76F0", VA = "0x43F76F0")]
	private GameObject PanelVisual()
	{
		return null;
	}

	[Token(Token = "0x6000868")]
	[Address(RVA = "0x43F77A0", Offset = "0x43F77A0", VA = "0x43F77A0")]
	private void SetBrushButtonsFaded(bool faded)
	{
	}

	[Token(Token = "0x6000869")]
	[Address(RVA = "0x43F7870", Offset = "0x43F7870", VA = "0x43F7870")]
	public AottgMainMenuPanelHoverSlide()
	{
	}
}
