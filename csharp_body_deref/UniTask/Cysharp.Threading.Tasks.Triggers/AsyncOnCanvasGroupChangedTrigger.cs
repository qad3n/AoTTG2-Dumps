// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncOnCanvasGroupChangedTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001AB")]
[DisallowMultipleComponent]
public sealed class AsyncOnCanvasGroupChangedTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000AD4")]
	[Address(RVA = "0x62F8D40", Offset = "0x62F7D40", VA = "0x62F8D40")]
	private void OnCanvasGroupChanged()
	{
	}

	[Token(Token = "0x6000AD5")]
	[Address(RVA = "0x62F8DB0", Offset = "0x62F7DB0", VA = "0x62F8DB0")]
	public IAsyncOnCanvasGroupChangedHandler GetOnCanvasGroupChangedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AD6")]
	[Address(RVA = "0x62F8E20", Offset = "0x62F7E20", VA = "0x62F8E20")]
	public IAsyncOnCanvasGroupChangedHandler GetOnCanvasGroupChangedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AD7")]
	[Address(RVA = "0x62F8E90", Offset = "0x62F7E90", VA = "0x62F8E90")]
	public UniTask OnCanvasGroupChangedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AD8")]
	[Address(RVA = "0x62F8F80", Offset = "0x62F7F80", VA = "0x62F8F80")]
	public UniTask OnCanvasGroupChangedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AD9")]
	[Address(RVA = "0x62F9070", Offset = "0x62F8070", VA = "0x62F9070")]
	public AsyncOnCanvasGroupChangedTrigger()
	{
	}
}
