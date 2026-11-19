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
	[Address(RVA = "0x62FC4A0", Offset = "0x62FB4A0", VA = "0x62FC4A0")]
	private void OnMouseDrag()
	{
	}

	[Token(Token = "0x6000B45")]
	[Address(RVA = "0x62FC510", Offset = "0x62FB510", VA = "0x62FC510")]
	public IAsyncOnMouseDragHandler GetOnMouseDragAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B46")]
	[Address(RVA = "0x62FC580", Offset = "0x62FB580", VA = "0x62FC580")]
	public IAsyncOnMouseDragHandler GetOnMouseDragAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x62FC5F0", Offset = "0x62FB5F0", VA = "0x62FC5F0")]
	public UniTask OnMouseDragAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B48")]
	[Address(RVA = "0x62FC6E0", Offset = "0x62FB6E0", VA = "0x62FC6E0")]
	public UniTask OnMouseDragAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B49")]
	[Address(RVA = "0x62FC7D0", Offset = "0x62FB7D0", VA = "0x62FC7D0")]
	public AsyncMouseDragTrigger()
	{
	}
}
