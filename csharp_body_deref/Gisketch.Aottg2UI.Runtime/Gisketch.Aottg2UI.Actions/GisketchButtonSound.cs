using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000AE")]
public sealed class GisketchButtonSound : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler
{
	[Token(Token = "0x4000371")]
	[FieldOffset(Offset = "0x20")]
	private string _action;

	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x3A272F0", Offset = "0x3A272F0", VA = "0x3A272F0")]
	public void Setup(string action)
	{
	}

	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x3A27300", Offset = "0x3A27300", VA = "0x3A27300", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000500")]
	[Address(RVA = "0x3A198B0", Offset = "0x3A198B0", VA = "0x3A198B0")]
	public void PlayClick()
	{
	}

	[Token(Token = "0x6000501")]
	[Address(RVA = "0x3A27310", Offset = "0x3A27310", VA = "0x3A27310")]
	public GisketchButtonSound()
	{
	}
}
