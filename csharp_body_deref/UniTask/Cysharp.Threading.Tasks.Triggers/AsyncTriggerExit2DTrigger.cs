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

[Token(Token = "0x20001F9")]
[DisallowMultipleComponent]
public sealed class AsyncTriggerExit2DTrigger : AsyncTriggerBase<Collider2D>
{
	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x293A0F0", Offset = "0x29386F0", VA = "0x18293A0F0")]
	private void OnTriggerExit2D(Collider2D other)
	{
	}

	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x2939DD0", Offset = "0x29383D0", VA = "0x182939DD0")]
	public IAsyncOnTriggerExit2DHandler GetOnTriggerExit2DAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x2939E40", Offset = "0x2938440", VA = "0x182939E40")]
	public IAsyncOnTriggerExit2DHandler GetOnTriggerExit2DAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x2939FD0", Offset = "0x29385D0", VA = "0x182939FD0")]
	public UniTask<Collider2D> OnTriggerExit2DAsync()
	{
		return default(UniTask<Collider2D>);
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x2939EC0", Offset = "0x29384C0", VA = "0x182939EC0")]
	public UniTask<Collider2D> OnTriggerExit2DAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collider2D>);
	}

	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x293A140", Offset = "0x2938740", VA = "0x18293A140")]
	public AsyncTriggerExit2DTrigger()
	{
	}
}
