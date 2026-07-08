using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x2000035")]
[RequireComponent(typeof(Text))]
public class TextToggleIsOnTransition : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler
{
	[Token(Token = "0x40000C4")]
	[FieldOffset(Offset = "0x20")]
	public Toggle toggle;

	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0x28")]
	private Text _text;

	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0x30")]
	public Color NormalOnColor;

	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x40")]
	public Color NormalOffColor;

	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x50")]
	public Color HoverOnColor;

	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x60")]
	public Color HoverOffColor;

	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0x70")]
	private bool isHover;

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x3BF5970", Offset = "0x3BF5970", VA = "0x3BF5970")]
	public void OnEnable()
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x3BF5AE0", Offset = "0x3BF5AE0", VA = "0x3BF5AE0")]
	public void OnDisable()
	{
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x3BF5A90", Offset = "0x3BF5A90", VA = "0x3BF5A90")]
	public void OnValueChanged(bool isOn)
	{
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x3BF5B80", Offset = "0x3BF5B80", VA = "0x3BF5B80", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x3BF5BE0", Offset = "0x3BF5BE0", VA = "0x3BF5BE0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x3BF5C40", Offset = "0x3BF5C40", VA = "0x3BF5C40")]
	public TextToggleIsOnTransition()
	{
	}
}
