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

[Token(Token = "0x20000FA")]
public sealed class GisketchToggleFeedback : UIBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x40004FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Toggle _toggle;

	[Token(Token = "0x40004FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x40004FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Image _switchTrack;

	[Token(Token = "0x40004FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private RectTransform _switchThumb;

	[Token(Token = "0x40004FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private GisketchTheme _theme;

	[Token(Token = "0x40004FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private Tween _switchTween;

	[Token(Token = "0x4000500")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private FontWeight _normalWeight;

	[Token(Token = "0x4000501")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	private bool _hovered;

	[Token(Token = "0x4000502")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x55")]
	private bool _selected;

	[Token(Token = "0x60007AC")]
	[Address(RVA = "0x52A9E40", Offset = "0x52A8E40", VA = "0x52A9E40")]
	public void Setup(Toggle toggle, TextMeshProUGUI label, [Optional] Image switchTrack, [Optional] RectTransform switchThumb, [Optional] GisketchTheme theme)
	{
	}

	[Token(Token = "0x60007AD")]
	[Address(RVA = "0x52AA3C0", Offset = "0x52A93C0", VA = "0x52AA3C0")]
	public void RefreshValue(bool animate = false)
	{
	}

	[Token(Token = "0x60007AE")]
	[Address(RVA = "0x52AA4E0", Offset = "0x52A94E0", VA = "0x52AA4E0")]
	private void OnValueChanged(bool _)
	{
	}

	[Token(Token = "0x60007AF")]
	[Address(RVA = "0x52AA6D0", Offset = "0x52A96D0", VA = "0x52AA6D0", Slot = "17")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x52AA760", Offset = "0x52A9760", VA = "0x52AA760", Slot = "18")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60007B1")]
	[Address(RVA = "0x52AA7F0", Offset = "0x52A97F0", VA = "0x52AA7F0", Slot = "19")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x52AA880", Offset = "0x52A9880", VA = "0x52AA880", Slot = "20")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60007B3")]
	[Address(RVA = "0x52AA450", Offset = "0x52A9450", VA = "0x52AA450")]
	private void Refresh()
	{
	}

	[Token(Token = "0x60007B4")]
	[Address(RVA = "0x52A9FD0", Offset = "0x52A8FD0", VA = "0x52A9FD0")]
	private void RefreshSwitch(bool animate)
	{
	}

	[Token(Token = "0x60007B5")]
	[Address(RVA = "0x52AA920", Offset = "0x52A9920", VA = "0x52AA920")]
	private Vector2 SwitchThumbPosition(bool on)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60007B6")]
	[Address(RVA = "0x52AA9E0", Offset = "0x52A99E0", VA = "0x52AA9E0", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x60007B7")]
	[Address(RVA = "0x52AAA10", Offset = "0x52A9A10", VA = "0x52AAA10")]
	public GisketchToggleFeedback()
	{
	}
}
