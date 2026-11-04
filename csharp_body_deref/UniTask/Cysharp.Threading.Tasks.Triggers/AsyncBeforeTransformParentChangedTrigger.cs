// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncBeforeTransformParentChangedTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001A9")]
[DisallowMultipleComponent]
public sealed class AsyncBeforeTransformParentChangedTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000ACD")]
	[Address(RVA = "0x2929F90", Offset = "0x2928590", VA = "0x182929F90")]
	private void OnBeforeTransformParentChanged()
	{
	}

	[Token(Token = "0x6000ACE")]
	[Address(RVA = "0x2929D00", Offset = "0x2928300", VA = "0x182929D00")]
	public IAsyncOnBeforeTransformParentChangedHandler GetOnBeforeTransformParentChangedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000ACF")]
	[Address(RVA = "0x2929C80", Offset = "0x2928280", VA = "0x182929C80")]
	public IAsyncOnBeforeTransformParentChangedHandler GetOnBeforeTransformParentChangedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AD0")]
	[Address(RVA = "0x2929D70", Offset = "0x2928370", VA = "0x182929D70")]
	public UniTask OnBeforeTransformParentChangedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AD1")]
	[Address(RVA = "0x2929E80", Offset = "0x2928480", VA = "0x182929E80")]
	public UniTask OnBeforeTransformParentChangedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AD2")]
	[Address(RVA = "0x292A000", Offset = "0x2928600", VA = "0x18292A000")]
	public AsyncBeforeTransformParentChangedTrigger()
	{
	}
}
