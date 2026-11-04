// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncServerInitializedTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001ED")]
[DisallowMultipleComponent]
public sealed class AsyncServerInitializedTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000BBB")]
	[Address(RVA = "0x2938870", Offset = "0x2936E70", VA = "0x182938870")]
	private void OnServerInitialized()
	{
	}

	[Token(Token = "0x6000BBC")]
	[Address(RVA = "0x29385E0", Offset = "0x2936BE0", VA = "0x1829385E0")]
	public IAsyncOnServerInitializedHandler GetOnServerInitializedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BBD")]
	[Address(RVA = "0x2938560", Offset = "0x2936B60", VA = "0x182938560")]
	public IAsyncOnServerInitializedHandler GetOnServerInitializedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BBE")]
	[Address(RVA = "0x2938760", Offset = "0x2936D60", VA = "0x182938760")]
	public UniTask OnServerInitializedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BBF")]
	[Address(RVA = "0x2938650", Offset = "0x2936C50", VA = "0x182938650")]
	public UniTask OnServerInitializedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BC0")]
	[Address(RVA = "0x29388E0", Offset = "0x2936EE0", VA = "0x1829388E0")]
	public AsyncServerInitializedTrigger()
	{
	}
}
