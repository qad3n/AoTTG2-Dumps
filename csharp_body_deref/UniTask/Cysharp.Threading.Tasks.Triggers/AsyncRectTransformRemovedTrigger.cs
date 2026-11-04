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
	[Address(RVA = "0x29371E0", Offset = "0x29357E0", VA = "0x1829371E0")]
	private void OnRectTransformRemoved()
	{
	}

	[Token(Token = "0x6000BA7")]
	[Address(RVA = "0x2936F50", Offset = "0x2935550", VA = "0x182936F50")]
	public IAsyncOnRectTransformRemovedHandler GetOnRectTransformRemovedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BA8")]
	[Address(RVA = "0x2936ED0", Offset = "0x29354D0", VA = "0x182936ED0")]
	public IAsyncOnRectTransformRemovedHandler GetOnRectTransformRemovedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BA9")]
	[Address(RVA = "0x2936FC0", Offset = "0x29355C0", VA = "0x182936FC0")]
	public UniTask OnRectTransformRemovedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BAA")]
	[Address(RVA = "0x29370D0", Offset = "0x29356D0", VA = "0x1829370D0")]
	public UniTask OnRectTransformRemovedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BAB")]
	[Address(RVA = "0x2937250", Offset = "0x2935850", VA = "0x182937250")]
	public AsyncRectTransformRemovedTrigger()
	{
	}
}
