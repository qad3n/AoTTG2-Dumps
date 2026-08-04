// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncBeginDragTrigger
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

[Token(Token = "0x2000204")]
[DisallowMultipleComponent]
public sealed class AsyncBeginDragTrigger : AsyncTriggerBase<PointerEventData>, IBeginDragHandler, IEventSystemHandler
{
	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x4A152E0", Offset = "0x4A152E0", VA = "0x4A152E0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIBeginDragHandler_002EOnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000BF3")]
	[Address(RVA = "0x4A15330", Offset = "0x4A15330", VA = "0x4A15330")]
	public IAsyncOnBeginDragHandler GetOnBeginDragAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BF4")]
	[Address(RVA = "0x4A153A0", Offset = "0x4A153A0", VA = "0x4A153A0")]
	public IAsyncOnBeginDragHandler GetOnBeginDragAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BF5")]
	[Address(RVA = "0x4A15410", Offset = "0x4A15410", VA = "0x4A15410")]
	public UniTask<PointerEventData> OnBeginDragAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000BF6")]
	[Address(RVA = "0x4A15510", Offset = "0x4A15510", VA = "0x4A15510")]
	public UniTask<PointerEventData> OnBeginDragAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x4A15620", Offset = "0x4A15620", VA = "0x4A15620")]
	public AsyncBeginDragTrigger()
	{
	}
}
