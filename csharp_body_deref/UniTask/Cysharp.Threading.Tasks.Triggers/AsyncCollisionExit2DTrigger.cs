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

[Token(Token = "0x20001B0")]
[DisallowMultipleComponent]
public sealed class AsyncCollisionExit2DTrigger : AsyncTriggerBase<Collision2D>
{
	[Token(Token = "0x6000ACC")]
	[Address(RVA = "0x4A0C160", Offset = "0x4A0C160", VA = "0x4A0C160")]
	private void OnCollisionExit2D(Collision2D coll)
	{
	}

	[Token(Token = "0x6000ACD")]
	[Address(RVA = "0x4A0C1B0", Offset = "0x4A0C1B0", VA = "0x4A0C1B0")]
	public IAsyncOnCollisionExit2DHandler GetOnCollisionExit2DAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000ACE")]
	[Address(RVA = "0x4A0C220", Offset = "0x4A0C220", VA = "0x4A0C220")]
	public IAsyncOnCollisionExit2DHandler GetOnCollisionExit2DAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000ACF")]
	[Address(RVA = "0x4A0C290", Offset = "0x4A0C290", VA = "0x4A0C290")]
	public UniTask<Collision2D> OnCollisionExit2DAsync()
	{
		return default(UniTask<Collision2D>);
	}

	[Token(Token = "0x6000AD0")]
	[Address(RVA = "0x4A0C390", Offset = "0x4A0C390", VA = "0x4A0C390")]
	public UniTask<Collision2D> OnCollisionExit2DAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collision2D>);
	}

	[Token(Token = "0x6000AD1")]
	[Address(RVA = "0x4A0C4A0", Offset = "0x4A0C4A0", VA = "0x4A0C4A0")]
	public AsyncCollisionExit2DTrigger()
	{
	}
}
