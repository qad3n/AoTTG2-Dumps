using System.Threading;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x200020E")]
[DisallowMultipleComponent]
public sealed class AsyncEndDragTrigger : AsyncTriggerBase<PointerEventData>, IEndDragHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x46F1360", Offset = "0x46F1360", VA = "0x46F1360", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIEndDragHandler_002EOnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x46F13B0", Offset = "0x46F13B0", VA = "0x46F13B0")]
	public IAsyncOnEndDragHandler GetOnEndDragAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x46F1420", Offset = "0x46F1420", VA = "0x46F1420")]
	public IAsyncOnEndDragHandler GetOnEndDragAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C18")]
	[Address(RVA = "0x46F1490", Offset = "0x46F1490", VA = "0x46F1490")]
	public UniTask<PointerEventData> OnEndDragAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C19")]
	[Address(RVA = "0x46F1590", Offset = "0x46F1590", VA = "0x46F1590")]
	public UniTask<PointerEventData> OnEndDragAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C1A")]
	[Address(RVA = "0x46F16A0", Offset = "0x46F16A0", VA = "0x46F16A0")]
	public AsyncEndDragTrigger()
	{
	}
}
