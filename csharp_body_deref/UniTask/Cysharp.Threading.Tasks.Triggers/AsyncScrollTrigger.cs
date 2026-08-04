// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncScrollTrigger
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

[Token(Token = "0x200021E")]
[DisallowMultipleComponent]
public sealed class AsyncScrollTrigger : AsyncTriggerBase<PointerEventData>, IScrollHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x4A18060", Offset = "0x4A18060", VA = "0x4A18060", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIScrollHandler_002EOnScroll(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x4A180B0", Offset = "0x4A180B0", VA = "0x4A180B0")]
	public IAsyncOnScrollHandler GetOnScrollAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x4A18120", Offset = "0x4A18120", VA = "0x4A18120")]
	public IAsyncOnScrollHandler GetOnScrollAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C50")]
	[Address(RVA = "0x4A18190", Offset = "0x4A18190", VA = "0x4A18190")]
	public UniTask<PointerEventData> OnScrollAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C51")]
	[Address(RVA = "0x4A18290", Offset = "0x4A18290", VA = "0x4A18290")]
	public UniTask<PointerEventData> OnScrollAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C52")]
	[Address(RVA = "0x4A183A0", Offset = "0x4A183A0", VA = "0x4A183A0")]
	public AsyncScrollTrigger()
	{
	}
}
