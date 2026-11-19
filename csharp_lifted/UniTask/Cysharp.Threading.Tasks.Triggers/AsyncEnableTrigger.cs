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

[Token(Token = "0x20001C1")]
[DisallowMultipleComponent]
public sealed class AsyncEnableTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x62FB380", Offset = "0x62FA380", VA = "0x62FB380")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x62FB3F0", Offset = "0x62FA3F0", VA = "0x62FB3F0")]
	public IAsyncOnEnableHandler GetOnEnableAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x62FB460", Offset = "0x62FA460", VA = "0x62FB460")]
	public IAsyncOnEnableHandler GetOnEnableAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x62FB4D0", Offset = "0x62FA4D0", VA = "0x62FB4D0")]
	public UniTask OnEnableAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x62FB5C0", Offset = "0x62FA5C0", VA = "0x62FB5C0")]
	public UniTask OnEnableAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x62FB6B0", Offset = "0x62FA6B0", VA = "0x62FB6B0")]
	public AsyncEnableTrigger()
	{
	}
}
