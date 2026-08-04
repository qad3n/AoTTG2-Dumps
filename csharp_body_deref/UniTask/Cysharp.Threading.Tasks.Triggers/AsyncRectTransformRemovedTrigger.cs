// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncRectTransformRemovedTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001E4")]
[DisallowMultipleComponent]
public sealed class AsyncRectTransformRemovedTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B82")]
	[Address(RVA = "0x4A11B30", Offset = "0x4A11B30", VA = "0x4A11B30")]
	private void OnRectTransformRemoved()
	{
	}

	[Token(Token = "0x6000B83")]
	[Address(RVA = "0x4A11BA0", Offset = "0x4A11BA0", VA = "0x4A11BA0")]
	public IAsyncOnRectTransformRemovedHandler GetOnRectTransformRemovedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B84")]
	[Address(RVA = "0x4A11C10", Offset = "0x4A11C10", VA = "0x4A11C10")]
	public IAsyncOnRectTransformRemovedHandler GetOnRectTransformRemovedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B85")]
	[Address(RVA = "0x4A11C80", Offset = "0x4A11C80", VA = "0x4A11C80")]
	public UniTask OnRectTransformRemovedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B86")]
	[Address(RVA = "0x4A11D70", Offset = "0x4A11D70", VA = "0x4A11D70")]
	public UniTask OnRectTransformRemovedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B87")]
	[Address(RVA = "0x4A11E60", Offset = "0x4A11E60", VA = "0x4A11E60")]
	public AsyncRectTransformRemovedTrigger()
	{
	}
}
