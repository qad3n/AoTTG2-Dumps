using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000194")]
[DisallowMultipleComponent]
public sealed class AsyncLateUpdateTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000A6A")]
	[Address(RVA = "0x46E4050", Offset = "0x46E4050", VA = "0x46E4050")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x46E40C0", Offset = "0x46E40C0", VA = "0x46E40C0")]
	public IAsyncLateUpdateHandler GetLateUpdateAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x46E4130", Offset = "0x46E4130", VA = "0x46E4130")]
	public IAsyncLateUpdateHandler GetLateUpdateAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x46E41A0", Offset = "0x46E41A0", VA = "0x46E41A0")]
	public UniTask LateUpdateAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x46E4290", Offset = "0x46E4290", VA = "0x46E4290")]
	public UniTask LateUpdateAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x46E4380", Offset = "0x46E4380", VA = "0x46E4380")]
	public AsyncLateUpdateTrigger()
	{
	}
}
