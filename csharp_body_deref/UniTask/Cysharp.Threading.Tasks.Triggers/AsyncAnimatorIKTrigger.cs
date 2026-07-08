using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000196")]
[DisallowMultipleComponent]
public sealed class AsyncAnimatorIKTrigger : AsyncTriggerBase<int>
{
	[Token(Token = "0x6000A71")]
	[Address(RVA = "0x46E43C0", Offset = "0x46E43C0", VA = "0x46E43C0")]
	private void OnAnimatorIK(int layerIndex)
	{
	}

	[Token(Token = "0x6000A72")]
	[Address(RVA = "0x46E4400", Offset = "0x46E4400", VA = "0x46E4400")]
	public IAsyncOnAnimatorIKHandler GetOnAnimatorIKAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000A73")]
	[Address(RVA = "0x46E4470", Offset = "0x46E4470", VA = "0x46E4470")]
	public IAsyncOnAnimatorIKHandler GetOnAnimatorIKAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A74")]
	[Address(RVA = "0x46E44E0", Offset = "0x46E44E0", VA = "0x46E44E0")]
	public UniTask<int> OnAnimatorIKAsync()
	{
		return default(UniTask<int>);
	}

	[Token(Token = "0x6000A75")]
	[Address(RVA = "0x46E45D0", Offset = "0x46E45D0", VA = "0x46E45D0")]
	public UniTask<int> OnAnimatorIKAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<int>);
	}

	[Token(Token = "0x6000A76")]
	[Address(RVA = "0x46E46C0", Offset = "0x46E46C0", VA = "0x46E46C0")]
	public AsyncAnimatorIKTrigger()
	{
	}
}
