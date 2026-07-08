using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000198")]
[DisallowMultipleComponent]
public sealed class AsyncAnimatorMoveTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000A78")]
	[Address(RVA = "0x46E4700", Offset = "0x46E4700", VA = "0x46E4700")]
	private void OnAnimatorMove()
	{
	}

	[Token(Token = "0x6000A79")]
	[Address(RVA = "0x46E4770", Offset = "0x46E4770", VA = "0x46E4770")]
	public IAsyncOnAnimatorMoveHandler GetOnAnimatorMoveAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000A7A")]
	[Address(RVA = "0x46E47E0", Offset = "0x46E47E0", VA = "0x46E47E0")]
	public IAsyncOnAnimatorMoveHandler GetOnAnimatorMoveAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A7B")]
	[Address(RVA = "0x46E4850", Offset = "0x46E4850", VA = "0x46E4850")]
	public UniTask OnAnimatorMoveAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A7C")]
	[Address(RVA = "0x46E4940", Offset = "0x46E4940", VA = "0x46E4940")]
	public UniTask OnAnimatorMoveAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A7D")]
	[Address(RVA = "0x46E4A30", Offset = "0x46E4A30", VA = "0x46E4A30")]
	public AsyncAnimatorMoveTrigger()
	{
	}
}
