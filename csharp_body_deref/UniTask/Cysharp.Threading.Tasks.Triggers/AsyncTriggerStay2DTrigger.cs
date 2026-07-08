using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001FA")]
[DisallowMultipleComponent]
public sealed class AsyncTriggerStay2DTrigger : AsyncTriggerBase<Collider2D>
{
	[Token(Token = "0x6000BCF")]
	[Address(RVA = "0x46EF0A0", Offset = "0x46EF0A0", VA = "0x46EF0A0")]
	private void OnTriggerStay2D(Collider2D other)
	{
	}

	[Token(Token = "0x6000BD0")]
	[Address(RVA = "0x46EF0F0", Offset = "0x46EF0F0", VA = "0x46EF0F0")]
	public IAsyncOnTriggerStay2DHandler GetOnTriggerStay2DAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BD1")]
	[Address(RVA = "0x46EF160", Offset = "0x46EF160", VA = "0x46EF160")]
	public IAsyncOnTriggerStay2DHandler GetOnTriggerStay2DAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BD2")]
	[Address(RVA = "0x46EF1D0", Offset = "0x46EF1D0", VA = "0x46EF1D0")]
	public UniTask<Collider2D> OnTriggerStay2DAsync()
	{
		return default(UniTask<Collider2D>);
	}

	[Token(Token = "0x6000BD3")]
	[Address(RVA = "0x46EF2D0", Offset = "0x46EF2D0", VA = "0x46EF2D0")]
	public UniTask<Collider2D> OnTriggerStay2DAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collider2D>);
	}

	[Token(Token = "0x6000BD4")]
	[Address(RVA = "0x46EF3E0", Offset = "0x46EF3E0", VA = "0x46EF3E0")]
	public AsyncTriggerStay2DTrigger()
	{
	}
}
