using DG.Tweening;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000148")]
public sealed class AottgMainMenuPanelHoverSlide : MonoBehaviour
{
	[Token(Token = "0x4000787")]
	private const float HoverWidthScale = 1f;

	[Token(Token = "0x4000788")]
	private const float SlideSeconds = 0.22f;

	[Token(Token = "0x4000789")]
	[FieldOffset(Offset = "0x20")]
	private GisketchUIRoot _root;

	[Token(Token = "0x400078A")]
	[FieldOffset(Offset = "0x28")]
	private GameObject _panel;

	[Token(Token = "0x400078B")]
	[FieldOffset(Offset = "0x30")]
	private GameObject _visual;

	[Token(Token = "0x400078C")]
	[FieldOffset(Offset = "0x38")]
	private Tween _tween;

	[Token(Token = "0x400078D")]
	[FieldOffset(Offset = "0x40")]
	private bool _shown;

	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x40C6460", Offset = "0x40C6460", VA = "0x40C6460")]
	public void Setup(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x40C6470", Offset = "0x40C6470", VA = "0x40C6470")]
	private void Update()
	{
	}

	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x40C6720", Offset = "0x40C6720", VA = "0x40C6720")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60006F7")]
	[Address(RVA = "0x40C6530", Offset = "0x40C6530", VA = "0x40C6530")]
	private bool HoverPanelBand()
	{
		return default(bool);
	}

	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x40C6750", Offset = "0x40C6750", VA = "0x40C6750")]
	private RectTransform PanelRect()
	{
		return null;
	}

	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x40C6660", Offset = "0x40C6660", VA = "0x40C6660")]
	private void SetShown(bool shown)
	{
	}

	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x40C6860", Offset = "0x40C6860", VA = "0x40C6860")]
	private GameObject PanelVisual()
	{
		return null;
	}

	[Token(Token = "0x60006FB")]
	[Address(RVA = "0x40C6910", Offset = "0x40C6910", VA = "0x40C6910")]
	private void SetBrushButtonsFaded(bool faded)
	{
	}

	[Token(Token = "0x60006FC")]
	[Address(RVA = "0x40C69E0", Offset = "0x40C69E0", VA = "0x40C69E0")]
	public AottgMainMenuPanelHoverSlide()
	{
	}
}
