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
	[Address(RVA = "0x6303E30", Offset = "0x6302E30", VA = "0x6303E30", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIEndDragHandler_002EOnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C3A")]
	[Address(RVA = "0x6303E80", Offset = "0x6302E80", VA = "0x6303E80")]
	public IAsyncOnEndDragHandler GetOnEndDragAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C3B")]
	[Address(RVA = "0x6303EF0", Offset = "0x6302EF0", VA = "0x6303EF0")]
	public IAsyncOnEndDragHandler GetOnEndDragAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C3C")]
	[Address(RVA = "0x6303F60", Offset = "0x6302F60", VA = "0x6303F60")]
	public UniTask<PointerEventData> OnEndDragAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x6304060", Offset = "0x6303060", VA = "0x6304060")]
	public UniTask<PointerEventData> OnEndDragAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x6304170", Offset = "0x6303170", VA = "0x6304170")]
	public AsyncEndDragTrigger()
	{
	}
}
