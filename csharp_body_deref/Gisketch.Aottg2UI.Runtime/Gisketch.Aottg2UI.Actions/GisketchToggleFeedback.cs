using System.Runtime.InteropServices;
using DG.Tweening;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000CA")]
public sealed class GisketchToggleFeedback : UIBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x40003DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Toggle _toggle;

	[Token(Token = "0x40003DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x40003E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Image _switchTrack;

	[Token(Token = "0x40003E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private RectTransform _switchThumb;

	[Token(Token = "0x40003E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private GisketchTheme _theme;

	[Token(Token = "0x40003E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private Tween _switchTween;

	[Token(Token = "0x40003E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private FontWeight _normalWeight;

	[Token(Token = "0x40003E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	private bool _hovered;

	[Token(Token = "0x40003E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x55")]
	private bool _selected;

	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x3A2F840", Offset = "0x3A2F840", VA = "0x3A2F840")]
	public void Setup(Toggle toggle, TextMeshProUGUI label, [Optional] Image switchTrack, [Optional] RectTransform switchThumb, [Optional] GisketchTheme theme)
	{
	}

	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x3A2FDC0", Offset = "0x3A2FDC0", VA = "0x3A2FDC0")]
	private void OnValueChanged(bool _)
	{
	}

	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x3A2FDE0", Offset = "0x3A2FDE0", VA = "0x3A2FDE0", Slot = "17")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x3A2FF00", Offset = "0x3A2FF00", VA = "0x3A2FF00", Slot = "18")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x3A2FF90", Offset = "0x3A2FF90", VA = "0x3A2FF90", Slot = "19")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x3A30020", Offset = "0x3A30020", VA = "0x3A30020", Slot = "20")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x3A2FE70", Offset = "0x3A2FE70", VA = "0x3A2FE70")]
	private void Refresh()
	{
	}

	[Token(Token = "0x60005BB")]
	[Address(RVA = "0x3A2F9D0", Offset = "0x3A2F9D0", VA = "0x3A2F9D0")]
	private void RefreshSwitch(bool animate)
	{
	}

	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x3A300C0", Offset = "0x3A300C0", VA = "0x3A300C0")]
	private Vector2 SwitchThumbPosition(bool on)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x3A30190", Offset = "0x3A30190", VA = "0x3A30190", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x3A301C0", Offset = "0x3A301C0", VA = "0x3A301C0")]
	public GisketchToggleFeedback()
	{
	}
}
