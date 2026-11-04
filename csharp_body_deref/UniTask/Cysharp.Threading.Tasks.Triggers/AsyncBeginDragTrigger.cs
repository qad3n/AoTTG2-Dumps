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

[Token(Token = "0x2000207")]
[DisallowMultipleComponent]
public sealed class AsyncBeginDragTrigger : AsyncTriggerBase<PointerEventData>, IBeginDragHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x292A360", Offset = "0x2928960", VA = "0x18292A360", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIBeginDragHandler_002EOnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x292A0C0", Offset = "0x29286C0", VA = "0x18292A0C0")]
	public IAsyncOnBeginDragHandler GetOnBeginDragAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C18")]
	[Address(RVA = "0x292A040", Offset = "0x2928640", VA = "0x18292A040")]
	public IAsyncOnBeginDragHandler GetOnBeginDragAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C19")]
	[Address(RVA = "0x292A130", Offset = "0x2928730", VA = "0x18292A130")]
	public UniTask<PointerEventData> OnBeginDragAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C1A")]
	[Address(RVA = "0x292A250", Offset = "0x2928850", VA = "0x18292A250")]
	public UniTask<PointerEventData> OnBeginDragAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C1B")]
	[Address(RVA = "0x292A3B0", Offset = "0x29289B0", VA = "0x18292A3B0")]
	public AsyncBeginDragTrigger()
	{
	}
}
