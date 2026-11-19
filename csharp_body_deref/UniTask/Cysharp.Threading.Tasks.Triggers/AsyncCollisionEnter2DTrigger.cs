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

[Token(Token = "0x20001AF")]
[DisallowMultipleComponent]
public sealed class AsyncCollisionEnter2DTrigger : AsyncTriggerBase<Collision2D>
{
	[Token(Token = "0x6000AE2")]
	[Address(RVA = "0x62F9430", Offset = "0x62F8430", VA = "0x62F9430")]
	private void OnCollisionEnter2D(Collision2D coll)
	{
	}

	[Token(Token = "0x6000AE3")]
	[Address(RVA = "0x62F9480", Offset = "0x62F8480", VA = "0x62F9480")]
	public IAsyncOnCollisionEnter2DHandler GetOnCollisionEnter2DAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AE4")]
	[Address(RVA = "0x62F94F0", Offset = "0x62F84F0", VA = "0x62F94F0")]
	public IAsyncOnCollisionEnter2DHandler GetOnCollisionEnter2DAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AE5")]
	[Address(RVA = "0x62F9560", Offset = "0x62F8560", VA = "0x62F9560")]
	public UniTask<Collision2D> OnCollisionEnter2DAsync()
	{
		return default(UniTask<Collision2D>);
	}

	[Token(Token = "0x6000AE6")]
	[Address(RVA = "0x62F9660", Offset = "0x62F8660", VA = "0x62F9660")]
	public UniTask<Collision2D> OnCollisionEnter2DAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collision2D>);
	}

	[Token(Token = "0x6000AE7")]
	[Address(RVA = "0x62F9770", Offset = "0x62F8770", VA = "0x62F9770")]
	public AsyncCollisionEnter2DTrigger()
	{
	}
}
