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
	[Address(RVA = "0x62FFFA0", Offset = "0x62FEFA0", VA = "0x62FFFA0")]
	private void OnServerInitialized()
	{
	}

	[Token(Token = "0x6000BBC")]
	[Address(RVA = "0x6300010", Offset = "0x62FF010", VA = "0x6300010")]
	public IAsyncOnServerInitializedHandler GetOnServerInitializedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BBD")]
	[Address(RVA = "0x6300080", Offset = "0x62FF080", VA = "0x6300080")]
	public IAsyncOnServerInitializedHandler GetOnServerInitializedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BBE")]
	[Address(RVA = "0x63000F0", Offset = "0x62FF0F0", VA = "0x63000F0")]
	public UniTask OnServerInitializedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BBF")]
	[Address(RVA = "0x63001E0", Offset = "0x62FF1E0", VA = "0x63001E0")]
	public UniTask OnServerInitializedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BC0")]
	[Address(RVA = "0x63002D0", Offset = "0x62FF2D0", VA = "0x63002D0")]
	public AsyncServerInitializedTrigger()
	{
	}
}
