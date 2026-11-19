// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncPointerDownTrigger
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

[Token(Token = "0x2000219")]
[DisallowMultipleComponent]
public sealed class AsyncPointerDownTrigger : AsyncTriggerBase<PointerEventData>, IPointerDownHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C55")]
	[Address(RVA = "0x6304C30", Offset = "0x6303C30", VA = "0x6304C30", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerDownHandler_002EOnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C56")]
	[Address(RVA = "0x6304C80", Offset = "0x6303C80", VA = "0x6304C80")]
	public IAsyncOnPointerDownHandler GetOnPointerDownAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C57")]
	[Address(RVA = "0x6304CF0", Offset = "0x6303CF0", VA = "0x6304CF0")]
	public IAsyncOnPointerDownHandler GetOnPointerDownAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C58")]
	[Address(RVA = "0x6304D60", Offset = "0x6303D60", VA = "0x6304D60")]
	public UniTask<PointerEventData> OnPointerDownAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C59")]
	[Address(RVA = "0x6304E60", Offset = "0x6303E60", VA = "0x6304E60")]
	public UniTask<PointerEventData> OnPointerDownAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C5A")]
	[Address(RVA = "0x6304F70", Offset = "0x6303F70", VA = "0x6304F70")]
	public AsyncPointerDownTrigger()
	{
	}
}
