// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncPointerUpTrigger
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

[Token(Token = "0x200021C")]
[DisallowMultipleComponent]
public sealed class AsyncPointerUpTrigger : AsyncTriggerBase<PointerEventData>, IPointerUpHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x4A17CE0", Offset = "0x4A17CE0", VA = "0x4A17CE0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerUpHandler_002EOnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x4A17D30", Offset = "0x4A17D30", VA = "0x4A17D30")]
	public IAsyncOnPointerUpHandler GetOnPointerUpAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C48")]
	[Address(RVA = "0x4A17DA0", Offset = "0x4A17DA0", VA = "0x4A17DA0")]
	public IAsyncOnPointerUpHandler GetOnPointerUpAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x4A17E10", Offset = "0x4A17E10", VA = "0x4A17E10")]
	public UniTask<PointerEventData> OnPointerUpAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x4A17F10", Offset = "0x4A17F10", VA = "0x4A17F10")]
	public UniTask<PointerEventData> OnPointerUpAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x4A18020", Offset = "0x4A18020", VA = "0x4A18020")]
	public AsyncPointerUpTrigger()
	{
	}
}
