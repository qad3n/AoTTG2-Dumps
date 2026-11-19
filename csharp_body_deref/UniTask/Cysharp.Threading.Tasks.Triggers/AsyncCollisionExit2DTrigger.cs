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
	[Address(RVA = "0x62F9B30", Offset = "0x62F8B30", VA = "0x62F9B30")]
	private void OnCollisionExit2D(Collision2D coll)
	{
	}

	[Token(Token = "0x6000AF1")]
	[Address(RVA = "0x62F9B80", Offset = "0x62F8B80", VA = "0x62F9B80")]
	public IAsyncOnCollisionExit2DHandler GetOnCollisionExit2DAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AF2")]
	[Address(RVA = "0x62F9BF0", Offset = "0x62F8BF0", VA = "0x62F9BF0")]
	public IAsyncOnCollisionExit2DHandler GetOnCollisionExit2DAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AF3")]
	[Address(RVA = "0x62F9C60", Offset = "0x62F8C60", VA = "0x62F9C60")]
	public UniTask<Collision2D> OnCollisionExit2DAsync()
	{
		return default(UniTask<Collision2D>);
	}

	[Token(Token = "0x6000AF4")]
	[Address(RVA = "0x62F9D60", Offset = "0x62F8D60", VA = "0x62F9D60")]
	public UniTask<Collision2D> OnCollisionExit2DAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collision2D>);
	}

	[Token(Token = "0x6000AF5")]
	[Address(RVA = "0x62F9E70", Offset = "0x62F8E70", VA = "0x62F9E70")]
	public AsyncCollisionExit2DTrigger()
	{
	}
}
