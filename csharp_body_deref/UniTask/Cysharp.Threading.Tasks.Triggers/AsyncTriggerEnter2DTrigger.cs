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

[Token(Token = "0x20001F2")]
[DisallowMultipleComponent]
public sealed class AsyncTriggerEnter2DTrigger : AsyncTriggerBase<Collider2D>
{
	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x4A133A0", Offset = "0x4A133A0", VA = "0x4A133A0")]
	private void OnTriggerEnter2D(Collider2D other)
	{
	}

	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x4A133F0", Offset = "0x4A133F0", VA = "0x4A133F0")]
	public IAsyncOnTriggerEnter2DHandler GetOnTriggerEnter2DAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BB5")]
	[Address(RVA = "0x4A13460", Offset = "0x4A13460", VA = "0x4A13460")]
	public IAsyncOnTriggerEnter2DHandler GetOnTriggerEnter2DAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BB6")]
	[Address(RVA = "0x4A134D0", Offset = "0x4A134D0", VA = "0x4A134D0")]
	public UniTask<Collider2D> OnTriggerEnter2DAsync()
	{
		return default(UniTask<Collider2D>);
	}

	[Token(Token = "0x6000BB7")]
	[Address(RVA = "0x4A135D0", Offset = "0x4A135D0", VA = "0x4A135D0")]
	public UniTask<Collider2D> OnTriggerEnter2DAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collider2D>);
	}

	[Token(Token = "0x6000BB8")]
	[Address(RVA = "0x4A136E0", Offset = "0x4A136E0", VA = "0x4A136E0")]
	public AsyncTriggerEnter2DTrigger()
	{
	}
}
