// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncCollisionEnter2DTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001AF")]
[DisallowMultipleComponent]
public sealed class AsyncCollisionEnter2DTrigger : AsyncTriggerBase<Collision2D>
{
	[Token(Token = "0x6000AE2")]
	[Address(RVA = "0x292AAC0", Offset = "0x29290C0", VA = "0x18292AAC0")]
	private void OnCollisionEnter2D(Collision2D coll)
	{
	}

	[Token(Token = "0x6000AE3")]
	[Address(RVA = "0x292A7A0", Offset = "0x2928DA0", VA = "0x18292A7A0")]
	public IAsyncOnCollisionEnter2DHandler GetOnCollisionEnter2DAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AE4")]
	[Address(RVA = "0x292A810", Offset = "0x2928E10", VA = "0x18292A810")]
	public IAsyncOnCollisionEnter2DHandler GetOnCollisionEnter2DAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AE5")]
	[Address(RVA = "0x292A9A0", Offset = "0x2928FA0", VA = "0x18292A9A0")]
	public UniTask<Collision2D> OnCollisionEnter2DAsync()
	{
		return default(UniTask<Collision2D>);
	}

	[Token(Token = "0x6000AE6")]
	[Address(RVA = "0x292A890", Offset = "0x2928E90", VA = "0x18292A890")]
	public UniTask<Collision2D> OnCollisionEnter2DAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collision2D>);
	}

	[Token(Token = "0x6000AE7")]
	[Address(RVA = "0x292AB10", Offset = "0x2929110", VA = "0x18292AB10")]
	public AsyncCollisionEnter2DTrigger()
	{
	}
}
