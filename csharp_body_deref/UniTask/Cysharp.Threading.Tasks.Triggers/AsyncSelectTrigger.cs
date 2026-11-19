// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncSelectTrigger
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

[Token(Token = "0x2000223")]
[DisallowMultipleComponent]
public sealed class AsyncSelectTrigger : AsyncTriggerBase<BaseEventData>, ISelectHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x6305DB0", Offset = "0x6304DB0", VA = "0x6305DB0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EISelectHandler_002EOnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x6305E00", Offset = "0x6304E00", VA = "0x6305E00")]
	public IAsyncOnSelectHandler GetOnSelectAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C7A")]
	[Address(RVA = "0x6305E70", Offset = "0x6304E70", VA = "0x6305E70")]
	public IAsyncOnSelectHandler GetOnSelectAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C7B")]
	[Address(RVA = "0x6305EE0", Offset = "0x6304EE0", VA = "0x6305EE0")]
	public UniTask<BaseEventData> OnSelectAsync()
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C7C")]
	[Address(RVA = "0x6305FE0", Offset = "0x6304FE0", VA = "0x6305FE0")]
	public UniTask<BaseEventData> OnSelectAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C7D")]
	[Address(RVA = "0x63060F0", Offset = "0x63050F0", VA = "0x63060F0")]
	public AsyncSelectTrigger()
	{
	}
}
