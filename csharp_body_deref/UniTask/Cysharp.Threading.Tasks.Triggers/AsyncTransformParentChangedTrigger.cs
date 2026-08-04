// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncTransformParentChangedTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001EE")]
[DisallowMultipleComponent]
public sealed class AsyncTransformParentChangedTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000BA5")]
	[Address(RVA = "0x4A12CB0", Offset = "0x4A12CB0", VA = "0x4A12CB0")]
	private void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x6000BA6")]
	[Address(RVA = "0x4A12D20", Offset = "0x4A12D20", VA = "0x4A12D20")]
	public IAsyncOnTransformParentChangedHandler GetOnTransformParentChangedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BA7")]
	[Address(RVA = "0x4A12D90", Offset = "0x4A12D90", VA = "0x4A12D90")]
	public IAsyncOnTransformParentChangedHandler GetOnTransformParentChangedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BA8")]
	[Address(RVA = "0x4A12E00", Offset = "0x4A12E00", VA = "0x4A12E00")]
	public UniTask OnTransformParentChangedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BA9")]
	[Address(RVA = "0x4A12EF0", Offset = "0x4A12EF0", VA = "0x4A12EF0")]
	public UniTask OnTransformParentChangedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BAA")]
	[Address(RVA = "0x4A12FE0", Offset = "0x4A12FE0", VA = "0x4A12FE0")]
	public AsyncTransformParentChangedTrigger()
	{
	}
}
