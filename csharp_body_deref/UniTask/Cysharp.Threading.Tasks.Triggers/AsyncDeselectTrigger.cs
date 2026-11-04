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

[Token(Token = "0x200020B")]
[DisallowMultipleComponent]
public sealed class AsyncDeselectTrigger : AsyncTriggerBase<BaseEventData>, IDeselectHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C24")]
	[Address(RVA = "0x292C490", Offset = "0x292AA90", VA = "0x18292C490", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIDeselectHandler_002EOnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000C25")]
	[Address(RVA = "0x292C170", Offset = "0x292A770", VA = "0x18292C170")]
	public IAsyncOnDeselectHandler GetOnDeselectAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C26")]
	[Address(RVA = "0x292C1E0", Offset = "0x292A7E0", VA = "0x18292C1E0")]
	public IAsyncOnDeselectHandler GetOnDeselectAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C27")]
	[Address(RVA = "0x292C260", Offset = "0x292A860", VA = "0x18292C260")]
	public UniTask<BaseEventData> OnDeselectAsync()
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C28")]
	[Address(RVA = "0x292C380", Offset = "0x292A980", VA = "0x18292C380")]
	public UniTask<BaseEventData> OnDeselectAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C29")]
	[Address(RVA = "0x292C4E0", Offset = "0x292AAE0", VA = "0x18292C4E0")]
	public AsyncDeselectTrigger()
	{
	}
}
