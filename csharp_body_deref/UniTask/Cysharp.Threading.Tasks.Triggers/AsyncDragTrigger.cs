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
	[Address(RVA = "0x292CFF0", Offset = "0x292B5F0", VA = "0x18292CFF0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIDragHandler_002EOnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C2C")]
	[Address(RVA = "0x292CD50", Offset = "0x292B350", VA = "0x18292CD50")]
	public IAsyncOnDragHandler GetOnDragAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C2D")]
	[Address(RVA = "0x292CCD0", Offset = "0x292B2D0", VA = "0x18292CCD0")]
	public IAsyncOnDragHandler GetOnDragAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C2E")]
	[Address(RVA = "0x292CED0", Offset = "0x292B4D0", VA = "0x18292CED0")]
	public UniTask<PointerEventData> OnDragAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C2F")]
	[Address(RVA = "0x292CDC0", Offset = "0x292B3C0", VA = "0x18292CDC0")]
	public UniTask<PointerEventData> OnDragAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C30")]
	[Address(RVA = "0x292D040", Offset = "0x292B640", VA = "0x18292D040")]
	public AsyncDragTrigger()
	{
	}
}
