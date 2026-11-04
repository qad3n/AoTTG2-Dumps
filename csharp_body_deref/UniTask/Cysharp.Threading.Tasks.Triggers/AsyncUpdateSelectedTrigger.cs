// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncUpdateSelectedTrigger
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

[Token(Token = "0x2000227")]
[DisallowMultipleComponent]
public sealed class AsyncUpdateSelectedTrigger : AsyncTriggerBase<BaseEventData>, IUpdateSelectedHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C86")]
	[Address(RVA = "0x293ED10", Offset = "0x293D310", VA = "0x18293ED10", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIUpdateSelectedHandler_002EOnUpdateSelected(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000C87")]
	[Address(RVA = "0x293E9F0", Offset = "0x293CFF0", VA = "0x18293E9F0")]
	public IAsyncOnUpdateSelectedHandler GetOnUpdateSelectedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C88")]
	[Address(RVA = "0x293EA60", Offset = "0x293D060", VA = "0x18293EA60")]
	public IAsyncOnUpdateSelectedHandler GetOnUpdateSelectedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C89")]
	[Address(RVA = "0x293EBF0", Offset = "0x293D1F0", VA = "0x18293EBF0")]
	public UniTask<BaseEventData> OnUpdateSelectedAsync()
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C8A")]
	[Address(RVA = "0x293EAE0", Offset = "0x293D0E0", VA = "0x18293EAE0")]
	public UniTask<BaseEventData> OnUpdateSelectedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C8B")]
	[Address(RVA = "0x293ED60", Offset = "0x293D360", VA = "0x18293ED60")]
	public AsyncUpdateSelectedTrigger()
	{
	}
}
