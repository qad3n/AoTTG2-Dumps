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
	[Address(RVA = "0x62FB010", Offset = "0x62FA010", VA = "0x62FB010")]
	private void OnDrawGizmosSelected()
	{
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x62FB080", Offset = "0x62FA080", VA = "0x62FB080")]
	public IAsyncOnDrawGizmosSelectedHandler GetOnDrawGizmosSelectedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x62FB0F0", Offset = "0x62FA0F0", VA = "0x62FB0F0")]
	public IAsyncOnDrawGizmosSelectedHandler GetOnDrawGizmosSelectedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x62FB160", Offset = "0x62FA160", VA = "0x62FB160")]
	public UniTask OnDrawGizmosSelectedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x62FB250", Offset = "0x62FA250", VA = "0x62FB250")]
	public UniTask OnDrawGizmosSelectedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x62FB340", Offset = "0x62FA340", VA = "0x62FB340")]
	public AsyncDrawGizmosSelectedTrigger()
	{
	}
}
