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

[Token(Token = "0x20001E7")]
[DisallowMultipleComponent]
public sealed class AsyncRectTransformRemovedTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000BA6")]
	[Address(RVA = "0x62FF500", Offset = "0x62FE500", VA = "0x62FF500")]
	private void OnRectTransformRemoved()
	{
	}

	[Token(Token = "0x6000BA7")]
	[Address(RVA = "0x62FF570", Offset = "0x62FE570", VA = "0x62FF570")]
	public IAsyncOnRectTransformRemovedHandler GetOnRectTransformRemovedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BA8")]
	[Address(RVA = "0x62FF5E0", Offset = "0x62FE5E0", VA = "0x62FF5E0")]
	public IAsyncOnRectTransformRemovedHandler GetOnRectTransformRemovedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BA9")]
	[Address(RVA = "0x62FF650", Offset = "0x62FE650", VA = "0x62FF650")]
	public UniTask OnRectTransformRemovedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BAA")]
	[Address(RVA = "0x62FF740", Offset = "0x62FE740", VA = "0x62FF740")]
	public UniTask OnRectTransformRemovedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BAB")]
	[Address(RVA = "0x62FF830", Offset = "0x62FE830", VA = "0x62FF830")]
	public AsyncRectTransformRemovedTrigger()
	{
	}
}
