// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncParticleSystemStoppedTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001D9")]
[DisallowMultipleComponent]
public sealed class AsyncParticleSystemStoppedTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B75")]
	[Address(RVA = "0x62FDCC0", Offset = "0x62FCCC0", VA = "0x62FDCC0")]
	private void OnParticleSystemStopped()
	{
	}

	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x62FDD30", Offset = "0x62FCD30", VA = "0x62FDD30")]
	public IAsyncOnParticleSystemStoppedHandler GetOnParticleSystemStoppedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x62FDDA0", Offset = "0x62FCDA0", VA = "0x62FDDA0")]
	public IAsyncOnParticleSystemStoppedHandler GetOnParticleSystemStoppedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B78")]
	[Address(RVA = "0x62FDE10", Offset = "0x62FCE10", VA = "0x62FDE10")]
	public UniTask OnParticleSystemStoppedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x62FDF00", Offset = "0x62FCF00", VA = "0x62FDF00")]
	public UniTask OnParticleSystemStoppedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B7A")]
	[Address(RVA = "0x62FDFF0", Offset = "0x62FCFF0", VA = "0x62FDFF0")]
	public AsyncParticleSystemStoppedTrigger()
	{
	}
}
