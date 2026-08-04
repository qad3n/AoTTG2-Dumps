// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncDropTrigger
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

[Token(Token = "0x200020C")]
[DisallowMultipleComponent]
public sealed class AsyncDropTrigger : AsyncTriggerBase<PointerEventData>, IDropHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x4A160E0", Offset = "0x4A160E0", VA = "0x4A160E0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIDropHandler_002EOnDrop(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x4A16130", Offset = "0x4A16130", VA = "0x4A16130")]
	public IAsyncOnDropHandler GetOnDropAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x4A161A0", Offset = "0x4A161A0", VA = "0x4A161A0")]
	public IAsyncOnDropHandler GetOnDropAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C11")]
	[Address(RVA = "0x4A16210", Offset = "0x4A16210", VA = "0x4A16210")]
	public UniTask<PointerEventData> OnDropAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C12")]
	[Address(RVA = "0x4A16310", Offset = "0x4A16310", VA = "0x4A16310")]
	public UniTask<PointerEventData> OnDropAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C13")]
	[Address(RVA = "0x4A16420", Offset = "0x4A16420", VA = "0x4A16420")]
	public AsyncDropTrigger()
	{
	}
}
