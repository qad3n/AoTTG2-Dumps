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
	[Address(RVA = "0x2932DE0", Offset = "0x29313E0", VA = "0x182932DE0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIMoveHandler_002EOnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x6000C48")]
	[Address(RVA = "0x2932B40", Offset = "0x2931140", VA = "0x182932B40")]
	public IAsyncOnMoveHandler GetOnMoveAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x2932AC0", Offset = "0x29310C0", VA = "0x182932AC0")]
	public IAsyncOnMoveHandler GetOnMoveAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x2932CC0", Offset = "0x29312C0", VA = "0x182932CC0")]
	public UniTask<AxisEventData> OnMoveAsync()
	{
		return default(UniTask<AxisEventData>);
	}

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x2932BB0", Offset = "0x29311B0", VA = "0x182932BB0")]
	public UniTask<AxisEventData> OnMoveAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<AxisEventData>);
	}

	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x2932E30", Offset = "0x2931430", VA = "0x182932E30")]
	public AsyncMoveTrigger()
	{
	}
}
