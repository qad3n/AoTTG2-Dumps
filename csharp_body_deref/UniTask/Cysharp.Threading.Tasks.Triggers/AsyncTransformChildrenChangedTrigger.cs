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

[Token(Token = "0x20001EF")]
[DisallowMultipleComponent]
public sealed class AsyncTransformChildrenChangedTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x2939200", Offset = "0x2937800", VA = "0x182939200")]
	private void OnTransformChildrenChanged()
	{
	}

	[Token(Token = "0x6000BC3")]
	[Address(RVA = "0x2938EF0", Offset = "0x29374F0", VA = "0x182938EF0")]
	public IAsyncOnTransformChildrenChangedHandler GetOnTransformChildrenChangedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x2938F60", Offset = "0x2937560", VA = "0x182938F60")]
	public IAsyncOnTransformChildrenChangedHandler GetOnTransformChildrenChangedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x29390F0", Offset = "0x29376F0", VA = "0x1829390F0")]
	public UniTask OnTransformChildrenChangedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x2938FE0", Offset = "0x29375E0", VA = "0x182938FE0")]
	public UniTask OnTransformChildrenChangedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x2939270", Offset = "0x2937870", VA = "0x182939270")]
	public AsyncTransformChildrenChangedTrigger()
	{
	}
}
