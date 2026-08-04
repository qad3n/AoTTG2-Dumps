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

[Token(Token = "0x20001AC")]
[DisallowMultipleComponent]
public sealed class AsyncCollisionEnter2DTrigger : AsyncTriggerBase<Collision2D>
{
	[Token(Token = "0x6000ABE")]
	[Address(RVA = "0x4A0BA60", Offset = "0x4A0BA60", VA = "0x4A0BA60")]
	private void OnCollisionEnter2D(Collision2D coll)
	{
	}

	[Token(Token = "0x6000ABF")]
	[Address(RVA = "0x4A0BAB0", Offset = "0x4A0BAB0", VA = "0x4A0BAB0")]
	public IAsyncOnCollisionEnter2DHandler GetOnCollisionEnter2DAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AC0")]
	[Address(RVA = "0x4A0BB20", Offset = "0x4A0BB20", VA = "0x4A0BB20")]
	public IAsyncOnCollisionEnter2DHandler GetOnCollisionEnter2DAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x4A0BB90", Offset = "0x4A0BB90", VA = "0x4A0BB90")]
	public UniTask<Collision2D> OnCollisionEnter2DAsync()
	{
		return default(UniTask<Collision2D>);
	}

	[Token(Token = "0x6000AC2")]
	[Address(RVA = "0x4A0BC90", Offset = "0x4A0BC90", VA = "0x4A0BC90")]
	public UniTask<Collision2D> OnCollisionEnter2DAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collision2D>);
	}

	[Token(Token = "0x6000AC3")]
	[Address(RVA = "0x4A0BDA0", Offset = "0x4A0BDA0", VA = "0x4A0BDA0")]
	public AsyncCollisionEnter2DTrigger()
	{
	}
}
