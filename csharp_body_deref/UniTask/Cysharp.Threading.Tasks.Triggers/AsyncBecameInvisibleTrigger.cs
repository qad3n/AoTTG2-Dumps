using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001A2")]
[DisallowMultipleComponent]
public sealed class AsyncBecameInvisibleTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000A9B")]
	[Address(RVA = "0x46E5820", Offset = "0x46E5820", VA = "0x46E5820")]
	private void OnBecameInvisible()
	{
	}

	[Token(Token = "0x6000A9C")]
	[Address(RVA = "0x46E5890", Offset = "0x46E5890", VA = "0x46E5890")]
	public IAsyncOnBecameInvisibleHandler GetOnBecameInvisibleAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000A9D")]
	[Address(RVA = "0x46E5900", Offset = "0x46E5900", VA = "0x46E5900")]
	public IAsyncOnBecameInvisibleHandler GetOnBecameInvisibleAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A9E")]
	[Address(RVA = "0x46E5970", Offset = "0x46E5970", VA = "0x46E5970")]
	public UniTask OnBecameInvisibleAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A9F")]
	[Address(RVA = "0x46E5A60", Offset = "0x46E5A60", VA = "0x46E5A60")]
	public UniTask OnBecameInvisibleAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AA0")]
	[Address(RVA = "0x46E5B50", Offset = "0x46E5B50", VA = "0x46E5B50")]
	public AsyncBecameInvisibleTrigger()
	{
	}
}
