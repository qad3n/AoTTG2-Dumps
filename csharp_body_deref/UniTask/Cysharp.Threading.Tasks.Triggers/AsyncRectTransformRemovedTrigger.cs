using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001E4")]
[DisallowMultipleComponent]
public sealed class AsyncRectTransformRemovedTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B82")]
	[Address(RVA = "0x46ECA30", Offset = "0x46ECA30", VA = "0x46ECA30")]
	private void OnRectTransformRemoved()
	{
	}

	[Token(Token = "0x6000B83")]
	[Address(RVA = "0x46ECAA0", Offset = "0x46ECAA0", VA = "0x46ECAA0")]
	public IAsyncOnRectTransformRemovedHandler GetOnRectTransformRemovedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B84")]
	[Address(RVA = "0x46ECB10", Offset = "0x46ECB10", VA = "0x46ECB10")]
	public IAsyncOnRectTransformRemovedHandler GetOnRectTransformRemovedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B85")]
	[Address(RVA = "0x46ECB80", Offset = "0x46ECB80", VA = "0x46ECB80")]
	public UniTask OnRectTransformRemovedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B86")]
	[Address(RVA = "0x46ECC70", Offset = "0x46ECC70", VA = "0x46ECC70")]
	public UniTask OnRectTransformRemovedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B87")]
	[Address(RVA = "0x46ECD60", Offset = "0x46ECD60", VA = "0x46ECD60")]
	public AsyncRectTransformRemovedTrigger()
	{
	}
}
