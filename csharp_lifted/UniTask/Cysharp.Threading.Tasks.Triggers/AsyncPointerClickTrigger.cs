// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncPointerClickTrigger
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

[Token(Token = "0x2000217")]
[DisallowMultipleComponent]
public sealed class AsyncPointerClickTrigger : AsyncTriggerBase<PointerEventData>, IPointerClickHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x63048B0", Offset = "0x63038B0", VA = "0x63048B0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerClickHandler_002EOnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x6304900", Offset = "0x6303900", VA = "0x6304900")]
	public IAsyncOnPointerClickHandler GetOnPointerClickAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C50")]
	[Address(RVA = "0x6304970", Offset = "0x6303970", VA = "0x6304970")]
	public IAsyncOnPointerClickHandler GetOnPointerClickAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C51")]
	[Address(RVA = "0x63049E0", Offset = "0x63039E0", VA = "0x63049E0")]
	public UniTask<PointerEventData> OnPointerClickAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C52")]
	[Address(RVA = "0x6304AE0", Offset = "0x6303AE0", VA = "0x6304AE0")]
	public UniTask<PointerEventData> OnPointerClickAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C53")]
	[Address(RVA = "0x6304BF0", Offset = "0x6303BF0", VA = "0x6304BF0")]
	public AsyncPointerClickTrigger()
	{
	}
}
