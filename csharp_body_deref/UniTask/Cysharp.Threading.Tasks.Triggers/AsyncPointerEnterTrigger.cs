using System.Threading;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000218")]
[DisallowMultipleComponent]
public sealed class AsyncPointerEnterTrigger : AsyncTriggerBase<PointerEventData>, IPointerEnterHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x46F24E0", Offset = "0x46F24E0", VA = "0x46F24E0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerEnterHandler_002EOnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C39")]
	[Address(RVA = "0x46F2530", Offset = "0x46F2530", VA = "0x46F2530")]
	public IAsyncOnPointerEnterHandler GetOnPointerEnterAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C3A")]
	[Address(RVA = "0x46F25A0", Offset = "0x46F25A0", VA = "0x46F25A0")]
	public IAsyncOnPointerEnterHandler GetOnPointerEnterAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C3B")]
	[Address(RVA = "0x46F2610", Offset = "0x46F2610", VA = "0x46F2610")]
	public UniTask<PointerEventData> OnPointerEnterAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C3C")]
	[Address(RVA = "0x46F2710", Offset = "0x46F2710", VA = "0x46F2710")]
	public UniTask<PointerEventData> OnPointerEnterAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x46F2820", Offset = "0x46F2820", VA = "0x46F2820")]
	public AsyncPointerEnterTrigger()
	{
	}
}
