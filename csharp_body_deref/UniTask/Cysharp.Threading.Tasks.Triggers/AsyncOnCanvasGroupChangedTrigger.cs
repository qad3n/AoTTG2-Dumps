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
	[Address(RVA = "0x2933180", Offset = "0x2931780", VA = "0x182933180")]
	private void OnCanvasGroupChanged()
	{
	}

	[Token(Token = "0x6000AD5")]
	[Address(RVA = "0x2932E70", Offset = "0x2931470", VA = "0x182932E70")]
	public IAsyncOnCanvasGroupChangedHandler GetOnCanvasGroupChangedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AD6")]
	[Address(RVA = "0x2932EE0", Offset = "0x29314E0", VA = "0x182932EE0")]
	public IAsyncOnCanvasGroupChangedHandler GetOnCanvasGroupChangedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AD7")]
	[Address(RVA = "0x2933070", Offset = "0x2931670", VA = "0x182933070")]
	public UniTask OnCanvasGroupChangedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AD8")]
	[Address(RVA = "0x2932F60", Offset = "0x2931560", VA = "0x182932F60")]
	public UniTask OnCanvasGroupChangedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AD9")]
	[Address(RVA = "0x29331F0", Offset = "0x29317F0", VA = "0x1829331F0")]
	public AsyncOnCanvasGroupChangedTrigger()
	{
	}
}
