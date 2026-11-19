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

[Token(Token = "0x2000215")]
[DisallowMultipleComponent]
public sealed class AsyncMoveTrigger : AsyncTriggerBase<AxisEventData>, IMoveHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x6304530", Offset = "0x6303530", VA = "0x6304530", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIMoveHandler_002EOnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x6000C48")]
	[Address(RVA = "0x6304580", Offset = "0x6303580", VA = "0x6304580")]
	public IAsyncOnMoveHandler GetOnMoveAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x63045F0", Offset = "0x63035F0", VA = "0x63045F0")]
	public IAsyncOnMoveHandler GetOnMoveAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x6304660", Offset = "0x6303660", VA = "0x6304660")]
	public UniTask<AxisEventData> OnMoveAsync()
	{
		return default(UniTask<AxisEventData>);
	}

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x6304760", Offset = "0x6303760", VA = "0x6304760")]
	public UniTask<AxisEventData> OnMoveAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<AxisEventData>);
	}

	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x6304870", Offset = "0x6303870", VA = "0x6304870")]
	public AsyncMoveTrigger()
	{
	}
}
