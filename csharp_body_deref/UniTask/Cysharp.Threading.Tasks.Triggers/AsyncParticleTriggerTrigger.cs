// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncParticleTriggerTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001D8")]
[DisallowMultipleComponent]
public sealed class AsyncParticleTriggerTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B58")]
	[Address(RVA = "0x4A10660", Offset = "0x4A10660", VA = "0x4A10660")]
	private void OnParticleTrigger()
	{
	}

	[Token(Token = "0x6000B59")]
	[Address(RVA = "0x4A106D0", Offset = "0x4A106D0", VA = "0x4A106D0")]
	public IAsyncOnParticleTriggerHandler GetOnParticleTriggerAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B5A")]
	[Address(RVA = "0x4A10740", Offset = "0x4A10740", VA = "0x4A10740")]
	public IAsyncOnParticleTriggerHandler GetOnParticleTriggerAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B5B")]
	[Address(RVA = "0x4A107B0", Offset = "0x4A107B0", VA = "0x4A107B0")]
	public UniTask OnParticleTriggerAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B5C")]
	[Address(RVA = "0x4A108A0", Offset = "0x4A108A0", VA = "0x4A108A0")]
	public UniTask OnParticleTriggerAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B5D")]
	[Address(RVA = "0x4A10990", Offset = "0x4A10990", VA = "0x4A10990")]
	public AsyncParticleTriggerTrigger()
	{
	}
}
