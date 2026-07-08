using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001D6")]
[DisallowMultipleComponent]
public sealed class AsyncParticleSystemStoppedTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B51")]
	[Address(RVA = "0x46EB1F0", Offset = "0x46EB1F0", VA = "0x46EB1F0")]
	private void OnParticleSystemStopped()
	{
	}

	[Token(Token = "0x6000B52")]
	[Address(RVA = "0x46EB260", Offset = "0x46EB260", VA = "0x46EB260")]
	public IAsyncOnParticleSystemStoppedHandler GetOnParticleSystemStoppedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B53")]
	[Address(RVA = "0x46EB2D0", Offset = "0x46EB2D0", VA = "0x46EB2D0")]
	public IAsyncOnParticleSystemStoppedHandler GetOnParticleSystemStoppedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B54")]
	[Address(RVA = "0x46EB340", Offset = "0x46EB340", VA = "0x46EB340")]
	public UniTask OnParticleSystemStoppedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B55")]
	[Address(RVA = "0x46EB430", Offset = "0x46EB430", VA = "0x46EB430")]
	public UniTask OnParticleSystemStoppedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x46EB520", Offset = "0x46EB520", VA = "0x46EB520")]
	public AsyncParticleSystemStoppedTrigger()
	{
	}
}
