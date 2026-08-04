// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchToggleFeedback
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchToggleFeedback.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using DG.Tweening;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000CF")]
public sealed class GisketchToggleFeedback : UIBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x400040F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Toggle _toggle;

	[Token(Token = "0x4000410")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x4000411")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Image _switchTrack;

	[Token(Token = "0x4000412")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private RectTransform _switchThumb;

	[Token(Token = "0x4000413")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private GisketchTheme _theme;

	[Token(Token = "0x4000414")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private Tween _switchTween;

	[Token(Token = "0x4000415")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private FontWeight _normalWeight;

	[Token(Token = "0x4000416")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	private bool _hovered;

	[Token(Token = "0x4000417")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x55")]
	private bool _selected;

	[Token(Token = "0x60005E5")]
	[Address(RVA = "0x3A9C370", Offset = "0x3A9C370", VA = "0x3A9C370")]
	public void Setup(Toggle toggle, TextMeshProUGUI label, [Optional] Image switchTrack, [Optional] RectTransform switchThumb, [Optional] GisketchTheme theme)
	{
	}

	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x3A9C8F0", Offset = "0x3A9C8F0", VA = "0x3A9C8F0")]
	private void OnValueChanged(bool _)
	{
	}

	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x3A9C910", Offset = "0x3A9C910", VA = "0x3A9C910", Slot = "17")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x3A9CA30", Offset = "0x3A9CA30", VA = "0x3A9CA30", Slot = "18")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x3A9CAC0", Offset = "0x3A9CAC0", VA = "0x3A9CAC0", Slot = "19")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x3A9CB50", Offset = "0x3A9CB50", VA = "0x3A9CB50", Slot = "20")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x3A9C9A0", Offset = "0x3A9C9A0", VA = "0x3A9C9A0")]
	private void Refresh()
	{
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x3A9C500", Offset = "0x3A9C500", VA = "0x3A9C500")]
	private void RefreshSwitch(bool animate)
	{
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x3A9CBF0", Offset = "0x3A9CBF0", VA = "0x3A9CBF0")]
	private Vector2 SwitchThumbPosition(bool on)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x3A9CCC0", Offset = "0x3A9CCC0", VA = "0x3A9CCC0", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x3A9CCF0", Offset = "0x3A9CCF0", VA = "0x3A9CCF0")]
	public GisketchToggleFeedback()
	{
	}
}
