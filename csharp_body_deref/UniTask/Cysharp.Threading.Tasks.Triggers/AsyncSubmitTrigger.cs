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

[Token(Token = "0x2000222")]
[DisallowMultipleComponent]
public sealed class AsyncSubmitTrigger : AsyncTriggerBase<BaseEventData>, ISubmitHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C5B")]
	[Address(RVA = "0x4A18760", Offset = "0x4A18760", VA = "0x4A18760", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EISubmitHandler_002EOnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000C5C")]
	[Address(RVA = "0x4A187B0", Offset = "0x4A187B0", VA = "0x4A187B0")]
	public IAsyncOnSubmitHandler GetOnSubmitAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C5D")]
	[Address(RVA = "0x4A18820", Offset = "0x4A18820", VA = "0x4A18820")]
	public IAsyncOnSubmitHandler GetOnSubmitAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C5E")]
	[Address(RVA = "0x4A18890", Offset = "0x4A18890", VA = "0x4A18890")]
	public UniTask<BaseEventData> OnSubmitAsync()
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C5F")]
	[Address(RVA = "0x4A18990", Offset = "0x4A18990", VA = "0x4A18990")]
	public UniTask<BaseEventData> OnSubmitAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C60")]
	[Address(RVA = "0x4A18AA0", Offset = "0x4A18AA0", VA = "0x4A18AA0")]
	public AsyncSubmitTrigger()
	{
	}
}
