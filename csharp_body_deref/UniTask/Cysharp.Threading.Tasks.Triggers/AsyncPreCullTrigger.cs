using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001DE")]
[DisallowMultipleComponent]
public sealed class AsyncPreCullTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B6D")]
	[Address(RVA = "0x46EBFE0", Offset = "0x46EBFE0", VA = "0x46EBFE0")]
	private void OnPreCull()
	{
	}

	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x46EC050", Offset = "0x46EC050", VA = "0x46EC050")]
	public IAsyncOnPreCullHandler GetOnPreCullAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B6F")]
	[Address(RVA = "0x46EC0C0", Offset = "0x46EC0C0", VA = "0x46EC0C0")]
	public IAsyncOnPreCullHandler GetOnPreCullAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B70")]
	[Address(RVA = "0x46EC130", Offset = "0x46EC130", VA = "0x46EC130")]
	public UniTask OnPreCullAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x46EC220", Offset = "0x46EC220", VA = "0x46EC220")]
	public UniTask OnPreCullAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B72")]
	[Address(RVA = "0x46EC310", Offset = "0x46EC310", VA = "0x46EC310")]
	public AsyncPreCullTrigger()
	{
	}
}
