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

[Token(Token = "0x20001EA")]
[DisallowMultipleComponent]
public sealed class AsyncServerInitializedTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B97")]
	[Address(RVA = "0x4A125D0", Offset = "0x4A125D0", VA = "0x4A125D0")]
	private void OnServerInitialized()
	{
	}

	[Token(Token = "0x6000B98")]
	[Address(RVA = "0x4A12640", Offset = "0x4A12640", VA = "0x4A12640")]
	public IAsyncOnServerInitializedHandler GetOnServerInitializedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B99")]
	[Address(RVA = "0x4A126B0", Offset = "0x4A126B0", VA = "0x4A126B0")]
	public IAsyncOnServerInitializedHandler GetOnServerInitializedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B9A")]
	[Address(RVA = "0x4A12720", Offset = "0x4A12720", VA = "0x4A12720")]
	public UniTask OnServerInitializedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B9B")]
	[Address(RVA = "0x4A12810", Offset = "0x4A12810", VA = "0x4A12810")]
	public UniTask OnServerInitializedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x4A12900", Offset = "0x4A12900", VA = "0x4A12900")]
	public AsyncServerInitializedTrigger()
	{
	}
}
