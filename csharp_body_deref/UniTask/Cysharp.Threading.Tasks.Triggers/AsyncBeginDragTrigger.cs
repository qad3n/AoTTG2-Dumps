using System.Threading;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000204")]
[DisallowMultipleComponent]
public sealed class AsyncBeginDragTrigger : AsyncTriggerBase<PointerEventData>, IBeginDragHandler, IEventSystemHandler
{
	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x46F01E0", Offset = "0x46F01E0", VA = "0x46F01E0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIBeginDragHandler_002EOnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000BF3")]
	[Address(RVA = "0x46F0230", Offset = "0x46F0230", VA = "0x46F0230")]
	public IAsyncOnBeginDragHandler GetOnBeginDragAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BF4")]
	[Address(RVA = "0x46F02A0", Offset = "0x46F02A0", VA = "0x46F02A0")]
	public IAsyncOnBeginDragHandler GetOnBeginDragAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BF5")]
	[Address(RVA = "0x46F0310", Offset = "0x46F0310", VA = "0x46F0310")]
	public UniTask<PointerEventData> OnBeginDragAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000BF6")]
	[Address(RVA = "0x46F0410", Offset = "0x46F0410", VA = "0x46F0410")]
	public UniTask<PointerEventData> OnBeginDragAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x46F0520", Offset = "0x46F0520", VA = "0x46F0520")]
	public AsyncBeginDragTrigger()
	{
	}
}
