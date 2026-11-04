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
	[Address(RVA = "0x2932650", Offset = "0x2930C50", VA = "0x182932650")]
	private void OnMouseUpAsButton()
	{
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x2932340", Offset = "0x2930940", VA = "0x182932340")]
	public IAsyncOnMouseUpAsButtonHandler GetOnMouseUpAsButtonAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x29323B0", Offset = "0x29309B0", VA = "0x1829323B0")]
	public IAsyncOnMouseUpAsButtonHandler GetOnMouseUpAsButtonAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x2932430", Offset = "0x2930A30", VA = "0x182932430")]
	public UniTask OnMouseUpAsButtonAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B6B")]
	[Address(RVA = "0x2932540", Offset = "0x2930B40", VA = "0x182932540")]
	public UniTask OnMouseUpAsButtonAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B6C")]
	[Address(RVA = "0x29326C0", Offset = "0x2930CC0", VA = "0x1829326C0")]
	public AsyncMouseUpAsButtonTrigger()
	{
	}
}
