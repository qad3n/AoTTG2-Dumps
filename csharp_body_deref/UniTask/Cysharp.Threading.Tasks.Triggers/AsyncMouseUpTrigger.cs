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
	[Address(RVA = "0x62FD260", Offset = "0x62FC260", VA = "0x62FD260")]
	private void OnMouseUp()
	{
	}

	[Token(Token = "0x6000B61")]
	[Address(RVA = "0x62FD2D0", Offset = "0x62FC2D0", VA = "0x62FD2D0")]
	public IAsyncOnMouseUpHandler GetOnMouseUpAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B62")]
	[Address(RVA = "0x62FD340", Offset = "0x62FC340", VA = "0x62FD340")]
	public IAsyncOnMouseUpHandler GetOnMouseUpAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x62FD3B0", Offset = "0x62FC3B0", VA = "0x62FD3B0")]
	public UniTask OnMouseUpAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x62FD4A0", Offset = "0x62FC4A0", VA = "0x62FD4A0")]
	public UniTask OnMouseUpAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B65")]
	[Address(RVA = "0x62FD590", Offset = "0x62FC590", VA = "0x62FD590")]
	public AsyncMouseUpTrigger()
	{
	}
}
