// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchToggleFeedback
// Update status: CHANGED in this game update
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

[Token(Token = "0x20000F4")]
public sealed class GisketchToggleFeedback : UIBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x40004D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Toggle _toggle;

	[Token(Token = "0x40004D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x40004D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Image _switchTrack;

	[Token(Token = "0x40004D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private RectTransform _switchThumb;

	[Token(Token = "0x40004D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private GisketchTheme _theme;

	[Token(Token = "0x40004D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private Tween _switchTween;

	[Token(Token = "0x40004D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private FontWeight _normalWeight;

	[Token(Token = "0x40004DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	private bool _hovered;

	[Token(Token = "0x40004DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x55")]
	private bool _selected;

	[Token(Token = "0x600075E")]
	[Address(RVA = "0x190F7B0", Offset = "0x190DDB0", VA = "0x18190F7B0")]
	public void Setup(Toggle toggle, TextMeshProUGUI label, [Optional] Image switchTrack, [Optional] RectTransform switchThumb, [Optional] GisketchTheme theme)
	{
	}

	[Token(Token = "0x600075F")]
	[Address(RVA = "0x190F700", Offset = "0x190DD00", VA = "0x18190F700")]
	public void RefreshValue(bool animate = false)
	{
	}

	[Token(Token = "0x6000760")]
	[Address(RVA = "0x190F020", Offset = "0x190D620", VA = "0x18190F020")]
	private void OnValueChanged(bool _)
	{
	}

	[Token(Token = "0x6000761")]
	[Address(RVA = "0x190EE70", Offset = "0x190D470", VA = "0x18190EE70", Slot = "17")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x190EF00", Offset = "0x190D500", VA = "0x18190EF00", Slot = "18")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000763")]
	[Address(RVA = "0x190EF90", Offset = "0x190D590", VA = "0x18190EF90", Slot = "19")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000764")]
	[Address(RVA = "0x190EDB0", Offset = "0x190D3B0", VA = "0x18190EDB0", Slot = "20")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000765")]
	[Address(RVA = "0x190F720", Offset = "0x190DD20", VA = "0x18190F720")]
	private void Refresh()
	{
	}

	[Token(Token = "0x6000766")]
	[Address(RVA = "0x190F1F0", Offset = "0x190D7F0", VA = "0x18190F1F0")]
	private void RefreshSwitch(bool animate)
	{
	}

	[Token(Token = "0x6000767")]
	[Address(RVA = "0x190F930", Offset = "0x190DF30", VA = "0x18190F930")]
	private Vector2 SwitchThumbPosition(bool on)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x190EE40", Offset = "0x190D440", VA = "0x18190EE40", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x190EDA0", Offset = "0x190D3A0", VA = "0x18190EDA0")]
	public GisketchToggleFeedback()
	{
	}
}
