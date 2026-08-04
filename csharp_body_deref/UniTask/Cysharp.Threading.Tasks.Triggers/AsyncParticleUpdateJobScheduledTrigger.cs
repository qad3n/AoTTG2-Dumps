// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncParticleUpdateJobScheduledTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4A109D0", Offset = "0x4A109D0", VA = "0x4A109D0")]
	private void OnParticleUpdateJobScheduled(ParticleSystemJobData particles)
	{
	}

	[Token(Token = "0x6000B60")]
	[Address(RVA = "0x4A10A10", Offset = "0x4A10A10", VA = "0x4A10A10")]
	public IAsyncOnParticleUpdateJobScheduledHandler GetOnParticleUpdateJobScheduledAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B61")]
	[Address(RVA = "0x4A10A80", Offset = "0x4A10A80", VA = "0x4A10A80")]
	public IAsyncOnParticleUpdateJobScheduledHandler GetOnParticleUpdateJobScheduledAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B62")]
	[Address(RVA = "0x4A10AF0", Offset = "0x4A10AF0", VA = "0x4A10AF0")]
	public UniTask<ParticleSystemJobData> OnParticleUpdateJobScheduledAsync()
	{
		return default(UniTask<ParticleSystemJobData>);
	}

	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x4A10C10", Offset = "0x4A10C10", VA = "0x4A10C10")]
	public UniTask<ParticleSystemJobData> OnParticleUpdateJobScheduledAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<ParticleSystemJobData>);
	}

	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x4A10D30", Offset = "0x4A10D30", VA = "0x4A10D30")]
	public AsyncParticleUpdateJobScheduledTrigger()
	{
	}
}
