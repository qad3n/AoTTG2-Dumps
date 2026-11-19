// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncDropTrigger
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

[Token(Token = "0x200020F")]
[DisallowMultipleComponent]
public sealed class AsyncDropTrigger : AsyncTriggerBase<PointerEventData>, IDropHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C32")]
	[Address(RVA = "0x6303AB0", Offset = "0x6302AB0", VA = "0x6303AB0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIDropHandler_002EOnDrop(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C33")]
	[Address(RVA = "0x6303B00", Offset = "0x6302B00", VA = "0x6303B00")]
	public IAsyncOnDropHandler GetOnDropAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x6303B70", Offset = "0x6302B70", VA = "0x6303B70")]
	public IAsyncOnDropHandler GetOnDropAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C35")]
	[Address(RVA = "0x6303BE0", Offset = "0x6302BE0", VA = "0x6303BE0")]
	public UniTask<PointerEventData> OnDropAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x6303CE0", Offset = "0x6302CE0", VA = "0x6303CE0")]
	public UniTask<PointerEventData> OnDropAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x6303DF0", Offset = "0x6302DF0", VA = "0x6303DF0")]
	public AsyncDropTrigger()
	{
	}
}
