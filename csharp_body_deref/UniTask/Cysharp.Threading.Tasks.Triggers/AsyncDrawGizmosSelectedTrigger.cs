// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncDrawGizmosSelectedTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001BF")]
[DisallowMultipleComponent]
public sealed class AsyncDrawGizmosSelectedTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B1A")]
	[Address(RVA = "0x292D390", Offset = "0x292B990", VA = "0x18292D390")]
	private void OnDrawGizmosSelected()
	{
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x292D100", Offset = "0x292B700", VA = "0x18292D100")]
	public IAsyncOnDrawGizmosSelectedHandler GetOnDrawGizmosSelectedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x292D080", Offset = "0x292B680", VA = "0x18292D080")]
	public IAsyncOnDrawGizmosSelectedHandler GetOnDrawGizmosSelectedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x292D280", Offset = "0x292B880", VA = "0x18292D280")]
	public UniTask OnDrawGizmosSelectedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x292D170", Offset = "0x292B770", VA = "0x18292D170")]
	public UniTask OnDrawGizmosSelectedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x292D400", Offset = "0x292BA00", VA = "0x18292D400")]
	public AsyncDrawGizmosSelectedTrigger()
	{
	}
}
