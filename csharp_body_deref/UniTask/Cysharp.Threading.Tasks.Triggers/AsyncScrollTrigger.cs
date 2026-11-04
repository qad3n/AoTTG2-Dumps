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
	[Address(RVA = "0x2938120", Offset = "0x2936720", VA = "0x182938120", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIScrollHandler_002EOnScroll(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C72")]
	[Address(RVA = "0x2937E80", Offset = "0x2936480", VA = "0x182937E80")]
	public IAsyncOnScrollHandler GetOnScrollAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C73")]
	[Address(RVA = "0x2937E00", Offset = "0x2936400", VA = "0x182937E00")]
	public IAsyncOnScrollHandler GetOnScrollAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C74")]
	[Address(RVA = "0x2938000", Offset = "0x2936600", VA = "0x182938000")]
	public UniTask<PointerEventData> OnScrollAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C75")]
	[Address(RVA = "0x2937EF0", Offset = "0x29364F0", VA = "0x182937EF0")]
	public UniTask<PointerEventData> OnScrollAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C76")]
	[Address(RVA = "0x2938170", Offset = "0x2936770", VA = "0x182938170")]
	public AsyncScrollTrigger()
	{
	}
}
