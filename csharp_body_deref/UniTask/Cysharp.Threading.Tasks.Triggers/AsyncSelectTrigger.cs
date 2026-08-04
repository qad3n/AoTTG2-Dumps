// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncSelectTrigger
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

[Token(Token = "0x2000220")]
[DisallowMultipleComponent]
public sealed class AsyncSelectTrigger : AsyncTriggerBase<BaseEventData>, ISelectHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x4A183E0", Offset = "0x4A183E0", VA = "0x4A183E0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EISelectHandler_002EOnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000C55")]
	[Address(RVA = "0x4A18430", Offset = "0x4A18430", VA = "0x4A18430")]
	public IAsyncOnSelectHandler GetOnSelectAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C56")]
	[Address(RVA = "0x4A184A0", Offset = "0x4A184A0", VA = "0x4A184A0")]
	public IAsyncOnSelectHandler GetOnSelectAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C57")]
	[Address(RVA = "0x4A18510", Offset = "0x4A18510", VA = "0x4A18510")]
	public UniTask<BaseEventData> OnSelectAsync()
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C58")]
	[Address(RVA = "0x4A18610", Offset = "0x4A18610", VA = "0x4A18610")]
	public UniTask<BaseEventData> OnSelectAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C59")]
	[Address(RVA = "0x4A18720", Offset = "0x4A18720", VA = "0x4A18720")]
	public AsyncSelectTrigger()
	{
	}
}
