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

[Token(Token = "0x20002AB")]
public sealed class AottgMainMenuPanelHoverSlide : MonoBehaviour
{
	[Token(Token = "0x4000DAB")]
	private const float HoverWidthScale = 1f;

	[Token(Token = "0x4000DAC")]
	private const float SlideSeconds = 0.22f;

	[Token(Token = "0x4000DAD")]
	[FieldOffset(Offset = "0x20")]
	private GisketchUIRoot _root;

	[Token(Token = "0x4000DAE")]
	[FieldOffset(Offset = "0x28")]
	private GameObject _panel;

	[Token(Token = "0x4000DAF")]
	[FieldOffset(Offset = "0x30")]
	private GameObject _visual;

	[Token(Token = "0x4000DB0")]
	[FieldOffset(Offset = "0x38")]
	private Tween _tween;

	[Token(Token = "0x4000DB1")]
	[FieldOffset(Offset = "0x40")]
	private bool _shown;

	[Token(Token = "0x600103D")]
	[Address(RVA = "0x57C10B0", Offset = "0x57C00B0", VA = "0x57C10B0")]
	public void Setup(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x600103E")]
	[Address(RVA = "0x57C10C0", Offset = "0x57C00C0", VA = "0x57C10C0")]
	private void Update()
	{
	}

	[Token(Token = "0x600103F")]
	[Address(RVA = "0x57C1390", Offset = "0x57C0390", VA = "0x57C1390")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6001040")]
	[Address(RVA = "0x57C1180", Offset = "0x57C0180", VA = "0x57C1180")]
	private bool HoverPanelBand()
	{
		return default(bool);
	}

	[Token(Token = "0x6001041")]
	[Address(RVA = "0x57C13C0", Offset = "0x57C03C0", VA = "0x57C13C0")]
	private RectTransform PanelRect()
	{
		return null;
	}

	[Token(Token = "0x6001042")]
	[Address(RVA = "0x57C12D0", Offset = "0x57C02D0", VA = "0x57C12D0")]
	private void SetShown(bool shown)
	{
	}

	[Token(Token = "0x6001043")]
	[Address(RVA = "0x57C14D0", Offset = "0x57C04D0", VA = "0x57C14D0")]
	private GameObject PanelVisual()
	{
		return null;
	}

	[Token(Token = "0x6001044")]
	[Address(RVA = "0x57C1580", Offset = "0x57C0580", VA = "0x57C1580")]
	private void SetBrushButtonsFaded(bool faded)
	{
	}

	[Token(Token = "0x6001045")]
	[Address(RVA = "0x57C1650", Offset = "0x57C0650", VA = "0x57C1650")]
	public AottgMainMenuPanelHoverSlide()
	{
	}
}
