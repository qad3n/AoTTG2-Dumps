// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncRectTransformDimensionsChangeTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001E5")]
[DisallowMultipleComponent]
public sealed class AsyncRectTransformDimensionsChangeTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B9F")]
	[Address(RVA = "0x2936E20", Offset = "0x2935420", VA = "0x182936E20")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000BA0")]
	[Address(RVA = "0x2936B10", Offset = "0x2935110", VA = "0x182936B10")]
	public IAsyncOnRectTransformDimensionsChangeHandler GetOnRectTransformDimensionsChangeAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BA1")]
	[Address(RVA = "0x2936B80", Offset = "0x2935180", VA = "0x182936B80")]
	public IAsyncOnRectTransformDimensionsChangeHandler GetOnRectTransformDimensionsChangeAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x2936C00", Offset = "0x2935200", VA = "0x182936C00")]
	public UniTask OnRectTransformDimensionsChangeAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x2936D10", Offset = "0x2935310", VA = "0x182936D10")]
	public UniTask OnRectTransformDimensionsChangeAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BA4")]
	[Address(RVA = "0x2936E90", Offset = "0x2935490", VA = "0x182936E90")]
	public AsyncRectTransformDimensionsChangeTrigger()
	{
	}
}
