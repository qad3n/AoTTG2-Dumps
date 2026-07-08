using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Overlays;

[Token(Token = "0x2000039")]
public sealed class GisketchToastStackHover : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler
{
	[Token(Token = "0x4000119")]
	[FieldOffset(Offset = "0x20")]
	private Action<bool> _hover;

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x39E9470", Offset = "0x39E9470", VA = "0x39E9470")]
	public void Setup(Action<bool> hover)
	{
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x39E9480", Offset = "0x39E9480", VA = "0x39E9480", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x39E94A0", Offset = "0x39E94A0", VA = "0x39E94A0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x39E94C0", Offset = "0x39E94C0", VA = "0x39E94C0")]
	public GisketchToastStackHover()
	{
	}
}
