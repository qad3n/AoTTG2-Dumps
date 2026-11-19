// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncPointerUpTrigger
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

[Token(Token = "0x200021F")]
[DisallowMultipleComponent]
public sealed class AsyncPointerUpTrigger : AsyncTriggerBase<PointerEventData>, IPointerUpHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C6A")]
	[Address(RVA = "0x63056B0", Offset = "0x63046B0", VA = "0x63056B0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerUpHandler_002EOnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C6B")]
	[Address(RVA = "0x6305700", Offset = "0x6304700", VA = "0x6305700")]
	public IAsyncOnPointerUpHandler GetOnPointerUpAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C6C")]
	[Address(RVA = "0x6305770", Offset = "0x6304770", VA = "0x6305770")]
	public IAsyncOnPointerUpHandler GetOnPointerUpAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C6D")]
	[Address(RVA = "0x63057E0", Offset = "0x63047E0", VA = "0x63057E0")]
	public UniTask<PointerEventData> OnPointerUpAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C6E")]
	[Address(RVA = "0x63058E0", Offset = "0x63048E0", VA = "0x63058E0")]
	public UniTask<PointerEventData> OnPointerUpAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C6F")]
	[Address(RVA = "0x63059F0", Offset = "0x63049F0", VA = "0x63059F0")]
	public AsyncPointerUpTrigger()
	{
	}
}
