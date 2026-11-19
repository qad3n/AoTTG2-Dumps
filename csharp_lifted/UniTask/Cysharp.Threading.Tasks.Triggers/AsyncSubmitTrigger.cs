// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncSubmitTrigger
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

[Token(Token = "0x2000225")]
[DisallowMultipleComponent]
public sealed class AsyncSubmitTrigger : AsyncTriggerBase<BaseEventData>, ISubmitHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C7F")]
	[Address(RVA = "0x6306130", Offset = "0x6305130", VA = "0x6306130", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EISubmitHandler_002EOnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000C80")]
	[Address(RVA = "0x6306180", Offset = "0x6305180", VA = "0x6306180")]
	public IAsyncOnSubmitHandler GetOnSubmitAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C81")]
	[Address(RVA = "0x63061F0", Offset = "0x63051F0", VA = "0x63061F0")]
	public IAsyncOnSubmitHandler GetOnSubmitAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C82")]
	[Address(RVA = "0x6306260", Offset = "0x6305260", VA = "0x6306260")]
	public UniTask<BaseEventData> OnSubmitAsync()
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C83")]
	[Address(RVA = "0x6306360", Offset = "0x6305360", VA = "0x6306360")]
	public UniTask<BaseEventData> OnSubmitAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C84")]
	[Address(RVA = "0x6306470", Offset = "0x6305470", VA = "0x6306470")]
	public AsyncSubmitTrigger()
	{
	}
}
