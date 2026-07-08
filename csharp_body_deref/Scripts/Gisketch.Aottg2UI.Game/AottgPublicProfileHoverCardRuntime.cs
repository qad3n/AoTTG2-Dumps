using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200019D")]
internal sealed class AottgPublicProfileHoverCardRuntime : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler
{
	[Token(Token = "0x4000903")]
	[FieldOffset(Offset = "0x20")]
	private AottgPublicProfileHoverRuntime _owner;

	[Token(Token = "0x600097E")]
	[Address(RVA = "0x40FEAA0", Offset = "0x40FEAA0", VA = "0x40FEAA0")]
	public void Setup(AottgPublicProfileHoverRuntime owner)
	{
	}

	[Token(Token = "0x600097F")]
	[Address(RVA = "0x40FEAB0", Offset = "0x40FEAB0", VA = "0x40FEAB0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000980")]
	[Address(RVA = "0x40FEAF0", Offset = "0x40FEAF0", VA = "0x40FEAF0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000981")]
	[Address(RVA = "0x40FEB10", Offset = "0x40FEB10", VA = "0x40FEB10")]
	public AottgPublicProfileHoverCardRuntime()
	{
	}
}
