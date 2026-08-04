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

[Token(Token = "0x2000206")]
[DisallowMultipleComponent]
public sealed class AsyncCancelTrigger : AsyncTriggerBase<BaseEventData>, ICancelHandler, IEventSystemHandler
{
	[Token(Token = "0x6000BF9")]
	[Address(RVA = "0x4A15660", Offset = "0x4A15660", VA = "0x4A15660", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EICancelHandler_002EOnCancel(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000BFA")]
	[Address(RVA = "0x4A156B0", Offset = "0x4A156B0", VA = "0x4A156B0")]
	public IAsyncOnCancelHandler GetOnCancelAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x4A15720", Offset = "0x4A15720", VA = "0x4A15720")]
	public IAsyncOnCancelHandler GetOnCancelAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x4A15790", Offset = "0x4A15790", VA = "0x4A15790")]
	public UniTask<BaseEventData> OnCancelAsync()
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x4A15890", Offset = "0x4A15890", VA = "0x4A15890")]
	public UniTask<BaseEventData> OnCancelAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000BFE")]
	[Address(RVA = "0x4A159A0", Offset = "0x4A159A0", VA = "0x4A159A0")]
	public AsyncCancelTrigger()
	{
	}
}
