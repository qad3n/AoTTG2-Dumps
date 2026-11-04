// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncEndDragTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000211")]
[DisallowMultipleComponent]
public sealed class AsyncEndDragTrigger : AsyncTriggerBase<PointerEventData>, IEndDragHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C39")]
	[Address(RVA = "0x292E290", Offset = "0x292C890", VA = "0x18292E290", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIEndDragHandler_002EOnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C3A")]
	[Address(RVA = "0x292DFF0", Offset = "0x292C5F0", VA = "0x18292DFF0")]
	public IAsyncOnEndDragHandler GetOnEndDragAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C3B")]
	[Address(RVA = "0x292DF70", Offset = "0x292C570", VA = "0x18292DF70")]
	public IAsyncOnEndDragHandler GetOnEndDragAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C3C")]
	[Address(RVA = "0x292E170", Offset = "0x292C770", VA = "0x18292E170")]
	public UniTask<PointerEventData> OnEndDragAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x292E060", Offset = "0x292C660", VA = "0x18292E060")]
	public UniTask<PointerEventData> OnEndDragAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x292E2E0", Offset = "0x292C8E0", VA = "0x18292E2E0")]
	public AsyncEndDragTrigger()
	{
	}
}
