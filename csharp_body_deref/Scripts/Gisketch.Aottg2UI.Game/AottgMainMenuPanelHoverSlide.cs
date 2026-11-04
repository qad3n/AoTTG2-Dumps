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

[Token(Token = "0x2000280")]
public sealed class AottgMainMenuPanelHoverSlide : MonoBehaviour
{
	[Token(Token = "0x4000CE7")]
	private const float HoverWidthScale = 1f;

	[Token(Token = "0x4000CE8")]
	private const float SlideSeconds = 0.22f;

	[Token(Token = "0x4000CE9")]
	[FieldOffset(Offset = "0x20")]
	private GisketchUIRoot _root;

	[Token(Token = "0x4000CEA")]
	[FieldOffset(Offset = "0x28")]
	private GameObject _panel;

	[Token(Token = "0x4000CEB")]
	[FieldOffset(Offset = "0x30")]
	private GameObject _visual;

	[Token(Token = "0x4000CEC")]
	[FieldOffset(Offset = "0x38")]
	private Tween _tween;

	[Token(Token = "0x4000CED")]
	[FieldOffset(Offset = "0x40")]
	private bool _shown;

	[Token(Token = "0x6000F15")]
	[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
	public void Setup(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000F16")]
	[Address(RVA = "0x1DE1800", Offset = "0x1DDFE00", VA = "0x181DE1800")]
	private void Update()
	{
	}

	[Token(Token = "0x6000F17")]
	[Address(RVA = "0x1DE1310", Offset = "0x1DDF910", VA = "0x181DE1310")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000F18")]
	[Address(RVA = "0x1DE10D0", Offset = "0x1DDF6D0", VA = "0x181DE10D0")]
	private bool HoverPanelBand()
	{
		return default(bool);
	}

	[Token(Token = "0x6000F19")]
	[Address(RVA = "0x1DE1350", Offset = "0x1DDF950", VA = "0x181DE1350")]
	private RectTransform PanelRect()
	{
		return null;
	}

	[Token(Token = "0x6000F1A")]
	[Address(RVA = "0x1DE1600", Offset = "0x1DDFC00", VA = "0x181DE1600")]
	private void SetShown(bool shown)
	{
	}

	[Token(Token = "0x6000F1B")]
	[Address(RVA = "0x1DE1460", Offset = "0x1DDFA60", VA = "0x181DE1460")]
	private GameObject PanelVisual()
	{
		return null;
	}

	[Token(Token = "0x6000F1C")]
	[Address(RVA = "0x1DE1520", Offset = "0x1DDFB20", VA = "0x181DE1520")]
	private void SetBrushButtonsFaded(bool faded)
	{
	}

	[Token(Token = "0x6000F1D")]
	[Address(RVA = "0x1DE18D0", Offset = "0x1DDFED0", VA = "0x181DE18D0")]
	public AottgMainMenuPanelHoverSlide()
	{
	}
}
