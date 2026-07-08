using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000B8")]
internal sealed class GisketchFocusInputSource : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, ISubmitHandler
{
	[Token(Token = "0x6000542")]
	[Address(RVA = "0x3A293E0", Offset = "0x3A293E0", VA = "0x3A293E0", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x3A29490", Offset = "0x3A29490", VA = "0x3A29490", Slot = "5")]
	public void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x3A29540", Offset = "0x3A29540", VA = "0x3A29540")]
	public GisketchFocusInputSource()
	{
	}
}
