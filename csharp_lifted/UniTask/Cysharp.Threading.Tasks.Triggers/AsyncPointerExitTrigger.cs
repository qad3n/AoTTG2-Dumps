// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncPointerExitTrigger
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

[Token(Token = "0x200021D")]
[DisallowMultipleComponent]
public sealed class AsyncPointerExitTrigger : AsyncTriggerBase<PointerEventData>, IPointerExitHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C63")]
	[Address(RVA = "0x6305330", Offset = "0x6304330", VA = "0x6305330", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerExitHandler_002EOnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C64")]
	[Address(RVA = "0x6305380", Offset = "0x6304380", VA = "0x6305380")]
	public IAsyncOnPointerExitHandler GetOnPointerExitAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C65")]
	[Address(RVA = "0x63053F0", Offset = "0x63043F0", VA = "0x63053F0")]
	public IAsyncOnPointerExitHandler GetOnPointerExitAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C66")]
	[Address(RVA = "0x6305460", Offset = "0x6304460", VA = "0x6305460")]
	public UniTask<PointerEventData> OnPointerExitAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C67")]
	[Address(RVA = "0x6305560", Offset = "0x6304560", VA = "0x6305560")]
	public UniTask<PointerEventData> OnPointerExitAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C68")]
	[Address(RVA = "0x6305670", Offset = "0x6304670", VA = "0x6305670")]
	public AsyncPointerExitTrigger()
	{
	}
}
