// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncPointerExitTrigger
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

[Token(Token = "0x200021A")]
[DisallowMultipleComponent]
public sealed class AsyncPointerExitTrigger : AsyncTriggerBase<PointerEventData>, IPointerExitHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x4A17960", Offset = "0x4A17960", VA = "0x4A17960", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerExitHandler_002EOnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x4A179B0", Offset = "0x4A179B0", VA = "0x4A179B0")]
	public IAsyncOnPointerExitHandler GetOnPointerExitAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x4A17A20", Offset = "0x4A17A20", VA = "0x4A17A20")]
	public IAsyncOnPointerExitHandler GetOnPointerExitAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x4A17A90", Offset = "0x4A17A90", VA = "0x4A17A90")]
	public UniTask<PointerEventData> OnPointerExitAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x4A17B90", Offset = "0x4A17B90", VA = "0x4A17B90")]
	public UniTask<PointerEventData> OnPointerExitAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x4A17CA0", Offset = "0x4A17CA0", VA = "0x4A17CA0")]
	public AsyncPointerExitTrigger()
	{
	}
}
