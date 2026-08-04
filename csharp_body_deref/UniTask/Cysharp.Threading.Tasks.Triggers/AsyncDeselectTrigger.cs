// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncDeselectTrigger
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

[Token(Token = "0x2000208")]
[DisallowMultipleComponent]
public sealed class AsyncDeselectTrigger : AsyncTriggerBase<BaseEventData>, IDeselectHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C00")]
	[Address(RVA = "0x4A159E0", Offset = "0x4A159E0", VA = "0x4A159E0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIDeselectHandler_002EOnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x4A15A30", Offset = "0x4A15A30", VA = "0x4A15A30")]
	public IAsyncOnDeselectHandler GetOnDeselectAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x4A15AA0", Offset = "0x4A15AA0", VA = "0x4A15AA0")]
	public IAsyncOnDeselectHandler GetOnDeselectAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C03")]
	[Address(RVA = "0x4A15B10", Offset = "0x4A15B10", VA = "0x4A15B10")]
	public UniTask<BaseEventData> OnDeselectAsync()
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C04")]
	[Address(RVA = "0x4A15C10", Offset = "0x4A15C10", VA = "0x4A15C10")]
	public UniTask<BaseEventData> OnDeselectAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C05")]
	[Address(RVA = "0x4A15D20", Offset = "0x4A15D20", VA = "0x4A15D20")]
	public AsyncDeselectTrigger()
	{
	}
}
