// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncTransformChildrenChangedTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001EC")]
[DisallowMultipleComponent]
public sealed class AsyncTransformChildrenChangedTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B9E")]
	[Address(RVA = "0x4A12940", Offset = "0x4A12940", VA = "0x4A12940")]
	private void OnTransformChildrenChanged()
	{
	}

	[Token(Token = "0x6000B9F")]
	[Address(RVA = "0x4A129B0", Offset = "0x4A129B0", VA = "0x4A129B0")]
	public IAsyncOnTransformChildrenChangedHandler GetOnTransformChildrenChangedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BA0")]
	[Address(RVA = "0x4A12A20", Offset = "0x4A12A20", VA = "0x4A12A20")]
	public IAsyncOnTransformChildrenChangedHandler GetOnTransformChildrenChangedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BA1")]
	[Address(RVA = "0x4A12A90", Offset = "0x4A12A90", VA = "0x4A12A90")]
	public UniTask OnTransformChildrenChangedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x4A12B80", Offset = "0x4A12B80", VA = "0x4A12B80")]
	public UniTask OnTransformChildrenChangedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x4A12C70", Offset = "0x4A12C70", VA = "0x4A12C70")]
	public AsyncTransformChildrenChangedTrigger()
	{
	}
}
