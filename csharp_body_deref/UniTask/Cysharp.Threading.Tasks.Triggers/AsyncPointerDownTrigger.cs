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
	[Address(RVA = "0x2935430", Offset = "0x2933A30", VA = "0x182935430", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerDownHandler_002EOnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C56")]
	[Address(RVA = "0x2935110", Offset = "0x2933710", VA = "0x182935110")]
	public IAsyncOnPointerDownHandler GetOnPointerDownAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C57")]
	[Address(RVA = "0x2935180", Offset = "0x2933780", VA = "0x182935180")]
	public IAsyncOnPointerDownHandler GetOnPointerDownAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C58")]
	[Address(RVA = "0x2935200", Offset = "0x2933800", VA = "0x182935200")]
	public UniTask<PointerEventData> OnPointerDownAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C59")]
	[Address(RVA = "0x2935320", Offset = "0x2933920", VA = "0x182935320")]
	public UniTask<PointerEventData> OnPointerDownAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C5A")]
	[Address(RVA = "0x2935480", Offset = "0x2933A80", VA = "0x182935480")]
	public AsyncPointerDownTrigger()
	{
	}
}
