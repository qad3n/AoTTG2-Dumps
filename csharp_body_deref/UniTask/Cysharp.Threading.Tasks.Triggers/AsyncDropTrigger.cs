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

[Token(Token = "0x200020F")]
[DisallowMultipleComponent]
public sealed class AsyncDropTrigger : AsyncTriggerBase<PointerEventData>, IDropHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C32")]
	[Address(RVA = "0x292DB20", Offset = "0x292C120", VA = "0x18292DB20", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIDropHandler_002EOnDrop(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C33")]
	[Address(RVA = "0x292D800", Offset = "0x292BE00", VA = "0x18292D800")]
	public IAsyncOnDropHandler GetOnDropAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x292D870", Offset = "0x292BE70", VA = "0x18292D870")]
	public IAsyncOnDropHandler GetOnDropAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C35")]
	[Address(RVA = "0x292D8F0", Offset = "0x292BEF0", VA = "0x18292D8F0")]
	public UniTask<PointerEventData> OnDropAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x292DA10", Offset = "0x292C010", VA = "0x18292DA10")]
	public UniTask<PointerEventData> OnDropAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x292DB70", Offset = "0x292C170", VA = "0x18292DB70")]
	public AsyncDropTrigger()
	{
	}
}
