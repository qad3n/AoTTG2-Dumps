// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncUpdateSelectedTrigger
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

[Token(Token = "0x2000224")]
[DisallowMultipleComponent]
public sealed class AsyncUpdateSelectedTrigger : AsyncTriggerBase<BaseEventData>, IUpdateSelectedHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C62")]
	[Address(RVA = "0x4A18AE0", Offset = "0x4A18AE0", VA = "0x4A18AE0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIUpdateSelectedHandler_002EOnUpdateSelected(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000C63")]
	[Address(RVA = "0x4A18B30", Offset = "0x4A18B30", VA = "0x4A18B30")]
	public IAsyncOnUpdateSelectedHandler GetOnUpdateSelectedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C64")]
	[Address(RVA = "0x4A18BA0", Offset = "0x4A18BA0", VA = "0x4A18BA0")]
	public IAsyncOnUpdateSelectedHandler GetOnUpdateSelectedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C65")]
	[Address(RVA = "0x4A18C10", Offset = "0x4A18C10", VA = "0x4A18C10")]
	public UniTask<BaseEventData> OnUpdateSelectedAsync()
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C66")]
	[Address(RVA = "0x4A18D10", Offset = "0x4A18D10", VA = "0x4A18D10")]
	public UniTask<BaseEventData> OnUpdateSelectedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C67")]
	[Address(RVA = "0x4A18E20", Offset = "0x4A18E20", VA = "0x4A18E20")]
	public AsyncUpdateSelectedTrigger()
	{
	}
}
