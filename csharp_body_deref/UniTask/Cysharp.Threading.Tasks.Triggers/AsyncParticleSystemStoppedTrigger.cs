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
	[Address(RVA = "0x2934490", Offset = "0x2932A90", VA = "0x182934490")]
	private void OnParticleSystemStopped()
	{
	}

	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x2934180", Offset = "0x2932780", VA = "0x182934180")]
	public IAsyncOnParticleSystemStoppedHandler GetOnParticleSystemStoppedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x29341F0", Offset = "0x29327F0", VA = "0x1829341F0")]
	public IAsyncOnParticleSystemStoppedHandler GetOnParticleSystemStoppedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B78")]
	[Address(RVA = "0x2934270", Offset = "0x2932870", VA = "0x182934270")]
	public UniTask OnParticleSystemStoppedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x2934380", Offset = "0x2932980", VA = "0x182934380")]
	public UniTask OnParticleSystemStoppedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B7A")]
	[Address(RVA = "0x2934500", Offset = "0x2932B00", VA = "0x182934500")]
	public AsyncParticleSystemStoppedTrigger()
	{
	}
}
