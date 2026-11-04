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
	[Address(RVA = "0x2934C20", Offset = "0x2933220", VA = "0x182934C20")]
	private void OnParticleUpdateJobScheduled(ParticleSystemJobData particles)
	{
	}

	[Token(Token = "0x6000B84")]
	[Address(RVA = "0x2934900", Offset = "0x2932F00", VA = "0x182934900")]
	public IAsyncOnParticleUpdateJobScheduledHandler GetOnParticleUpdateJobScheduledAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B85")]
	[Address(RVA = "0x2934970", Offset = "0x2932F70", VA = "0x182934970")]
	public IAsyncOnParticleUpdateJobScheduledHandler GetOnParticleUpdateJobScheduledAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B86")]
	[Address(RVA = "0x2934B00", Offset = "0x2933100", VA = "0x182934B00")]
	public UniTask<ParticleSystemJobData> OnParticleUpdateJobScheduledAsync()
	{
		return default(UniTask<ParticleSystemJobData>);
	}

	[Token(Token = "0x6000B87")]
	[Address(RVA = "0x29349F0", Offset = "0x2932FF0", VA = "0x1829349F0")]
	public UniTask<ParticleSystemJobData> OnParticleUpdateJobScheduledAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<ParticleSystemJobData>);
	}

	[Token(Token = "0x6000B88")]
	[Address(RVA = "0x2934D20", Offset = "0x2933320", VA = "0x182934D20")]
	public AsyncParticleUpdateJobScheduledTrigger()
	{
	}
}
