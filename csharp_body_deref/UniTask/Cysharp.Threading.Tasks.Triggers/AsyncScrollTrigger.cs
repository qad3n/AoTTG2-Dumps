using System.Threading;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x200021E")]
[DisallowMultipleComponent]
public sealed class AsyncScrollTrigger : AsyncTriggerBase<PointerEventData>, IScrollHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x46F2F60", Offset = "0x46F2F60", VA = "0x46F2F60", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIScrollHandler_002EOnScroll(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x46F2FB0", Offset = "0x46F2FB0", VA = "0x46F2FB0")]
	public IAsyncOnScrollHandler GetOnScrollAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x46F3020", Offset = "0x46F3020", VA = "0x46F3020")]
	public IAsyncOnScrollHandler GetOnScrollAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C50")]
	[Address(RVA = "0x46F3090", Offset = "0x46F3090", VA = "0x46F3090")]
	public UniTask<PointerEventData> OnScrollAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C51")]
	[Address(RVA = "0x46F3190", Offset = "0x46F3190", VA = "0x46F3190")]
	public UniTask<PointerEventData> OnScrollAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C52")]
	[Address(RVA = "0x46F32A0", Offset = "0x46F32A0", VA = "0x46F32A0")]
	public AsyncScrollTrigger()
	{
	}
}
