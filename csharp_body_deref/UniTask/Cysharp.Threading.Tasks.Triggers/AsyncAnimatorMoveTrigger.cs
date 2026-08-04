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

[Token(Token = "0x2000198")]
[DisallowMultipleComponent]
public sealed class AsyncAnimatorMoveTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000A78")]
	[Address(RVA = "0x4A09800", Offset = "0x4A09800", VA = "0x4A09800")]
	private void OnAnimatorMove()
	{
	}

	[Token(Token = "0x6000A79")]
	[Address(RVA = "0x4A09870", Offset = "0x4A09870", VA = "0x4A09870")]
	public IAsyncOnAnimatorMoveHandler GetOnAnimatorMoveAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000A7A")]
	[Address(RVA = "0x4A098E0", Offset = "0x4A098E0", VA = "0x4A098E0")]
	public IAsyncOnAnimatorMoveHandler GetOnAnimatorMoveAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A7B")]
	[Address(RVA = "0x4A09950", Offset = "0x4A09950", VA = "0x4A09950")]
	public UniTask OnAnimatorMoveAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A7C")]
	[Address(RVA = "0x4A09A40", Offset = "0x4A09A40", VA = "0x4A09A40")]
	public UniTask OnAnimatorMoveAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A7D")]
	[Address(RVA = "0x4A09B30", Offset = "0x4A09B30", VA = "0x4A09B30")]
	public AsyncAnimatorMoveTrigger()
	{
	}
}
