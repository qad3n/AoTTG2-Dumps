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
	[Address(RVA = "0x292CC20", Offset = "0x292B220", VA = "0x18292CC20")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000B0D")]
	[Address(RVA = "0x292C910", Offset = "0x292AF10", VA = "0x18292C910")]
	public IAsyncOnDisableHandler GetOnDisableAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B0E")]
	[Address(RVA = "0x292C980", Offset = "0x292AF80", VA = "0x18292C980")]
	public IAsyncOnDisableHandler GetOnDisableAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B0F")]
	[Address(RVA = "0x292CB10", Offset = "0x292B110", VA = "0x18292CB10")]
	public UniTask OnDisableAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B10")]
	[Address(RVA = "0x292CA00", Offset = "0x292B000", VA = "0x18292CA00")]
	public UniTask OnDisableAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B11")]
	[Address(RVA = "0x292CC90", Offset = "0x292B290", VA = "0x18292CC90")]
	public AsyncDisableTrigger()
	{
	}
}
