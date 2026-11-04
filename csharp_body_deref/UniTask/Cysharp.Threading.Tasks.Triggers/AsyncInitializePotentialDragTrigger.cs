// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncInitializePotentialDragTrigger
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

[Token(Token = "0x2000213")]
[DisallowMultipleComponent]
public sealed class AsyncInitializePotentialDragTrigger : AsyncTriggerBase<PointerEventData>, IInitializePotentialDragHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x292F8B0", Offset = "0x292DEB0", VA = "0x18292F8B0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIInitializePotentialDragHandler_002EOnInitializePotentialDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x292F590", Offset = "0x292DB90", VA = "0x18292F590")]
	public IAsyncOnInitializePotentialDragHandler GetOnInitializePotentialDragAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x292F600", Offset = "0x292DC00", VA = "0x18292F600")]
	public IAsyncOnInitializePotentialDragHandler GetOnInitializePotentialDragAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x292F790", Offset = "0x292DD90", VA = "0x18292F790")]
	public UniTask<PointerEventData> OnInitializePotentialDragAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x292F680", Offset = "0x292DC80", VA = "0x18292F680")]
	public UniTask<PointerEventData> OnInitializePotentialDragAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x292F900", Offset = "0x292DF00", VA = "0x18292F900")]
	public AsyncInitializePotentialDragTrigger()
	{
	}
}
