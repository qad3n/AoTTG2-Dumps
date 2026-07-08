using System.Threading;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x200021C")]
[DisallowMultipleComponent]
public sealed class AsyncPointerUpTrigger : AsyncTriggerBase<PointerEventData>, IPointerUpHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x46F2BE0", Offset = "0x46F2BE0", VA = "0x46F2BE0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerUpHandler_002EOnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x46F2C30", Offset = "0x46F2C30", VA = "0x46F2C30")]
	public IAsyncOnPointerUpHandler GetOnPointerUpAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C48")]
	[Address(RVA = "0x46F2CA0", Offset = "0x46F2CA0", VA = "0x46F2CA0")]
	public IAsyncOnPointerUpHandler GetOnPointerUpAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x46F2D10", Offset = "0x46F2D10", VA = "0x46F2D10")]
	public UniTask<PointerEventData> OnPointerUpAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x46F2E10", Offset = "0x46F2E10", VA = "0x46F2E10")]
	public UniTask<PointerEventData> OnPointerUpAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x46F2F20", Offset = "0x46F2F20", VA = "0x46F2F20")]
	public AsyncPointerUpTrigger()
	{
	}
}
