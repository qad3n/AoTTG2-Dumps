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

[Token(Token = "0x20001A8")]
[DisallowMultipleComponent]
public sealed class AsyncOnCanvasGroupChangedTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000AB0")]
	[Address(RVA = "0x4A0B370", Offset = "0x4A0B370", VA = "0x4A0B370")]
	private void OnCanvasGroupChanged()
	{
	}

	[Token(Token = "0x6000AB1")]
	[Address(RVA = "0x4A0B3E0", Offset = "0x4A0B3E0", VA = "0x4A0B3E0")]
	public IAsyncOnCanvasGroupChangedHandler GetOnCanvasGroupChangedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AB2")]
	[Address(RVA = "0x4A0B450", Offset = "0x4A0B450", VA = "0x4A0B450")]
	public IAsyncOnCanvasGroupChangedHandler GetOnCanvasGroupChangedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x4A0B4C0", Offset = "0x4A0B4C0", VA = "0x4A0B4C0")]
	public UniTask OnCanvasGroupChangedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AB4")]
	[Address(RVA = "0x4A0B5B0", Offset = "0x4A0B5B0", VA = "0x4A0B5B0")]
	public UniTask OnCanvasGroupChangedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AB5")]
	[Address(RVA = "0x4A0B6A0", Offset = "0x4A0B6A0", VA = "0x4A0B6A0")]
	public AsyncOnCanvasGroupChangedTrigger()
	{
	}
}
