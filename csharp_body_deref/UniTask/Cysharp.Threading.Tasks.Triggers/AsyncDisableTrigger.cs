// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncDisableTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001B8")]
[DisallowMultipleComponent]
public sealed class AsyncDisableTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000AE8")]
	[Address(RVA = "0x4A0CF60", Offset = "0x4A0CF60", VA = "0x4A0CF60")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000AE9")]
	[Address(RVA = "0x4A0CFD0", Offset = "0x4A0CFD0", VA = "0x4A0CFD0")]
	public IAsyncOnDisableHandler GetOnDisableAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AEA")]
	[Address(RVA = "0x4A0D040", Offset = "0x4A0D040", VA = "0x4A0D040")]
	public IAsyncOnDisableHandler GetOnDisableAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AEB")]
	[Address(RVA = "0x4A0D0B0", Offset = "0x4A0D0B0", VA = "0x4A0D0B0")]
	public UniTask OnDisableAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AEC")]
	[Address(RVA = "0x4A0D1A0", Offset = "0x4A0D1A0", VA = "0x4A0D1A0")]
	public UniTask OnDisableAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AED")]
	[Address(RVA = "0x4A0D290", Offset = "0x4A0D290", VA = "0x4A0D290")]
	public AsyncDisableTrigger()
	{
	}
}
