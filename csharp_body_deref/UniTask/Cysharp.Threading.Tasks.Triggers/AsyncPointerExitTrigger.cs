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
	[Address(RVA = "0x2935B90", Offset = "0x2934190", VA = "0x182935B90", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerExitHandler_002EOnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C64")]
	[Address(RVA = "0x29358F0", Offset = "0x2933EF0", VA = "0x1829358F0")]
	public IAsyncOnPointerExitHandler GetOnPointerExitAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C65")]
	[Address(RVA = "0x2935870", Offset = "0x2933E70", VA = "0x182935870")]
	public IAsyncOnPointerExitHandler GetOnPointerExitAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C66")]
	[Address(RVA = "0x2935960", Offset = "0x2933F60", VA = "0x182935960")]
	public UniTask<PointerEventData> OnPointerExitAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C67")]
	[Address(RVA = "0x2935A80", Offset = "0x2934080", VA = "0x182935A80")]
	public UniTask<PointerEventData> OnPointerExitAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C68")]
	[Address(RVA = "0x2935BE0", Offset = "0x29341E0", VA = "0x182935BE0")]
	public AsyncPointerExitTrigger()
	{
	}
}
