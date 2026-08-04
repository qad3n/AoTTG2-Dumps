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

[Token(Token = "0x20001FA")]
[DisallowMultipleComponent]
public sealed class AsyncTriggerStay2DTrigger : AsyncTriggerBase<Collider2D>
{
	[Token(Token = "0x6000BCF")]
	[Address(RVA = "0x4A141A0", Offset = "0x4A141A0", VA = "0x4A141A0")]
	private void OnTriggerStay2D(Collider2D other)
	{
	}

	[Token(Token = "0x6000BD0")]
	[Address(RVA = "0x4A141F0", Offset = "0x4A141F0", VA = "0x4A141F0")]
	public IAsyncOnTriggerStay2DHandler GetOnTriggerStay2DAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BD1")]
	[Address(RVA = "0x4A14260", Offset = "0x4A14260", VA = "0x4A14260")]
	public IAsyncOnTriggerStay2DHandler GetOnTriggerStay2DAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BD2")]
	[Address(RVA = "0x4A142D0", Offset = "0x4A142D0", VA = "0x4A142D0")]
	public UniTask<Collider2D> OnTriggerStay2DAsync()
	{
		return default(UniTask<Collider2D>);
	}

	[Token(Token = "0x6000BD3")]
	[Address(RVA = "0x4A143D0", Offset = "0x4A143D0", VA = "0x4A143D0")]
	public UniTask<Collider2D> OnTriggerStay2DAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collider2D>);
	}

	[Token(Token = "0x6000BD4")]
	[Address(RVA = "0x4A144E0", Offset = "0x4A144E0", VA = "0x4A144E0")]
	public AsyncTriggerStay2DTrigger()
	{
	}
}
