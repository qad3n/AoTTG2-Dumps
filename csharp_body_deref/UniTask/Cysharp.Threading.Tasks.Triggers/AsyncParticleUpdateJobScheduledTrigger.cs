using System.Threading;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.ParticleSystemJobs;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001DA")]
[DisallowMultipleComponent]
public sealed class AsyncParticleUpdateJobScheduledTrigger : AsyncTriggerBase<ParticleSystemJobData>
{
	[Token(Token = "0x6000B5F")]
	[Address(RVA = "0x46EB8D0", Offset = "0x46EB8D0", VA = "0x46EB8D0")]
	private void OnParticleUpdateJobScheduled(ParticleSystemJobData particles)
	{
	}

	[Token(Token = "0x6000B60")]
	[Address(RVA = "0x46EB910", Offset = "0x46EB910", VA = "0x46EB910")]
	public IAsyncOnParticleUpdateJobScheduledHandler GetOnParticleUpdateJobScheduledAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B61")]
	[Address(RVA = "0x46EB980", Offset = "0x46EB980", VA = "0x46EB980")]
	public IAsyncOnParticleUpdateJobScheduledHandler GetOnParticleUpdateJobScheduledAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B62")]
	[Address(RVA = "0x46EB9F0", Offset = "0x46EB9F0", VA = "0x46EB9F0")]
	public UniTask<ParticleSystemJobData> OnParticleUpdateJobScheduledAsync()
	{
		return default(UniTask<ParticleSystemJobData>);
	}

	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x46EBB10", Offset = "0x46EBB10", VA = "0x46EBB10")]
	public UniTask<ParticleSystemJobData> OnParticleUpdateJobScheduledAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<ParticleSystemJobData>);
	}

	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x46EBC30", Offset = "0x46EBC30", VA = "0x46EBC30")]
	public AsyncParticleUpdateJobScheduledTrigger()
	{
	}
}
