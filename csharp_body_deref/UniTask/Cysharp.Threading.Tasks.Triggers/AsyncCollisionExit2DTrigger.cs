using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001B0")]
[DisallowMultipleComponent]
public sealed class AsyncCollisionExit2DTrigger : AsyncTriggerBase<Collision2D>
{
	[Token(Token = "0x6000ACC")]
	[Address(RVA = "0x46E7060", Offset = "0x46E7060", VA = "0x46E7060")]
	private void OnCollisionExit2D(Collision2D coll)
	{
	}

	[Token(Token = "0x6000ACD")]
	[Address(RVA = "0x46E70B0", Offset = "0x46E70B0", VA = "0x46E70B0")]
	public IAsyncOnCollisionExit2DHandler GetOnCollisionExit2DAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000ACE")]
	[Address(RVA = "0x46E7120", Offset = "0x46E7120", VA = "0x46E7120")]
	public IAsyncOnCollisionExit2DHandler GetOnCollisionExit2DAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000ACF")]
	[Address(RVA = "0x46E7190", Offset = "0x46E7190", VA = "0x46E7190")]
	public UniTask<Collision2D> OnCollisionExit2DAsync()
	{
		return default(UniTask<Collision2D>);
	}

	[Token(Token = "0x6000AD0")]
	[Address(RVA = "0x46E7290", Offset = "0x46E7290", VA = "0x46E7290")]
	public UniTask<Collision2D> OnCollisionExit2DAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collision2D>);
	}

	[Token(Token = "0x6000AD1")]
	[Address(RVA = "0x46E73A0", Offset = "0x46E73A0", VA = "0x46E73A0")]
	public AsyncCollisionExit2DTrigger()
	{
	}
}
