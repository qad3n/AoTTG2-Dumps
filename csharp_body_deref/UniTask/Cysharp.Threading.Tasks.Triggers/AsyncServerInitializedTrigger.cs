using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001EA")]
[DisallowMultipleComponent]
public sealed class AsyncServerInitializedTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B97")]
	[Address(RVA = "0x46ED4D0", Offset = "0x46ED4D0", VA = "0x46ED4D0")]
	private void OnServerInitialized()
	{
	}

	[Token(Token = "0x6000B98")]
	[Address(RVA = "0x46ED540", Offset = "0x46ED540", VA = "0x46ED540")]
	public IAsyncOnServerInitializedHandler GetOnServerInitializedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B99")]
	[Address(RVA = "0x46ED5B0", Offset = "0x46ED5B0", VA = "0x46ED5B0")]
	public IAsyncOnServerInitializedHandler GetOnServerInitializedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B9A")]
	[Address(RVA = "0x46ED620", Offset = "0x46ED620", VA = "0x46ED620")]
	public UniTask OnServerInitializedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B9B")]
	[Address(RVA = "0x46ED710", Offset = "0x46ED710", VA = "0x46ED710")]
	public UniTask OnServerInitializedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x46ED800", Offset = "0x46ED800", VA = "0x46ED800")]
	public AsyncServerInitializedTrigger()
	{
	}
}
