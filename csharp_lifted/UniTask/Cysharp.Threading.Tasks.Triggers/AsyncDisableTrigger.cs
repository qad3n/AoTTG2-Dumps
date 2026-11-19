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

[Token(Token = "0x20001BB")]
[DisallowMultipleComponent]
public sealed class AsyncDisableTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B0C")]
	[Address(RVA = "0x62FA930", Offset = "0x62F9930", VA = "0x62FA930")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000B0D")]
	[Address(RVA = "0x62FA9A0", Offset = "0x62F99A0", VA = "0x62FA9A0")]
	public IAsyncOnDisableHandler GetOnDisableAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B0E")]
	[Address(RVA = "0x62FAA10", Offset = "0x62F9A10", VA = "0x62FAA10")]
	public IAsyncOnDisableHandler GetOnDisableAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B0F")]
	[Address(RVA = "0x62FAA80", Offset = "0x62F9A80", VA = "0x62FAA80")]
	public UniTask OnDisableAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B10")]
	[Address(RVA = "0x62FAB70", Offset = "0x62F9B70", VA = "0x62FAB70")]
	public UniTask OnDisableAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B11")]
	[Address(RVA = "0x62FAC60", Offset = "0x62F9C60", VA = "0x62FAC60")]
	public AsyncDisableTrigger()
	{
	}
}
