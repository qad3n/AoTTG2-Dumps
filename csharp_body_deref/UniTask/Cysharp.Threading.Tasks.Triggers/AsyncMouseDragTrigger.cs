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

[Token(Token = "0x20001C8")]
[DisallowMultipleComponent]
public sealed class AsyncMouseDragTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x4A0EAD0", Offset = "0x4A0EAD0", VA = "0x4A0EAD0")]
	private void OnMouseDrag()
	{
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x4A0EB40", Offset = "0x4A0EB40", VA = "0x4A0EB40")]
	public IAsyncOnMouseDragHandler GetOnMouseDragAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x4A0EBB0", Offset = "0x4A0EBB0", VA = "0x4A0EBB0")]
	public IAsyncOnMouseDragHandler GetOnMouseDragAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x4A0EC20", Offset = "0x4A0EC20", VA = "0x4A0EC20")]
	public UniTask OnMouseDragAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x4A0ED10", Offset = "0x4A0ED10", VA = "0x4A0ED10")]
	public UniTask OnMouseDragAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x4A0EE00", Offset = "0x4A0EE00", VA = "0x4A0EE00")]
	public AsyncMouseDragTrigger()
	{
	}
}
