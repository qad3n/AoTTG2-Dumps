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
	[Address(RVA = "0x6301470", Offset = "0x6300470", VA = "0x6301470")]
	private void OnTriggerExit2D(Collider2D other)
	{
	}

	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x63014C0", Offset = "0x63004C0", VA = "0x63014C0")]
	public IAsyncOnTriggerExit2DHandler GetOnTriggerExit2DAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x6301530", Offset = "0x6300530", VA = "0x6301530")]
	public IAsyncOnTriggerExit2DHandler GetOnTriggerExit2DAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x63015A0", Offset = "0x63005A0", VA = "0x63015A0")]
	public UniTask<Collider2D> OnTriggerExit2DAsync()
	{
		return default(UniTask<Collider2D>);
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x63016A0", Offset = "0x63006A0", VA = "0x63016A0")]
	public UniTask<Collider2D> OnTriggerExit2DAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collider2D>);
	}

	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x63017B0", Offset = "0x63007B0", VA = "0x63017B0")]
	public AsyncTriggerExit2DTrigger()
	{
	}
}
