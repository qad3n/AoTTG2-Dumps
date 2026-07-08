using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000AD")]
internal sealed class GisketchButtonInputSource : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, ISubmitHandler
{
	[Token(Token = "0x17000074")]
	public GisketchActionInputSource Source
	{
		[Token(Token = "0x60004F9")]
		[Address(RVA = "0x3A27160", Offset = "0x3A27160", VA = "0x3A27160")]
		[CompilerGenerated]
		get
		{
			return default(GisketchActionInputSource);
		}
		[Token(Token = "0x60004FA")]
		[Address(RVA = "0x3A27170", Offset = "0x3A27170", VA = "0x3A27170")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60004FB")]
	[Address(RVA = "0x3A27180", Offset = "0x3A27180", VA = "0x3A27180", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x3A27230", Offset = "0x3A27230", VA = "0x3A27230", Slot = "5")]
	public void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x3A272E0", Offset = "0x3A272E0", VA = "0x3A272E0")]
	public GisketchButtonInputSource()
	{
	}
}
