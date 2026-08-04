// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncTriggerExit2DTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001F6")]
[DisallowMultipleComponent]
public sealed class AsyncTriggerExit2DTrigger : AsyncTriggerBase<Collider2D>
{
	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x4A13AA0", Offset = "0x4A13AA0", VA = "0x4A13AA0")]
	private void OnTriggerExit2D(Collider2D other)
	{
	}

	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x4A13AF0", Offset = "0x4A13AF0", VA = "0x4A13AF0")]
	public IAsyncOnTriggerExit2DHandler GetOnTriggerExit2DAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BC3")]
	[Address(RVA = "0x4A13B60", Offset = "0x4A13B60", VA = "0x4A13B60")]
	public IAsyncOnTriggerExit2DHandler GetOnTriggerExit2DAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x4A13BD0", Offset = "0x4A13BD0", VA = "0x4A13BD0")]
	public UniTask<Collider2D> OnTriggerExit2DAsync()
	{
		return default(UniTask<Collider2D>);
	}

	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x4A13CD0", Offset = "0x4A13CD0", VA = "0x4A13CD0")]
	public UniTask<Collider2D> OnTriggerExit2DAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collider2D>);
	}

	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x4A13DE0", Offset = "0x4A13DE0", VA = "0x4A13DE0")]
	public AsyncTriggerExit2DTrigger()
	{
	}
}
