// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncPointerEnterTrigger
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

[Token(Token = "0x200021B")]
[DisallowMultipleComponent]
public sealed class AsyncPointerEnterTrigger : AsyncTriggerBase<PointerEventData>, IPointerEnterHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C5C")]
	[Address(RVA = "0x29357E0", Offset = "0x2933DE0", VA = "0x1829357E0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerEnterHandler_002EOnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C5D")]
	[Address(RVA = "0x29354C0", Offset = "0x2933AC0", VA = "0x1829354C0")]
	public IAsyncOnPointerEnterHandler GetOnPointerEnterAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C5E")]
	[Address(RVA = "0x2935530", Offset = "0x2933B30", VA = "0x182935530")]
	public IAsyncOnPointerEnterHandler GetOnPointerEnterAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C5F")]
	[Address(RVA = "0x29356C0", Offset = "0x2933CC0", VA = "0x1829356C0")]
	public UniTask<PointerEventData> OnPointerEnterAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C60")]
	[Address(RVA = "0x29355B0", Offset = "0x2933BB0", VA = "0x1829355B0")]
	public UniTask<PointerEventData> OnPointerEnterAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C61")]
	[Address(RVA = "0x2935830", Offset = "0x2933E30", VA = "0x182935830")]
	public AsyncPointerEnterTrigger()
	{
	}
}
