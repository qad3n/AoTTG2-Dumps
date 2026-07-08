using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001A4")]
[DisallowMultipleComponent]
public sealed class AsyncBecameVisibleTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000AA2")]
	[Address(RVA = "0x46E5B90", Offset = "0x46E5B90", VA = "0x46E5B90")]
	private void OnBecameVisible()
	{
	}

	[Token(Token = "0x6000AA3")]
	[Address(RVA = "0x46E5C00", Offset = "0x46E5C00", VA = "0x46E5C00")]
	public IAsyncOnBecameVisibleHandler GetOnBecameVisibleAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AA4")]
	[Address(RVA = "0x46E5C70", Offset = "0x46E5C70", VA = "0x46E5C70")]
	public IAsyncOnBecameVisibleHandler GetOnBecameVisibleAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AA5")]
	[Address(RVA = "0x46E5CE0", Offset = "0x46E5CE0", VA = "0x46E5CE0")]
	public UniTask OnBecameVisibleAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AA6")]
	[Address(RVA = "0x46E5DD0", Offset = "0x46E5DD0", VA = "0x46E5DD0")]
	public UniTask OnBecameVisibleAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AA7")]
	[Address(RVA = "0x46E5EC0", Offset = "0x46E5EC0", VA = "0x46E5EC0")]
	public AsyncBecameVisibleTrigger()
	{
	}
}
