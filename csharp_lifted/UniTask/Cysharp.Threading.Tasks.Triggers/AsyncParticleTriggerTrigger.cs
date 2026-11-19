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
	[Address(RVA = "0x62FE030", Offset = "0x62FD030", VA = "0x62FE030")]
	private void OnParticleTrigger()
	{
	}

	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x62FE0A0", Offset = "0x62FD0A0", VA = "0x62FE0A0")]
	public IAsyncOnParticleTriggerHandler GetOnParticleTriggerAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x62FE110", Offset = "0x62FD110", VA = "0x62FE110")]
	public IAsyncOnParticleTriggerHandler GetOnParticleTriggerAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x62FE180", Offset = "0x62FD180", VA = "0x62FE180")]
	public UniTask OnParticleTriggerAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x62FE270", Offset = "0x62FD270", VA = "0x62FE270")]
	public UniTask OnParticleTriggerAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B81")]
	[Address(RVA = "0x62FE360", Offset = "0x62FD360", VA = "0x62FE360")]
	public AsyncParticleTriggerTrigger()
	{
	}
}
