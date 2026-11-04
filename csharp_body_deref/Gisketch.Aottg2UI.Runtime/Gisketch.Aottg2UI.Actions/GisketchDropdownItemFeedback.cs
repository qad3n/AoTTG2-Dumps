// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchDropdownItemFeedback.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000D9")]
public sealed class GisketchDropdownItemFeedback : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x4000462")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Image _image;

	[Token(Token = "0x4000463")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Image _icon;

	[Token(Token = "0x4000464")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x4000465")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Color _normalBg;

	[Token(Token = "0x4000466")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private Color _normalIcon;

	[Token(Token = "0x4000467")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private Color _normalText;

	[Token(Token = "0x4000468")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private Color32 _normalFace;

	[Token(Token = "0x4000469")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	private Color _disabledText;

	[Token(Token = "0x400046A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
	private Color _hoverBg;

	[Token(Token = "0x400046B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private Color _hoverText;

	[Token(Token = "0x400046C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private string _normalLabelText;

	[Token(Token = "0x400046D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private string _activeLabelText;

	[Token(Token = "0x400046E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private bool _normalLabelOwnsColor;

	[Token(Token = "0x400046F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private GisketchHoverMarqueeText _marquee;

	[Token(Token = "0x4000470")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Func<bool> _pointerHoverAllowed;

	[Token(Token = "0x4000471")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private bool _hovered;

	[Token(Token = "0x4000472")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC9")]
	private bool _selected;

	[Token(Token = "0x4000473")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xCA")]
	private bool _forced;

	[Token(Token = "0x4000474")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xCB")]
	private bool _disabled;

	[Token(Token = "0x170000AD")]
	public Color NormalTextColor
	{
		[Token(Token = "0x600069A")]
		[Address(RVA = "0x18FEB30", Offset = "0x18FD130", VA = "0x1818FEB30")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x6000699")]
	[Address(RVA = "0x18FE570", Offset = "0x18FCB70", VA = "0x1818FE570")]
	public void Setup(Image image, TextMeshProUGUI label, GisketchTheme theme, [Optional] Image icon)
	{
	}

	[Token(Token = "0x600069B")]
	[Address(RVA = "0x18FE4A0", Offset = "0x18FCAA0", VA = "0x1818FE4A0")]
	public void SetActiveTextColor(Color color)
	{
	}

	[Token(Token = "0x600069C")]
	[Address(RVA = "0x18FE4C0", Offset = "0x18FCAC0", VA = "0x1818FE4C0")]
	public void SetDisabled(bool disabled)
	{
	}

	[Token(Token = "0x600069D")]
	[Address(RVA = "0x18FE120", Offset = "0x18FC720", VA = "0x1818FE120", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600069E")]
	[Address(RVA = "0x18FE060", Offset = "0x18FC660", VA = "0x1818FE060", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600069F")]
	[Address(RVA = "0x18FE160", Offset = "0x18FC760", VA = "0x1818FE160", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006A0")]
	[Address(RVA = "0x18FE110", Offset = "0x18FC710", VA = "0x1818FE110", Slot = "7")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x18FE4D0", Offset = "0x18FCAD0", VA = "0x1818FE4D0")]
	public void SetForcedActive(bool active)
	{
	}

	[Token(Token = "0x60006A2")]
	[Address(RVA = "0xC8FFC0", Offset = "0xC8E5C0", VA = "0x180C8FFC0")]
	public void SetPointerHoverAllowed(Func<bool> allowed)
	{
	}

	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x18FE060", Offset = "0x18FC660", VA = "0x1818FE060")]
	public void ClearPointerHover()
	{
	}

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x18FE4E0", Offset = "0x18FCAE0", VA = "0x1818FE4E0")]
	public void SetLabelText(string normal, string active, bool normalOwnsColor = false)
	{
	}

	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x18FE1D0", Offset = "0x18FC7D0", VA = "0x1818FE1D0")]
	private void Refresh()
	{
	}

	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x18FE0A0", Offset = "0x18FC6A0", VA = "0x1818FE0A0")]
	private static Color Muted(Color surface)
	{
		return default(Color);
	}

	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x18FE070", Offset = "0x18FC670", VA = "0x1818FE070")]
	private static float Luminance(Color color)
	{
		return default(float);
	}

	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public GisketchDropdownItemFeedback()
	{
	}
}
