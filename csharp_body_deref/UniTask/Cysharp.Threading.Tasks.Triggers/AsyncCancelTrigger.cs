// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncCancelTrigger
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

[Token(Token = "0x2000209")]
[DisallowMultipleComponent]
public sealed class AsyncCancelTrigger : AsyncTriggerBase<BaseEventData>, ICancelHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x6303030", Offset = "0x6302030", VA = "0x6303030", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EICancelHandler_002EOnCancel(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000C1E")]
	[Address(RVA = "0x6303080", Offset = "0x6302080", VA = "0x6303080")]
	public IAsyncOnCancelHandler GetOnCancelAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C1F")]
	[Address(RVA = "0x63030F0", Offset = "0x63020F0", VA = "0x63030F0")]
	public IAsyncOnCancelHandler GetOnCancelAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C20")]
	[Address(RVA = "0x6303160", Offset = "0x6302160", VA = "0x6303160")]
	public UniTask<BaseEventData> OnCancelAsync()
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C21")]
	[Address(RVA = "0x6303260", Offset = "0x6302260", VA = "0x6303260")]
	public UniTask<BaseEventData> OnCancelAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C22")]
	[Address(RVA = "0x6303370", Offset = "0x6302370", VA = "0x6303370")]
	public AsyncCancelTrigger()
	{
	}
}
