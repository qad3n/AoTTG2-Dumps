// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncInitializePotentialDragTrigger
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

[Token(Token = "0x2000210")]
[DisallowMultipleComponent]
public sealed class AsyncInitializePotentialDragTrigger : AsyncTriggerBase<PointerEventData>, IInitializePotentialDragHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C1C")]
	[Address(RVA = "0x4A167E0", Offset = "0x4A167E0", VA = "0x4A167E0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIInitializePotentialDragHandler_002EOnInitializePotentialDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x4A16830", Offset = "0x4A16830", VA = "0x4A16830")]
	public IAsyncOnInitializePotentialDragHandler GetOnInitializePotentialDragAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C1E")]
	[Address(RVA = "0x4A168A0", Offset = "0x4A168A0", VA = "0x4A168A0")]
	public IAsyncOnInitializePotentialDragHandler GetOnInitializePotentialDragAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C1F")]
	[Address(RVA = "0x4A16910", Offset = "0x4A16910", VA = "0x4A16910")]
	public UniTask<PointerEventData> OnInitializePotentialDragAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C20")]
	[Address(RVA = "0x4A16A10", Offset = "0x4A16A10", VA = "0x4A16A10")]
	public UniTask<PointerEventData> OnInitializePotentialDragAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C21")]
	[Address(RVA = "0x4A16B20", Offset = "0x4A16B20", VA = "0x4A16B20")]
	public AsyncInitializePotentialDragTrigger()
	{
	}
}
