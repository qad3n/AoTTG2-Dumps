// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncPointerClickTrigger
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

[Token(Token = "0x2000217")]
[DisallowMultipleComponent]
public sealed class AsyncPointerClickTrigger : AsyncTriggerBase<PointerEventData>, IPointerClickHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x2935080", Offset = "0x2933680", VA = "0x182935080", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerClickHandler_002EOnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x2934DE0", Offset = "0x29333E0", VA = "0x182934DE0")]
	public IAsyncOnPointerClickHandler GetOnPointerClickAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C50")]
	[Address(RVA = "0x2934D60", Offset = "0x2933360", VA = "0x182934D60")]
	public IAsyncOnPointerClickHandler GetOnPointerClickAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C51")]
	[Address(RVA = "0x2934F60", Offset = "0x2933560", VA = "0x182934F60")]
	public UniTask<PointerEventData> OnPointerClickAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C52")]
	[Address(RVA = "0x2934E50", Offset = "0x2933450", VA = "0x182934E50")]
	public UniTask<PointerEventData> OnPointerClickAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C53")]
	[Address(RVA = "0x29350D0", Offset = "0x29336D0", VA = "0x1829350D0")]
	public AsyncPointerClickTrigger()
	{
	}
}
