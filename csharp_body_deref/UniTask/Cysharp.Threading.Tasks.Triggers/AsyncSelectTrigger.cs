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

[Token(Token = "0x2000223")]
[DisallowMultipleComponent]
public sealed class AsyncSelectTrigger : AsyncTriggerBase<BaseEventData>, ISelectHandler, IEventSystemHandler
{
	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x29384D0", Offset = "0x2936AD0", VA = "0x1829384D0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EISelectHandler_002EOnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x2938230", Offset = "0x2936830", VA = "0x182938230")]
	public IAsyncOnSelectHandler GetOnSelectAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C7A")]
	[Address(RVA = "0x29381B0", Offset = "0x29367B0", VA = "0x1829381B0")]
	public IAsyncOnSelectHandler GetOnSelectAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C7B")]
	[Address(RVA = "0x29383B0", Offset = "0x29369B0", VA = "0x1829383B0")]
	public UniTask<BaseEventData> OnSelectAsync()
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C7C")]
	[Address(RVA = "0x29382A0", Offset = "0x29368A0", VA = "0x1829382A0")]
	public UniTask<BaseEventData> OnSelectAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<BaseEventData>);
	}

	[Token(Token = "0x6000C7D")]
	[Address(RVA = "0x2938520", Offset = "0x2936B20", VA = "0x182938520")]
	public AsyncSelectTrigger()
	{
	}
}
