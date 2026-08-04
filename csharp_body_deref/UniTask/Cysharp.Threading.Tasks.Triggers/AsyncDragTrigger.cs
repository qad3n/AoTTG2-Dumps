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

[Token(Token = "0x200020A")]
[DisallowMultipleComponent]
public sealed class AsyncDragTrigger : AsyncTriggerBase<PointerEventData>, IDragHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C07")]
	[Address(RVA = "0x4A15D60", Offset = "0x4A15D60", VA = "0x4A15D60", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIDragHandler_002EOnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C08")]
	[Address(RVA = "0x4A15DB0", Offset = "0x4A15DB0", VA = "0x4A15DB0")]
	public IAsyncOnDragHandler GetOnDragAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C09")]
	[Address(RVA = "0x4A15E20", Offset = "0x4A15E20", VA = "0x4A15E20")]
	public IAsyncOnDragHandler GetOnDragAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C0A")]
	[Address(RVA = "0x4A15E90", Offset = "0x4A15E90", VA = "0x4A15E90")]
	public UniTask<PointerEventData> OnDragAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C0B")]
	[Address(RVA = "0x4A15F90", Offset = "0x4A15F90", VA = "0x4A15F90")]
	public UniTask<PointerEventData> OnDragAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C0C")]
	[Address(RVA = "0x4A160A0", Offset = "0x4A160A0", VA = "0x4A160A0")]
	public AsyncDragTrigger()
	{
	}
}
