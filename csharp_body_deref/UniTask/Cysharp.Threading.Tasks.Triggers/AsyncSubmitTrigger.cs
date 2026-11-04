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
	[Address(RVA = "0x2938E60", Offset = "0x2937460", VA = "0x182938E60", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EISubmitHandler_002EOnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000C80")]
	[Address(RVA = "0x2938B40", Offset = "0x2937140", VA = "0x182938B40")]
	public IAsyncOnSubmitHandler GetOnSubmitAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C81")]
	[Address(RVA = "0x2938BB0", Offset = "0x29371B0", VA = "0x182938BB0")]
	public IAsyncOnSubmitHandler GetOnSubmitAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C82")]
	[Address(RVA = "0x2938D40", Offset = "0x2937340", VA = "0x182938D40")]
	public UniTask<BaseEventData> OnSubmitAsync()
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C83")]
	[Address(RVA = "0x2938C30", Offset = "0x2937230", VA = "0x182938C30")]
	public UniTask<BaseEventData> OnSubmitAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C84")]
	[Address(RVA = "0x2938EB0", Offset = "0x29374B0", VA = "0x182938EB0")]
	public AsyncSubmitTrigger()
	{
	}
}
