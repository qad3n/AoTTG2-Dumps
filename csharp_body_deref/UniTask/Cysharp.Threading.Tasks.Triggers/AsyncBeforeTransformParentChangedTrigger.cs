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
	[Address(RVA = "0x62F89D0", Offset = "0x62F79D0", VA = "0x62F89D0")]
	private void OnBeforeTransformParentChanged()
	{
	}

	[Token(Token = "0x6000ACE")]
	[Address(RVA = "0x62F8A40", Offset = "0x62F7A40", VA = "0x62F8A40")]
	public IAsyncOnBeforeTransformParentChangedHandler GetOnBeforeTransformParentChangedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000ACF")]
	[Address(RVA = "0x62F8AB0", Offset = "0x62F7AB0", VA = "0x62F8AB0")]
	public IAsyncOnBeforeTransformParentChangedHandler GetOnBeforeTransformParentChangedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AD0")]
	[Address(RVA = "0x62F8B20", Offset = "0x62F7B20", VA = "0x62F8B20")]
	public UniTask OnBeforeTransformParentChangedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AD1")]
	[Address(RVA = "0x62F8C10", Offset = "0x62F7C10", VA = "0x62F8C10")]
	public UniTask OnBeforeTransformParentChangedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AD2")]
	[Address(RVA = "0x62F8D00", Offset = "0x62F7D00", VA = "0x62F8D00")]
	public AsyncBeforeTransformParentChangedTrigger()
	{
	}
}
