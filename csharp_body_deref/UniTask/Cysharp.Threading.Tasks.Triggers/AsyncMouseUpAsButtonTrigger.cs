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

[Token(Token = "0x20001D2")]
[DisallowMultipleComponent]
public sealed class AsyncMouseUpAsButtonTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B43")]
	[Address(RVA = "0x4A0FC00", Offset = "0x4A0FC00", VA = "0x4A0FC00")]
	private void OnMouseUpAsButton()
	{
	}

	[Token(Token = "0x6000B44")]
	[Address(RVA = "0x4A0FC70", Offset = "0x4A0FC70", VA = "0x4A0FC70")]
	public IAsyncOnMouseUpAsButtonHandler GetOnMouseUpAsButtonAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B45")]
	[Address(RVA = "0x4A0FCE0", Offset = "0x4A0FCE0", VA = "0x4A0FCE0")]
	public IAsyncOnMouseUpAsButtonHandler GetOnMouseUpAsButtonAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B46")]
	[Address(RVA = "0x4A0FD50", Offset = "0x4A0FD50", VA = "0x4A0FD50")]
	public UniTask OnMouseUpAsButtonAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x4A0FE40", Offset = "0x4A0FE40", VA = "0x4A0FE40")]
	public UniTask OnMouseUpAsButtonAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B48")]
	[Address(RVA = "0x4A0FF30", Offset = "0x4A0FF30", VA = "0x4A0FF30")]
	public AsyncMouseUpAsButtonTrigger()
	{
	}
}
