using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001D8")]
[DisallowMultipleComponent]
public sealed class AsyncParticleTriggerTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B58")]
	[Address(RVA = "0x46EB560", Offset = "0x46EB560", VA = "0x46EB560")]
	private void OnParticleTrigger()
	{
	}

	[Token(Token = "0x6000B59")]
	[Address(RVA = "0x46EB5D0", Offset = "0x46EB5D0", VA = "0x46EB5D0")]
	public IAsyncOnParticleTriggerHandler GetOnParticleTriggerAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B5A")]
	[Address(RVA = "0x46EB640", Offset = "0x46EB640", VA = "0x46EB640")]
	public IAsyncOnParticleTriggerHandler GetOnParticleTriggerAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B5B")]
	[Address(RVA = "0x46EB6B0", Offset = "0x46EB6B0", VA = "0x46EB6B0")]
	public UniTask OnParticleTriggerAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B5C")]
	[Address(RVA = "0x46EB7A0", Offset = "0x46EB7A0", VA = "0x46EB7A0")]
	public UniTask OnParticleTriggerAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B5D")]
	[Address(RVA = "0x46EB890", Offset = "0x46EB890", VA = "0x46EB890")]
	public AsyncParticleTriggerTrigger()
	{
	}
}
