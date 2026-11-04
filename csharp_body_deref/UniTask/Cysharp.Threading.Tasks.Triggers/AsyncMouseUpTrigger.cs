// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncMouseUpTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001D3")]
[DisallowMultipleComponent]
public sealed class AsyncMouseUpTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B60")]
	[Address(RVA = "0x2932A10", Offset = "0x2931010", VA = "0x182932A10")]
	private void OnMouseUp()
	{
	}

	[Token(Token = "0x6000B61")]
	[Address(RVA = "0x2932780", Offset = "0x2930D80", VA = "0x182932780")]
	public IAsyncOnMouseUpHandler GetOnMouseUpAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B62")]
	[Address(RVA = "0x2932700", Offset = "0x2930D00", VA = "0x182932700")]
	public IAsyncOnMouseUpHandler GetOnMouseUpAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x2932900", Offset = "0x2930F00", VA = "0x182932900")]
	public UniTask OnMouseUpAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x29327F0", Offset = "0x2930DF0", VA = "0x1829327F0")]
	public UniTask OnMouseUpAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B65")]
	[Address(RVA = "0x2932A80", Offset = "0x2931080", VA = "0x182932A80")]
	public AsyncMouseUpTrigger()
	{
	}
}
