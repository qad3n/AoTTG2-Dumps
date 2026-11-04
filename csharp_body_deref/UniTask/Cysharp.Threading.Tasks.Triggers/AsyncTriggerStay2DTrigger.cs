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
	[Address(RVA = "0x293DB40", Offset = "0x293C140", VA = "0x18293DB40")]
	private void OnTriggerStay2D(Collider2D other)
	{
	}

	[Token(Token = "0x6000BF4")]
	[Address(RVA = "0x293D8A0", Offset = "0x293BEA0", VA = "0x18293D8A0")]
	public IAsyncOnTriggerStay2DHandler GetOnTriggerStay2DAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BF5")]
	[Address(RVA = "0x293D820", Offset = "0x293BE20", VA = "0x18293D820")]
	public IAsyncOnTriggerStay2DHandler GetOnTriggerStay2DAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BF6")]
	[Address(RVA = "0x293D910", Offset = "0x293BF10", VA = "0x18293D910")]
	public UniTask<Collider2D> OnTriggerStay2DAsync()
	{
		return default(UniTask<Collider2D>);
	}

	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x293DA30", Offset = "0x293C030", VA = "0x18293DA30")]
	public UniTask<Collider2D> OnTriggerStay2DAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collider2D>);
	}

	[Token(Token = "0x6000BF8")]
	[Address(RVA = "0x293DB90", Offset = "0x293C190", VA = "0x18293DB90")]
	public AsyncTriggerStay2DTrigger()
	{
	}
}
