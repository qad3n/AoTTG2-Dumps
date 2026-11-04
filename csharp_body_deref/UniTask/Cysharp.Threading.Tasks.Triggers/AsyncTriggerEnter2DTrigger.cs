// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncTriggerEnter2DTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001F5")]
[DisallowMultipleComponent]
public sealed class AsyncTriggerEnter2DTrigger : AsyncTriggerBase<Collider2D>
{
	[Token(Token = "0x6000BD7")]
	[Address(RVA = "0x2939990", Offset = "0x2937F90", VA = "0x182939990")]
	private void OnTriggerEnter2D(Collider2D other)
	{
	}

	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x29396F0", Offset = "0x2937CF0", VA = "0x1829396F0")]
	public IAsyncOnTriggerEnter2DHandler GetOnTriggerEnter2DAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BD9")]
	[Address(RVA = "0x2939670", Offset = "0x2937C70", VA = "0x182939670")]
	public IAsyncOnTriggerEnter2DHandler GetOnTriggerEnter2DAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x2939870", Offset = "0x2937E70", VA = "0x182939870")]
	public UniTask<Collider2D> OnTriggerEnter2DAsync()
	{
		return default(UniTask<Collider2D>);
	}

	[Token(Token = "0x6000BDB")]
	[Address(RVA = "0x2939760", Offset = "0x2937D60", VA = "0x182939760")]
	public UniTask<Collider2D> OnTriggerEnter2DAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collider2D>);
	}

	[Token(Token = "0x6000BDC")]
	[Address(RVA = "0x29399E0", Offset = "0x2937FE0", VA = "0x1829399E0")]
	public AsyncTriggerEnter2DTrigger()
	{
	}
}
