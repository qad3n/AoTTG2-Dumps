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

[Token(Token = "0x2000216")]
[DisallowMultipleComponent]
public sealed class AsyncPointerDownTrigger : AsyncTriggerBase<PointerEventData>, IPointerDownHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C31")]
	[Address(RVA = "0x4A17260", Offset = "0x4A17260", VA = "0x4A17260", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerDownHandler_002EOnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C32")]
	[Address(RVA = "0x4A172B0", Offset = "0x4A172B0", VA = "0x4A172B0")]
	public IAsyncOnPointerDownHandler GetOnPointerDownAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C33")]
	[Address(RVA = "0x4A17320", Offset = "0x4A17320", VA = "0x4A17320")]
	public IAsyncOnPointerDownHandler GetOnPointerDownAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x4A17390", Offset = "0x4A17390", VA = "0x4A17390")]
	public UniTask<PointerEventData> OnPointerDownAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C35")]
	[Address(RVA = "0x4A17490", Offset = "0x4A17490", VA = "0x4A17490")]
	public UniTask<PointerEventData> OnPointerDownAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x4A175A0", Offset = "0x4A175A0", VA = "0x4A175A0")]
	public AsyncPointerDownTrigger()
	{
	}
}
