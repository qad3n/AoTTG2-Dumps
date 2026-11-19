// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncMouseDownTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001C9")]
[DisallowMultipleComponent]
public sealed class AsyncMouseDownTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x62FC130", Offset = "0x62FB130", VA = "0x62FC130")]
	private void OnMouseDown()
	{
	}

	[Token(Token = "0x6000B3E")]
	[Address(RVA = "0x62FC1A0", Offset = "0x62FB1A0", VA = "0x62FC1A0")]
	public IAsyncOnMouseDownHandler GetOnMouseDownAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B3F")]
	[Address(RVA = "0x62FC210", Offset = "0x62FB210", VA = "0x62FC210")]
	public IAsyncOnMouseDownHandler GetOnMouseDownAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B40")]
	[Address(RVA = "0x62FC280", Offset = "0x62FB280", VA = "0x62FC280")]
	public UniTask OnMouseDownAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B41")]
	[Address(RVA = "0x62FC370", Offset = "0x62FB370", VA = "0x62FC370")]
	public UniTask OnMouseDownAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B42")]
	[Address(RVA = "0x62FC460", Offset = "0x62FB460", VA = "0x62FC460")]
	public AsyncMouseDownTrigger()
	{
	}
}
