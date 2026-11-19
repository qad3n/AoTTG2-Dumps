// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncDragTrigger
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

[Token(Token = "0x200020D")]
[DisallowMultipleComponent]
public sealed class AsyncDragTrigger : AsyncTriggerBase<PointerEventData>, IDragHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C2B")]
	[Address(RVA = "0x6303730", Offset = "0x6302730", VA = "0x6303730", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIDragHandler_002EOnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C2C")]
	[Address(RVA = "0x6303780", Offset = "0x6302780", VA = "0x6303780")]
	public IAsyncOnDragHandler GetOnDragAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C2D")]
	[Address(RVA = "0x63037F0", Offset = "0x63027F0", VA = "0x63037F0")]
	public IAsyncOnDragHandler GetOnDragAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C2E")]
	[Address(RVA = "0x6303860", Offset = "0x6302860", VA = "0x6303860")]
	public UniTask<PointerEventData> OnDragAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C2F")]
	[Address(RVA = "0x6303960", Offset = "0x6302960", VA = "0x6303960")]
	public UniTask<PointerEventData> OnDragAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C30")]
	[Address(RVA = "0x6303A70", Offset = "0x6302A70", VA = "0x6303A70")]
	public AsyncDragTrigger()
	{
	}
}
