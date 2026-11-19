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
	[Address(RVA = "0x6300D70", Offset = "0x62FFD70", VA = "0x6300D70")]
	private void OnTriggerEnter2D(Collider2D other)
	{
	}

	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x6300DC0", Offset = "0x62FFDC0", VA = "0x6300DC0")]
	public IAsyncOnTriggerEnter2DHandler GetOnTriggerEnter2DAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BD9")]
	[Address(RVA = "0x6300E30", Offset = "0x62FFE30", VA = "0x6300E30")]
	public IAsyncOnTriggerEnter2DHandler GetOnTriggerEnter2DAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x6300EA0", Offset = "0x62FFEA0", VA = "0x6300EA0")]
	public UniTask<Collider2D> OnTriggerEnter2DAsync()
	{
		return default(UniTask<Collider2D>);
	}

	[Token(Token = "0x6000BDB")]
	[Address(RVA = "0x6300FA0", Offset = "0x62FFFA0", VA = "0x6300FA0")]
	public UniTask<Collider2D> OnTriggerEnter2DAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collider2D>);
	}

	[Token(Token = "0x6000BDC")]
	[Address(RVA = "0x63010B0", Offset = "0x63000B0", VA = "0x63010B0")]
	public AsyncTriggerEnter2DTrigger()
	{
	}
}
