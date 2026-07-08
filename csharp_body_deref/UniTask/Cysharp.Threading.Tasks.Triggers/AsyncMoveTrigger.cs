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
	[Address(RVA = "0x46F1A60", Offset = "0x46F1A60", VA = "0x46F1A60", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIMoveHandler_002EOnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x6000C24")]
	[Address(RVA = "0x46F1AB0", Offset = "0x46F1AB0", VA = "0x46F1AB0")]
	public IAsyncOnMoveHandler GetOnMoveAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C25")]
	[Address(RVA = "0x46F1B20", Offset = "0x46F1B20", VA = "0x46F1B20")]
	public IAsyncOnMoveHandler GetOnMoveAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C26")]
	[Address(RVA = "0x46F1B90", Offset = "0x46F1B90", VA = "0x46F1B90")]
	public UniTask<AxisEventData> OnMoveAsync()
	{
		return default(UniTask<AxisEventData>);
	}

	[Token(Token = "0x6000C27")]
	[Address(RVA = "0x46F1C90", Offset = "0x46F1C90", VA = "0x46F1C90")]
	public UniTask<AxisEventData> OnMoveAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<AxisEventData>);
	}

	[Token(Token = "0x6000C28")]
	[Address(RVA = "0x46F1DA0", Offset = "0x46F1DA0", VA = "0x46F1DA0")]
	public AsyncMoveTrigger()
	{
	}
}
