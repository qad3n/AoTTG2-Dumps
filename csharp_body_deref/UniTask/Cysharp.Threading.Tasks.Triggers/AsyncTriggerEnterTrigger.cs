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

[Token(Token = "0x20001F0")]
[DisallowMultipleComponent]
public sealed class AsyncTriggerEnterTrigger : AsyncTriggerBase<Collider>
{
	[Token(Token = "0x6000BAC")]
	[Address(RVA = "0x4A13020", Offset = "0x4A13020", VA = "0x4A13020")]
	private void OnTriggerEnter(Collider other)
	{
	}

	[Token(Token = "0x6000BAD")]
	[Address(RVA = "0x4A13070", Offset = "0x4A13070", VA = "0x4A13070")]
	public IAsyncOnTriggerEnterHandler GetOnTriggerEnterAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x4A130E0", Offset = "0x4A130E0", VA = "0x4A130E0")]
	public IAsyncOnTriggerEnterHandler GetOnTriggerEnterAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BAF")]
	[Address(RVA = "0x4A13150", Offset = "0x4A13150", VA = "0x4A13150")]
	public UniTask<Collider> OnTriggerEnterAsync()
	{
		return default(UniTask<Collider>);
	}

	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x4A13250", Offset = "0x4A13250", VA = "0x4A13250")]
	public UniTask<Collider> OnTriggerEnterAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collider>);
	}

	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x4A13360", Offset = "0x4A13360", VA = "0x4A13360")]
	public AsyncTriggerEnterTrigger()
	{
	}
}
