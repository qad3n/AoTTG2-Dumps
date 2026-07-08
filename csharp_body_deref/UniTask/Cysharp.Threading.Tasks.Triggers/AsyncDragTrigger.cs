using System.Threading;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x200020A")]
[DisallowMultipleComponent]
public sealed class AsyncDragTrigger : AsyncTriggerBase<PointerEventData>, IDragHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C07")]
	[Address(RVA = "0x46F0C60", Offset = "0x46F0C60", VA = "0x46F0C60", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIDragHandler_002EOnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C08")]
	[Address(RVA = "0x46F0CB0", Offset = "0x46F0CB0", VA = "0x46F0CB0")]
	public IAsyncOnDragHandler GetOnDragAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C09")]
	[Address(RVA = "0x46F0D20", Offset = "0x46F0D20", VA = "0x46F0D20")]
	public IAsyncOnDragHandler GetOnDragAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C0A")]
	[Address(RVA = "0x46F0D90", Offset = "0x46F0D90", VA = "0x46F0D90")]
	public UniTask<PointerEventData> OnDragAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C0B")]
	[Address(RVA = "0x46F0E90", Offset = "0x46F0E90", VA = "0x46F0E90")]
	public UniTask<PointerEventData> OnDragAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C0C")]
	[Address(RVA = "0x46F0FA0", Offset = "0x46F0FA0", VA = "0x46F0FA0")]
	public AsyncDragTrigger()
	{
	}
}
