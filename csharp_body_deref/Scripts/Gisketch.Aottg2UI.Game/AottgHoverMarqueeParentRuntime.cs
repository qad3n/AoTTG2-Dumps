using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200012E")]
internal sealed class AottgHoverMarqueeParentRuntime : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x40006FD")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<AottgHoverMarqueeTextRuntime> _items;

	[Token(Token = "0x40006FE")]
	[FieldOffset(Offset = "0x28")]
	private bool _hovered;

	[Token(Token = "0x40006FF")]
	[FieldOffset(Offset = "0x29")]
	private bool _selected;

	[Token(Token = "0x6000652")]
	[Address(RVA = "0x4073460", Offset = "0x4073460", VA = "0x4073460")]
	public void Register(AottgHoverMarqueeTextRuntime item)
	{
	}

	[Token(Token = "0x6000653")]
	[Address(RVA = "0x4073630", Offset = "0x4073630", VA = "0x4073630", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x4073790", Offset = "0x4073790", VA = "0x4073790", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x40737A0", Offset = "0x40737A0", VA = "0x40737A0", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x40737B0", Offset = "0x40737B0", VA = "0x40737B0", Slot = "7")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x40737C0", Offset = "0x40737C0", VA = "0x40737C0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000658")]
	[Address(RVA = "0x4073640", Offset = "0x4073640", VA = "0x4073640")]
	private void Refresh()
	{
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x40737D0", Offset = "0x40737D0", VA = "0x40737D0")]
	public AottgHoverMarqueeParentRuntime()
	{
	}
}
