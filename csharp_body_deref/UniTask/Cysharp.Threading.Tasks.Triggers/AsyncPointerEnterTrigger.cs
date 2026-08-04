// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncPointerEnterTrigger
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

[Token(Token = "0x2000218")]
[DisallowMultipleComponent]
public sealed class AsyncPointerEnterTrigger : AsyncTriggerBase<PointerEventData>, IPointerEnterHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x4A175E0", Offset = "0x4A175E0", VA = "0x4A175E0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerEnterHandler_002EOnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C39")]
	[Address(RVA = "0x4A17630", Offset = "0x4A17630", VA = "0x4A17630")]
	public IAsyncOnPointerEnterHandler GetOnPointerEnterAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C3A")]
	[Address(RVA = "0x4A176A0", Offset = "0x4A176A0", VA = "0x4A176A0")]
	public IAsyncOnPointerEnterHandler GetOnPointerEnterAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C3B")]
	[Address(RVA = "0x4A17710", Offset = "0x4A17710", VA = "0x4A17710")]
	public UniTask<PointerEventData> OnPointerEnterAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C3C")]
	[Address(RVA = "0x4A17810", Offset = "0x4A17810", VA = "0x4A17810")]
	public UniTask<PointerEventData> OnPointerEnterAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x4A17920", Offset = "0x4A17920", VA = "0x4A17920")]
	public AsyncPointerEnterTrigger()
	{
	}
}
