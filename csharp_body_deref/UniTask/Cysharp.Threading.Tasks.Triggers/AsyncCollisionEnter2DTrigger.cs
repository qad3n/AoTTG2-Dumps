using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001AC")]
[DisallowMultipleComponent]
public sealed class AsyncCollisionEnter2DTrigger : AsyncTriggerBase<Collision2D>
{
	[Token(Token = "0x6000ABE")]
	[Address(RVA = "0x46E6960", Offset = "0x46E6960", VA = "0x46E6960")]
	private void OnCollisionEnter2D(Collision2D coll)
	{
	}

	[Token(Token = "0x6000ABF")]
	[Address(RVA = "0x46E69B0", Offset = "0x46E69B0", VA = "0x46E69B0")]
	public IAsyncOnCollisionEnter2DHandler GetOnCollisionEnter2DAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AC0")]
	[Address(RVA = "0x46E6A20", Offset = "0x46E6A20", VA = "0x46E6A20")]
	public IAsyncOnCollisionEnter2DHandler GetOnCollisionEnter2DAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x46E6A90", Offset = "0x46E6A90", VA = "0x46E6A90")]
	public UniTask<Collision2D> OnCollisionEnter2DAsync()
	{
		return default(UniTask<Collision2D>);
	}

	[Token(Token = "0x6000AC2")]
	[Address(RVA = "0x46E6B90", Offset = "0x46E6B90", VA = "0x46E6B90")]
	public UniTask<Collision2D> OnCollisionEnter2DAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collision2D>);
	}

	[Token(Token = "0x6000AC3")]
	[Address(RVA = "0x46E6CA0", Offset = "0x46E6CA0", VA = "0x46E6CA0")]
	public AsyncCollisionEnter2DTrigger()
	{
	}
}
