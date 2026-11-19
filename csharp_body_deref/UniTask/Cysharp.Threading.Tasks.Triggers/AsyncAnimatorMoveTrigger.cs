// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncAnimatorMoveTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x200019B")]
[DisallowMultipleComponent]
public sealed class AsyncAnimatorMoveTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000A9C")]
	[Address(RVA = "0x62F71D0", Offset = "0x62F61D0", VA = "0x62F71D0")]
	private void OnAnimatorMove()
	{
	}

	[Token(Token = "0x6000A9D")]
	[Address(RVA = "0x62F7240", Offset = "0x62F6240", VA = "0x62F7240")]
	public IAsyncOnAnimatorMoveHandler GetOnAnimatorMoveAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000A9E")]
	[Address(RVA = "0x62F72B0", Offset = "0x62F62B0", VA = "0x62F72B0")]
	public IAsyncOnAnimatorMoveHandler GetOnAnimatorMoveAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A9F")]
	[Address(RVA = "0x62F7320", Offset = "0x62F6320", VA = "0x62F7320")]
	public UniTask OnAnimatorMoveAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AA0")]
	[Address(RVA = "0x62F7410", Offset = "0x62F6410", VA = "0x62F7410")]
	public UniTask OnAnimatorMoveAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AA1")]
	[Address(RVA = "0x62F7500", Offset = "0x62F6500", VA = "0x62F7500")]
	public AsyncAnimatorMoveTrigger()
	{
	}
}
