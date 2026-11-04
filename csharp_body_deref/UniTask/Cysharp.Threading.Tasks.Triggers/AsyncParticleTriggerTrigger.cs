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

[Token(Token = "0x20001DB")]
[DisallowMultipleComponent]
public sealed class AsyncParticleTriggerTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x2934850", Offset = "0x2932E50", VA = "0x182934850")]
	private void OnParticleTrigger()
	{
	}

	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x2934540", Offset = "0x2932B40", VA = "0x182934540")]
	public IAsyncOnParticleTriggerHandler GetOnParticleTriggerAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x29345B0", Offset = "0x2932BB0", VA = "0x1829345B0")]
	public IAsyncOnParticleTriggerHandler GetOnParticleTriggerAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x2934630", Offset = "0x2932C30", VA = "0x182934630")]
	public UniTask OnParticleTriggerAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x2934740", Offset = "0x2932D40", VA = "0x182934740")]
	public UniTask OnParticleTriggerAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B81")]
	[Address(RVA = "0x29348C0", Offset = "0x2932EC0", VA = "0x1829348C0")]
	public AsyncParticleTriggerTrigger()
	{
	}
}
