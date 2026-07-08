using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x2000034")]
[RequireComponent(typeof(Text))]
public class TextButtonTransition : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler
{
	[Token(Token = "0x40000C0")]
	[FieldOffset(Offset = "0x20")]
	private Text _text;

	[Token(Token = "0x40000C1")]
	[FieldOffset(Offset = "0x28")]
	public Selectable Selectable;

	[Token(Token = "0x40000C2")]
	[FieldOffset(Offset = "0x30")]
	public Color NormalColor;

	[Token(Token = "0x40000C3")]
	[FieldOffset(Offset = "0x40")]
	public Color HoverColor;

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x3BF5730", Offset = "0x3BF5730", VA = "0x3BF5730")]
	public void Awake()
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x3BF5780", Offset = "0x3BF5780", VA = "0x3BF5780")]
	public void OnEnable()
	{
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x3BF57B0", Offset = "0x3BF57B0", VA = "0x3BF57B0")]
	public void OnDisable()
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x3BF57E0", Offset = "0x3BF57E0", VA = "0x3BF57E0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x3BF5890", Offset = "0x3BF5890", VA = "0x3BF5890", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x3BF5940", Offset = "0x3BF5940", VA = "0x3BF5940")]
	public TextButtonTransition()
	{
	}
}
