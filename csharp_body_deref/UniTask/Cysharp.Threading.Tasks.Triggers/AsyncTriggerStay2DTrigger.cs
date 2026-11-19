// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncTriggerStay2DTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001FD")]
[DisallowMultipleComponent]
public sealed class AsyncTriggerStay2DTrigger : AsyncTriggerBase<Collider2D>
{
	[Token(Token = "0x6000BF3")]
	[Address(RVA = "0x6301B70", Offset = "0x6300B70", VA = "0x6301B70")]
	private void OnTriggerStay2D(Collider2D other)
	{
	}

	[Token(Token = "0x6000BF4")]
	[Address(RVA = "0x6301BC0", Offset = "0x6300BC0", VA = "0x6301BC0")]
	public IAsyncOnTriggerStay2DHandler GetOnTriggerStay2DAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BF5")]
	[Address(RVA = "0x6301C30", Offset = "0x6300C30", VA = "0x6301C30")]
	public IAsyncOnTriggerStay2DHandler GetOnTriggerStay2DAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BF6")]
	[Address(RVA = "0x6301CA0", Offset = "0x6300CA0", VA = "0x6301CA0")]
	public UniTask<Collider2D> OnTriggerStay2DAsync()
	{
		return default(UniTask<Collider2D>);
	}

	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x6301DA0", Offset = "0x6300DA0", VA = "0x6301DA0")]
	public UniTask<Collider2D> OnTriggerStay2DAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collider2D>);
	}

	[Token(Token = "0x6000BF8")]
	[Address(RVA = "0x6301EB0", Offset = "0x6300EB0", VA = "0x6301EB0")]
	public AsyncTriggerStay2DTrigger()
	{
	}
}
