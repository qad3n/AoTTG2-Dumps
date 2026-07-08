using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001AA")]
[DisallowMultipleComponent]
public sealed class AsyncCollisionEnterTrigger : AsyncTriggerBase<Collision>
{
	[Token(Token = "0x6000AB7")]
	[Address(RVA = "0x46E65E0", Offset = "0x46E65E0", VA = "0x46E65E0")]
	private void OnCollisionEnter(Collision coll)
	{
	}

	[Token(Token = "0x6000AB8")]
	[Address(RVA = "0x46E6630", Offset = "0x46E6630", VA = "0x46E6630")]
	public IAsyncOnCollisionEnterHandler GetOnCollisionEnterAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AB9")]
	[Address(RVA = "0x46E66A0", Offset = "0x46E66A0", VA = "0x46E66A0")]
	public IAsyncOnCollisionEnterHandler GetOnCollisionEnterAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000ABA")]
	[Address(RVA = "0x46E6710", Offset = "0x46E6710", VA = "0x46E6710")]
	public UniTask<Collision> OnCollisionEnterAsync()
	{
		return default(UniTask<Collision>);
	}

	[Token(Token = "0x6000ABB")]
	[Address(RVA = "0x46E6810", Offset = "0x46E6810", VA = "0x46E6810")]
	public UniTask<Collision> OnCollisionEnterAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collision>);
	}

	[Token(Token = "0x6000ABC")]
	[Address(RVA = "0x46E6920", Offset = "0x46E6920", VA = "0x46E6920")]
	public AsyncCollisionEnterTrigger()
	{
	}
}
