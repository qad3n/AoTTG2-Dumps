// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncMouseUpAsButtonTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001D5")]
[DisallowMultipleComponent]
public sealed class AsyncMouseUpAsButtonTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x62FD5D0", Offset = "0x62FC5D0", VA = "0x62FD5D0")]
	private void OnMouseUpAsButton()
	{
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x62FD640", Offset = "0x62FC640", VA = "0x62FD640")]
	public IAsyncOnMouseUpAsButtonHandler GetOnMouseUpAsButtonAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x62FD6B0", Offset = "0x62FC6B0", VA = "0x62FD6B0")]
	public IAsyncOnMouseUpAsButtonHandler GetOnMouseUpAsButtonAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x62FD720", Offset = "0x62FC720", VA = "0x62FD720")]
	public UniTask OnMouseUpAsButtonAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B6B")]
	[Address(RVA = "0x62FD810", Offset = "0x62FC810", VA = "0x62FD810")]
	public UniTask OnMouseUpAsButtonAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B6C")]
	[Address(RVA = "0x62FD900", Offset = "0x62FC900", VA = "0x62FD900")]
	public AsyncMouseUpAsButtonTrigger()
	{
	}
}
