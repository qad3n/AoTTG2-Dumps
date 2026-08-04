// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncEnableTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001BE")]
[DisallowMultipleComponent]
public sealed class AsyncEnableTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000AFD")]
	[Address(RVA = "0x4A0D9B0", Offset = "0x4A0D9B0", VA = "0x4A0D9B0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000AFE")]
	[Address(RVA = "0x4A0DA20", Offset = "0x4A0DA20", VA = "0x4A0DA20")]
	public IAsyncOnEnableHandler GetOnEnableAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AFF")]
	[Address(RVA = "0x4A0DA90", Offset = "0x4A0DA90", VA = "0x4A0DA90")]
	public IAsyncOnEnableHandler GetOnEnableAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B00")]
	[Address(RVA = "0x4A0DB00", Offset = "0x4A0DB00", VA = "0x4A0DB00")]
	public UniTask OnEnableAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B01")]
	[Address(RVA = "0x4A0DBF0", Offset = "0x4A0DBF0", VA = "0x4A0DBF0")]
	public UniTask OnEnableAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B02")]
	[Address(RVA = "0x4A0DCE0", Offset = "0x4A0DCE0", VA = "0x4A0DCE0")]
	public AsyncEnableTrigger()
	{
	}
}
