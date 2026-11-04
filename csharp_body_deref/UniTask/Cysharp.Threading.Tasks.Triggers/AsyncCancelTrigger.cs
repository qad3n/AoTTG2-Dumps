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
	[Address(RVA = "0x292A710", Offset = "0x2928D10", VA = "0x18292A710", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EICancelHandler_002EOnCancel(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000C1E")]
	[Address(RVA = "0x292A470", Offset = "0x2928A70", VA = "0x18292A470")]
	public IAsyncOnCancelHandler GetOnCancelAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C1F")]
	[Address(RVA = "0x292A3F0", Offset = "0x29289F0", VA = "0x18292A3F0")]
	public IAsyncOnCancelHandler GetOnCancelAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C20")]
	[Address(RVA = "0x292A5F0", Offset = "0x2928BF0", VA = "0x18292A5F0")]
	public UniTask<BaseEventData> OnCancelAsync()
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C21")]
	[Address(RVA = "0x292A4E0", Offset = "0x2928AE0", VA = "0x18292A4E0")]
	public UniTask<BaseEventData> OnCancelAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C22")]
	[Address(RVA = "0x292A760", Offset = "0x2928D60", VA = "0x18292A760")]
	public AsyncCancelTrigger()
	{
	}
}
