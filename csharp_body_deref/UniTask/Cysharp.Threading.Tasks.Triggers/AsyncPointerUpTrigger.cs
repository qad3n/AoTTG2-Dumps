// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncPointerUpTrigger
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

[Token(Token = "0x200021F")]
[DisallowMultipleComponent]
public sealed class AsyncPointerUpTrigger : AsyncTriggerBase<PointerEventData>, IPointerUpHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C6A")]
	[Address(RVA = "0x2935F40", Offset = "0x2934540", VA = "0x182935F40", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerUpHandler_002EOnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C6B")]
	[Address(RVA = "0x2935CA0", Offset = "0x29342A0", VA = "0x182935CA0")]
	public IAsyncOnPointerUpHandler GetOnPointerUpAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C6C")]
	[Address(RVA = "0x2935C20", Offset = "0x2934220", VA = "0x182935C20")]
	public IAsyncOnPointerUpHandler GetOnPointerUpAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C6D")]
	[Address(RVA = "0x2935E20", Offset = "0x2934420", VA = "0x182935E20")]
	public UniTask<PointerEventData> OnPointerUpAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C6E")]
	[Address(RVA = "0x2935D10", Offset = "0x2934310", VA = "0x182935D10")]
	public UniTask<PointerEventData> OnPointerUpAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C6F")]
	[Address(RVA = "0x2935F90", Offset = "0x2934590", VA = "0x182935F90")]
	public AsyncPointerUpTrigger()
	{
	}
}
