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
	[Address(RVA = "0x63009F0", Offset = "0x62FF9F0", VA = "0x63009F0")]
	private void OnTriggerEnter(Collider other)
	{
	}

	[Token(Token = "0x6000BD1")]
	[Address(RVA = "0x6300A40", Offset = "0x62FFA40", VA = "0x6300A40")]
	public IAsyncOnTriggerEnterHandler GetOnTriggerEnterAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BD2")]
	[Address(RVA = "0x6300AB0", Offset = "0x62FFAB0", VA = "0x6300AB0")]
	public IAsyncOnTriggerEnterHandler GetOnTriggerEnterAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BD3")]
	[Address(RVA = "0x6300B20", Offset = "0x62FFB20", VA = "0x6300B20")]
	public UniTask<Collider> OnTriggerEnterAsync()
	{
		return default(UniTask<Collider>);
	}

	[Token(Token = "0x6000BD4")]
	[Address(RVA = "0x6300C20", Offset = "0x62FFC20", VA = "0x6300C20")]
	public UniTask<Collider> OnTriggerEnterAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collider>);
	}

	[Token(Token = "0x6000BD5")]
	[Address(RVA = "0x6300D30", Offset = "0x62FFD30", VA = "0x6300D30")]
	public AsyncTriggerEnterTrigger()
	{
	}
}
