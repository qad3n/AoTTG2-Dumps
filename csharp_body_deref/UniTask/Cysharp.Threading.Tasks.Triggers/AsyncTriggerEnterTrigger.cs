// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncTriggerEnterTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001F3")]
[DisallowMultipleComponent]
public sealed class AsyncTriggerEnterTrigger : AsyncTriggerBase<Collider>
{
	[Token(Token = "0x6000BD0")]
	[Address(RVA = "0x2939D40", Offset = "0x2938340", VA = "0x182939D40")]
	private void OnTriggerEnter(Collider other)
	{
	}

	[Token(Token = "0x6000BD1")]
	[Address(RVA = "0x2939A20", Offset = "0x2938020", VA = "0x182939A20")]
	public IAsyncOnTriggerEnterHandler GetOnTriggerEnterAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BD2")]
	[Address(RVA = "0x2939A90", Offset = "0x2938090", VA = "0x182939A90")]
	public IAsyncOnTriggerEnterHandler GetOnTriggerEnterAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BD3")]
	[Address(RVA = "0x2939B10", Offset = "0x2938110", VA = "0x182939B10")]
	public UniTask<Collider> OnTriggerEnterAsync()
	{
		return default(UniTask<Collider>);
	}

	[Token(Token = "0x6000BD4")]
	[Address(RVA = "0x2939C30", Offset = "0x2938230", VA = "0x182939C30")]
	public UniTask<Collider> OnTriggerEnterAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collider>);
	}

	[Token(Token = "0x6000BD5")]
	[Address(RVA = "0x2939D90", Offset = "0x2938390", VA = "0x182939D90")]
	public AsyncTriggerEnterTrigger()
	{
	}
}
