// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncEndDragTrigger
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

[Token(Token = "0x200020E")]
[DisallowMultipleComponent]
public sealed class AsyncEndDragTrigger : AsyncTriggerBase<PointerEventData>, IEndDragHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x4A16460", Offset = "0x4A16460", VA = "0x4A16460", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIEndDragHandler_002EOnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x4A164B0", Offset = "0x4A164B0", VA = "0x4A164B0")]
	public IAsyncOnEndDragHandler GetOnEndDragAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x4A16520", Offset = "0x4A16520", VA = "0x4A16520")]
	public IAsyncOnEndDragHandler GetOnEndDragAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C18")]
	[Address(RVA = "0x4A16590", Offset = "0x4A16590", VA = "0x4A16590")]
	public UniTask<PointerEventData> OnEndDragAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C19")]
	[Address(RVA = "0x4A16690", Offset = "0x4A16690", VA = "0x4A16690")]
	public UniTask<PointerEventData> OnEndDragAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C1A")]
	[Address(RVA = "0x4A167A0", Offset = "0x4A167A0", VA = "0x4A167A0")]
	public AsyncEndDragTrigger()
	{
	}
}
