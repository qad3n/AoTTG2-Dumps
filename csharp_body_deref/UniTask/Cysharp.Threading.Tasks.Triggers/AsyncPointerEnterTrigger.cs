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
	[Address(RVA = "0x6304FB0", Offset = "0x6303FB0", VA = "0x6304FB0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerEnterHandler_002EOnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C5D")]
	[Address(RVA = "0x6305000", Offset = "0x6304000", VA = "0x6305000")]
	public IAsyncOnPointerEnterHandler GetOnPointerEnterAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C5E")]
	[Address(RVA = "0x6305070", Offset = "0x6304070", VA = "0x6305070")]
	public IAsyncOnPointerEnterHandler GetOnPointerEnterAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C5F")]
	[Address(RVA = "0x63050E0", Offset = "0x63040E0", VA = "0x63050E0")]
	public UniTask<PointerEventData> OnPointerEnterAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C60")]
	[Address(RVA = "0x63051E0", Offset = "0x63041E0", VA = "0x63051E0")]
	public UniTask<PointerEventData> OnPointerEnterAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C61")]
	[Address(RVA = "0x63052F0", Offset = "0x63042F0", VA = "0x63052F0")]
	public AsyncPointerEnterTrigger()
	{
	}
}
