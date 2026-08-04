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

[Token(Token = "0x20001A6")]
[DisallowMultipleComponent]
public sealed class AsyncBeforeTransformParentChangedTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000AA9")]
	[Address(RVA = "0x4A0B000", Offset = "0x4A0B000", VA = "0x4A0B000")]
	private void OnBeforeTransformParentChanged()
	{
	}

	[Token(Token = "0x6000AAA")]
	[Address(RVA = "0x4A0B070", Offset = "0x4A0B070", VA = "0x4A0B070")]
	public IAsyncOnBeforeTransformParentChangedHandler GetOnBeforeTransformParentChangedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x4A0B0E0", Offset = "0x4A0B0E0", VA = "0x4A0B0E0")]
	public IAsyncOnBeforeTransformParentChangedHandler GetOnBeforeTransformParentChangedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AAC")]
	[Address(RVA = "0x4A0B150", Offset = "0x4A0B150", VA = "0x4A0B150")]
	public UniTask OnBeforeTransformParentChangedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AAD")]
	[Address(RVA = "0x4A0B240", Offset = "0x4A0B240", VA = "0x4A0B240")]
	public UniTask OnBeforeTransformParentChangedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AAE")]
	[Address(RVA = "0x4A0B330", Offset = "0x4A0B330", VA = "0x4A0B330")]
	public AsyncBeforeTransformParentChangedTrigger()
	{
	}
}
