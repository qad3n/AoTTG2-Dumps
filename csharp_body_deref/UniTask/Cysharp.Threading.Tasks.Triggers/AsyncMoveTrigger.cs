// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncMoveTrigger
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

[Token(Token = "0x2000212")]
[DisallowMultipleComponent]
public sealed class AsyncMoveTrigger : AsyncTriggerBase<AxisEventData>, IMoveHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C23")]
	[Address(RVA = "0x4A16B60", Offset = "0x4A16B60", VA = "0x4A16B60", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIMoveHandler_002EOnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x6000C24")]
	[Address(RVA = "0x4A16BB0", Offset = "0x4A16BB0", VA = "0x4A16BB0")]
	public IAsyncOnMoveHandler GetOnMoveAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C25")]
	[Address(RVA = "0x4A16C20", Offset = "0x4A16C20", VA = "0x4A16C20")]
	public IAsyncOnMoveHandler GetOnMoveAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C26")]
	[Address(RVA = "0x4A16C90", Offset = "0x4A16C90", VA = "0x4A16C90")]
	public UniTask<AxisEventData> OnMoveAsync()
	{
		return default(UniTask<AxisEventData>);
	}

	[Token(Token = "0x6000C27")]
	[Address(RVA = "0x4A16D90", Offset = "0x4A16D90", VA = "0x4A16D90")]
	public UniTask<AxisEventData> OnMoveAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<AxisEventData>);
	}

	[Token(Token = "0x6000C28")]
	[Address(RVA = "0x4A16EA0", Offset = "0x4A16EA0", VA = "0x4A16EA0")]
	public AsyncMoveTrigger()
	{
	}
}
