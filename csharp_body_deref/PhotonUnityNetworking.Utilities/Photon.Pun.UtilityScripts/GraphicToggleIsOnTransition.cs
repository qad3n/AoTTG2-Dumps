using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x200002E")]
[RequireComponent(typeof(Graphic))]
public class GraphicToggleIsOnTransition : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler
{
	[Token(Token = "0x40000AF")]
	[FieldOffset(Offset = "0x20")]
	public Toggle toggle;

	[Token(Token = "0x40000B0")]
	[FieldOffset(Offset = "0x28")]
	private Graphic _graphic;

	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0x30")]
	public Color NormalOnColor;

	[Token(Token = "0x40000B2")]
	[FieldOffset(Offset = "0x40")]
	public Color NormalOffColor;

	[Token(Token = "0x40000B3")]
	[FieldOffset(Offset = "0x50")]
	public Color HoverOnColor;

	[Token(Token = "0x40000B4")]
	[FieldOffset(Offset = "0x60")]
	public Color HoverOffColor;

	[Token(Token = "0x40000B5")]
	[FieldOffset(Offset = "0x70")]
	private bool isHover;

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x3BF4D90", Offset = "0x3BF4D90", VA = "0x3BF4D90", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x3BF4DF0", Offset = "0x3BF4DF0", VA = "0x3BF4DF0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x3BF4E50", Offset = "0x3BF4E50", VA = "0x3BF4E50")]
	public void OnEnable()
	{
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x3BF4FC0", Offset = "0x3BF4FC0", VA = "0x3BF4FC0")]
	public void OnDisable()
	{
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x3BF4F70", Offset = "0x3BF4F70", VA = "0x3BF4F70")]
	public void OnValueChanged(bool isOn)
	{
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x3BF5060", Offset = "0x3BF5060", VA = "0x3BF5060")]
	public GraphicToggleIsOnTransition()
	{
	}
}
