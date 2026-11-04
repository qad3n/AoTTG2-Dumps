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
	[Address(RVA = "0x29283C0", Offset = "0x29269C0", VA = "0x1829283C0")]
	private void OnAnimatorMove()
	{
	}

	[Token(Token = "0x6000A9D")]
	[Address(RVA = "0x29280B0", Offset = "0x29266B0", VA = "0x1829280B0")]
	public IAsyncOnAnimatorMoveHandler GetOnAnimatorMoveAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000A9E")]
	[Address(RVA = "0x2928120", Offset = "0x2926720", VA = "0x182928120")]
	public IAsyncOnAnimatorMoveHandler GetOnAnimatorMoveAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A9F")]
	[Address(RVA = "0x29281A0", Offset = "0x29267A0", VA = "0x1829281A0")]
	public UniTask OnAnimatorMoveAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AA0")]
	[Address(RVA = "0x29282B0", Offset = "0x29268B0", VA = "0x1829282B0")]
	public UniTask OnAnimatorMoveAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AA1")]
	[Address(RVA = "0x2928430", Offset = "0x2926A30", VA = "0x182928430")]
	public AsyncAnimatorMoveTrigger()
	{
	}
}
