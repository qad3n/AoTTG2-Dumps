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

[Token(Token = "0x20001D6")]
[DisallowMultipleComponent]
public sealed class AsyncParticleSystemStoppedTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B51")]
	[Address(RVA = "0x4A102F0", Offset = "0x4A102F0", VA = "0x4A102F0")]
	private void OnParticleSystemStopped()
	{
	}

	[Token(Token = "0x6000B52")]
	[Address(RVA = "0x4A10360", Offset = "0x4A10360", VA = "0x4A10360")]
	public IAsyncOnParticleSystemStoppedHandler GetOnParticleSystemStoppedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B53")]
	[Address(RVA = "0x4A103D0", Offset = "0x4A103D0", VA = "0x4A103D0")]
	public IAsyncOnParticleSystemStoppedHandler GetOnParticleSystemStoppedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B54")]
	[Address(RVA = "0x4A10440", Offset = "0x4A10440", VA = "0x4A10440")]
	public UniTask OnParticleSystemStoppedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B55")]
	[Address(RVA = "0x4A10530", Offset = "0x4A10530", VA = "0x4A10530")]
	public UniTask OnParticleSystemStoppedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x4A10620", Offset = "0x4A10620", VA = "0x4A10620")]
	public AsyncParticleSystemStoppedTrigger()
	{
	}
}
