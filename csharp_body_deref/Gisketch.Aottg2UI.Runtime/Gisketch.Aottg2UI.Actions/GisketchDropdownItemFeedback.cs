// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback
// Update status: CHANGED in this game update
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

[Token(Token = "0x20000B8")]
public sealed class GisketchDropdownItemFeedback : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x40003A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Image _image;

	[Token(Token = "0x40003A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Image _icon;

	[Token(Token = "0x40003AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x40003AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Color _normalBg;

	[Token(Token = "0x40003AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private Color _normalIcon;

	[Token(Token = "0x40003AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private Color _normalText;

	[Token(Token = "0x40003AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private Color32 _normalFace;

	[Token(Token = "0x40003AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	private Color _disabledText;

	[Token(Token = "0x40003B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
	private Color _hoverBg;

	[Token(Token = "0x40003B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private Color _hoverText;

	[Token(Token = "0x40003B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private string _normalLabelText;

	[Token(Token = "0x40003B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private string _activeLabelText;

	[Token(Token = "0x40003B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private bool _normalLabelOwnsColor;

	[Token(Token = "0x40003B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private GisketchHoverMarqueeText _marquee;

	[Token(Token = "0x40003B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Func<bool> _pointerHoverAllowed;

	[Token(Token = "0x40003B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private bool _hovered;

	[Token(Token = "0x40003B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC9")]
	private bool _selected;

	[Token(Token = "0x40003B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xCA")]
	private bool _forced;

	[Token(Token = "0x40003BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xCB")]
	private bool _disabled;

	[Token(Token = "0x1700007B")]
	public Color NormalTextColor
	{
		[Token(Token = "0x6000546")]
		[Address(RVA = "0x3A94960", Offset = "0x3A94960", VA = "0x3A94960")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x3A943F0", Offset = "0x3A943F0", VA = "0x3A943F0")]
	public void Setup(Image image, TextMeshProUGUI label, GisketchTheme theme, [Optional] Image icon)
	{
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x3A8FC20", Offset = "0x3A8FC20", VA = "0x3A8FC20")]
	public void SetActiveTextColor(Color color)
	{
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x3A8C700", Offset = "0x3A8C700", VA = "0x3A8C700")]
	public void SetDisabled(bool disabled)
	{
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x3A94C70", Offset = "0x3A94C70", VA = "0x3A94C70", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x3A94CC0", Offset = "0x3A94CC0", VA = "0x3A94CC0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x3A94CD0", Offset = "0x3A94CD0", VA = "0x3A94CD0", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600054C")]
	[Address(RVA = "0x3A94D00", Offset = "0x3A94D00", VA = "0x3A94D00", Slot = "7")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600054D")]
	[Address(RVA = "0x3A8C710", Offset = "0x3A8C710", VA = "0x3A8C710")]
	public void SetForcedActive(bool active)
	{
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x3A94D10", Offset = "0x3A94D10", VA = "0x3A94D10")]
	public void SetPointerHoverAllowed(Func<bool> allowed)
	{
	}

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x3A8D1E0", Offset = "0x3A8D1E0", VA = "0x3A8D1E0")]
	public void ClearPointerHover()
	{
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x3A8FC30", Offset = "0x3A8FC30", VA = "0x3A8FC30")]
	public void SetLabelText(string normal, string active, bool normalOwnsColor = false)
	{
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x3A94970", Offset = "0x3A94970", VA = "0x3A94970")]
	private void Refresh()
	{
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x3A947F0", Offset = "0x3A947F0", VA = "0x3A947F0")]
	private static Color Muted(Color surface)
	{
		return default(Color);
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x3A94D40", Offset = "0x3A94D40", VA = "0x3A94D40")]
	private static float Luminance(Color color)
	{
		return default(float);
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x3A94D70", Offset = "0x3A94D70", VA = "0x3A94D70")]
	public GisketchDropdownItemFeedback()
	{
	}
}
