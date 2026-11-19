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

[Token(Token = "0x20000DF")]
public sealed class GisketchDropdownItemFeedback : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x4000489")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Image _image;

	[Token(Token = "0x400048A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Image _icon;

	[Token(Token = "0x400048B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x400048C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Color _normalBg;

	[Token(Token = "0x400048D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private Color _normalIcon;

	[Token(Token = "0x400048E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private Color _normalText;

	[Token(Token = "0x400048F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private Color32 _normalFace;

	[Token(Token = "0x4000490")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	private Color _disabledText;

	[Token(Token = "0x4000491")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
	private Color _hoverBg;

	[Token(Token = "0x4000492")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private Color _hoverText;

	[Token(Token = "0x4000493")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private string _normalLabelText;

	[Token(Token = "0x4000494")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private string _activeLabelText;

	[Token(Token = "0x4000495")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private bool _normalLabelOwnsColor;

	[Token(Token = "0x4000496")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private GisketchHoverMarqueeText _marquee;

	[Token(Token = "0x4000497")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Func<bool> _pointerHoverAllowed;

	[Token(Token = "0x4000498")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private bool _hovered;

	[Token(Token = "0x4000499")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC9")]
	private bool _selected;

	[Token(Token = "0x400049A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xCA")]
	private bool _forced;

	[Token(Token = "0x400049B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xCB")]
	private bool _disabled;

	[Token(Token = "0x170000AD")]
	public Color NormalTextColor
	{
		[Token(Token = "0x60006E8")]
		[Address(RVA = "0x52A01C0", Offset = "0x529F1C0", VA = "0x52A01C0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x60006E7")]
	[Address(RVA = "0x529FC50", Offset = "0x529EC50", VA = "0x529FC50")]
	public void Setup(Image image, TextMeshProUGUI label, GisketchTheme theme, [Optional] Image icon)
	{
	}

	[Token(Token = "0x60006E9")]
	[Address(RVA = "0x529A4F0", Offset = "0x52994F0", VA = "0x529A4F0")]
	public void SetActiveTextColor(Color color)
	{
	}

	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x5297010", Offset = "0x5296010", VA = "0x5297010")]
	public void SetDisabled(bool disabled)
	{
	}

	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x52A04D0", Offset = "0x529F4D0", VA = "0x52A04D0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x52A0520", Offset = "0x529F520", VA = "0x52A0520", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x52A0530", Offset = "0x529F530", VA = "0x52A0530", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x52A0590", Offset = "0x529F590", VA = "0x52A0590", Slot = "7")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x5297020", Offset = "0x5296020", VA = "0x5297020")]
	public void SetForcedActive(bool active)
	{
	}

	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x52A05A0", Offset = "0x529F5A0", VA = "0x52A05A0")]
	public void SetPointerHoverAllowed(Func<bool> allowed)
	{
	}

	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x5297AB0", Offset = "0x5296AB0", VA = "0x5297AB0")]
	public void ClearPointerHover()
	{
	}

	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x529A500", Offset = "0x5299500", VA = "0x529A500")]
	public void SetLabelText(string normal, string active, bool normalOwnsColor = false)
	{
	}

	[Token(Token = "0x60006F3")]
	[Address(RVA = "0x52A01D0", Offset = "0x529F1D0", VA = "0x52A01D0")]
	private void Refresh()
	{
	}

	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x52A0050", Offset = "0x529F050", VA = "0x52A0050")]
	private static Color Muted(Color surface)
	{
		return default(Color);
	}

	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x52A05D0", Offset = "0x529F5D0", VA = "0x52A05D0")]
	private static float Luminance(Color color)
	{
		return default(float);
	}

	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x52A05F0", Offset = "0x529F5F0", VA = "0x52A05F0")]
	public GisketchDropdownItemFeedback()
	{
	}
}
