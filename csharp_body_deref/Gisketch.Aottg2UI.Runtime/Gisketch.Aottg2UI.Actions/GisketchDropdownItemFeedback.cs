using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000B5")]
public sealed class GisketchDropdownItemFeedback : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x400038C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Image _image;

	[Token(Token = "0x400038D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Image _icon;

	[Token(Token = "0x400038E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x400038F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Color _normalBg;

	[Token(Token = "0x4000390")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private Color _normalIcon;

	[Token(Token = "0x4000391")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private Color _normalText;

	[Token(Token = "0x4000392")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private Color32 _normalFace;

	[Token(Token = "0x4000393")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	private Color _disabledText;

	[Token(Token = "0x4000394")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
	private Color _hoverBg;

	[Token(Token = "0x4000395")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private Color _hoverText;

	[Token(Token = "0x4000396")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private string _normalLabelText;

	[Token(Token = "0x4000397")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private string _activeLabelText;

	[Token(Token = "0x4000398")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private bool _normalLabelOwnsColor;

	[Token(Token = "0x4000399")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Func<bool> _pointerHoverAllowed;

	[Token(Token = "0x400039A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private bool _hovered;

	[Token(Token = "0x400039B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC1")]
	private bool _selected;

	[Token(Token = "0x400039C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC2")]
	private bool _forced;

	[Token(Token = "0x400039D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC3")]
	private bool _disabled;

	[Token(Token = "0x17000079")]
	public Color NormalTextColor
	{
		[Token(Token = "0x6000525")]
		[Address(RVA = "0x3A28780", Offset = "0x3A28780", VA = "0x3A28780")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x6000524")]
	[Address(RVA = "0x3A28340", Offset = "0x3A28340", VA = "0x3A28340")]
	public void Setup(Image image, TextMeshProUGUI label, GisketchTheme theme, [Optional] Image icon)
	{
	}

	[Token(Token = "0x6000526")]
	[Address(RVA = "0x3A23AD0", Offset = "0x3A23AD0", VA = "0x3A23AD0")]
	public void SetActiveTextColor(Color color)
	{
	}

	[Token(Token = "0x6000527")]
	[Address(RVA = "0x3A20540", Offset = "0x3A20540", VA = "0x3A20540")]
	public void SetDisabled(bool disabled)
	{
	}

	[Token(Token = "0x6000528")]
	[Address(RVA = "0x3A28A50", Offset = "0x3A28A50", VA = "0x3A28A50", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000529")]
	[Address(RVA = "0x3A28AA0", Offset = "0x3A28AA0", VA = "0x3A28AA0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600052A")]
	[Address(RVA = "0x3A28AB0", Offset = "0x3A28AB0", VA = "0x3A28AB0", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600052B")]
	[Address(RVA = "0x3A28AE0", Offset = "0x3A28AE0", VA = "0x3A28AE0", Slot = "7")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600052C")]
	[Address(RVA = "0x3A20550", Offset = "0x3A20550", VA = "0x3A20550")]
	public void SetForcedActive(bool active)
	{
	}

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x3A28AF0", Offset = "0x3A28AF0", VA = "0x3A28AF0")]
	public void SetPointerHoverAllowed(Func<bool> allowed)
	{
	}

	[Token(Token = "0x600052E")]
	[Address(RVA = "0x3A21020", Offset = "0x3A21020", VA = "0x3A21020")]
	public void ClearPointerHover()
	{
	}

	[Token(Token = "0x600052F")]
	[Address(RVA = "0x3A23AE0", Offset = "0x3A23AE0", VA = "0x3A23AE0")]
	public void SetLabelText(string normal, string active, bool normalOwnsColor = false)
	{
	}

	[Token(Token = "0x6000530")]
	[Address(RVA = "0x3A28790", Offset = "0x3A28790", VA = "0x3A28790")]
	private void Refresh()
	{
	}

	[Token(Token = "0x6000531")]
	[Address(RVA = "0x3A28720", Offset = "0x3A28720", VA = "0x3A28720")]
	private static Color Muted(Color surface)
	{
		return default(Color);
	}

	[Token(Token = "0x6000532")]
	[Address(RVA = "0x3A28B10", Offset = "0x3A28B10", VA = "0x3A28B10")]
	private static float Luminance(Color color)
	{
		return default(float);
	}

	[Token(Token = "0x6000533")]
	[Address(RVA = "0x3A28B40", Offset = "0x3A28B40", VA = "0x3A28B40")]
	public GisketchDropdownItemFeedback()
	{
	}
}
