// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncScrollTrigger
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

[Token(Token = "0x2000221")]
[DisallowMultipleComponent]
public sealed class AsyncScrollTrigger : AsyncTriggerBase<PointerEventData>, IScrollHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C71")]
	[Address(RVA = "0x6305A30", Offset = "0x6304A30", VA = "0x6305A30", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIScrollHandler_002EOnScroll(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C72")]
	[Address(RVA = "0x6305A80", Offset = "0x6304A80", VA = "0x6305A80")]
	public IAsyncOnScrollHandler GetOnScrollAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C73")]
	[Address(RVA = "0x6305AF0", Offset = "0x6304AF0", VA = "0x6305AF0")]
	public IAsyncOnScrollHandler GetOnScrollAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C74")]
	[Address(RVA = "0x6305B60", Offset = "0x6304B60", VA = "0x6305B60")]
	public UniTask<PointerEventData> OnScrollAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C75")]
	[Address(RVA = "0x6305C60", Offset = "0x6304C60", VA = "0x6305C60")]
	public UniTask<PointerEventData> OnScrollAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C76")]
	[Address(RVA = "0x6305D70", Offset = "0x6304D70", VA = "0x6305D70")]
	public AsyncScrollTrigger()
	{
	}
}
