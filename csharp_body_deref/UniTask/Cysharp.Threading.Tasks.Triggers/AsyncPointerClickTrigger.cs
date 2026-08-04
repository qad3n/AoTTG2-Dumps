// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncPointerClickTrigger
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

[Token(Token = "0x2000214")]
[DisallowMultipleComponent]
public sealed class AsyncPointerClickTrigger : AsyncTriggerBase<PointerEventData>, IPointerClickHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C2A")]
	[Address(RVA = "0x4A16EE0", Offset = "0x4A16EE0", VA = "0x4A16EE0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerClickHandler_002EOnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000C2B")]
	[Address(RVA = "0x4A16F30", Offset = "0x4A16F30", VA = "0x4A16F30")]
	public IAsyncOnPointerClickHandler GetOnPointerClickAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C2C")]
	[Address(RVA = "0x4A16FA0", Offset = "0x4A16FA0", VA = "0x4A16FA0")]
	public IAsyncOnPointerClickHandler GetOnPointerClickAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C2D")]
	[Address(RVA = "0x4A17010", Offset = "0x4A17010", VA = "0x4A17010")]
	public UniTask<PointerEventData> OnPointerClickAsync()
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C2E")]
	[Address(RVA = "0x4A17110", Offset = "0x4A17110", VA = "0x4A17110")]
	public UniTask<PointerEventData> OnPointerClickAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<PointerEventData>);
	}

	[Token(Token = "0x6000C2F")]
	[Address(RVA = "0x4A17220", Offset = "0x4A17220", VA = "0x4A17220")]
	public AsyncPointerClickTrigger()
	{
	}
}
