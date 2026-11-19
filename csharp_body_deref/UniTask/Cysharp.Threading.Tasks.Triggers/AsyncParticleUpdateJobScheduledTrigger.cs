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

[Token(Token = "0x20001DD")]
[DisallowMultipleComponent]
public sealed class AsyncParticleUpdateJobScheduledTrigger : AsyncTriggerBase<ParticleSystemJobData>
{
	[Token(Token = "0x6000B83")]
	[Address(RVA = "0x62FE3A0", Offset = "0x62FD3A0", VA = "0x62FE3A0")]
	private void OnParticleUpdateJobScheduled(ParticleSystemJobData particles)
	{
	}

	[Token(Token = "0x6000B84")]
	[Address(RVA = "0x62FE3E0", Offset = "0x62FD3E0", VA = "0x62FE3E0")]
	public IAsyncOnParticleUpdateJobScheduledHandler GetOnParticleUpdateJobScheduledAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B85")]
	[Address(RVA = "0x62FE450", Offset = "0x62FD450", VA = "0x62FE450")]
	public IAsyncOnParticleUpdateJobScheduledHandler GetOnParticleUpdateJobScheduledAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B86")]
	[Address(RVA = "0x62FE4C0", Offset = "0x62FD4C0", VA = "0x62FE4C0")]
	public UniTask<ParticleSystemJobData> OnParticleUpdateJobScheduledAsync()
	{
		return default(UniTask<ParticleSystemJobData>);
	}

	[Token(Token = "0x6000B87")]
	[Address(RVA = "0x62FE5E0", Offset = "0x62FD5E0", VA = "0x62FE5E0")]
	public UniTask<ParticleSystemJobData> OnParticleUpdateJobScheduledAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<ParticleSystemJobData>);
	}

	[Token(Token = "0x6000B88")]
	[Address(RVA = "0x62FE700", Offset = "0x62FD700", VA = "0x62FE700")]
	public AsyncParticleUpdateJobScheduledTrigger()
	{
	}
}
