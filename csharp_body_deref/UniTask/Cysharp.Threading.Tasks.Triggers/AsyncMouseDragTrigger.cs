// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncMouseDragTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001CB")]
[DisallowMultipleComponent]
public sealed class AsyncMouseDragTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B44")]
	[Address(RVA = "0x2931750", Offset = "0x292FD50", VA = "0x182931750")]
	private void OnMouseDrag()
	{
	}

	[Token(Token = "0x6000B45")]
	[Address(RVA = "0x2931440", Offset = "0x292FA40", VA = "0x182931440")]
	public IAsyncOnMouseDragHandler GetOnMouseDragAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B46")]
	[Address(RVA = "0x29314B0", Offset = "0x292FAB0", VA = "0x1829314B0")]
	public IAsyncOnMouseDragHandler GetOnMouseDragAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x2931530", Offset = "0x292FB30", VA = "0x182931530")]
	public UniTask OnMouseDragAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B48")]
	[Address(RVA = "0x2931640", Offset = "0x292FC40", VA = "0x182931640")]
	public UniTask OnMouseDragAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B49")]
	[Address(RVA = "0x29317C0", Offset = "0x292FDC0", VA = "0x1829317C0")]
	public AsyncMouseDragTrigger()
	{
	}
}
