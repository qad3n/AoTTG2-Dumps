// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncCollisionExit2DTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001B3")]
[DisallowMultipleComponent]
public sealed class AsyncCollisionExit2DTrigger : AsyncTriggerBase<Collision2D>
{
	[Token(Token = "0x6000AF0")]
	[Address(RVA = "0x292B220", Offset = "0x2929820", VA = "0x18292B220")]
	private void OnCollisionExit2D(Collision2D coll)
	{
	}

	[Token(Token = "0x6000AF1")]
	[Address(RVA = "0x292AF80", Offset = "0x2929580", VA = "0x18292AF80")]
	public IAsyncOnCollisionExit2DHandler GetOnCollisionExit2DAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AF2")]
	[Address(RVA = "0x292AF00", Offset = "0x2929500", VA = "0x18292AF00")]
	public IAsyncOnCollisionExit2DHandler GetOnCollisionExit2DAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AF3")]
	[Address(RVA = "0x292AFF0", Offset = "0x29295F0", VA = "0x18292AFF0")]
	public UniTask<Collision2D> OnCollisionExit2DAsync()
	{
		return default(UniTask<Collision2D>);
	}

	[Token(Token = "0x6000AF4")]
	[Address(RVA = "0x292B110", Offset = "0x2929710", VA = "0x18292B110")]
	public UniTask<Collision2D> OnCollisionExit2DAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collision2D>);
	}

	[Token(Token = "0x6000AF5")]
	[Address(RVA = "0x292B270", Offset = "0x2929870", VA = "0x18292B270")]
	public AsyncCollisionExit2DTrigger()
	{
	}
}
